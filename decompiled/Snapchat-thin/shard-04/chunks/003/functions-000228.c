/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10336ea60; end: 10336eb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10336ea60(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f5d0c8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5d0c8))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x10))();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61574(uVar2);
  return uStack_28;
}



/* Entry: 10336eb18; end: 10336ebcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336eb18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5d0c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336ebd0; end: 10336ec03;  */

void FUN_10336ebd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10336ec04; end: 10336ec13; -[_TtC25ChatCameraCameraUIService25ChatCameraCameraUIService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ec04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f5d0c8));
  return;
}



/* Entry: 10336ec14; end: 10336ec33;  */

void FUN_10336ec14(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1410);
  return;
}



/* Entry: 10336ec34; end: 10336ed4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10336ec34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10336fae8();
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
    *(long *)(unaff_x20 + _DAT_112f5d0f8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f5d100) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10336ed4c);
  (*pcVar2)();
}



/* Entry: 10336ed4c; end: 10336edab; -[_TtC35LensesModularCameraScopeGraphBridge50LensesModularCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_10336ed4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.LensesModularCameraScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336ed78);
  (*pcVar1)();
}



/* Entry: 10336edac; end: 10336ede3; -[_TtC35LensesModularCameraScopeGraphBridge50LensesModularCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010336edc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336edcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336edac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d0f8));
  return;
}



/* Entry: 10336ede4; end: 10336ee0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ede4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5d100),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5d0f8));
  return;
}



/* Entry: 10336ee0c; end: 10336ee2b;  */

void FUN_10336ee0c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d14d0);
  return;
}



/* Entry: 10336ee2c; end: 10336eec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336ee2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f5d4c8);
  *(undefined8 *)(unaff_x20 + _DAT_112f5d130) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d138) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10336eec8; end: 10336ef27; -[_TtC35LensesModularCameraScopeGraphBridge49LensesModularCameraCameraUIServiceSaberEntryPoint init] */

void FUN_10336eec8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.LensesModularCameraCameraUIServiceSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336eef4);
  (*pcVar1)();
}



/* Entry: 10336ef28; end: 10336efbb; -[_TtC35LensesModularCameraScopeGraphBridge49LensesModularCameraCameraUIServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ef28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5d130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d138));
  return;
}



/* Entry: 10336efbc; end: 10336efc3;  */

undefined8 FUN_10336efbc(void)

{
  return 0;
}



/* Entry: 10336efc4; end: 10336efe3;  */

void FUN_10336efc4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1598);
  return;
}



/* Entry: 10336efe4; end: 10336f07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336efe4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f5d4e0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5d168) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d170) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10336f080; end: 10336f0df; -[_TtC35LensesModularCameraScopeGraphBridge67SCLensesModularCameraScopedARBarReplyAdapterServicesSaberEntryPoint init] */

void FUN_10336f080(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.SCLensesModularCameraScopedARBarReplyAdapterServicesSaberEntryPoint"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336f0ac);
  (*pcVar1)();
}



/* Entry: 10336f0e0; end: 10336f173; -[_TtC35LensesModularCameraScopeGraphBridge67SCLensesModularCameraScopedARBarReplyAdapterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336f0e0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5d168));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d170));
  return;
}



/* Entry: 10336f174; end: 10336f17b;  */

undefined8 FUN_10336f174(void)

{
  return 0;
}



/* Entry: 10336f17c; end: 10336f19b;  */

void FUN_10336f17c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1660);
  return;
}



/* Entry: 10336f19c; end: 10336f237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336f19c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f5d4e8);
  *(undefined8 *)(unaff_x20 + _DAT_112f5d1a0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d1a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10336f238; end: 10336f297; -[_TtC35LensesModularCameraScopeGraphBridge71SCLensesModularCameraScopedARBarReplyIntegrationServicesSaberEntryPoint init] */

void FUN_10336f238(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.SCLensesModularCameraScopedARBarReplyIntegrationServicesSaberEntryPoint"
                      ,0x6b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336f264);
  (*pcVar1)();
}



/* Entry: 10336f298; end: 10336f32b; -[_TtC35LensesModularCameraScopeGraphBridge71SCLensesModularCameraScopedARBarReplyIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336f298(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5d1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d1a8));
  return;
}



/* Entry: 10336f32c; end: 10336f333;  */

undefined8 FUN_10336f32c(void)

{
  return 0;
}



/* Entry: 10336f334; end: 10336f353;  */

void FUN_10336f334(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1728);
  return;
}



/* Entry: 10336f354; end: 10336f3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336f354(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f5d4f0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5d1d8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d1e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10336f3f0; end: 10336f44f; -[_TtC35LensesModularCameraScopeGraphBridge60SCLensesModularCameraScopedARBarReplyServicesSaberEntryPoint init] */

void FUN_10336f3f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.SCLensesModularCameraScopedARBarReplyServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336f41c);
  (*pcVar1)();
}



/* Entry: 10336f450; end: 10336f4e3; -[_TtC35LensesModularCameraScopeGraphBridge60SCLensesModularCameraScopedARBarReplyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336f450(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5d1d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d1e0));
  return;
}



/* Entry: 10336f4e4; end: 10336f4eb;  */

undefined8 FUN_10336f4e4(void)

{
  return 0;
}



/* Entry: 10336f4ec; end: 10336f50b;  */

void FUN_10336f4ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128d17f0);
  return;
}



/* Entry: 10336f50c; end: 10336f56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10336f50c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f5d4f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10336f570; end: 10336f577;  */

void FUN_10336f570(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10336f578; end: 10336f617;  */

void FUN_10336f578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10336f618; end: 10336f637;  */

void FUN_10336f618(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10336f638; end: 10336f69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10336f638(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f5d500);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10336f69c; end: 10336f6a3;  */

void FUN_10336f69c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10336f6a4; end: 10336f743;  */

void FUN_10336f6a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10336f744; end: 10336f763;  */

void FUN_10336f744(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10336f764; end: 10336f7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10336f764(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f5d508);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10336f7c8; end: 10336f7cf;  */

void FUN_10336f7c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10336f7d0; end: 10336f86f;  */

void FUN_10336f7d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10336f870; end: 10336f88f;  */

void FUN_10336f870(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10336f890; end: 10336f917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336f890(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5d480) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5d488);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10336f918);
  (*pcVar2)();
}



/* Entry: 10336f918; end: 10336f9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10336f918(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5d480);
  *(undefined **)(unaff_x20 + _DAT_112f5d480) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5d488);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5d488))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110645e48;
  func_0x000107c613fc(&UNK_110645e48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10336fa04,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10336fa00; end: 10336fa0b;  */

void FUN_10336fa00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10336fa0c; end: 10336fa6b; -[_TtC35LensesModularCameraScopeGraphBridge50SCLensesModularCameraScopedServicesSaberEntryPoint init] */

void FUN_10336fa0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.SCLensesModularCameraScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336fa38);
  (*pcVar1)();
}



/* Entry: 10336fa6c; end: 10336faa3; -[_TtC35LensesModularCameraScopeGraphBridge50SCLensesModularCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336fa6c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5d488));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d480));
  return;
}



/* Entry: 10336faa4; end: 10336faa7;  */

void FUN_10336faa4(void)

{
  return;
}



/* Entry: 10336faa8; end: 10336fac7;  */

void FUN_10336faa8(void)

{
  FUN_10336f918();
  return;
}



/* Entry: 10336fac8; end: 10336fae7;  */

void FUN_10336fac8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d18b8);
  return;
}



/* Entry: 10336fae8; end: 10336fbb7;  */

undefined8 FUN_10336fae8(void)

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
  
  func_0x000107c61428(0x112f5d4b8,&uStack_40,0x20,0);
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
    FUN_10336fbb8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10336fbb8; end: 10336fbd7;  */

void FUN_10336fbb8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1980);
  return;
}



/* Entry: 10336fbd8; end: 10336fe23;  */

void FUN_10336fbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f5d4c0,&UNK_10dbb7db8);
  puVar1 = &UNK_110645e90;
  func_0x000107c613fc(&UNK_110645e90,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_10336fe24,puVar1);
  return;
}



/* Entry: 10336fe24; end: 10336fe57;  */

void FUN_10336fe24(void)

{
  long unaff_x20;
  
  func_0x00010336fcdc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10336fe58; end: 10336ff43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336fe58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d4f8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d500) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5d508) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336ff44; end: 10336ffa3; -[_TtC35LensesModularCameraScopeGraphBridge43LensesModularCameraScopeGraphBridgeServices init] */

void FUN_10336ff44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopeGraphBridge.LensesModularCameraScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336ff70);
  (*pcVar1)();
}



/* Entry: 10336ffa4; end: 10337008b; -[_TtC35LensesModularCameraScopeGraphBridge43LensesModularCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010336ffc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336ffe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103370004) */
/* WARNING: Removing unreachable block (ram,0x00010336ffe4) */
/* WARNING: Removing unreachable block (ram,0x00010336ffc4) */
/* WARNING: Removing unreachable block (ram,0x000103370024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336ffa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5d4c8));
  return;
}



/* Entry: 10337008c; end: 1033700bb;  */

void FUN_10337008c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033700bc; end: 1033700fb;  */

void FUN_1033700bc(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_1033700fc,0);
  return;
}



/* Entry: 1033700fc; end: 10337010f;  */

void FUN_1033700fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 103370110; end: 10337014b;  */

void FUN_103370110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10337014c; end: 103370167;  */

void FUN_10337014c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033701b8,param_1);
  return;
}



/* Entry: 103370168; end: 1033701b7;  */

void FUN_103370168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1033701b8; end: 1033701eb;  */

void FUN_1033701b8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1033701ec; end: 1033701f3;  */

undefined8 FUN_1033701ec(void)

{
  return 0x1b;
}



/* Entry: 1033701f4; end: 10337036b;  */

void FUN_1033701f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110645eb8;
  func_0x000107c613fc(&UNK_110645eb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10337036c,puVar1);
  return;
}



/* Entry: 10337036c; end: 103370373;  */

void FUN_10337036c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f5d4b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5d4b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110645fd0;
  func_0x000107c613fc(&UNK_110645fd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103370460;
  func_0x00010058fa64(0x103370460,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103370374; end: 1033703cf;  */

void FUN_103370374(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5d4b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5d4b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1033703d0; end: 10337046b;  */

undefined ** FUN_1033703d0(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 10337046c; end: 1033704b3; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337046c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d560;
  func_0x000107c61428(param_1 + _DAT_112f5d560,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033704b4; end: 10337050b; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033704b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d560;
  func_0x000107c61428(param_1 + _DAT_112f5d560,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10337050c; end: 103370553; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337050c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d568;
  func_0x000107c61428(param_1 + _DAT_112f5d568,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103370554; end: 10337055f; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370554(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d568;
  func_0x000107c61428(param_1 + _DAT_112f5d568,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103370560; end: 1033705a7; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint sCARBarPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370560(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d570;
  func_0x000107c61428(param_1 + _DAT_112f5d570,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033705a8; end: 1033705b3; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint setSCARBarPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033705a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d570;
  func_0x000107c61428(param_1 + _DAT_112f5d570,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033705b4; end: 1033705fb; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint lensesModularCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033705b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d578;
  func_0x000107c61428(param_1 + _DAT_112f5d578,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033705fc; end: 103370607; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint setLensesModularCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033705fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d578;
  func_0x000107c61428(param_1 + _DAT_112f5d578,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103370608; end: 103370667;  */

void FUN_103370608(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103370668; end: 10337089f;  */

/* WARNING: Possible PIC construction at 0x0001033707d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033707e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337082c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103370814) */
/* WARNING: Removing unreachable block (ram,0x000103370804) */
/* WARNING: Removing unreachable block (ram,0x0001033707e8) */
/* WARNING: Removing unreachable block (ram,0x0001033707d8) */
/* WARNING: Removing unreachable block (ram,0x000103370878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370668(void)

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
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c509d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4b5c0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_10336ee0c();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_10336fae8();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033708a0);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112f5d0f8) = lVar5;
        *(long *)(lVar4 + _DAT_112f5d100) = unaff_x20;
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



/* Entry: 1033708a0; end: 1033708c7; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1033708a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103370668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033708c8; end: 10337090b; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_1033708c8(undefined8 param_1)

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



/* Entry: 10337090c; end: 103370b7b;  */

void FUN_10337090c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0faf8d0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010f050730,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57f80();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0ebced0)) &&
             (func_0x000107c605b8(0xd000000000000032,0x800000010f143130,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "LensesModularCameraScopeGraphBridge/SCLensesModularCameraScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x5e,2,0x40,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103370b7c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55f44();
        }
        goto LAB_103370998;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_103370998:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103370b7c; end: 103370c27; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103370b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10337090c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103370c28; end: 103370cab; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370c28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5d560,0);
  *(undefined8 *)(param_1 + _DAT_112f5d568) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5d570) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5d578) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5d580) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103370cac; end: 103370cdf;  */

void FUN_103370cac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103370ce0; end: 103370d47; -[SCLensesModularCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103370d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103370d10) */
/* WARNING: Removing unreachable block (ram,0x000103370d30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370ce0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5d560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d568));
  return;
}



/* Entry: 103370d48; end: 103370d67;  */

void FUN_103370d48(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1a80);
  return;
}



/* Entry: 103370d68; end: 103370d73; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370d68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d5b0;
  func_0x000107c61428(param_1 + _DAT_112f5d5b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103370d74; end: 103370d7f; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d5b0;
  func_0x000107c61428(param_1 + _DAT_112f5d5b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103370d80; end: 103370d8b; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint lensesModularCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370d80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d5b8;
  func_0x000107c61428(param_1 + _DAT_112f5d5b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103370d8c; end: 103370dcf;  */

void FUN_103370d8c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103370dd0; end: 103370ddb; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint setLensesModularCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d5b8;
  func_0x000107c61428(param_1 + _DAT_112f5d5b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103370ddc; end: 103370e2f;  */

void FUN_103370ddc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103370e30; end: 103370e77; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint lensesModularCameraCameraUIServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370e30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d5c0;
  func_0x000107c61428(param_1 + _DAT_112f5d5c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103370e78; end: 103370edb; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint setLensesModularCameraCameraUIServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d5c0;
  func_0x000107c61428(param_1 + _DAT_112f5d5c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103370edc; end: 10337105f;  */

/* WARNING: Possible PIC construction at 0x000103370fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103370fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103371008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103370fe0) */
/* WARNING: Removing unreachable block (ram,0x000103370ff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103370edc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b5bc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4b5b4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_10336efc4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f5d4c8);
        *(undefined8 *)(lVar2 + _DAT_112f5d130) = uVar6;
        *(long *)(lVar2 + _DAT_112f5d138) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f5d138);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103371060; end: 103371087; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint begin] */

void FUN_103371060(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103370edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103371088; end: 1033710cb; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint end] */

void FUN_103371088(undefined8 param_1)

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



/* Entry: 1033710cc; end: 1033712cf;  */

void FUN_1033710cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0ebce30)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f1431d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0ebce00)) {
          uVar2 = 0xd000000000000029;
          func_0x000107c605b8(0xd000000000000029,0x800000010f143200,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "LensesModularCameraScopeGraphBridge/SCLensesModularCameraCameraUIServiceSaberEntryPoint.swift"
                                ,0x5d,2,0x3c,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1033712d0);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55f38();
        goto LAB_103371158;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55f40();
  }
LAB_103371158:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033712d0; end: 10337137b; -[SCLensesModularCameraCameraUIServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_1033712d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033710cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


