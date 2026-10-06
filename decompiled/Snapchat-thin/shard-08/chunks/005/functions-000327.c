/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061a29f8; end: 1061a2a17; -[SCCSpeedModeWidgetContext init] */

void FUN_1061a29f8(void)

{
  FUN_1061a2c24(PTR_PTR_1126f01b8);
  return;
}



/* Entry: 1061a2a18; end: 1061a2a37; +[SCCSpeedModeWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a2a18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913770;
  param_1[1] = &PTR_DAT_1109137a0;
  param_1[2] = &PTR_s_oi_v_110913740;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2a38; end: 1061a2a57; -[SCCSpeedModeWidgetViewModel initWithCurrentSpeedMode:] */

void FUN_1061a2a38(void)

{
  func_0x0001061a2c48(PTR_PTR_1126f01c0);
  return;
}



/* Entry: 1061a2a58; end: 1061a2a6b; +[SCCSpeedModeWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a2a58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109137b0;
  param_1[1] = &PTR_DAT_1109137e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2a6c; end: 1061a2a8b; -[SCCToneModeWidgetContext init] */

void FUN_1061a2a6c(void)

{
  FUN_1061a2c24(PTR_PTR_1126f01c8);
  return;
}



/* Entry: 1061a2a8c; end: 1061a2aab; +[SCCToneModeWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_1061a2a8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913820;
  param_1[1] = &PTR_DAT_110913898;
  param_1[2] = &PTR_s_od_v_1109137f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2aac; end: 1061a2acb;  */

undefined8 FUN_1061a2aac(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001061a2d20();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8));
  return 0;
}



/* Entry: 1061a2acc; end: 1061a2b1b;  */

void FUN_1061a2acc(void)

{
  func_0x0001061a2d00();
  func_0x0001061a2cbc();
  func_0x0001061a2c80(0x1061a2bfc);
  func_0x0001061a2d08();
  func_0x0001061a2c9c();
  func_0x0001061a2d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a2b1c; end: 1061a2b3b; -[SCCToneModeWidgetViewModel init] */

void FUN_1061a2b1c(void)

{
  FUN_1061a2c24(PTR_PTR_1126f01d0);
  return;
}



/* Entry: 1061a2b3c; end: 1061a2b4f; +[SCCToneModeWidgetViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a2b3c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109138a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2b50; end: 1061a2c23;  */

void FUN_1061a2b50(void)

{
  func_0x0001061a2cf0();
  func_0x0001061a2ce4();
  return;
}



/* Entry: 1061a2c24; end: 1061a2d4b;  */

void FUN_1061a2c24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1061a2d4c; end: 1061a2d67; +[SCCCameraShortcutIShortcutToastActionHandling valdiMarshallableObjectDescriptor] */

void FUN_1061a2d4c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110913938;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1061a2d68; end: 1061a2dc3;  */

undefined8 FUN_1061a2d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8798;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_1061a2e90();
  return param_1;
}



/* Entry: 1061a2dc4; end: 1061a2dcf; +[SCCCameraShortcutToastView componentPath] */

undefined ** FUN_1061a2dc4(void)

{
  return &PTR____CFConstantStringClassReference_110e441b8;
}



/* Entry: 1061a2dd0; end: 1061a2e03; -[SCCCameraShortcutToastView initWithViewModel:componentContext:runtime:] */

void FUN_1061a2dd0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f01d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1061a2e04; end: 1061a2e4f; -[SCCCameraShortcutToastView setViewModel:] */

void FUN_1061a2e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_1061a2e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a2e50; end: 1061a2e8f; -[SCCCameraShortcutToastView viewModel] */

void FUN_1061a2e50(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_1061a2e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061a2e90; end: 1061a2e97;  */

void FUN_1061a2e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a2e98; end: 1061a2ebb; -[SCCCameraShortcutToastContext init] */

void FUN_1061a2e98(void)

{
  func_0x0001061a2f08(PTR_PTR_1126f01e0);
  return;
}



/* Entry: 1061a2ebc; end: 1061a2ecf; +[SCCCameraShortcutToastContext valdiMarshallableObjectDescriptor] */

void FUN_1061a2ebc(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110913980;
  param_1[1] = &PTR_DAT_1109139b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2ed0; end: 1061a2ef3; -[SCCCameraShortcutToastViewModel init] */

void FUN_1061a2ed0(void)

{
  func_0x0001061a2f08(PTR_PTR_1126f01e8);
  return;
}



/* Entry: 1061a2ef4; end: 1061a2f43; +[SCCCameraShortcutToastViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a2ef4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109139c0;
  param_1[1] = &PTR_DAT_110913a08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a2f44; end: 1061a306b; -[SCFeatureFlashImpl initWithCameraUserActionLogger:cameraHardwareServicesAPI:captureDeviceManager:featureUpdateEventSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061a2f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f01f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741640) = 1;
    lVar3 = (long)_DAT_112741644;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112741648;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274164c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112741650),param_6);
    func_0x00010c139020(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061a306c; end: 1061a307f; -[SCFeatureFlashImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a306c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741654,param_3);
  return;
}



/* Entry: 1061a3080; end: 1061a308f; -[SCFeatureFlashImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3080(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11274163c) = 0;
  return;
}



/* Entry: 1061a3090; end: 1061a31b3; -[SCFeatureFlashImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3090(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bfb24e0();
  _objc_release(lVar6);
  ppuVar5 = (undefined **)(ulong)(*(long *)(param_1 + _DAT_11274163c) == 0);
  if ((int)lVar1 == 0) {
    ppuVar5 = (undefined **)0xffffffffffffffff;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = puVar2;
  func_0x00010baf9ebc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_40 = ppuVar5;
  }
  ppuVar4 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  lVar6 = (long)_DAT_112741658;
  ppuVar5 = (undefined **)(puVar2 + lVar6);
  _objc_loadWeakRetained();
  _objc_release();
  if (ppuVar5 != ppuVar4) {
    _objc_storeWeak(puVar2 + lVar6,ppuVar4);
    func_0x00010bdf4de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc4a0(ppuVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1061a31b4; end: 1061a323f; -[SCFeatureFlashImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a31b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112741658;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    func_0x00010bdf4de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc4a0(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061a3240; end: 1061a35bb; -[SCFeatureFlashImpl _createToolbarItemWithToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274165c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1fb140(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c160fc0(uVar3);
    func_0x0001008b1d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0db340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0db340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c2237a0(*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112741660);
    *(undefined **)(param_1 + _DAT_112741660) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061a35bc;
    puStack_88 = &UNK_110913a28;
    uVar3 = uVar2;
    lStack_80 = param_1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf2da40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1061a35f0;
    puStack_b0 = &UNK_11090ba70;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf7ca60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
  }
  else {
    _objc_retain(lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1061a35bc; end: 1061a3647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a35bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_11274165c);
  func_0x00010c07d660(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__setFlashActive__112586998,uVar1);
  return;
}



/* Entry: 1061a3648; end: 1061a3677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3648(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(long *)(param_1 + _DAT_11274163c) = *(long *)(param_1 + _DAT_11274163c) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a3678; end: 1061a3687; -[SCFeatureFlashImpl setCanEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3678(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112741640) = param_3;
  return;
}



/* Entry: 1061a3688; end: 1061a37cf; -[SCFeatureFlashImpl _setFlashActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3688(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + _DAT_112741640) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112741664);
    func_0x00010bfb24e0();
    if (param_3 != iVar1) {
      lVar2 = param_1 + _DAT_112741654;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c21e900();
      _objc_release(lVar2);
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274164c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb2500();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c19dac0(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1061a37d0; end: 1061a387b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a37d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112741650;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d9840();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741644);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a387c; end: 1061a38e3; -[SCFeatureFlashImpl _shouldHideForState:] */

ulong FUN_1061a387c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb25a0();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c275d80(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_3, func_0x00010bf70d80(), uVar1 != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf093c0(param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1061a38e4; end: 1061a3927; -[SCFeatureFlashImpl dealloc] */

void FUN_1061a38e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126f01f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061a3928; end: 1061a3d9f; -[SCFeatureFlashImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a3928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = (long)_DAT_112741668;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1061a3da0;
    puStack_90 = &UNK_11090d240;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1061a3e8c;
    puStack_b8 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1061a4018;
    puStack_e0 = &UNK_11090d210;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1061a4104;
    puStack_108 = &UNK_11084e400;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,auStack_80);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061a3da0; end: 1061a3e43;  */

void FUN_1061a3da0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a3e44; end: 1061a3e8b;  */

void FUN_1061a3e44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a3e8c; end: 1061a3f87;  */

void FUN_1061a3e8c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061a3f88;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e38e0(param_2);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e3900(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a3f88; end: 1061a4017;  */

void FUN_1061a3f88(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a4018; end: 1061a40bb;  */

void FUN_1061a4018(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a40bc; end: 1061a4103;  */

void FUN_1061a40bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a4104; end: 1061a42a7;  */

void FUN_1061a4104(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061a42a8;
  puStack_70 = &UNK_11090b530;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1061a4310;
  puStack_98 = &UNK_11090b590;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1061a4390;
  puStack_c0 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a42a8; end: 1061a4477;  */

void FUN_1061a42a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc4c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a4478; end: 1061a44e3;  */

void FUN_1061a4478(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfcb00();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfc8a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a44e4; end: 1061a4517; -[SCFeatureFlashImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a44e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741668;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a4518; end: 1061a454b; -[SCFeatureFlashImpl _didChangeFlashActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4518(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfb24e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1b4290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274165c),PTR_s_setIsSelected__11264aac8,param_3);
  return;
}



/* Entry: 1061a454c; end: 1061a45af; -[SCFeatureFlashImpl _didChangeFlashSupportedAndTorchSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a454c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb4080();
  param_1 = param_1 + _DAT_112741658;
  _objc_loadWeakRetained(param_1);
  if ((int)lVar1 == 0) {
    func_0x00010c23a840();
  }
  else {
    func_0x00010bfe2c00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a45b0; end: 1061a4667; -[SCFeatureFlashImpl _didChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a45b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112741664;
  iVar4 = (int)*(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010bfb24e0();
  uVar1 = param_3;
  func_0x00010bfb24e0();
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar3);
  if (iVar4 != (int)uVar1) {
    param_1 = param_1 + _DAT_112741650;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061a4668; end: 1061a46cb; -[SCFeatureFlashImpl _didChangeARSessionActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4668(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb4080();
  param_1 = param_1 + _DAT_112741658;
  _objc_loadWeakRetained(param_1);
  if ((int)lVar1 == 0) {
    func_0x00010c23a840();
  }
  else {
    func_0x00010bfe2c00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a46cc; end: 1061a46d3; -[SCFeatureFlashImpl _didBeginVideoRecording:session:] */

void FUN_1061a46cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 1061a46d4; end: 1061a46db; -[SCFeatureFlashImpl _didFinishRecording:session:recordedVideo:] */

void FUN_1061a46d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 1061a46dc; end: 1061a46e3; -[SCFeatureFlashImpl _didFailRecording:session:error:] */

void FUN_1061a46dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 1061a46e4; end: 1061a46eb; -[SCFeatureFlashImpl _didCancelRecording:session:] */

void FUN_1061a46e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 1061a46ec; end: 1061a46f3; -[SCFeatureFlashImpl modeEnabledStateChangedObservable] */

undefined8 FUN_1061a46ec(void)

{
  return 0;
}



/* Entry: 1061a46f4; end: 1061a46fb; -[SCFeatureFlashImpl disableMode] */

void FUN_1061a46f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setFlashActive__112586998,0);
  return;
}



/* Entry: 1061a46fc; end: 1061a4703; -[SCFeatureFlashImpl isHidden] */

undefined8 FUN_1061a46fc(void)

{
  return 0;
}



/* Entry: 1061a4704; end: 1061a470f; -[SCFeatureFlashImpl incompatibleModes] */

undefined * FUN_1061a4704(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 1061a4710; end: 1061a4717; -[SCFeatureFlashImpl modeType] */

undefined8 FUN_1061a4710(void)

{
  return 0xb;
}



/* Entry: 1061a4718; end: 1061a4767; -[SCFeatureFlashImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4718(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar1 == param_3) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741664);
    func_0x00010bfb24e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setFlashActive__112586998,(uint)uVar2 ^ 1)
    ;
    return;
  }
  return;
}



/* Entry: 1061a4768; end: 1061a476b; -[SCFeatureFlashImpl secondaryOnTap:] */

void FUN_1061a4768(void)

{
  return;
}



/* Entry: 1061a476c; end: 1061a478b; -[SCFeatureFlashImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a476c(long param_1)

{
  func_0x00010bfb24e0(*(undefined8 *)(param_1 + _DAT_112741664));
  return;
}



/* Entry: 1061a478c; end: 1061a4793; -[SCFeatureFlashImpl secondaryButtonState] */

undefined8 FUN_1061a478c(void)

{
  return 0;
}



/* Entry: 1061a4794; end: 1061a4797; -[SCFeatureFlashImpl toolbarButtonPositionDidChange:] */

void FUN_1061a4794(void)

{
  return;
}



/* Entry: 1061a4798; end: 1061a47b7; -[SCFeatureFlashImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4798(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741654);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a47b8; end: 1061a47cb; -[SCFeatureFlashImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a47b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741654,param_3);
  return;
}



/* Entry: 1061a47cc; end: 1061a47db; -[SCFeatureFlashImpl managedCapturerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a47cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741664);
}



/* Entry: 1061a47dc; end: 1061a481b; -[SCFeatureFlashImpl setManagedCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a47dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741664;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a481c; end: 1061a482b; -[SCFeatureFlashImpl canEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a481c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741640);
}



/* Entry: 1061a482c; end: 1061a483b; -[SCFeatureFlashImpl vcLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a482c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741660);
}



/* Entry: 1061a483c; end: 1061a487b; -[SCFeatureFlashImpl setVcLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a483c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741660;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a487c; end: 1061a488b; -[SCFeatureFlashImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a487c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274165c);
}



/* Entry: 1061a488c; end: 1061a48cb; -[SCFeatureFlashImpl setToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a488c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274165c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a48cc; end: 1061a48eb; -[SCFeatureFlashImpl cameraToolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a48cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a48ec; end: 1061a48ff; -[SCFeatureFlashImpl setCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a48ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741658,param_3);
  return;
}



/* Entry: 1061a4900; end: 1061a490f; -[SCFeatureFlashImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a4900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741644);
}



/* Entry: 1061a4910; end: 1061a494f; -[SCFeatureFlashImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741644;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a4950; end: 1061a495f; -[SCFeatureFlashImpl flashButtonTapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a4950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274163c);
}



/* Entry: 1061a4960; end: 1061a496f; -[SCFeatureFlashImpl setFlashButtonTapCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4960(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274163c) = param_3;
  return;
}



/* Entry: 1061a4970; end: 1061a4a23; -[SCFeatureFlashImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4970(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741644,0);
  _objc_destroyWeak(param_1 + _DAT_112741658);
  _objc_storeStrong(param_1 + _DAT_11274165c,0);
  _objc_storeStrong(param_1 + _DAT_112741660,0);
  _objc_storeStrong(param_1 + _DAT_112741664,0);
  _objc_destroyWeak(param_1 + _DAT_112741654);
  _objc_storeStrong(param_1 + _DAT_112741668,0);
  _objc_destroyWeak(param_1 + _DAT_112741650);
  _objc_storeStrong(param_1 + _DAT_11274164c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741648,0);
  return;
}



/* Entry: 1061a4a24; end: 1061a4a33; -[SCFeatureTimerModeImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a4a24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127416a0);
}



/* Entry: 1061a4a34; end: 1061a4a57; -[SCFeatureTimerModeImpl cameraModeType] */

undefined4 FUN_1061a4a34(int param_1)

{
  undefined4 uVar1;
  
  func_0x00010c0833c0();
  uVar1 = 0x12;
  if (param_1 == 0) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1061a4a58; end: 1061a4aeb; -[SCFeatureTimerModeImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061a4a58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf2ae40();
  uVar1 = param_1;
  func_0x00010bf2ae20();
  if ((uVar1 & param_3) != 0) {
    lVar2 = param_1 + (long)_DAT_1127416a8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf25540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c1fadc0(lVar3,param_2,1);
    _objc_release(lVar3);
  }
  return (uVar1 & param_3) != 0;
}



/* Entry: 1061a4aec; end: 1061a4b57; -[SCFeatureTimerModeImpl shortcutDisable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4aec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127416a8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1fadc0(lVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061a4b58; end: 1061a4b5f; -[SCFeatureTimerModeImpl cameraShortcutFeatureType] */

undefined8 FUN_1061a4b58(void)

{
  return 1;
}



/* Entry: 1061a4b60; end: 1061a4b67; -[SCFeatureTimerModeImpl cameraShortcutFeatureOption] */

undefined8 FUN_1061a4b60(void)

{
  return 0x80;
}



/* Entry: 1061a4b68; end: 1061a4b6f; -[SCFeatureTimerModeImpl hasPendingContent] */

undefined8 FUN_1061a4b68(void)

{
  return 0;
}



/* Entry: 1061a4b70; end: 1061a4b7b; -[SCFeatureTimerModeImpl cameraShortcutFeatureName] */

undefined ** FUN_1061a4b70(void)

{
  return &PTR____CFConstantStringClassReference_110e44298;
}



/* Entry: 1061a4b7c; end: 1061a4c6f; -[SCFeatureTimerModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4b7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127416b0);
  *(undefined8 *)(param_1 + _DAT_1127416b0) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061a4c70; end: 1061a4d33;  */

void FUN_1061a4c70(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a4d34; end: 1061a4d5f;  */

void FUN_1061a4d34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a4d60; end: 1061a4d7b; -[SCFeatureTimerModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4d60(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127416b4) = 0;
  *(undefined8 *)(param_1 + _DAT_1127416b8) = 0;
  return;
}



/* Entry: 1061a4d7c; end: 1061a4e6b; -[SCFeatureTimerModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4d7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e44258;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127416b4));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e44278;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_48 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127416b8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = puVar1 + _DAT_1127416a8;
    _objc_loadWeakRetained();
    puVar4 = puVar2;
    func_0x00010bfecd60();
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x7fffffffffffffff) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e42758);
      _objc_release(puVar2);
    }
    lVar5 = *(long *)(puVar1 + _DAT_1127416bc);
    if (lVar5 == 0) {
      func_0x00010c1d0560(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                          &PTR____CFConstantStringClassReference_110db16f8);
    }
    else {
      func_0x0001061a7e54();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,lVar5,&PTR____CFConstantStringClassReference_110db16f8);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061a4e6c; end: 1061a4f6f; -[SCFeatureTimerModeImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4e6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = param_1 + _DAT_1127416a8;
  _objc_loadWeakRetained();
  lVar2 = lVar4;
  func_0x00010bfecd60();
  _objc_release(lVar4);
  if (lVar2 != 0x7fffffffffffffff) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e42758);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + _DAT_1127416bc);
  if (lVar4 == 0) {
    func_0x00010c1d0560(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110db16f8);
  }
  else {
    func_0x0001061a7e54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110db16f8);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061a4f70; end: 1061a4ff7; -[SCFeatureTimerModeImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4f70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127416a8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    func_0x00010bdf4da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc4a0(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061a4ff8; end: 1061a5063; -[SCFeatureTimerModeImpl turnOnVideoTimerModeWithRecordingDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a4ff8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010bea86c0(param_2,param_3,2,0);
  *(undefined8 *)(param_2 + _DAT_1127416c0) = param_1;
  if (*(char *)(param_2 + _DAT_112741688) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setEnabled__112642f38,1);
    return;
  }
  return;
}



/* Entry: 1061a5064; end: 1061a52f7; -[SCFeatureTimerModeImpl startCountingDownWithCaptureTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a5064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if ((*(byte *)(param_5 + _DAT_1127416c4) & 1) == 0) {
    *(undefined1 *)(param_5 + _DAT_1127416c4) = 1;
    *(undefined8 *)(param_5 + _DAT_1127416c8) = param_7;
    lVar1 = param_5;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2ea0();
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_5 + _DAT_112741690));
    puVar3 = *(undefined **)(param_5 + _DAT_1127416cc);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c87a0;
      func_0x00010bf69180(PTR_PTR_1126c87a0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
    }
    lVar5 = (long)_DAT_1127416a4;
    lVar1 = param_5 + lVar5;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf20c00();
    lVar4 = (long)_DAT_1127416d0;
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar2);
    _objc_release(lVar1);
    lVar5 = param_5 + lVar5;
    _objc_loadWeakRetained(lVar5);
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fc0(lVar5);
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_initWeak(auStack_78,param_5);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061a52f8;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178040();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c24dd80(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 1061a52f8; end: 1061a532b;  */

void FUN_1061a52f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beec500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a532c; end: 1061a53cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a532c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127416d0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_1127416c4) = 0;
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2e20();
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112741690),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4cf0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


