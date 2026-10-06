// Export approximate C pseudocode from exact function candidate ranges.
// No application code is executed. Original source code is not reconstructed.
// @category SnapSS06
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;

public class ExportShard extends GhidraScript {
    private static class Item {
        Address start, end;
        String label;
        Function function;
        String error;
    }
    private String clean(String value) {
        return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' ').replace("*/", "* /");
    }
    private String json(String value) {
        return "\"" + clean(value).replace("\\", "\\\\").replace("\"", "\\\"") + "\"";
    }
    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) throw new IllegalArgumentException("functions.tsv output-directory");
        Path output = Path.of(args[1]);
        Files.createDirectories(output);
        List<Item> items = new ArrayList<>();
        AddressSet starts = new AddressSet();
        AddressSet allowed = new AddressSet();
        for (String line : Files.readAllLines(Path.of(args[0]), StandardCharsets.UTF_8)) {
            String[] cols = line.split("\t",3);
            Item item = new Item();
            item.start = toAddr(Long.parseUnsignedLong(cols[0],16));
            item.end = toAddr(Long.parseUnsignedLong(cols[1],16)-1);
            item.label = cols.length == 3 ? cols[2] : "";
            items.add(item);
            starts.add(item.start);
            allowed.add(item.start,item.end);
        }
        println("Disassembling " + items.size() + " candidate functions");
        DisassembleCommand dis = new DisassembleCommand(starts, allowed, true);
        dis.applyTo(currentProgram, monitor);
        int prepared=0;
        for (Item item:items) {
            monitor.checkCancelled();
            try {
                if (currentProgram.getListing().getInstructionAt(item.start)==null)
                    throw new IllegalStateException("No instruction decoded at entry point");
                item.function=currentProgram.getFunctionManager().getFunctionAt(item.start);
                AddressSet body=new AddressSet(item.start,item.end);
                if (item.function==null)
                    item.function=currentProgram.getFunctionManager().createFunction(null,item.start,body,SourceType.ANALYSIS);
                else item.function.setBody(body);
                if(item.function==null) throw new IllegalStateException("Could not create function");
                prepared++;
            } catch(Exception ex) { item.error=clean(ex.toString()); }
        }
        println("Prepared " + prepared + " function bodies");
        DecompInterface decompiler=new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        decompiler.toggleSyntaxTree(false);
        decompiler.toggleCCode(true);
        decompiler.setSimplificationStyle("decompile");
        if(!decompiler.openProgram(currentProgram)) throw new IllegalStateException(decompiler.getLastMessage());
        int success=0,failed=0,chunkNumber=0,chunkCount=0,chunkChars=0;
        BufferedWriter code=null,index=null;
        String codePath="";
        List<String> indexLinks=new ArrayList<>();
        try {
            for (int n=0;n<items.size();n++) {
                monitor.checkCancelled();
                Item item=items.get(n);
                if(n%1000==0) {
                    if(index!=null) index.close();
                    String indexPath=String.format("index/%05d.tsv",n/1000);
                    Path ip=output.resolve(indexPath);
                    Files.createDirectories(ip.getParent());
                    index=Files.newBufferedWriter(ip,StandardCharsets.UTF_8);
                    index.write("address\tend_address\tstatus\tpseudocode_file\truntime_label\terror\n");
                    indexLinks.add("- ["+item.start+" — lot "+(n/1000)+"]("+indexPath+")");
                    println("Export progress "+n+"/"+items.size()+"; success="+success+"; failed="+failed);
                    decompiler.flushCache();
                }
                String text=null,error=item.error;
                if(error==null) {
                    try {
                        DecompileResults result=decompiler.decompileFunction(item.function,20,monitor);
                        if(result.decompileCompleted() && result.getDecompiledFunction()!=null)
                            text=result.getDecompiledFunction().getC();
                        else error=clean(result.getErrorMessage());
                    } catch(Exception ex) { error=clean(ex.toString()); }
                }
                String path="";
                if(text!=null && !text.isBlank()) {
                    if(code==null || chunkCount>=100 || chunkChars+text.length()>1500000) {
                        if(code!=null) code.close();
                        codePath=String.format("chunks/%03d/functions-%06d.c",chunkNumber/64,chunkNumber);
                        Path cp=output.resolve(codePath);
                        Files.createDirectories(cp.getParent());
                        code=Files.newBufferedWriter(cp,StandardCharsets.UTF_8);
                        code.write("/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.\n   Not the original source; not a compilable reconstruction. */\n\n");
                        chunkNumber++;chunkCount=0;chunkChars=0;
                    }
                    code.write("\n/* Entry: "+item.start+"; end: "+item.end+"; "+clean(item.label)+" */\n");
                    code.write(text);code.write("\n");
                    chunkChars+=text.length();chunkCount++;success++;
                    path=codePath;
                } else {failed++;if(error==null || error.isEmpty()) error="No C output";}
                index.write(item.start+"\t"+item.end+"\t"+(path.isEmpty()?"failed":"decompiled")+"\t"+path+"\t"+clean(item.label)+"\t"+clean(error)+"\n");
            }
        } finally {
            if(code!=null) code.close();
            if(index!=null) index.close();
            decompiler.dispose();
        }
        String summary="{\n  \"program\": "+json(currentProgram.getName())+",\n  \"requested\": "+items.size()+",\n  \"prepared\": "+prepared+",\n  \"decompiled\": "+success+",\n  \"failed\": "+failed+",\n  \"tool\": \"Ghidra 12.1.4\",\n  \"method\": \"Static per-range disassembly and decompilation; candidate entries from compact unwind, function starts and Objective-C metadata.\"\n}\n";
        Files.writeString(output.resolve("coverage.json"),summary,StandardCharsets.UTF_8);
        Files.writeString(output.resolve("README.md"),"# Pseudo-code Ghidra\n\n"+success+" fonctions décompilées sur "+items.size()+" entrées candidates. "+failed+" échecs documentés dans les index.\n\nLes types et limites de fonctions sont approximatifs. Aucun code de l’application n’est exécuté.\n\n## Index par adresse\n\n"+String.join("\n",indexLinks)+"\n",StandardCharsets.UTF_8);
        println(summary);
        if(success==0 && !items.isEmpty()) throw new IllegalStateException("No function could be decompiled");
    }
}
