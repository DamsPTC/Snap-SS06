/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10219d6b4; end: 10219d737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d6b4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10219d670();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e5f120) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e5f128) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10219d738; end: 10219d73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d738(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_10219d670();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e5f120) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e5f128) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10219d740; end: 10219d7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d740(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5f120) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5f128) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219d7a4; end: 10219d803; -[_TtC24SendFlowScopeGraphBridge32SendFlowScopeGraphBridgeServices init] */

void FUN_10219d7a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendFlowScopeGraphBridge.SendFlowScopeGraphBridgeServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219d7d0);
  (*pcVar1)();
}



/* Entry: 10219d804; end: 10219d87b; -[_TtC24SendFlowScopeGraphBridge32SendFlowScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010219d820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219d824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219d804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5f120));
  return;
}



/* Entry: 10219d87c; end: 10219d887;  */

void FUN_10219d87c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10219dc78,param_1);
  return;
}



/* Entry: 10219d888; end: 10219d913;  */

void FUN_10219d888(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10219dc80,0);
  return;
}



/* Entry: 10219d914; end: 10219d91f;  */

void FUN_10219d914(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10219d978,param_1);
  return;
}



/* Entry: 10219d920; end: 10219d977;  */

void FUN_10219d920(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10219d978; end: 10219d9ab;  */

void FUN_10219d978(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10219d9ac; end: 10219d9d7;  */

undefined8 FUN_10219d9ac(void)

{
  return 0x1b;
}



/* Entry: 10219d9d8; end: 10219da57;  */

void FUN_10219d9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 10219da58; end: 10219db4f;  */

void FUN_10219da58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e5f110,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5f110,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104d96f8;
  func_0x000107c613fc(&UNK_1104d96f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10219dc70;
  func_0x00010058fa64(0x10219dc70,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219db50; end: 10219db7b;  */

void FUN_10219db50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10219db7c; end: 10219db83;  */

void FUN_10219db7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e5f110,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5f110,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104d96f8;
  func_0x000107c613fc(&UNK_1104d96f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10219dc70;
  func_0x00010058fa64(0x10219dc70,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219db84; end: 10219dbdf;  */

void FUN_10219db84(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5f110,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5f110,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10219dbe0; end: 10219dc83;  */

undefined ** FUN_10219dbe0(void)

{
  return &PTR_DAT_112f9b1c8;
}



/* Entry: 10219dc84; end: 10219dccb; -[SCSendFlowScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219dc84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5f180;
  func_0x000107c61428(param_1 + _DAT_112e5f180,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10219dccc; end: 10219dd23; -[SCSendFlowScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219dccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5f180;
  func_0x000107c61428(param_1 + _DAT_112e5f180,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10219dd24; end: 10219dd6b; -[SCSendFlowScopeGraphBridgeSaberEntryPoint sCPreviewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219dd24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5f188;
  func_0x000107c61428(param_1 + _DAT_112e5f188,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10219dd6c; end: 10219dd77; -[SCSendFlowScopeGraphBridgeSaberEntryPoint setSCPreviewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219dd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5f188;
  func_0x000107c61428(param_1 + _DAT_112e5f188,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10219dd78; end: 10219ddbf; -[SCSendFlowScopeGraphBridgeSaberEntryPoint sCStoryQuickPostScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219dd78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5f190;
  func_0x000107c61428(param_1 + _DAT_112e5f190,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10219ddc0; end: 10219ddcb; -[SCSendFlowScopeGraphBridgeSaberEntryPoint setSCStoryQuickPostScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219ddc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5f190;
  func_0x000107c61428(param_1 + _DAT_112e5f190,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10219ddcc; end: 10219de13; -[SCSendFlowScopeGraphBridgeSaberEntryPoint sendFlowScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219ddcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5f198;
  func_0x000107c61428(param_1 + _DAT_112e5f198,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10219de14; end: 10219de1f; -[SCSendFlowScopeGraphBridgeSaberEntryPoint setSendFlowScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219de14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5f198;
  func_0x000107c61428(param_1 + _DAT_112e5f198,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10219de20; end: 10219de7f;  */

void FUN_10219de20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10219de80; end: 10219e0b7;  */

/* WARNING: Possible PIC construction at 0x00010219dfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219dffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219e018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219e028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219e044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219e08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219e02c) */
/* WARNING: Removing unreachable block (ram,0x00010219e01c) */
/* WARNING: Removing unreachable block (ram,0x00010219e000) */
/* WARNING: Removing unreachable block (ram,0x00010219dff0) */
/* WARNING: Removing unreachable block (ram,0x00010219e090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219de80(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c511cc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51474();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c51df4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_10219d328();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_10219d5a0();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10219e0b8);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e5f0a0) = lVar5;
        *(long *)(lVar4 + _DAT_112e5f0a8) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10219e0b8; end: 10219e0df; -[SCSendFlowScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10219e0b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10219de80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10219e0e0; end: 10219e123; -[SCSendFlowScopeGraphBridgeSaberEntryPoint end] */

void FUN_10219e0e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10219e124; end: 10219e393;  */

void FUN_10219e124(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0fb08b0)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010f04f750,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f96e20)) ||
           (func_0x000107c605b8(0xd00000000000001c,0x800000010f0691e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58a1c();
        }
        else {
          uVar2 = 0xd000000000000027;
          if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f96e00)) &&
             (func_0x000107c605b8(0xd000000000000027,0x800000010f069200,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SendFlowScopeGraphBridge/SCSendFlowScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x48,2,0x39,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10219e394);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58eb0();
        }
        goto LAB_10219e1b0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58774();
  }
LAB_10219e1b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10219e394; end: 10219e43f; -[SCSendFlowScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10219e394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10219e124(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10219e440; end: 10219e4c3; -[SCSendFlowScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219e440(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5f180,0);
  *(undefined8 *)(param_1 + _DAT_112e5f188) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5f190) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5f198) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5f1a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219e4c4; end: 10219e4f7;  */

void FUN_10219e4c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10219e4f8; end: 10219e55f; -[SCSendFlowScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010219e524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219e544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219e528) */
/* WARNING: Removing unreachable block (ram,0x00010219e548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219e4f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5f180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5f188));
  return;
}



/* Entry: 10219e560; end: 10219e57f;  */

void FUN_10219e560(void)

{
  func_0x000107c61168(&PTR_PTR_112823930);
  return;
}



/* Entry: 10219e580; end: 10219e5c7; -[SCSCSendFlowScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219e580(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5f1d0;
  func_0x000107c61428(param_1 + _DAT_112e5f1d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10219e5c8; end: 10219e61f; -[SCSCSendFlowScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219e5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5f1d0;
  func_0x000107c61428(param_1 + _DAT_112e5f1d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10219e620; end: 10219e6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219e620(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_10219d580();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5f0d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10219e6f8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5f0e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5f1d8);
    *(long **)(unaff_x20 + _DAT_112e5f1d8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10219e6f8; end: 10219e71f; -[SCSCSendFlowScopedServicesSaberEntryPoint begin] */

void FUN_10219e6f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10219e620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10219e720; end: 10219e897;  */

/* WARNING: Possible PIC construction at 0x00010219e788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010219e820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219e78c) */
/* WARNING: Removing unreachable block (ram,0x00010219e824) */
/* WARNING: Removing unreachable block (ram,0x00010219e83c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219e720(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5f1d8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10219e898; end: 10219e89f;  */

void FUN_10219e898(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10219e8a0; end: 10219e8d3; -[SCSCSendFlowScopedServicesSaberEntryPoint end] */

void FUN_10219e8a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10219e720();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10219e8d4; end: 10219e9f3;  */

void FUN_10219e8d4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "SendFlowScopeGraphBridge/SCSCSendFlowScopedServicesSaberEntryPoint.swift",
                        0x48,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10219e9f4);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10219e9f4; end: 10219ea9f; -[SCSCSendFlowScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10219e9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10219e8d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10219eaa0; end: 10219eaff; -[SCSCSendFlowScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219eaa0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5f1d0,0);
  *(undefined8 *)(param_1 + _DAT_112e5f1d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219eb00; end: 10219eb33;  */

void FUN_10219eb00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10219eb34; end: 10219eb6b; -[SCSCSendFlowScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219eb34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5f1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5f1d8));
  return;
}



/* Entry: 10219eb6c; end: 10219eb8b;  */

void FUN_10219eb6c(void)

{
  func_0x000107c61168(&PTR_PTR_112823a08);
  return;
}



/* Entry: 10219eb8c; end: 10219ebf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219eb8c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10219ef80();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e5f210) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10219ebf8; end: 10219ec63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219ebf8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5f210) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10219ec64; end: 10219ecc3; -[_TtC36SettingsScopedFactoryServiceProvider24SCSettingsScopedServices init] */

void FUN_10219ec64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SettingsScopedFactoryServiceProvider.SCSettingsScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10219ec90);
  (*pcVar1)();
}



/* Entry: 10219ecc4; end: 10219ecd3; -[_TtC36SettingsScopedFactoryServiceProvider24SCSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219ecc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5f210));
  return;
}



/* Entry: 10219ecd4; end: 10219ed3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219ecd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d9910;
  func_0x000107c613fc(&UNK_1104d9910,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10219f018,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10219ed40; end: 10219eddb;  */

void FUN_10219ed40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d9820;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d9820;
  return;
}



/* Entry: 10219eddc; end: 10219ee13;  */

void FUN_10219eddc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10219ee14; end: 10219ee1b;  */

undefined8 FUN_10219ee14(void)

{
  return 0x1b;
}



/* Entry: 10219ee1c; end: 10219ef4f;  */

void FUN_10219ee1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104d9938;
  func_0x000107c613fc(&UNK_1104d9938,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10219eff0;
  func_0x00010058fa64(FUN_10219eff0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10219ef50; end: 10219ef7f;  */

undefined ** FUN_10219ef50(void)

{
  return &PTR_DAT_113066ec8;
}



/* Entry: 10219ef80; end: 10219ef9f;  */

void FUN_10219ef80(void)

{
  func_0x000107c61168(&PTR_PTR_112823ac8);
  return;
}



/* Entry: 10219efa0; end: 10219efef;  */

undefined1  [16] FUN_10219efa0(void)

{
  return ZEXT816(0x1104d9870);
}



/* Entry: 10219eff0; end: 10219f017;  */

void FUN_10219eff0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10219f018; end: 10219f02b;  */

void FUN_10219f018(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10219f02c; end: 1021a0b9b;  */

void FUN_10219f02c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  code *pcVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  code *pcVar41;
  char *pcVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  code *pcVar46;
  undefined8 uVar47;
  code *pcVar48;
  code *pcVar49;
  code *pcVar50;
  undefined8 uVar51;
  code *pcVar52;
  undefined *puVar53;
  code *pcVar54;
  char *pcVar55;
  code *pcVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  code *pcVar59;
  undefined8 uVar60;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 auStack_70 [2];
  
  uVar60 = *param_2;
  func_0x0001000285a8(0x112e5f288,&UNK_10da66ff0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar60;
  func_0x0001000838ec();
  FUN_1021c4b40();
  pcVar2 = "ExternalMusicSettingsWorkflowFactoryServiceServiceProvider";
  func_0x000100082720("ExternalMusicSettingsWorkflowFactoryServiceServiceProvider",0x3a,2);
  func_0x0001021cce90();
  pcVar3 = "AdAutofillSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdAutofillSettingsScopeExposerSubjectServiceProvider",0x34,2);
  func_0x0001021ccf20();
  pcVar4 = "AdLifestyleAndInterestsScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdLifestyleAndInterestsScopeExposerSubjectServiceProvider",0x39,2);
  FUN_1021ccf7c();
  pcVar5 = "AdSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdSettingsScopeExposerSubjectServiceProvider",0x2c,2);
  FUN_1021ccfd8();
  pcVar6 = "PlusManagementScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusManagementScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1021cd034();
  pcVar7 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1021cd090();
  pcVar8 = "SCAppsFromSnapScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAppsFromSnapScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1021cd0ec();
  pcVar9 = "SCDefaultAppsSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDefaultAppsSettingsScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1021cd148();
  pcVar10 = "SCEmailSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCEmailSettingsScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1021cd1a4();
  pcVar11 = "SCLensStudioSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensStudioSettingsScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1021cd200();
  pcVar12 = "SCManageContactsSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCManageContactsSettingsScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_1021cd25c();
  pcVar13 = "SCMobileSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMobileSettingsScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1021cd2b8();
  pcVar14 = "SCSpectaclesInterstitialPairingScreenScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesInterstitialPairingScreenScopeExposerSubjectServiceProvider",0x47
                      ,2);
  FUN_1021cd314();
  pcVar15 = "SCSpectaclesSettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpectaclesSettingsScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1021cd370();
  pcVar16 = "WebBrowserLinkHistoryScopeExposerSubjectServiceProvider";
  func_0x000100082720("WebBrowserLinkHistoryScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1021cd3cc();
  func_0x000100082720("SCSettingsRowProviderScopeExposerSubjectServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e5f290,&UNK_10da67060);
  puVar53 = &UNK_1104d99e8;
  func_0x000107c613fc(&UNK_1104d99e8,0x38,7);
  *(undefined8 **)(puVar53 + 0x10) = puVar1;
  *(undefined8 *)(puVar53 + 0x18) = param_4;
  *(undefined8 *)(puVar53 + 0x20) = param_5;
  *(undefined8 *)(puVar53 + 0x28) = param_6;
  *(undefined8 *)(puVar53 + 0x30) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  pcVar17 = FUN_1021a0f04;
  func_0x0001000823a8(FUN_1021a0f04,puVar53);
  func_0x000100082720("SCAdSettingsServicesEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e5f298,&UNK_10da67000);
  puVar53 = &UNK_1104d9a10;
  func_0x000107c613fc(&UNK_1104d9a10,0x20,7);
  *(undefined8 **)(puVar53 + 0x10) = puVar1;
  *(undefined8 *)(puVar53 + 0x18) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_8);
  uVar60 = 0x1021a0f14;
  func_0x0001000823a8(0x1021a0f14,puVar53);
  func_0x000100082720("SCFriendmojiUserPolicyEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e5f2a0,&UNK_10da67008);
  func_0x000107c6157c(uVar60);
  uVar18 = 0x1021a0f1c;
  func_0x0001000823a8(0x1021a0f1c,uVar60);
  func_0x000100082720("SCFriendmojiUserPolicyServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e5f2a8,&UNK_10da67010);
  puVar53 = &UNK_1104d9a38;
  func_0x000107c613fc(&UNK_1104d9a38,0x68,7);
  *(undefined8 **)(puVar53 + 0x10) = puVar1;
  *(undefined8 *)(puVar53 + 0x18) = param_9;
  *(undefined8 *)(puVar53 + 0x20) = param_10;
  *(undefined8 *)(puVar53 + 0x28) = param_11;
  *(undefined8 *)(puVar53 + 0x30) = param_12;
  *(undefined8 *)(puVar53 + 0x38) = param_13;
  *(undefined8 *)(puVar53 + 0x40) = param_14;
  *(undefined8 *)(puVar53 + 0x48) = param_15;
  *(undefined8 *)(puVar53 + 0x50) = param_16;
  *(undefined8 *)(puVar53 + 0x58) = param_17;
  *(undefined8 *)(puVar53 + 0x60) = param_18;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  pcVar19 = FUN_1021a0f24;
  func_0x0001000823a8(FUN_1021a0f24,puVar53);
  func_0x000100082720("SCSearchHistoryServicesEntryPointWrapperServiceProvider",0x37,2);
  uVar20 = param_18;
  FUN_1021d5a04(param_18,param_14,param_13,param_19,param_15,param_10,param_20,param_21,param_22,
                param_23);
  func_0x000100082720("AdAutofillSettingsScopedFactoryServiceProvider",0x2e,2);
  FUN_1021dd03c(param_7,param_24,param_8,param_25,param_9,param_10);
  func_0x000100082720("AdSettingsScopedFactoryServiceProvider",0x26,2);
  uVar21 = param_13;
  FUN_1021e99e0(param_13,param_12,param_26,param_21);
  func_0x000100082720("SCAppsFromSnapScopedFactoryServiceProvider",0x2a,2);
  FUN_1021ec334();
  func_0x000100082720("SCDefaultAppsSettingsScopedFactoryServiceProvider",0x31,2);
  FUN_1021e0bbc(param_28,param_29);
  func_0x000100082720("SCLensStudioSettingsScopedFactoryServiceProvider",0x30,2);
  FUN_1021f08f0(param_30,param_18,param_14,param_13,param_31,param_32,param_33,param_34,param_35,
                param_36,param_37);
  func_0x000100082720("SCManageContactsSettingsScopedFactoryServiceProvider",0x34,2);
  uVar22 = param_13;
  FUN_1021f41fc(param_13,param_38);
  func_0x000100082720("WebBrowserLinkHistoryScopedFactoryServiceProvider",0x31,2);
  pcVar23 = pcVar2;
  FUN_1021cced0();
  func_0x000100082720("AdAutofillSettingsScopeExposerObservableServiceProvider",0x37,2);
  pcVar24 = pcVar3;
  FUN_1021ccf60();
  func_0x000100082720("AdLifestyleAndInterestsScopeExposerObservableServiceProvider",0x3c,2);
  pcVar25 = pcVar4;
  FUN_1021ccfbc();
  func_0x000100082720("AdSettingsScopeExposerObservableServiceProvider",0x2f,2);
  pcVar26 = pcVar5;
  FUN_1021cd018();
  func_0x000100082720("PlusManagementScopeExposerObservableServiceProvider",0x33,2);
  pcVar27 = pcVar6;
  FUN_1021cd074();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar28 = pcVar7;
  FUN_1021cd0d0();
  func_0x000100082720("SCAppsFromSnapScopeExposerObservableServiceProvider",0x33,2);
  pcVar29 = pcVar8;
  FUN_1021cd12c();
  func_0x000100082720("SCDefaultAppsSettingsScopeExposerObservableServiceProvider",0x3a,2);
  pcVar30 = pcVar9;
  FUN_1021cd188();
  func_0x000100082720("SCEmailSettingsScopeExposerObservableServiceProvider",0x34,2);
  pcVar31 = pcVar10;
  FUN_1021cd1e4();
  func_0x000100082720("SCLensStudioSettingsScopeExposerObservableServiceProvider",0x39,2);
  pcVar32 = pcVar11;
  FUN_1021cd240();
  func_0x000100082720("SCManageContactsSettingsScopeExposerObservableServiceProvider",0x3d,2);
  pcVar33 = pcVar12;
  FUN_1021cd29c();
  func_0x000100082720("SCMobileSettingsScopeExposerObservableServiceProvider",0x35,2);
  pcVar34 = pcVar13;
  FUN_1021cd2f8();
  func_0x000100082720("SCSpectaclesInterstitialPairingScreenScopeExposerObservableServiceProvider",
                      0x4a,2);
  pcVar35 = pcVar14;
  FUN_1021cd354();
  func_0x000100082720("SCSpectaclesSettingsScopeExposerObservableServiceProvider",0x39,2);
  pcVar36 = pcVar15;
  FUN_1021cd3b0();
  func_0x000100082720("WebBrowserLinkHistoryScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar37 = FUN_10219eddc;
  func_0x0001000823a8(FUN_10219eddc,0);
  func_0x000100082720("SCSettingsScopedServicesCleanupRelayServiceProvider",0x33,2);
  uVar38 = uVar22;
  func_0x0001021f7bf0();
  func_0x000100082720("WebBrowserLinkHistoryScopeServicesServiceProvider",0x31,2);
  uVar39 = uVar20;
  func_0x0001021d88c8();
  func_0x000100082720("AdAutofillSettingsScopeServicesServiceProvider",0x2e,2);
  uVar40 = param_7;
  func_0x0001021df92c();
  func_0x000100082720("AdSettingsScopeServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112e5f2b0,&UNK_10da67020);
  func_0x000107c6157c(pcVar17);
  pcVar41 = FUN_1021a0f60;
  func_0x0001000823a8(FUN_1021a0f60,pcVar17);
  func_0x000100082720("AdSettingsServicesServiceProvider",0x21,2);
  pcVar42 = pcVar16;
  FUN_1021cd45c();
  func_0x000100082720("SCSettingsRowProviderScopeExposerObservableServiceProvider",0x3a,2);
  uVar43 = uVar21;
  func_0x00010433935c();
  func_0x000100082720("SCAppsFromSnapScopeServicesServiceProvider",0x2a,2);
  uVar44 = param_27;
  func_0x0001021f015c();
  func_0x000100082720("SCDefaultAppsSettingsScopeServicesServiceProvider",0x31,2);
  uVar45 = param_28;
  FUN_1021e2cc0();
  func_0x000100082720("SCLensStudioSettingsScopeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e5f2b8,&UNK_10da67380);
  puVar53 = &UNK_1104d9a60;
  func_0x000107c613fc(&UNK_1104d9a60,0x78,7);
  *(undefined8 **)(puVar53 + 0x10) = puVar1;
  *(undefined8 *)(puVar53 + 0x18) = param_18;
  *(undefined8 *)(puVar53 + 0x20) = param_9;
  *(undefined8 *)(puVar53 + 0x28) = param_26;
  *(undefined8 *)(puVar53 + 0x30) = param_12;
  *(undefined8 *)(puVar53 + 0x38) = param_39;
  *(undefined8 *)(puVar53 + 0x40) = param_8;
  *(undefined8 *)(puVar53 + 0x48) = param_40;
  *(undefined8 *)(puVar53 + 0x50) = param_10;
  *(undefined8 *)(puVar53 + 0x58) = param_41;
  *(undefined8 *)(puVar53 + 0x60) = param_42;
  *(char **)(puVar53 + 0x68) = pcVar33;
  *(char **)(puVar53 + 0x70) = pcVar30;
  func_0x000107c6157c();
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(pcVar30);
  pcVar46 = FUN_1021a0f68;
  func_0x0001000823a8(FUN_1021a0f68,puVar53);
  func_0x000100082720("SCLogoutInterceptorServicesEntryPointWrapperServiceProvider",0x3b,2);
  uVar47 = param_30;
  func_0x000104338f48();
  func_0x000100082720("SCManageContactsSettingsScopeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e5f2c0,&UNK_10da67030);
  func_0x000107c6157c(pcVar19);
  pcVar48 = FUN_1021a0fa4;
  func_0x0001000823a8(FUN_1021a0fa4,pcVar19);
  func_0x000100082720("SCSearchHistoryServicesServiceProvider",0x26,2);
  FUN_1021d9b94(param_43,pcVar41,param_44,param_18,param_45,param_46,param_26,param_9,param_6);
  func_0x000100082720("AdLifestyleAndInterestsScopedFactoryServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e5f2c8,&UNK_10da67038);
  puVar53 = &UNK_1104d9a88;
  func_0x000107c613fc(&UNK_1104d9a88,0x310,7);
  *(undefined8 *)(puVar53 + 0x10) = param_13;
  *(undefined8 *)(puVar53 + 0x18) = param_8;
  *(undefined8 *)(puVar53 + 0x20) = param_53;
  *(undefined8 *)(puVar53 + 0x28) = param_52;
  *(undefined8 *)(puVar53 + 0x30) = param_40;
  *(undefined8 *)(puVar53 + 0x38) = in_stack_00000360;
  *(undefined8 *)(puVar53 + 0x40) = param_18;
  *(undefined8 *)(puVar53 + 0x48) = in_stack_000002a0;
  *(undefined8 *)(puVar53 + 0x50) = param_35;
  *(undefined8 *)(puVar53 + 0x58) = in_stack_00000370;
  *(undefined8 *)(puVar53 + 0x60) = param_49;
  *(undefined8 *)(puVar53 + 0x68) = param_3;
  *(undefined8 *)(puVar53 + 0x70) = in_stack_00000288;
  *(undefined8 *)(puVar53 + 0x78) = param_57;
  *(undefined8 *)(puVar53 + 0x80) = param_37;
  *(undefined8 *)(puVar53 + 0x88) = param_14;
  *(undefined8 *)(puVar53 + 0x90) = in_stack_00000380;
  *(undefined8 *)(puVar53 + 0x98) = in_stack_00000280;
  *(undefined8 *)(puVar53 + 0xa0) = param_66;
  *(undefined8 *)(puVar53 + 0xa8) = in_stack_00000278;
  *(char **)(puVar53 + 0xb0) = pcVar27;
  *(undefined8 *)(puVar53 + 0xb8) = param_59;
  *(undefined8 *)(puVar53 + 0xc0) = param_16;
  *(undefined8 *)(puVar53 + 200) = param_17;
  *(char **)(puVar53 + 0xd0) = pcVar26;
  *(undefined8 *)(puVar53 + 0xd8) = in_stack_00000320;
  *(undefined8 *)(puVar53 + 0xe0) = in_stack_00000358;
  *(undefined8 *)(puVar53 + 0xe8) = in_stack_00000368;
  *(undefined8 *)(puVar53 + 0xf0) = in_stack_00000258;
  *(undefined8 *)(puVar53 + 0xf8) = param_58;
  *(undefined8 *)(puVar53 + 0x100) = in_stack_00000300;
  *(undefined8 *)(puVar53 + 0x108) = param_67;
  *(undefined8 *)(puVar53 + 0x110) = in_stack_00000268;
  *(undefined8 *)(puVar53 + 0x118) = in_stack_00000318;
  *(undefined8 *)(puVar53 + 0x120) = param_56;
  *(undefined8 *)(puVar53 + 0x128) = in_stack_00000310;
  *(undefined8 *)(puVar53 + 0x130) = param_55;
  *(undefined8 *)(puVar53 + 0x138) = in_stack_00000340;
  *(undefined8 *)(puVar53 + 0x140) = in_stack_00000290;
  *(undefined8 *)(puVar53 + 0x148) = in_stack_00000350;
  *(undefined8 *)(puVar53 + 0x150) = in_stack_000002d8;
  *(undefined8 *)(puVar53 + 0x158) = in_stack_00000328;
  *(undefined8 *)(puVar53 + 0x160) = in_stack_00000378;
  *(undefined8 *)(puVar53 + 0x168) = param_64;
  *(undefined8 *)(puVar53 + 0x170) = param_71;
  *(undefined8 *)(puVar53 + 0x178) = in_stack_00000230;
  *(undefined8 *)(puVar53 + 0x180) = in_stack_00000208;
  *(undefined8 *)(puVar53 + 0x188) = in_stack_00000248;
  *(undefined8 *)(puVar53 + 400) = in_stack_000002f0;
  *(undefined8 *)(puVar53 + 0x198) = in_stack_00000238;
  *(undefined8 *)(puVar53 + 0x1a0) = in_stack_00000298;
  *(undefined8 *)(puVar53 + 0x1a8) = in_stack_00000240;
  *(undefined8 *)(puVar53 + 0x1b0) = in_stack_000002e8;
  *(undefined8 *)(puVar53 + 0x1b8) = in_stack_00000308;
  *(undefined8 *)(puVar53 + 0x1c0) = in_stack_00000348;
  *(undefined8 *)(puVar53 + 0x1c8) = param_62;
  *(undefined8 *)(puVar53 + 0x1d0) = param_69;
  *(undefined8 *)(puVar53 + 0x1d8) = param_12;
  *(undefined8 *)(puVar53 + 0x1e0) = in_stack_000002e0;
  *(undefined8 *)(puVar53 + 0x1e8) = param_60;
  *(undefined8 *)(puVar53 + 0x1f0) = param_61;
  *(undefined8 *)(puVar53 + 0x1f8) = param_63;
  *(undefined8 *)(puVar53 + 0x200) = param_65;
  *(undefined8 *)(puVar53 + 0x208) = in_stack_00000330;
  *(undefined8 *)(puVar53 + 0x210) = param_68;
  *(undefined8 *)(puVar53 + 0x218) = param_70;
  *(undefined8 *)(puVar53 + 0x220) = param_33;
  *(undefined8 *)(puVar53 + 0x228) = in_stack_000001f0;
  *(undefined8 *)(puVar53 + 0x230) = in_stack_000001f8;
  *(undefined8 *)(puVar53 + 0x238) = in_stack_00000200;
  *(undefined8 *)(puVar53 + 0x240) = in_stack_00000210;
  *(undefined8 *)(puVar53 + 0x248) = in_stack_00000218;
  *(undefined8 *)(puVar53 + 0x250) = in_stack_00000220;
  *(undefined8 *)(puVar53 + 600) = in_stack_00000228;
  *(undefined8 *)(puVar53 + 0x260) = in_stack_00000250;
  *(undefined8 *)(puVar53 + 0x268) = in_stack_00000260;
  *(undefined8 *)(puVar53 + 0x270) = in_stack_000002f8;
  *(undefined8 *)(puVar53 + 0x278) = in_stack_00000270;
  *(undefined8 *)(puVar53 + 0x280) = param_47;
  *(code **)(puVar53 + 0x288) = pcVar48;
  *(undefined8 *)(puVar53 + 0x290) = in_stack_000002b0;
  *(undefined8 *)(puVar53 + 0x298) = in_stack_000002b8;
  *(undefined8 *)(puVar53 + 0x2a0) = in_stack_000002c0;
  *(undefined8 *)(puVar53 + 0x2a8) = in_stack_000002c8;
  *(undefined8 *)(puVar53 + 0x2b0) = in_stack_000002d0;
  *(undefined8 *)(puVar53 + 0x2b8) = param_26;
  *(undefined8 *)(puVar53 + 0x2c0) = param_9;
  *(undefined8 *)(puVar53 + 0x2c8) = param_10;
  *(undefined8 *)(puVar53 + 0x2d0) = param_48;
  *(undefined8 *)(puVar53 + 0x2d8) = param_50;
  *(undefined8 *)(puVar53 + 0x2e0) = param_51;
  *(undefined8 *)(puVar53 + 0x2e8) = param_54;
  *(undefined8 *)(puVar53 + 0x2f0) = in_stack_00000338;
  *(undefined8 *)(puVar53 + 0x2f8) = in_stack_000002a8;
  *(char **)(puVar53 + 0x300) = pcVar35;
  *(char **)(puVar53 + 0x308) = pcVar34;
  func_0x000107c6157c();
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c();
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(pcVar27);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(pcVar26);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(pcVar48);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(pcVar35);
  func_0x000107c6157c(pcVar34);
  pcVar49 = FUN_1021a0fac;
  func_0x0001000823a8(FUN_1021a0fac,puVar53);
  func_0x000100082720("SettingsRowProviderPluginRegistryServiceProvider",0x30,2);
  pcVar50 = pcVar49;
  func_0x0001029adabc();
  func_0x000100082720("SettingsRowProviderPluginServicesServiceProvider",0x30,2);
  uVar51 = param_43;
  func_0x0001021dc8a4();
  func_0x000100082720("AdLifestyleAndInterestsScopeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e5f2d0,&UNK_10da67040);
  func_0x000107c6157c(pcVar46);
  pcVar52 = FUN_1021a1118;
  func_0x0001000823a8(FUN_1021a1118,pcVar46);
  func_0x000100082720("SCLogoutInterceptorServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112e5f2d8,&UNK_10da67760);
  puVar53 = &UNK_1104d9ab0;
  func_0x000107c613fc(&UNK_1104d9ab0,0xa0,7);
  *(undefined8 **)(puVar53 + 0x10) = puVar1;
  *(undefined8 *)(puVar53 + 0x18) = param_36;
  *(undefined8 *)(puVar53 + 0x20) = param_19;
  *(undefined8 *)(puVar53 + 0x28) = in_stack_00000388;
  *(undefined8 *)(puVar53 + 0x30) = param_13;
  *(undefined8 *)(puVar53 + 0x38) = in_stack_00000288;
  *(undefined8 *)(puVar53 + 0x40) = param_57;
  *(undefined8 *)(puVar53 + 0x48) = in_stack_00000390;
  *(undefined8 *)(puVar53 + 0x50) = param_59;
  *(undefined8 *)(puVar53 + 0x58) = in_stack_00000398;
  *(undefined8 *)(puVar53 + 0x60) = param_18;
  *(undefined8 *)(puVar53 + 0x68) = in_stack_00000298;
  *(code **)(puVar53 + 0x70) = pcVar50;
  *(undefined8 *)(puVar53 + 0x78) = in_stack_00000380;
  *(undefined8 *)(puVar53 + 0x80) = param_21;
  *(char **)(puVar53 + 0x88) = pcVar42;
  *(char **)(puVar53 + 0x90) = pcVar26;
  *(char **)(puVar53 + 0x98) = pcVar27;
  func_0x000107c6157c();
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(pcVar27);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(pcVar26);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(pcVar50);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(pcVar42);
  pcVar54 = FUN_1021a1120;
  func_0x0001000823a8(FUN_1021a1120,puVar53);
  func_0x000100082720("SettingsEntryPointWrapperServiceProvider",0x28,2);
  pcVar55 = pcVar2;
  FUN_1021cc418(pcVar2,uVar39,pcVar3,uVar51,pcVar4,uVar40,pcVar41,pcVar5,pcVar6,pcVar7,uVar43,pcVar8
                ,uVar44,pcVar9,uVar18,pcVar10,uVar45,pcVar52,pcVar11,uVar47,pcVar12,pcVar48,pcVar16,
                pcVar13,pcVar14,pcVar15,uVar38);
  func_0x000100082720("SettingsScopeGraphBridgeServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e5f2e0,&UNK_10da67050);
  puVar53 = &UNK_1104d9ad8;
  func_0x000107c613fc(&UNK_1104d9ad8,0x50,7);
  *(code **)(puVar53 + 0x10) = pcVar17;
  *(undefined8 *)(puVar53 + 0x18) = uVar60;
  *(code **)(puVar53 + 0x20) = pcVar46;
  *(code **)(puVar53 + 0x28) = pcVar19;
  *(undefined8 **)(puVar53 + 0x30) = puVar1;
  *(code **)(puVar53 + 0x38) = pcVar37;
  *(code **)(puVar53 + 0x40) = pcVar54;
  *(char **)(puVar53 + 0x48) = pcVar55;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar60);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar19);
  func_0x000107c6157c(pcVar46);
  func_0x000107c6157c(pcVar37);
  func_0x000107c6157c(pcVar54);
  func_0x000107c6157c(pcVar55);
  pcVar56 = FUN_1021a1164;
  func_0x0001000823a8(FUN_1021a1164,puVar53);
  func_0x000100082720("SCSettingsScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e5f218,&UNK_10da66dc0);
  func_0x000107c6157c(pcVar56);
  uVar57 = 0x1021a1178;
  func_0x0001000823a8(0x1021a1178,pcVar56);
  func_0x000100082720("SCSettingsScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e5f208,&UNK_10da66db0);
  func_0x000107c6157c(uVar57);
  uVar58 = 0x1021a1180;
  func_0x0001000823a8(0x1021a1180,uVar57);
  func_0x000100082720("SCSettingsScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar53 = &UNK_1104d9b00;
  func_0x000107c613fc(&UNK_1104d9b00,0x20,7);
  *(undefined8 *)(puVar53 + 0x10) = uVar58;
  *(code **)(puVar53 + 0x18) = pcVar37;
  func_0x000107c6157c(pcVar37);
  pcVar59 = FUN_1021a11b4;
  func_0x0001000823a8(FUN_1021a11b4,puVar53);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(uVar60);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(param_7);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(param_27);
  func_0x000107c61574(param_28);
  func_0x000107c61574(param_30);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar37);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(pcVar42);
  func_0x000107c61574(uVar43);
  func_0x000107c61574(uVar44);
  func_0x000107c61574(uVar45);
  func_0x000107c61574(pcVar46);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(pcVar48);
  func_0x000107c61574(param_43);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(pcVar50);
  func_0x000107c61574(uVar51);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(uVar57);
  func_0x000100082720("SCSettingsScopeEntryPointProvider",0x21,2);
  *param_1 = pcVar59;
  return;
}



/* Entry: 1021a0b9c; end: 1021a0f03;  */

void FUN_1021a0b9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10219f02c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1021a0f04; end: 1021a0f23;  */

void FUN_1021a0f04(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1021a1ab4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126aa070;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x73676e6974746573;
  func_0x000107c5fadc(0x73676e6974746573,0xed000065706f6353);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f06a020);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(lVar2 + 0x40) = lVar11;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021a1580);
  (*pcVar1)();
}



/* Entry: 1021a0f24; end: 1021a0f5f;  */

void FUN_1021a0f24(void)

{
  long unaff_x20;
  
  FUN_1021a3370(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1021a0f60; end: 1021a0f67;  */

void FUN_1021a0f60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021a0f68; end: 1021a0fa3;  */

void FUN_1021a0f68(void)

{
  long unaff_x20;
  
  FUN_1021a2004(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1021a0fa4; end: 1021a0fab;  */

void FUN_1021a0fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021a0fac; end: 1021a1117;  */

void FUN_1021a0fac(void)

{
  long unaff_x20;
  
  FUN_1021a55ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1021a1118; end: 1021a111f;  */

void FUN_1021a1118(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021a1120; end: 1021a1163;  */

void FUN_1021a1120(void)

{
  long unaff_x20;
  
  FUN_1021a4374(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 1021a1164; end: 1021a1187;  */

void FUN_1021a1164(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar9 = &UNK_11074db18;
  ppuVar12 = &PTR_DAT_113066ec8;
  uVar13 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar10 = 0x112e5f890;
  func_0x0001000285a8(0x112e5f890,&UNK_10da67900);
  func_0x0001000a6ee8(&UNK_1104d9b78,
                      "SCAdSettingsServicesEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1021a5340,uVar1,uVar10,&UNK_1104d9b78,&PTR_DAT_112e5f2e8);
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x0001000a6ee8(&UNK_1104d9c18,
                      "SCFriendmojiUserPolicyEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x1021a536c,uVar5,uVar10,&UNK_1104d9c18,&PTR_DAT_112e5f3e0);
  func_0x000107c61574(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_1104d9cb8,
                      "SCLogoutInterceptorServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,0x1021a5398,uVar2,uVar10,&UNK_1104d9cb8,&PTR_DAT_112e5f4d0);
  func_0x000107c61574(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x0001000a6ee8(&UNK_1104d9d58,
                      "SCSearchHistoryServicesEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      0x1021a53c4,uVar6,uVar10,&UNK_1104d9d58,&PTR_DAT_112e5f608);
  func_0x000107c61574(uVar6);
  puVar11 = &UNK_1104d9e28;
  func_0x000107c613fc(&UNK_1104d9e28,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar3;
  *(undefined8 *)(puVar11 + 0x18) = uVar7;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x0001000a6ee8(&UNK_1104d98b0,"SCSettingsScopedServicesScopeInitializationPluginKey",0x34,2,
                      FUN_1021a5498,puVar11,uVar10,&UNK_1104d98b0,&PTR_DAT_112e5f220);
  func_0x000107c61574(puVar11);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_1104d9dd8,"SettingsEntryPointWrapperScopeInitializationPluginKey",0x35,2,
                      FUN_1021a5524,uVar4,uVar10,&UNK_1104d9dd8,&PTR_DAT_112e5f740);
  func_0x000107c61574(uVar4);
  puVar11 = &UNK_1104d9e50;
  func_0x000107c613fc(&UNK_1104d9e50,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar3;
  *(undefined8 *)(puVar11 + 0x18) = uVar8;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x0001000a6ee8(&UNK_1104dd6c8,"SettingsScopeGraphBridgeScopeInitializationPluginKey",0x34,2,
                      FUN_1021a5550,puVar11,uVar10,&UNK_1104dd6c8,&PTR_DAT_112e61680);
  func_0x000107c61574(puVar11);
  uVar10 = 0x112e5f898;
  func_0x0001000285a8(0x112e5f898,&UNK_10da67908);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar9,ppuVar12,uVar13,uVar10);
  func_0x0001000a7f38("SCSettingsScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  *param_1 = puVar9;
  return;
}



/* Entry: 1021a1188; end: 1021a11b3;  */

void FUN_1021a1188(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021a11b4; end: 1021a11bb;  */

void FUN_1021a11b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d9820;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d9820;
  return;
}



/* Entry: 1021a11bc; end: 1021a18e7;  */

void FUN_1021a11bc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1021a1ab4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126aa070;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x73676e6974746573;
  func_0x000107c5fadc(0x73676e6974746573,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  lVar10 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f06a020);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(long *)(param_2 + 0x40) = lVar10;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021a1580);
  (*pcVar1)();
}



/* Entry: 1021a18e8; end: 1021a1953;  */

void FUN_1021a18e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1021a1954; end: 1021a19a7;  */

void FUN_1021a1954(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021a19a8; end: 1021a19af;  */

undefined8 FUN_1021a19a8(void)

{
  return 0x1b;
}



/* Entry: 1021a19b0; end: 1021a1a33;  */

void FUN_1021a19b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1021a1b04,param_2,FUN_1021a1b08,param_2,FUN_1021a1b30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021a1a34; end: 1021a1a83;  */

undefined8 FUN_1021a1a34(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1021a1a84; end: 1021a1ab3;  */

void FUN_1021a1a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104d9b18;
  return;
}



/* Entry: 1021a1ab4; end: 1021a1ad3;  */

void FUN_1021a1ab4(void)

{
  func_0x000107c61168(&PTR_PTR_112e5f350);
  return;
}



/* Entry: 1021a1ad4; end: 1021a1b07;  */

undefined1  [16] FUN_1021a1ad4(void)

{
  return ZEXT816(0x1104d9b58);
}



/* Entry: 1021a1b08; end: 1021a1b2f;  */

void FUN_1021a1b08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021a1b30; end: 1021a1b37;  */

undefined8 FUN_1021a1b30(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1021a1b38; end: 1021a1c1f;  */

void FUN_1021a1b38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1021a1f80();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1021a1da0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021a1c20; end: 1021a1c5b;  */

void FUN_1021a1c20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021a1c5c; end: 1021a1caf;  */

void FUN_1021a1c5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021a1cb0; end: 1021a1cb7;  */

undefined8 FUN_1021a1cb0(void)

{
  return 0x1b;
}



/* Entry: 1021a1cb8; end: 1021a1d3b;  */

void FUN_1021a1cb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1021a1fd0,param_2,FUN_1021a1fd4,param_2,FUN_1021a1ffc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021a1d3c; end: 1021a1d8b;  */

undefined8 FUN_1021a1d3c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1021a1d8c; end: 1021a1d9f;  */

void FUN_1021a1d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104d9bb8;
  return;
}



/* Entry: 1021a1da0; end: 1021a1f63;  */

void FUN_1021a1da0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126aa078;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x73676e6974746573;
  func_0x000107c5fadc(0x73676e6974746573,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f06a040);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021a1f64);
  (*pcVar1)();
}



/* Entry: 1021a1f64; end: 1021a1f7f;  */

undefined ** FUN_1021a1f64(void)

{
  return &PTR_DAT_113066ec8;
}



/* Entry: 1021a1f80; end: 1021a1f9f;  */

void FUN_1021a1f80(void)

{
  func_0x000107c61168(&PTR_PTR_112e5f448);
  return;
}



/* Entry: 1021a1fa0; end: 1021a1fd3;  */

undefined1  [16] FUN_1021a1fa0(void)

{
  return ZEXT816(0x1104d9bf8);
}



/* Entry: 1021a1fd4; end: 1021a1ffb;  */

void FUN_1021a1fd4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021a1ffc; end: 1021a2003;  */

undefined8 FUN_1021a1ffc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1021a2004; end: 1021a30df;  */

void FUN_1021a2004(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  FUN_1021a32ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  func_0x0001000285a8(0x112e5f4c0,&UNK_10da67390);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar14 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  func_0x0001000285a8(0x112e5f4c8,&UNK_10da67398);
  func_0x000107c610f8();
  uVar14 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar12;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar12;
  puVar12 = PTR_PTR_1126aa080;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0x73676e6974746573;
  func_0x000107c5fadc(0x73676e6974746573,0xed000065706f6353);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef116c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f06a070);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  lVar17 = *(long *)(param_2 + 0x28);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f06a090);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f06a0c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f06a0e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uStack_c8);
    func_0x000107c61574(uStack_d0);
    *(long *)(param_2 + 0x80) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021a2908);
  (*pcVar1)();
}


