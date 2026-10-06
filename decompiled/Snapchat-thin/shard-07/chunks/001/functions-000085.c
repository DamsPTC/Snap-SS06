/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105192c94; end: 105192c9b; -[SCVoiceMLLensPresenter _resetTapToEnter] */

void FUN_105192c94(long param_1)

{
  *(undefined1 *)(param_1 + 0x42) = 0;
  return;
}



/* Entry: 105192c9c; end: 105192cc7; -[SCVoiceMLLensPresenter _createOverlayContainer] */

void FUN_105192c9c(void)

{
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105192cc8; end: 105192d1f; -[SCVoiceMLLensPresenter _didTapDialogOkay] */

void FUN_105192cc8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x50) = 1;
  func_0x00010be90600();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be029a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7a430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentBannerIfNecessary_11257c2a8);
  return;
}



/* Entry: 105192d20; end: 105192d6b; -[SCVoiceMLLensPresenter _didTapDialogCancel] */

void FUN_105192d20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x51) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be029a0(param_1,param_2,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105192d6c; end: 105192db7; -[SCVoiceMLLensPresenter _didTapToEnter] */

void FUN_105192d6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x52) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be037e0(param_1,param_2,1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105192db8; end: 105192e73; -[SCVoiceMLLensPresenter _presentVoiceActivityWavesIfNecessary] */

void FUN_105192db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x43) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b58f8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x78),param_2,0);
  func_0x00010c161020(*(undefined8 *)(param_1 + 0x78),param_2,
                      &PTR____CFConstantStringClassReference_110dc95f8);
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c222380();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar2);
  func_0x00010c14c940(*(undefined8 *)(param_1 + 0x78));
  *(undefined1 *)(param_1 + 0x43) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105192e74; end: 105192f47; -[SCVoiceMLLensPresenter _dismissVoiceActivityWavesIfNecessary] */

void FUN_105192e74(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x43) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf6f440(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105192f48; end: 105192f7b;  */

void FUN_105192f48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be94520(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105192f7c; end: 105192f83; -[SCVoiceMLLensPresenter _resetVoiceActivityWaves] */

void FUN_105192f7c(long param_1)

{
  *(undefined1 *)(param_1 + 0x43) = 0;
  return;
}



/* Entry: 105192f84; end: 105192f8b; -[SCVoiceMLLensPresenter _didReceiveVoiceActivitySample:] */

void FUN_105192f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_renderActivitySample__1126297e0);
  return;
}



/* Entry: 105192f8c; end: 105192fcb; -[SCVoiceMLLensPresenter _reportVoiceControlOnboardingDialogAccepted] */

void FUN_105192f8c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x53) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105192fcc; end: 105193033; -[SCVoiceMLLensPresenter _reportVoiceControlOnboardingBannerShown] */

void FUN_105192fcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0920();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2240a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105193034; end: 1051930bb; -[SCVoiceMLLensPresenter _voicemlLensLogger:] */

void FUN_105193034(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60();
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051930bc; end: 1051930cb; -[SCVoiceMLLensPresenter _resetAnalytics] */

void FUN_1051930bc(long param_1)

{
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  return;
}



/* Entry: 1051930cc; end: 105193197; -[SCVoiceMLLensPresenter reportDialogDismissalAnalytics:] */

void FUN_1051930cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  if (*(char *)(param_1 + 0x44) == '\x01') {
    func_0x00010beea3c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5ca0();
  }
  else if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010beea3c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5c20();
  }
  else {
    cVar1 = *(char *)(param_1 + 0x51);
    func_0x00010beea3c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      func_0x00010c0a5c40();
    }
    else {
      func_0x00010c0a5c00();
    }
  }
  _objc_release(lVar2);
  func_0x00010be92220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105193198; end: 105193237; -[SCVoiceMLLensPresenter reportTapToEnterDismissalAnalytics:] */

void FUN_105193198(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  if (*(char *)(param_1 + 0x44) == '\x01') {
    func_0x00010beea3c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5b80();
  }
  else {
    cVar1 = *(char *)(param_1 + 0x52);
    func_0x00010beea3c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      func_0x00010c0a5b60();
    }
    else {
      func_0x00010c0a5be0();
    }
  }
  _objc_release(lVar2);
  func_0x00010be92220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105193238; end: 10519333f; -[SCVoiceMLLensPresenter registerToApplicationLifecycleNotifications] */

void FUN_105193238(void)

{
  undefined *puVar1;
  
  func_0x00010c071800();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105193340; end: 10519337f; -[SCVoiceMLLensPresenter resignFromApplicationLifecycleNotifications] */

void FUN_105193340(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105193380; end: 1051933c7; -[SCVoiceMLLensPresenter _applicationWillTerminate] */

void FUN_105193380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03b00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051933c8; end: 10519344f; -[SCVoiceMLLensPresenter _sceneDidDisconnect] */

void FUN_1051933c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be03b00(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105193450; end: 10519345b; -[SCVoiceMLLensPresenter _applicationWillResignActive] */

void FUN_105193450(long param_1)

{
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}



/* Entry: 10519345c; end: 1051934df; -[SCVoiceMLLensPresenter _applicationDidBecomeActive] */

void FUN_10519345c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = param_1;
    func_0x00010be45900(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    if ((int)lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c094540(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        func_0x00010be09240(param_1);
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051934e0; end: 1051934e3; -[SCVoiceMLLensPresenter didTapOKButton] */

void FUN_1051934e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapDialogOkay_11255dcf0);
  return;
}



/* Entry: 1051934e4; end: 1051934e7; -[SCVoiceMLLensPresenter didTapCancelButton] */

void FUN_1051934e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapDialogCancel_11255dce8);
  return;
}



/* Entry: 1051934e8; end: 10519351b; -[SCVoiceMLLensPresenter didTapOutsideTooltip] */

void FUN_1051934e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010beea3c0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519351c; end: 10519352b; -[SCVoiceMLLensPresenter _shouldPresentLegacyFTUE] */

bool FUN_10519351c(long param_1)

{
  return *(int *)(param_1 + 0xb8) == 2;
}



/* Entry: 10519352c; end: 105193983; -[SCVoiceMLLensPresenter _v2_presentDialog] */

void FUN_10519352c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  FUN_105196228();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_90 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_initWeak(auStack_a8,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105193984;
  puStack_b8 = &UNK_11084d858;
  _objc_retain(puVar2);
  puStack_b0 = puVar2;
  func_0x00010bfa54a0(uVar8);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126aed70;
  func_0x0001051961b0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar9;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105193a30;
  puStack_e0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar4 = PTR_PTR_1126aed70;
  func_0x0001051961c8();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar9;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105193b0c;
  puStack_108 = &UNK_1108482a8;
  puVar11 = auStack_a8;
  _objc_copyWeak(auStack_100);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar9;
  func_0x000105196180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105196198();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar3;
  puStack_98 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x00010bfefea0();
  puVar12 = (undefined8 *)(param_1 + 200);
  uVar8 = *puVar12;
  *puVar12 = puVar9;
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(*puVar12);
  func_0x00010c211b40(*(undefined8 *)(param_1 + 200));
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar8);
  *(undefined1 *)(param_1 + 0x41) = 1;
  func_0x00010beea3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5c60();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  lVar10 = lVar1;
  __Unwind_Resume();
  pcStack_138 = FUN_105193984;
  puStack_150 = puVar2;
  lStack_148 = lVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  if (puVar11 != (undefined1 *)0x0) {
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_105193a28;
    puStack_168 = &UNK_110841f80;
    uVar8 = *(undefined8 *)(lVar10 + 0x20);
    _objc_retain(uVar8);
    uStack_160 = uVar8;
    _objc_retain(puVar11);
    puStack_158 = puVar11;
    func_0x0001000d76cc("APPSTORE",&puStack_180);
    _objc_release(puStack_158);
    _objc_release(uStack_160);
  }
  _objc_release(puVar11);
  return;
}



/* Entry: 105193984; end: 105193a27;  */

void FUN_105193984(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105193a28;
    puStack_38 = &UNK_110841f80;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    _objc_retain(param_2);
    lStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
    _objc_release(uStack_30);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105193a28; end: 105193a2f;  */

void FUN_105193a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105193a30; end: 105193ad7;  */

void FUN_105193a30(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105193ad8;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105193ad8; end: 105193b0b;  */

void FUN_105193ad8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be00d40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105193b0c; end: 105193bb3;  */

void FUN_105193b0c(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105193bb4;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105193bb4; end: 105193be7;  */

void FUN_105193bb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be00d20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105193be8; end: 105193bf7; -[SCVoiceMLLensPresenter dialogDidDismiss:] */

void FUN_105193be8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105193bf8; end: 105193c77; -[SCVoiceMLLensPresenter _createModalContainer] */

void FUN_105193bf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105193c78; end: 105193d9b; -[SCVoiceMLLensPresenter _v2_dismissDialogIfNecessary:dismissedLensId:] */

void FUN_105193c78(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0xe0) & 1) == 0)) {
    func_0x00010c132b00(param_1);
    _objc_initWeak(auStack_38,param_1);
    *(undefined1 *)(param_1 + 0xe0) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_4);
    uStack_40 = param_3;
    func_0x00010bf6f440(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105193d9c; end: 105193e0f;  */

void FUN_105193d9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xe0) = 0;
    func_0x00010be929e0(lVar1);
    func_0x00010be6cb40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bec6d80(lVar1);
      func_0x00010bec6b80(lVar1);
      func_0x00010bec6e00(lVar1);
      func_0x00010be09240(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105193e10; end: 105193e3b; -[SCVoiceMLLensPresenter _v2_resetDialog] */

void FUN_105193e10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}



/* Entry: 105193e3c; end: 105193f73; -[SCVoiceMLLensPresenter .cxx_destruct] */

void FUN_105193e3c(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105193f74; end: 10519410f; -[SCVoiceMLLensTooltipController initWithLensPerformerProvider:featureContainerView:delegate:vmlBitmojiFetcher:] */

undefined8 *
FUN_105193f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e6a78;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105194110; end: 10519415f;  */

void FUN_105194110(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf0f00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105194160; end: 1051941a7; -[SCVoiceMLLensTooltipController mainQueuePerformer] */

void FUN_105194160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051941a8; end: 1051942e7; -[SCVoiceMLLensTooltipController tooltipView] */

void FUN_1051941a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR_PTR_1126b5908;
    _objc_alloc();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1051942e8;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0316e0();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1051942e8; end: 10519434f;  */

void FUN_1051942e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be00f60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105194350; end: 1051944a3; -[SCVoiceMLLensTooltipController addTooltip] */

void FUN_105194350(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010c0b6bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1051944a4;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010bfa54a0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1051944a4; end: 1051944d7;  */

void FUN_1051944a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdc8ca0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051944d8; end: 1051945af;  */

void FUN_1051944d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0b6bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1051945b0; end: 10519460b;  */

void FUN_1051945b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c2740e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1710e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519460c; end: 105194687; -[SCVoiceMLLensTooltipController removeTooltip] */

void FUN_10519460c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105194688; end: 10519468f;  */

void FUN_105194688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeTooltipSafe_112581068);
  return;
}



/* Entry: 105194690; end: 105194ba7; -[SCVoiceMLLensTooltipController _setupTooltipIfNeeded] */

void FUN_105194690(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c222380(puVar2);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar3,param_6,puVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010befbb60(puVar3,param_6,puVar5);
  lVar6 = param_5;
  func_0x00010c2740e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar5,param_6,lVar6);
  func_0x000100594f4c();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar7 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010bf30a20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cd20();
  dVar28 = param_1 + param_3 + param_4 + 16.0;
  _objc_release(uVar7);
  func_0x00010c14c960(0,0,dVar28,0,puVar5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar26;
  func_0x00010bf493c0(0,lVar26,param_6,puVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  lStack_a0 = lVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf348e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 0.5;
  dVar28 = dVar28 * 0.5;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  lVar12 = lVar10;
  func_0x00010bf493c0(dVar28 - dVar27,lVar10,param_6,puVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  lStack_98 = lVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010c2a5060(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf49520(0,lVar13,param_6,puVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar6;
  lStack_90 = lVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar5;
  func_0x00010bfe0660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 0.0;
  lVar18 = lVar16;
  func_0x00010bf49520(0,lVar16,param_6,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar19);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar26);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010befbb60(puVar5,param_6,puVar8);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar11 = puVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar17 = puVar11;
  func_0x00010bf493c0(dVar28 - dVar27,puVar11,param_6,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar8;
  puStack_b8 = puVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar5;
  func_0x00010bf34860(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493a0(puVar19,param_6,puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar8;
  puStack_b0 = puVar21;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493a0(puVar22,param_6,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_b8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar25);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar11);
  uVar7 = *(undefined8 *)(param_5 + 0x38);
  *(undefined **)(param_5 + 0x38) = puVar2;
  _objc_release(uVar7);
  _objc_release(puVar8);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)(puVar3 + 0x38);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar26;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar26);
  if (lVar6 != 0) {
    return;
  }
  func_0x00010beb0ae0(puVar3);
  uVar7 = *(undefined8 *)(puVar3 + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(puVar3 + 0x38);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105194ba8; end: 105194c57; -[SCVoiceMLLensTooltipController _addTooltipSafe] */

void FUN_105194ba8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010beb0ae0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105194c58; end: 105194cdf; -[SCVoiceMLLensTooltipController _removeTooltipSafe] */

void FUN_105194c58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105194ce0; end: 105194d0b; -[SCVoiceMLLensTooltipController _createOverlayContainer] */

void FUN_105194ce0(void)

{
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105194d0c; end: 105194d37; -[SCVoiceMLLensTooltipController _didTapOkay] */

void FUN_105194d0c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105194d38; end: 105194d63; -[SCVoiceMLLensTooltipController _didTapCancel] */

void FUN_105194d38(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105194d64; end: 105194d8f; -[SCVoiceMLLensTooltipController _didTapOutsideTooltip] */

void FUN_105194d64(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105194d90; end: 105194df7; -[SCVoiceMLLensTooltipController .cxx_destruct] */

void FUN_105194d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105194df8; end: 105194ed3; -[SCVoiceMLLensTooltipView initWithOnSubmitBlock:onCancelBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105194df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6a80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e5e4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e5e4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e5e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e5e8) = uVar2;
    _objc_release(uVar3);
    func_0x00010be3bc80(puVar1);
    func_0x00010beabc80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105194ed4; end: 105195817; -[SCVoiceMLLensTooltipView _initializeSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105194ed4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bdee980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493c0(0x4058800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010bf493c0(0xc058800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdf4ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar14);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bdece80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf1ff80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar15 = param_1;
  func_0x00010bdf0b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + _DAT_11271e5ec,lVar15);
  func_0x00010befbb60(param_1);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010bf493c0(0x403b000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar15;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar15;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar7);
  lVar16 = param_1;
  func_0x00010bdebc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + _DAT_11271e5f0,lVar16);
  func_0x00010befbb60(param_1);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar16;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar15;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar16;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar4;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar14);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c219b60();
  puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(lVar1);
  _objc_release(puVar18);
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105195818; end: 10519588b; -[SCVoiceMLLensTooltipView _setupContinerUI] */

void FUN_105195818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519588c; end: 10519589f; -[SCVoiceMLLensTooltipView _didTapOkeyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519588c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010519589c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_11271e5e4) + 0x10))();
  return;
}



/* Entry: 1051958a0; end: 1051958b3; -[SCVoiceMLLensTooltipView _didTapCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051958a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051958b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_11271e5e8) + 0x10))();
  return;
}



/* Entry: 1051958b4; end: 105195a7f; -[SCVoiceMLLensTooltipView _createIllustrationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051958b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  FUN_105196228();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c182220(puVar2,param_2,1);
  func_0x00010c219b60(puVar2,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_88 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar10 = (long)_DAT_11271e5f4;
  _objc_retain(puVar2);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar9);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new(PTR_PTR_1126aea58);
    func_0x00010c213040();
    func_0x00010c21ad00(puVar2,param_2,0x16);
    func_0x00010bdf7b40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1bdb00(puVar2,param_2,5);
    func_0x00010c1cfce0(puVar2,param_2,0);
    puVar3 = puVar2;
    func_0x00010c219b60(puVar2,param_2,0);
    FUN_105196180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105195a80; end: 105195b63; -[SCVoiceMLLensTooltipView _createTitleLabel] */

void FUN_105195a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  func_0x00010c213040();
  func_0x00010c21ad00(puVar1,param_2,0x16);
  func_0x00010bdf7b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_2,5);
  func_0x00010c1cfce0(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x00010c219b60(puVar1,param_2,0);
  FUN_105196180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105195b64; end: 105195d23; -[SCVoiceMLLensTooltipView _createDescriptionLabel] */

void FUN_105195b64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x000105196198();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  func_0x00010c1bdc00(0x3ff3851eb851eb85);
  func_0x00010c166c00(puVar2,param_2,1);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uStack_58 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,uVar1,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  func_0x00010c213040(puVar4,param_2,1);
  func_0x00010bdf7b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4,param_2,param_1);
  _objc_release(param_1);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1bdb00(puVar4,param_2,0);
  func_0x00010c219b60(puVar4,param_2,0);
  func_0x00010c1cfce0(puVar4,param_2,0);
  func_0x00010c16b720(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126af938;
    _objc_opt_new(PTR_PTR_1126af938);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6d);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c271420(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar4,param_2,0);
    func_0x00010c161020(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc9578);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar4,param_2,puVar2,0);
    _objc_release(puVar2);
    func_0x0001051961b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar4,param_2,puVar2,0);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bfe0660(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befbd60(puVar4,param_2,uVar1,PTR_s__didTapOkeyButton_1125281b0,0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105195d24; end: 105195ed3; -[SCVoiceMLLensTooltipView _createOkayButton] */

void FUN_105195d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_opt_new(PTR_PTR_1126af938);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c161020(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc9578);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x0001051961b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__didTapOkeyButton_1125281b0,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105195ed4; end: 105196083; -[SCVoiceMLLensTooltipView _createCancelButton] */

void FUN_105195ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_opt_new(PTR_PTR_1126af938);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c161020(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc9598);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x0001051961c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__didTapCancelButton_1125281b8,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105196084; end: 105196093; -[SCVoiceMLLensTooltipView _grayUIColor] */

void FUN_105196084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x6c);
  return;
}



/* Entry: 105196094; end: 1051960a3; -[SCVoiceMLLensTooltipView _darkGrayUIColor] */

void FUN_105196094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbb);
  return;
}



/* Entry: 1051960a4; end: 105196107; -[SCVoiceMLLensTooltipView _lightGrayUIColorWithAlpha:] */

void FUN_1051960a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xc4c4c4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105196108; end: 105196117; -[SCVoiceMLLensTooltipView setBitmojiImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105196108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e5f4),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 105196118; end: 10519617f; -[SCVoiceMLLensTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105196118(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e5f4,0);
  _objc_destroyWeak(param_1 + _DAT_11271e5f0);
  _objc_destroyWeak(param_1 + _DAT_11271e5ec);
  _objc_storeStrong(param_1 + _DAT_11271e5e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e5e4,0);
  return;
}



/* Entry: 105196180; end: 105196227;  */

void FUN_105196180(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9618;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc9618,
                      &PTR____CFConstantStringClassReference_110dc9638,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105196228; end: 10519631f;  */

void FUN_105196228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126b5910;
  _objc_opt_class(PTR_PTR_1126b5910);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc9718,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105196320; end: 1051965fb; -[SCVoiceMLLensSystemCommandsExecutorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105196320(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1051965fc;
  puStack_90 = &UNK_11086dac8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5918;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11271e5f8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271e5fc;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c2a0760();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271e600;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271e604;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271e608;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c094480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022fe0();
  lVar16 = (long)_DAT_11271e60c;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar3;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1051965fc; end: 10519669b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051965fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11271e61c;
    _objc_loadWeakRetained(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10519669c; end: 1051966f3; -[SCVoiceMLLensSystemCommandsExecutorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519669c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_11271e60c));
  puStack_28 = PTR_PTR_1126e6a88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051966f4; end: 10519672b; -[SCVoiceMLLensSystemCommandsExecutorEntryPoint _createDeeplinkSharingLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051966f4(void)

{
  _objc_alloc(PTR_PTR_1126b5920);
  func_0x00010c0444e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10519672c; end: 1051967db; -[SCVoiceMLLensSystemCommandsExecutorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519672c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e610,0);
  _objc_destroyWeak(param_1 + _DAT_11271e600);
  _objc_destroyWeak(param_1 + _DAT_11271e604);
  _objc_destroyWeak(param_1 + _DAT_11271e61c);
  _objc_destroyWeak(param_1 + _DAT_11271e608);
  _objc_destroyWeak(param_1 + _DAT_11271e5fc);
  _objc_destroyWeak(param_1 + _DAT_11271e5f8);
  _objc_destroyWeak(param_1 + _DAT_11271e618);
  _objc_destroyWeak(param_1 + _DAT_11271e614);
  _objc_storeStrong(param_1 + _DAT_11271e620,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e60c,0);
  return;
}



/* Entry: 1051967dc; end: 105196973; -[SCVoiceMLLensSystemCommandsExecutor initWithLensCarouselManager:lensFavoritesServices:vmlNotificationsPresenter:deeplinkSharingLauncher:offPlatformLinkGenerationService:navigationDelegate:lensIconRepository:] */

undefined1 *
FUN_1051967dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6a90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105196974; end: 1051969c7; -[SCVoiceMLLensSystemCommandsExecutor _registerForVoiceMLSystemCommandsNotifications] */

void FUN_105196974(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051969c8; end: 105196a07; -[SCVoiceMLLensSystemCommandsExecutor _resignFromVoiceMLSystemCommandsNotifications] */

void FUN_1051969c8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105196a08; end: 105196a2b; -[SCVoiceMLLensSystemCommandsExecutor begin] */

void FUN_105196a08(undefined8 param_1)

{
  func_0x00010bec6fc0();
                    /* WARNING: Could not recover jumptable at 0x00010be89610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerForVoiceMLSystemCommand_11257ff20);
  return;
}



/* Entry: 105196a2c; end: 105196a4f; -[SCVoiceMLLensSystemCommandsExecutor end] */

void FUN_105196a2c(undefined8 param_1)

{
  func_0x00010be94600();
                    /* WARNING: Could not recover jumptable at 0x00010bed21b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unsubscribeFromSelectedLensUpda_112592210);
  return;
}



/* Entry: 105196a50; end: 105196a63; -[SCVoiceMLLensSystemCommandsExecutor _isVoiceMLLens:] */

long FUN_105196a50(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0838d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isVoiceMLLens_1125fe840);
    return param_3;
  }
  return 0;
}



/* Entry: 105196a64; end: 105196ad7; -[SCVoiceMLLensSystemCommandsExecutor _loadLensIconImage:] */

void FUN_105196a64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be4af20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0943c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105196ad8; end: 105196bc7; -[SCVoiceMLLensSystemCommandsExecutor _lensIconKeyFromLensMetadata:] */

void FUN_105196ad8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b5928;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf3ec40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  func_0x00010c024560(puVar1,param_2,lVar2,lVar3,lVar4,0,0,0,lVar5 == 1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105196bc8; end: 105196d13; -[SCVoiceMLLensSystemCommandsExecutor _subscribeOnSelectedLensUpdates] */

void FUN_105196bc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105196d14; end: 105196d87;  */

void FUN_105196d14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdff9c0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105196d88; end: 105196d8f; -[SCVoiceMLLensSystemCommandsExecutor _unsubscribeFromSelectedLensUpdates] */

void FUN_105196d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 105196d90; end: 105196dbf; -[SCVoiceMLLensSystemCommandsExecutor _didReceiveSelectedLens:] */

void FUN_105196d90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105196dc0; end: 105196e4f; -[SCVoiceMLLensSystemCommandsExecutor voiceSystemCommandReceived:] */

void FUN_105196dc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be45900(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010be33400(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105196e50; end: 105196ebf; -[SCVoiceMLLensSystemCommandsExecutor _handleVoiceCommand:] */

void FUN_105196e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc9778);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc9798);
    if ((int)uVar1 != 0) {
      func_0x00010beb1c00(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    func_0x00010bebfe40(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105196ec0; end: 1051970c7; -[SCVoiceMLLensSystemCommandsExecutor _startFavoriteLensFlow:] */

void FUN_105196ec0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c080040();
      if ((int)lVar3 == 0) {
        func_0x00010be4dc80(param_1);
        _objc_initWeak(auStack_68,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c093ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c093c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(uVar2);
        lVar3 = lVar1;
        _objc_retain(lVar1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar7);
        _objc_release(lVar3);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(lVar1);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      else {
        func_0x00010c10b7a0(uVar2);
      }
      _objc_release(uVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051970c8; end: 10519717b;  */

void FUN_1051970c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c252d60();
    if (lVar2 < 2) {
      if ((lVar2 == 0) || (lVar2 == 1)) {
        func_0x00010beb91a0(lVar1);
      }
    }
    else if (lVar2 == 3) {
      func_0x00010be0e680(lVar1);
    }
    else if (lVar2 == 2) {
      func_0x00010c10ca20(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10519717c; end: 105197353; -[SCVoiceMLLensSystemCommandsExecutor _favoriteLens:] */

void FUN_10519717c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105197354;
  puStack_90 = &UNK_11086db58;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar1);
  ppuVar2 = &puStack_a8;
  uStack_88 = uVar1;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c093c60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  _objc_retain(ppuVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar6);
  _objc_release(ppuVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105197354; end: 1051973c7;  */

void FUN_105197354(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010bdfdcc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051973c8; end: 1051973d7;  */

void FUN_1051973c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051973d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1051973d8; end: 105197437; -[SCVoiceMLLensSystemCommandsExecutor _didFavoriteWithResult:expectedStatus:lensFavoritesNotifications:] */

void FUN_1051973d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c252d60(param_3);
  func_0x00010beb9180(param_1,param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


