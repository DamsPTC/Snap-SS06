/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10445806c; end: 10445808b; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope deviceConnectionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445806c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307af08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445808c; end: 1044580ab; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope flightManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445808c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307af10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044580ac; end: 10445814f; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044580ac(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307aef0));
  func_0x000101f750b8(param_1 + _DAT_11307aef8);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307af08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307af10));
  return;
}



/* Entry: 104458150; end: 1044581b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458150(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445846c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307af20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1044581b8; end: 104458203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044581b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307af20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104458204; end: 10445833b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104458204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

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
  FUN_1044583f4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307aef8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307aef8,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_11307aef0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11307af00) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11307af08) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11307af10) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_4);
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



/* Entry: 10445833c; end: 1044583f3; -[_TtC31SCSpectaclesFlightSettingsScope39SCSpectaclesFlightSettingsScopeServices buildWithDelegate:uiContainer:flightMode:deviceConnectionState:flightManager:] */

void FUN_10445833c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104458204(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044583f4; end: 104458413;  */

void FUN_1044583f4(void)

{
  _objc_opt_self(&PTR_PTR_1129b75d0);
  return;
}



/* Entry: 104458414; end: 104458417;  */

void FUN_104458414(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104458418; end: 10445844b;  */

void FUN_104458418(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445844c; end: 10445846b; -[_TtC31SCSpectaclesFlightSettingsScope39SCSpectaclesFlightSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445844c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307af20));
  return;
}



/* Entry: 10445846c; end: 10445848b;  */

void FUN_10445846c(void)

{
  _objc_opt_self(&PTR_PTR_1129b76b0);
  return;
}



/* Entry: 10445848c; end: 10445848f;  */

void FUN_10445848c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104458490; end: 1044584cb; -[_TtC33SCSpectaclesDeviceConnectionScope33SCSpectaclesDeviceConnectionScope init] */

void FUN_104458490(undefined8 param_1)

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



/* Entry: 1044584cc; end: 104458533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044584cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002ce36c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307af80) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104458534; end: 10445857f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458534(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307af80) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104458580; end: 104458613; -[_TtC33SCSpectaclesDeviceConnectionScope41SCSpectaclesDeviceConnectionScopeServices build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458580(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x0001002cbdb8();
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



/* Entry: 104458614; end: 104458617;  */

void FUN_104458614(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104458618; end: 10445864b;  */

void FUN_104458618(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445864c; end: 10445866f; -[_TtC33SCSpectaclesDeviceConnectionScope41SCSpectaclesDeviceConnectionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445864c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307af80));
  return;
}



/* Entry: 104458670; end: 10445868f; -[_TtC30SCSpectaclesKioskModePageScope30SCSpectaclesKioskModePageScope currentDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458670(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307afd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104458690; end: 1044586af; -[_TtC30SCSpectaclesKioskModePageScope30SCSpectaclesKioskModePageScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458690(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307afe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044586b0; end: 1044586f7; -[_TtC30SCSpectaclesKioskModePageScope30SCSpectaclesKioskModePageScope scopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044586b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307afe8;
  _swift_beginAccess(param_1 + _DAT_11307afe8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044586f8; end: 10445874f; -[_TtC30SCSpectaclesKioskModePageScope30SCSpectaclesKioskModePageScope setScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044586f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307afe8;
  _swift_beginAccess(param_1 + _DAT_11307afe8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104458750; end: 104458807; -[_TtC30SCSpectaclesKioskModePageScope30SCSpectaclesKioskModePageScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104458750(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307afd8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307afe0));
  param_1 = param_1 + _DAT_11307afe8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104458808; end: 10445886f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458808(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104458ad0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307aff8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104458870; end: 1044588bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458870(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307aff8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044588bc; end: 1044589c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1044588bc(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_104458a58();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307afe8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307afe8,0);
  *(long *)(lVar4 + _DAT_11307afd8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307afe0) = param_2;
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



/* Entry: 1044589c4; end: 104458a57; -[_TtC30SCSpectaclesKioskModePageScope38SCSpectaclesKioskModePageScopeServices buildWithCurrentDevice:uiContainer:scopeDelegate:] */

void FUN_1044589c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1044588bc(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104458a58; end: 104458a77;  */

void FUN_104458a58(void)

{
  _objc_opt_self(&PTR_PTR_1129b78e0);
  return;
}



/* Entry: 104458a78; end: 104458a7b;  */

void FUN_104458a78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104458a7c; end: 104458aaf;  */

void FUN_104458a7c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104458ab0; end: 104458acf; -[_TtC30SCSpectaclesKioskModePageScope38SCSpectaclesKioskModePageScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307aff8));
  return;
}



/* Entry: 104458ad0; end: 104458aef;  */

void FUN_104458ad0(void)

{
  _objc_opt_self(&PTR_PTR_1129b79b0);
  return;
}



/* Entry: 104458af0; end: 104458af3;  */

void FUN_104458af0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104458af4; end: 104458b43; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope imageArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458af4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307b050);
  func_0x000100de1f70(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104458b44; end: 104458b57; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope size] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104458b44(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11307b058);
}



/* Entry: 104458b58; end: 104458b67; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104458b58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307b060);
}



/* Entry: 104458b68; end: 104458b77; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope maximumEdgeResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307b068));
  return;
}



/* Entry: 104458b78; end: 104458c13; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458b78(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_11307b070);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_11307b070))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1015298e4;
    puStack_48 = &UNK_110771a78;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104458c14; end: 104458c2f; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope completion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458c14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307b078);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100de9b20;
  puStack_48 = &UNK_110771a50;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104458c30; end: 104458c4b; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope scopeCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458c30(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307b080);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x104458cc8;
  puStack_48 = &UNK_110771a28;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104458c4c; end: 104458d17;  */

void FUN_104458c4c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + *param_3);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = param_4;
  uStack_48 = param_5;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104458d18; end: 104458dd7; -[_TtC25SCImageToVideoWriterScope25SCImageToVideoWriterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458d18(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b050));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307b068));
  func_0x000101a2ca7c(*(undefined8 *)(param_1 + _DAT_11307b070),
                      ((undefined8 *)(param_1 + _DAT_11307b070))[1]);
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307b078 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b080 + 8));
  return;
}



/* Entry: 104458dd8; end: 104458f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104458dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a8 [2];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar3 = param_4;
  func_0x00010033588c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(long *)(lVar4 + _DAT_11307b050) = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b058);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_11307b060) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11307b068) = param_5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b070);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b078);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307b080);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  _objc_retain(param_5);
  _swift_bridgeObjectRetain(param_4);
  func_0x000101a2cbac(param_6,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  _swift_retain(param_9);
  _swift_retain(param_11);
  plVar5 = &lStack_90;
  _objc_msgSendSuper2(plVar5,puVar2);
  aplStack_a8[0] = plVar5;
  func_0x00010008a7c8(&uStack_98,aplStack_a8);
  func_0x000100083b20(aplStack_a8);
  _swift_release(uStack_98);
  _swift_unknownObjectRelease(aplStack_a8[0]);
  return plVar5;
}



/* Entry: 104458f54; end: 1044590e3; -[_TtC25SCImageToVideoWriterScope33SCImageToVideoWriterScopeServices buildWithImageArray:size:duration:maximumEdgeResolution:progress:completion:scopeCompletion:] */

void FUN_104458f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  __Block_copy();
  __Block_copy();
  __Block_copy();
  uVar1 = 0;
  func_0x000100de1f70(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar1);
  if (param_8 == 0) {
    puVar6 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar6 = &UNK_110771a10;
    _swift_allocObject(&UNK_110771a10,0x18,7);
    *(long *)(puVar6 + 0x10) = param_8;
    uVar1 = 0x104459258;
  }
  puVar2 = &UNK_1107719c0;
  _swift_allocObject(&UNK_1107719c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  puVar3 = &UNK_1107719e8;
  _swift_allocObject(&UNK_1107719e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_10;
  uVar4 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar5 = param_6;
  FUN_104458dd8(param_1,param_2,param_3,param_6,param_7,uVar1,puVar6,0x104459240,puVar2,0x104459248,
                puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  func_0x000101a2ca7c(uVar1,puVar6);
  _objc_release(uVar4);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1044590e4; end: 1044591e7;  */

void FUN_1044590e4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000100029394(param_1,puVar3);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,puVar4,param_2);
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 1044591e8; end: 1044591eb;  */

void FUN_1044591e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044591ec; end: 10445921f;  */

void FUN_1044591ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104459220; end: 104459293; -[_TtC25SCImageToVideoWriterScope33SCImageToVideoWriterScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b090));
  return;
}



/* Entry: 104459294; end: 1044592b3; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459294(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b0e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044592b4; end: 1044592fb; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044592b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b0f0;
  _swift_beginAccess(param_1 + _DAT_11307b0f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044592fc; end: 104459353; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044592fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b0f0;
  _swift_beginAccess(param_1 + _DAT_11307b0f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104459354; end: 10445935f; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459354(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307b0f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104459360; end: 10445936b; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope snapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459360(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307b100);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10445936c; end: 1044593c3;  */

void FUN_10445936c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044593c4; end: 10445941f; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope initialSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044593c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307b108))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307b108);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104459420; end: 10445942f; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope viewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104459420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307b110);
}



/* Entry: 104459430; end: 1044594bf; -[_TtC24SCSpectaclesBoomboxScope24SCSpectaclesBoomboxScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459430(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b0e8));
  func_0x00010445949c(param_1 + _DAT_11307b0f0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b0f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307b108 + 8))
  ;
  return;
}



/* Entry: 1044594c0; end: 104459527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044594c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100343328();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b120) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104459528; end: 104459573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459528(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b120) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104459574; end: 1044596d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104459574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100337624();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11307b0f0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b0f0,0);
  *(long *)(lVar5 + _DAT_11307b0e8) = param_1;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_2);
  *(undefined8 *)(lVar5 + _DAT_11307b0f8) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11307b100) = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307b108);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar5 + _DAT_11307b110) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 1044596d4; end: 1044597fb; -[_TtC24SCSpectaclesBoomboxScope32SCSpectaclesBoomboxScopeServices buildWithUIContainer:delegate:entryIds:snapIds:initialSnapId:viewSource:] */

void FUN_1044596d4(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_5 == 0) {
    param_5 = 0;
    puVar2 = PTR___sSSN_11034da80;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
              (param_5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar2 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar2;
  if (param_6 != 0) {
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
              (param_6,puVar2,PTR___sSSSHsWP_11034da90);
    param_2 = puVar2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104459574(param_3,param_4,param_5,param_6,param_7,param_2,param_8);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044597fc; end: 1044597ff;  */

void FUN_1044597fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104459800; end: 104459833;  */

void FUN_104459800(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104459834; end: 104459857; -[_TtC24SCSpectaclesBoomboxScope32SCSpectaclesBoomboxScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b120));
  return;
}



/* Entry: 104459858; end: 104459877; -[SCSpectaclesMemoriesCustomExportScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459858(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b178));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104459878; end: 104459883; -[SCSpectaclesMemoriesCustomExportScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459878(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b180;
  _swift_beginAccess(param_1 + _DAT_11307b180,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104459884; end: 10445988f; -[SCSpectaclesMemoriesCustomExportScope setFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b180;
  _swift_beginAccess(param_1 + _DAT_11307b180,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104459890; end: 10445989b; -[SCSpectaclesMemoriesCustomExportScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459890(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b188;
  _swift_beginAccess(param_1 + _DAT_11307b188,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445989c; end: 1044598df;  */

void FUN_10445989c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044598e0; end: 1044598eb; -[SCSpectaclesMemoriesCustomExportScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044598e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b188;
  _swift_beginAccess(param_1 + _DAT_11307b188,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1044598ec; end: 10445993f;  */

void FUN_1044598ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104459940; end: 10445994f; -[SCSpectaclesMemoriesCustomExportScope userContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104459940(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307b190);
}



/* Entry: 104459950; end: 10445996b; -[SCSpectaclesMemoriesCustomExportScope selectedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459950(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0x112e06a58;
  lVar2 = *(long *)(param_1 + _DAT_11307b198);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
    lVar3 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10445996c; end: 104459987; -[SCSpectaclesMemoriesCustomExportScope selectedSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445996c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0x112d508c0;
  lVar2 = *(long *)(param_1 + _DAT_11307b1a0);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    lVar3 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104459988; end: 1044599a3; -[SCSpectaclesMemoriesCustomExportScope allSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459988(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0x112d508c0;
  lVar2 = *(long *)(param_1 + _DAT_11307b1a8);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    lVar3 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1044599a4; end: 104459a0f;  */

void FUN_1044599a4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar1);
    func_0x0001000285a8(param_4,param_5);
    lVar2 = lVar1;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,param_4);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104459a10; end: 104459a2f; -[SCSpectaclesMemoriesCustomExportScope entry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459a10(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104459a30; end: 104459a4f; -[SCSpectaclesMemoriesCustomExportScope latestAssociatedSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459a30(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b1b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104459a50; end: 104459b0b; -[SCSpectaclesMemoriesCustomExportScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459a50(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b178));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11307b180);
  func_0x000104459ae8(param_1 + _DAT_11307b188);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b198));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b1a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b1a8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307b1b8));
  return;
}



/* Entry: 104459b0c; end: 104459b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459b0c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100361640();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b1c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104459b74; end: 104459bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104459b74(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b1c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104459bc0; end: 104459d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104459bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100360c30();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_11307b180;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b180,0);
  lVar3 = _DAT_11307b188;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b188,0);
  *(long *)(lVar5 + _DAT_11307b178) = param_1;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_2);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_11307b190) = param_4;
  *(undefined8 *)(lVar5 + _DAT_11307b198) = param_5;
  *(undefined8 *)(lVar5 + _DAT_11307b1a0) = param_6;
  *(undefined8 *)(lVar5 + _DAT_11307b1a8) = param_7;
  *(undefined8 *)(lVar5 + _DAT_11307b1b0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307b1b8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_7);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 104459d68; end: 104459ebb; -[SCSpectaclesMemoriesCustomExportScopeServices buildWithUIContainer:fromViewController:delegate:userContext:selectedItems:selectedSnaps:allSnaps:] */

void FUN_104459d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  
  if (param_7 != 0) {
    uVar1 = 0x112e06a58;
    func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar1);
  }
  if (param_8 != 0) {
    uVar1 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,uVar1);
  }
  if (param_9 != 0) {
    uVar1 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar1);
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104459bc0(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_9);
  _swift_bridgeObjectRelease(param_8);
  _swift_bridgeObjectRelease(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104459ebc; end: 10445a057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104459ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100360c30();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_11307b180;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b180,0);
  lVar3 = _DAT_11307b188;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307b188,0);
  *(long *)(lVar5 + _DAT_11307b178) = param_1;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_2);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_11307b190) = param_4;
  *(undefined8 *)(lVar5 + _DAT_11307b198) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307b1a0) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307b1a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307b1b0) = param_5;
  *(undefined8 *)(lVar5 + _DAT_11307b1b8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10445a058; end: 10445a133; -[SCSpectaclesMemoriesCustomExportScopeServices buildWithUIContainer:fromViewController:delegate:userContext:entry:latestAssociatedSnap:] */

void FUN_10445a058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_104459ebc(param_3,param_4,param_5,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10445a134; end: 10445a137;  */

void FUN_10445a134(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445a138; end: 10445a16b;  */

void FUN_10445a138(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445a16c; end: 10445a18b; -[SCSpectaclesMemoriesCustomExportScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307b1c8));
  return;
}



/* Entry: 10445a18c; end: 10445a1db;  */

void FUN_10445a18c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam000000011307b220 != 0) {
    return;
  }
  puVar1 = &UNK_110771c10;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam000000011307b220 = param_1;
  return;
}



/* Entry: 10445a1dc; end: 10445a1df;  */

void FUN_10445a1dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10445a1e0; end: 10445a1ff; -[_TtC25SCSpectaclesHomeWifiScope25SCSpectaclesHomeWifiScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a1e0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b228));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445a200; end: 10445a21f; -[_TtC25SCSpectaclesHomeWifiScope25SCSpectaclesHomeWifiScope device] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a200(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307b230));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445a220; end: 10445a267; -[_TtC25SCSpectaclesHomeWifiScope25SCSpectaclesHomeWifiScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307b238;
  _swift_beginAccess(param_1 + _DAT_11307b238,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10445a268; end: 10445a2bf; -[_TtC25SCSpectaclesHomeWifiScope25SCSpectaclesHomeWifiScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b238;
  _swift_beginAccess(param_1 + _DAT_11307b238,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445a2c0; end: 10445a377; -[_TtC25SCSpectaclesHomeWifiScope25SCSpectaclesHomeWifiScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10445a2c0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b228));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307b230));
  param_1 = param_1 + _DAT_11307b238;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10445a378; end: 10445a3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a378(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10445a640();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307b248) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10445a3e0; end: 10445a42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445a3e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307b248) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10445a42c; end: 10445a533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10445a42c(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10445a5c8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307b238;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307b238,0);
  *(long *)(lVar4 + _DAT_11307b228) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307b230) = param_2;
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


