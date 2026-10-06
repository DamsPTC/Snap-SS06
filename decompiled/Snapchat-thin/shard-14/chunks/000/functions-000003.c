/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aeff2cc; end: 10aeff2d3; -[SCCCameraMode__Enum init] */

void FUN_10aeff2cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x17);
  return;
}



/* Entry: 10aeff2d4; end: 10aeff2db; -[SCCCameraModeState__Enum init] */

void FUN_10aeff2d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10aeff2dc; end: 10aeff33f; -[SCCCameraControlCenterContext initWithOnExitButtonTap:] */

undefined8 * FUN_10aeff2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112701dd8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x00010aeff4c4(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10aeff340; end: 10aeff353; +[SCCCameraControlCenterContext valdiMarshallableObjectDescriptor] */

void FUN_10aeff340(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c90dc0;
  param_1[1] = &PTR_s_SCBridgeObservable_110c90e38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10aeff354; end: 10aeff38b; -[SCCCameraControlCenterViewModel initWithCameraModeData:] */

void FUN_10aeff354(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701de0;
  uStack_20 = param_1;
  func_0x00010aeff4c4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10aeff38c; end: 10aeff39f; +[SCCCameraControlCenterViewModel valdiMarshallableObjectDescriptor] */

void FUN_10aeff38c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c90e48;
  param_1[1] = &PTR_DAT_110c90e78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10aeff3a0; end: 10aeff49f; -[SCCCameraModeData initWithMode:iconVersion:state:onAddButtonTap:onCellTap:onToolbarButtonTap:] */

undefined8 * FUN_10aeff3a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retainBlock();
  uVar1 = in_x5;
  _objc_retainBlock();
  _objc_release(in_x5);
  uVar2 = in_x6;
  _objc_retainBlock();
  _objc_release(in_x6);
  puStack_68 = PTR_PTR_112701de8;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  func_0x00010aeff4c4(puVar3,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(in_x4);
  return puVar3;
}



/* Entry: 10aeff4a0; end: 10aeff4cb; +[SCCCameraModeData valdiMarshallableObjectDescriptor] */

void FUN_10aeff4a0(undefined8 *param_1)

{
  *param_1 = &PTR_s_mode_110c90e88;
  param_1[1] = &PTR_DAT_110c90fc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10aeff4cc; end: 10aeff53f; -[SCCallUICameraScopedLensProcessingCarouselServices initWithLensProcessingCarouselServices:] */

undefined1 * FUN_10aeff4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeff540; end: 10aeff547; -[SCCallUICameraScopedLensProcessingCarouselServices lensProcessingCarouselServices] */

undefined8 FUN_10aeff540(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeff548; end: 10aeff553; -[SCCallUICameraScopedLensProcessingCarouselServices .cxx_destruct] */

void FUN_10aeff548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff554; end: 10aeff55f; -[SCCameraUIScopedLensProcessingCarouselServices .cxx_destruct] */

void FUN_10aeff554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff560; end: 10aeff58f; -[SCLensProcessingCarouselServices .cxx_destruct] */

void FUN_10aeff560(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff590; end: 10aeff59b; -[SCMainCameraScopedLensProcessingCarouselServices .cxx_destruct] */

void FUN_10aeff590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff59c; end: 10aeff5a3; -[SCLensInfoButtonServices lensInfoButton] */

undefined8 FUN_10aeff59c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeff5a4; end: 10aeff5af; -[SCLensInfoButtonServices .cxx_destruct] */

void FUN_10aeff5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff5b0; end: 10aeff60b; +[SCLensInfoButtonHideEvent didChangeWithValue:] */

void FUN_10aeff5b0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8ad0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeff60c; end: 10aeff663; +[SCLensInfoButtonHideEvent willChangeWithValue:] */

void FUN_10aeff60c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8ad0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeff664; end: 10aeff687; -[SCLensInfoButtonHideEvent copyWithZone:] */

undefined8 FUN_10aeff664(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aeff688; end: 10aeff6eb; -[SCLensInfoButtonHideEvent hash] */

void FUN_10aeff688(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x11);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112701e18;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeff6ec; end: 10aeff72f; -[SCLensInfoButtonHideEvent internalInit] */

void FUN_10aeff6ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701e18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeff730; end: 10aeff7d7; -[SCLensInfoButtonHideEvent isEqual:] */

bool FUN_10aeff730(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aeff7d8; end: 10aeff85b; -[SCLensInfoButtonHideEvent matchWillChange:didChange:] */

void FUN_10aeff7d8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10aeff840;
    lVar2 = 0x11;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10aeff840;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(param_1 + lVar2));
LAB_10aeff840:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeff85c; end: 10aeff88b; -[SCLensOnboardingMetadataStoreServices setLensOnboardingMetadataStore:] */

void FUN_10aeff85c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeff88c; end: 10aeff893; -[SCLensOnboardingMetadataStoreServices lensOnboardingMetadataStoreUpdater] */

undefined8 FUN_10aeff88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aeff894; end: 10aeff8c3; -[SCLensOnboardingMetadataStoreServices setLensOnboardingMetadataStoreUpdater:] */

void FUN_10aeff894(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeff8c4; end: 10aeff8f3; -[SCLensOnboardingMetadataStoreServices .cxx_destruct] */

void FUN_10aeff8c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff8f4; end: 10aeff8ff; -[SCAuthenticatedNetworkServices .cxx_destruct] */

void FUN_10aeff8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff900; end: 10aeff97b;  */

undefined * FUN_10aeff900(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edf80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f31698,
                        &UNK_10e535868,&UNK_10e53589c,4,FUN_10aeff97c,0);
    do {
      if (puRam00000001137edf80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edf80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edf80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edf80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edf80;
}



/* Entry: 10aeff97c; end: 10aeff987;  */

bool FUN_10aeff97c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10aeff988; end: 10aeffa03;  */

undefined * FUN_10aeff988(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edf88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f316b8,
                        &UNK_10e5358ac,&UNK_10e5358fc,3,FUN_10aeffa04,0);
    do {
      if (puRam00000001137edf88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edf88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edf88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edf88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edf88;
}



/* Entry: 10aeffa04; end: 10aeffa0f;  */

bool FUN_10aeffa04(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aeffa10; end: 10aeffa8b;  */

undefined * FUN_10aeffa10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edf90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f316d8,
                        &UNK_10e535908,&UNK_10e53594c,3,FUN_10aeffa8c,0);
    do {
      if (puRam00000001137edf90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edf90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edf90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edf90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edf90;
}



/* Entry: 10aeffa8c; end: 10aeffa97;  */

bool FUN_10aeffa8c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aeffa98; end: 10aeffaff; +[SCARSDKOffscreenMemoryOptimizationConfig descriptor] */

void FUN_10aeffa98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edf98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c032c0,
                        &PTR____CFConstantStringClassReference_110f316f8,&PTR_DAT_113316490,
                        &PTR_DAT_1133164a8,8,0x14,0x1c);
    puRam00000001137edf98 = puVar1;
  }
  return;
}



/* Entry: 10aeffb00; end: 10aeffb67; +[SCLensFSCConfig descriptor] */

void FUN_10aeffb00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edfa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03360,
                        &PTR____CFConstantStringClassReference_110f31718,&PTR_DAT_1133165a8,
                        &PTR_s_enabled_1133165c0,0xb,0xc,0x1c);
    puRam00000001137edfa0 = puVar1;
  }
  return;
}



/* Entry: 10aeffb68; end: 10aeffc4b; +[SCLensesCofLensPhotoCaptureOptimizationConfig descriptor] */

void FUN_10aeffb68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edfa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03400,
                        &PTR____CFConstantStringClassReference_110f31738,&PTR_DAT_113316720,
                        &PTR_DAT_113316738,3,0x10,0x1c);
    puRam00000001137edfa8 = puVar1;
  }
  return;
}



/* Entry: 10aeffc4c; end: 10aeffc57;  */

bool FUN_10aeffc4c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10aeffc58; end: 10aeffcd3;  */

undefined * FUN_10aeffc58(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edfc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f31798,
                        &UNK_10e5359f4,&UNK_10e535a08,2,FUN_10aeffcd4,0);
    do {
      if (puRam00000001137edfc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edfc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edfc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edfc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edfc0;
}



/* Entry: 10aeffcd4; end: 10aeffcdf;  */

bool FUN_10aeffcd4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aeffce0; end: 10aeffd5b;  */

undefined * FUN_10aeffce0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edfc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f317b8,
                        &UNK_10e535a10,&UNK_10e535a28,2,FUN_10aeffd5c,0);
    do {
      if (puRam00000001137edfc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edfc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edfc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edfc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edfc8;
}



/* Entry: 10aeffd5c; end: 10aeffd67;  */

bool FUN_10aeffd5c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aeffd68; end: 10aeffde3;  */

undefined * FUN_10aeffd68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edfd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f317d8,
                        &UNK_10e535a30,&UNK_10e535adc,0xd,FUN_10aeffde4,0);
    do {
      if (puRam00000001137edfd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edfd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edfd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edfd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edfd0;
}



/* Entry: 10aeffde4; end: 10aeffdef;  */

bool FUN_10aeffde4(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10aeffdf0; end: 10aeffe6b;  */

undefined * FUN_10aeffdf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edfd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f317f8,
                        &UNK_10e535b10,&UNK_10e535b1c,1,FUN_10aeffe6c,0);
    do {
      if (puRam00000001137edfd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edfd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edfd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edfd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edfd8;
}



/* Entry: 10aeffe6c; end: 10aeffe77;  */

bool FUN_10aeffe6c(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10aeffe78; end: 10aeffedf; +[SCLensLaunchData descriptor] */

void FUN_10aeffe78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edfe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03540,
                        &PTR____CFConstantStringClassReference_110f31818,
                        &PTR_s_snapchat_lenses_113316810,&PTR_DAT_113316828,0xf,0x70,0x1c);
    puRam00000001137edfe0 = puVar1;
  }
  return;
}



/* Entry: 10aeffee0; end: 10aefff47; +[SCLensLures descriptor] */

void FUN_10aeffee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edfe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c035e0,
                        &PTR____CFConstantStringClassReference_110f31838,
                        &PTR_s_snapchat_lenses_113316a08,&PTR_DAT_113316a20,3,0x20,0x1c);
    puRam00000001137edfe8 = puVar1;
  }
  return;
}



/* Entry: 10aefff48; end: 10aefffaf; +[SCLensGeocircle descriptor] */

void FUN_10aefff48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03680,
                        &PTR____CFConstantStringClassReference_110f31858,
                        &PTR_s_snapchat_lenses_113316a80,&PTR_s_radius_113316a98,2,0x18,0x1c);
    puRam00000001137edff0 = puVar1;
  }
  return;
}



/* Entry: 10aefffb0; end: 10af000a7; +[SCLensGeopoint descriptor] */

void FUN_10aefffb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03720,
                        &PTR____CFConstantStringClassReference_110f31878,
                        &PTR_s_snapchat_lenses_113316ad8,&PTR_s_latitude_113316af0,2,0x18,0x1c);
    puRam00000001137edff8 = puVar1;
  }
  return;
}



/* Entry: 10af000a8; end: 10af000b3;  */

bool FUN_10af000a8(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10af000b4; end: 10af0011b; +[SCLensBitmojiUserInfo descriptor] */

void FUN_10af000b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c037c0,
                        &PTR____CFConstantStringClassReference_110e8d7d8,
                        &PTR_s_snapchat_lenses_113316b30,&PTR_s_avatarId_113316b68,2,0x18,0x1c);
    puRam00000001137ee008 = puVar1;
  }
  return;
}



/* Entry: 10af0011c; end: 10af00183; +[SCLensFriendUserInfo descriptor] */

void FUN_10af0011c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03810,
                        &PTR____CFConstantStringClassReference_110f318b8,
                        &PTR_s_snapchat_lenses_113316b30,&PTR_DAT_113316ba8,4,0x18,0x1c);
    puRam00000001137ee010 = puVar1;
  }
  return;
}



/* Entry: 10af00184; end: 10af001eb; +[SCLensUserData descriptor] */

void FUN_10af00184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03860,
                        &PTR____CFConstantStringClassReference_110e332f8,
                        &PTR_s_snapchat_lenses_113316b30,&PTR_s_userId_113316c28,9,0x48,0x1c);
    puRam00000001137ee018 = puVar1;
  }
  return;
}



/* Entry: 10af001ec; end: 10af00253; +[SCLensUserDataList descriptor] */

void FUN_10af001ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c038b0,
                        &PTR____CFConstantStringClassReference_110f318d8,
                        &PTR_s_snapchat_lenses_113316b30,&PTR_DAT_113316b48,1,0x10,0x1c);
    puRam00000001137ee020 = puVar1;
  }
  return;
}



/* Entry: 10af00254; end: 10af002bb; +[SCLensPersistentStore descriptor] */

void FUN_10af00254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03950,
                        &PTR____CFConstantStringClassReference_110f318f8,
                        &PTR_s_snapchat_lenses_113316d48,&PTR_DAT_113316d60,1,0x10,0x1c);
    puRam00000001137ee028 = puVar1;
  }
  return;
}



/* Entry: 10af002bc; end: 10af003b3; +[SCLensLaunchParams descriptor] */

void FUN_10af002bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c039f0,
                        &PTR____CFConstantStringClassReference_110f31918,
                        &PTR_s_snapchat_lenses_113316d80,&PTR_s_data_p_113316d98,1,0x10,0x1c);
    puRam00000001137ee030 = puVar1;
  }
  return;
}



/* Entry: 10af003b4; end: 10af003bf;  */

bool FUN_10af003b4(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af003c0; end: 10af00427; +[SCLensNetworkPermissions descriptor] */

void FUN_10af003c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c03a90,
                        &PTR____CFConstantStringClassReference_110f31958,
                        &PTR_s_snapchat_lenses_113316db8,&PTR_s_enabled_113316dd0,3,0x18,0x1c);
    puRam00000001137ee040 = puVar1;
  }
  return;
}



/* Entry: 10af00428; end: 10af00447; -[SCStateOrchestrator initWithDefaultState:reducer:] */

void FUN_10af00428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDefaultState_reducer_per_1125e0230,param_3,param_4,0,1);
  return;
}



/* Entry: 10af00448; end: 10af004b3; -[SCStateOrchestrator .cxx_destruct] */

void FUN_10af00448(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af004b4; end: 10af004bb; -[SCStateOrchestratorReducer reduce:otherObject:] */

undefined8 FUN_10af004b4(void)

{
  return 0;
}



/* Entry: 10af004bc; end: 10af00517; -[SCStateOrchestratorBlockReducer compareRequesters:] */

void FUN_10af004bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7818;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010be3ad40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af00518; end: 10af0052f; -[SCStateRequesterPair requester] */

void FUN_10af00518(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af00530; end: 10af00537; -[SCTransitionableStateOrchestrator requestStateChange:transitionInfo:requester:] */

void FUN_10af00530(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestStateChange_transitionInf_11262b430);
  return;
}



/* Entry: 10af00538; end: 10af00593; -[SCPreferences dataForKey:] */

void FUN_10af00538(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af00594; end: 10af005ef; -[SCPreferences dateForKey:] */

void FUN_10af00594(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af005f0; end: 10af006cb; -[SCPreferences unsignedIntegerForKey:] */

ulong FUN_10af005f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_1;
  if (uVar1 == 0) {
    _objc_retain(param_1);
    _objc_opt_class(puVar3);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x00010c2827c0(param_1);
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010c067fc0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10af006cc; end: 10af007af; -[SCPreferences floatForKey:] */

undefined8 FUN_10af006cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar1 == 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar3 = param_2;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_2);
    if (uVar3 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bfb2c80(param_2);
    }
    _objc_release(uVar3);
  }
  else {
    func_0x00010bfb2c80(param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10af007b0; end: 10af0081f; -[SCPreferences setInteger:forKey:] */

void FUN_10af007b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af00820; end: 10af0088f; -[SCPreferences setUnsignedInteger:forKey:] */

void FUN_10af00820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af00890; end: 10af00907; -[SCPreferences setFloat:forKey:] */

void FUN_10af00890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df740(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af00908; end: 10af0097f; -[SCPreferences setDouble:forKey:] */

void FUN_10af00908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df720(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af00980; end: 10af00987; -[SCUcoCarouselConfigServices ucoCarouselConfigProvider] */

undefined8 FUN_10af00980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af00988; end: 10af00993; -[SCUcoCarouselConfigServices .cxx_destruct] */

void FUN_10af00988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af00994; end: 10af0099f; -[SCUcoDataStoreServices .cxx_destruct] */

void FUN_10af00994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af009a0; end: 10af00b13; -[SCUcoEffect initWithLensId:displayName:carouselGroup:carouselGlobalScoreList:unlockableContexts:unlockableTrackInfo:isAnimated:] */

undefined1 *
FUN_10af009a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112701e60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af00b14; end: 10af00b37; -[SCUcoEffect copyWithZone:] */

undefined8 FUN_10af00b14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af00b38; end: 10af00bdf; -[SCUcoEffect hash] */

undefined8 * FUN_10af00b38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af00cd0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af00cdc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10af00cdc;
                }
                goto LAB_10af00cd0;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af00cdc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af00be0; end: 10af00cf7; -[SCUcoEffect isEqual:] */

long FUN_10af00be0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af00cd0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af00cdc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10af00cdc;
                }
                goto LAB_10af00cd0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af00cdc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af00cf8; end: 10af00cff; -[SCUcoEffect lensId] */

undefined8 FUN_10af00cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af00d00; end: 10af00d07; -[SCUcoEffect displayName] */

undefined8 FUN_10af00d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af00d08; end: 10af00d0f; -[SCUcoEffect carouselGroup] */

undefined8 FUN_10af00d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af00d10; end: 10af00d17; -[SCUcoEffect carouselGlobalScoreList] */

undefined8 FUN_10af00d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af00d18; end: 10af00d1f; -[SCUcoEffect unlockableContexts] */

undefined8 FUN_10af00d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af00d20; end: 10af00d27; -[SCUcoEffect unlockableTrackInfo] */

undefined8 FUN_10af00d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af00d28; end: 10af00d2f; -[SCUcoEffect isAnimated] */

undefined1 FUN_10af00d28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af00d30; end: 10af00d8f; -[SCUcoEffect .cxx_destruct] */

void FUN_10af00d30(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af00d90; end: 10af00ddb; +[SCLensCommandProcessingInfoConfiguration newUcoAnimationFrozenConfiguration] */

void FUN_10af00d90(void)

{
  _objc_alloc(PTR_PTR_1126de9c8);
  func_0x00010c052980();
  return;
}



/* Entry: 10af00ddc; end: 10af00e8f; -[SCLensCommandProcessingInfoConfiguration initWithTimestamp:offset:inputSource:cacheTrackingData:forceUseTimestampAsCurrentTime:useOutputTexture:warmupFrameCount:] */

undefined1 *
FUN_10af00ddc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112701e68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4[2];
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    func_0x00010bee77a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af00e90; end: 10af00ef3; -[SCLensCommandProcessingInfoConfiguration initWithTimestamp:inputSource:cacheTrackingData:] */

void FUN_10af00e90(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  uStack_48 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  func_0x00010c0529c0(param_1,param_2,&uStack_30,&uStack_50,param_4,param_5,0,0,10);
  return;
}



/* Entry: 10af00ef4; end: 10af00f57; -[SCLensCommandProcessingInfoConfiguration initWithOffset:] */

void FUN_10af00ef4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uStack_30 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_20 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x00010c0529c0(param_1,param_2,&uStack_30,&uStack_50,0,0,0,0,10);
  return;
}



/* Entry: 10af00f58; end: 10af00f73; -[SCLensCommandProcessingInfoConfiguration forceUseTimestampAsCurrentTime] */

byte FUN_10af00f58(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return 1;
  }
  return *(byte *)(param_1 + 0x2c) & 1;
}



/* Entry: 10af00f74; end: 10af00f77; -[SCLensCommandProcessingInfoConfiguration _validate] */

void FUN_10af00f74(void)

{
  return;
}



/* Entry: 10af00f78; end: 10af00f8b; -[SCLensCommandProcessingInfoConfiguration timeStamp] */

void FUN_10af00f78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10af00f8c; end: 10af00f9f; -[SCLensCommandProcessingInfoConfiguration offset] */

void FUN_10af00f8c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x48);
  return;
}



/* Entry: 10af00fa0; end: 10af00fa7; -[SCLensCommandProcessingInfoConfiguration inputSource] */

undefined8 FUN_10af00fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af00fa8; end: 10af00faf; -[SCLensCommandProcessingInfoConfiguration cacheTrackingData] */

undefined1 FUN_10af00fa8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10af00fb0; end: 10af00fb7; -[SCLensCommandProcessingInfoConfiguration useOutputTexture] */

undefined1 FUN_10af00fb0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10af00fb8; end: 10af00fbf; -[SCLensCommandProcessingInfoConfiguration warmupFrameCount] */

undefined8 FUN_10af00fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


