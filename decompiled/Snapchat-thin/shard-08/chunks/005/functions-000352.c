/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106207268; end: 1062072bb; -[SCLensCameraFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207268(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127431b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127431ac);
  _objc_destroyWeak(param_1 + _DAT_1127431a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127431a4);
  return;
}



/* Entry: 1062072bc; end: 1062072cf; -[SCMainCameraNavigationDestination exit:] */

void FUN_1062072bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001062072c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 1062072d0; end: 106207377; -[SCMainCameraNavigationDestination backgroundExitBehavior] */

void FUN_1062072d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c081c60();
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010bf9b4c0(0x405e000000000000,PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106207368;
    }
  }
  func_0x00010bf9b820(PTR_PTR_1126aecb0);
  _objc_retainAutoreleasedReturnValue();
LAB_106207368:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106207378; end: 106207397; -[SCMainCameraNavigationDestination canHandleNotification:] */

bool FUN_106207378(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c26a060(param_3);
  return param_3 == 1;
}



/* Entry: 106207398; end: 106207477; -[SCMainCameraNavigationDestination willBeNavigatedTo:] */

void FUN_106207398(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_3 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c083160();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c083180();
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf07890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x10),PTR_s_applicationEnterForegroundCheckF_11259f7c8)
        ;
        return;
      }
    }
    else {
      _objc_initWeak(auStack_28,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010bf11120(uVar2);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}



/* Entry: 106207478; end: 1062074b3;  */

void FUN_106207478(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bf07880(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062074b4; end: 1062074eb; -[SCMainCameraNavigationDestination .cxx_destruct] */

void FUN_1062074b4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062074ec; end: 106207513;  */

void FUN_1062074ec(void)

{
  _objc_alloc(PTR_PTR_1126c8d48);
  func_0x00010c054160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106207514; end: 106207567;  */

void FUN_106207514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c83c8;
  _objc_alloc(PTR_PTR_1126c83c8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bffbb20(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106207568; end: 1062075a3; -[SCMainCameraEntryPoint end] */

void FUN_106207568(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0668;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062075a4; end: 1062075c3; -[SCMainCameraEntryPoint musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062075a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127432e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062075c4; end: 1062075d7; -[SCMainCameraEntryPoint setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062075c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127432e0,param_3);
  return;
}



/* Entry: 1062075d8; end: 1062075eb; -[SCMainCameraEntryPoint setMainCameraScopedMiniCameraTrayNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062075d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127432e4,param_3);
  return;
}



/* Entry: 1062075ec; end: 106207a37; -[SCMainCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062075ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743318);
  _objc_destroyWeak(param_1 + _DAT_112743314);
  _objc_destroyWeak(param_1 + _DAT_112743310);
  _objc_destroyWeak(param_1 + _DAT_11274330c);
  _objc_destroyWeak(param_1 + _DAT_112743308);
  _objc_destroyWeak(param_1 + _DAT_112743304);
  _objc_destroyWeak(param_1 + _DAT_112743220);
  _objc_destroyWeak(param_1 + _DAT_112743300);
  _objc_destroyWeak(param_1 + _DAT_1127432fc);
  _objc_destroyWeak(param_1 + _DAT_1127432f8);
  _objc_storeStrong(param_1 + _DAT_1127432f4,0);
  _objc_destroyWeak(param_1 + _DAT_112743208);
  _objc_storeStrong(param_1 + _DAT_112743204,0);
  _objc_storeStrong(param_1 + _DAT_112743200,0);
  _objc_storeStrong(param_1 + _DAT_1127432f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127432ec);
  _objc_destroyWeak(param_1 + _DAT_1127432e8);
  _objc_destroyWeak(param_1 + _DAT_1127432e4);
  _objc_destroyWeak(param_1 + _DAT_1127432e0);
  _objc_destroyWeak(param_1 + _DAT_1127432dc);
  _objc_destroyWeak(param_1 + _DAT_1127432d8);
  _objc_destroyWeak(param_1 + _DAT_1127431dc);
  _objc_destroyWeak(param_1 + _DAT_1127431f4);
  _objc_destroyWeak(param_1 + _DAT_1127432d4);
  _objc_destroyWeak(param_1 + _DAT_1127432d0);
  _objc_destroyWeak(param_1 + _DAT_1127431e0);
  _objc_destroyWeak(param_1 + _DAT_1127432cc);
  _objc_destroyWeak(param_1 + _DAT_1127432c8);
  _objc_destroyWeak(param_1 + _DAT_1127432c4);
  _objc_destroyWeak(param_1 + _DAT_1127432c0);
  _objc_destroyWeak(param_1 + _DAT_1127432bc);
  _objc_destroyWeak(param_1 + _DAT_1127432b8);
  _objc_destroyWeak(param_1 + _DAT_1127432b4);
  _objc_destroyWeak(param_1 + _DAT_1127432b0);
  _objc_destroyWeak(param_1 + _DAT_1127432ac);
  _objc_destroyWeak(param_1 + _DAT_1127432a8);
  _objc_destroyWeak(param_1 + _DAT_1127432a4);
  _objc_destroyWeak(param_1 + _DAT_1127431f8);
  _objc_destroyWeak(param_1 + _DAT_112743214);
  _objc_destroyWeak(param_1 + _DAT_1127432a0);
  _objc_destroyWeak(param_1 + _DAT_1127431d4);
  _objc_destroyWeak(param_1 + _DAT_112743210);
  _objc_destroyWeak(param_1 + _DAT_1127431d0);
  _objc_destroyWeak(param_1 + _DAT_11274329c);
  _objc_destroyWeak(param_1 + _DAT_11274320c);
  _objc_destroyWeak(param_1 + _DAT_112743298);
  _objc_destroyWeak(param_1 + _DAT_112743294);
  _objc_destroyWeak(param_1 + _DAT_1127431c8);
  _objc_destroyWeak(param_1 + _DAT_1127431c4);
  _objc_destroyWeak(param_1 + _DAT_112743290);
  _objc_destroyWeak(param_1 + _DAT_11274328c);
  _objc_destroyWeak(param_1 + _DAT_112743288);
  _objc_destroyWeak(param_1 + _DAT_1127431e4);
  _objc_destroyWeak(param_1 + _DAT_1127431c0);
  _objc_destroyWeak(param_1 + _DAT_1127431d8);
  _objc_destroyWeak(param_1 + _DAT_112743284);
  _objc_destroyWeak(param_1 + _DAT_112743280);
  _objc_destroyWeak(param_1 + _DAT_1127431fc);
  _objc_destroyWeak(param_1 + _DAT_1127431cc);
  _objc_destroyWeak(param_1 + _DAT_1127431ec);
  _objc_destroyWeak(param_1 + _DAT_11274327c);
  _objc_destroyWeak(param_1 + _DAT_1127431e8);
  _objc_destroyWeak(param_1 + _DAT_112743278);
  _objc_destroyWeak(param_1 + _DAT_112743274);
  _objc_destroyWeak(param_1 + _DAT_112743270);
  _objc_destroyWeak(param_1 + _DAT_11274326c);
  _objc_destroyWeak(param_1 + _DAT_112743268);
  _objc_destroyWeak(param_1 + _DAT_112743264);
  _objc_destroyWeak(param_1 + _DAT_112743260);
  _objc_destroyWeak(param_1 + _DAT_1127431f0);
  _objc_destroyWeak(param_1 + _DAT_11274325c);
  _objc_destroyWeak(param_1 + _DAT_112743258);
  _objc_destroyWeak(param_1 + _DAT_112743254);
  _objc_destroyWeak(param_1 + _DAT_112743250);
  _objc_destroyWeak(param_1 + _DAT_11274324c);
  _objc_destroyWeak(param_1 + _DAT_112743248);
  _objc_destroyWeak(param_1 + _DAT_112743244);
  _objc_destroyWeak(param_1 + _DAT_112743240);
  _objc_destroyWeak(param_1 + _DAT_11274323c);
  _objc_destroyWeak(param_1 + _DAT_112743238);
  _objc_destroyWeak(param_1 + _DAT_112743234);
  _objc_destroyWeak(param_1 + _DAT_112743230);
  _objc_destroyWeak(param_1 + _DAT_11274322c);
  _objc_destroyWeak(param_1 + _DAT_112743228);
  _objc_destroyWeak(param_1 + _DAT_112743224);
  _objc_storeStrong(param_1 + _DAT_112743218,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274321c,0);
  return;
}



/* Entry: 106207a38; end: 106207ae7; -[SCMainCameraHeaderLayoutController _isCameraToolbarMiddlePositionEnabled] */

bool FUN_106207a38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b9cb0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf05fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273b80(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  return puVar2 + -1 < (undefined *)0x2;
}



/* Entry: 106207ae8; end: 106207b77; -[SCMainCameraHeaderLayoutController .cxx_destruct] */

void FUN_106207ae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106207b78; end: 106207c37; -[SCDiscoverFeedStoryTooltipManager showGroupStoryTooltipIfPossibleWithDisplayName:storyType:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c19f0e0(0,0,0x4046000000000000,0x4046000000000000);
  puVar2 = PTR_PTR_1126c8d78;
  _objc_alloc();
  func_0x00010bff6280();
  _objc_release(param_3);
  lVar4 = (long)_DAT_112743350;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c23a860(param_1);
  func_0x00010c0bb360(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106207c38; end: 106207c97; -[SCDiscoverFeedStoryTooltipManager hideStoryOnboardingTooltips] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207c38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf606a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_112743350);
  _objc_release();
  if (lVar1 != lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideTooltip_1125d64c8);
    return;
  }
  return;
}



/* Entry: 106207c98; end: 106207d2f; -[SCDiscoverFeedStoryTooltipManager getNextAvailableTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207c98(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126f0678;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_getNextAvailableTooltip_1125cf9a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)plVar1;
  if (plVar1 == (long *)0x0) {
    lVar3 = (long)_DAT_112743350;
    lVar2 = *(long *)(param_1 + lVar3);
    if ((lVar2 == 0) || (func_0x00010c0d74a0(), (int)lVar2 == 0)) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106207d10;
    }
    puVar4 = *(undefined1 **)(param_1 + lVar3);
  }
  _objc_retain(puVar4);
LAB_106207d10:
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106207d30; end: 106207d63; -[SCDiscoverFeedStoryTooltipManager markTooltipCompleted:] */

void FUN_106207d30(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0678;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_markTooltipCompleted__11252fcc8);
  return;
}



/* Entry: 106207d64; end: 106207d77; -[SCDiscoverFeedStoryTooltipManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743350,0);
  return;
}



/* Entry: 106207d78; end: 106207de3; -[SCLegacyWeakCameraServiceAdapter initWithCameraService:] */

undefined1 * FUN_106207d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106207de4; end: 106207e4b; -[SCLegacyWeakCameraServiceAdapter startCamera:completion:] */

void FUN_106207de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24e220();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106207e4c; end: 106207e93; -[SCLegacyWeakCameraServiceAdapter stopCamera:] */

void FUN_106207e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c255b60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106207e94; end: 106207edb; -[SCLegacyWeakCameraServiceAdapter stopCameraSofty:] */

void FUN_106207e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c255c20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106207edc; end: 106207ee3; -[SCLegacyWeakCameraServiceAdapter .cxx_destruct] */

void FUN_106207edc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106207ee4; end: 106207f17; -[SCCameraFeatureScopeWorkflow dealloc] */

void FUN_106207ee4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0688;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106207f18; end: 106207f63;  */

undefined8 FUN_106207f18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b720(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106207f64; end: 106207f6b;  */

void FUN_106207f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf01b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createMetricCoordinator_112559a08);
  return;
}



/* Entry: 106207f6c; end: 10620800b; -[SCCameraFeatureScopeWorkflow endWorkflow] */

void FUN_106207f6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e3e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e3e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e3e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e3e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 10620800c; end: 1062080c7; -[SCCameraFeatureScopeWorkflow _createMetricCoordinator] */

void FUN_10620800c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c8db8;
  _objc_alloc(PTR_PTR_1126c8db8);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005ba0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1062080c8; end: 1062080cf;  */

void FUN_1062080c8(void)

{
  return;
}



/* Entry: 1062080d0; end: 1062081bf; -[SCCameraFeatureScopeWorkflow .cxx_destruct] */

void FUN_1062080d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062081c0; end: 1062081db; -[SCDirectorModeServiceProvider _createDirectorModeServices] */

void FUN_1062081c0(void)

{
  _objc_alloc_init(PTR_PTR_1126c8dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062081dc; end: 1062081eb; -[SCDirectorModeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062081dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112743394);
  return;
}



/* Entry: 1062081ec; end: 10620826f; -[SCDirectorModeServicesImpl init] */

undefined1 * FUN_1062081ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106208270; end: 1062082cf; -[SCDirectorModeServicesImpl setDirectorModeEnabled:] */

void FUN_106208270(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c8dd0;
  _objc_alloc(PTR_PTR_1126c8dd0);
  func_0x00010c00fa40();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062082d0; end: 1062082d7; -[SCDirectorModeServicesImpl setDirectorModeEnabled:isRelaunchedFromActiveSession:] */

void FUN_1062082d0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c18e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDirectorModeEnabled__112641300);
  return;
}



/* Entry: 1062082d8; end: 1062082df; -[SCDirectorModeServicesImpl directorModeObservable] */

undefined8 FUN_1062082d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062082e0; end: 10620831b; -[SCDirectorModeServicesImpl .cxx_destruct] */

void FUN_1062082e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620831c; end: 106208327; -[SCDirectorModeService .cxx_destruct] */

void FUN_10620831c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106208328; end: 106208377; -[SCDirectorModeConfiguration initWithEnabled:isRelaunchedFromActiveSession:] */

void FUN_106208328(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f06a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 106208378; end: 10620839b; -[SCDirectorModeConfiguration copyWithZone:] */

undefined8 FUN_106208378(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10620839c; end: 1062083f7; -[SCDirectorModeConfiguration hash] */

ulong * FUN_10620839c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1062083f8; end: 10620848f; -[SCDirectorModeConfiguration isEqual:] */

bool FUN_1062083f8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106208490; end: 106208497; -[SCDirectorModeConfiguration enabled] */

undefined1 FUN_106208490(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106208498; end: 10620849f; -[SCDirectorModeConfiguration isRelaunchedFromActiveSession] */

undefined1 FUN_106208498(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1062084a0; end: 1062084ff;  */

void FUN_1062084a0(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  func_0x00010bdc93a0(lVar1,param_2,bVar2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106208500; end: 106208503;  */

void FUN_106208500(void)

{
  return;
}



/* Entry: 106208504; end: 106208537; -[SCMainCameraPresentationWorkflow .cxx_destruct] */

void FUN_106208504(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106208538; end: 10620854b; -[SCMainCameraScreenDefaultDestination exit:] */

void FUN_106208538(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106208544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10620854c; end: 1062085cb; -[SCMainCameraScreenRootUIContainerProviderImpl currentNavigationDestination] */

void FUN_10620854c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf2b140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d6a80();
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_PTR_1126c8dd8;
    _objc_opt_new(PTR_PTR_1126c8dd8);
  }
  else {
    puVar4 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062085cc; end: 1062085d3;  */

void FUN_1062085cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1062085d4; end: 1062086a7;  */

void FUN_1062085d4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbfa0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
      if (param_2 != 0) {
        (**(code **)(param_2 + 0x10))(param_2);
      }
    }
    else {
      func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20));
      _objc_storeWeak(lVar1 + 0x28,0);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062086a8; end: 1062086f3; -[SCMainCameraScreenRootUIContainerProviderImpl .cxx_destruct] */

void FUN_1062086a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1062086f4; end: 106208767; -[SCMainCameraScreenPassThroughOverlayView hitTest:withEvent:] */

void FUN_1062086f4(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f06b8;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106208768; end: 1062087db; -[SCMainCameraScreenPassThroughSingleViewContainer hitTest:withEvent:] */

void FUN_106208768(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f06c0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062087dc; end: 10620881f; -[SCMainCameraScreenRootViewController childViewControllerForScreenEdgesDeferringSystemGestures] */

void FUN_1062087dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106208820; end: 10620882b;  */

void FUN_106208820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10620882c; end: 10620889f;  */

void FUN_10620882c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062088a0; end: 1062089db; -[SCMainCameraScreenRootViewController _willEnterWithInactiveDuration:] */

void FUN_1062088a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = param_1;
  func_0x00010bf2c9c0();
  if ((int)uVar1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uVar1 = param_1;
    func_0x00010bf13f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bdbc0();
    _objc_release(uVar1);
    if ((*(byte *)(puStack_58 + 3) & 1) != 0) {
      func_0x00010bf9b420(param_1);
    }
    __Block_object_dispose(&uStack_60,8);
  }
  return;
}



/* Entry: 1062089dc; end: 106208a37;  */

void FUN_1062089dc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106208a38; end: 106208acf; -[SCMainCameraScreenRootViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106208a38(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf2c9c0();
  if ((uVar1 & 1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127433d8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b420();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106208ad0; end: 106208b9b; -[SCMainCameraScreenRootViewController willBeNavigatedTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106208ad0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127433d8;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5960();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106208b9c; end: 106208c7b; -[SCMainCameraScreenRootViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106208b9c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127433d8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar6 = PTR_PTR_1126aecb0;
    func_0x00010bf9b820(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = *(undefined **)(param_1 + lVar7);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf13f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106208c7c; end: 106208d3f; -[SCMainCameraScreenRootViewController canExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106208c7c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127433d8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf2c9c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  return uVar6;
}



/* Entry: 106208d40; end: 106208e1b; -[SCMainCameraScreenRootViewController canHandleNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106208d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127433d8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf2cbe0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106208e1c; end: 106208ee3; -[SCMainCameraScreenRootViewController handleQuickAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106208e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127433d8;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2320();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106208ee4; end: 106208fa7; -[SCMainCameraScreenRootViewController destinationName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106208ee4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127433d8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5f560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf6ed00();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  return uVar6;
}



/* Entry: 106208fa8; end: 106209027; -[SCMainCameraScreenRootViewController shouldDisableShakeToReportOnCurrentPage] */

undefined8 FUN_106208fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c22f020(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106209028; end: 10620909b; -[SCMainCameraScreenRootViewController willStartCensoringScreenshot] */

void FUN_106209028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c2a6c20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10620909c; end: 10620910f; -[SCMainCameraScreenRootViewController willEndCensoringScreenshot] */

void FUN_10620909c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c2a6300(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106209110; end: 1062091af; -[SCMainCameraScreenRootViewController defaultProjectNameV3] */

void FUN_106209110(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV3_1125b81a0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010bf69fe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1062091b0; end: 10620924f; -[SCMainCameraScreenRootViewController defaultProjectNameV2] */

void FUN_1062091b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV2_1125b8198);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010bf69fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106209250; end: 1062092ef; -[SCMainCameraScreenRootViewController defaultSubProjectName] */

void FUN_106209250(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultSubProjectName_1125b8320);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010bf6a5e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1062092f0; end: 10620938f; -[SCMainCameraScreenRootViewController jiraMetaInfo] */

void FUN_1062092f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5038);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_jiraMetaInfo_1125fef30);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010c085480(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106209390; end: 106209453; -[SCMainCameraScreenRootViewController setReplyWithConfiguration:cameraViewType:] */

void FUN_106209390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1a60();
  _objc_release(uVar1);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a52c0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c1eb380(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106209454; end: 106209537; -[SCMainCameraScreenRootViewController tryToActivateLensAfterUnlockWithActivationLens:lensLaunchData:activationSource:] */

void FUN_106209454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1a60();
  _objc_release(uVar1);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a52c8);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c27ce80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106209538; end: 1062095f3; -[SCMainCameraScreenRootViewController tryToActivateLensFromPushNotification:] */

void FUN_106209538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1a60();
  _objc_release(uVar1);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a52c8);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c27cea0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062095f4; end: 1062096c3; -[SCMainCameraScreenRootViewController deepLinkableViewControllerFromInfo:] */

void FUN_1062095f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1a60();
  _objc_release(uVar1);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a52d0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf68420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062096c4; end: 106209743; -[SCMainCameraScreenRootViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062096c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f06c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127433dc);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x00010c29c8e0(PTR_PTR_1126bd5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106209744; end: 1062097c3; -[SCMainCameraScreenRootViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106209744(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f06c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127433dc);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x00010c29e8a0(PTR_PTR_1126bd5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1062097c4; end: 1062097cb; -[SCMainCameraScreenRootViewController customStatusBarStyleForViewController] */

undefined8 FUN_1062097c4(void)

{
  return 4;
}



/* Entry: 1062097cc; end: 1062097eb; -[SCMainCameraScreenRootViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062097cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127433e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062097ec; end: 10620991b; -[SCMainCameraScreenRootViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062097ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127433e4);
  _objc_storeStrong(param_1 + _DAT_1127433e0,0);
  _objc_storeStrong(param_1 + _DAT_1127433dc,0);
  _objc_storeStrong(param_1 + _DAT_1127433d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127433d8,0);
  return;
}



/* Entry: 10620991c; end: 1062099c3;  */

void FUN_10620991c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bdf2a40(lVar2,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bdebfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1062099c4; end: 1062099cb; -[SCMainCameraScreenRouterImpl displayOpera] */

void FUN_1062099c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayUIContainerWithContext__11255eda0,1);
  return;
}



/* Entry: 1062099cc; end: 106209a0f; -[SCMainCameraScreenRouterImpl operaInteractiveTransitionBegin] */

void FUN_1062099cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ea20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be05010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayUIContainerWithContext__11255eda0,1);
  return;
}



/* Entry: 106209a10; end: 106209a6b; -[SCMainCameraScreenRouterImpl operaInteractiveTransitionEnd:completed:] */

void FUN_106209a10(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f400();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be05010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayUIContainerWithContext__11255eda0,param_3 ^ param_4 ^ 1);
  return;
}



/* Entry: 106209a6c; end: 106209a7b; -[SCMainCameraScreenRouterImpl showLensExplorerTray:] */

void FUN_106209a6c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be05010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__displayUIContainerWithContext__11255eda0,2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf853f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayCamera_1125beea0);
  return;
}



/* Entry: 106209a7c; end: 106209ab7; -[SCMainCameraScreenRouterImpl showLensExplorerButtonContainer:] */

void FUN_106209a7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106209ab8; end: 106209af3; -[SCMainCameraScreenRouterImpl showMemoriesButtonContainer:] */

void FUN_106209ab8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106209af4; end: 106209afb; -[SCMainCameraScreenRouterImpl displayCameraSwitcher] */

void FUN_106209af4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayUIContainerWithContext__11255eda0,3);
  return;
}



/* Entry: 106209afc; end: 106209b0b; -[SCMainCameraScreenRouterImpl Legacy_willForwardLegacyUINavigationControlling] */

void FUN_106209afc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf853f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayCamera_1125beea0);
  return;
}



/* Entry: 106209b0c; end: 106209b57; -[SCMainCameraScreenRouterImpl _viewContainerWillDismissUIContainer:] */

void FUN_106209b0c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd01e0(param_1,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106209b58; end: 106209b5f; -[SCMainCameraScreenRouterImpl hidableOverlayView] */

undefined8 FUN_106209b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106209b60; end: 106209b67; -[SCMainCameraScreenRouterImpl lensExplorerUIContainer] */

undefined8 FUN_106209b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106209b68; end: 106209b6f; -[SCMainCameraScreenRouterImpl overlayViewContainer] */

undefined8 FUN_106209b68(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106209b70; end: 106209b77; -[SCMainCameraScreenRouterImpl shouldResetUIAfterTimeout] */

undefined1 FUN_106209b70(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}



/* Entry: 106209b78; end: 106209b7f; -[SCMainCameraScreenRouterImpl setResetUIAfterTimeout:] */

void FUN_106209b78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  return;
}


