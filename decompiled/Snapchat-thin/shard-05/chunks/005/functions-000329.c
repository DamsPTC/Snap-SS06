/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e5b380; end: 103e5b42b; -[SCShareYoursStickerInjectorServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e5b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103e5b1e8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e5b42c; end: 103e5b49f; -[SCShareYoursStickerInjectorServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b42c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301e950,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301e958,0);
  *(undefined8 *)(param_1 + _DAT_11301e960) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5b4a0; end: 103e5b4d3;  */

void FUN_103e5b4a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5b4d4; end: 103e5b51b; -[SCShareYoursStickerInjectorServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b4d4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301e950);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301e958);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301e960));
  return;
}



/* Entry: 103e5b51c; end: 103e5b53b;  */

void FUN_103e5b51c(void)

{
  _objc_opt_self(&PTR_PTR_11301e9a8);
  return;
}



/* Entry: 103e5b53c; end: 103e5b59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b53c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301ea10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11301ea18) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5b5a0; end: 103e5b617; -[_TtC25FanPassStickerInjectorAPI30FanPassStickerInjectorServices initWithStickerInjector:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b5a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11301ea10) = param_3;
  *(undefined8 *)(param_1 + _DAT_11301ea18) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103e5b618; end: 103e5b64b;  */

void FUN_103e5b618(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5b64c; end: 103e5b683; -[_TtC25FanPassStickerInjectorAPI30FanPassStickerInjectorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b64c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ea10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ea18));
  return;
}



/* Entry: 103e5b684; end: 103e5b6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b684(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301ea48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11301ea50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5b6e8; end: 103e5b75f; -[_TtC24SCPlanStickerInjectorAPI29SCPlanStickerInjectorServices initWithStickerInjector:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b6e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11301ea48) = param_3;
  *(undefined8 *)(param_1 + _DAT_11301ea50) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103e5b760; end: 103e5b793;  */

void FUN_103e5b760(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5b794; end: 103e5b7cb; -[_TtC24SCPlanStickerInjectorAPI29SCPlanStickerInjectorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b794(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ea48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ea50));
  return;
}



/* Entry: 103e5b7cc; end: 103e5b82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b7cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301ea80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11301ea88) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5b830; end: 103e5b8a7; -[_TtC28ShareYoursStickerInjectorAPI33ShareYoursStickerInjectorServices initWithStickerInjector:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11301ea80) = param_3;
  *(undefined8 *)(param_1 + _DAT_11301ea88) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103e5b8a8; end: 103e5b8db;  */

void FUN_103e5b8a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5b8dc; end: 103e5b913; -[_TtC28ShareYoursStickerInjectorAPI33ShareYoursStickerInjectorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b8dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ea80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ea88));
  return;
}



/* Entry: 103e5b914; end: 103e5b99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5b914(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a51244();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11301eab8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11301eac0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5b99c);
  (*pcVar1)();
}



/* Entry: 103e5b99c; end: 103e5b9fb; -[_TtC35CreatorsUserSessionScopeGraphBridge50CreatorsUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e5b99c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsUserSessionScopeGraphBridge.CreatorsUserSessionScopeGraphBridgeSaberEntryPoint"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5b9c8);
  (*pcVar1)();
}



/* Entry: 103e5b9fc; end: 103e5ba33; -[_TtC35CreatorsUserSessionScopeGraphBridge50CreatorsUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5b9fc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301eab8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301eac0));
  return;
}



/* Entry: 103e5ba34; end: 103e5ba5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5ba34(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11301eac0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11301eab8));
  return;
}



/* Entry: 103e5ba5c; end: 103e5baf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5ba5c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301eb70);
  *(undefined8 *)(unaff_x20 + _DAT_11301eaf0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301eaf8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e5baf8; end: 103e5bb57; -[_TtC35CreatorsUserSessionScopeGraphBridge52SCImpalaBusinessProfileManagerServiceSaberEntryPoint init] */

void FUN_103e5baf8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsUserSessionScopeGraphBridge.SCImpalaBusinessProfileManagerServiceSaberEntryPoint"
             ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5bb24);
  (*pcVar1)();
}



/* Entry: 103e5bb58; end: 103e5bbeb; -[_TtC35CreatorsUserSessionScopeGraphBridge52SCImpalaBusinessProfileManagerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5bb58(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301eaf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301eaf8));
  return;
}



/* Entry: 103e5bbec; end: 103e5bbf3;  */

undefined8 FUN_103e5bbec(void)

{
  return 0;
}



/* Entry: 103e5bbf4; end: 103e5bc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5bbf4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301eb78);
  *(undefined8 *)(unaff_x20 + _DAT_11301eb28) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301eb30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e5bc90; end: 103e5bcef; -[_TtC35CreatorsUserSessionScopeGraphBridge32SCSnapProServicesSaberEntryPoint init] */

void FUN_103e5bc90(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsUserSessionScopeGraphBridge.SCSnapProServicesSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5bcbc);
  (*pcVar1)();
}



/* Entry: 103e5bcf0; end: 103e5bd83; -[_TtC35CreatorsUserSessionScopeGraphBridge32SCSnapProServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5bcf0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301eb28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301eb30));
  return;
}



/* Entry: 103e5bd84; end: 103e5bd8b;  */

undefined8 FUN_103e5bd84(void)

{
  return 0;
}



/* Entry: 103e5bd8c; end: 103e5bdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5bd8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301eb70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11301eb78) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5bdf0; end: 103e5be4f; -[_TtC35CreatorsUserSessionScopeGraphBridge43CreatorsUserSessionScopeGraphBridgeServices init] */

void FUN_103e5bdf0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsUserSessionScopeGraphBridge.CreatorsUserSessionScopeGraphBridgeServices",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5be1c);
  (*pcVar1)();
}



/* Entry: 103e5be50; end: 103e5bee3; -[_TtC35CreatorsUserSessionScopeGraphBridge43CreatorsUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5be50(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301eb70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301eb78));
  return;
}



/* Entry: 103e5bee4; end: 103e5bf1b;  */

undefined1  [16] FUN_103e5bee4(void)

{
  return ZEXT816(0x110718d78);
}



/* Entry: 103e5bf1c; end: 103e5bf5f; -[SCCreatorsUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e5bf1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5bf60; end: 103e5bf93;  */

void FUN_103e5bf60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5bf94; end: 103e5bfdb; -[SCCreatorsUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5bf94(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ebd0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ebd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ebe0));
  return;
}



/* Entry: 103e5bfdc; end: 103e5bffb;  */

void FUN_103e5bfdc(void)

{
  _objc_opt_self(&PTR_PTR_112957e78);
  return;
}



/* Entry: 103e5bffc; end: 103e5c03f; -[SCSCImpalaBusinessProfileManagerServiceSaberEntryPoint end] */

void FUN_103e5bffc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c040; end: 103e5c073;  */

void FUN_103e5c040(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5c074; end: 103e5c0cb; -[SCSCImpalaBusinessProfileManagerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c074(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ec10);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ec18);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ec20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ec28));
  return;
}



/* Entry: 103e5c0cc; end: 103e5c0eb;  */

void FUN_103e5c0cc(void)

{
  _objc_opt_self(&PTR_PTR_112957f40);
  return;
}



/* Entry: 103e5c0ec; end: 103e5c12f; -[SCSCSnapProServicesSaberEntryPoint end] */

void FUN_103e5c0ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c130; end: 103e5c163;  */

void FUN_103e5c130(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5c164; end: 103e5c1bb; -[SCSCSnapProServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c164(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ec58);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ec60);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ec68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ec70));
  return;
}



/* Entry: 103e5c1bc; end: 103e5c1db;  */

void FUN_103e5c1bc(void)

{
  _objc_opt_self(&PTR_PTR_112958010);
  return;
}



/* Entry: 103e5c1dc; end: 103e5c263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5c1dc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a5188c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11301eca0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11301eca8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5c264);
  (*pcVar1)();
}



/* Entry: 103e5c264; end: 103e5c2c3; -[_TtC31DatpUserSessionScopeGraphBridge46DatpUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e5c264(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpUserSessionScopeGraphBridge.DatpUserSessionScopeGraphBridgeSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5c290);
  (*pcVar1)();
}



/* Entry: 103e5c2c4; end: 103e5c2fb; -[_TtC31DatpUserSessionScopeGraphBridge46DatpUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c2c4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301eca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301eca8));
  return;
}



/* Entry: 103e5c2fc; end: 103e5c323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c2fc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11301eca8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11301eca0));
  return;
}



/* Entry: 103e5c324; end: 103e5c3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5c324(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11301edf8);
  *(undefined8 *)(unaff_x20 + _DAT_11301ecd8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301ece0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e5c3c0; end: 103e5c41f; -[_TtC31DatpUserSessionScopeGraphBridge33SCSpectrumServicesSaberEntryPoint init] */

void FUN_103e5c3c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpUserSessionScopeGraphBridge.SCSpectrumServicesSaberEntryPoint",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5c3ec);
  (*pcVar1)();
}



/* Entry: 103e5c420; end: 103e5c4b3; -[_TtC31DatpUserSessionScopeGraphBridge33SCSpectrumServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c420(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301ecd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ece0));
  return;
}



/* Entry: 103e5c4b4; end: 103e5c4bb;  */

undefined8 FUN_103e5c4b4(void)

{
  return 0;
}



/* Entry: 103e5c4bc; end: 103e5c51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e5c4bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11301edf0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e5c520; end: 103e5c527;  */

void FUN_103e5c520(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e5c528; end: 103e5c5c7;  */

void FUN_103e5c528(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e5c5c8; end: 103e5c5e7;  */

void FUN_103e5c5c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e5c5e8; end: 103e5c64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c5e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301edf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11301edf8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5c64c; end: 103e5c6ab; -[_TtC31DatpUserSessionScopeGraphBridge39DatpUserSessionScopeGraphBridgeServices init] */

void FUN_103e5c64c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpUserSessionScopeGraphBridge.DatpUserSessionScopeGraphBridgeServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5c678);
  (*pcVar1)();
}



/* Entry: 103e5c6ac; end: 103e5c73f; -[_TtC31DatpUserSessionScopeGraphBridge39DatpUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c6ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301edf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301edf0));
  return;
}



/* Entry: 103e5c740; end: 103e5c777;  */

undefined1  [16] FUN_103e5c740(void)

{
  return ZEXT816(0x110718f48);
}



/* Entry: 103e5c778; end: 103e5c7bb; -[SCDatpUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e5c778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c7bc; end: 103e5c7ef;  */

void FUN_103e5c7bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5c7f0; end: 103e5c837; -[SCDatpUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c7f0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ee50);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ee58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ee60));
  return;
}



/* Entry: 103e5c838; end: 103e5c857;  */

void FUN_103e5c838(void)

{
  _objc_opt_self(&PTR_PTR_112958338);
  return;
}



/* Entry: 103e5c858; end: 103e5c89b; -[SCSCSpectrumServicesSaberEntryPoint end] */

void FUN_103e5c858(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c89c; end: 103e5c8cf;  */

void FUN_103e5c89c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5c8d0; end: 103e5c927; -[SCSCSpectrumServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c8d0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ee90);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ee98);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301eea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301eea8));
  return;
}



/* Entry: 103e5c928; end: 103e5c947;  */

void FUN_103e5c928(void)

{
  _objc_opt_self(&PTR_PTR_112958400);
  return;
}



/* Entry: 103e5c948; end: 103e5c953; -[SCSCRTUSServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c948(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301eed8;
  _swift_beginAccess(param_1 + _DAT_11301eed8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c954; end: 103e5c95f; -[SCSCRTUSServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301eed8;
  _swift_beginAccess(param_1 + _DAT_11301eed8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e5c960; end: 103e5c96b; -[SCSCRTUSServicesSaberServiceProvider datpUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c960(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301eee0;
  _swift_beginAccess(param_1 + _DAT_11301eee0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c96c; end: 103e5c9af;  */

void FUN_103e5c96c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5c9b0; end: 103e5c9bb; -[SCSCRTUSServicesSaberServiceProvider setDatpUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5c9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301eee0;
  _swift_beginAccess(param_1 + _DAT_11301eee0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e5c9bc; end: 103e5ca0f;  */

void FUN_103e5c9bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e5ca10; end: 103e5cc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e5ca10(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c41370();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e5c54c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11301edf0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11301eee8);
      *(long *)(unaff_x20 + _DAT_11301eee8) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "DatpUserSessionScopeGraphBridge/SCSCRTUSServicesSaberServiceProvider.swift",0x4a,2,
             0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5cb3c);
  (*pcVar1)();
}



/* Entry: 103e5cc24; end: 103e5cc57; -[SCSCRTUSServicesSaberServiceProvider provide] */

void FUN_103e5cc24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e5ca10();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e5cc58; end: 103e5cc8b; -[SCSCRTUSServicesSaberServiceProvider __safeProvide] */

void FUN_103e5cc58(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e5cb3c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e5cc8c; end: 103e5cccf; -[SCSCRTUSServicesSaberServiceProvider end] */

void FUN_103e5cc8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e5ccd0; end: 103e5ce67;  */

void FUN_103e5ccd0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e3ae60)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c51a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "DatpUserSessionScopeGraphBridge/SCSCRTUSServicesSaberServiceProvider.swift",0x4a
                   ,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5ce68);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53e48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e5ce68; end: 103e5cf13; -[SCSCRTUSServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e5ce68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103e5ccd0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e5cf14; end: 103e5cf87; -[SCSCRTUSServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5cf14(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301eed8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301eee0,0);
  *(undefined8 *)(param_1 + _DAT_11301eee8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e5cf88; end: 103e5cfbb;  */

void FUN_103e5cf88(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e5cfbc; end: 103e5d003; -[SCSCRTUSServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5cfbc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301eed8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301eee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301eee8));
  return;
}



/* Entry: 103e5d004; end: 103e5d023;  */

void FUN_103e5d004(void)

{
  _objc_opt_self(&PTR_PTR_11301ef30);
  return;
}



/* Entry: 103e5d024; end: 103e5d0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5d024(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a51ed4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11301ef98) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11301efa0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5d0ac);
  (*pcVar1)();
}



/* Entry: 103e5d0ac; end: 103e5d10b; -[_TtC31FrndUserSessionScopeGraphBridge46FrndUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e5d0ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FrndUserSessionScopeGraphBridge.FrndUserSessionScopeGraphBridgeSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5d0d8);
  (*pcVar1)();
}



/* Entry: 103e5d10c; end: 103e5d143; -[_TtC31FrndUserSessionScopeGraphBridge46FrndUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5d10c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301ef98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301efa0));
  return;
}



/* Entry: 103e5d144; end: 103e5d16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5d144(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11301efa0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11301ef98));
  return;
}



/* Entry: 103e5d16c; end: 103e5d207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5d16c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130204a8);
  *(undefined8 *)(unaff_x20 + _DAT_11301efd0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301efd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e5d208; end: 103e5d267; -[_TtC31FrndUserSessionScopeGraphBridge44SCInternalSnapchatterServicesSaberEntryPoint init] */

void FUN_103e5d208(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FrndUserSessionScopeGraphBridge.SCInternalSnapchatterServicesSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5d234);
  (*pcVar1)();
}



/* Entry: 103e5d268; end: 103e5d2fb; -[_TtC31FrndUserSessionScopeGraphBridge44SCInternalSnapchatterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5d268(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301efd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301efd8));
  return;
}



/* Entry: 103e5d2fc; end: 103e5d303;  */

undefined8 FUN_103e5d2fc(void)

{
  return 0;
}



/* Entry: 103e5d304; end: 103e5d39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5d304(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130204b8);
  *(undefined8 *)(unaff_x20 + _DAT_11301f008) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301f010) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e5d3a0; end: 103e5d3ff; -[_TtC31FrndUserSessionScopeGraphBridge42SCLegacySnapchatterServicesSaberEntryPoint init] */

void FUN_103e5d3a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FrndUserSessionScopeGraphBridge.SCLegacySnapchatterServicesSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5d3cc);
  (*pcVar1)();
}



/* Entry: 103e5d400; end: 103e5d493; -[_TtC31FrndUserSessionScopeGraphBridge42SCLegacySnapchatterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5d400(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301f008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301f010));
  return;
}



/* Entry: 103e5d494; end: 103e5d49b;  */

undefined8 FUN_103e5d494(void)

{
  return 0;
}



/* Entry: 103e5d49c; end: 103e5d537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e5d49c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130204c0);
  *(undefined8 *)(unaff_x20 + _DAT_11301f040) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11301f048) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e5d538; end: 103e5d597; -[_TtC31FrndUserSessionScopeGraphBridge36SCSnapchatterServicesSaberEntryPoint init] */

void FUN_103e5d538(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FrndUserSessionScopeGraphBridge.SCSnapchatterServicesSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e5d564);
  (*pcVar1)();
}



/* Entry: 103e5d598; end: 103e5d62b; -[_TtC31FrndUserSessionScopeGraphBridge36SCSnapchatterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5d598(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301f040));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301f048));
  return;
}


