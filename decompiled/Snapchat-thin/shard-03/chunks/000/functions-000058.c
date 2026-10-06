/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102437738; end: 102437763;  */

void FUN_102437738(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102437764; end: 10243776b;  */

void FUN_102437764(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110507f60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110507f60;
  return;
}



/* Entry: 10243776c; end: 102437e5f;  */

void FUN_10243776c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_102437fb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x0001000285a8(0x112e4cd00,&UNK_10da47050);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e4cd08,&UNK_10da47800);
  func_0x000107c610f8();
  uVar5 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126aa838;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar4 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar5 = 0x74726f7065526461;
  func_0x000107c5fadc(0x74726f7065526461,0xed000065706f6353);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar6);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f09c8c0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar6);
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f09c8e0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f09c900);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar5);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f09c920);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_80);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 102437e60; end: 102437ea3;  */

void FUN_102437e60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102437ea4; end: 102437eab;  */

undefined8 FUN_102437ea4(void)

{
  return 0x1b;
}



/* Entry: 102437eac; end: 102437f2f;  */

void FUN_102437eac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102437ff0,param_2,FUN_102437ff4,param_2,FUN_10243801c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102437f30; end: 102437f7f;  */

undefined8 FUN_102437f30(void)

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



/* Entry: 102437f80; end: 102437faf;  */

void FUN_102437f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110508190;
  return;
}



/* Entry: 102437fb0; end: 102437fcf;  */

void FUN_102437fb0(void)

{
  func_0x000107c61168(&PTR_PTR_112e99b80);
  return;
}



/* Entry: 102437fd0; end: 102437ff3;  */

undefined1  [16] FUN_102437fd0(void)

{
  return ZEXT816(0x1105081d0);
}



/* Entry: 102437ff4; end: 10243801b;  */

void FUN_102437ff4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10243801c; end: 102438023;  */

undefined8 FUN_10243801c(void)

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



/* Entry: 102438024; end: 10243805f;  */

void FUN_102438024(undefined8 *param_1,undefined8 param_2)

{
  FUN_102438060();
  func_0x0001000a7f38("SCAdReportScopeInitializationPluginRegistryServiceProvider",0x3a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102438060; end: 10243824b;  */

void FUN_102438060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d73b8;
  ppuVar4 = &PTR_DAT_112fee340;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110508220;
  func_0x000107c613fc(&UNK_110508220,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e99c00;
  func_0x0001000285a8(0x112e99c00,&UNK_10daa6730);
  func_0x0001000a6ee8(&UNK_110508488,"AdReportScopeGraphBridgeScopeInitializationPluginKey",0x34,2,
                      FUN_10243824c,puVar2,uVar3,&UNK_110508488,&PTR_DAT_112e99ca0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105081d0,"SCAdReportEntryPointWrapperScopeInitializationPluginKey",0x37,
                      2,FUN_102438300,param_3,uVar3,&UNK_1105081d0,&PTR_DAT_112e99b18);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110508248;
  func_0x000107c613fc(&UNK_110508248,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110507ff0,"SCAdReportScopedServicesScopeInitializationPluginKey",0x34,2,
                      FUN_1024383b0,puVar2,uVar3,&UNK_110507ff0,&PTR_DAT_112e99a98);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e99c08;
  func_0x0001000285a8(0x112e99c08,&UNK_10daa6738);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10243824c; end: 10243828b;  */

void FUN_10243824c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102438c58(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdReportScopeGraphBridgeScopeInitializationPluginProvider",0x39,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10243828c; end: 1024382ff;  */

void FUN_10243828c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024383ec;
  func_0x0001000823a8(0x1024383ec,param_3);
  func_0x000100082720("SCAdReportEntryPointWrapperScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102438300; end: 102438307;  */

void FUN_102438300(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024383ec;
  func_0x0001000823a8();
  func_0x000100082720("SCAdReportEntryPointWrapperScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102438308; end: 1024383af;  */

void FUN_102438308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110508270;
  func_0x000107c613fc(&UNK_110508270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024383e4;
  func_0x0001000823a8(FUN_1024383e4,puVar1);
  func_0x000100082720("SCAdReportScopedServicesScopeInitializationPluginProvider",0x39,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024383b0; end: 1024383b7;  */

void FUN_1024383b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110508270;
  func_0x000107c613fc(&UNK_110508270,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024383e4;
  func_0x0001000823a8(FUN_1024383e4,puVar3);
  func_0x000100082720("SCAdReportScopedServicesScopeInitializationPluginProvider",0x39,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024383b8; end: 1024383e3;  */

void FUN_1024383b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024383e4; end: 1024383f3;  */

void FUN_1024383e4(undefined8 *param_1)

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



/* Entry: 1024383f4; end: 10243850b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024383f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102438844();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e99c10) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e99c18) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10243850c);
  (*pcVar2)();
}



/* Entry: 10243850c; end: 10243856b; -[_TtC24AdReportScopeGraphBridge39AdReportScopeGraphBridgeSaberEntryPoint init] */

void FUN_10243850c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportScopeGraphBridge.AdReportScopeGraphBridgeSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102438538);
  (*pcVar1)();
}



/* Entry: 10243856c; end: 1024385a3; -[_TtC24AdReportScopeGraphBridge39AdReportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102438588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243858c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243856c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99c10));
  return;
}



/* Entry: 1024385a4; end: 1024385cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024385a4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e99c18),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e99c10));
  return;
}



/* Entry: 1024385cc; end: 1024385eb;  */

void FUN_1024385cc(void)

{
  func_0x000107c61168(&PTR_PTR_11283f988);
  return;
}



/* Entry: 1024385ec; end: 102438673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024385ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99c48) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e99c50);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102438674);
  (*pcVar2)();
}



/* Entry: 102438674; end: 10243875b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102438674(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99c48);
  *(undefined **)(unaff_x20 + _DAT_112e99c48) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99c50);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e99c50))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110508340;
  func_0x000107c613fc(&UNK_110508340,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102438760,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10243875c; end: 102438767;  */

void FUN_10243875c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102438768; end: 1024387c7; -[_TtC24AdReportScopeGraphBridge39SCAdReportScopedServicesSaberEntryPoint init] */

void FUN_102438768(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportScopeGraphBridge.SCAdReportScopedServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102438794);
  (*pcVar1)();
}



/* Entry: 1024387c8; end: 1024387ff; -[_TtC24AdReportScopeGraphBridge39SCAdReportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024387c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e99c50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99c48));
  return;
}



/* Entry: 102438800; end: 102438803;  */

void FUN_102438800(void)

{
  return;
}



/* Entry: 102438804; end: 102438823;  */

void FUN_102438804(void)

{
  FUN_102438674();
  return;
}



/* Entry: 102438824; end: 102438843;  */

void FUN_102438824(void)

{
  func_0x000107c61168(&PTR_PTR_11283fa50);
  return;
}



/* Entry: 102438844; end: 102438913;  */

undefined8 FUN_102438844(void)

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
  
  func_0x000107c61428(0x112e99c80,&uStack_40,0x20,0);
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
    FUN_102438914();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102438914; end: 102438933;  */

void FUN_102438914(void)

{
  func_0x000107c61168(&PTR_PTR_11283fb18);
  return;
}



/* Entry: 102438934; end: 102438957;  */

void FUN_102438934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110508388;
  func_0x0001000285a8(0x112e99c88,&UNK_10daa67d8);
  func_0x000107c613fc(&UNK_110508388,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024389dc,puVar1);
  return;
}



/* Entry: 102438958; end: 1024389db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102438958(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102438914();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e99c90) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e99c98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1024389dc; end: 1024389e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024389dc(undefined8 *param_1)

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
  FUN_102438914();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e99c90) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e99c98) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1024389e4; end: 102438a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024389e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99c90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e99c98) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102438a48; end: 102438aa7; -[_TtC24AdReportScopeGraphBridge32AdReportScopeGraphBridgeServices init] */

void FUN_102438a48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportScopeGraphBridge.AdReportScopeGraphBridgeServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102438a74);
  (*pcVar1)();
}



/* Entry: 102438aa8; end: 102438b1f; -[_TtC24AdReportScopeGraphBridge32AdReportScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102438ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102438ac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102438aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e99c90));
  return;
}



/* Entry: 102438b20; end: 102438b2b;  */

void FUN_102438b20(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102438b2c,param_1);
  return;
}



/* Entry: 102438b2c; end: 102438beb;  */

void FUN_102438b2c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102438bec; end: 102438bf7;  */

void FUN_102438bec(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102438f1c,param_1);
  return;
}



/* Entry: 102438bf8; end: 102438c4f;  */

void FUN_102438bf8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102438c50; end: 102438c7b;  */

undefined8 FUN_102438c50(void)

{
  return 0x1b;
}



/* Entry: 102438c7c; end: 102438cfb;  */

void FUN_102438c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 102438cfc; end: 102438df3;  */

void FUN_102438cfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e99c80,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e99c80,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105084c8;
  func_0x000107c613fc(&UNK_1105084c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102438f14;
  func_0x00010058fa64(0x102438f14,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102438df4; end: 102438e1f;  */

void FUN_102438df4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102438e20; end: 102438e27;  */

void FUN_102438e20(undefined8 *param_1)

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
  func_0x000107c61428(0x112e99c80,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e99c80,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105084c8;
  func_0x000107c613fc(&UNK_1105084c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102438f14;
  func_0x00010058fa64(0x102438f14,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102438e28; end: 102438e83;  */

void FUN_102438e28(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e99c80,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e99c80,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102438e84; end: 102438f27;  */

undefined ** FUN_102438e84(void)

{
  return &PTR_DAT_112fee340;
}



/* Entry: 102438f28; end: 102438f6f; -[SCAdReportScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102438f28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99cf0;
  func_0x000107c61428(param_1 + _DAT_112e99cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102438f70; end: 102438fc7; -[SCAdReportScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102438f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99cf0;
  func_0x000107c61428(param_1 + _DAT_112e99cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102438fc8; end: 10243900f; -[SCAdReportScopeGraphBridgeSaberEntryPoint sCAdReportAdInfoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102438fc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99cf8;
  func_0x000107c61428(param_1 + _DAT_112e99cf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102439010; end: 10243901b; -[SCAdReportScopeGraphBridgeSaberEntryPoint setSCAdReportAdInfoScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99cf8;
  func_0x000107c61428(param_1 + _DAT_112e99cf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10243901c; end: 102439063; -[SCAdReportScopeGraphBridgeSaberEntryPoint sCAdReportReportAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243901c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99d00;
  func_0x000107c61428(param_1 + _DAT_112e99d00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102439064; end: 10243906f; -[SCAdReportScopeGraphBridgeSaberEntryPoint setSCAdReportReportAdScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439064(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99d00;
  func_0x000107c61428(param_1 + _DAT_112e99d00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102439070; end: 1024390b7; -[SCAdReportScopeGraphBridgeSaberEntryPoint adReportScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439070(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99d08;
  func_0x000107c61428(param_1 + _DAT_112e99d08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024390b8; end: 1024390c3; -[SCAdReportScopeGraphBridgeSaberEntryPoint setAdReportScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024390b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99d08;
  func_0x000107c61428(param_1 + _DAT_112e99d08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024390c4; end: 102439123;  */

void FUN_1024390c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102439124; end: 10243935b;  */

/* WARNING: Possible PIC construction at 0x000102439290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024392a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024392bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024392cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024392e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102439330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024392d0) */
/* WARNING: Removing unreachable block (ram,0x0001024392c0) */
/* WARNING: Removing unreachable block (ram,0x0001024392a4) */
/* WARNING: Removing unreachable block (ram,0x000102439294) */
/* WARNING: Removing unreachable block (ram,0x000102439334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439124(void)

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
  func_0x000107c509fc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50a04();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c3d444();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1024385cc();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102438844();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10243935c);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e99c10) = lVar5;
        *(long *)(lVar4 + _DAT_112e99c18) = unaff_x20;
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



/* Entry: 10243935c; end: 102439383; -[SCAdReportScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10243935c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102439124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102439384; end: 1024393c7; -[SCAdReportScopeGraphBridgeSaberEntryPoint end] */

void FUN_102439384(undefined8 param_1)

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



/* Entry: 1024393c8; end: 102439637;  */

void FUN_1024393c8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0fad760)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0528a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0fad720)) ||
           (func_0x000107c605b8(0xd00000000000001e,0x800000010f0528e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57fac();
        }
        else {
          uVar2 = 0xd000000000000027;
          if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f63460)) &&
             (func_0x000107c605b8(0xd000000000000027,0x800000010f09cba0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "AdReportScopeGraphBridge/SCAdReportScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x48,2,0x36,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102439638);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c523b8();
        }
        goto LAB_102439454;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57fa4();
  }
LAB_102439454:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102439638; end: 1024396e3; -[SCAdReportScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102439638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024393c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024396e4; end: 102439767; -[SCAdReportScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024396e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99cf0,0);
  *(undefined8 *)(param_1 + _DAT_112e99cf8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99d00) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99d08) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99d10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102439768; end: 10243979b;  */

void FUN_102439768(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10243979c; end: 102439803; -[SCAdReportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024397c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024397e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024397cc) */
/* WARNING: Removing unreachable block (ram,0x0001024397ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243979c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99cf8));
  return;
}



/* Entry: 102439804; end: 102439823;  */

void FUN_102439804(void)

{
  func_0x000107c61168(&PTR_PTR_11283fbe0);
  return;
}



/* Entry: 102439824; end: 10243986b; -[SCSCAdReportScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99d40;
  func_0x000107c61428(param_1 + _DAT_112e99d40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10243986c; end: 1024398c3; -[SCSCAdReportScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243986c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99d40;
  func_0x000107c61428(param_1 + _DAT_112e99d40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024398c4; end: 10243999b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024398c4(undefined8 param_1,long param_2)

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
    FUN_102438824();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e99c48) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10243999c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e99c50);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e99d48);
    *(long **)(unaff_x20 + _DAT_112e99d48) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10243999c; end: 1024399c3; -[SCSCAdReportScopedServicesSaberEntryPoint begin] */

void FUN_10243999c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024398c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024399c4; end: 102439b3b;  */

/* WARNING: Possible PIC construction at 0x000102439a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102439ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102439a30) */
/* WARNING: Removing unreachable block (ram,0x000102439ac8) */
/* WARNING: Removing unreachable block (ram,0x000102439ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024399c4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99d48);
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



/* Entry: 102439b3c; end: 102439b43;  */

void FUN_102439b3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102439b44; end: 102439b77; -[SCSCAdReportScopedServicesSaberEntryPoint end] */

void FUN_102439b44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024399c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102439b78; end: 102439c97;  */

void FUN_102439b78(long param_1,long param_2,long param_3)

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
                        "AdReportScopeGraphBridge/SCSCAdReportScopedServicesSaberEntryPoint.swift",
                        0x48,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102439c98);
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



/* Entry: 102439c98; end: 102439d43; -[SCSCAdReportScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102439c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102439b78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102439d44; end: 102439da3; -[SCSCAdReportScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439d44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99d40,0);
  *(undefined8 *)(param_1 + _DAT_112e99d48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102439da4; end: 102439dd7;  */

void FUN_102439da4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102439dd8; end: 102439e0f; -[SCSCAdReportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439dd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99d48));
  return;
}



/* Entry: 102439e10; end: 102439e2f;  */

void FUN_102439e10(void)

{
  func_0x000107c61168(&PTR_PTR_11283fcb8);
  return;
}



/* Entry: 102439e30; end: 102439e4f; -[AdNetworkManagerSwift unlockablesRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439e30(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = _DAT_112e99d78;
  lVar5 = *(long *)(param_1 + _DAT_112e99d78);
  lVar2 = param_1;
  func_0x000107c61174();
  if (lVar5 == 0) {
    uVar3 = 3;
    FUN_10243c4c8();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = uVar3;
    func_0x000107c615e8(uVar4);
    lVar5 = *(long *)(param_1 + lVar1);
  }
  func_0x000107c615f0(lVar5);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 102439e50; end: 102439e5f; -[AdNetworkManagerSwift snapAdsRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439e50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = _DAT_112e99d80;
  lVar5 = *(long *)(param_1 + _DAT_112e99d80);
  lVar2 = param_1;
  func_0x000107c61174();
  if (lVar5 == 0) {
    uVar3 = 4;
    FUN_10243c4c8();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = uVar3;
    func_0x000107c615e8(uVar4);
    lVar5 = *(long *)(param_1 + lVar1);
  }
  func_0x000107c615f0(lVar5);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 102439e60; end: 102439ed3;  */

void FUN_102439e60(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  lVar3 = *(long *)(param_1 + lVar4);
  lVar1 = param_1;
  func_0x000107c61174();
  if (lVar3 == 0) {
    FUN_10243c4c8();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_4;
    func_0x000107c615e8(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x000107c615f0(lVar3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102439ed4; end: 102439ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439ed4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112e99d80;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99d80);
  if (lVar2 == 0) {
    uVar3 = 4;
    FUN_10243c4c8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
    func_0x000107c615e8(uVar4);
    lVar2 = *(long *)(unaff_x20 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar2);
  return;
}



/* Entry: 102439ee4; end: 102439f23;  */

void FUN_102439ee4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  if (lVar1 == 0) {
    FUN_10243c4c8();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = param_2;
    func_0x000107c615e8(uVar2);
    lVar1 = *(long *)(unaff_x20 + lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(lVar1);
  return;
}



/* Entry: 102439f24; end: 102439f43; -[AdNetworkManagerSwift _unlockablesRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439f24(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e99d78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102439f44; end: 102439f4f; -[AdNetworkManagerSwift set_unlockablesRetriableRequestManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e99d78);
  *(undefined8 *)(param_1 + _DAT_112e99d78) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102439f50; end: 102439f6f; -[AdNetworkManagerSwift _snapAdsRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439f50(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e99d80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102439f70; end: 102439f7b; -[AdNetworkManagerSwift set_snapAdsRetriableRequestManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e99d80);
  *(undefined8 *)(param_1 + _DAT_112e99d80) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102439f7c; end: 102439f9b; -[AdNetworkManagerSwift _snapAdsRetriableRequestManagerV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439f7c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e99d88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102439f9c; end: 102439fa7; -[AdNetworkManagerSwift set_snapAdsRetriableRequestManagerV3:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e99d88);
  *(undefined8 *)(param_1 + _DAT_112e99d88) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102439fa8; end: 102439fd7;  */

void FUN_102439fa8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102439fd8; end: 10243a0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102439fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d98) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e99da0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e99da8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e99db0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e99db8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e99dc0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e99dc8) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243a0d8; end: 10243a18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243a0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e99d78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e99d98) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e99da0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e99da8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e99db0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e99db8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e99dc0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e99dc8) = param_8;
  FUN_10243c6c0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243a18c; end: 10243a3db; -[AdNetworkManagerSwift initWithAdConfigProvider:retroNetworkServices:lifecycleTracker:performer:httpMetadataService:httpRequestModifier:adConfigProviderV2:objcSupport:] */

void FUN_10243a18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_10);
  FUN_10243a0d8(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 10243a3dc; end: 10243a4e3; -[AdNetworkManagerSwift submit:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010243a4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243a4c8) */

void FUN_10243a3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_110508800;
    func_0x000107c613fc(&UNK_110508800,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar1 = 0x10243d25c;
  }
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar5 = &UNK_1105087d8;
    func_0x000107c613fc(&UNK_1105087d8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    uVar4 = 0x10243d218;
  }
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010243a254(param_3,uVar1,puVar3,uVar4,puVar5);
  func_0x000100cf1eb8(uVar4,puVar5);
  func_0x000100cf1eb8(uVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


