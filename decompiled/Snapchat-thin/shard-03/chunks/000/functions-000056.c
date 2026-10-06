/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10243233c; end: 102432377;  */

void FUN_10243233c(void)

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



/* Entry: 102432378; end: 102432393;  */

void FUN_102432378(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10243296c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAdReportHideAdScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102432394; end: 1024323bf;  */

void FUN_102432394(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024323c0; end: 1024323c7;  */

void FUN_1024323c0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110507310;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110507310;
  return;
}



/* Entry: 1024323c8; end: 10243251f;  */

void FUN_1024323c8(undefined8 *param_1)

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
  FUN_1024328bc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10243264c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 102432520; end: 10243255b;  */

void FUN_102432520(void)

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



/* Entry: 10243255c; end: 102432563;  */

undefined8 FUN_10243255c(void)

{
  return 0x1b;
}



/* Entry: 102432564; end: 1024325e7;  */

void FUN_102432564(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024328fc,param_2,FUN_102432900,param_2,FUN_102432928,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024325e8; end: 102432637;  */

undefined8 FUN_1024325e8(void)

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



/* Entry: 102432638; end: 10243264b;  */

void FUN_102432638(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110507540;
  return;
}



/* Entry: 10243264c; end: 10243289f;  */

void FUN_10243264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar1 = PTR_PTR_1126aa828;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x6353644165646968;
  func_0x000107c5fadc(0x6353644165646968,0xeb0000000065706f);
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



/* Entry: 1024328a0; end: 1024328bb;  */

undefined ** FUN_1024328a0(void)

{
  return &PTR_DAT_112fee208;
}



/* Entry: 1024328bc; end: 1024328db;  */

void FUN_1024328bc(void)

{
  func_0x000107c61168(&PTR_PTR_112e995b8);
  return;
}



/* Entry: 1024328dc; end: 1024328ff;  */

undefined1  [16] FUN_1024328dc(void)

{
  return ZEXT816(0x110507580);
}



/* Entry: 102432900; end: 102432927;  */

void FUN_102432900(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102432928; end: 10243292f;  */

undefined8 FUN_102432928(void)

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



/* Entry: 102432930; end: 10243296b;  */

void FUN_102432930(undefined8 *param_1,undefined8 param_2)

{
  FUN_10243296c();
  func_0x0001000a7f38("SCAdReportHideAdScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10243296c; end: 102432b57;  */

void FUN_10243296c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d7308;
  ppuVar4 = &PTR_DAT_112fee208;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105075d0;
  func_0x000107c613fc(&UNK_1105075d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e99638;
  func_0x0001000285a8(0x112e99638,&UNK_10daa5a20);
  func_0x0001000a6ee8(&UNK_1105077d0,"AdReportHideAdScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_102432b58,puVar2,uVar3,&UNK_1105077d0,&PTR_DAT_112e996d0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110507580,"SCAdReportHideAdEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_102432c0c,param_3,uVar3,&UNK_110507580,&PTR_DAT_112e99550);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105075f8;
  func_0x000107c613fc(&UNK_1105075f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105073a0,"SCAdReportHideAdScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_102432cbc,puVar2,uVar3,&UNK_1105073a0,&PTR_DAT_112e994d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e99640;
  func_0x0001000285a8(0x112e99640,&UNK_10daa5a28);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102432b58; end: 102432b97;  */

void FUN_102432b58(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102433484(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdReportHideAdScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102432b98; end: 102432c0b;  */

void FUN_102432b98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102432cf8;
  func_0x0001000823a8(0x102432cf8,param_3);
  func_0x000100082720("SCAdReportHideAdEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102432c0c; end: 102432c13;  */

void FUN_102432c0c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102432cf8;
  func_0x0001000823a8();
  func_0x000100082720("SCAdReportHideAdEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102432c14; end: 102432cbb;  */

void FUN_102432c14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110507620;
  func_0x000107c613fc(&UNK_110507620,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102432cf0;
  func_0x0001000823a8(FUN_102432cf0,puVar1);
  func_0x000100082720("SCAdReportHideAdScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102432cbc; end: 102432cc3;  */

void FUN_102432cbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110507620;
  func_0x000107c613fc(&UNK_110507620,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102432cf0;
  func_0x0001000823a8(FUN_102432cf0,puVar3);
  func_0x000100082720("SCAdReportHideAdScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102432cc4; end: 102432cef;  */

void FUN_102432cc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102432cf0; end: 102432cff;  */

void FUN_102432cf0(undefined8 *param_1)

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
  puVar1 = &UNK_110507428;
  func_0x000107c613fc(&UNK_110507428,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102431ec8;
  func_0x00010058fa64(FUN_102431ec8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102432d00; end: 102432ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102432d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_102433114();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e99648) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e99650) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102432ddc);
  (*pcVar1)();
}



/* Entry: 102432ddc; end: 102432e3b; -[_TtC30AdReportHideAdScopeGraphBridge45AdReportHideAdScopeGraphBridgeSaberEntryPoint init] */

void FUN_102432ddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportHideAdScopeGraphBridge.AdReportHideAdScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102432e08);
  (*pcVar1)();
}



/* Entry: 102432e3c; end: 102432e73; -[_TtC30AdReportHideAdScopeGraphBridge45AdReportHideAdScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102432e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102432e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102432e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99648));
  return;
}



/* Entry: 102432e74; end: 102432e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102432e74(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e99650),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e99648));
  return;
}



/* Entry: 102432e9c; end: 102432ebb;  */

void FUN_102432e9c(void)

{
  func_0x000107c61168(&PTR_PTR_11283f048);
  return;
}



/* Entry: 102432ebc; end: 102432f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102432ebc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99680) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e99688);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102432f44);
  (*pcVar2)();
}



/* Entry: 102432f44; end: 10243302b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102432f44(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99680);
  *(undefined **)(unaff_x20 + _DAT_112e99680) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99688);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e99688))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105076f0;
  func_0x000107c613fc(&UNK_1105076f0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102433030,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10243302c; end: 102433037;  */

void FUN_10243302c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102433038; end: 102433097; -[_TtC30AdReportHideAdScopeGraphBridge45SCAdReportHideAdScopedServicesSaberEntryPoint init] */

void FUN_102433038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportHideAdScopeGraphBridge.SCAdReportHideAdScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102433064);
  (*pcVar1)();
}



/* Entry: 102433098; end: 1024330cf; -[_TtC30AdReportHideAdScopeGraphBridge45SCAdReportHideAdScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433098(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e99688));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99680));
  return;
}



/* Entry: 1024330d0; end: 1024330d3;  */

void FUN_1024330d0(void)

{
  return;
}



/* Entry: 1024330d4; end: 1024330f3;  */

void FUN_1024330d4(void)

{
  FUN_102432f44();
  return;
}



/* Entry: 1024330f4; end: 102433113;  */

void FUN_1024330f4(void)

{
  func_0x000107c61168(&PTR_PTR_11283f110);
  return;
}



/* Entry: 102433114; end: 1024331e3;  */

undefined8 FUN_102433114(void)

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
  
  func_0x000107c61428(0x112e996b8,&uStack_40,0x20,0);
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
    FUN_1024331e4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024331e4; end: 102433203;  */

void FUN_1024331e4(void)

{
  func_0x000107c61168(&PTR_PTR_11283f1d8);
  return;
}



/* Entry: 102433204; end: 10243321f;  */

void FUN_102433204(undefined8 param_1)

{
  func_0x0001000285a8(0x112e996c0,&UNK_10daa5ad8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10243328c,param_1);
  return;
}



/* Entry: 102433220; end: 10243328b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433220(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1024331e4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e996c8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10243328c; end: 102433293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243328c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1024331e4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e996c8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102433294; end: 1024332df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433294(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e996c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024332e0; end: 10243333f; -[_TtC30AdReportHideAdScopeGraphBridge38AdReportHideAdScopeGraphBridgeServices init] */

void FUN_1024332e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportHideAdScopeGraphBridge.AdReportHideAdScopeGraphBridgeServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243330c);
  (*pcVar1)();
}



/* Entry: 102433340; end: 10243334f; -[_TtC30AdReportHideAdScopeGraphBridge38AdReportHideAdScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e996c8));
  return;
}



/* Entry: 102433350; end: 1024333db;  */

void FUN_102433350(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102433390,0);
  return;
}



/* Entry: 1024333dc; end: 1024333f7;  */

void FUN_1024333dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102433448,param_1);
  return;
}



/* Entry: 1024333f8; end: 102433447;  */

void FUN_1024333f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102433448; end: 10243347b;  */

void FUN_102433448(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10243347c; end: 102433483;  */

undefined8 FUN_10243347c(void)

{
  return 0x1b;
}



/* Entry: 102433484; end: 1024335fb;  */

void FUN_102433484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110507738;
  func_0x000107c613fc(&UNK_110507738,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024335fc,puVar1);
  return;
}



/* Entry: 1024335fc; end: 102433603;  */

void FUN_1024335fc(undefined8 *param_1)

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
  func_0x000107c61428(0x112e996b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e996b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110507810;
  func_0x000107c613fc(&UNK_110507810,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024336d0;
  func_0x00010058fa64(0x1024336d0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102433604; end: 10243365f;  */

void FUN_102433604(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e996b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e996b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102433660; end: 1024336d7;  */

undefined ** FUN_102433660(void)

{
  return &PTR_DAT_112fee208;
}



/* Entry: 1024336d8; end: 10243371f; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024336d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99720;
  func_0x000107c61428(param_1 + _DAT_112e99720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102433720; end: 102433777; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99720;
  func_0x000107c61428(param_1 + _DAT_112e99720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102433778; end: 1024337bf; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint sCCustomReportV3ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99728;
  func_0x000107c61428(param_1 + _DAT_112e99728,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024337c0; end: 1024337cb; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint setSCCustomReportV3ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024337c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99728;
  func_0x000107c61428(param_1 + _DAT_112e99728,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024337cc; end: 102433813; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint adReportHideAdScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024337cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99730;
  func_0x000107c61428(param_1 + _DAT_112e99730,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102433814; end: 10243381f; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint setAdReportHideAdScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99730;
  func_0x000107c61428(param_1 + _DAT_112e99730,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102433820; end: 10243387f;  */

void FUN_102433820(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102433880; end: 102433a3b;  */

/* WARNING: Possible PIC construction at 0x000102433998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024339bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024339cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102433a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024339d0) */
/* WARNING: Removing unreachable block (ram,0x0001024339c0) */
/* WARNING: Removing unreachable block (ram,0x00010243399c) */
/* WARNING: Removing unreachable block (ram,0x000102433a14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433880(void)

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
    func_0x000107c3d434();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102432e9c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102433114();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102433a3c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e99648) = lVar5;
      *(long *)(lVar3 + _DAT_112e99650) = unaff_x20;
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



/* Entry: 102433a3c; end: 102433a63; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102433a3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102433880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102433a64; end: 102433aa7; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint end] */

void FUN_102433a64(undefined8 param_1)

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



/* Entry: 102433aa8; end: 102433cab;  */

void FUN_102433aa8(long param_1,long param_2,long param_3)

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
        uVar2 = 0xd00000000000002d;
        if (((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0f63f90)) &&
           (func_0x000107c605b8(0xd00000000000002d,0x800000010f09c070,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AdReportHideAdScopeGraphBridge/SCAdReportHideAdScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x54,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102433cac);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c523ac();
        goto LAB_102433b34;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58274();
  }
LAB_102433b34:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102433cac; end: 102433d57; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102433cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102433aa8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102433d58; end: 102433dcf; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433d58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99720,0);
  *(undefined8 *)(param_1 + _DAT_112e99728) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99730) = 0;
  *(undefined8 *)(param_1 + _DAT_112e99738) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102433dd0; end: 102433e03;  */

void FUN_102433dd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102433e04; end: 102433e5b; -[SCAdReportHideAdScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102433e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102433e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433e04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99728));
  return;
}



/* Entry: 102433e5c; end: 102433e7b;  */

void FUN_102433e5c(void)

{
  func_0x000107c61168(&PTR_PTR_11283f298);
  return;
}



/* Entry: 102433e7c; end: 102433ec3; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433e7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e99768;
  func_0x000107c61428(param_1 + _DAT_112e99768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102433ec4; end: 102433f1b; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e99768;
  func_0x000107c61428(param_1 + _DAT_112e99768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102433f1c; end: 102433ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102433f1c(undefined8 param_1,long param_2)

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
    FUN_1024330f4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e99680) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102433ff4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e99688);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e99770);
    *(long **)(unaff_x20 + _DAT_112e99770) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102433ff4; end: 10243401b; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint begin] */

void FUN_102433ff4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102433f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10243401c; end: 102434193;  */

/* WARNING: Possible PIC construction at 0x000102434084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243411c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102434088) */
/* WARNING: Removing unreachable block (ram,0x000102434120) */
/* WARNING: Removing unreachable block (ram,0x000102434138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243401c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99770);
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



/* Entry: 102434194; end: 10243419b;  */

void FUN_102434194(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10243419c; end: 1024341cf; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint end] */

void FUN_10243419c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10243401c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024341d0; end: 1024342ef;  */

void FUN_1024341d0(long param_1,long param_2,long param_3)

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
                        "AdReportHideAdScopeGraphBridge/SCSCAdReportHideAdScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024342f0);
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



/* Entry: 1024342f0; end: 10243439b; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1024342f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024341d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10243439c; end: 1024343fb; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243439c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e99768,0);
  *(undefined8 *)(param_1 + _DAT_112e99770) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024343fc; end: 10243442f;  */

void FUN_1024343fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102434430; end: 102434467; -[SCSCAdReportHideAdScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102434430(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e99768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99770));
  return;
}



/* Entry: 102434468; end: 102434487;  */

void FUN_102434468(void)

{
  func_0x000107c61168(&PTR_PTR_11283f368);
  return;
}



/* Entry: 102434488; end: 1024344f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102434488(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10243487c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e997a8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024344f4; end: 10243455f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024344f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e997a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102434560; end: 1024345bf; -[_TtC44AdReportReportAdScopedFactoryServiceProvider32SCAdReportReportAdScopedServices init] */

void FUN_102434560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportReportAdScopedFactoryServiceProvider.SCAdReportReportAdScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243458c);
  (*pcVar1)();
}



/* Entry: 1024345c0; end: 1024345cf; -[_TtC44AdReportReportAdScopedFactoryServiceProvider32SCAdReportReportAdScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024345c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e997a8));
  return;
}



/* Entry: 1024345d0; end: 10243463b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024345d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110507a28;
  func_0x000107c613fc(&UNK_110507a28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102434914,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10243463c; end: 1024346d7;  */

void FUN_10243463c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110507938;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110507938;
  return;
}



/* Entry: 1024346d8; end: 10243470f;  */

void FUN_1024346d8(long *param_1)

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



/* Entry: 102434710; end: 102434717;  */

undefined8 FUN_102434710(void)

{
  return 0x1b;
}



/* Entry: 102434718; end: 10243484b;  */

void FUN_102434718(undefined8 *param_1)

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



/* Entry: 10243484c; end: 10243487b;  */

undefined ** FUN_10243484c(void)

{
  return &PTR_DAT_112fee2a8;
}



/* Entry: 10243487c; end: 10243489b;  */

void FUN_10243487c(void)

{
  func_0x000107c61168(&PTR_PTR_11283f428);
  return;
}



/* Entry: 10243489c; end: 1024348eb;  */

undefined1  [16] FUN_10243489c(void)

{
  return ZEXT816(0x110507988);
}



/* Entry: 1024348ec; end: 102434913;  */

void FUN_1024348ec(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102434914; end: 102434927;  */

void FUN_102434914(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102434928; end: 102434c9b;  */

void FUN_102434928(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e99820,&UNK_10daa5f48);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102435c9c();
  func_0x000100082720("SCCustomReportV3ScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_102435d28();
  func_0x000100082720("SCCustomReportV3ScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024346d8;
  func_0x0001000823a8(FUN_1024346d8,0);
  func_0x000100082720("SCAdReportReportAdScopedServicesCleanupRelayServiceProvider",0x3b,2);
  puVar5 = puVar2;
  FUN_102435b50();
  func_0x000100082720("AdReportReportAdScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e99828,&UNK_10daa5f60);
  puVar6 = &UNK_110507b00;
  func_0x000107c613fc(&UNK_110507b00,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102434ca4;
  func_0x0001000823a8(0x102434ca4,puVar6);
  func_0x000100082720("SCAdReportReportAdEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e99830,&UNK_10daa5f50);
  puVar6 = &UNK_110507b28;
  func_0x000107c613fc(&UNK_110507b28,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_102434cec;
  func_0x0001000823a8(FUN_102434cec,puVar6);
  func_0x000100082720("SCAdReportReportAdScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e997b0,&UNK_10daa5cf0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x102434cf8;
  func_0x0001000823a8(0x102434cf8,pcVar7);
  func_0x000100082720("SCAdReportReportAdScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e997a0,&UNK_10daa5ce0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102434d00;
  func_0x0001000823a8(0x102434d00,uVar8);
  func_0x000100082720("SCAdReportReportAdScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110507b50;
  func_0x000107c613fc(&UNK_110507b50,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102434d08;
  func_0x0001000823a8(0x102434d08,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCAdReportReportAdScopeEntryPointProvider",0x29,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102434c9c; end: 102434caf;  */

void FUN_102434c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e99820,&UNK_10daa5f48);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102435c9c();
  func_0x000100082720("SCCustomReportV3ScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_102435d28();
  func_0x000100082720("SCCustomReportV3ScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024346d8;
  func_0x0001000823a8(FUN_1024346d8,0);
  func_0x000100082720("SCAdReportReportAdScopedServicesCleanupRelayServiceProvider",0x3b,2);
  puVar5 = puVar2;
  FUN_102435b50();
  func_0x000100082720("AdReportReportAdScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e99828,&UNK_10daa5f60);
  puVar6 = &UNK_110507b00;
  func_0x000107c613fc(&UNK_110507b00,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x102434ca4;
  func_0x0001000823a8(0x102434ca4,puVar6);
  func_0x000100082720("SCAdReportReportAdEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e99830,&UNK_10daa5f50);
  puVar6 = &UNK_110507b28;
  func_0x000107c613fc(&UNK_110507b28,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_102434cec;
  func_0x0001000823a8(FUN_102434cec,puVar6);
  func_0x000100082720("SCAdReportReportAdScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e997b0,&UNK_10daa5cf0);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x102434cf8;
  func_0x0001000823a8(0x102434cf8,pcVar8);
  func_0x000100082720("SCAdReportReportAdScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e997a0,&UNK_10daa5ce0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102434d00;
  func_0x0001000823a8(0x102434d00,uVar9);
  func_0x000100082720("SCAdReportReportAdScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110507b50;
  func_0x000107c613fc(&UNK_110507b50,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x102434d08;
  func_0x0001000823a8(0x102434d08,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCAdReportReportAdScopeEntryPointProvider",0x29,2);
  *param_1 = uVar10;
  return;
}


