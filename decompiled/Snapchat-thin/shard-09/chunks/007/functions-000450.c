/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fe7e68; end: 106fe7ea3; -[SCMainCameraViewController lensesInIdleState] */

undefined8 FUN_106fe7e68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c075480();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106fe7ea4; end: 106fe7fef; -[SCMainCameraViewController viewDidFullyAppearWithModalPresentedAbove] */

void FUN_106fe7ea4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010c252400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c8d40;
    _objc_opt_class(PTR_PTR_1126c8d40);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar6);
    uVar1 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e240(uVar1);
    _objc_release(uVar1);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe7ff0; end: 106fe82a3; -[SCMainCameraViewController viewDidPartiallyDisappear] */

void FUN_106fe7ff0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x00010c2560c0();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar2 = param_1;
  func_0x00010bf29e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c123d40();
  uVar3 = param_1;
  if ((int)uVar2 == 0) {
LAB_106fe8188:
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec5a0(uVar4);
    _objc_release(uVar5);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c06b680();
    if ((int)uVar6 == 0) {
      cVar1 = *(char *)(puStack_58 + 3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if (cVar1 != '\x01') goto LAB_106fe8188;
    }
    else {
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256760();
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0b68e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d1310;
  func_0x00010c29cba0(PTR_PTR_1126d1310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 106fe82a4; end: 106fe82bf;  */

void FUN_106fe82a4(void)

{
  return;
}



/* Entry: 106fe82c0; end: 106fe8663; -[SCMainCameraViewController viewDidFullyDisappear] */

void FUN_106fe82c0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c255e20();
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72b60();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c10a560();
  if ((uVar2 & 1) == 0) {
    func_0x00010c27d500(param_1);
  }
  uVar2 = param_1;
  func_0x00010c0b3a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9b20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ccac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139020();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0b3a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0926e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83ce0();
  _objc_release(uVar2);
  func_0x00010c2560c0(param_1);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf30b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec5a0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c10a560();
  if ((uVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010010fab4();
    uVar2 = uVar3;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c234c40();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = param_1;
      func_0x00010bf2a5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c272ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        _objc_initWeak(auStack_48,param_1);
        uVar2 = param_1;
        func_0x00010bf2a5a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c272ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = auStack_50;
        _objc_copyWeak(puVar6,auStack_48);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079160(uVar3);
        _objc_release(puVar6);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
    }
    else {
      func_0x00010c255be0();
    }
  }
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0b68e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d1310;
  func_0x00010c29ca00(PTR_PTR_1126d1310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  return;
}



/* Entry: 106fe8664; end: 106fe869b;  */

void FUN_106fe8664(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec2ea0(0xbf800000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe869c; end: 106fe869f; -[SCMainCameraViewController viewDidSwipeOut] */

void FUN_106fe869c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be925b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetCameraViewType_112582308);
  return;
}



/* Entry: 106fe86a0; end: 106fe877b; -[SCMainCameraViewController viewfinderDidDetach:] */

void FUN_106fe86a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c082b20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010c252400(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db92b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e240(uVar1,param_2,param_1,puVar4);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106fe877c; end: 106fe87d3; -[SCMainCameraViewController onMusicSelectionStartedInDirectorMode:] */

void FUN_106fe877c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_onMusicSelectionStartedInDirecto_112616f20);
  func_0x00010bea7020(param_1);
  return;
}



/* Entry: 106fe87d4; end: 106fe883b; -[SCMainCameraViewController _setScrollingLockedForMemories:withLockKey:] */

void FUN_106fe87d4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c0c7a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c280ba0();
  }
  else {
    func_0x00010c09fae0();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe883c; end: 106fe886f; -[SCMainCameraViewController _stopCameraSoftlyAndPreemptivelyFlushPreviewBuffer:softStopDelay:] */

void FUN_106fe883c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8338;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s__stopCameraSoftlyAndPreemptively_11258e550);
  return;
}



/* Entry: 106fe8870; end: 106fe8903; -[SCMainCameraViewController didSendSnaps] */

void FUN_106fe8870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14e820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f8338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didSendSnaps_1125bc6e8);
  return;
}



/* Entry: 106fe8904; end: 106fe8997; -[SCMainCameraViewController didPostStories] */

void FUN_106fe8904(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14e820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f8338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didPostStories_1125bbad8);
  return;
}



/* Entry: 106fe8998; end: 106fe89cb; -[SCMainCameraViewController didSaveSnap] */

void FUN_106fe8998(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8338;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_didSaveSnap_1125bc278);
  return;
}



/* Entry: 106fe89cc; end: 106fe8a6b; -[SCMainCameraViewController tryToActivateLensAfterUnlockWithActivationLens:lensLaunchData:activationSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe89cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010beefd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112762318;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfbdee0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  else {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1522e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fe8a6c; end: 106fe8afb; -[SCMainCameraViewController viewDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe8a6c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidEnterBackground_112684c80);
  uVar1 = param_1 + (long)_DAT_112762314;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c07ac80();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c123d40();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010be925a0(param_1);
    }
  }
  else {
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106fe8afc; end: 106fe8be3; -[SCMainCameraViewController postponedViewDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe8afc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8338;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_postponedViewDidBecomeActive_112536bd0);
  lVar1 = param_1 + _DAT_11276230c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0799e0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c252400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e920();
    _objc_release(lVar1);
  }
  param_1 = param_1 + _DAT_112762318;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bfbdee0();
  _objc_release(param_1);
  if ((int)lVar1 != 0) {
    puVar3 = PTR_PTR_1126b6b20;
    func_0x00010c22ba80(PTR_PTR_1126b6b20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ab40();
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106fe8be4; end: 106fe8c37; -[SCMainCameraViewController viewWillDisappear:] */

void FUN_106fe8be4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c29cba0(param_1);
  func_0x00010c29c6e0(0xbff0000000000000,param_1);
  return;
}



/* Entry: 106fe8c38; end: 106fe8ce3; -[SCMainCameraViewController viewDidDisappear:] */

void FUN_106fe8c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  func_0x00010c29ca00();
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06d1a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) goto LAB_106fe8cac;
  }
  func_0x00010c29cc20(param_1);
LAB_106fe8cac:
  puStack_48 = PTR_PTR_1126f8338;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 106fe8ce4; end: 106fe8ce7; -[SCMainCameraViewController scrollingToProfileView] */

void FUN_106fe8ce4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 106fe8ce8; end: 106fe8d1f; -[SCMainCameraViewController cancelledScrollingToProfileView] */

void FUN_106fe8ce8(undefined8 param_1)

{
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe8d20; end: 106fe8d5b; -[SCMainCameraViewController profileViewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe8d20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762320);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe8d5c; end: 106fe8d93; -[SCMainCameraViewController profileViewDidFullyDisappear] */

void FUN_106fe8d5c(undefined8 param_1)

{
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe8d94; end: 106fe8ddf; -[SCMainCameraViewController canHandleVolumeButtonEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe8d94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c06dfe0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_11276230c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c06c180();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106fe8de0; end: 106fe8e27; -[SCMainCameraViewController _updateSnapCountBeforeShowLensesActivationTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe8de0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762320);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec840();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showLensesActivationTooltipIfNe_11258bfd0);
  return;
}



/* Entry: 106fe8e28; end: 106fe9003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe8e28(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar5 = (long)_DAT_112762320;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23fa20();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + lVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c098280();
      _objc_release(uVar3);
      if (uVar4 < 3) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fc0();
      }
      else {
        uVar3 = *(ulong *)(param_1 + lVar5);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1904e0();
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106fe9004; end: 106fe9053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9004(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762320);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf677e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe9054; end: 106fe915f; -[SCMainCameraViewController markCameraHelpTooltipAsCompletedIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9054(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f8338;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_markCameraHelpTooltipAsCompleted_11260c678);
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0769c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112762320);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18de20();
    _objc_release(uVar5);
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200460();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106fe9160; end: 106fe927f; -[SCMainCameraViewController _hideOnboardingTooltipsWhenPrepareForRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9160(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2ac0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0769a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2220();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112762320);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf677e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106fe9280; end: 106fe92db; -[SCMainCameraViewController isLensesActivationTooltipVisible] */

undefined8 FUN_106fe9280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0769a0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106fe92dc; end: 106fe9337; -[SCMainCameraViewController isCameraHelpTooltipVisible] */

undefined8 FUN_106fe92dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06de20();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106fe9338; end: 106fe93b7; -[SCMainCameraViewController _isMainCameraViewAndBackFacing] */

void FUN_106fe9338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x00010be41b60();
  puVar1 = PTR_PTR_1126aff08;
  if ((int)uVar2 != 0) {
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf70d80();
    func_0x00010c06cea0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106fe93b8; end: 106fe93eb; -[SCMainCameraViewController imageCaptureDidComplete] */

void FUN_106fe93b8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8338;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_imageCaptureDidComplete_1125d75b8);
  return;
}



/* Entry: 106fe93ec; end: 106fe93f3; -[SCMainCameraViewController headerProfileButtonCenterX] */

undefined8 FUN_106fe93ec(void)

{
  return 0x403c000000000000;
}



/* Entry: 106fe93f4; end: 106fe944f; -[SCMainCameraViewController headerItemYOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106fe93f4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112762310);
  func_0x00010bf61860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bfb68e0(uVar1);
  _objc_release(uVar1);
  return param_2 + param_4;
}



/* Entry: 106fe9450; end: 106fe95ef; -[SCMainCameraViewController featureMemoriesWillScrollToGallery:withExitEvent:] */

void FUN_106fe9450(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      func_0x00010be925a0(param_1);
      uVar1 = param_1;
      func_0x00010c252400(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c138320();
      _objc_release(uVar1);
      func_0x00010c2560c0(param_1);
      uVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beec5a0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e969d8,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      func_0x00010c255e20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe95f0; end: 106fe974f; -[SCMainCameraViewController featureMemoriesWillScrollToCamera:withExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe95f0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      uVar1 = param_1;
      func_0x00010c252400(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110db92b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e240(uVar1,param_2,param_1,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar1);
      *(undefined1 *)(param_1 + (long)_DAT_112762308) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe9750; end: 106fe983b; -[SCMainCameraViewController featureMemoriesDidScrollToGallery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9750(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010bec2e80(param_1);
    lVar6 = (long)_DAT_112762308;
    if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf61c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbd20();
      _objc_release(uVar1);
    }
    *(undefined1 *)(param_1 + lVar6) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe983c; end: 106fe98ff; -[SCMainCameraViewController featureMemoriesDidScrollToCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe983c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010bebf9c0(param_1);
    *(undefined1 *)(param_1 + (long)_DAT_112762308) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe9900; end: 106fe9a17; -[SCMainCameraViewController _stopCameraForModalPresentation] */

void FUN_106fe9900(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      uVar1 = param_1;
      func_0x00010c252400(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1388e0();
      _objc_release(uVar1);
      func_0x00010c255c00(param_1);
      func_0x00010c29ca00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe9a18; end: 106fe9bd7; -[SCMainCameraViewController _startCameraForModalDismissal] */

void FUN_106fe9a18(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      func_0x00010c29c980(param_2);
      uVar1 = param_2;
      func_0x00010c252400(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24eec0();
      _objc_release(uVar1);
      uVar1 = param_2;
      func_0x00010c252400(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e920();
      _objc_release(uVar1);
      _CACurrentMediaTime();
      uVar1 = param_2;
      func_0x00010c252440(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1771e0(param_1);
      _objc_release(uVar1);
      uVar1 = param_2;
      func_0x00010c0926e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c096e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13c480();
      _objc_release(uVar3);
      _objc_release(uVar1);
      func_0x00010bf61c60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbd20();
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe9bd8; end: 106fe9bdb; -[SCMainCameraViewController featureMemoriesPresentMemoriesAddSnapsPicker:] */

void FUN_106fe9bd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopCameraForModalPresentation_11258e548);
  return;
}



/* Entry: 106fe9bdc; end: 106fe9bdf; -[SCMainCameraViewController isOnMainCamera] */

void FUN_106fe9bdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be41b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isMainCameraView_11256e078);
  return;
}



/* Entry: 106fe9be0; end: 106fe9c27;  */

void FUN_106fe9be0(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bf2b480();
  }
  else {
    func_0x00010bf2b4a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe9c28; end: 106fe9c2f; -[SCMainCameraViewController cameraToolbarWillExpand] */

void FUN_106fe9c28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleCameraToolbar__112590c40,1);
  return;
}



/* Entry: 106fe9c30; end: 106fe9c37; -[SCMainCameraViewController cameraToolbarWillCollapse] */

void FUN_106fe9c30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleCameraToolbar__112590c40,0);
  return;
}



/* Entry: 106fe9c38; end: 106fe9c7f; -[SCMainCameraViewController _toggleCameraToolbar:] */

void FUN_106fe9c38(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x3fd99999a0000000;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fe9c80; end: 106fe9c87; -[SCMainCameraViewController defaultCustomStatusBarStyle] */

undefined8 FUN_106fe9c80(void)

{
  return 4;
}



/* Entry: 106fe9c88; end: 106fe9ca7; -[SCMainCameraViewController navigationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9c88(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fe9ca8; end: 106fe9cc7; -[SCMainCameraViewController tooltipState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9ca8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762354);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fe9cc8; end: 106fe9cd7; -[SCMainCameraViewController addFriendsScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9cc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762324);
}



/* Entry: 106fe9cd8; end: 106fe9d17; -[SCMainCameraViewController setAddFriendsScopeLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762324;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe9d18; end: 106fe9d27; -[SCMainCameraViewController addFriendsScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762328);
}



/* Entry: 106fe9d28; end: 106fe9d67; -[SCMainCameraViewController setAddFriendsScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762328;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe9d68; end: 106fe9d77; -[SCMainCameraViewController storyOnboardingTooltipManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9d68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276231c);
}



/* Entry: 106fe9d78; end: 106fe9d87; -[SCMainCameraViewController snapKitDeeplinkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9d78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762330);
}



/* Entry: 106fe9d88; end: 106fe9d97; -[SCMainCameraViewController mainCameraDeepLinkScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276232c);
}



/* Entry: 106fe9d98; end: 106fe9da7; -[SCMainCameraViewController settingsScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9d98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762334);
}



/* Entry: 106fe9da8; end: 106fe9db7; -[SCMainCameraViewController simpleContentFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9da8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762338);
}



/* Entry: 106fe9db8; end: 106fe9dc7; -[SCMainCameraViewController lockScreenCaptureStorageManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9db8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762340);
}



/* Entry: 106fe9dc8; end: 106fe9dd7; -[SCMainCameraViewController waitingUntilVisibleToBeginRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106fe9dc8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762348);
}



/* Entry: 106fe9dd8; end: 106fe9de7; -[SCMainCameraViewController setWaitingUntilVisibleToBeginRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9dd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762348) = param_3;
  return;
}



/* Entry: 106fe9de8; end: 106fe9df7; -[SCMainCameraViewController isScheduledBeginRecordingFromOtherPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106fe9de8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762304);
}



/* Entry: 106fe9df8; end: 106fe9e07; -[SCMainCameraViewController setIsScheduledBeginRecordingFromOtherPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9df8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762304) = param_3;
  return;
}



/* Entry: 106fe9e08; end: 106fe9e17; -[SCMainCameraViewController tooltipPriorityResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe9e08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762358);
}



/* Entry: 106fe9e18; end: 106fe9e57; -[SCMainCameraViewController setTooltipPriorityResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762358;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe9e58; end: 106fea017; -[SCMainCameraViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe9e58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762358,0);
  _objc_storeStrong(param_1 + _DAT_112762340,0);
  _objc_storeStrong(param_1 + _DAT_112762338,0);
  _objc_storeStrong(param_1 + _DAT_112762334,0);
  _objc_storeStrong(param_1 + _DAT_11276232c,0);
  _objc_storeStrong(param_1 + _DAT_112762330,0);
  _objc_storeStrong(param_1 + _DAT_11276231c,0);
  _objc_storeStrong(param_1 + _DAT_112762328,0);
  _objc_storeStrong(param_1 + _DAT_112762324,0);
  _objc_destroyWeak(param_1 + _DAT_112762354);
  _objc_destroyWeak(param_1 + _DAT_112762350);
  _objc_storeStrong(param_1 + _DAT_112762310,0);
  _objc_destroyWeak(param_1 + _DAT_112762344);
  _objc_destroyWeak(param_1 + _DAT_112762318);
  _objc_destroyWeak(param_1 + _DAT_11276230c);
  _objc_storeStrong(param_1 + _DAT_11276233c,0);
  _objc_storeStrong(param_1 + _DAT_112762320,0);
  _objc_storeStrong(param_1 + _DAT_11276235c,0);
  _objc_storeStrong(param_1 + _DAT_11276234c,0);
  _objc_storeStrong(param_1 + _DAT_112762360,0);
  _objc_storeStrong(param_1 + _DAT_112762364,0);
  _objc_storeStrong(param_1 + _DAT_112762368,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112762314);
  return;
}



/* Entry: 106fea018; end: 106fea0bb;  */

void FUN_106fea018(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3960(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106fea0bc; end: 106fea103;  */

void FUN_106fea0bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fea104; end: 106fea1ff;  */

void FUN_106fea104(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106fea200;
  puStack_50 = &UNK_11090b530;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106fea200; end: 106fea22b;  */

void FUN_106fea200(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf729e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fea22c; end: 106fea293;  */

void FUN_106fea22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a5b60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fea294; end: 106fea2eb; -[SCMainCameraViewController stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fea294(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762368;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276235c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fea2ec; end: 106fea32b; -[SCMainCameraViewControllerStartupWorkflow _applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fea2ec(undefined8 param_1,long param_2)

{
  func_0x00010bf5e680(*(undefined8 *)(param_2 + _DAT_112762394));
  *(undefined8 *)(param_2 + _DAT_1127623ac) = param_1;
  *(undefined1 *)(param_2 + _DAT_1127623b0) = 0;
  return;
}



/* Entry: 106fea32c; end: 106fea33b;  */

void FUN_106fea32c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 106fea33c; end: 106fea3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fea33c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *(undefined1 *)(lVar1 + _DAT_1127623b0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106fea3d0; end: 106fea55f;  */

void FUN_106fea3d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e10c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1080();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1220();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fea560; end: 106fea5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fea560(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + _DAT_11276236c));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fea5c0; end: 106fea793; -[SCMainCameraViewControllerStartupWorkflow performApplicationWillEnterForeground:notification:] */

void FUN_106fea5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_performApplicationWillEnterForeg_11261bb00;
  puStack_38 = PTR_PTR_1126f8340;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3,param_4);
  func_0x00010be75a20(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 106fea794; end: 106fea8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fea794(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x00010c06dfe0();
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf07b60();
      _objc_release(puVar4);
      if (((int)lVar3 != 0) && (puVar5 == (undefined *)0x0)) {
        uVar6 = *(undefined8 *)(lVar2 + _DAT_112762378);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfaa240();
        _objc_release(uVar6);
        if ((int)uVar7 != 0) {
          uVar7 = *(undefined8 *)(lVar2 + _DAT_1127623a0);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_60 = 0xc2000000;
          pcStack_58 = FUN_106fea8dc;
          puStack_50 = &UNK_110842508;
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          _objc_retain(uVar6);
          uStack_48 = uVar6;
          func_0x00010bfa8180(uVar7,param_2,&puStack_68,0);
          _objc_release(uVar7);
          _objc_release(uStack_48);
        }
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106fea8dc; end: 106fea923;  */

void FUN_106fea8dc(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106fea924; end: 106fea997; -[SCMainCameraViewControllerStartupWorkflow shouldHandleVolumeButtonEvents:] */

undefined8 FUN_106fea924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)&uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_shouldHandleVolumeButtonEvents__112669ce8,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf2cc40(param_3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106fea998; end: 106feaa37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fea998(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar2 = *(long *)(param_1 + _DAT_112762370);
      if (lVar2 != 0) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf54fc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2171e0(lVar1,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106feaa38; end: 106feaaf3;  */

void FUN_106feaa38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c273f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c098840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0769c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf2d820(lVar1,param_2,3,lVar5);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106feaaf4; end: 106feace7; -[SCMainCameraViewControllerStartupWorkflow _popVerticalViewsIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106feaaf4(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_4;
  _objc_retain(param_4);
  lVar11 = (long)_DAT_11276239c;
  lVar1 = param_2 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfbdee0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar10 = param_4;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c231da0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar4 = param_4;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      uVar9 = uVar5;
      func_0x00010beb4a60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar10);
      if ((int)lVar1 == 0) goto LAB_106feaca8;
      puVar6 = PTR_PTR_1126b19f8;
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b7f68;
      func_0x00010c22b6a0(PTR_PTR_1126b7f68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1835e0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      uVar9 = param_4;
      func_0x00010c0c7a40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b080();
      _objc_release(uVar9);
      uVar10 = param_2 + lVar11;
      _objc_loadWeakRetained();
      uVar9 = 1;
      func_0x00010c1522e0();
    }
    _objc_release(uVar10);
  }
LAB_106feaca8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  if (uVar9 == 0) {
    param_1 = 60.0;
  }
  else {
    func_0x00010c26f120(uVar9);
  }
  if (*(double *)(param_4 + (long)_DAT_1127623ac) == 0.0) {
    uVar10 = 1;
  }
  else {
    dVar12 = param_1 + *(double *)(param_4 + (long)_DAT_1127623ac);
    func_0x00010bf5e680(*(undefined8 *)(param_4 + (long)_DAT_112762394));
    uVar10 = (ulong)(dVar12 < param_1);
  }
  _objc_release(uVar9);
  return uVar10;
}



/* Entry: 106feace8; end: 106fead73; -[SCMainCameraViewControllerStartupWorkflow _shouldOpenToCameraAfterBackgroundingOnViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106feace8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  double dVar2;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    param_1 = 60.0;
  }
  else {
    func_0x00010c26f120(param_4);
  }
  if (*(double *)(param_2 + _DAT_1127623ac) == 0.0) {
    bVar1 = true;
  }
  else {
    dVar2 = param_1 + *(double *)(param_2 + _DAT_1127623ac);
    func_0x00010bf5e680(*(undefined8 *)(param_2 + _DAT_112762394));
    bVar1 = dVar2 < param_1;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 106fead74; end: 106feb253; -[SCMainCameraViewControllerStartupWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fead74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127623b4,0);
  _objc_destroyWeak(param_1 + _DAT_11276239c);
  _objc_destroyWeak(param_1 + _DAT_112762384);
  _objc_destroyWeak(param_1 + _DAT_112762380);
  _objc_destroyWeak(param_1 + _DAT_11276238c);
  _objc_storeStrong(param_1 + _DAT_112762394,0);
  _objc_storeStrong(param_1 + _DAT_1127623a8,0);
  _objc_storeStrong(param_1 + _DAT_1127623a4,0);
  _objc_storeStrong(param_1 + _DAT_1127623a0,0);
  _objc_storeStrong(param_1 + _DAT_112762398,0);
  _objc_storeStrong(param_1 + _DAT_11276237c,0);
  _objc_storeStrong(param_1 + _DAT_112762378,0);
  _objc_storeStrong(param_1 + _DAT_112762374,0);
  _objc_storeStrong(param_1 + _DAT_112762370,0);
  _objc_storeStrong(param_1 + _DAT_11276236c,0);
  _objc_storeStrong(param_1 + _DAT_112762388,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762390,0);
  return;
}



/* Entry: 106feb254; end: 106feb25b; -[SCLegacyFeatureDelegateProviderImpl .cxx_destruct] */

void FUN_106feb254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106feb25c; end: 106feb267; -[SCCameraToGallerySwipeTransitionCoordinatorServices .cxx_destruct] */

void FUN_106feb25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106feb268; end: 106feb303; -[SCOnboardingTooltip initWithView:appearance:] */

undefined1 *
FUN_106feb268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106feb304; end: 106feb3a7; -[SCOnboardingTooltip tooltip] */

void FUN_106feb304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b6950;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    func_0x00010bef9040(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010bee2620(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106feb3a8; end: 106feb3ff; -[SCOnboardingTooltip setAppearance:] */

void FUN_106feb3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bee2620(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106feb400; end: 106feb40f; -[SCOnboardingTooltip shouldShow] */

byte FUN_106feb400(long param_1)

{
  return (*(byte *)(param_1 + 0x20) ^ 0xff) & 1;
}



/* Entry: 106feb410; end: 106feb413; -[SCOnboardingTooltip willShow] */

void FUN_106feb410(void)

{
  return;
}



/* Entry: 106feb414; end: 106feb4bb; -[SCOnboardingTooltip show] */

void FUN_106feb414(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c2331a0();
  if ((int)lVar1 != 0) {
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    func_0x00010c2a6b40(param_1);
    func_0x00010be74920(param_1);
    if (0.0 < *(double *)(param_1 + 0x28)) {
      _dispatch_time(0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0));
      func_0x00010058c530();
    }
  }
  return;
}



/* Entry: 106feb4bc; end: 106feb4c3;  */

void FUN_106feb4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 106feb4c4; end: 106feb4cb; -[SCOnboardingTooltip shouldHide] */

undefined1 FUN_106feb4c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106feb4cc; end: 106feb4cf; -[SCOnboardingTooltip willHide] */

void FUN_106feb4cc(void)

{
  return;
}



/* Entry: 106feb4d0; end: 106feb50f; -[SCOnboardingTooltip hide] */

void FUN_106feb4d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c230b20();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x00010c2a6600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be74770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playHideAnimation_11257ab78);
    return;
  }
  return;
}



/* Entry: 106feb510; end: 106feb563; -[SCOnboardingTooltip markCompleted] */

void FUN_106feb510(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = param_3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  puVar2 = puVar4 + 8;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar5);
    iVar1 = (int)*(undefined8 *)(puVar4 + 0x30);
    func_0x00010c13b660();
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (iVar1 != 0) {
      func_0x00010c15b1c0(puVar2);
      func_0x00010c292b00(puVar5);
      func_0x00010becf9e0(puVar4);
    }
    func_0x00010c107020(*(undefined8 *)(puVar4 + 0x30));
    dVar9 = 1.79769313486232e+308;
    if (param_1 != 1.79769313486232e+308) {
      puVar5 = puVar4;
      func_0x00010c273d60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 1.60807493534087e-314;
      func_0x00010c0bc060();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x00010c273d60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(puVar5);
    }
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    dVar8 = param_1;
    dVar10 = dVar9;
    _objc_release(puVar5);
    func_0x00010becf9a0(puVar4);
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(dVar8 / param_1,dVar10 / dVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf9c0(puVar4);
    func_0x00010c21a1e0(puVar5);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a180(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27bb80(*(undefined8 *)(puVar4 + 0x30));
    func_0x00010c21a1c0(puVar5);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0bc060(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c273d60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


