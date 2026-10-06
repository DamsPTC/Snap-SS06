/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091c1440; end: 1091c144b; -[SCLensSubPickerControllerV2 setDelegate:] */

void FUN_1091c1440(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 1091c144c; end: 1091c1453; -[SCLensSubPickerControllerV2 selectedItemBorderColor] */

undefined8 FUN_1091c144c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1091c1454; end: 1091c1483; -[SCLensSubPickerControllerV2 setSelectedItemBorderColor:] */

void FUN_1091c1454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c1484; end: 1091c148b; -[SCLensSubPickerControllerV2 pickerViewFillColor] */

undefined8 FUN_1091c1484(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1091c148c; end: 1091c14a3; -[SCLensSubPickerControllerV2 selectedItemTransform] */

void FUN_1091c148c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xe0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  param_1[5] = *(undefined8 *)(param_2 + 0x100);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1091c14a4; end: 1091c14bb; -[SCLensSubPickerControllerV2 setSelectedItemTransform:] */

void FUN_1091c14a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0x100) = param_3[5];
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  return;
}



/* Entry: 1091c14bc; end: 1091c14c3; -[SCLensSubPickerControllerV2 lensLogger] */

undefined8 FUN_1091c14bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1091c14c4; end: 1091c14cb; -[SCLensSubPickerControllerV2 imageProvider] */

undefined8 FUN_1091c14c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1091c14cc; end: 1091c14fb; -[SCLensSubPickerControllerV2 setImageProvider:] */

void FUN_1091c14cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c14fc; end: 1091c1503; -[SCLensSubPickerControllerV2 externalImageComponent] */

undefined8 FUN_1091c14fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091c1504; end: 1091c1533; -[SCLensSubPickerControllerV2 setExternalImageComponent:] */

void FUN_1091c1504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c1534; end: 1091c153b; -[SCLensSubPickerControllerV2 mediaAssetManager] */

undefined8 FUN_1091c1534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091c153c; end: 1091c156b; -[SCLensSubPickerControllerV2 setMediaAssetManager:] */

void FUN_1091c153c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c156c; end: 1091c1583; -[SCLensSubPickerControllerV2 parentView] */

void FUN_1091c156c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c1584; end: 1091c158f; -[SCLensSubPickerControllerV2 setParentView:] */

void FUN_1091c1584(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 1091c1590; end: 1091c15a7; -[SCLensSubPickerControllerV2 lensContainer] */

void FUN_1091c1590(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c15a8; end: 1091c15b3; -[SCLensSubPickerControllerV2 setLensContainer:] */

void FUN_1091c15a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 1091c15b4; end: 1091c15bb; -[SCLensSubPickerControllerV2 subPickerView] */

undefined8 FUN_1091c15b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1091c15bc; end: 1091c1693; -[SCLensSubPickerControllerV2 .cxx_destruct] */

void FUN_1091c15bc(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091c1694; end: 1091c1adb; -[SCLensMediaAndPresetPickerController initWithBottomViewContainer:lensLogger:presetsComponent:externalImageComponent:effectSuspendable:photoFaceImageProvider:lensCrashLogger:photoPermissionCoordinator:standardPickerUIContainer:videoEditingUIContainer:standardMediaPickerMediaTypes:mediaAssetManager:videoEditingLauncher:videoEditingScopeServices:videoEditingEnabled:modalPresentationEnabled:batchSize:hideArrow:lensOptionSourceType:imageTrackingCompressionLevel:selectionLimit:didEnterBackgroundObservable:studySettingsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091c1694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  if (param_14 == 0) {
    puVar7 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ddb68;
    _objc_alloc();
    func_0x00010c056f20();
    puVar2 = puVar1;
    func_0x00010bf570e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c24d860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0fbb00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0649c0(param_2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puStack_80 = PTR_PTR_112700c60;
  puVar5 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithBottomViewContainer_lens_11253fd18,param_4,param_5,
                      param_9,param_7,puVar7,puVar4,param_15,param_18);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112782d78;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_6;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112782d7c;
    _objc_retain(param_10);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_10;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112782d80;
    _objc_retain(param_11);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_11;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112782d84;
    _objc_retain(param_13);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_13;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112782d88;
    _objc_retain(param_16);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_16;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112782d8c;
    _objc_retain(param_17);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_17;
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar5 + (long)_DAT_112782d90);
    *(undefined **)((long)puVar5 + (long)_DAT_112782d90) = puVar1;
    _objc_release(uVar6);
    _objc_storeWeak((long)puVar5 + (long)_DAT_112782d94,param_8);
    *(undefined8 *)((long)puVar5 + (long)_DAT_112782d98) = param_1;
    lVar8 = (long)_DAT_112782d9c;
    _objc_retain(in_stack_00000078);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = in_stack_00000078;
    _objc_release(uVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar5;
}



/* Entry: 1091c1adc; end: 1091c1ebf; -[SCLensMediaAndPresetPickerController initializePickerFeature:resultFeature:modalPresentationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c1adc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_112782da0) = 1;
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112782da4);
  *(undefined **)(param_1 + _DAT_112782da4) = puVar1;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  _objc_initWeak(auStack_88,param_4);
  _objc_initWeak(auStack_90,param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1091c1ec0;
  puStack_a8 = &UNK_1108fa1a0;
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_copyWeak(auStack_98,auStack_90);
  uVar6 = param_5;
  func_0x00010c25ff60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_initWeak(auStack_c8,param_1);
  uVar6 = param_4;
  func_0x00010bef0d60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1091c20c0;
  puStack_e0 = &UNK_110adfd28;
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(puVar2);
  uVar5 = uVar4;
  puStack_d8 = puVar2;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c158ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_108,auStack_80);
  _objc_copyWeak(auStack_100,auStack_88);
  _objc_retain(puVar2);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_108);
  _objc_release(puStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c1ec0; end: 1091c1ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c1ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = param_2;
      func_0x00010bf1f3c0();
      *(char *)(lVar1 + _DAT_112782da0) = (char)uVar3;
      lVar4 = lVar1;
      func_0x00010c159ca0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        _objc_copyWeak(auStack_48,param_1 + 0x20);
        _objc_retain(lVar4);
        func_0x00010c149180(lVar1);
        _objc_release(lVar4);
        _objc_destroyWeak(auStack_48);
      }
      func_0x00010bf1f3c0(param_2);
      func_0x00010c195460(lVar2);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091c1ff8; end: 1091c20bf;  */

void FUN_1091c1ff8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  _objc_copyWeak(auStack_78,param_1 + 0x28);
  func_0x00010c149180(lVar4);
  _objc_release(lVar4);
  uVar3 = param_2;
  func_0x00010bef0100();
  if ((int)uVar3 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c158ee0();
    _objc_release(param_1);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 1091c20c0; end: 1091c21a3;  */

void FUN_1091c20c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c149180(lVar1);
  _objc_release(lVar1);
  uVar2 = param_2;
  func_0x00010bef0100();
  if ((int)uVar2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c158ee0();
    _objc_release(param_1);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1091c21a4; end: 1091c221b;  */

void FUN_1091c21a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128fa0(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091c221c; end: 1091c245f;  */

void FUN_1091c221c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1091c2420;
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (uVar6 = param_2, func_0x00010c159240(), (int)uVar6 != 0)) {
    func_0x00010c1fb400(lVar1);
    lVar3 = lVar2;
    func_0x00010c29bb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = lVar2;
      func_0x00010bfe7ce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) goto LAB_1091c2418;
      lVar3 = lVar2;
      func_0x00010bfe7ce0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = auStack_80;
      _objc_copyWeak(puVar5,param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      lVar4 = lVar2;
      _objc_retain(lVar2);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      lVar3 = lVar2;
      func_0x00010c29bb60();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1091c2460;
      puStack_60 = &UNK_110adfb88;
      puVar5 = auStack_48;
      _objc_copyWeak(puVar5,param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      lVar4 = lVar2;
      uStack_58 = uVar6;
      _objc_retain(lVar2);
      lStack_50 = lVar2;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lStack_50);
      uVar6 = uStack_58;
    }
    _objc_release(uVar6);
    _objc_destroyWeak(puVar5);
  }
LAB_1091c2418:
  _objc_release(lVar2);
LAB_1091c2420:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091c2460; end: 1091c2563;  */

void FUN_1091c2460(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fb940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be86cc0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c2564; end: 1091c25d7; -[SCLensMediaAndPresetPickerController safeCollectionUpdate:] */

void FUN_1091c2564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c06eb80();
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010c128b60();
  }
  else {
    func_0x00010c0f8420();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091c25d8; end: 1091c263b; -[SCLensMediaAndPresetPickerController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c25d8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112782d94;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13d800();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_112700c60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091c263c; end: 1091c2aa7; -[SCLensMediaAndPresetPickerController setUpWarningMessageLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c263c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 auStack_300 [8];
  undefined1 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((puVar2 != (undefined *)0x0) &&
     (lVar28 = (long)_DAT_112782da8, *(long *)(param_1 + lVar28) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    *(undefined **)(param_1 + lVar28) = puVar1;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar28));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar28));
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar28));
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar28));
    puVar1 = param_1;
    func_0x00010c25e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = *(undefined **)(param_1 + lVar28);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf49420(0x4061800000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1e3380(0x443b8000,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar3;
    func_0x00010bf493c0(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar11;
    func_0x00010bf493c0(0xc03c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar18;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar23);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(param_1);
    _objc_release(uVar15);
    _objc_release(uVar22);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar27);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((puVar4 != (undefined *)0x0) &&
     (lVar28 = (long)_DAT_112782dac, *(long *)(puVar1 + lVar28) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(puVar1 + lVar28);
    *(undefined **)(puVar1 + lVar28) = puVar2;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar28));
    puVar2 = puVar1;
    func_0x00010c25e720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c25e720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar19);
    _objc_release(uVar23);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar22);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar27);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar4);
    func_0x00010c213040(puVar2);
    func_0x00010c1cfce0(puVar2);
    ppuVar20 = &PTR____CFConstantStringClassReference_110f2b8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f2b8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(ppuVar20);
    func_0x00010befbb60(*(undefined8 *)(puVar1 + lVar28));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c274200(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010bf34860(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar16);
    _objc_release(uVar23);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar22);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar21);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(uVar27);
    _objc_release(puVar5);
    puVar18 = PTR_PTR_1126af938;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar18);
    _objc_release(puVar4);
    puVar5 = puVar18;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar18);
    _objc_release(puVar4);
    ppuVar20 = &PTR____CFConstantStringClassReference_110e286f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e286f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar18);
    _objc_release(ppuVar20);
    func_0x00010befbd60(puVar18);
    puVar4 = puVar18;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar4);
    func_0x00010befbb60(*(undefined8 *)(puVar1 + lVar28));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar24 = puVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010bf49420(0x4066e00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar19;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf493c0(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bf493c0(0xc037000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar16;
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(uVar22);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(puVar12);
    _objc_release(uVar27);
    _objc_release(puVar13);
    _objc_release(puVar14);
    _objc_release(puVar19);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    puVar1 = puVar2;
    func_0x00010bf9e160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      puStack_330 = PTR_PTR_112700c60;
      ppuVar20 = &puStack_338;
      puStack_338 = puVar2;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if ((puVar1 != (undefined *)0x2) &&
         (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
         puVar1 != (undefined *)0x1)) {
        _objc_initWeak(auStack_2b8,puVar2);
        uVar27 = *(undefined8 *)(puVar2 + _DAT_112782d80);
        func_0x00010c269d40(uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2e8 = 0xc2000000;
        pcStack_2e0 = FUN_1091c3620;
        puStack_2d8 = &UNK_1108488f8;
        _objc_copyWeak(auStack_2c8,auStack_2b8);
        puStack_328 = puVar1;
        uStack_320 = 0xc2000000;
        pcStack_318 = FUN_1091c3760;
        puStack_310 = &UNK_1108488f8;
        puStack_2d0 = puVar2;
        uStack_2c0 = (char)param_3;
        _objc_copyWeak(auStack_300,auStack_2b8);
        puStack_308 = puVar2;
        uStack_2f8 = (char)param_3;
        func_0x00010bf37c20(uVar27);
        _objc_release(uVar27);
        _objc_destroyWeak(auStack_300);
        _objc_destroyWeak(auStack_2c8);
        _objc_destroyWeak(auStack_2b8);
        return;
      }
      func_0x00010c1db480(puVar2);
      puStack_2a8 = PTR_PTR_112700c60;
      ppuVar20 = &puStack_2b0;
      puStack_2b0 = puVar2;
    }
    _objc_msgSendSuper2(ppuVar20,PTR_s_showAnimated__11266b178,param_3);
    return;
  }
  return;
}



/* Entry: 1091c2aa8; end: 1091c345f; -[SCLensMediaAndPresetPickerController setUpPhotoAccessPromptView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c2aa8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((puVar2 != (undefined *)0x0) &&
     (lVar28 = (long)_DAT_112782dac, *(long *)(param_1 + lVar28) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    *(undefined **)(param_1 + lVar28) = puVar1;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
    puVar1 = param_1;
    func_0x00010c25e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c25e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar18);
    _objc_release(uVar22);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar21);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar20);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar27);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
    func_0x00010c213040(puVar1);
    func_0x00010c1cfce0(puVar1);
    ppuVar19 = &PTR____CFConstantStringClassReference_110f2b8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f2b8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
    _objc_release(ppuVar19);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf34860(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar15);
    _objc_release(uVar22);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar21);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar20);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(uVar27);
    _objc_release(puVar4);
    puVar18 = PTR_PTR_1126af938;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar18);
    _objc_release(puVar2);
    puVar2 = puVar18;
    func_0x00010c271420(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar18);
    _objc_release(puVar2);
    ppuVar19 = &PTR____CFConstantStringClassReference_110e286f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e286f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar18);
    _objc_release(ppuVar19);
    func_0x00010befbd60(puVar18);
    puVar2 = puVar18;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar23 = puVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf49420(0x4066e00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar25;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf493c0(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar18;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf493c0(0xc037000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar5;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar16;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar21);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(uVar20);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(uVar27);
    _objc_release(puVar13);
    _objc_release(puVar15);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010bf9e160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puStack_230 = PTR_PTR_112700c60;
      ppuVar19 = &puStack_238;
      puStack_238 = puVar1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if ((puVar2 != (undefined *)0x2) &&
         (puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
         puVar2 != (undefined *)0x1)) {
        _objc_initWeak(auStack_1b8,puVar1);
        uVar27 = *(undefined8 *)(puVar1 + _DAT_112782d80);
        func_0x00010c269d40(uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e8 = 0xc2000000;
        pcStack_1e0 = FUN_1091c3620;
        puStack_1d8 = &UNK_1108488f8;
        _objc_copyWeak(auStack_1c8,auStack_1b8);
        puStack_228 = puVar2;
        uStack_220 = 0xc2000000;
        pcStack_218 = FUN_1091c3760;
        puStack_210 = &UNK_1108488f8;
        puStack_1d0 = puVar1;
        uStack_1c0 = (char)param_3;
        _objc_copyWeak(auStack_200,auStack_1b8);
        puStack_208 = puVar1;
        uStack_1f8 = (char)param_3;
        func_0x00010bf37c20(uVar27);
        _objc_release(uVar27);
        _objc_destroyWeak(auStack_200);
        _objc_destroyWeak(auStack_1c8);
        _objc_destroyWeak(auStack_1b8);
        return;
      }
      func_0x00010c1db480(puVar1);
      puStack_1a8 = PTR_PTR_112700c60;
      ppuVar19 = &puStack_1b0;
      puStack_1b0 = puVar1;
    }
    _objc_msgSendSuper2(ppuVar19,PTR_s_showAnimated__11266b178,param_3);
    return;
  }
  return;
}



/* Entry: 1091c3460; end: 1091c361f; -[SCLensMediaAndPresetPickerController showAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c3460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_e0 = PTR_PTR_112700c60;
    plVar3 = &lStack_e8;
    lStack_e8 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if ((puVar2 != (undefined *)0x2) &&
       (puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
       puVar2 != (undefined *)0x1)) {
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112782d80);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1091c3620;
      puStack_88 = &UNK_1108488f8;
      _objc_copyWeak(auStack_78,auStack_68);
      puStack_d8 = puVar2;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1091c3760;
      puStack_c0 = &UNK_1108488f8;
      lStack_80 = param_1;
      uStack_70 = (char)param_3;
      _objc_copyWeak(auStack_b0,auStack_68);
      lStack_b8 = param_1;
      uStack_a8 = (char)param_3;
      func_0x00010bf37c20(uVar4);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      return;
    }
    func_0x00010c1db480(param_1);
    puStack_58 = PTR_PTR_112700c60;
    plVar3 = &lStack_60;
    lStack_60 = param_1;
  }
  _objc_msgSendSuper2(plVar3,PTR_s_showAnimated__11266b178,param_3);
  return;
}



/* Entry: 1091c3620; end: 1091c3757;  */

void FUN_1091c3620(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07cd80();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c1db480(uVar1);
    uVar2 = uVar1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2d220();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 == 0) {
      uVar3 = uVar2;
      func_0x00010bfe72c0();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        func_0x00010c238ae0(uVar1);
      }
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1091c3758;
      puStack_40 = &UNK_110842e18;
      uStack_38 = uVar1;
      func_0x00010c2a2120(uVar2);
      _objc_release(uVar2);
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR_PTR_112700c60;
    _objc_msgSendSuper2(&uStack_68,PTR_s_showAnimated__11266b178,*(undefined1 *)(param_1 + 0x30));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1091c3758; end: 1091c375f;  */

void FUN_1091c3758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadNextBatch_112604938);
  return;
}



/* Entry: 1091c3760; end: 1091c37f3;  */

void FUN_1091c3760(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07cd80();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c1db480(uVar1);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    puStack_38 = PTR_PTR_112700c60;
    _objc_msgSendSuper2(&uStack_40,PTR_s_showAnimated__11266b178,*(undefined1 *)(param_1 + 0x30));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1091c37f4; end: 1091c389f; -[SCLensMediaAndPresetPickerController hideAnimated:completion:] */

void FUN_1091c37f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_s_hideAnimated_completion__1125d5fe0;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091c38a0;
  puStack_48 = &UNK_11084aaa8;
  puStack_68 = PTR_PTR_112700c60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = param_1;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_70,puVar1,param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091c38a0; end: 1091c3903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c38a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782da8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782da8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782dac);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782dac) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091c38f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091c3904; end: 1091c3c87; -[SCLensMediaAndPresetPickerController innerSelectOptionAtIndexPath:cellToSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c3904(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1091c3c28;
  puStack_58 = PTR_PTR_112700c60;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_innerSelectOptionAtIndexPath_cel_1125f6f78,param_3,param_4);
  lVar1 = param_3;
  func_0x00010c1554e0();
  if (lVar1 != 1) goto LAB_1091c3c28;
  lVar1 = param_3;
  func_0x00010c0840e0();
  lVar2 = param_1;
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07ad60();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    lVar1 = param_1;
    func_0x00010c159cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c159cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2de60(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0b780();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1091c3d60;
      puStack_c0 = &UNK_110adfbe8;
      puVar4 = auStack_b0;
      _objc_copyWeak(puVar4,auStack_68);
      _objc_retain(param_3);
      lVar2 = lVar1;
      lStack_b8 = param_3;
      func_0x00010bfc8560(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb400(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lStack_b8;
LAB_1091c3c14:
      _objc_release(lVar1);
      goto LAB_1091c3c1c;
    }
    if (lVar2 == 2) {
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_e0;
      _objc_copyWeak(puVar4,auStack_68);
      _objc_retain(param_3);
      lVar2 = lVar1;
      func_0x00010bfcc100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb400(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      goto LAB_1091c3c14;
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112782d78);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1091c3c88;
    puStack_90 = &UNK_110a4ac90;
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_78 = param_2;
    lStack_70 = lVar1;
    _objc_retain(param_4);
    lStack_88 = param_4;
    func_0x00010c162a00(uVar5);
    _objc_release(lStack_88);
    puVar4 = auStack_80;
LAB_1091c3c1c:
    _objc_destroyWeak(puVar4);
  }
  _objc_destroyWeak(auStack_68);
LAB_1091c3c28:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c3c88; end: 1091c3d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c3c88(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1091c3d54;
      puStack_40 = &UNK_110842e18;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_38 = uVar2;
      func_0x000107c312cc("APPSTORE",&puStack_58);
      _objc_release(uStack_38);
    }
    else {
      func_0x00010c0a4000(*(undefined8 *)(lVar1 + _DAT_112782d7c));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091c3d54; end: 1091c3d5f;  */

void FUN_1091c3d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadingIndicatorActive__11264d540,0);
  return;
}



/* Entry: 1091c3d60; end: 1091c3e3b;  */

void FUN_1091c3d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be86d00(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c3e3c; end: 1091c3eff;  */

void FUN_1091c3e3c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_5 != 0)) {
      func_0x00010be0e220(param_1);
    }
    else {
      func_0x00010be86cc0(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c3f00; end: 1091c410b; -[SCLensMediaAndPresetPickerController _receivedImage:forItemAtIndexPath:loadingId:imageId:normalizedFaceRects:] */

void FUN_1091c3f00(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c159cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_4;
    func_0x00010c1554e0();
    _objc_release(uVar1);
    if (lVar3 == 1) goto LAB_1091c40b0;
  }
  else {
    _objc_release(uVar1);
  }
  func_0x00010c1fb400(param_1);
  func_0x00010c1fb3a0(param_1);
  if (param_3 == 0) {
    func_0x00010be358c0(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar4 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1091c410c;
    puStack_a0 = &UNK_110853740;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    lStack_98 = param_4;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_7);
    uStack_88 = param_7;
    _objc_retain(param_6);
    uStack_80 = param_6;
    uStack_70 = param_2;
    func_0x000107c27d8c(uVar4,&puStack_b8);
    _objc_release(uVar4);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_release(lStack_98);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
LAB_1091c40b0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c410c; end: 1091c436b;  */

void FUN_1091c410c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf9e160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010be358c0(lVar1);
    }
    else {
      func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x28));
      func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x28));
      _CGAffineTransformMakeScale(&uStack_90,param_1);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc0000000;
      pcStack_d0 = FUN_1091c436c;
      puStack_c8 = &UNK_110adfc48;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      func_0x00010c0b8600(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bde8140();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        lVar4 = lVar1;
        func_0x00010bf6b020(lVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c097160(lVar4);
        _objc_release(puVar5);
        _objc_release(lVar4);
        _objc_initWeak(auStack_e8,lVar1);
        lVar4 = lVar1;
        func_0x00010bf9e160(lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_f8,auStack_e8);
        uStack_f0 = *(undefined8 *)(param_2 + 0x48);
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        _objc_retain(uVar7);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(uVar6);
        func_0x00010c1995e0(lVar4);
        _objc_release(lVar4);
        _objc_release(uVar6);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_f8);
        _objc_destroyWeak(auStack_e8);
      }
      _objc_release(lVar2);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091c436c; end: 1091c43c3;  */

void FUN_1091c436c(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bdc1080(param_2);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  _CGRectApplyAffineTransform(&uStack_50);
  func_0x00010c2971a0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091c43c4; end: 1091c4497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c43c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = lVar1;
      func_0x00010bf6b020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _UIImageJPEGRepresentation(*(undefined8 *)(lVar1 + _DAT_112782d98),uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0971a0(lVar2,param_2,lVar1,uVar3);
      _objc_release(uVar3);
      _objc_release(lVar2);
      func_0x00010be358c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010c0a4000(*(undefined8 *)(lVar1 + _DAT_112782d7c),param_2,param_3,
                          *(undefined8 *)(param_1 + 0x38));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091c4498; end: 1091c45d7; -[SCLensMediaAndPresetPickerController _receiveVideoURL:forItemAtIndexPath:loadingId:videoId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c4498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar6 = PTR_PTR_1126ba150;
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_4);
  func_0x00010bf0b9e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112782d9c;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe1120();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf12400();
  func_0x00010c22e440(puVar6,param_2,puVar1,uVar3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar6 == 0) {
    func_0x00010bea3ce0(param_1,param_2,param_3,param_4,param_6);
    _objc_release(param_4);
  }
  else {
    func_0x00010be358c0(param_1,param_2,param_4);
    _objc_release(param_4);
    func_0x00010c10ae00(PTR_PTR_1126d2ad8);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091c45d8; end: 1091c45ef; -[SCLensMediaAndPresetPickerController _failToReceiveVideoForIndexPath:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c45d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112782db0);
  *(undefined8 *)(param_1 + _DAT_112782db0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c45f0; end: 1091c47f3; -[SCLensMediaAndPresetPickerController _presentVideoEditingForURL:forItemAtIndexPath:videoId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c45f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ddb70;
  _objc_alloc(PTR_PTR_1126ddb70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782d90);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061320(puVar1);
  _objc_release(uVar2);
  lVar3 = param_1 + _DAT_112782d94;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2641c0();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782d8c);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf22c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_112782d88));
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c47f4; end: 1091c48ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c47f4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112782d90));
      func_0x00010c0dd640(param_1);
      func_0x00010bea3ce0(param_1);
    }
    lVar1 = param_1 + _DAT_112782d94;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13d800();
    _objc_release(lVar1);
    func_0x00010bf94c20(*(undefined8 *)(param_1 + _DAT_112782d88));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c48ac; end: 1091c4bff; -[SCLensMediaAndPresetPickerController _setExternalVideoForURL:forItemAtIndexPath:videoId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c48ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  double adStack_e0 [6];
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = (long)_DAT_112782db0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar2);
  lVar5 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097180();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    func_0x00010be358c0(param_1);
    goto LAB_1091c4b94;
  }
  puVar3 = *(undefined **)(param_1 + _DAT_112782d90);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ddb78;
    _objc_alloc();
    dStack_a8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    fVar8 = 0.0;
    func_0x00010c03dd00(0,0x3f800000);
    if (puVar3 != (undefined *)0x0) goto LAB_1091c49dc;
    fVar6 = 0.0;
  }
  else {
LAB_1091c49dc:
    func_0x00010c27a460(&uStack_b0,puVar3);
    dVar1 = dStack_a8;
    func_0x00010c27a460(adStack_e0,puVar3);
    fVar6 = (float)dVar1;
    fVar8 = (float)adStack_e0[0];
  }
  _atan2f(fVar6,fVar8);
  fVar8 = fVar6 + 6.2831855;
  if (0.0 <= fVar6) {
    fVar8 = fVar6;
  }
  lVar7 = (long)(fVar8 / 1.5707964);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(puVar4);
  uVar2 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26560();
  _objc_release(lVar5);
  func_0x00010c1fb3a0(param_1);
  _objc_initWeak(&uStack_b0,param_1);
  func_0x00010bf9e160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128200(puVar3);
  lVar5 = lVar7;
  func_0x00010c1280c0(puVar3);
  puVar4 = puVar3;
  func_0x00010c078420(puVar3);
  _objc_copyWeak(auStack_f0,&uStack_b0);
  uStack_e8 = param_2;
  _objc_retain(param_4);
  func_0x00010c1998e0(lVar7,lVar5,(float)((uint)puVar4 ^ 1),param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(&uStack_b0);
  _objc_release(uVar2);
  _objc_release(puVar3);
LAB_1091c4b94:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c4c00; end: 1091c4cdb;  */

void FUN_1091c4c00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1091c4cdc;
  puStack_58 = &UNK_1108502a8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1091c4cdc; end: 1091c4d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c4cdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c0a4000(*(undefined8 *)(lVar1 + _DAT_112782d7c),param_2,*(long *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x38));
    }
    func_0x00010be358c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    lVar2 = lVar1 + _DAT_112782d94;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c13d800();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091c4d58; end: 1091c4e37; -[SCLensMediaAndPresetPickerController showNoImagesWarningIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c4d58(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + _DAT_112782d78), _objc_release(), lVar3 == 0)) {
    lVar3 = param_1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c120180();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2b8d8;
    }
    else {
      lVar3 = param_1;
      func_0x00010bfe8840();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bfe72c0();
      _objc_release(lVar3);
      if (lVar1 != 0) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2b8f8;
    }
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23acc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 1091c4e38; end: 1091c4e8f; -[SCLensMediaAndPresetPickerController hideNoImagesWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c4e38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782da8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091c4e90; end: 1091c4ecb; -[SCLensMediaAndPresetPickerController currentMediaTypes] */

undefined8 FUN_1091c4e90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c6c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091c4ecc; end: 1091c4eff; -[SCLensMediaAndPresetPickerController videoEditingEnabled] */

void FUN_1091c4ecc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700c60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_videoEditingEnabled_1126841c8);
  return;
}



/* Entry: 1091c4f00; end: 1091c4fd7; -[SCLensMediaAndPresetPickerController showWarningWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c4f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112782dac;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c21c3e0(param_1);
  lVar2 = param_1;
  func_0x00010c2a2200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010c2a2200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091c4fd8; end: 1091c5117; -[SCLensMediaAndPresetPickerController setPhotoPermissionsPromptHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c4fd8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_3 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112782da8;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
    func_0x00010c21c300(param_1);
    lVar4 = param_1;
    func_0x00010c0fb3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    func_0x00010c0fb3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112782dac);
    *(undefined8 *)(param_1 + _DAT_112782dac) = 0;
    _objc_release(uVar1);
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091c5118; end: 1091c5153; -[SCLensMediaAndPresetPickerController _didTapAllowButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c5118(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112782d80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c5154; end: 1091c5223; -[SCLensMediaAndPresetPickerController _hideLoadingForCellAtIndexPath:] */

void FUN_1091c5154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091c5224;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1091c5224; end: 1091c52c7;  */

void FUN_1091c5224(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c1bec60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c52c8; end: 1091c546b; -[SCLensMediaAndPresetPickerController _contentUriForImage:withAssetIdentifier:indexPath:] */

void FUN_1091c52c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf4dc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar1 == 0) {
    func_0x000107c3129c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25ce20(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    uVar4 = param_3;
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c14e020();
    if ((int)uVar5 == 0) {
      func_0x00010be358c0(param_1,param_2,param_5);
      _objc_release(uVar4);
      lVar6 = 0;
      goto LAB_1091c5414;
    }
    lVar6 = param_4;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      func_0x00010c0c4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26560();
      _objc_release(param_1);
    }
    _objc_release(uVar4);
  }
  _objc_retain(lVar1);
  lVar6 = lVar1;
LAB_1091c5414:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1091c546c; end: 1091c5537; -[SCLensMediaAndPresetPickerController lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:] */

void FUN_1091c546c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar2 == (undefined *)0x2) {
      _objc_release(lVar1);
      goto LAB_1091c5518;
    }
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    _objc_release(lVar1);
    if (puVar2 == (undefined *)0x1) goto LAB_1091c5518;
  }
  puStack_48 = PTR_PTR_112700c60;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_lensSubPickerImageProvider_didUp_112603680,param_3,param_4,
                      param_5);
LAB_1091c5518:
  _objc_release(param_3);
  return;
}



/* Entry: 1091c5538; end: 1091c55fb; -[SCLensMediaAndPresetPickerController videoCellDidTapEditButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c5538(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c299e80();
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_112782db0;
    if (*(long *)(param_1 + lVar5) != 0) {
      lVar1 = param_1;
      func_0x00010bfe7100(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfecfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      uVar3 = param_3;
      func_0x00010bf5f2e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7f480(param_1,param_2,uVar4,lVar2,uVar3);
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091c55fc; end: 1091c560b; -[SCLensMediaAndPresetPickerController warningMessageLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091c55fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782da8);
}



/* Entry: 1091c560c; end: 1091c564b; -[SCLensMediaAndPresetPickerController setWarningMessageLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c560c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782da8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c564c; end: 1091c565b; -[SCLensMediaAndPresetPickerController photoAccessPromptView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091c564c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782dac);
}



/* Entry: 1091c565c; end: 1091c569b; -[SCLensMediaAndPresetPickerController setPhotoAccessPromptView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c565c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782dac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c569c; end: 1091c56ab; -[SCLensMediaAndPresetPickerController selectedOptionRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091c569c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782db4);
}



/* Entry: 1091c56ac; end: 1091c56eb; -[SCLensMediaAndPresetPickerController setSelectedOptionRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c56ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782db4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c56ec; end: 1091c57e7; -[SCLensMediaAndPresetPickerController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091c56ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782db4,0);
  _objc_storeStrong(param_1 + _DAT_112782d9c,0);
  _objc_storeStrong(param_1 + _DAT_112782db0,0);
  _objc_destroyWeak(param_1 + _DAT_112782d94);
  _objc_storeStrong(param_1 + _DAT_112782d90,0);
  _objc_storeStrong(param_1 + _DAT_112782d8c,0);
  _objc_storeStrong(param_1 + _DAT_112782d88,0);
  _objc_storeStrong(param_1 + _DAT_112782d84,0);
  _objc_storeStrong(param_1 + _DAT_112782da4,0);
  _objc_storeStrong(param_1 + _DAT_112782d80,0);
  _objc_storeStrong(param_1 + _DAT_112782d7c,0);
  _objc_storeStrong(param_1 + _DAT_112782d78,0);
  _objc_storeStrong(param_1 + _DAT_112782dac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782da8,0);
  return;
}



/* Entry: 1091c57e8; end: 1091c5a2f; -[SCLensSubPickerController initWithBottomViewContainer:lensLogger:imageProvider:externalImageComponent:pickerFeature:resultFeature:mediaAssetManager:videoEditingEnabled:batchSize:hideArrow:lensOptionSourceType:selectionLimit:] */

undefined8 *
FUN_1091c57e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112700c68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[7] = 0x7fffffffffffffff;
    *(undefined1 *)(puVar1 + 8) = 0;
    _objc_retain(param_4);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0x17]);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    puVar1[0xc] = 0;
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = param_10;
    puVar1[0xd] = param_12;
    puVar1[0xe] = 0;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__CGAffineTransformIdentity_110347008;
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[0x1d] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    puVar1[0x1c] = uVar2;
    puVar1[0x1f] = uVar5;
    puVar1[0x1e] = uVar4;
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    puVar1[0x21] = *(undefined8 *)(puVar3 + 0x28);
    puVar1[0x20] = uVar2;
    puVar1[0xf] = param_16;
    puVar1[0x10] = param_15;
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    func_0x00010c21c3c0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091c5a30; end: 1091c5aaf; -[SCLensSubPickerController dealloc] */

void FUN_1091c5a30(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091c5ab0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010bcbe2c4("APPSTORE",&puStack_48);
  puStack_50 = PTR_PTR_112700c68;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091c5ab0; end: 1091c5abb;  */

void FUN_1091c5ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1091c5abc; end: 1091c5d7f; -[SCLensSubPickerController setUpViews:] */

void FUN_1091c5abc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddb88;
  _objc_alloc();
  func_0x00010c014020(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c1af000(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010bf07120(*(undefined8 *)(param_1 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126ddb90);
  puVar1 = PTR_PTR_1126ddb90;
  _objc_opt_class(PTR_PTR_1126ddb90);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126ddb98);
  puVar1 = PTR_PTR_1126ddb98;
  _objc_opt_class(PTR_PTR_1126ddb98);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126ddba0);
  puVar1 = PTR_PTR_1126ddba0;
  _objc_opt_class(PTR_PTR_1126ddba0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1d20(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa1ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1d20(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c08caf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutCollectionViewIfNeededWith_112600cc8,0)
  ;
  return;
}



/* Entry: 1091c5d80; end: 1091c5d87; -[SCLensSubPickerController showAnimated:] */

void FUN_1091c5d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showAnimated_completion__11266b180,param_3,0)
  ;
  return;
}



/* Entry: 1091c5d88; end: 1091c5e2b; -[SCLensSubPickerController showAnimated:completion:] */

void FUN_1091c5d88(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c235d60(*(undefined8 *)(param_1 + 0xd8));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1091c5df0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c2a2120(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_48);
  return;
}



/* Entry: 1091c5e2c; end: 1091c5f6f; -[SCLensSubPickerController hideAnimated:completion:] */

void FUN_1091c5e2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1091c5f70;
  uStack_40 = 0x1091c5f80;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010c1fb3e0(param_1);
  func_0x00010c1fb3a0(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(param_4);
  func_0x00010bfe1860(uVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091c5f70; end: 1091c5f93;  */

void FUN_1091c5f70(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091c5f94; end: 1091c5feb;  */

void FUN_1091c5f94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091c5fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091c5fec; end: 1091c5ff3; -[SCLensSubPickerController pointInside:view:] */

void FUN_1091c5fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_pointInside_view__11261e4e0);
  return;
}



/* Entry: 1091c5ff4; end: 1091c6057; -[SCLensSubPickerController setOptionIdToRestore:] */

void FUN_1091c5ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf2d220(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c13c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_restoreOptionSelectionIfNeededWi_11262cb80,uVar1);
  return;
}



/* Entry: 1091c6058; end: 1091c609b; -[SCLensSubPickerController pickerContentView] */

void FUN_1091c6058(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091c609c; end: 1091c6123; -[SCLensSubPickerController setPickerViewFillColor:] */

void FUN_1091c609c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c25e720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c103be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091c6124; end: 1091c61b3; -[SCLensSubPickerController selectedOptionIndexPath] */

void FUN_1091c6124(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c1554e0(uVar1);
    uVar2 = uVar3;
    func_0x00010c0deec0(uVar3,param_2,uVar1);
    _objc_release(uVar3);
    uVar3 = *(ulong *)(param_1 + 0x90);
    func_0x00010c142240();
    if (uVar2 <= uVar3) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091c61b4; end: 1091c620f; -[SCLensSubPickerController selectedOptionIndex] */

long FUN_1091c61b4(long param_1)

{
  long lVar1;
  
  func_0x00010c159ca0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010c1554e0(), lVar1 != 1)) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1091c6210; end: 1091c670f; -[SCLensSubPickerController selectOptionAtIndexPath:] */

void FUN_1091c6210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7,ulong param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_7;
  _objc_retain(param_7);
  if (param_7 == 0) {
    lVar4 = 0;
    func_0x00010c1554e0();
joined_r0x0001091c629c:
    if (lVar4 != 0) goto LAB_1091c66c8;
  }
  else {
    uVar2 = param_5;
    func_0x00010c159ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    lVar5 = param_7;
    func_0x00010c071ae0();
    if ((uVar3 & 1) != 0) {
      lVar4 = param_7;
      func_0x00010c1554e0();
      _objc_release(uVar2);
      goto joined_r0x0001091c629c;
    }
    _objc_release(uVar2);
  }
  lVar4 = param_7;
  func_0x00010c0840e0();
  uVar2 = param_5;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  func_0x00010c1554e0();
  uVar3 = uVar2;
  func_0x00010c0deec0();
  _objc_release(uVar2);
  if ((long)uVar3 <= lVar4) goto LAB_1091c66c8;
  uVar2 = param_5;
  func_0x00010c159ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  func_0x00010c1554e0();
  if (lVar5 == 0) {
    iVar1 = (int)*(undefined8 *)(param_5 + 0x28);
    func_0x00010c159180();
    if (iVar1 != 0) goto LAB_1091c6324;
  }
  else {
LAB_1091c6324:
    func_0x00010c1fb3e0(param_5);
    uVar3 = param_5;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126ddb80;
    _objc_opt_class(PTR_PTR_1126ddb80);
    uVar8 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar3 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    if (uVar3 != 0) {
      func_0x00010c17c0e0(uVar6);
      func_0x00010c1bec60(uVar6);
      func_0x00010c2832c0(uVar6);
    }
    if ((uVar2 != 0) && (uVar6 = uVar2, func_0x00010c1554e0(), uVar6 == 0)) {
      func_0x00010c1fadc0(*(undefined8 *)(param_5 + 0x28));
    }
    uVar6 = param_5;
    func_0x00010c159c40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd640(param_5);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  lVar5 = param_7;
  func_0x00010c1554e0();
  if (lVar5 == 0) {
    func_0x00010c1fadc0(*(undefined8 *)(param_5 + 0x28));
    uVar11 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c0fb940(uVar11);
    _objc_retainAutoreleasedReturnValue();
LAB_1091c64ec:
    func_0x00010c1fb3a0(param_5);
    _objc_release(uVar11);
  }
  else {
    lVar5 = param_7;
    func_0x00010c1554e0();
    if (lVar5 == 1) {
      uVar3 = param_5;
      func_0x00010c094e60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_7);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0840e0(param_7);
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c095a40(uVar3);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(uVar3);
      uVar11 = *(undefined8 *)(param_5 + 0xb8);
      func_0x00010c159c80(param_5);
      func_0x00010bfe7ea0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1091c64ec;
    }
  }
  uVar3 = param_5;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  param_8 = uVar3;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar6 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar7);
  uVar3 = param_8;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_8);
  if (uVar3 == 0) {
LAB_1091c65dc:
    uVar6 = param_5;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126ddba0;
    _objc_opt_class(PTR_PTR_1126ddba0);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar7);
    _objc_release(uVar8);
    if (((uVar6 & 1) != 0) && (uVar8 != 0)) {
      uVar6 = param_5;
      func_0x00010bfe7100(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128de0(uVar6);
      _objc_release(puVar7);
      _objc_release(uVar6);
    }
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    param_8 = 0x12;
    lVar5 = param_7;
    func_0x00010c1525a0();
    _objc_release(param_5);
  }
  else {
    uVar6 = param_5;
    func_0x00010bfe7100(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar8 = param_8;
    uVar11 = param_1;
    uVar12 = param_2;
    uVar13 = param_3;
    uVar14 = param_4;
    func_0x00010bfb68e0();
    _CGRectContainsRect(param_1,param_2,param_3,param_4,uVar11,uVar12,uVar13,uVar14);
    _objc_release(uVar6);
    if ((uVar8 & 1) == 0) goto LAB_1091c65dc;
    lVar5 = param_7;
    func_0x00010c0655a0(param_5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_1091c66c8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  uVar11 = *(undefined8 *)(param_7 + 0x50);
  *(long *)(param_7 + 0x50) = lVar5;
  _objc_retain(lVar5);
  _objc_retain(param_8);
  _objc_release(uVar11);
  func_0x00010c17c0e0(param_8);
  func_0x00010c1bec60(param_8);
  func_0x00010c2832c0(param_8);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1091c6710; end: 1091c6793; -[SCLensSubPickerController innerSelectOptionAtIndexPath:cellToSelect:] */

void FUN_1091c6710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c17c0e0(param_4,param_2,1);
  func_0x00010c1bec60(param_4,param_2,1);
  func_0x00010c2832c0(param_4,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091c6794; end: 1091c679b; -[SCLensSubPickerController loadNextBatch] */

void FUN_1091c6794(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be4e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatch_112571200);
  return;
}



/* Entry: 1091c679c; end: 1091c679f; -[SCLensSubPickerController showNoImagesWarningIfNeeded] */

void FUN_1091c679c(void)

{
  return;
}



/* Entry: 1091c67a0; end: 1091c67a3; -[SCLensSubPickerController hideNoImagesWarning] */

void FUN_1091c67a0(void)

{
  return;
}



/* Entry: 1091c67a4; end: 1091c68c3; -[SCLensSubPickerController restoreOptionSelectionIfNeededWithCanProcessMoreFlag:] */

void FUN_1091c67a4(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar6 = param_1;
    func_0x00010c159ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 != 0) {
      return;
    }
    uVar6 = 0;
    goto LAB_1091c6888;
  }
  uVar6 = param_1;
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfecd20();
  _objc_release(uVar6);
  if (uVar2 == 0x7fffffffffffffff) {
    if ((param_3 & 1) == 0) {
LAB_1091c6838:
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar3);
    }
  }
  else if ((param_3 == 0) || (uVar2 < *(ulong *)(param_1 + 0x60))) goto LAB_1091c6838;
  uVar4 = param_1;
  func_0x00010c159c80();
  uVar6 = uVar2;
  if (param_3 == 0 && (uVar2 == 0x7fffffffffffffff && uVar4 == 0x7fffffffffffffff)) {
    uVar6 = 0;
  }
  if ((uVar2 == 0x7fffffffffffffff) && ((param_3 & 1) != 0 || uVar4 != 0x7fffffffffffffff)) {
    return;
  }
LAB_1091c6888:
  puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar6,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158ee0(param_1,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1091c68c4; end: 1091c68cb; -[SCLensSubPickerController videoEditingEnabled] */

undefined1 FUN_1091c68c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 1091c68cc; end: 1091c68d3; -[SCLensSubPickerController currentMediaTypes] */

undefined8 FUN_1091c68cc(void)

{
  return 1;
}



/* Entry: 1091c68d4; end: 1091c68db; -[SCLensSubPickerController imageCollectionView] */

void FUN_1091c68d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_collectionView_1125ad9f0);
  return;
}



/* Entry: 1091c68dc; end: 1091c6967; -[SCLensSubPickerController activeFeatures] */

undefined * FUN_1091c68dc(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bef03e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (iVar2 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar7 = puVar3;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c0df2e0();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bfe7100(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c0df300(puVar3,param_2,puVar7);
    _objc_release(puVar7);
    if (puVar4 == puVar8) {
      if ((long)puVar4 < 1) {
        puVar7 = (undefined *)0x1;
      }
      else {
        puVar8 = (undefined *)0x0;
        do {
          puVar7 = puVar3;
          func_0x00010bfe7100();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          func_0x00010c0deec0();
          _objc_release(puVar7);
          puVar7 = puVar3;
          func_0x00010bfe7100(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf404e0(puVar3,param_2,puVar7,puVar8);
          _objc_release(puVar7);
          puVar7 = (undefined *)(ulong)(puVar5 == puVar6);
          if (puVar5 != puVar6) {
            return puVar7;
          }
          bVar1 = puVar4 + -1 != puVar8;
          puVar8 = puVar8 + 1;
        } while (bVar1);
      }
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 1091c6968; end: 1091c6a73; -[SCLensSubPickerController isCollectionInSync] */

bool FUN_1091c6968(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c0df2e0();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0df300(param_1,param_2,lVar7);
  _objc_release(lVar7);
  if (lVar3 == lVar4) {
    if (lVar3 < 1) {
      bVar1 = true;
    }
    else {
      lVar7 = 0;
      do {
        lVar4 = param_1;
        func_0x00010bfe7100();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0deec0();
        _objc_release(lVar4);
        lVar4 = param_1;
        func_0x00010bfe7100(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bf404e0(param_1,param_2,lVar4,lVar7);
        _objc_release(lVar4);
        bVar1 = lVar5 == lVar6;
        if (!bVar1) {
          return bVar1;
        }
        bVar2 = lVar3 + -1 != lVar7;
        lVar7 = lVar7 + 1;
      } while (bVar2);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1091c6a74; end: 1091c6b17; -[SCLensSubPickerController notifyUnselectedMediaForIdentifier:] */

void FUN_1091c6a74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (1 < *(ulong *)(param_1 + 0x78)) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf4dc60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1091c6b18;
      puStack_30 = &UNK_110849810;
      _objc_retain(lVar1);
      lStack_28 = lVar1;
      func_0x00010c282700(uVar2,param_2,lVar1,&puStack_48);
      _objc_release(lStack_28);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1091c6b18; end: 1091c6b1b;  */

void FUN_1091c6b18(void)

{
  return;
}


