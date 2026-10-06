/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ff40ec; end: 106ff4387; -[SCCameraViewController viewDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff40ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127624cc;
  func_0x00010c239420(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec500();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84a60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1cb900(0,param_1,param_2,0,1,0);
  func_0x00010c2726e0(param_1,param_2,1,0);
  uVar1 = param_1;
  func_0x00010c0926e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83ce0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c07ac60();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0926e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138f60();
    _objc_release(uVar1);
  }
  func_0x00010c1388e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    _objc_release();
  }
  _objc_release(uVar1);
  func_0x00010c255be0(param_1);
  func_0x00010c1b3ec0(*(undefined8 *)(param_1 + (long)_DAT_1127624bc),param_2,0);
  uVar1 = param_1;
  func_0x00010c0926e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b360();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0b3a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abd60();
  _objc_release(uVar1);
  func_0x00010be511c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4c3f8);
  uVar1 = param_1;
  func_0x00010c0b3a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112762590;
  func_0x00010c0a22e0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + lVar6) = 0;
  lVar5 = (long)_DAT_112762510;
  lVar6 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar4 = lVar6;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar4 != 0) {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 106ff4388; end: 106ff439f; -[SCCameraViewController viewWillEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff4388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),
             PTR_s_performApplicationWillEnterForeg_11261bb00,param_1,0);
  return;
}



/* Entry: 106ff43a0; end: 106ff44bf; -[SCCameraViewController viewWillResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff43a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c1b3ec0(*(undefined8 *)(param_1 + _DAT_1127624bc),param_2,1);
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c110160();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    lVar1 = param_1;
    func_0x00010c123d40();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256760();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c1e9000(param_1);
      func_0x00010c139ca0(*(undefined8 *)(param_1 + _DAT_1127624cc));
    }
  }
  else {
    func_0x00010beec560();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 106ff44c0; end: 106ff44ff; -[SCCameraViewController postponedViewDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff44c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127624cc;
  func_0x00010bfe2660(*(undefined8 *)(param_1 + lVar1),param_2,param_1);
  func_0x00010c239860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c24eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_startHandlingVolumeButtonEventsI_1126715d8,
             param_1);
  return;
}



/* Entry: 106ff4500; end: 106ff4503; -[SCCameraViewController handleMediaServicesResetNotification:] */

void FUN_106ff4500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaServicesWereReset_112575480);
  return;
}



/* Entry: 106ff4504; end: 106ff4507; -[SCCameraViewController handleMediaServicesLostNotification:] */

void FUN_106ff4504(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaServicesWereLost_112575478);
  return;
}



/* Entry: 106ff4508; end: 106ff47f3; -[SCCameraViewController showRecordedVideoIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff4508(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c242aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c123d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 != 0) && (uVar1 = param_1, func_0x00010c07ac60(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c06b680();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c06b680();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar5 & 1) == 0) {
        puStack_58 = &uStack_60;
        uStack_60 = 0;
        uStack_50 = 0x2020000000;
        uStack_48 = 0;
        lVar6 = param_1 + (long)_DAT_112762568;
        _objc_loadWeakRetained(lVar6);
        lVar7 = lVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf4fce0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0be6c0();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c1119e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x00010c252440(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c2993e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252440(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010c0b7e80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c10db60(uVar1);
          _objc_release(uVar5);
          _objc_release(param_1);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
        }
        __Block_object_dispose(&uStack_60,8);
      }
    }
  }
  _objc_release(uVar4);
  return;
}



/* Entry: 106ff47f4; end: 106ff4827;  */

void FUN_106ff47f4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 106ff4828; end: 106ff486b; -[SCCameraViewController lensDataProvider] */

void FUN_106ff4828(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ff486c; end: 106ff4877; -[SCCameraViewController setNavigationItemsHidden:includingAlwaysShowItems:animated:duration:] */

void FUN_106ff486c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cb930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setNavigationItemsHidden_includi_112650870,param_3,param_4,0,param_5);
  return;
}



/* Entry: 106ff4878; end: 106ff4983; -[SCCameraViewController setNavigationItemsHidden:includingAlwaysShowItems:withOffset:animated:duration:] */

void FUN_106ff4878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,int param_7)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ff4984;
  puStack_70 = &UNK_1108afc88;
  _objc_copyWeak(auStack_68,auStack_58);
  ppuVar1 = &puStack_88;
  uStack_60 = param_4;
  uStack_5f = param_5;
  uStack_5e = param_6;
  _objc_retainBlock();
  if (param_7 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010bf03420(param_1,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106ff4984; end: 106ff49e3;  */

void FUN_106ff4984(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb8e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff49e4; end: 106ff4b57; -[SCCameraViewController _transitionToRecordingStateWithAnimationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff49e4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11276259c;
  uVar1 = param_2 + lVar7;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar7 = param_2 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf729e0();
    _objc_release(lVar7);
    goto LAB_106ff4ae4;
  }
  lVar7 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf4e080();
  if (lVar3 == 2) {
LAB_106ff4a98:
    _objc_release(lVar7);
  }
  else {
    lVar3 = param_2;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4e080();
    if (lVar4 == 3) {
      _objc_release(lVar3);
      goto LAB_106ff4a98;
    }
    lVar4 = param_2;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf4e080();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    if (lVar6 != 4) goto LAB_106ff4ae4;
  }
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar5);
  func_0x00010c1cb900(param_1,param_2);
LAB_106ff4ae4:
  func_0x00010bf61c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ff4b58; end: 106ff4c3f; -[SCCameraViewController _cancelPendingGesturesForRecordingStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff4b58(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e960();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2b3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dc40();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dc60();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff4c40; end: 106ff4d3f; -[SCCameraViewController resetAll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff4c40(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x00010c139ca0(*(undefined8 *)(param_1 + (long)_DAT_1127624cc),param_2,param_1);
  uVar1 = param_1;
  func_0x00010c075580();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1, func_0x00010c07ac60(), puVar4 = PTR_PTR_1126ce4d8, (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112762578);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071980();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)puVar4 != 0) {
      lVar6 = (long)_DAT_11276259c;
      uVar1 = param_1 + lVar6;
      _objc_loadWeakRetained();
      uVar5 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar5 & 1) != 0) {
        lVar6 = param_1 + lVar6;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c272680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 106ff4d40; end: 106ff4dcb; -[SCCameraViewController isPressingCameraButtonOrVolumeButton] */

ulong FUN_106ff4d40(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c110140();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2a0e00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c110160();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 106ff4dcc; end: 106ff4dd3; -[SCCameraViewController presentingMemories] */

undefined8 FUN_106ff4dcc(void)

{
  return 0;
}



/* Entry: 106ff4dd4; end: 106ff5407; -[SCCameraViewController longPressOnCameraTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff4dd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0b3a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a24a0();
  _objc_release(uVar2);
  lVar16 = (long)_DAT_1127624bc;
  uVar2 = *(ulong *)(param_1 + lVar16);
  func_0x00010bf8b500();
  if ((uVar2 & 1) != 0) goto LAB_106ff53e0;
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_1127624f4);
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010c083180();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if ((int)uVar14 == 0) goto LAB_106ff53e0;
  uVar2 = param_3;
  func_0x00010c252440();
  if (uVar2 != 5) {
    lVar15 = (long)_DAT_1127625a0;
    if ((*(long *)(param_1 + lVar15) != 0) &&
       (uVar4 = param_1, func_0x00010bf16d80(), (uVar4 & 1) == 0)) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + lVar15));
      uVar5 = *(undefined8 *)(param_1 + lVar15);
      *(undefined8 *)(param_1 + lVar15) = 0;
      _objc_release(uVar5);
    }
    uVar4 = param_1;
    func_0x00010c10fc00();
    if (((int)uVar4 == 0) || (uVar4 = param_1, func_0x00010beb5080(), (int)uVar4 == 0)) {
      if (uVar2 - 5 < 0xfffffffffffffffe) {
        if (uVar2 != 0) {
          func_0x00010bde0f60(param_1);
          goto LAB_106ff4f04;
        }
      }
      else {
LAB_106ff4f04:
        func_0x00010c1e1700(param_1);
      }
      uVar4 = param_1;
      func_0x00010c2687e0();
      if ((((uVar4 & 1) != 0) || (uVar4 = param_1, func_0x00010c10a560(), (uVar4 & 1) != 0)) ||
         (uVar4 = param_1, func_0x00010bfb0040(), (uVar4 & 1) != 0)) goto LAB_106ff53e0;
      uVar4 = param_1;
      func_0x00010bdc5260();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010be40e00();
      if ((int)uVar6 == 0) {
        bVar1 = false;
      }
      else {
        lVar7 = param_1 + (long)_DAT_112762568;
        _objc_loadWeakRetained();
        lVar8 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf4fda0();
        bVar1 = lVar9 == 2;
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      uVar6 = param_1;
      func_0x00010be3fa40();
      if ((((int)uVar6 == 0) || (uVar6 = param_1, func_0x00010c123d40(), (int)uVar6 == 0)) ||
         (uVar6 = param_3, func_0x00010c252440(), uVar6 != 1)) {
        if (((bVar1) && (uVar6 = param_1, func_0x00010c123d40(), (int)uVar6 != 0)) &&
           (uVar6 = param_3, func_0x00010c252440(), uVar6 == 1)) goto LAB_106ff5044;
        uVar6 = param_1;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c270700();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf926c0();
        if (((int)uVar12 == 0) || (uVar12 = param_1, func_0x00010bfeb3e0(), (int)uVar12 == 0)) {
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar6);
        }
        else {
          uVar12 = param_3;
          func_0x00010c252440();
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar6);
          if (uVar12 == 1) {
            func_0x00010bf29620(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_1;
            func_0x00010c270700();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar2;
            func_0x00010bfa1820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beec500();
            goto LAB_106ff53c0;
          }
        }
        uVar6 = param_1;
        func_0x00010be3eb60();
        if ((int)uVar6 == 0) {
          uVar5 = *(undefined8 *)(param_1 + (long)_DAT_1127624e4);
          func_0x00010bfc1900(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126d4008;
          func_0x00010bf5a2a0(PTR_PTR_1126d4008);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd1480(uVar5);
          _objc_release(puVar13);
          _objc_release(uVar5);
          if (uVar2 == 1) {
LAB_106ff51f4:
            puVar13 = PTR_PTR_1126ce4d8;
            uVar14 = *(undefined8 *)(param_1 + (long)_DAT_112762578);
            func_0x00010c269d40(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar14;
            func_0x00010bf398e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c071980();
            _objc_release(uVar5);
            _objc_release(uVar14);
            if ((int)puVar13 != 0) {
              uVar6 = param_1 + (long)_DAT_11276259c;
              uVar10 = uVar6;
              _objc_loadWeakRetained();
              uVar11 = uVar10;
              _objc_opt_respondsToSelector();
              _objc_release(uVar10);
              if ((uVar11 & 1) != 0) {
                _objc_loadWeakRetained(uVar6);
                func_0x00010c272680();
                _objc_release(uVar6);
              }
            }
          }
          else if (0xfffffffffffffffd < uVar2 - 5) {
            lVar16 = *(long *)(param_1 + lVar16);
            func_0x00010c123ee0();
            if (((lVar16 == 0) && (uVar6 = param_1, func_0x00010c075580(), (uVar6 & 1) == 0)) &&
               (uVar6 = param_1, func_0x00010c07ac60(), (uVar6 & 1) == 0)) goto LAB_106ff51f4;
          }
          func_0x00010c252440(param_3);
          func_0x00010c115200(param_1);
          uVar6 = param_1;
          func_0x00010be3e5c0();
          if (((uVar2 == 1) && ((int)uVar6 != 0)) &&
             (uVar2 = param_1, func_0x00010bf16d80(), puVar13 = PTR__OBJC_CLASS___NSTimer_1126af1b0,
             (uVar2 & 1) == 0)) {
            _objc_retain(param_3);
            func_0x00010c150360(0x3fb999999999999a);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_1 + lVar15);
            *(undefined **)(param_1 + lVar15) = puVar13;
            _objc_release(uVar5);
            param_1 = param_3;
            goto LAB_106ff53d4;
          }
        }
        else {
          func_0x00010be26760(param_1);
        }
      }
      else {
        uVar2 = param_1;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bf7f1c0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c07bf00();
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar2);
        if ((uVar11 & 1) == 0) {
LAB_106ff5044:
          uVar2 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          func_0x00010c2a0e00();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar6;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c110160();
          _objc_release(uVar10);
          _objc_release(uVar6);
          _objc_release(uVar2);
          if ((int)uVar11 == 0) {
            func_0x00010bf29620(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_1;
            func_0x00010bf30b20();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar2;
            func_0x00010bfa1820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c256760();
LAB_106ff53c0:
            _objc_release(uVar6);
            _objc_release(uVar2);
LAB_106ff53d4:
            _objc_release(param_1);
          }
          else {
            func_0x00010beec560();
          }
        }
      }
      _objc_release(uVar4);
      goto LAB_106ff53e0;
    }
  }
  func_0x00010c1e1700(param_1);
LAB_106ff53e0:
  _objc_release(param_3);
  return;
}



/* Entry: 106ff5408; end: 106ff5483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff5408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be81760(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138fc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1391a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127625a0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127625a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff5484; end: 106ff550b; -[SCCameraViewController processRecordingForLongPress:shouldStartRecording:] */

void FUN_106ff5484(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar1 = param_3;
    func_0x00010c252440();
    if (lVar1 == 3) {
      func_0x00010be81760(param_1,param_2,param_3);
    }
    else {
      lVar1 = param_3;
      func_0x00010c252440();
      if (lVar1 == 4) {
        func_0x00010be81740(param_1,param_2,param_3);
      }
    }
  }
  else {
    func_0x00010be82420(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ff550c; end: 106ff570b; -[SCCameraViewController _processStartRecordingWithLongPress:] */

void FUN_106ff550c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c06dfa0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be3fa40();
    if ((int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf78ec0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) != 0) goto LAB_106ff56cc;
    }
    uVar1 = param_1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0984a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c06fc20();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0926e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c06fc00();
        _objc_release(uVar1);
        if ((uVar2 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010bfeb400();
          if ((uVar1 & 1) == 0) {
            _objc_initWeak(auStack_48,param_1);
            puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_68 = 0xc2000000;
            pcStack_60 = FUN_106ff570c;
            puStack_58 = &UNK_1108434b0;
            _objc_copyWeak(auStack_50,auStack_48);
            func_0x0001000d76cc("APPSTORE",&puStack_70);
            puVar5 = PTR_PTR_1126affa8;
            func_0x00010c22bc20(PTR_PTR_1126affa8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f8760();
            _objc_release(puVar5);
            func_0x00010be3be40(param_1);
            _objc_destroyWeak(auStack_50);
            _objc_destroyWeak(auStack_48);
          }
          func_0x00010be4f980(param_1);
        }
      }
    }
  }
LAB_106ff56cc:
  _objc_release(param_3);
  return;
}



/* Entry: 106ff570c; end: 106ff57b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff570c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
    func_0x00010bf2a1a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139820();
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf88580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff57b8; end: 106ff5a3b; -[SCCameraViewController _initiateCapturePipeline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff57b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = param_1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06fc40();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      lVar9 = (long)_DAT_1127625a4;
      if (*(long *)(param_1 + lVar9) != 0) {
        _dispatch_block_cancel();
      }
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106ff5a3c;
      puStack_70 = &UNK_110842e18;
      uVar6 = 0;
      uStack_68 = param_1;
      func_0x0001008553e8(0,&puStack_88);
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      *(undefined8 *)(param_1 + lVar9) = uVar6;
      _objc_release(uVar8);
      func_0x000100c749e0(0x3dcccccd,"APPSTORE",*(undefined8 *)(param_1 + lVar9));
      return;
    }
  }
  func_0x00010c251820(param_1);
  func_0x00010c109720(param_1);
  uVar1 = param_1;
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2af60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
  func_0x00010c2993e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x00010baef3d4(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3e5c0(param_1);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150aa0();
  func_0x0001005d3b6c();
  func_0x00010c0a2440(uVar3);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff5a3c; end: 106ff5b23;  */

void FUN_106ff5a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf29620(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e740();
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106ff5b24; end: 106ff5e23; -[SCCameraViewController _processLongPressDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff5b24(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  func_0x00010be4f980(param_1,param_2,0);
  uVar4 = param_1;
  func_0x00010be40e00();
  if ((int)uVar4 == 0) {
    uVar4 = *(ulong *)(param_1 + (long)_DAT_1127624bc);
    func_0x00010c07c740();
    if ((uVar4 & 1) != 0) goto LAB_106ff5d78;
  }
  else {
    lVar1 = param_1 + (long)_DAT_112762568;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4fda0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(ulong *)(param_1 + (long)_DAT_1127624bc);
    func_0x00010c07c740();
    if (((uVar4 & 1) != 0) || (lVar3 == 1)) goto LAB_106ff5d78;
  }
  uVar4 = param_1;
  func_0x00010be3fa40();
  if ((int)uVar4 == 0) {
    uVar4 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a0e00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c110160();
    if ((int)uVar7 == 0) {
      uVar7 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf926c0();
      if ((uVar10 & 1) == 0) {
        uVar10 = param_1;
        func_0x00010be40e00();
        if ((int)uVar10 == 0) {
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        else {
          lVar1 = param_1 + (long)_DAT_112762568;
          _objc_loadWeakRetained();
          lVar2 = lVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf4fda0();
          _objc_release(lVar2);
          _objc_release(lVar1);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          if (lVar3 == 2) goto LAB_106ff5d78;
        }
        uVar4 = param_1;
        func_0x00010bf29620(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf30b20();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256760();
      }
      else {
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010be81780(param_1);
  }
LAB_106ff5d78:
  uVar4 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06fc20();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    return;
  }
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c092ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30ac0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff5e24; end: 106ff652f; -[SCCameraViewController _processLongPressCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff5e24(double param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar16 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_3 + lVar16);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  dVar18 = param_1;
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_3 + lVar16);
  func_0x00010c07c740();
  if ((uVar2 & 1) != 0) goto LAB_106ff6454;
  uVar3 = *(ulong *)(param_3 + lVar16);
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0982a0();
  puVar5 = param_3;
  puVar6 = param_3;
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar3);
LAB_106ff5ff4:
    uVar2 = param_5;
    func_0x00010bf9fb80();
    if ((int)uVar2 == 0) {
      func_0x00010bfeb400();
      if ((int)puVar5 != 0) {
        _UIAccessibilityRegisterGestureConflictWithZoom();
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_98 = &PTR____CFConstantStringClassReference_110e3c718;
        uVar4 = *(undefined8 *)(param_3 + lVar16);
        func_0x00010c0b7e80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c0982a0();
        func_0x00010c0df6e0(puVar6,param_4,uVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_90 = &PTR____CFConstantStringClassReference_110e96c38;
        puVar7 = puVar6;
        puStack_88 = puVar6;
        _NSStringFromCGPoint(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_80 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_88,
                            &ppuStack_98,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf72020(puVar5,param_4,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar4);
        puVar6 = param_3;
        func_0x00010c1119e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c250280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar7);
        _objc_release(puVar6);
        dVar18 = param_1;
        if (puVar8 != (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_3;
          func_0x00010c1119e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c1119c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c250280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380(puVar6,param_4,puVar9);
          dVar18 = param_1;
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          if (!NAN(param_1)) {
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5,param_4,puVar6,
                                &PTR____CFConstantStringClassReference_110e96c58);
            _objc_release(puVar6);
            dVar18 = param_1;
          }
        }
        puVar7 = param_3;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfd3560();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar8;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010bf926c0();
        if (((ulong)puVar9 & 1) != 0) {
LAB_106ff6434:
          _objc_release(puVar6);
          goto LAB_106ff643c;
        }
        puVar9 = param_3;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c2a0e00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c110160();
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar7);
        if (((ulong)puVar12 & 1) == 0) {
          puVar7 = param_3;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bf30b20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c256760();
          goto LAB_106ff6434;
        }
        goto LAB_106ff644c;
      }
    }
    else {
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf926c0();
      if ((int)puVar9 != 0) goto LAB_106ff643c;
      puVar9 = param_3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c2a0e00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c110160();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar12 & 1) == 0) {
        func_0x00010bf9fb80();
        func_0x00010bdc5260();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = &PTR____CFConstantStringClassReference_110e96c18;
        goto LAB_106ff60e8;
      }
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + lVar16);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    dVar18 = param_1;
    func_0x00010c102ba0(param_1,param_2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar1 == 0) goto LAB_106ff5ff4;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bfd3560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf926c0();
    if ((int)puVar9 == 0) {
      puVar9 = param_3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c2a0e00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c110160();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar12 & 1) != 0) goto LAB_106ff6454;
      func_0x00010bf9fb80();
      func_0x00010bdc5260();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = &PTR____CFConstantStringClassReference_110e96bf8;
LAB_106ff60e8:
      func_0x00010c14de00(puVar5,param_4,ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar7 = param_3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_3;
      _objc_opt_class(param_3);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beec5a0(puVar6,param_4,puVar5,puVar9);
      _objc_release(puVar9);
      goto LAB_106ff6434;
    }
LAB_106ff643c:
    _objc_release(puVar8);
    _objc_release(puVar7);
LAB_106ff644c:
    _objc_release(puVar5);
  }
LAB_106ff6454:
  puVar5 = param_3;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf926c0();
  if ((int)puVar8 == 0) {
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    lVar16 = (long)_DAT_1127625a4;
    lVar17 = *(long *)(param_3 + lVar16);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (lVar17 != 0) {
      _dispatch_block_cancel(*(undefined8 *)(param_3 + lVar16));
    }
  }
  func_0x00010be4f980(param_3,param_4,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = param_5;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c07bf00();
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar14 & 1) != 0) {
    return;
  }
  uVar2 = param_5;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf78ec0();
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar14 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c1119e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c250280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar5,param_4,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar5);
    if (0.5 < dVar18) {
      uVar2 = param_5;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf926c0();
      _objc_release(uVar13);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar14 & 1) == 0) {
        uVar2 = param_5;
        func_0x00010c123d40();
        if ((int)uVar2 == 0) {
          return;
        }
        func_0x00010bf29620(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_5;
        func_0x00010bf30b20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256760();
        goto LAB_106ff6648;
      }
    }
    if (0.5 < dVar18) {
      return;
    }
    uVar2 = param_5;
    func_0x00010c123d40();
    if ((int)uVar2 == 0) {
      return;
    }
    func_0x00010bf29620(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bfd3560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d620();
  }
  else {
    func_0x00010bf29620(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238120();
  }
LAB_106ff6648:
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106ff6530; end: 106ff67eb; -[SCCameraViewController _processLongPressDidEndForDirectorMode] */

void FUN_106ff6530(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07bf00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar1 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf78ec0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c1119e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c250280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar5,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar5);
    if (0.5 < param_1) {
      uVar1 = param_2;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf926c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) == 0) {
        uVar1 = param_2;
        func_0x00010c123d40();
        if ((int)uVar1 == 0) {
          return;
        }
        func_0x00010bf29620(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_2;
        func_0x00010bf30b20();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256760();
        goto LAB_106ff6648;
      }
    }
    if (0.5 < param_1) {
      return;
    }
    uVar1 = param_2;
    func_0x00010c123d40();
    if ((int)uVar1 == 0) {
      return;
    }
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bfd3560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d620();
  }
  else {
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238120();
  }
LAB_106ff6648:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ff67ec; end: 106ff6943; -[SCCameraViewController _presentTimelineLimitReachedAlert] */

void FUN_106ff67ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010700d2bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010700d2d4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed70;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar6);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 106ff6944; end: 106ff6953;  */

void FUN_106ff6944(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106ff6954; end: 106ff6e6b; -[SCCameraViewController longPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106ff6954(double param_1,double param_2,double param_3,double param_4,ulong param_5,
             undefined8 param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010beb55a0(param_5,param_6,param_7);
  if ((int)uVar1 != 0) {
    func_0x00010c192f60(*(undefined8 *)(param_5 + (long)_DAT_1127624bc),param_6,0);
  }
  uVar1 = param_5;
  func_0x00010c068360();
  if (((uVar1 & 1) != 0) || (uVar1 = param_5, func_0x00010bfeb3e0(), (uVar1 & 1) != 0)) {
    uVar8 = 0;
    goto LAB_106ff6e38;
  }
  lVar9 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar9);
  dVar10 = param_1;
  _objc_release(lVar9);
  lVar9 = param_7;
  func_0x00010c252440();
  if (lVar9 == 1) {
    lVar9 = (long)_DAT_1127624bc;
    uVar1 = *(ulong *)(param_5 + lVar9);
    func_0x00010bf8b500();
    if ((uVar1 & 1) != 0) goto LAB_106ff6a24;
    uVar2 = *(ulong *)(param_5 + lVar9);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0982a0();
    if ((uVar1 & 1) == 0) {
      _objc_release(uVar2);
LAB_106ff6bd0:
      func_0x00010bfd2d20(param_5,param_6,param_7);
    }
    else {
      uVar1 = param_5;
      func_0x00010bdc5260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar1 == 0) goto LAB_106ff6bd0;
    }
    _CACurrentMediaTime();
    *(double *)(param_5 + (long)_DAT_1127625a8) = dVar10;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    iRam00000001136c9f64 = (int)((param_1 * 100.0) / param_3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    iRam00000001136c9f68 = (int)((param_2 * 100.0) / param_4);
    _objc_release(puVar3);
    func_0x00010c192f60(*(undefined8 *)(param_5 + lVar9),param_6,1);
    func_0x00010c21e7c0(param_7,param_6,&PTR__OBJC_CLASS___NSConstantDictionary_111174cc0);
LAB_106ff6c84:
    uVar8 = *(undefined8 *)(param_5 + (long)_DAT_1127624e4);
    func_0x00010bfc1900(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4010;
    func_0x00010bf5a2a0(PTR_PTR_1126d4010,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1480(uVar8,param_6,puVar3);
    _objc_release(puVar3);
LAB_106ff6e2c:
    _objc_release(uVar8);
  }
  else {
LAB_106ff6a24:
    lVar9 = param_7;
    func_0x00010c252440();
    if (lVar9 == 2) goto LAB_106ff6c84;
    uVar1 = param_5;
    func_0x00010beb55a0(param_5,param_6,param_7);
    if ((int)uVar1 != 0) {
      lVar9 = (long)_DAT_1127624bc;
      func_0x00010c192f60(*(undefined8 *)(param_5 + lVar9),param_6,0);
      uVar8 = *(undefined8 *)(param_5 + (long)_DAT_1127624e4);
      func_0x00010bfc1900(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d4010;
      func_0x00010bf5a2a0(PTR_PTR_1126d4010,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd1480(uVar8,param_6,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar8);
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      iRam00000001136c9f6c = (int)((param_1 * 100.0) / param_3);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      param_4 = (param_2 * 100.0) / param_4;
      iRam00000001136c9f70 = (int)param_4;
      _objc_release(puVar3);
      _CACurrentMediaTime();
      dVar12 = *(double *)(param_5 + (long)_DAT_1127625a8);
      dVar10 = (double)(long)((param_4 - dVar12) * 1000.0);
      dVar11 = dVar10 / 1000.0;
      func_0x00010c08a2a0(*(undefined8 *)(param_5 + lVar9));
      if ((dVar10 < dVar12) ||
         (func_0x00010c08a2a0(*(undefined8 *)(param_5 + lVar9)), param_4 < dVar10)) {
        uVar1 = 0;
        uVar8 = 0xffffffffffffffff;
      }
      else {
        uVar2 = param_5;
        func_0x00010bf2a5a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c293a80();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c0730a0();
        _objc_release(uVar4);
        _objc_release(uVar2);
        uVar2 = param_5;
        func_0x00010bf2a5a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c293a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a7ba0();
        _objc_release(uVar4);
        _objc_release(uVar2);
        uVar8 = 2;
      }
      uVar2 = param_5;
      func_0x00010c0b3a20(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar10 = (double)iRam00000001136c9f64;
      dVar12 = (double)iRam00000001136c9f68;
      dVar13 = (double)iRam00000001136c9f6c;
      dVar14 = (double)iRam00000001136c9f70;
      uVar4 = param_5;
      func_0x00010bf29620(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c241880();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf5ad00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a22c0(dVar10,dVar12,dVar13,dVar14,dVar11,uVar2,param_6,uVar8,uVar1,4,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar8 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010bf2a1a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe22e0();
      goto LAB_106ff6e2c;
    }
  }
  uVar8 = 1;
LAB_106ff6e38:
  _objc_release(param_7);
  return uVar8;
}



/* Entry: 106ff6e6c; end: 106ff6ed3; -[SCCameraViewController _shouldResetLongPressGesture:] */

bool FUN_106ff6e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if ((lVar2 == 3) || (lVar2 = param_3, func_0x00010c252440(), lVar2 == 4)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440(param_3);
    bVar1 = lVar2 == 5;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106ff6ed4; end: 106ff6f7f; -[SCCameraViewController batchCaptureVideoEnabled] */

undefined8 FUN_106ff6ed4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c299ec0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106ff6f80; end: 106ff6fdb; -[SCCameraViewController startCameraWithContext:] */

void FUN_106ff6f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c252400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff6fdc; end: 106ff7013; -[SCCameraViewController startDeviceMotionUpdates] */

void FUN_106ff6fdc(undefined8 param_1)

{
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff7014; end: 106ff7097; -[SCCameraViewController featureDoubleTapToToggleCameraDidTriger:] */

void FUN_106ff7014(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064e80(param_1);
  func_0x00010c0a2480(uVar1,param_2,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff7098; end: 106ff709f; -[SCCameraViewController prepareForRecordingWithMethod:] */

void FUN_106ff7098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_prepareForRecordingWithMethod_ha_11261fff0,param_3,1);
  return;
}



/* Entry: 106ff70a0; end: 106ff80ab; -[SCCameraViewController prepareForRecordingWithMethod:hasMinimumRecordingDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff70a0(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong unaff_x24;
  long lVar14;
  ulong unaff_x25;
  long lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1e9000(param_1,param_2,0);
  func_0x00010c1e9000(param_1);
  puVar3 = PTR_PTR_1126d3ff8;
  lVar15 = (long)_DAT_1127624bc;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2993e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bee8aa0(param_1);
  func_0x00010c2aa180(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa260(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bdc5260();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a76e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (uVar4 != 0) {
    uVar5 = param_1;
    func_0x00010bf29980();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = uVar5;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = unaff_x25;
    func_0x00010c299660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf0f820();
    if ((int)uVar7 == 0) {
      _objc_release(uVar6);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
    }
    else {
      uVar7 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf926c0();
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(uVar5);
      if ((uVar9 & 1) != 0) goto LAB_106ff72d4;
      uVar5 = uVar4;
      func_0x00010c0d3a80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a7700(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar5);
  }
LAB_106ff72d4:
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c0b7e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0982a0();
  func_0x00010c2b2800(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bdf9640(param_1);
  func_0x00010c2ac1a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be43f20(param_1);
  func_0x00010c2b9c40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be87b80(param_1);
  func_0x00010c2b6a80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf444a0(param_1);
  func_0x00010c2b6a40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = 0x3fe0000000000000;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  func_0x00010c2b4000(uVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be41b40(param_1);
  func_0x00010c2b0be0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf926c0();
  func_0x00010c2b42e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf926c0();
  func_0x00010c2bb300(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010be3f360(param_1);
  func_0x00010c2b0480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uVar10 = 8;
  }
  else {
    unaff_x24 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = unaff_x24;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = uVar5;
    func_0x00010c2720a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = unaff_x25;
    func_0x00010c0f1ce0();
  }
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9760(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (uVar7 != 0) {
    _objc_release(unaff_x25);
    _objc_release(uVar5);
    _objc_release(unaff_x24);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  uVar5 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0d32c0();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 1.60807493534087e-314;
  uVar8 = uVar10;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c2b43a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ed20();
  func_0x00010c2a8c00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234de0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c2b8ca0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2015c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c150aa0();
  _objc_release(uVar5);
  dVar18 = dVar17;
  if (uVar6 == 0xc) {
    uVar5 = param_1;
    func_0x00010bf29980(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c299ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c40c0();
    dVar18 = dVar17;
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (0.0 < dVar17) {
      func_0x00010c2a87a0(dVar17,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      dVar18 = dVar17;
    }
  }
  uVar5 = param_1;
  func_0x00010bf29980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6900();
  dVar17 = dVar18;
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x0001008e3740();
  fVar16 = ABS((float)dVar18 - (float)dVar17);
  uVar5 = param_1;
  if ((1.1754944e-38 <= fVar16) && (ABS((float)dVar18 + (float)dVar17) * 1.1920929e-07 <= fVar16)) {
    uVar6 = param_1;
    func_0x00010bf29980();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf0acc0();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((int)uVar11 != 0) {
      func_0x00010c2a87a0(dVar18,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0(dVar18);
      goto LAB_106ff79b0;
    }
  }
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008e3740();
  func_0x00010c1c40c0(uVar6);
LAB_106ff79b0:
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a700();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bef0520(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bdfb8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a76a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac340(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112762578;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109128224();
  func_0x00010c2b0ac0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar12);
  func_0x00010c2af020(0x3ff0000000000000,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bddb540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa140(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0da400();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06dea0();
  func_0x00010c2b0fe0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar7);
  func_0x00010beb4420(param_1);
  func_0x00010c2b8a20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be40d40(param_1);
  func_0x00010c2b0aa0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c2b6a20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bfb24e0();
  if (((int)uVar2 != 0) &&
     (uVar7 = param_1, func_0x00010bdc5220(), puVar1 = PTR_PTR_1126d4018, uVar7 != 2)) {
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7fb60(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar13);
  }
  _objc_release(uVar12);
  func_0x00010c2b87c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221260(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar3);
  uVar7 = param_1;
  func_0x00010c0926e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf082a0();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209860(uVar10);
  _objc_release(puVar3);
  uVar7 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf30b20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2993e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109700(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c0da4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bef02e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071800();
  func_0x00010c1c1000(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  func_0x00010be3e5c0(param_1);
  func_0x00010c16f680(uVar10);
  uVar7 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c098a80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b700();
  func_0x00010c1bd860(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  func_0x00010c162560(uVar10);
  func_0x00010c18c600(uVar10);
  func_0x00010be87b80(param_1);
  func_0x00010c207cc0(uVar10);
  func_0x00010bde9880(param_1);
  func_0x00010c1ee4c0(uVar10);
  uVar7 = param_1;
  func_0x00010be3e5c0();
  if ((int)uVar7 != 0) {
    uVar7 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1096c0();
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar7);
  }
  *(undefined1 *)(param_1 + (long)_DAT_1127625ac) = 0;
  uVar7 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0982a0();
  _objc_release(uVar9);
  _objc_release(uVar7);
  if ((uVar11 & 1) == 0) {
    func_0x00010becf220(0x3fb999999999999a,param_1);
  }
  func_0x00010be87680(param_1);
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c153940(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ed2a38;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_80 = uVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = 8;
  __Block_object_dispose(&uStack_a8,8);
  __Unwind_Resume();
  func_0x00010c0bf0a0(uVar2);
  return;
}



/* Entry: 106ff80ac; end: 106ff8107;  */

void FUN_106ff80ac(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ff8108;
  puStack_20 = &UNK_110988590;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf0a0(param_2,param_2,0,&puStack_38);
  return;
}



/* Entry: 106ff8108; end: 106ff814b;  */

void FUN_106ff8108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c277e80();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ff814c; end: 106ff83b7; -[SCCameraViewController _defaultRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106ff814c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar1 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c123da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c06b680();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 == 0) {
    lVar1 = param_2 + _DAT_112762568;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4fda0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar1 = lVar4;
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c071800();
      func_0x00010c276a20(lVar1,param_3,lVar3);
      _objc_release(lVar2);
      _objc_release(param_2);
    }
    else {
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1291e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
    }
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1291e0();
    dVar6 = param_1;
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_2);
    lVar1 = lVar4;
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276a00();
    _objc_release(lVar1);
    if (dVar6 <= param_1) {
      param_1 = dVar6;
    }
  }
  _objc_release(lVar4);
  return param_1;
}



/* Entry: 106ff83b8; end: 106ff849f; -[SCCameraViewController _recordingSpeedMultiplier] */

undefined8 FUN_106ff83b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c249ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c072ba0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c249ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249d20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 106ff84a0; end: 106ff857f; -[SCCameraViewController componentRecordingDelayValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ff84a0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2;
  func_0x00010be3fa40();
  if (((uVar2 & 1) != 0) || (uVar2 = param_2, func_0x00010be3f360(), (int)uVar2 != 0)) {
    uVar2 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0982a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      return 0;
    }
  }
  puVar1 = PTR_PTR_1126d4020;
  uVar5 = *(undefined8 *)(param_2 + (long)_DAT_112762578);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30fe0(puVar1,param_3,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  return param_1;
}



/* Entry: 106ff8580; end: 106ff858f; -[SCCameraViewController captureStillImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff8580(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127625ac) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c27cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tryCapturingStillImage_11267cd38);
  return;
}



/* Entry: 106ff8590; end: 106ff88eb; -[SCCameraViewController tryCapturingStillImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff8590(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127625ac;
  if ((*(byte *)(param_1 + lVar9) & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0ac00();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + lVar9) = 1;
      func_0x00010c1e9000(param_1,param_2,3);
      uVar1 = param_1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0982a0();
      if ((int)uVar3 == 0) {
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar3 = param_1;
        func_0x00010be3e5c0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) == 0) {
          func_0x00010becf220(0x3fb999999999999a,param_1);
        }
      }
      puVar5 = PTR_PTR_1126aff08;
      lVar9 = (long)_DAT_1127624bc;
      uVar4 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0b7e80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf70d80();
      func_0x00010c06cea0(puVar5,param_2,uVar8);
      if (((ulong)puVar5 & 1) == 0) {
        _objc_release(uVar4);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c0b7e80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010bfb24e0();
        _objc_release(uVar6);
        _objc_release(uVar4);
        if ((int)uVar8 != 0) {
          func_0x00010c2726e0(param_1,param_2,0,0);
        }
      }
      uVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf2b3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166ea0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c06b680();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar7 != 0) {
        uVar1 = param_1;
        func_0x00010bf29620(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf16700();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1afe00();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      uVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bfe6f80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf30d00(uVar3,param_2,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c242aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar2);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106ff88ec; end: 106ff8bcf; -[SCCameraViewController featureContainerView:setAllInterfaceElementsHidden:statusBarHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff88ec(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_2;
  func_0x00010c07ac60();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1070e0(param_2);
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar2);
  func_0x00010c1cb900(param_1,param_2);
  uVar1 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf2b3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b320(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar8 = (long)_DAT_11276259c;
  uVar1 = param_2 + lVar8;
  _objc_loadWeakRetained();
  uVar3 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
LAB_106ff8a28:
    _objc_release(uVar1);
  }
  else {
    uVar3 = param_2;
    func_0x00010c075580();
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_2 + lVar8;
      _objc_loadWeakRetained(uVar1);
      func_0x00010c272680();
      goto LAB_106ff8a28;
    }
  }
  uVar1 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06b680();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar1 = param_2;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    if ((int)param_5 == 0) {
      uVar5 = uVar4;
      func_0x00010c233e60();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) goto LAB_106ff8ba4;
      uVar1 = param_2;
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf29020();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_2;
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136e00(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      func_0x00010c177560();
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
LAB_106ff8ba4:
                    /* WARNING: Could not recover jumptable at 0x00010bed2410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__updateARBarVisibility_animated__1125922a8,param_5,param_7);
  return;
}



/* Entry: 106ff8bd0; end: 106ff8dfb; -[SCCameraViewController _updateARBarVisibility:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff8bd0(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15b000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071800();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c15b000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0712a0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar7 & 1) != 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf099a0();
    _objc_release(uVar1);
    if (((int)uVar2 == 0) || (param_3 != 0)) {
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf08e60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
    }
    else {
      lVar9 = (long)_DAT_112762530;
      lVar8 = param_1 + lVar9;
      _objc_loadWeakRetained();
      _objc_release();
      uVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf08e60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        lVar9 = param_1 + lVar9;
        _objc_loadWeakRetained(lVar9);
        lVar8 = lVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c136e00(uVar3,param_2,1,param_4,lVar8);
        _objc_release(lVar8);
        _objc_release(lVar9);
        goto LAB_106ff8dcc;
      }
    }
    func_0x00010c177560();
  }
LAB_106ff8dcc:
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff8dfc; end: 106ff8eab; -[SCCameraViewController setVolumeButtonHandlingEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff8dfc(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c078380();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + (long)_DAT_1127624cc),
                 PTR_s_startHandlingVolumeButtonEventsI_1126715d8,param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 106ff8eac; end: 106ff8f27; -[SCCameraViewController volumeButtonCaptureShouldHandleVolumeButtonEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ff8eac(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ab80();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_1127625b0) & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_1127624cc);
                    /* WARNING: Could not recover jumptable at 0x00010c230b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar3,PTR_s_shouldHandleVolumeButtonEvents__112669ce8,param_1);
    return uVar3;
  }
  return 0;
}



/* Entry: 106ff8f28; end: 106ff914b; -[SCCameraViewController abortPressingVolumeButtonAndEndRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff8f28(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c110160();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar4 == 0) {
    uVar2 = uVar1;
    func_0x00010bfd3560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf926c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 != 0) goto LAB_106ff90ec;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c2a0e00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0984a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf926c0();
      if ((int)uVar4 == 0) {
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar4 = *(ulong *)(param_1 + (long)_DAT_1127624bc);
        func_0x00010c07c740();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
LAB_106ff90ec:
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256760();
      _objc_release(uVar2);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106ff914c; end: 106ff94c3; -[SCCameraViewController volumeButtonCaptureShouldAllowBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ff914c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + (long)_DAT_1127625b0) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + (long)_DAT_1127624f4);
    func_0x00010bf10e60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c083180();
    if ((int)uVar2 == 0) {
LAB_106ff9490:
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_1;
      func_0x00010bdd1440();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1238e0();
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      if (uVar3 != 0x756e6474) {
        uVar4 = param_1 + (long)_DAT_112762568;
        _objc_loadWeakRetained();
        uVar2 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010bf4fda0();
        _objc_release(uVar2);
        _objc_release(uVar4);
        if (((uVar1 < 5) && ((1L << (uVar1 & 0x3f) & 0x1aU) != 0)) ||
           ((uVar4 = param_1, func_0x00010be40e00(), (int)uVar4 != 0 &&
            (uVar4 = param_1, func_0x00010c123d40(), (uVar4 & 1) != 0)))) goto LAB_106ff9250;
        lVar8 = (long)_DAT_1127624bc;
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010bf8b500();
        if ((((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c068360(), (uVar4 & 1) == 0)) &&
           (uVar4 = param_1, func_0x00010c10a560(), (uVar4 & 1) == 0)) {
          uVar1 = *(ulong *)(param_1 + lVar8);
          func_0x00010bf2a1a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010bf2b240();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          func_0x00010c074c20();
          if (((uVar2 & 1) != 0) || (uVar2 = param_1, func_0x00010c06dfa0(), (int)uVar2 == 0))
          goto LAB_106ff9490;
          uVar2 = param_1;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c2a71e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar2);
          _objc_release(uVar4);
          _objc_release(uVar1);
          if (uVar3 != 0) {
            uVar4 = param_1;
            func_0x00010c0926e0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar4;
            func_0x00010c0984a0();
            _objc_release(uVar4);
            if ((uVar2 & 1) == 0) {
              puVar5 = PTR_PTR_1126af178;
              func_0x00010c22b900();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010c083820();
              _objc_release(puVar5);
              if (((ulong)puVar6 & 1) == 0) {
                uVar4 = param_1;
                func_0x00010bf29620();
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar4;
                func_0x00010c270700();
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar2;
                func_0x00010bfa1820();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar1;
                func_0x00010bf926c0();
                _objc_release(uVar1);
                _objc_release(uVar2);
                _objc_release(uVar4);
                if (((uVar3 & 1) == 0) && (uVar4 = param_1, func_0x00010bfeb400(), (uVar4 & 1) == 0)
                   ) {
                  uVar4 = param_1;
                  func_0x00010be3fa40();
                  if ((int)uVar4 != 0) {
                    uVar4 = param_1;
                    func_0x00010bf29620();
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = uVar4;
                    func_0x00010bf7f1c0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = uVar2;
                    func_0x00010bfa1820();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar1;
                    func_0x00010bf78ec0();
                    _objc_release(uVar1);
                    _objc_release(uVar2);
                    _objc_release(uVar4);
                    if ((int)uVar3 != 0) {
                      uVar4 = param_1;
                      func_0x00010c10f940();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (uVar4 == 0) {
                        func_0x00010bf29620(param_1);
                        _objc_retainAutoreleasedReturnValue();
                        uVar4 = param_1;
                        func_0x00010bf7f1c0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar2 = uVar4;
                        func_0x00010bfa1820();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c238120();
                        _objc_release(uVar2);
                        uVar1 = param_1;
                        goto LAB_106ff9490;
                      }
                      goto LAB_106ff94a0;
                    }
                  }
LAB_106ff9250:
                  uVar7 = 1;
                  goto LAB_106ff94a4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_106ff94a0:
  uVar7 = 0;
LAB_106ff94a4:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106ff94c4; end: 106ff96d3; -[SCCameraViewController volumeButtonCaptureShouldAllowEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106ff94c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + (long)_DAT_1127624f4);
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c083180();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    uVar3 = param_1;
    func_0x00010bdd1440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1238e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar4 == 0x756e6474) {
      return 0;
    }
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c07bf00();
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    uVar2 = param_1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0984a0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c270700();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf926c0();
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfeb410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_inCaptureFlow_1125d86c8);
        return param_1;
      }
      return 1;
    }
    func_0x00010be26780();
    uVar2 = param_1;
    func_0x00010bdc5260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf298e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001085aaf9c();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return 0;
}



/* Entry: 106ff96d4; end: 106ff9a27; -[SCCameraViewController volumeButtonCaptureBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff96d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar1 = param_1 + (long)_DAT_112762568;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4fda0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 == 4) {
    uVar1 = param_1;
    func_0x00010beb7420();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010be3f360();
    if ((int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf78ec0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4fca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1151a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else if (((uVar3 & 0xfffffffffffffffd) == 1) ||
          ((uVar1 = param_1, func_0x00010be40e00(), (int)uVar1 != 0 &&
           (uVar1 = param_1, func_0x00010c123d40(), (int)uVar1 != 0)))) {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf4fca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c115080();
    goto LAB_106ff99f4;
  }
  uVar1 = param_1;
  func_0x00010bfeb400();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010be3fa40();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf78ec0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  func_0x00010c251820(param_1,param_2,0);
  func_0x00010c109720(param_1,param_2,1);
  uVar3 = param_1;
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf2af60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
  func_0x00010c2993e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  func_0x00010baef3d4(1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be3e5c0(param_1);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c150aa0();
  func_0x0001005d3b6c();
  func_0x00010c0a2440(uVar2,param_2,uVar6,&PTR____CFConstantStringClassReference_110f4c1f8,uVar7,0,
                      uVar4,0,uVar8,0);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  param_1 = uVar3;
LAB_106ff99f4:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff9a28; end: 106ff9f07; -[SCCameraViewController volumeButtonCaptureEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff9a28(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112762568;
  uVar1 = param_2 + lVar8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4fda0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010beb7420();
  if ((((int)uVar1 != 0) && (uVar3 == 4)) || (4 < uVar3 || (1L << (uVar3 & 0x3f) & 0x1aU) == 0)) {
    uVar1 = param_2;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf926c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      uVar1 = param_2;
      func_0x00010c123d40();
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar1 == 0) {
        uVar1 = param_2;
        func_0x00010c270700();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2727c0();
        goto LAB_106ff9c6c;
      }
LAB_106ff9b10:
      uVar1 = param_2;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256760();
      goto LAB_106ff9c6c;
    }
    uVar1 = param_2;
    func_0x00010be3fa40();
    if ((int)uVar1 != 0) {
      uVar1 = param_2;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf78ec0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_2;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar4 != 0) {
        uVar2 = uVar1;
        func_0x00010bf7f1c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c238120();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        goto LAB_106ff9ce4;
      }
      uVar2 = uVar1;
      func_0x00010c2a0e00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c110160();
      if ((uVar4 & 1) == 0) {
        uVar4 = param_2;
        func_0x00010c123d40();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar4 != 0) {
          func_0x00010bf29620(param_2);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106ff9b10;
        }
      }
      else {
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      uVar1 = param_2;
      func_0x00010c1119e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c250280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 == 0) {
        return;
      }
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_2;
      func_0x00010c1119e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c250280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar7);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(puVar7);
      if ((0.5 < param_1) && (uVar1 = param_2, func_0x00010c123d40(), (int)uVar1 != 0)) {
LAB_106ff9ce4:
                    /* WARNING: Could not recover jumptable at 0x00010beec570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,PTR_s_abortPressingVolumeButtonAndEndR_112598b00);
        return;
      }
      uVar1 = param_2;
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2a0e00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_2;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d620();
      goto LAB_106ff9c6c;
    }
    lVar8 = param_2 + lVar8;
    _objc_loadWeakRetained();
    lVar5 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf4fda0();
    _objc_release(lVar5);
    _objc_release(lVar8);
    uVar1 = param_2;
    func_0x00010be40e00();
    if (((int)uVar1 == 0) || (3 < lVar6 - 1U)) goto LAB_106ff9ce4;
  }
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2a0e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
LAB_106ff9c6c:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ff9f08; end: 106ff9f4b; -[SCCameraViewController hideCameraTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff9f08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1762c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff9f4c; end: 106ff9f8f; -[SCCameraViewController showCameraTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff9f4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1762c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff9f90; end: 106ffa003; -[SCCameraViewController setCameraViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff9f90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf2b940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf2bac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ffa004; end: 106ffa0cb; -[SCCameraViewController replyCameraBackButtonPressed] */

void FUN_106ffa004(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2323a0();
  if ((int)uVar1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010beb5c60();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showBatchCaptureDiscardAlertWhe_11258b958)
    ;
    return;
  }
  uVar1 = param_1;
  func_0x00010be3fa40();
  if ((int)uVar1 != 0) {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e3fe0();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitModularCamera_112560a08);
  return;
}



/* Entry: 106ffa0cc; end: 106ffa23b; -[SCCameraViewController allowSwipeToDismissInvokedByGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ffa0cc(ulong param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  bVar1 = *(byte *)(param_1 + (long)_DAT_112762580);
  if (param_3 == 0) {
    func_0x00010bfeb400();
    if ((param_1 & 1) != 0) {
      return 0;
    }
    if ((bVar1 & 1) != 0) {
      return 0;
    }
LAB_106ffa158:
    uVar5 = 1;
  }
  else {
    uVar2 = param_1 + (long)_DAT_112762568;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22e4c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010bfeb400();
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      if ((bVar1 & 1) != 0) {
        return 0;
      }
      uVar2 = param_1;
      func_0x00010beb5c60();
      if ((int)uVar2 == 0) {
        uVar2 = param_1;
        func_0x00010be975e0();
        if ((uVar2 & 1) == 0) {
          lVar6 = *(long *)(param_1 + (long)_DAT_1127624e4);
          func_0x00010bfc1900();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126d4028;
          _objc_opt_new(PTR_PTR_1126d4028);
          lVar8 = lVar6;
          func_0x00010bfd1480();
          _objc_release(puVar7);
          _objc_release(lVar6);
          if (lVar8 != 0) goto LAB_106ffa158;
        }
      }
      else {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_106ffa23c;
        puStack_50 = &UNK_110842e18;
        uStack_48 = param_1;
        func_0x0001000d76cc("APPSTORE",&puStack_68);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 106ffa23c; end: 106ffa243;  */

void FUN_106ffa23c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb7ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showBatchCaptureDiscardAlertWhe_11258b958);
  return;
}



/* Entry: 106ffa244; end: 106ffa38b; -[SCCameraViewController _exitModularCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffa244(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + (long)_DAT_1127625b4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + (long)_DAT_1127625b4) = 1;
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2726c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255e20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11276259c;
  lVar4 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar4 == 0) {
    func_0x00010c255c00(param_1);
    uVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73c40();
  }
  else {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010c08e580();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffa38c; end: 106ffa3c3; -[SCCameraViewController shouldRecognizeButtonActions] */

uint FUN_106ffa38c(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c068360();
  if ((uVar2 & 1) == 0) {
    func_0x00010c10a560(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106ffa3c4; end: 106ffa407; -[SCCameraViewController interactingWithCamera] */

ulong FUN_106ffa3c4(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07ada0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c064e80(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c2687f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_takingPicture_112677c20);
    return param_1;
  }
  return 1;
}



/* Entry: 106ffa408; end: 106ffa41b; -[SCCameraViewController appStartupDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffa408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),
             PTR_s_startHandlingVolumeButtonEventsI_1126715d8,param_1);
  return;
}



/* Entry: 106ffa41c; end: 106ffab8b; -[SCCameraViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106ffa41c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  
  _objc_retain(param_5);
  lVar15 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0770c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar5 = param_3;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c102d20(param_1,param_2);
    _objc_release(uVar5);
    if (((uVar6 & 1) == 0) && (uVar5 = param_3, func_0x00010c10a560(), (uVar5 & 1) == 0)) {
      uVar2 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c082800();
      _objc_release(uVar2);
      if ((int)uVar1 != 0) {
        uVar5 = param_3;
        func_0x00010be3f3a0();
        if ((int)uVar5 != 0) {
          lVar15 = param_3 + (long)_DAT_112762568;
          _objc_loadWeakRetained();
          lVar3 = lVar15;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf4fda0();
          _objc_release(lVar3);
          _objc_release(lVar15);
          if ((lVar4 != 4) || (func_0x00010beb7420(), (param_3 & 1) == 0)) goto LAB_106ffa638;
        }
        uVar14 = 1;
        goto LAB_106ffab5c;
      }
    }
LAB_106ffa638:
    uVar14 = 0;
    goto LAB_106ffab5c;
  }
  uVar5 = param_3;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c15b000();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0712a0();
  if ((int)uVar8 != 0) {
    puVar9 = PTR_PTR_1126b3858;
    func_0x00010c08fb40(PTR_PTR_1126b3858);
    uVar8 = uVar6;
    func_0x00010c081600(uVar6,param_4,puVar9);
    if ((int)uVar8 == 0) goto LAB_106ffa640;
    puVar9 = PTR_PTR_1126b3858;
    func_0x00010c08fb40(PTR_PTR_1126b3858);
    uVar8 = uVar6;
    func_0x00010c074620(uVar6,param_4,param_5,puVar9);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar5);
    if ((uVar8 & 1) == 0) goto LAB_106ffa658;
    goto LAB_106ffab50;
  }
LAB_106ffa640:
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar5);
LAB_106ffa658:
  uVar10 = *(ulong *)(param_3 + (long)_DAT_1127624e4);
  func_0x00010bfc1900();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d4030;
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x00010bf5a420(param_1,param_2,PTR_PTR_1126d4030);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010c22e520(uVar10,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar10);
  if ((uVar5 & 1) != 0) goto LAB_106ffa6b8;
  uVar11 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0770a0();
  _objc_release(uVar11);
  if ((int)uVar12 == 0) goto LAB_106ffa7a0;
  uVar5 = param_3;
  func_0x00010c068360();
  if ((uVar5 & 1) == 0) {
    uVar10 = *(ulong *)(param_3 + lVar15);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    uVar1 = param_1;
    uVar2 = param_2;
    func_0x00010c102c20(param_1,param_2);
    _objc_release(uVar10);
    if ((uVar5 & 1) != 0) goto LAB_106ffa6b8;
    puVar9 = PTR_PTR_1126b3858;
    func_0x00010c08fb40(PTR_PTR_1126b3858);
    uVar5 = uVar6;
    func_0x00010c081600(uVar6,param_4,puVar9);
    if ((int)uVar5 != 0) {
      uVar11 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010bf2a1a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0db620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar9 = PTR_PTR_1126b3860;
      func_0x00010c268bc0(PTR_PTR_1126b3860);
      uVar5 = uVar6;
      func_0x00010bf1d560(uVar6,param_4,uVar12,puVar9);
      _objc_release(uVar12);
      if ((uVar5 & 1) != 0) goto LAB_106ffa6b8;
    }
LAB_106ffa7a0:
    puVar9 = PTR_PTR_1126b3860;
    func_0x00010c0db140();
    uVar11 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c080a80();
    _objc_release(uVar11);
    if ((int)uVar12 == 0) {
      uVar5 = param_3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010bf88580();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c070d80();
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(uVar5);
      if ((int)uVar8 == 0) {
        uVar5 = param_3;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c093800();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c079920();
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar5);
        if ((int)uVar8 != 0) {
          puVar9 = PTR_PTR_1126b3860;
          func_0x00010c0f35e0();
        }
      }
      else {
        puVar9 = PTR_PTR_1126b3860;
        func_0x00010bf883c0();
      }
    }
    else {
      puVar9 = PTR_PTR_1126b3860;
      func_0x00010c268bc0();
    }
    puVar13 = PTR_PTR_1126b3860;
    func_0x00010c268bc0();
    if (puVar9 == puVar13) {
      uVar11 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      uVar1 = param_1;
      uVar2 = param_2;
      func_0x00010c102c40(param_1,param_2);
      _objc_release(uVar11);
      if ((int)uVar12 != 0) {
        uVar5 = param_3;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c270700();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf926c0();
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar5);
        if (((uVar8 & 1) != 0) || (uVar5 = param_3, func_0x00010be3f3a0(), (uVar5 & 1) != 0))
        goto LAB_106ffab50;
      }
    }
    puVar13 = PTR_PTR_1126b3860;
    func_0x00010c0db140();
    if (puVar9 != puVar13) {
      uVar10 = *(ulong *)(param_3 + lVar15);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      uVar1 = param_1;
      uVar2 = param_2;
      func_0x00010c102c20(param_1,param_2);
      _objc_release(uVar10);
      if (((uVar5 & 1) != 0) ||
         (uVar5 = uVar6, func_0x00010c29f240(uVar6,param_4,param_5), (uVar5 & 1) != 0))
      goto LAB_106ffa6b8;
      puVar13 = PTR_PTR_1126b3858;
      func_0x00010c08fb40(PTR_PTR_1126b3858);
      uVar5 = uVar6;
      func_0x00010c081600(uVar6,param_4,puVar13);
      if ((int)uVar5 != 0) {
        uVar11 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010bf2a1a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0db620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        uVar5 = uVar6;
        func_0x00010bf1d560(uVar6,param_4,uVar12,puVar9);
        _objc_release(uVar12);
        if ((uVar5 & 1) != 0) goto LAB_106ffa6b8;
      }
    }
    uVar11 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c07a060();
    if ((int)uVar12 == 0) {
      _objc_release(uVar11);
    }
    else {
      puVar9 = PTR_PTR_1126b3858;
      func_0x00010c08fb40(PTR_PTR_1126b3858);
      uVar5 = uVar6;
      func_0x00010c081600(uVar6,param_4,puVar9);
      _objc_release(uVar11);
      if ((int)uVar5 != 0) {
        uVar11 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010bf2a1a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0db620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        puVar9 = PTR_PTR_1126b3860;
        func_0x00010c0fc1c0(PTR_PTR_1126b3860);
        uVar5 = uVar6;
        func_0x00010bf1d560(uVar6,param_4,uVar12,puVar9);
        _objc_release(uVar12);
        if ((uVar5 & 1) != 0) goto LAB_106ffa6b8;
      }
    }
    func_0x00010c09ef00(param_5,param_4,0);
    puVar9 = PTR_PTR_1126b3858;
    func_0x00010c08fb40(PTR_PTR_1126b3858);
    uVar5 = uVar6;
    func_0x00010c081600(uVar6,param_4,puVar9);
    if ((int)uVar5 == 0) {
LAB_106ffab50:
      uVar14 = 1;
    }
    else {
      puVar9 = PTR_PTR_1126b3858;
      func_0x00010c08fb40(PTR_PTR_1126b3858);
      uVar5 = uVar6;
      func_0x00010c074620(uVar6,param_4,param_5,puVar9);
      if ((int)uVar5 == 0) goto LAB_106ffab50;
      func_0x00010c0926e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c102be0(param_1,param_2,uVar1,uVar2);
      _objc_release(param_3);
      uVar14 = (uint)uVar5 ^ 1;
    }
  }
  else {
LAB_106ffa6b8:
    uVar14 = 0;
  }
  _objc_release(uVar6);
LAB_106ffab5c:
  _objc_release(param_5);
  return uVar14;
}



/* Entry: 106ffab8c; end: 106ffb0f7; -[SCCameraViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106ffab8c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong unaff_x23;
  long lVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010bf43640();
  lVar9 = (long)_DAT_1127624bc;
  if ((uVar5 & 1) == 0) {
    uVar1 = *(ulong *)(param_3 + lVar9);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c07a060();
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)(param_3 + lVar9);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0770c0();
      _objc_release(uVar6);
      _objc_release(uVar1);
      if ((uVar5 & 1) == 0) goto LAB_106ffadc4;
LAB_106ffacec:
      uVar8 = 1;
      goto LAB_106ffb0c4;
    }
    _objc_release(uVar1);
LAB_106ffadc4:
    unaff_x23 = *(ulong *)(param_3 + lVar9);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = unaff_x23;
    func_0x00010bf70d80();
    _objc_release(unaff_x23);
    uVar1 = param_3;
    func_0x00010c110140();
    if (((int)uVar1 != 0) && (uVar5 == 0)) {
      uVar5 = *(ulong *)(param_3 + lVar9);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = uVar5;
      func_0x00010bfb24e0();
      _objc_release(uVar5);
      if ((int)unaff_x23 != 0) {
        uVar1 = *(ulong *)(param_3 + lVar9);
        func_0x00010bf2a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c079900();
        if ((uVar5 & 1) == 0) {
          _objc_release(uVar1);
        }
        else {
          unaff_x23 = *(ulong *)(param_3 + lVar9);
          func_0x00010bf2a1a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = unaff_x23;
          func_0x00010c0770c0();
          _objc_release(unaff_x23);
          _objc_release(uVar1);
          if ((uVar5 & 1) != 0) goto LAB_106ffacec;
        }
      }
    }
  }
  uVar1 = *(ulong *)(param_3 + lVar9);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0770c0();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar1);
LAB_106ffacfc:
    uVar1 = *(ulong *)(param_3 + lVar9);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c079900();
    if ((int)uVar5 != 0) {
      unaff_x23 = *(ulong *)(param_3 + lVar9);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = unaff_x23;
      func_0x00010c07a060();
      if ((int)uVar6 != 0) {
        _objc_release(unaff_x23);
        goto LAB_106ffb0b8;
      }
    }
    uVar3 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c079900();
    if ((int)uVar7 == 0) {
      _objc_release(uVar3);
      if ((int)uVar5 != 0) {
        _objc_release(unaff_x23);
      }
      _objc_release(uVar1);
    }
    else {
      uVar4 = *(ulong *)(param_3 + lVar9);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c07a060();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) {
        _objc_release(unaff_x23);
      }
      _objc_release(uVar1);
      if ((uVar6 & 1) != 0) {
        uVar8 = 0;
        goto LAB_106ffb0c4;
      }
    }
    uVar5 = param_3;
    func_0x00010c277220();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar6 = *(ulong *)(param_3 + lVar9);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0770a0();
    if ((uVar5 & 1) == 0) {
      uVar4 = *(ulong *)(param_3 + lVar9);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0770a0();
      if (((uVar5 & 1) == 0) || (uVar5 = uVar1, func_0x00010c0835c0(), (int)uVar5 != 0)) {
        _objc_release(uVar4);
        goto LAB_106ffaf48;
      }
      uVar5 = uVar1;
      func_0x00010c0835c0();
      _objc_release(uVar4);
      _objc_release(uVar6);
      if ((uVar5 & 1) != 0) goto LAB_106ffaf50;
LAB_106ffb0b8:
      uVar8 = 0;
    }
    else {
      uVar5 = uVar1;
      func_0x00010c0835c0();
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar1;
        func_0x00010c0835c0();
        _objc_release(uVar6);
        if ((uVar5 & 1) == 0) goto LAB_106ffb0b8;
      }
      else {
LAB_106ffaf48:
        _objc_release(uVar6);
      }
LAB_106ffaf50:
      uVar7 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010bf2a1a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_6);
      _objc_release(uVar7);
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0770c0();
      if (((int)uVar7 == 0) || (uVar5 = param_3, func_0x00010c07ada0(), (uVar5 & 1) == 0)) {
        _objc_release(uVar3);
      }
      else {
        uVar6 = *(ulong *)(param_3 + lVar9);
        func_0x00010bf2a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c102c40(param_1,param_2);
        _objc_release(uVar6);
        _objc_release(uVar3);
        if ((uVar5 & 1) != 0) goto LAB_106ffb0b8;
      }
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c080a80();
      if ((int)uVar7 == 0) {
        uVar8 = 1;
      }
      else {
        func_0x00010bf29620(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010bfd3560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c0b4e40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = (uint)(uVar4 != param_6);
        _objc_release();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      _objc_release(uVar3);
    }
  }
  else {
    unaff_x23 = param_6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    uVar5 = unaff_x23;
    _objc_opt_isKindOfClass(unaff_x23,puVar2);
    _objc_release(unaff_x23);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) goto LAB_106ffacfc;
    uVar1 = param_6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c8600;
    _objc_opt_class(PTR_PTR_1126c8600);
    uVar5 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    if ((((uVar5 & 1) == 0) || (uVar5 = param_5, func_0x00010c082020(), (uVar5 & 1) != 0)) ||
       (uVar5 = uVar1, func_0x00010c070400(), (uVar5 & 1) != 0)) goto LAB_106ffb0b8;
    uVar5 = uVar1;
    func_0x00010c070ea0(uVar1);
    uVar8 = (uint)uVar5 ^ 1;
  }
  _objc_release(uVar1);
LAB_106ffb0c4:
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar8;
}



/* Entry: 106ffb0f8; end: 106ffb577; -[SCCameraViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106ffb0f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar13 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0770c0();
  if ((int)uVar2 == 0) {
    uVar11 = *(undefined8 *)(param_3 + lVar13);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c0770c0();
    _objc_release(uVar11);
    _objc_release(uVar1);
    uVar1 = param_1;
    uVar11 = param_2;
    if ((int)uVar2 != 0) goto LAB_106ffb1a4;
LAB_106ffb2f0:
    uVar14 = *(ulong *)(param_3 + lVar13);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x00010c0982a0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar14);
    }
    else {
      lVar9 = param_6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_3 + lVar13);
      func_0x00010bf2bac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      _objc_release(uVar14);
      if (lVar9 == lVar10) {
        uVar11 = *(undefined8 *)(param_3 + lVar13);
        func_0x00010bf2a1a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,uVar11);
        uVar2 = param_1;
        uVar1 = param_2;
        _objc_release(uVar11);
        func_0x00010c09ef00(param_5,param_4,0);
        uVar3 = param_3;
        func_0x00010c0926e0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar3;
        func_0x00010c102be0(param_1,param_2,uVar2,uVar1);
        _objc_release(uVar3);
        if ((uVar14 & 1) != 0) goto LAB_106ffb2e8;
      }
    }
    uVar14 = param_3;
    func_0x00010c277220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    func_0x00010bf88580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c070d80();
    if ((int)uVar5 == 0) {
      _objc_release(uVar4);
      _objc_release(uVar14);
      _objc_release(param_3);
    }
    else {
      puVar12 = PTR_PTR_1126b3860;
      func_0x00010c268bc0(PTR_PTR_1126b3860);
      uVar5 = uVar3;
      func_0x00010c074640(uVar3,param_4,param_6,puVar12);
      _objc_release(uVar4);
      _objc_release(uVar14);
      _objc_release(param_3);
      if ((uVar5 & 1) != 0) goto LAB_106ffb480;
    }
    puVar12 = PTR_PTR_1126b3860;
    func_0x00010c0fc1c0(PTR_PTR_1126b3860);
    uVar14 = uVar3;
    func_0x00010c074640(uVar3,param_4,param_5,puVar12);
    if ((uVar14 & 1) == 0) {
      puVar12 = PTR_PTR_1126b3860;
      func_0x00010c0f35e0(PTR_PTR_1126b3860);
      uVar14 = uVar3;
      func_0x00010c074640(uVar3,param_4,param_5,puVar12);
      if ((uVar14 & 1) == 0) {
        puVar12 = PTR_PTR_1126b3860;
        func_0x00010c0b4cc0(PTR_PTR_1126b3860);
        uVar14 = uVar3;
        func_0x00010c074640(uVar3,param_4,param_5,puVar12);
        if ((uVar14 & 1) == 0) {
          puVar12 = PTR_PTR_1126b3860;
          func_0x00010c141920(PTR_PTR_1126b3860);
          uVar14 = uVar3;
          func_0x00010c074640(uVar3,param_4,param_5,puVar12);
          if ((int)uVar14 == 0) {
            uVar14 = 0;
            goto LAB_106ffb52c;
          }
        }
      }
    }
    puVar12 = PTR_PTR_1126b3860;
    func_0x00010c268bc0(PTR_PTR_1126b3860);
    uVar14 = uVar3;
    func_0x00010c074640(uVar3,param_4,param_6,puVar12);
  }
  else {
    _objc_release(uVar1);
    uVar1 = param_1;
    uVar11 = param_2;
LAB_106ffb1a4:
    uVar2 = *(undefined8 *)(param_3 + lVar13);
    func_0x00010bf2a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,uVar2);
    param_1 = uVar1;
    param_2 = uVar11;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar13);
    func_0x00010bf2a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_6,param_4,uVar2);
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c096ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c22e5a0(uVar1,uVar11);
    if ((int)uVar5 == 0) {
      uVar5 = param_3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c096ba0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c22e5a0(param_1,param_2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar14);
      _objc_release(uVar3);
      if ((uVar8 & 1) == 0) goto LAB_106ffb2f0;
LAB_106ffb2e8:
      uVar14 = 1;
      goto LAB_106ffb534;
    }
    _objc_release(uVar4);
    _objc_release(uVar14);
LAB_106ffb480:
    uVar14 = 1;
  }
LAB_106ffb52c:
  _objc_release(uVar3);
LAB_106ffb534:
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar14;
}



/* Entry: 106ffb578; end: 106ffba57; -[SCCameraViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106ffb578(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  bool bVar10;
  long lVar11;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar11 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_6,param_4,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c080a80();
  if ((int)uVar1 == 0) {
LAB_106ffb688:
    uVar9 = 0;
    bVar10 = false;
LAB_106ffb690:
    _objc_release(uVar2);
  }
  else {
    uVar3 = *(ulong *)(param_3 + lVar11);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c102c40(param_1,param_2);
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar3);
      goto LAB_106ffb688;
    }
    uVar4 = param_3;
    func_0x00010be3f3a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar2 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c102ba0(param_1,param_2);
      uVar9 = (uint)uVar1;
      bVar10 = true;
      goto LAB_106ffb690;
    }
    uVar9 = 0;
    bVar10 = false;
  }
  uVar4 = param_3;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf2b3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c072360();
  if ((uVar6 & 1) == 0) {
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
LAB_106ffb734:
    uVar4 = param_3;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf926c0();
    if ((int)uVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c080a80();
      if ((int)uVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_3 + lVar11);
        func_0x00010bf2a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar7;
        func_0x00010c102c40(param_1,param_2);
        uVar9 = (uint)uVar1;
        _objc_release(uVar7);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    if (!bVar10 && (uVar9 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0770c0();
      if ((int)uVar1 == 0) {
        uVar3 = *(ulong *)(param_3 + lVar11);
        func_0x00010bf2a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c102c40(param_1,param_2);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) goto LAB_106ffb8c0;
      }
      else {
        _objc_release(uVar2);
      }
      uVar3 = *(ulong *)(param_3 + lVar11);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0770c0();
      if ((uVar4 & 1) == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar2 = *(undefined8 *)(param_3 + lVar11);
        func_0x00010bf2a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c102ba0(param_1,param_2);
        _objc_release(uVar2);
        _objc_release(uVar3);
        if ((int)uVar1 == 0) goto LAB_106ffb8c0;
      }
      uVar2 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c080a80();
      if ((int)uVar1 != 0) {
        uVar1 = *(undefined8 *)(param_3 + lVar11);
        func_0x00010bf2a1a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c102d80(param_1,param_2);
        _objc_release(uVar1);
      }
      _objc_release(uVar2);
    }
    uVar9 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + lVar11);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0770c0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    if ((((uint)uVar1 | uVar9) & 1) != 0) goto LAB_106ffb734;
LAB_106ffb8c0:
    uVar9 = 0;
  }
  uVar3 = *(ulong *)(param_3 + lVar11);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080a80();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_3;
    func_0x00010bf29620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c22d040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c277260();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar9 = uVar9 & ((uint)uVar8 ^ 1);
  }
  func_0x00010be87a40(param_1,param_2,param_3,param_4,param_6,param_5,uVar9);
  *(undefined1 *)(param_3 + (long)_DAT_112762580) = 0;
  uVar4 = param_3;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf099a0();
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    func_0x00010bdd4e20(param_3,param_4,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar9;
}



/* Entry: 106ffba58; end: 106ffbcf3; -[SCCameraViewController _blockCameraSwipeDismissalIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffba58(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  lVar9 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,uVar1);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_5 + lVar9);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c102d80(param_1,param_2);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar9 = param_5;
    func_0x00010c277220();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar4;
    func_0x00010c29f240(lVar4,param_6,0);
    if ((int)lVar9 == 0) {
      puVar5 = PTR_PTR_1126b3858;
      func_0x00010c08fb40(PTR_PTR_1126b3858);
      lVar9 = lVar4;
      func_0x00010c081600(lVar4,param_6,puVar5);
      if ((int)lVar9 != 0) {
        lVar9 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        param_3 = 1.0 / param_3;
        lVar6 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        param_4 = 1.0 / param_4;
        _CGAffineTransformMakeScale(&dStack_80);
        _objc_release(lVar6);
        _objc_release(lVar9);
        lVar9 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_7,param_6,lVar9);
        _objc_release(lVar9);
        puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
        puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(dStack_60 + dStack_70 * param_4 + dStack_80 * param_3,
                            dStack_58 + dStack_68 * param_4 + dStack_78 * param_3,
                            PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar5,param_6,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126b3860;
        func_0x00010c0f35e0(PTR_PTR_1126b3860);
        puVar8 = PTR_PTR_1126b3860;
        func_0x00010c264560(PTR_PTR_1126b3860);
        lVar9 = lVar4;
        func_0x00010bf1d560(lVar4,param_6,puVar5,(ulong)puVar8 | (ulong)puVar7);
        if ((int)lVar9 != 0) {
          *(undefined1 *)(param_5 + _DAT_112762580) = 1;
          lVar9 = (long)_DAT_1127625b8;
          func_0x00010c069d00(*(undefined8 *)(param_5 + lVar9));
          puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
          func_0x00010c1503c0(0x3fe0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_6,param_5
                              ,PTR_s_resetIsBlockingUnifiedCameraSwip_112536ce0,0,0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_5 + lVar9);
          *(undefined **)(param_5 + lVar9) = puVar7;
          _objc_release(uVar1);
        }
        _objc_release(puVar5);
      }
    }
    else {
      *(undefined1 *)(param_5 + _DAT_112762580) = 1;
    }
    _objc_release(lVar4);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106ffbcf4; end: 106ffbd03; -[SCCameraViewController resetIsBlockingUnifiedCameraSwipe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbcf4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112762580) = 0;
  return;
}



/* Entry: 106ffbd04; end: 106ffbd3b; -[SCCameraViewController setSnapBackQuickTapDismissTimeout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbd04(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127624c0) = param_1;
  *(undefined8 *)(param_2 + _DAT_1127624c4) = 0xbff0000000000000;
  *(undefined8 *)(param_2 + _DAT_1127624c8) = 0xbff0000000000000;
  *(undefined8 *)(param_2 + _DAT_1127625c4) = 0;
  *(undefined1 *)(param_2 + _DAT_1127625c8) = 0;
  return;
}



/* Entry: 106ffbd3c; end: 106ffbd3f; -[SCCameraViewController insetPresentationContainerView] */

void FUN_106ffbd3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 106ffbd40; end: 106ffbd4f; -[SCCameraViewController insetPresentationViewfinderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624bc),PTR_s_cameraView_1125a87f8);
  return;
}



/* Entry: 106ffbd50; end: 106ffbd87; -[SCCameraViewController setSnapBackInsetPresentationLayoutCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127625cc);
  *(undefined8 *)(param_1 + _DAT_1127625cc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ffbd88; end: 106ffbdcb; -[SCCameraViewController insetPresentationViewfinderLayoutGuide] */

void FUN_106ffbd88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2bb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ffbdcc; end: 106ffbe0f; -[SCCameraViewController isInsetPresentationCaptureInFlight] */

ulong FUN_106ffbdcc(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c2687e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c10a560(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c123d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recording_112626970);
    return param_1;
  }
  return 1;
}



/* Entry: 106ffbe10; end: 106ffbe1f; -[SCCameraViewController isPresentingSnapBackInsetStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ffbe10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127625b0);
}



/* Entry: 106ffbe20; end: 106ffbe2f; -[SCCameraViewController setIsSnapBackReplyCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbe20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127625d0) = param_3;
  return;
}



/* Entry: 106ffbe30; end: 106ffbe5b; -[SCCameraViewController configureQuickTapDismissWindowWithTimeout:fasterDismissEnabled:] */

void FUN_106ffbe30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c203a80();
                    /* WARNING: Could not recover jumptable at 0x00010c203a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSnapBackFasterDismissEnabled__11265e8b0,param_3);
  return;
}



/* Entry: 106ffbe5c; end: 106ffbf83; -[SCCameraViewController prepareForInsetPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbe5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_1127625d0) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_1127625b0) = 1;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar3);
    _objc_release(puVar1);
    lVar3 = (long)_DAT_1127624bc;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf2b940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf2bac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf2a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf2a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106ffbf84; end: 106ffc08b; -[SCCameraViewController transitionFromInsetPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffbf84(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_1127625b0) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127625d4);
  *(undefined8 *)(param_1 + _DAT_1127625d4) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf2bac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),
             PTR_s_startHandlingVolumeButtonEventsI_1126715d8,param_1);
  return;
}



/* Entry: 106ffc08c; end: 106ffc103; -[SCCameraViewController performInsetPresentationCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc08c(ulong param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + (long)_DAT_1127625b0) == '\x01') &&
     (uVar1 = param_1, func_0x00010c075a40(), (uVar1 & 1) == 0)) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ef20(param_1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf312d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_captureStillImage_1125a9e58);
    return;
  }
  return;
}



/* Entry: 106ffc104; end: 106ffc2b3; -[SCCameraViewController beginInsetPresentationVideoCaptureWithRecordingDidBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc104(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + (long)_DAT_1127625b0) == '\x01') &&
     (uVar1 = param_1, func_0x00010c075a40(), (uVar1 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127625d4);
    *(undefined8 *)(param_1 + (long)_DAT_1127625d4) = uVar2;
    _objc_release(uVar8);
    func_0x00010c251820(param_1,param_2,0);
    func_0x00010c109720(param_1,param_2,0);
    uVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf2af60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
    func_0x00010c2993e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x00010baef3d4(0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010be3e5c0(param_1);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c150aa0();
    func_0x0001005d3b6c();
    func_0x00010c0a2440(uVar4,param_2,uVar2,&PTR____CFConstantStringClassReference_110f4c1f8,uVar5,0
                        ,uVar6,0,uVar7,0);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ffc2b4; end: 106ffc34f; -[SCCameraViewController endInsetPresentationVideoCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc2b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_1127625b0) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127625d4);
    *(undefined8 *)(param_1 + _DAT_1127625d4) = 0;
    _objc_release(uVar1);
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256760();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106ffc350; end: 106ffc3db; -[SCCameraViewController requestInsetPresentationExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc350(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_1127625b0) == '\x01') {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitModularCamera_112560a08);
      return;
    }
    *(undefined1 *)(param_1 + _DAT_112762594) = 1;
  }
  return;
}



/* Entry: 106ffc3dc; end: 106ffc4db; -[SCCameraViewController _clearSnapBackDismissWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc3dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + _DAT_1127624c4) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + _DAT_1127624c8) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + _DAT_1127625c4) = 0;
  *(undefined1 *)(param_1 + _DAT_1127625c8) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2820();
  _objc_release(uVar1);
  lVar3 = (long)_DAT_1127625c0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_1 + _DAT_1127625bc) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_1127625bc) = 0;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf88580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar2);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106ffc4dc; end: 106ffc5fb; -[SCCameraViewController _isSnapBackDismissEligibleInitialTapAtPoint:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106ffc4dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_5 != 0) {
    lVar6 = (long)_DAT_1127624bc;
    uVar1 = *(ulong *)(param_3 + lVar6);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c102c20(param_1,param_2);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = *(ulong *)(param_3 + lVar6);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0982a0();
      if ((uVar2 & 1) == 0) {
        _objc_release(uVar1);
      }
      else {
        lVar6 = param_3;
        func_0x00010bdc5260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        if (lVar6 != 0) {
          return 0;
        }
      }
      uVar3 = *(undefined8 *)(param_3 + _DAT_1127624e4);
      func_0x00010bfc1900(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d4030;
      func_0x00010bf5a420(param_1,param_2,PTR_PTR_1126d4030);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c22e520(uVar3,param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      return (uint)uVar5 ^ 1;
    }
  }
  return 0;
}



/* Entry: 106ffc5fc; end: 106ffc763; -[SCCameraViewController _recordSnapBackInitialTouchIfNeeded:recognizer:point:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc5fc(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = param_5;
  func_0x00010c0fa9c0();
  if (lVar5 != 0) goto LAB_106ffc73c;
  func_0x00010c2709c0(param_5);
  lVar5 = (long)_DAT_1127625c4;
  dVar8 = *(double *)(param_3 + lVar5);
  bVar1 = true;
  if ((dVar8 != 0.0) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
    bVar1 = dVar8 == dVar7;
  }
  if (bVar1) {
    if (dVar8 == 0.0) {
      lVar6 = (long)_DAT_1127624c4;
      dVar8 = *(double *)(param_3 + lVar6);
      if (0.0 < dVar8) {
        _CACurrentMediaTime();
        if (*(double *)(param_3 + lVar6) < dVar8) goto LAB_106ffc734;
        if (*(double *)(param_3 + (long)_DAT_1127624c8) <= dVar7) {
          *(double *)(param_3 + lVar5) = dVar7;
          *(undefined1 *)(param_3 + (long)_DAT_1127625c8) = 0;
          dVar8 = dVar7;
          goto LAB_106ffc6d4;
        }
      }
      *(undefined1 *)(param_3 + (long)_DAT_1127625c8) = 0;
      goto LAB_106ffc73c;
    }
LAB_106ffc6d4:
    if (dVar8 != dVar7) goto LAB_106ffc73c;
    uVar2 = *(undefined8 *)(param_3 + (long)_DAT_1127624bc);
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c080a80();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_106ffc73c;
    uVar4 = param_3;
    func_0x00010be43cc0(param_1,param_2,param_3,param_4,param_7);
    *(char *)(param_3 + (long)_DAT_1127625c8) = (char)uVar4;
    if ((uVar4 & 1) != 0) goto LAB_106ffc73c;
  }
LAB_106ffc734:
  func_0x00010bde0f60(param_3);
LAB_106ffc73c:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106ffc764; end: 106ffc817; -[SCCameraViewController handlePinchFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ffc764(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf43640();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010c064e80(), (uVar1 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_1127624e4);
    func_0x00010bfc1900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4038;
    func_0x00010bf5a2a0(PTR_PTR_1126d4038,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1480(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106ffc818; end: 106ffcaaf; -[SCCameraViewController handlePanFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffc818(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8f820();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((uVar6 & 1) == 0) && (uVar1 = param_1, func_0x00010c064e80(), (int)uVar1 == 0))
  goto LAB_106ffca90;
  uVar1 = param_1;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = param_1;
  func_0x00010c110140();
  if ((uVar4 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfd3560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf926c0();
    if ((uVar6 & 1) != 0) goto LAB_106ffc950;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
LAB_106ffca1c:
    uVar1 = param_1;
    func_0x00010bf43640();
    if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010c064e80(), (uVar1 & 1) == 0)) {
      uVar10 = *(undefined8 *)(param_1 + (long)_DAT_1127624e4);
      func_0x00010bfc1900(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d4040;
      func_0x00010bf5a2a0(PTR_PTR_1126d4040,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd1480(uVar10,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar10);
    }
  }
  else {
LAB_106ffc950:
    uVar6 = uVar2;
    func_0x00010c29f240(uVar2,param_2,param_3);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR_PTR_1126b3858;
      func_0x00010c08fb40(PTR_PTR_1126b3858);
      uVar8 = uVar2;
      func_0x00010c081600(uVar2,param_2,puVar7);
      if ((uVar8 & 1) != 0) {
        uVar9 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
        func_0x00010bf2a1a0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0db620();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b3860;
        func_0x00010c0f35e0(PTR_PTR_1126b3860);
        uVar6 = uVar2;
        func_0x00010bf1d560(uVar2,param_2,uVar10,puVar7);
        _objc_release(uVar10);
        _objc_release(uVar9);
      }
    }
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    if ((uVar6 & 1) == 0) goto LAB_106ffca1c;
  }
  _objc_release(uVar2);
LAB_106ffca90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ffcab0; end: 106ffcfd7; -[SCCameraViewController handleTapFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffcab0(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_5);
  uVar7 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar7);
  _objc_release(uVar7);
  uVar1 = param_3;
  func_0x00010c2687e0();
  if ((uVar1 & 1) != 0) goto LAB_106ffcf6c;
  lVar8 = (long)_DAT_1127624bc;
  uVar2 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  dVar9 = param_1;
  func_0x00010c102ba0(param_1,param_2);
  _objc_release(uVar2);
  if ((int)uVar7 == 0) {
LAB_106ffcdd4:
    if ((*(char *)(param_3 + (long)_DAT_1127625c8) == '\x01') &&
       (dVar10 = *(double *)(param_3 + (long)_DAT_1127624c4), _CACurrentMediaTime(), dVar9 < dVar10)
       ) {
      uVar5 = *(ulong *)(param_3 + lVar8);
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c080a80();
      if ((uVar1 & 1) != 0) {
        uVar6 = *(ulong *)(param_3 + lVar8);
        func_0x00010c0b7e80();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010c0982a0();
        if ((uVar1 & 1) == 0) {
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        else {
          uVar1 = param_3;
          func_0x00010bdc5260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if (uVar1 != 0) goto LAB_106ffce74;
        }
        func_0x00010bde0f60(param_3);
        uVar1 = param_3;
        func_0x00010c0b3a20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0abd60();
        _objc_release(uVar1);
        func_0x00010be0c1a0(param_3);
        goto LAB_106ffcf6c;
      }
      _objc_release(uVar5);
    }
LAB_106ffce74:
    uVar1 = param_3;
    func_0x00010bdc5260();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 != 0) && (uVar5 = uVar1, func_0x00010c1378c0(), (int)uVar5 != 0)) {
      uVar7 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      param_1 = param_1 / dVar9;
      uVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetHeight();
      _objc_release(uVar2);
      _objc_release(uVar7);
      uVar5 = param_3;
      func_0x00010c0926e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13c080(param_1,param_2 / dVar9);
      _objc_release(uVar5);
    }
    uVar7 = *(undefined8 *)(param_3 + (long)_DAT_1127624e4);
    func_0x00010bfc1900(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4048;
    func_0x00010bf5a2a0(PTR_PTR_1126d4048,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1480(uVar7,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar7);
  }
  else {
    uVar1 = param_3;
    func_0x00010be3f3a0();
    if ((int)uVar1 == 0) {
LAB_106ffcd2c:
      uVar1 = param_3;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c270700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf926c0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((int)uVar4 == 0) goto LAB_106ffcdd4;
      func_0x00010bf29620(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c270700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beec500();
      uVar1 = param_3;
    }
    else {
      uVar1 = param_3 + (long)_DAT_112762568;
      _objc_loadWeakRetained();
      uVar5 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf4fda0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if (uVar6 == 4) {
        uVar1 = param_3;
        func_0x00010beb7420();
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar1;
          func_0x00010bf4fca0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010bf78ec0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar1);
          if ((uVar4 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0926e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar1;
            func_0x00010c0984a0();
            _objc_release(uVar1);
            if ((uVar5 & 1) == 0) {
              puVar3 = PTR_PTR_1126affa8;
              func_0x00010c22bc20(PTR_PTR_1126affa8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f8760();
              _objc_release(puVar3);
              uVar1 = param_3;
              func_0x00010bf29620(param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar1;
              func_0x00010bf4fca0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010bfa1820();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1151a0();
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar1);
              func_0x00010be3be40(param_3);
            }
          }
          goto LAB_106ffcf6c;
        }
        goto LAB_106ffcd2c;
      }
      if ((uVar6 & 0xfffffffffffffffd) != 1) goto LAB_106ffcd2c;
      func_0x00010be0a4a0(param_3);
      puVar3 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar3);
      func_0x00010bf29620(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c115080();
      uVar1 = param_3;
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
LAB_106ffcf6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106ffcfd8; end: 106ffcfdb; -[SCCameraViewController setSwipeNavigationEnabled:] */

void FUN_106ffcfd8(void)

{
  return;
}



/* Entry: 106ffcfdc; end: 106ffcfdf; -[SCCameraViewController cameraNavigationItem] */

void FUN_106ffcfdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sc_navigationItem_DEPRECATED_112630fb8);
  return;
}



/* Entry: 106ffcfe0; end: 106ffd047; -[SCCameraViewController stopDeviceMotionUpdates] */

void FUN_106ffcfe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2726c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255e20();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffd048; end: 106ffd0ab; -[SCCameraViewController permissionStateMonitor] */

void FUN_106ffd048(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf2b060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ffd0ac; end: 106ffd1b3; -[SCCameraViewController startCamera:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd0ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624cc);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c24e2a0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ffd1b4; end: 106ffd21f;  */

void FUN_106ffd1b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      func_0x00010c224240(lVar1);
      func_0x00010c0e36c0(lVar1);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ffd220; end: 106ffd3a7; -[SCCameraViewController stopCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd220(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c082b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    func_0x00010c1388e0(*(undefined8 *)(param_1 + _DAT_1127624cc));
    _objc_initWeak(auStack_48,param_1);
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c069d20(0,lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ffd3a8; end: 106ffd413;  */

void FUN_106ffd3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      func_0x00010c224240(lVar1);
      func_0x00010c0e36c0(lVar1);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ffd414; end: 106ffd5b3; -[SCCameraViewController stopCameraSofty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd414(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c082b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    func_0x00010c1388e0(*(undefined8 *)(param_2 + _DAT_1127624cc));
    _objc_initWeak(auStack_58,param_2);
    func_0x00010bf2a5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2afa0(PTR_PTR_1126c8130);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010c069d20(param_1,lVar1);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106ffd5b4; end: 106ffd61f;  */

void FUN_106ffd5b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((int)param_2 != 0) {
      func_0x00010c224240(lVar1);
      func_0x00010c0e36c0(lVar1);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


