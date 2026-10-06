/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10445a534; end: 10445a5c7; -[_TtC25SCSpectaclesHomeWifiScope33SCSpectaclesHomeWifiScopeServices buildWithUiContainer:device:delegate:] */

void FUN_10445a534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10445a42c(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445a5c8; end: 10445a5e7;  */

void FUN_10445a5c8(void)

{
  _objc_opt_self(&PTR_PTR_1129b7f90);
  return;
}



/* Entry: 10445a5e8; end: 10445a5eb;  */

void FUN_10445a5e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445a5ec; end: 10445a61f;  */

void FUN_10445a5ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445a620; end: 10445a63f; -[_TtC25SCSpectaclesHomeWifiScope33SCSpectaclesHomeWifiScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b248));
  return;
}



/* Entry: 10445a640; end: 10445a65f;  */

void FUN_10445a640(void)

{
  _objc_opt_self(&PTR_PTR_1129b8060);
  return;
}



/* Entry: 10445a660; end: 10445a663;  */

void FUN_10445a660(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445a664; end: 10445a683; -[_TtC31SCSpectaclesDeviceSettingsScope31SCSpectaclesDeviceSettingsScope currentDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a664(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b2a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445a684; end: 10445a6a3; -[_TtC31SCSpectaclesDeviceSettingsScope31SCSpectaclesDeviceSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a684(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b2a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445a6a4; end: 10445a6eb; -[_TtC31SCSpectaclesDeviceSettingsScope31SCSpectaclesDeviceSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a6a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b2b0;
  _swift_beginAccess(param_1 + _DAT_11307b2b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445a6ec; end: 10445a743; -[_TtC31SCSpectaclesDeviceSettingsScope31SCSpectaclesDeviceSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b2b0;
  _swift_beginAccess(param_1 + _DAT_11307b2b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445a744; end: 10445a7af; -[_TtC31SCSpectaclesDeviceSettingsScope31SCSpectaclesDeviceSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445a744(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b2a0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b2a8));
  param_1 = param_1 + _DAT_11307b2b0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10445a7b0; end: 10445a817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a7b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002bf928();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b2c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445a818; end: 10445a863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a818(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b2c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445a864; end: 10445a96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445a864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x0001002bd184();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307b2b0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307b2b0,0);
  *(long *)(lVar4 + _DAT_11307b2a0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307b2a8) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10445a96c; end: 10445a9ff; -[_TtC31SCSpectaclesDeviceSettingsScope39SCSpectaclesDeviceSettingsScopeServices buildWithCurrentDevice:uiContainer:scopeDelegate:] */

void FUN_10445a96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10445a864(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445aa00; end: 10445aa03;  */

void FUN_10445aa00(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445aa04; end: 10445aa37;  */

void FUN_10445aa04(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445aa38; end: 10445aa5b; -[_TtC31SCSpectaclesDeviceSettingsScope39SCSpectaclesDeviceSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445aa38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b2c0));
  return;
}



/* Entry: 10445aa5c; end: 10445aa97; -[_TtC50SCUserNavStartupCompleteScope_ContextActionHandler55SCUserNavStartupCompleteScope_ContextActionHandlerScope init] */

void FUN_10445aa5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445aa98; end: 10445aa9b;  */

void FUN_10445aa98(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445aa9c; end: 10445aae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445aa9c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b320) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445aae8; end: 10445ab7b; -[_TtC50SCUserNavStartupCompleteScope_ContextActionHandler63SCUserNavStartupCompleteScope_ContextActionHandlerScopeServices build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445aae8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000100360c9c();
  _objc_allocWithZone();
  _objc_retain();
  func_0x00010bfee200();
  auStack_48[0] = uVar1;
  func_0x00010008a7c8(&uStack_38,auStack_48);
  func_0x000100083b20(auStack_48);
  _swift_release(uStack_38);
  _objc_release(param_1);
  _swift_unknownObjectRelease(auStack_48[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445ab7c; end: 10445abaf;  */

void FUN_10445ab7c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445abb0; end: 10445abd3; -[_TtC50SCUserNavStartupCompleteScope_ContextActionHandler63SCUserNavStartupCompleteScope_ContextActionHandlerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445abb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b320));
  return;
}



/* Entry: 10445abd4; end: 10445ac0f; -[_TtC45SCUserNavStartupCompleteScope_UserJobProvider50SCUserNavStartupCompleteScope_UserJobProviderScope init] */

void FUN_10445abd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445ac10; end: 10445ac13;  */

void FUN_10445ac10(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ac14; end: 10445ac5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445ac14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b380) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445ac60; end: 10445acf3; -[_TtC45SCUserNavStartupCompleteScope_UserJobProvider58SCUserNavStartupCompleteScope_UserJobProviderScopeServices build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445ac60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010036b360();
  _objc_allocWithZone();
  _objc_retain();
  func_0x00010bfee200();
  auStack_48[0] = uVar1;
  func_0x00010008a7c8(&uStack_38,auStack_48);
  func_0x000100083b20(auStack_48);
  _swift_release(uStack_38);
  _objc_release(param_1);
  _swift_unknownObjectRelease(auStack_48[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445acf4; end: 10445ad27;  */

void FUN_10445acf4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ad28; end: 10445ad4b; -[_TtC45SCUserNavStartupCompleteScope_UserJobProvider58SCUserNavStartupCompleteScope_UserJobProviderScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445ad28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b380));
  return;
}



/* Entry: 10445ad4c; end: 10445ae0f; -[_TtC17CallFeedbackScope17CallFeedbackScope initWithCallId:presentingViewController:source:deckContainer:delegate:] */

undefined8
FUN_10445ad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  FUN_10445b5e0(param_3,param_2,param_4,param_5,param_6,param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  return param_3;
}



/* Entry: 10445ae10; end: 10445aeeb; -[_TtC17CallFeedbackScope17CallFeedbackScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445ae10(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b3d8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b3e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b3e8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b3f0));
  param_1 = param_1 + _DAT_11307b3f8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10445aeec; end: 10445b033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445aeec(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001003337a8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307b3f8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307b3f8,0);
  plVar5 = (long *)(lVar4 + _DAT_11307b3d8);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_11307b3e0) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11307b3e8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11307b3f0) = param_5;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10445b034; end: 10445b10f; -[_TtC17CallFeedbackScope25CallFeedbackScopeServices buildWithCallId:presentingViewController:source:deckContainer:delegate:] */

void FUN_10445b034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  FUN_10445aeec(param_3,param_2,param_4,param_5,param_6,param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10445b110; end: 10445b113;  */

void FUN_10445b110(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445b114; end: 10445b147;  */

void FUN_10445b114(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445b148; end: 10445b167; -[_TtC17CallFeedbackScope25CallFeedbackScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b408));
  return;
}



/* Entry: 10445b168; end: 10445b1b7;  */

void FUN_10445b168(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam000000011307b460 != 0) {
    return;
  }
  puVar1 = &UNK_110771ff0;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam000000011307b460 = param_1;
  return;
}



/* Entry: 10445b1b8; end: 10445b1bf;  */

void FUN_10445b1b8(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 10445b1c0; end: 10445b333;  */

void FUN_10445b1c0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_release(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,lStack_38);
    _swift_bridgeObjectRelease(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 10445b334; end: 10445b35b;  */

void FUN_10445b334(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10445b35c; end: 10445b3c7;  */

void FUN_10445b35c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x11307b480;
  FUN_10445b5a0(0x11307b480,&UNK_10dd02538);
  uVar2 = 0x11307b488;
  FUN_10445b5a0(0x11307b488,&UNK_10dd024e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 10445b3c8; end: 10445b40f;  */

void FUN_10445b3c8(void)

{
  FUN_10445b5a0(0x11307b468,&UNK_10dd024a8);
  return;
}



/* Entry: 10445b410; end: 10445b487;  */

undefined8 FUN_10445b410(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 10445b488; end: 10445b57b;  */

undefined1 * FUN_10445b488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,param_1);
  puVar2 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Entry: 10445b57c; end: 10445b59f;  */

void FUN_10445b57c(void)

{
  FUN_10445b5a0(0x11307b478,&UNK_10dd02510);
  return;
}



/* Entry: 10445b5a0; end: 10445b5df;  */

void FUN_10445b5a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_10445b168(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10445b5e0; end: 10445b6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_11307b3f8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b3f8,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307b3d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307b3e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307b3e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307b3f0) = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 10445b6dc; end: 10445b6df;  */

void FUN_10445b6dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445b6e0; end: 10445b743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b6e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b490) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307b498) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445b744; end: 10445b7bb; -[_TtC14CallLogUIScope14CallLogUIScope initWithViewContainer:presentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307b490) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307b498) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10445b7bc; end: 10445b83f; -[_TtC14CallLogUIScope14CallLogUIScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b7bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b490));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307b498));
  return;
}



/* Entry: 10445b840; end: 10445b8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b840(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445baa0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b4a8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445b8a8; end: 10445b8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445b8a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b4a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445b8f4; end: 10445b9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445b8f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_10445ba28();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11307b490) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11307b498) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _objc_retain(param_1);
  _objc_retain(param_2);
  plVar4 = &lStack_40;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar4;
}



/* Entry: 10445b9b0; end: 10445ba27; -[_TtC14CallLogUIScope22CallLogUIScopeServices buildWithViewContainer:presentingViewController:] */

void FUN_10445b9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10445b8f4(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10445ba28; end: 10445ba47;  */

void FUN_10445ba28(void)

{
  _objc_opt_self(&PTR_PTR_1129b8730);
  return;
}



/* Entry: 10445ba48; end: 10445ba4b;  */

void FUN_10445ba48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ba4c; end: 10445ba7f;  */

void FUN_10445ba4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445ba80; end: 10445ba9f; -[_TtC14CallLogUIScope22CallLogUIScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445ba80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b4a8));
  return;
}



/* Entry: 10445baa0; end: 10445babf;  */

void FUN_10445baa0(void)

{
  _objc_opt_self(&PTR_PTR_1129b87f8);
  return;
}



/* Entry: 10445bac0; end: 10445bac3;  */

void FUN_10445bac0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445bac4; end: 10445bdab;  */

long FUN_10445bac4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10445bdac; end: 10445bdcb; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445bdac(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b500));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445bdcc; end: 10445bdd7; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445bdcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b508;
  _swift_beginAccess(param_1 + _DAT_11307b508,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445bdd8; end: 10445bde3; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445bdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b508;
  _swift_beginAccess(param_1 + _DAT_11307b508,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445bde4; end: 10445bdf3; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope footerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445bde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b510));
  return;
}



/* Entry: 10445bdf4; end: 10445bdff; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope swipeViewParentDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445bdf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b518;
  _swift_beginAccess(param_1 + _DAT_11307b518,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445be00; end: 10445be0b; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope setSwipeViewParentDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445be00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b518;
  _swift_beginAccess(param_1 + _DAT_11307b518,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445be0c; end: 10445be17; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope startChatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445be0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b520;
  _swift_beginAccess(param_1 + _DAT_11307b520,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445be18; end: 10445be5b;  */

void FUN_10445be18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10445be5c; end: 10445be67; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope setStartChatDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445be5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b520;
  _swift_beginAccess(param_1 + _DAT_11307b520,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445be68; end: 10445bebb;  */

void FUN_10445be68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445bebc; end: 10445becb; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope friendsFeedInteractionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445bebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b528));
  return;
}



/* Entry: 10445becc; end: 10445c05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10445becc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_11307b508;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b508,0);
  lVar2 = _DAT_11307b518;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b518,0);
  lVar3 = _DAT_11307b520;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b520,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307b500) = param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11307b510) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  puVar4 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_1);
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_11307b528) = puVar4;
  puVar5 = auStack_b8;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  return puVar5;
}



/* Entry: 10445c060; end: 10445c123; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope initWithUiContainer:parentController:footerItem:swipeViewParentDelegate:startChatDelegate:] */

undefined8
FUN_10445c060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  uVar2 = param_3;
  FUN_10445c508(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  return uVar2;
}



/* Entry: 10445c124; end: 10445c14f; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope init] */

void FUN_10445c124(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFriendsFeedScope.SCFriendsFeedScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445c150);
  (*pcVar1)();
}



/* Entry: 10445c150; end: 10445c213; -[_TtC18SCFriendsFeedScope18SCFriendsFeedScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445c150(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b500));
  func_0x000100db8aec(param_1 + _DAT_11307b508);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b510));
  func_0x000100db8aec(param_1 + _DAT_11307b518);
  func_0x000100db8aec(param_1 + _DAT_11307b520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307b528));
  return;
}



/* Entry: 10445c214; end: 10445c3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445c214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x00010038b11c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar1 = _DAT_11307b508;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b508,0);
  lVar2 = _DAT_11307b518;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b518,0);
  lVar3 = _DAT_11307b520;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b520,0);
  *(long *)(lVar5 + _DAT_11307b500) = param_1;
  _swift_beginAccess(lVar5 + lVar1,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar1,param_2);
  *(undefined8 *)(lVar5 + _DAT_11307b510) = param_3;
  _swift_beginAccess(lVar5 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_4);
  _swift_beginAccess(lVar5 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_5);
  puVar6 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_1);
  func_0x00010bfee200();
  *(undefined **)(lVar5 + _DAT_11307b528) = puVar6;
  plVar7 = &lStack_b8;
  lStack_b8 = lVar5;
  lStack_b0 = lVar4;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  aplStack_d0[0] = plVar7;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  _swift_release(uStack_c0);
  _swift_unknownObjectRelease(aplStack_d0[0]);
  return plVar7;
}



/* Entry: 10445c3bc; end: 10445c493; -[_TtC18SCFriendsFeedScope26SCFriendsFeedScopeServices buildWithUiContainer:parentController:footerItem:swipeViewParentDelegate:startChatDelegate:] */

void FUN_10445c3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10445c214(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10445c494; end: 10445c4bf; -[_TtC18SCFriendsFeedScope26SCFriendsFeedScopeServices init] */

void FUN_10445c494(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFriendsFeedScope.SCFriendsFeedScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445c4c0);
  (*pcVar1)();
}



/* Entry: 10445c4c0; end: 10445c4c3;  */

void FUN_10445c4c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445c4c4; end: 10445c4f7;  */

void FUN_10445c4c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445c4f8; end: 10445c507; -[_TtC18SCFriendsFeedScope26SCFriendsFeedScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445c4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b538));
  return;
}



/* Entry: 10445c508; end: 10445c663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445c508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar1 = _DAT_11307b508;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b508,0);
  lVar2 = _DAT_11307b518;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b518,0);
  lVar3 = _DAT_11307b520;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307b520,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307b500) = param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11307b510) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  puVar4 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_1);
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_11307b528) = puVar4;
  _objc_msgSendSuper2(&stack0xffffffffffffff48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445c664; end: 10445c677;  */

undefined1  [16] FUN_10445c664(void)

{
  return ZEXT816(0x1107722a8);
}



/* Entry: 10445c678; end: 10445c74b;  */

void FUN_10445c678(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10445c74c; end: 10445c76b;  */

void FUN_10445c74c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10445c76c; end: 10445c793; -[SCFriendsFeedInteractionEvent description] */

void FUN_10445c76c(void)

{
  _objc_retain();
  FUN_10445ccb0();
  func_0x00010445bb40();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445c794; end: 10445c797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445c794(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_11307b590);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + _DAT_11307b5a0 + 8) == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10445ceb4);
          (*pcVar2)();
        }
        if (*(char *)(param_1 + _DAT_11307b5a8) == '\x02') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10445cec0);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_1 + _DAT_11307b598);
        _swift_bridgeObjectRetain(((long *)(param_1 + _DAT_11307b598))[1]);
        _objc_release(param_1);
      }
      else {
        if ((char)((long *)(param_1 + _DAT_11307b5b0))[1] == '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10445ceb8);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_1 + _DAT_11307b5b0);
        _objc_release();
      }
    }
    else if (bVar1 == 2) {
      _objc_release();
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + _DAT_11307b5b8);
      _swift_bridgeObjectRetain(((long *)(param_1 + _DAT_11307b5b8))[1]);
      _objc_release(param_1);
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      lVar3 = *(long *)(param_1 + _DAT_11307b5c0);
      _swift_bridgeObjectRetain(((long *)(param_1 + _DAT_11307b5c0))[1]);
      _objc_release(param_1);
    }
    else {
      _objc_release();
      lVar3 = 1;
    }
  }
  else if (bVar1 == 6) {
    _objc_release();
    lVar3 = 2;
  }
  else if (bVar1 == 7) {
    _objc_release();
    lVar3 = 3;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11307b5c8);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10445cebc);
      (*pcVar2)();
    }
    _objc_retain(lVar3);
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 10445c798; end: 10445c7df; -[SCFriendsFeedInteractionEvent init] */

void FUN_10445c798(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCFriendsFeedScope/SCFriendsFeedInteractionEventWrapper.swift",0x3d,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445c7e0);
  (*pcVar1)();
}



/* Entry: 10445c7e0; end: 10445c7e3; -[SCFriendsFeedInteractionEvent copyWithZone:] */

void FUN_10445c7e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10445c7e4; end: 10445c847; +[SCFriendsFeedInteractionEvent pullDownWithShortcutSessionId:selectedShortcut:shouldPreselectShortcut:] */

void FUN_10445c7e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  func_0x00010445cec0();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10445c848; end: 10445c85f; +[SCFriendsFeedInteractionEvent shortcutTappedWithSelectedShortcut:] */

void FUN_10445c848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10445cfac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445c860; end: 10445c877; +[SCFriendsFeedInteractionEvent pullDownDidFinish] */

void FUN_10445c860(void)

{
  FUN_10445d23c(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445c878; end: 10445c883; +[SCFriendsFeedInteractionEvent pageLoadedWithShortcutSessionId:] */

void FUN_10445c878(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  FUN_10445d074();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10445c884; end: 10445c88f; +[SCFriendsFeedInteractionEvent dismissWithNextPage:] */

void FUN_10445c884(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*(code *)0x10445d158)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10445c890; end: 10445c8df;  */

void FUN_10445c890(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10445c8e0; end: 10445c8f7; +[SCFriendsFeedInteractionEvent backgrounded] */

void FUN_10445c8e0(void)

{
  FUN_10445d23c(5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


