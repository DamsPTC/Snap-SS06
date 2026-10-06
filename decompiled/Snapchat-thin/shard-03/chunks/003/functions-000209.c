/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102715f08; end: 102715fa3;  */

void FUN_102715f08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102715fa4; end: 102715fab;  */

undefined8 FUN_102715fa4(void)

{
  return 0x1b;
}



/* Entry: 102715fac; end: 10271602f;  */

void FUN_102715fac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027160f0,param_2,FUN_1027160f4,param_2,FUN_10271611c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102716030; end: 10271607f;  */

undefined8 FUN_102716030(void)

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



/* Entry: 102716080; end: 1027160af;  */

undefined ** FUN_102716080(void)

{
  return &PTR_DAT_113066d60;
}



/* Entry: 1027160b0; end: 1027160cf;  */

void FUN_1027160b0(void)

{
  func_0x000107c61168(&PTR_PTR_112eba7e8);
  return;
}



/* Entry: 1027160d0; end: 1027160f3;  */

undefined1  [16] FUN_1027160d0(void)

{
  return ZEXT816(0x11053fc08);
}



/* Entry: 1027160f4; end: 10271611b;  */

void FUN_1027160f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10271611c; end: 102716123;  */

undefined8 FUN_10271611c(void)

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



/* Entry: 102716124; end: 10271615f;  */

void FUN_102716124(undefined8 *param_1,undefined8 param_2)

{
  FUN_102716160();
  func_0x0001000a7f38("SCMapSnapshotViewScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102716160; end: 10271634b;  */

void FUN_102716160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d8c0;
  ppuVar4 = &PTR_DAT_113066d60;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11053fc58;
  func_0x000107c613fc(&UNK_11053fc58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112eba8a8;
  func_0x0001000285a8(0x112eba8a8,&UNK_10dad2ad8);
  func_0x0001000a6ee8(&UNK_11053fe68,"MapSnapshotViewScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_10271634c,puVar2,uVar3,&UNK_11053fe68,&PTR_DAT_112eba938);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11053fc08,
                      "SCMapSnapshotViewEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_102716400,param_3,uVar3,&UNK_11053fc08,&PTR_DAT_112eba780);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11053fc80;
  func_0x000107c613fc(&UNK_11053fc80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11053fa28,"SCMapSnapshotViewScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_1027164b0,puVar2,uVar3,&UNK_11053fa28,&PTR_DAT_112eba700);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112eba8b0;
  func_0x0001000285a8(0x112eba8b0,&UNK_10dad2ae0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10271634c; end: 10271638b;  */

void FUN_10271634c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102716a88(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MapSnapshotViewScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10271638c; end: 1027163ff;  */

void FUN_10271638c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1027164ec;
  func_0x0001000823a8(0x1027164ec,param_3);
  func_0x000100082720("SCMapSnapshotViewEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102716400; end: 102716407;  */

void FUN_102716400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1027164ec;
  func_0x0001000823a8();
  func_0x000100082720("SCMapSnapshotViewEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102716408; end: 1027164af;  */

void FUN_102716408(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11053fca8;
  func_0x000107c613fc(&UNK_11053fca8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1027164e4;
  func_0x0001000823a8(FUN_1027164e4,puVar1);
  func_0x000100082720("SCMapSnapshotViewScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1027164b0; end: 1027164b7;  */

void FUN_1027164b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11053fca8;
  func_0x000107c613fc(&UNK_11053fca8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1027164e4;
  func_0x0001000823a8(FUN_1027164e4,puVar3);
  func_0x000100082720("SCMapSnapshotViewScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027164b8; end: 1027164e3;  */

void FUN_1027164b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027164e4; end: 1027164f3;  */

void FUN_1027164e4(undefined8 *param_1)

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
  puVar1 = &UNK_11053fab0;
  func_0x000107c613fc(&UNK_11053fab0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027149a0;
  func_0x00010058fa64(FUN_1027149a0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027164f4; end: 10271657b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027164f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1027168b4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112eba8b8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112eba8c0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10271657c);
  (*pcVar1)();
}



/* Entry: 10271657c; end: 1027165db; -[_TtC31MapSnapshotViewScopeGraphBridge46MapSnapshotViewScopeGraphBridgeSaberEntryPoint init] */

void FUN_10271657c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSnapshotViewScopeGraphBridge.MapSnapshotViewScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027165a8);
  (*pcVar1)();
}



/* Entry: 1027165dc; end: 102716613; -[_TtC31MapSnapshotViewScopeGraphBridge46MapSnapshotViewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027165f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027165fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027165dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba8b8));
  return;
}



/* Entry: 102716614; end: 10271663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716614(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112eba8c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112eba8b8));
  return;
}



/* Entry: 10271663c; end: 10271665b;  */

void FUN_10271663c(void)

{
  func_0x000107c61168(&PTR_PTR_11285d340);
  return;
}



/* Entry: 10271665c; end: 1027166e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10271665c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eba8f0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eba8f8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027166e4);
  (*pcVar2)();
}



/* Entry: 1027166e4; end: 1027167cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027166e4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba8f0);
  *(undefined **)(unaff_x20 + _DAT_112eba8f0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba8f8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eba8f8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11053fdc8;
  func_0x000107c613fc(&UNK_11053fdc8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1027167d0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1027167cc; end: 1027167d7;  */

void FUN_1027167cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027167d8; end: 102716837; -[_TtC31MapSnapshotViewScopeGraphBridge46SCMapSnapshotViewScopedServicesSaberEntryPoint init] */

void FUN_1027167d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSnapshotViewScopeGraphBridge.SCMapSnapshotViewScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102716804);
  (*pcVar1)();
}



/* Entry: 102716838; end: 10271686f; -[_TtC31MapSnapshotViewScopeGraphBridge46SCMapSnapshotViewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716838(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eba8f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba8f0));
  return;
}



/* Entry: 102716870; end: 102716873;  */

void FUN_102716870(void)

{
  return;
}



/* Entry: 102716874; end: 102716893;  */

void FUN_102716874(void)

{
  FUN_1027166e4();
  return;
}



/* Entry: 102716894; end: 1027168b3;  */

void FUN_102716894(void)

{
  func_0x000107c61168(&PTR_PTR_11285d408);
  return;
}



/* Entry: 1027168b4; end: 102716983;  */

undefined8 FUN_1027168b4(void)

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
  
  func_0x000107c61428(0x112eba928,&uStack_40,0x20,0);
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
    FUN_102716984();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102716984; end: 1027169a3;  */

void FUN_102716984(void)

{
  func_0x000107c61168(&PTR_PTR_11285d4d0);
  return;
}



/* Entry: 1027169a4; end: 102716a0f;  */

void FUN_1027169a4(void)

{
  func_0x0001000285a8(0x112eba930,&UNK_10dad2b98);
  func_0x0001000823a8(0x1027169e4,0);
  return;
}



/* Entry: 102716a10; end: 102716a4b; -[_TtC31MapSnapshotViewScopeGraphBridge39MapSnapshotViewScopeGraphBridgeServices init] */

void FUN_102716a10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102716a4c; end: 102716a7f;  */

void FUN_102716a4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102716a80; end: 102716a87;  */

undefined8 FUN_102716a80(void)

{
  return 0x1b;
}



/* Entry: 102716a88; end: 102716bff;  */

void FUN_102716a88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11053fe10;
  func_0x000107c613fc(&UNK_11053fe10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102716c00,puVar1);
  return;
}



/* Entry: 102716c00; end: 102716c07;  */

void FUN_102716c00(undefined8 *param_1)

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
  func_0x000107c61428(0x112eba928,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eba928,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11053fea8;
  func_0x000107c613fc(&UNK_11053fea8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102716cb4;
  func_0x00010058fa64(0x102716cb4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102716c08; end: 102716c63;  */

void FUN_102716c08(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eba928,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112eba928,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102716c64; end: 102716cbb;  */

undefined ** FUN_102716c64(void)

{
  return &PTR_DAT_113066d60;
}



/* Entry: 102716cbc; end: 102716d03; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716cbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba988;
  func_0x000107c61428(param_1 + _DAT_112eba988,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102716d04; end: 102716d5b; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba988;
  func_0x000107c61428(param_1 + _DAT_112eba988,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102716d5c; end: 102716da3; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint mapSnapshotViewScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba990;
  func_0x000107c61428(param_1 + _DAT_112eba990,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102716da4; end: 102716e07; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint setMapSnapshotViewScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba990;
  func_0x000107c61428(param_1 + _DAT_112eba990,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102716e08; end: 102716f3b;  */

/* WARNING: Possible PIC construction at 0x000102716ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102716edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102716ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102716ec4) */
/* WARNING: Removing unreachable block (ram,0x000102716ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102716e08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4c400();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10271663c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1027168b4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102716f3c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112eba8b8) = lVar5;
    *(long *)(lVar4 + _DAT_112eba8c0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102716f3c; end: 102716f63; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102716f3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102716e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102716f64; end: 102716fa7; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint end] */

void FUN_102716f64(undefined8 param_1)

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



/* Entry: 102716fa8; end: 10271713f;  */

void FUN_102716fa8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0f47b30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f0b84d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapSnapshotViewScopeGraphBridge/SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102717140);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56298();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102717140; end: 1027171eb; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102717140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102716fa8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027171ec; end: 102717257; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027171ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eba988,0);
  *(undefined8 *)(param_1 + _DAT_112eba990) = 0;
  *(undefined8 *)(param_1 + _DAT_112eba998) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102717258; end: 10271728b;  */

void FUN_102717258(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10271728c; end: 1027172d3; -[SCMapSnapshotViewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027172b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027172bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271728c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eba988);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba990));
  return;
}



/* Entry: 1027172d4; end: 1027172f3;  */

void FUN_1027172d4(void)

{
  func_0x000107c61168(&PTR_PTR_11285d580);
  return;
}



/* Entry: 1027172f4; end: 10271733b; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027172f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba9c8;
  func_0x000107c61428(param_1 + _DAT_112eba9c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10271733c; end: 102717393; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba9c8;
  func_0x000107c61428(param_1 + _DAT_112eba9c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102717394; end: 10271746b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717394(undefined8 param_1,long param_2)

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
    FUN_102716894();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eba8f0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10271746c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eba8f8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eba9d0);
    *(long **)(unaff_x20 + _DAT_112eba9d0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10271746c; end: 102717493; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint begin] */

void FUN_10271746c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102717394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102717494; end: 10271760b;  */

/* WARNING: Possible PIC construction at 0x0001027174fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102717594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102717500) */
/* WARNING: Removing unreachable block (ram,0x000102717598) */
/* WARNING: Removing unreachable block (ram,0x0001027175b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717494(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eba9d0);
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



/* Entry: 10271760c; end: 102717613;  */

void FUN_10271760c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102717614; end: 102717647; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint end] */

void FUN_102717614(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102717494();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102717648; end: 102717767;  */

void FUN_102717648(long param_1,long param_2,long param_3)

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
                        "MapSnapshotViewScopeGraphBridge/SCSCMapSnapshotViewScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102717768);
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



/* Entry: 102717768; end: 102717813; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102717768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102717648(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102717814; end: 102717873; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717814(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eba9c8,0);
  *(undefined8 *)(param_1 + _DAT_112eba9d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102717874; end: 1027178a7;  */

void FUN_102717874(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027178a8; end: 1027178df; -[SCSCMapSnapshotViewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027178a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eba9c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba9d0));
  return;
}



/* Entry: 1027178e0; end: 1027178ff;  */

void FUN_1027178e0(void)

{
  func_0x000107c61168(&PTR_PTR_11285d648);
  return;
}



/* Entry: 102717900; end: 10271797b;  */

void FUN_102717900(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ebaa08,&UNK_10dad2da0);
  func_0x000107c613fc();
  pcVar1 = FUN_10271798c;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dad2d60,0x3b,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10271797c; end: 10271798b;  */

undefined1  [16] FUN_10271797c(void)

{
  return ZEXT816(0x11053ffb0);
}



/* Entry: 10271798c; end: 102717a17;  */

void FUN_10271798c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  func_0x0001000285a8(0x112ebaa10,&UNK_10dad2da8);
  puVar1 = &uStack_38;
  uStack_38 = uVar3;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102718210();
  func_0x000107c61574(puVar1);
  func_0x000100082720("StandalonePlaceProfilePresenterEntryPointProvider",0x31,2);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 102717a18; end: 102717b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102717a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebaa30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaa38) = 8;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaa40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaa18) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebaa20);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaa28) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2);
  func_0x000107c61180();
  func_0x000107c5a074(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102717b24; end: 102717b83; -[_TtC45StandalonePlaceProfilePresenterImplementation16PlaceProfileTray init] */

void FUN_102717b24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StandalonePlaceProfilePresenterImplementation.PlaceProfileTray",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102717b50);
  (*pcVar1)();
}



/* Entry: 102717b84; end: 102717bdf; -[_TtC45StandalonePlaceProfilePresenterImplementation16PlaceProfileTray .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102717bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102717bc4) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717b84(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebaa18));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebaa20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebaa28));
  return;
}



/* Entry: 102717be0; end: 102717bef; -[_TtC45StandalonePlaceProfilePresenterImplementation16PlaceProfileTray tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + _DAT_112ebaa38) = param_4;
  return;
}



/* Entry: 102717bf0; end: 102717c4b; -[_TtC45StandalonePlaceProfilePresenterImplementation16PlaceProfileTray tray:heightDidChange:] */

/* WARNING: Possible PIC construction at 0x000102717c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102717c34) */

void FUN_102717bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_102717fc8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102717c4c; end: 102717cbb; -[_TtC45StandalonePlaceProfilePresenterImplementation16PlaceProfileTray trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717c4c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ebaa30);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ebaa30))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102717cbc; end: 102717d2b;  */

void FUN_102717cbc(void)

{
  func_0x000107c61168(&PTR_PTR_11285d708);
  return;
}



/* Entry: 102717d2c; end: 102717e4f;  */

void FUN_102717d2c(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 | *param_2;
  return;
}



/* Entry: 102717e50; end: 102717ef7;  */

void FUN_102717e50(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_102717ee4;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_102717ee4:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 102717ef8; end: 102717f87;  */

void FUN_102717ef8(void)

{
  FUN_102717f88(0x112ebaa78,&UNK_10dad2e38);
  return;
}



/* Entry: 102717f88; end: 102717fc7;  */

void FUN_102717f88(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000102717cdc(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102717fc8; end: 10271804b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102717fc8(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puStack_38;
  
  if (*(long *)(unaff_x20 + _DAT_112ebaa38) == 8) {
    *(undefined8 *)(unaff_x20 + _DAT_112ebaa40) = param_1;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  puStack_38 = puVar1;
  func_0x0001007d6d78(&puStack_38);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10271804c; end: 10271804f;  */

bool FUN_10271804c(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102718050; end: 1027180df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102718050(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_1027181f0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ebaaa0) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  func_0x00010037a480(0);
  func_0x000107c610f8();
  func_0x0001038c0c3c(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1027180e0; end: 1027180f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027180e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_1027181f0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ebaaa0) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  func_0x00010037a480(0);
  func_0x000107c610f8();
  func_0x0001038c0c3c(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1027180f8; end: 10271817f; -[_TtC45StandalonePlaceProfilePresenterImplementation38StandalonePlaceProfilePresenterBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027180f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102718180; end: 1027181df; -[_TtC45StandalonePlaceProfilePresenterImplementation38StandalonePlaceProfilePresenterBuilder init] */

void FUN_102718180(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StandalonePlaceProfilePresenterImplementation.StandalonePlaceProfilePresenterBuilder"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027181ac);
  (*pcVar1)();
}



/* Entry: 1027181e0; end: 1027181ef; -[_TtC45StandalonePlaceProfilePresenterImplementation38StandalonePlaceProfilePresenterBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027181e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebaaa0));
  return;
}



/* Entry: 1027181f0; end: 10271820f;  */

void FUN_1027181f0(void)

{
  func_0x000107c61168(&PTR_PTR_11285d7f0);
  return;
}



/* Entry: 102718210; end: 10271833b;  */

void FUN_102718210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb36f0,&UNK_10dac8920);
  puVar1 = &UNK_1105401b8;
  func_0x000107c613fc(&UNK_1105401b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10271833c,puVar1);
  return;
}



/* Entry: 10271833c; end: 102718343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271833c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38);
  FUN_10271a174();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined **)(lVar5 + _DAT_112ebaad0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ebaad8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112ebaae0) = uStack_38;
  *(undefined8 *)(lVar5 + _DAT_112ebaae8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x000107c6157c(uVar2);
  plVar6 = &lStack_48;
  func_0x000107c61154(plVar6,puVar3);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 102718344; end: 1027183cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102718344(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112ebaad0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebaad8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaae0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaae8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027183cc; end: 102718437;  */

void FUN_1027183cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102718438,uVar1,uVar2);
  return;
}



/* Entry: 102718438; end: 10271874b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102718438(void)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  double dVar16;
  
  lVar10 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x10,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  lVar9 = _DAT_112ebaad0;
  if (lVar10 == 0) goto LAB_1027186d0;
  func_0x000107c61428(lVar10 + _DAT_112ebaad0,unaff_x22 + 0x28,0,0);
  uVar11 = *(ulong *)(lVar10 + lVar9);
  if (uVar11 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    if (uVar5 == 0) goto LAB_102718678;
LAB_1027184c0:
    uVar6 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1027186f8);
      (*pcVar4)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102718720);
        (*pcVar4)();
      }
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102718724);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar11 + uVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar11);
      FUN_102719fc8(uVar6,uVar11);
      func_0x000107c6142c(uVar11);
    }
    lVar15 = *(long *)(unaff_x22 + 0x80);
    plVar1 = (long *)(uVar6 + _DAT_112ebaa20);
    lVar7 = *plVar1;
    lVar3 = plVar1[1];
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x10))();
    puVar2 = (ulong *)(lVar7 + _DAT_112fa9a98);
    func_0x000107c61428(puVar2,unaff_x22 + 0x40,0,0);
    uVar11 = *puVar2;
    uVar5 = puVar2[1];
    func_0x000107c61434(uVar5);
    func_0x000107c61170(lVar7);
    puVar2 = (ulong *)(lVar15 + _DAT_112fa9a98);
    func_0x000107c61428(puVar2,unaff_x22 + 0x58,0,0);
    if (uVar11 == *puVar2 && uVar5 == puVar2[1]) {
      func_0x000107c6142c(uVar5);
    }
    else {
      func_0x000107c605b8(uVar11,uVar5,*puVar2,puVar2[1],0);
      func_0x000107c6142c(uVar5);
      if ((uVar11 & 1) == 0) {
        uVar11 = *(ulong *)(lVar10 + lVar9);
        if (uVar11 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        else {
          uVar5 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar5 = uVar11;
          }
          func_0x000107c60480();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar8;
        if (uVar5 == 1) {
          dVar16 = *(double *)(uVar6 + _DAT_112ebaa40);
          if (0.0 < dVar16) {
            func_0x000107c610f8();
            func_0x000107c466c0(dVar16);
            *(undefined **)(unaff_x22 + 0x70) = puVar8;
            func_0x0001007d6d78(unaff_x22 + 0x70);
            func_0x000107c61170(puVar8);
          }
          uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
          func_0x000107c575ec(*(undefined8 *)(uVar6 + _DAT_112ebaa18));
          lVar9 = *plVar1;
          lVar7 = plVar1[1];
          func_0x000107c614f0(lVar9);
          (**(code **)(lVar7 + 0x20))(uVar12,lVar9,lVar7);
        }
        else {
          FUN_10271874c(*(undefined8 *)(unaff_x22 + 0x80));
        }
      }
    }
    func_0x000107c61170(uVar6);
  }
  else {
    uVar5 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar5 = uVar11;
    }
    func_0x000107c60480();
    if (uVar5 != 0) goto LAB_1027184c0;
LAB_102718678:
    uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(*(long *)(lVar10 + _DAT_112ebaae0) + _DAT_112fa9a68);
    uVar12 = uVar14;
    func_0x000107c614f0(uVar14);
    func_0x000107c615f0(uVar14);
    FUN_10271aa80(uVar13,uVar14,lVar10,uVar12);
    func_0x000107c615e8(uVar14);
  }
  func_0x000107c61170(lVar10);
LAB_1027186d0:
                    /* WARNING: Could not recover jumptable at 0x0001027186f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10271874c; end: 102718bc3;  */

/* WARNING: Removing unreachable block (ram,0x000102718bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271874c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  double dVar15;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  
  lVar1 = _DAT_112ebaad0;
  uVar9 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112ebaad0,auStack_88,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar10 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar4 = uVar10;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    return;
  }
  if ((uVar10 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102718b68);
      (*pcVar2)();
    }
    lVar5 = *(long *)(uVar10 + 0x20);
    func_0x000107c61174();
  }
  else {
    func_0x000107c61434(uVar10);
    lVar5 = 0;
    FUN_102719fc8(0,uVar10);
    func_0x000107c6142c(uVar10);
  }
  puVar12 = *(undefined **)(unaff_x20 + lVar1);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar13 = *(undefined **)((undefined *)((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    puVar11 = (undefined *)(ulong)(puVar13 != (undefined *)0x0);
    if (puVar13 < puVar11) {
LAB_102718b60:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102718b64);
      (*pcVar2)();
    }
  }
  else {
    puVar8 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if (((ulong)puVar12 & 0x8000000000000000) != 0) {
      puVar8 = puVar12;
    }
    puVar13 = puVar8;
    func_0x000107c60480();
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102718bb8);
      (*pcVar2)();
    }
    puVar11 = (undefined *)(ulong)(puVar13 != (undefined *)0x0);
    puVar7 = puVar8;
    func_0x000107c60480();
    if ((long)puVar7 < (long)puVar11) goto LAB_102718b60;
    func_0x000107c60480();
    if ((long)puVar8 < (long)puVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102718b60);
      (*pcVar2)();
    }
  }
  bVar3 = ((ulong)puVar12 & 0xc000000000000001) == 0;
  if ((!bVar3 && puVar13 != (undefined *)0x0) && (bVar3 || puVar13 != (undefined *)0x1)) {
    uVar6 = 0;
    FUN_102717cbc(0);
    func_0x000107c61438(puVar12,2);
    puVar8 = puVar11;
    do {
      puVar7 = puVar8 + 1;
      func_0x000107c60318(puVar8,puVar12,uVar6);
      puVar8 = puVar7;
    } while (puVar13 != puVar7);
  }
  else {
    func_0x000107c61438(puVar12,2);
  }
  func_0x000107c6142c(puVar12);
  if ((ulong)puVar12 >> 0x3e == 0) {
    uVar9 = (long)puVar13 << 1 | 1;
    puVar8 = puVar11;
    puVar11 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    puVar13 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8) + 0x20;
LAB_1027188b8:
    uVar6 = 0;
    func_0x000107c605fc(0);
    puVar12 = puVar11;
    func_0x000107c615f4(puVar11,3);
    func_0x000107c61480();
    if (puVar12 == (undefined *)0x0) {
      func_0x000107c615e8(puVar11);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar14 = *(long *)(puVar12 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(uVar9 >> 1,(long)puVar8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102718ba8);
      (*pcVar2)();
    }
    if (lVar14 != (uVar9 >> 1) - (long)puVar8) {
      func_0x000107c615ec(puVar11,2);
      goto LAB_10271889c;
    }
    puVar8 = puVar11;
    func_0x000107c61480(puVar11,uVar6);
    func_0x000107c615ec(puVar11,2);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) goto LAB_102718938;
  }
  else {
    puVar8 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if (((ulong)puVar12 & 0x8000000000000000) != 0) {
      puVar8 = puVar12;
    }
    func_0x000107c60484(puVar11,puVar13);
    func_0x000107c6142c(puVar12);
    if ((uVar9 & 1) != 0) goto LAB_1027188b8;
LAB_10271889c:
    puVar12 = puVar11;
    FUN_10271a4c4(puVar11,puVar13,puVar8,uVar9);
  }
  func_0x000107c615e8(puVar11);
  puVar8 = puVar12;
LAB_102718938:
  func_0x000107c61428(unaff_x20 + lVar1,apuStack_a0,0x21,0);
  func_0x000107c6157c(puVar8);
  lVar14 = unaff_x20 + lVar1;
  FUN_102719d30(lVar14,puVar8);
  uVar9 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  if ((long)uVar10 < lVar14) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102718b94);
    (*pcVar2)();
  }
  FUN_10271b05c();
  func_0x000107c614a8(apuStack_a0);
  if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
    puVar12 = puVar8;
    func_0x000107c60480();
  }
  else {
    puVar12 = *(undefined **)(puVar8 + 0x10);
  }
  if (puVar12 != (undefined *)0x0) {
    uVar9 = 0;
    do {
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102718ae0);
          (*pcVar2)();
        }
        uVar10 = *(ulong *)(puVar8 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar9;
        FUN_102719fc8(uVar9,puVar8);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102718a20);
        (*pcVar2)();
      }
      puVar13 = (undefined *)(uVar9 + 1);
      func_0x000107c42018(*(undefined8 *)(uVar10 + _DAT_112ebaa18));
      func_0x000107c61170(uVar10);
      uVar9 = uVar9 + 1;
    } while (puVar13 != puVar12);
  }
  func_0x000107c61574(puVar8);
  dVar15 = *(double *)(lVar5 + _DAT_112ebaa40);
  if (0.0 < dVar15) {
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(dVar15);
    apuStack_a0[0] = puVar12;
    func_0x0001007d6d78(apuStack_a0);
    func_0x000107c61170(puVar12);
  }
  func_0x000107c575ec(*(undefined8 *)(lVar5 + _DAT_112ebaa18));
  uVar6 = *(undefined8 *)(lVar5 + _DAT_112ebaa20);
  lVar1 = ((undefined8 *)(lVar5 + _DAT_112ebaa20))[1];
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar1 + 0x20))(param_1,uVar6,lVar1);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 102718bc4; end: 102718bff;  */

void FUN_102718bc4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102718bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102718c00; end: 102718d1b; -[_TtC45StandalonePlaceProfilePresenterImplementation31StandalonePlaceProfilePresenter presentPlaceProfileWithPlace:] */

/* WARNING: Possible PIC construction at 0x000102718cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102718d00) */

void FUN_102718c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = &UNK_1105401e0;
  func_0x000107c613fc(&UNK_1105401e0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110540270;
  func_0x000107c613fc(&UNK_110540270,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  puVar1 = &UNK_110540298;
  func_0x000107c613fc(&UNK_110540298,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dad30b0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad30b8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102718d1c; end: 102718d87;  */

void FUN_102718d1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102718d88,uVar1,uVar2);
  return;
}



/* Entry: 102718d88; end: 102718ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102718d88(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x22;
  ulong uVar9;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ebaad0;
  if (lVar3 == 0) {
    uVar5 = 1;
  }
  else {
    func_0x000107c61428(lVar3 + _DAT_112ebaad0,unaff_x22 + 0x28,0,0);
    uVar7 = *(ulong *)(lVar3 + lVar1);
    func_0x000107c61434(uVar7);
    func_0x000107c61170(lVar3);
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102718ea4);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar7 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar8;
          FUN_102719fc8(uVar8,uVar7);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102718e98);
          (*pcVar2)();
        }
        uVar9 = uVar8 + 1;
        func_0x000107c42018(*(undefined8 *)(uVar4 + _DAT_112ebaa18));
        func_0x000107c61170(uVar4);
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar6);
    }
    func_0x000107c6142c(uVar7);
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102718ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 102718ee8; end: 102718f2b;  */

void FUN_102718ee8(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102718f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}


