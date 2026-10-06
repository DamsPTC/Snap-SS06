/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102434cb0; end: 102434ceb;  */

void FUN_102434cb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102434cec; end: 102434d0f;  */

void FUN_102434cec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024352b8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAdReportReportAdScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102434d10; end: 102434e67;  */

void FUN_102434d10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_102435208();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102434f94(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 102434e68; end: 102434ea3;  */

void FUN_102434e68(void)

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



/* Entry: 102434ea4; end: 102434eab;  */

undefined8 FUN_102434ea4(void)

{
  return 0x1b;
}



/* Entry: 102434eac; end: 102434f2f;  */

void FUN_102434eac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102435248,param_2,FUN_10243524c,param_2,FUN_102435274,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102434f30; end: 102434f7f;  */

undefined8 FUN_102434f30(void)

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



/* Entry: 102434f80; end: 102434f93;  */

void FUN_102434f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110507b68;
  return;
}



/* Entry: 102434f94; end: 1024351eb;  */

void FUN_102434f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x0001000285a8(0x112e99630,&UNK_10daa5a18);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126aa830;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x644174726f706572;
  func_0x000107c5fadc(0x644174726f706572,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f09bdb0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024351ec; end: 102435207;  */

undefined ** FUN_1024351ec(void)

{
  return &PTR_DAT_112fee2a8;
}



/* Entry: 102435208; end: 102435227;  */

void FUN_102435208(void)

{
  func_0x000107c61168(&PTR_PTR_112e998a0);
  return;
}



/* Entry: 102435228; end: 10243524b;  */

undefined1  [16] FUN_102435228(void)

{
  return ZEXT816(0x110507ba8);
}



/* Entry: 10243524c; end: 102435273;  */

void FUN_10243524c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102435274; end: 10243527b;  */

undefined8 FUN_102435274(void)

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



/* Entry: 10243527c; end: 1024352b7;  */

void FUN_10243527c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024352b8();
  func_0x0001000a7f38("SCAdReportReportAdScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1024352b8; end: 1024354a3;  */

void FUN_1024352b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d7360;
  ppuVar4 = &PTR_DAT_112fee2a8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110507bf8;
  func_0x000107c613fc(&UNK_110507bf8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e99918;
  func_0x0001000285a8(0x112e99918,&UNK_10daa60a8);
  func_0x0001000a6ee8(&UNK_110507df8,"AdReportReportAdScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1024354a4,puVar2,uVar3,&UNK_110507df8,&PTR_DAT_112e999b0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110507ba8,
                      "SCAdReportReportAdEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102435558,param_3,uVar3,&UNK_110507ba8,&PTR_DAT_112e99838);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110507c20;
  func_0x000107c613fc(&UNK_110507c20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105079c8,"SCAdReportReportAdScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102435608,puVar2,uVar3,&UNK_1105079c8,&PTR_DAT_112e997b8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e99920;
  func_0x0001000285a8(0x112e99920,&UNK_10daa60b0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1024354a4; end: 1024354e3;  */

void FUN_1024354a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102435dd0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdReportReportAdScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024354e4; end: 102435557;  */

void FUN_1024354e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102435644;
  func_0x0001000823a8(0x102435644,param_3);
  func_0x000100082720("SCAdReportReportAdEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102435558; end: 10243555f;  */

void FUN_102435558(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102435644;
  func_0x0001000823a8();
  func_0x000100082720("SCAdReportReportAdEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102435560; end: 102435607;  */

void FUN_102435560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110507c48;
  func_0x000107c613fc(&UNK_110507c48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10243563c;
  func_0x0001000823a8(FUN_10243563c,puVar1);
  func_0x000100082720("SCAdReportReportAdScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102435608; end: 10243560f;  */

void FUN_102435608(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110507c48;
  func_0x000107c613fc(&UNK_110507c48,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10243563c;
  func_0x0001000823a8(FUN_10243563c,puVar3);
  func_0x000100082720("SCAdReportReportAdScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102435610; end: 10243563b;  */

void FUN_102435610(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10243563c; end: 10243564b;  */

void FUN_10243563c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110507a50;
  func_0x000107c613fc(&UNK_110507a50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024348ec;
  func_0x00010058fa64(FUN_1024348ec,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10243564c; end: 102435727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10243564c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102435a60();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e99928) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e99930) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102435728);
  (*pcVar1)();
}



/* Entry: 102435728; end: 102435787; -[_TtC32AdReportReportAdScopeGraphBridge47AdReportReportAdScopeGraphBridgeSaberEntryPoint init] */

void FUN_102435728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportReportAdScopeGraphBridge.AdReportReportAdScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102435754);
  (*pcVar1)();
}



/* Entry: 102435788; end: 1024357bf; -[_TtC32AdReportReportAdScopeGraphBridge47AdReportReportAdScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024357a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024357a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102435788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99928));
  return;
}



/* Entry: 1024357c0; end: 1024357e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024357c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e99930),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e99928));
  return;
}



/* Entry: 1024357e8; end: 102435807;  */

void FUN_1024357e8(void)

{
  func_0x000107c61168(&PTR_PTR_11283f4e8);
  return;
}



/* Entry: 102435808; end: 10243588f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102435808(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99960) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e99968);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102435890);
  (*pcVar2)();
}



/* Entry: 102435890; end: 102435977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102435890(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99960);
  *(undefined **)(unaff_x20 + _DAT_112e99960) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99968);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e99968))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110507d18;
  func_0x000107c613fc(&UNK_110507d18,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10243597c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102435978; end: 102435983;  */

void FUN_102435978(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102435984; end: 1024359e3; -[_TtC32AdReportReportAdScopeGraphBridge47SCAdReportReportAdScopedServicesSaberEntryPoint init] */

void FUN_102435984(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportReportAdScopeGraphBridge.SCAdReportReportAdScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024359b0);
  (*pcVar1)();
}



/* Entry: 1024359e4; end: 102435a1b; -[_TtC32AdReportReportAdScopeGraphBridge47SCAdReportReportAdScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024359e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e99968));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99960));
  return;
}



/* Entry: 102435a1c; end: 102435a1f;  */

void FUN_102435a1c(void)

{
  return;
}



/* Entry: 102435a20; end: 102435a3f;  */

void FUN_102435a20(void)

{
  FUN_102435890();
  return;
}



/* Entry: 102435a40; end: 102435a5f;  */

void FUN_102435a40(void)

{
  func_0x000107c61168(&PTR_PTR_11283f5b0);
  return;
}



/* Entry: 102435a60; end: 102435b2f;  */

undefined8 FUN_102435a60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e99998,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102435b30();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102435b30; end: 102435b4f;  */

void FUN_102435b30(void)

{
  func_0x000107c61168(&PTR_PTR_11283f678);
  return;
}



/* Entry: 102435b50; end: 102435b6b;  */

void FUN_102435b50(undefined8 param_1)

{
  func_0x0001000285a8(0x112e999a0,&UNK_10daa6178);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102435bd8,param_1);
  return;
}



/* Entry: 102435b6c; end: 102435bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102435b6c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102435b30();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e999a8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102435bd8; end: 102435bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102435bd8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102435b30();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e999a8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102435be0; end: 102435c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102435be0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e999a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102435c2c; end: 102435c8b; -[_TtC32AdReportReportAdScopeGraphBridge40AdReportReportAdScopeGraphBridgeServices init] */

void FUN_102435c2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportReportAdScopeGraphBridge.AdReportReportAdScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102435c58);
  (*pcVar1)();
}



/* Entry: 102435c8c; end: 102435c9b; -[_TtC32AdReportReportAdScopeGraphBridge40AdReportReportAdScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102435c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e999a8));
  return;
}



/* Entry: 102435c9c; end: 102435d27;  */

void FUN_102435c9c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102435cdc,0);
  return;
}



/* Entry: 102435d28; end: 102435d43;  */

void FUN_102435d28(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102435d94,param_1);
  return;
}



/* Entry: 102435d44; end: 102435d93;  */

void FUN_102435d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102435d94; end: 102435dc7;  */

void FUN_102435d94(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102435dc8; end: 102435dcf;  */

undefined8 FUN_102435dc8(void)

{
  return 0x1b;
}



/* Entry: 102435dd0; end: 102435f47;  */

void FUN_102435dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110507d60;
  func_0x000107c613fc(&UNK_110507d60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102435f48,puVar1);
  return;
}



/* Entry: 102435f48; end: 102435f4f;  */

void FUN_102435f48(undefined8 *param_1)

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
  func_0x000107c61428(0x112e99998,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e99998,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110507e38;
  func_0x000107c613fc(&UNK_110507e38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10243601c;
  func_0x00010058fa64(0x10243601c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102435f50; end: 102435fab;  */

void FUN_102435f50(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e99998,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e99998,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102435fac; end: 102436023;  */

undefined ** FUN_102435fac(void)

{
  return &PTR_DAT_112fee2a8;
}



/* Entry: 102436024; end: 10243606b; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436024(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99a00;
  func_0x000107c61428(param_1 + _DAT_112e99a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10243606c; end: 1024360c3; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243606c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99a00;
  func_0x000107c61428(param_1 + _DAT_112e99a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024360c4; end: 10243610b; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint sCCustomReportV3ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024360c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99a08;
  func_0x000107c61428(param_1 + _DAT_112e99a08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10243610c; end: 102436117; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint setSCCustomReportV3ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243610c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99a08;
  func_0x000107c61428(param_1 + _DAT_112e99a08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102436118; end: 10243615f; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint adReportReportAdScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436118(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99a10;
  func_0x000107c61428(param_1 + _DAT_112e99a10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102436160; end: 10243616b; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint setAdReportReportAdScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99a10;
  func_0x000107c61428(param_1 + _DAT_112e99a10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10243616c; end: 1024361cb;  */

void FUN_10243616c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1024361cc; end: 102436387;  */

/* WARNING: Possible PIC construction at 0x0001024362e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102436308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102436318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243635c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243631c) */
/* WARNING: Removing unreachable block (ram,0x00010243630c) */
/* WARNING: Removing unreachable block (ram,0x0001024362e8) */
/* WARNING: Removing unreachable block (ram,0x000102436360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024361cc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50ccc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d43c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1024357e8();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102435a60();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102436388);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e99928) = lVar5;
      *(long *)(lVar3 + _DAT_112e99930) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102436388; end: 1024363af; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102436388(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024361cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024363b0; end: 1024363f3; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024363b0(undefined8 param_1)

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



/* Entry: 1024363f4; end: 1024365f7;  */

void FUN_1024363f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f63fb0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f09c050,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f639e0)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f09c620,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AdReportReportAdScopeGraphBridge/SCAdReportReportAdScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024365f8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c523b0();
        goto LAB_102436480;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58274();
  }
LAB_102436480:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024365f8; end: 1024366a3; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1024365f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024363f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024366a4; end: 10243671b; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024366a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99a00,0);
  *(undefined8 *)(param_1 + _DAT_112e99a08) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99a10) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99a18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243671c; end: 10243674f;  */

void FUN_10243671c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102436750; end: 1024367a7; -[SCAdReportReportAdScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010243677c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102436780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436750(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99a08));
  return;
}



/* Entry: 1024367a8; end: 1024367c7;  */

void FUN_1024367a8(void)

{
  func_0x000107c61168(&PTR_PTR_11283f738);
  return;
}



/* Entry: 1024367c8; end: 10243680f; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024367c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99a48;
  func_0x000107c61428(param_1 + _DAT_112e99a48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102436810; end: 102436867; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99a48;
  func_0x000107c61428(param_1 + _DAT_112e99a48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102436868; end: 10243693f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436868(undefined8 param_1,long param_2)

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
    FUN_102435a40();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e99960) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102436940);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e99968);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e99a50);
    *(long **)(unaff_x20 + _DAT_112e99a50) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102436940; end: 102436967; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint begin] */

void FUN_102436940(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102436868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102436968; end: 102436adf;  */

/* WARNING: Possible PIC construction at 0x0001024369d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102436a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024369d4) */
/* WARNING: Removing unreachable block (ram,0x000102436a6c) */
/* WARNING: Removing unreachable block (ram,0x000102436a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436968(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99a50);
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



/* Entry: 102436ae0; end: 102436ae7;  */

void FUN_102436ae0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102436ae8; end: 102436b1b; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint end] */

void FUN_102436ae8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102436968();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102436b1c; end: 102436c3b;  */

void FUN_102436b1c(long param_1,long param_2,long param_3)

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
                        "AdReportReportAdScopeGraphBridge/SCSCAdReportReportAdScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102436c3c);
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



/* Entry: 102436c3c; end: 102436ce7; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102436c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102436b1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102436ce8; end: 102436d47; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436ce8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99a48,0);
  *(undefined8 *)(param_1 + _DAT_112e99a50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102436d48; end: 102436d7b;  */

void FUN_102436d48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102436d7c; end: 102436db3; -[SCSCAdReportReportAdScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436d7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99a50));
  return;
}



/* Entry: 102436db4; end: 102436dd3;  */

void FUN_102436db4(void)

{
  func_0x000107c61168(&PTR_PTR_11283f808);
  return;
}



/* Entry: 102436dd4; end: 102436e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436dd4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024371c8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e99a88) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102436e40; end: 102436eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436e40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99a88) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102436eac; end: 102436f0b; -[_TtC36AdReportScopedFactoryServiceProvider24SCAdReportScopedServices init] */

void FUN_102436eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportScopedFactoryServiceProvider.SCAdReportScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102436ed8);
  (*pcVar1)();
}



/* Entry: 102436f0c; end: 102436f1b; -[_TtC36AdReportScopedFactoryServiceProvider24SCAdReportScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e99a88));
  return;
}



/* Entry: 102436f1c; end: 102436f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102436f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110508050;
  func_0x000107c613fc(&UNK_110508050,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102437260,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102436f88; end: 102437023;  */

void FUN_102436f88(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110507f60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110507f60;
  return;
}



/* Entry: 102437024; end: 10243705b;  */

void FUN_102437024(long *param_1)

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



/* Entry: 10243705c; end: 102437063;  */

undefined8 FUN_10243705c(void)

{
  return 0x1b;
}



/* Entry: 102437064; end: 102437197;  */

void FUN_102437064(undefined8 *param_1)

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
  puVar1 = &UNK_110508078;
  func_0x000107c613fc(&UNK_110508078,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102437238;
  func_0x00010058fa64(FUN_102437238,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102437198; end: 1024371c7;  */

undefined ** FUN_102437198(void)

{
  return &PTR_DAT_112fee340;
}



/* Entry: 1024371c8; end: 1024371e7;  */

void FUN_1024371c8(void)

{
  func_0x000107c61168(&PTR_PTR_11283f8c8);
  return;
}



/* Entry: 1024371e8; end: 102437237;  */

undefined1  [16] FUN_1024371e8(void)

{
  return ZEXT816(0x110507fb0);
}



/* Entry: 102437238; end: 10243725f;  */

void FUN_102437238(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102437260; end: 102437263;  */

void FUN_102437260(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102437264; end: 10243730b;  */

/* WARNING: Possible PIC construction at 0x0001024372f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024372f8) */

void FUN_102437264(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110508100;
  func_0x000107c613fc(&UNK_110508100,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112e99af8;
  func_0x0001000285a8(0x112e99af8,&UNK_10daa65e8);
  func_0x000107c613fc();
  pcVar3 = FUN_102437704;
  func_0x0001000841fc(FUN_102437704,puVar1,uVar2);
  func_0x000100084214(&UNK_10daa65c0,0x26,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10243730c; end: 102437323;  */

/* WARNING: Possible PIC construction at 0x0001024372f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024372f8) */

void FUN_10243730c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110508100;
  func_0x000107c613fc(&UNK_110508100,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e99af8;
  func_0x0001000285a8(0x112e99af8,&UNK_10daa65e8);
  func_0x000107c613fc();
  pcVar4 = FUN_102437704;
  func_0x0001000841fc(FUN_102437704,puVar2,uVar3);
  func_0x000100084214(&UNK_10daa65c0,0x26,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102437324; end: 102437703;  */

void FUN_102437324(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar13 = *param_2;
  func_0x0001000285a8(0x112e99b00,&UNK_10daa65f0);
  puVar1 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102438ae0();
  pcVar3 = "SCAdReportAdInfoScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAdReportAdInfoScopeExposerSubjectServiceProvider",0x32,2);
  func_0x000102438b60();
  func_0x000100082720("SCAdReportReportAdScopeExposerSubjectServiceProvider",0x34,2);
  puVar4 = puVar2;
  FUN_102438b20();
  func_0x000100082720("SCAdReportAdInfoScopeExposerObservableServiceProvider",0x35,2);
  pcVar5 = pcVar3;
  FUN_102438bec();
  func_0x000100082720("SCAdReportReportAdScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_102437024;
  func_0x0001000823a8(FUN_102437024,0);
  func_0x000100082720("SCAdReportScopedServicesCleanupRelayServiceProvider",0x33,2);
  puVar7 = puVar2;
  FUN_102438934(puVar2,pcVar3);
  func_0x000100082720("AdReportScopeGraphBridgeServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e99b08,&UNK_10daa6600);
  puVar8 = &UNK_110508128;
  func_0x000107c613fc(&UNK_110508128,0x38,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(char **)(puVar8 + 0x28) = pcVar5;
  *(undefined8 **)(puVar8 + 0x30) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar4);
  uVar13 = 0x10243770c;
  func_0x0001000823a8(0x10243770c,puVar8);
  func_0x000100082720("SCAdReportEntryPointWrapperServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112e99b10,&UNK_10daa6608);
  puVar8 = &UNK_110508150;
  func_0x000107c613fc(&UNK_110508150,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar13;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x10243771c;
  func_0x0001000823a8(0x10243771c,puVar8);
  func_0x000100082720("SCAdReportScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e99a90,&UNK_10daa63c0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102437728;
  func_0x0001000823a8(0x102437728,uVar9);
  func_0x000100082720("SCAdReportScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e99a80,&UNK_10daa63b0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x102437730;
  func_0x0001000823a8(0x102437730,uVar10);
  func_0x000100082720("SCAdReportScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_110508178;
  func_0x000107c613fc(&UNK_110508178,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  pcVar12 = FUN_102437764;
  func_0x0001000823a8(FUN_102437764,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCAdReportScopeEntryPointProvider",0x21,2);
  *param_1 = pcVar12;
  return;
}



/* Entry: 102437704; end: 102437737;  */

void FUN_102437704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112e99b00,&UNK_10daa65f0);
  puVar1 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102438ae0();
  pcVar3 = "SCAdReportAdInfoScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAdReportAdInfoScopeExposerSubjectServiceProvider",0x32,2);
  func_0x000102438b60();
  func_0x000100082720("SCAdReportReportAdScopeExposerSubjectServiceProvider",0x34,2);
  puVar4 = puVar2;
  FUN_102438b20();
  func_0x000100082720("SCAdReportAdInfoScopeExposerObservableServiceProvider",0x35,2);
  pcVar5 = pcVar3;
  FUN_102438bec();
  func_0x000100082720("SCAdReportReportAdScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_102437024;
  func_0x0001000823a8(FUN_102437024,0);
  func_0x000100082720("SCAdReportScopedServicesCleanupRelayServiceProvider",0x33,2);
  puVar7 = puVar2;
  FUN_102438934(puVar2,pcVar3);
  func_0x000100082720("AdReportScopeGraphBridgeServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e99b08,&UNK_10daa6600);
  puVar8 = &UNK_110508128;
  func_0x000107c613fc(&UNK_110508128,0x38,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar10;
  *(char **)(puVar8 + 0x28) = pcVar5;
  *(undefined8 **)(puVar8 + 0x30) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar4);
  uVar9 = 0x10243770c;
  func_0x0001000823a8(0x10243770c,puVar8);
  func_0x000100082720("SCAdReportEntryPointWrapperServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112e99b10,&UNK_10daa6608);
  puVar8 = &UNK_110508150;
  func_0x000107c613fc(&UNK_110508150,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x10243771c;
  func_0x0001000823a8(0x10243771c,puVar8);
  func_0x000100082720("SCAdReportScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e99a90,&UNK_10daa63c0);
  func_0x000107c6157c(uVar10);
  uVar13 = 0x102437728;
  func_0x0001000823a8(0x102437728,uVar10);
  func_0x000100082720("SCAdReportScopeInitializationServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e99a80,&UNK_10daa63b0);
  func_0x000107c6157c(uVar13);
  uVar11 = 0x102437730;
  func_0x0001000823a8(0x102437730,uVar13);
  func_0x000100082720("SCAdReportScopedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_110508178;
  func_0x000107c613fc(&UNK_110508178,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  pcVar12 = FUN_102437764;
  func_0x0001000823a8(FUN_102437764,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar13);
  func_0x000100082720("SCAdReportScopeEntryPointProvider",0x21,2);
  *param_1 = pcVar12;
  return;
}


