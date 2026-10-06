/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f93810; end: 104f93823; -[SCMusicPickerContainerTray present] */

void FUN_104f93810(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c10c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentInUIContainer__112620bc8,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104f93824; end: 104f93b93; -[SCMusicPickerContainerTray _installDoneButtonIfNeeded] */

/* WARNING: Possible PIC construction at 0x000104f9393c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104f93940) */

void FUN_104f93824(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (lVar1 == 0) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar1 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(param_1);
      if (lVar2 != 0) {
        puVar4 = PTR_PTR_1126aec40;
        func_0x00010bf25cc0(PTR_PTR_1126aec40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x000107e48100();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216260(puVar4);
        _objc_release(puVar3);
        func_0x00010c20eaa0(puVar4);
        func_0x00010c219b60(puVar4);
        func_0x00010befbd60(puVar4);
        uVar6 = 0;
        goto code_r0x00010c1677c0;
      }
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = *(undefined **)(lVar2 + 0x20);
  uVar6 = 0x3ff0000000000000;
code_r0x00010c1677c0:
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,puVar4,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 104f93b94; end: 104f93b9f;  */

void FUN_104f93b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 104f93ba0; end: 104f93bdf; -[SCMusicPickerContainerTray dismissIfNeeded] */

void FUN_104f93ba0(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
  if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissAnimated__1125be608,0);
  return;
}



/* Entry: 104f93be0; end: 104f93cdf; -[SCMusicPickerContainerTray musicPickerViewController:didUpdateSelection:] */

void FUN_104f93be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f93ce0;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  uStack_48 = param_4;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x58) = ppuVar1;
  _objc_release(uVar2);
  func_0x00010bf83180(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f93ce0; end: 104f93d33;  */

void FUN_104f93ce0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d31c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f93d34; end: 104f93e0b; -[SCMusicPickerContainerTray musicPickerViewControllerDidDismiss:] */

void FUN_104f93d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f93e0c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x58) = ppuVar1;
  _objc_release(uVar2);
  func_0x00010bf83180(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f93e0c; end: 104f93e4f;  */

void FUN_104f93e0c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3140();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f93e50; end: 104f93e7f; -[SCMusicPickerContainerTray musicPickerViewControllerRequestsExpandTray:] */

void FUN_104f93e50(long param_1,undefined8 param_2)

{
  func_0x00010c167420(*(undefined8 *)(param_1 + 0x20),param_2,0x12);
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPosition__1126555c8,0x10);
  return;
}



/* Entry: 104f93e80; end: 104f93eaf; -[SCMusicPickerContainerTray musicPickerViewControllerRequestsCollapseTray:] */

void FUN_104f93e80(long param_1,undefined8 param_2)

{
  func_0x00010c167420(*(undefined8 *)(param_1 + 0x20),param_2,0x1a);
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPosition__1126555c8,8);
  return;
}



/* Entry: 104f93eb0; end: 104f93ebb; -[SCMusicPickerContainerTray musicPickerViewControllerAllowCollapsingTray:] */

void FUN_104f93eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c167430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAllowedPositions__112637728,0x1a);
  return;
}



/* Entry: 104f93ebc; end: 104f93ec3; -[SCMusicPickerContainerTray musicPickerViewControllerIsExpandedTray:] */

undefined1 FUN_104f93ebc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 104f93ec4; end: 104f93f3b; -[SCMusicPickerContainerTray musicPickerViewController:didPreviewTrack:] */

void FUN_104f93ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d31a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f93f3c; end: 104f93fb3; -[SCMusicPickerContainerTray musicPickerViewController:didDownloadTrack:] */

void FUN_104f93f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d3180();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f93fb4; end: 104f9408b; -[SCMusicPickerContainerTray musicPickerViewControllerDidDismissAndPresentEditor:] */

void FUN_104f93fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f9408c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x58) = ppuVar1;
  _objc_release(uVar2);
  func_0x00010bf83180(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f9408c; end: 104f940ff;  */

void FUN_104f9408c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c0d3160();
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f94100; end: 104f94177; -[SCMusicPickerContainerTray musicPickerViewControllerRequestsPausePlayback:pausePlayback:] */

void FUN_104f94100(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d3260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f94178; end: 104f941bb; -[SCMusicPickerContainerTray musicPickerListViewController:selectedTrackId:] */

void FUN_104f94178(long param_1,undefined8 param_2)

{
  func_0x00010c1dee80(*(undefined8 *)(param_1 + 0x20),param_2,8);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d3200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f941bc; end: 104f94293; -[SCMusicPickerContainerTray musicPickerListViewControllerDidDismiss:] */

void FUN_104f941bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f94294;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x58) = ppuVar1;
  _objc_release(uVar2);
  func_0x00010bf83180(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f94294; end: 104f942d7;  */

void FUN_104f94294(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d31e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f942d8; end: 104f94303; -[SCMusicPickerContainerTray tray:positionDidChange:] */

void FUN_104f942d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  
  if (param_4 == 0x10) {
    uVar1 = 1;
  }
  else {
    if (param_4 == 2) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010be3cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__installDoneButtonIfNeeded_11256ccc0);
  return;
}



/* Entry: 104f94304; end: 104f9438f; -[SCMusicPickerContainerTray trayDidDismiss:] */

void FUN_104f94304(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = 1;
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x58) == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3140();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d31e0();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x58) + 0x10))();
    lVar1 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,0);
  return;
}



/* Entry: 104f94390; end: 104f94443; -[SCMusicPickerContainerTray _trayHostHeight] */

undefined8 FUN_104f94390(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_2 = param_2 + 0x40;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(puVar3);
  }
  else {
    func_0x00010bf20c00(lVar2);
    _CGRectGetHeight();
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 104f94444; end: 104f944c7; -[SCMusicPickerContainerTray tray:heightForPosition:] */

double FUN_104f94444(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010becf800();
  dVar2 = -1.0;
  if (param_5 == 0x10) {
    dVar1 = param_1;
    func_0x00010c0c2380(*(undefined8 *)(param_2 + 0x30));
    if (0.0 < dVar1) {
      func_0x00010c0c2380(*(undefined8 *)(param_2 + 0x30));
      dVar2 = param_1 - dVar1;
    }
  }
  else if ((param_5 == 8) &&
          (dVar1 = param_1, func_0x00010bf69800(*(undefined8 *)(param_2 + 0x30)), 0.0 < dVar1)) {
    func_0x00010bf69800(*(undefined8 *)(param_2 + 0x30));
    dVar2 = param_1 * dVar1;
  }
  return dVar2;
}



/* Entry: 104f944c8; end: 104f944cf; -[SCMusicPickerContainerTray showConfirmButton] */

undefined1 FUN_104f944c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 104f944d0; end: 104f944d7; -[SCMusicPickerContainerTray setShowConfirmButton:] */

void FUN_104f944d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 104f944d8; end: 104f94557; -[SCMusicPickerContainerTray .cxx_destruct] */

void FUN_104f944d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f94558; end: 104f945fb; -[SCMusicPickerContainerV2 initWithMusicPickerV2ViewController:uiContainer:] */

undefined1 *
FUN_104f94558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e55a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f945fc; end: 104f946cb; -[SCMusicPickerContainerV2 present] */

void FUN_104f945fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c18f840(*(undefined8 *)(param_1 + 8),param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cb780(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4c20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 104f946cc; end: 104f9472f; -[SCMusicPickerContainerV2 dismissIfNeeded] */

void FUN_104f946cc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07b60();
  _objc_release(puVar1);
  func_0x00010be03c20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfd1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleNativeTeardown_1125d1fe8);
  return;
}



/* Entry: 104f94730; end: 104f9473b; -[SCMusicPickerContainerV2 musicPickerV2ViewController:dismissWithCompletion:] */

void FUN_104f94730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissWithCompletion_animated__11255e8a8,param_4,1);
  return;
}



/* Entry: 104f9473c; end: 104f94843; -[SCMusicPickerContainerV2 _dismissWithCompletion:animated:] */

void FUN_104f9473c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf84b00(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f94844; end: 104f94893;  */

void FUN_104f94844(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  else {
    func_0x00010bf6f440(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f94894; end: 104f948cf; -[SCMusicPickerContainerV2 .cxx_destruct] */

void FUN_104f94894(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f948d0; end: 104f94953; -[SCMusicPickerListStartupLoader initWithMusicSyncTrackLoader:sectionType:] */

undefined1 *
FUN_104f948d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e55a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f94954; end: 104f94aaf; -[SCMusicPickerListStartupLoader getPickerListSectionWithCompletion:] */

void FUN_104f94954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcb6a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104f94a34;
  puStack_40 = &UNK_11085f598;
  uVar3 = param_3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2,param_2,&puStack_58,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f94ab0; end: 104f94abb; -[SCMusicPickerListStartupLoader pushToValdiMarshaller:] */

void FUN_104f94ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 104f94abc; end: 104f94aeb; -[SCMusicPickerListStartupLoader .cxx_destruct] */

void FUN_104f94abc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f94aec; end: 104f94c1b; -[SCMusicPickerListViewController initWithSelectedTrackIdObservable:runtime:valdiBlizzardLoggingServices:musicPickerListStartupLoader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104f94aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e55b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112718564;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718568;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271856c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718570;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f94c1c; end: 104f94cb3; -[SCMusicPickerListViewController prepareWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f94c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be4cee0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718574);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f94cb4;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a1520(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f94cb4; end: 104f94cc7;  */

void FUN_104f94cb4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f94cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104f94cc8; end: 104f94dc3; -[SCMusicPickerListViewController onTrackIdSelectedWithTrackId:] */

void FUN_104f94cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104f94d6c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f94dc4; end: 104f94e77; -[SCMusicPickerListViewController onDismiss] */

void FUN_104f94dc4(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104f94e78; end: 104f94e7f; -[SCMusicPickerListViewController pageViewName] */

undefined8 FUN_104f94e78(void)

{
  return 0x9e;
}



/* Entry: 104f94e80; end: 104f94f43; -[SCMusicPickerListViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104f94e80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_6,param_4,lVar1);
  _objc_release(param_6);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112718574;
  func_0x00010bf512a0(param_1,param_2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010bf2d520(param_1,param_2,uVar2,param_4,1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104f94f44; end: 104f94f4b; -[SCMusicPickerListViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104f94f44(void)

{
  return 0;
}



/* Entry: 104f94f4c; end: 104f94f57; -[SCMusicPickerListViewController pushToValdiMarshaller:] */

void FUN_104f94f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 104f94f58; end: 104f9530f; -[SCMusicPickerListViewController _loadContentViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f94f58(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_112718574;
  puVar1 = param_1;
  if (*(long *)(param_1 + lVar21) == 0) {
    puVar1 = PTR_PTR_1126b2fc0;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112718564);
    func_0x00010c272120(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043ce0(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271856c);
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b2fc8;
    _objc_alloc();
    func_0x00010bff0640();
    puVar5 = PTR_PTR_1126b2fd0;
    _objc_alloc();
    func_0x00010c061d40();
    uVar3 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar5;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21),param_2,0);
    puVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar21);
    uStack_88 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar21);
    uStack_80 = uVar12;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar21);
    uStack_78 = uVar16;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493a0(uVar17,param_2,puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5,param_2,puVar20);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(param_1);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + _DAT_112718578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f95310; end: 104f9532f; -[SCMusicPickerListViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95310(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112718578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f95330; end: 104f95343; -[SCMusicPickerListViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95330(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112718578,param_3);
  return;
}



/* Entry: 104f95344; end: 104f953bf; -[SCMusicPickerListViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95344(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718578);
  _objc_storeStrong(param_1 + _DAT_112718570,0);
  _objc_storeStrong(param_1 + _DAT_11271856c,0);
  _objc_storeStrong(param_1 + _DAT_112718568,0);
  _objc_storeStrong(param_1 + _DAT_112718574,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718564,0);
  return;
}



/* Entry: 104f953c0; end: 104f9540b; -[SCMusicPickerTrayHeightConfig initWithDefaultHeightRatio:maxHeightReservedSpace:] */

void FUN_104f953c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e55b8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 104f9540c; end: 104f95413; -[SCMusicPickerTrayHeightConfig defaultHeightRatio] */

undefined8 FUN_104f9540c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f95414; end: 104f9541b; -[SCMusicPickerTrayHeightConfig setDefaultHeightRatio:] */

void FUN_104f95414(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 104f9541c; end: 104f95423; -[SCMusicPickerTrayHeightConfig maxHeightReservedSpace] */

undefined8 FUN_104f9541c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f95424; end: 104f9542b; -[SCMusicPickerTrayHeightConfig setMaxHeightReservedSpace:] */

void FUN_104f95424(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 104f9542c; end: 104f9552f; -[SCMusicPickerTweaksImpl init] */

undefined1 * FUN_104f9542c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e55c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release();
    func_0x0001058e90b8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release();
    func_0x0001058e90f4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release();
    func_0x0001058e9130();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release();
    func_0x0001058e916c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f95530; end: 104f9553b; -[SCMusicPickerTweaksImpl pushToValdiMarshaller:] */

void FUN_104f95530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 104f9553c; end: 104f95543; -[SCMusicPickerTweaksImpl useBeta] */

undefined8 FUN_104f9553c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f95544; end: 104f95573; -[SCMusicPickerTweaksImpl setUseBeta:] */

void FUN_104f95544(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104f95574; end: 104f9557b; -[SCMusicPickerTweaksImpl disableCaching] */

undefined8 FUN_104f95574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f9557c; end: 104f955ab; -[SCMusicPickerTweaksImpl setDisableCaching:] */

void FUN_104f9557c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104f955ac; end: 104f955b3; -[SCMusicPickerTweaksImpl customRouteTag] */

undefined8 FUN_104f955ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f955b4; end: 104f955bb; -[SCMusicPickerTweaksImpl setCustomRouteTag:] */

void FUN_104f955b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104f955bc; end: 104f955c3; -[SCMusicPickerTweaksImpl acceptLanguage] */

undefined8 FUN_104f955bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f955c4; end: 104f955cb; -[SCMusicPickerTweaksImpl setAcceptLanguage:] */

void FUN_104f955c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104f955cc; end: 104f955d3; -[SCMusicPickerTweaksImpl countryCode] */

undefined8 FUN_104f955cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f955d4; end: 104f955db; -[SCMusicPickerTweaksImpl setCountryCode:] */

void FUN_104f955d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104f955dc; end: 104f955e3; -[SCMusicPickerTweaksImpl heroBannerType] */

undefined8 FUN_104f955dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f955e4; end: 104f955eb; -[SCMusicPickerTweaksImpl setHeroBannerType:] */

void FUN_104f955e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104f955ec; end: 104f9564b; -[SCMusicPickerTweaksImpl .cxx_destruct] */

void FUN_104f955ec(long param_1)

{
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



/* Entry: 104f9564c; end: 104f95d5b; -[SCMusicPickerViewController initWithUserSession:mediaLoader:experiments:musicGrpcService:searchGrpcService:boltDataUploader:audioServices:temporaryFileWriterServices:selection:loggingInfo:musicFeatureLaunchServices:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:runtime:composerApplication:composerCoreUIServices:musicFavoritesComposerServices:userInfoProvider:currentUserStore:valdiBlizzardLoggingServices:musicRecentsComposerServices:style:topicRequester:operaPresenter:blizzardLogger:bitmojiAvatarIdProvider:musicPickerStartupLoader:musicPickerTweaks:selectionLoader:contentDelivery:context:deepLinkInfo:audioRecorder:soundReportManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f9564c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  puStack_70 = PTR_PTR_1126e55c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1931e0(puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271859c,param_3);
    lVar3 = (long)_DAT_1127185a0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185a4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185a8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185ac;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185b0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185b4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185b8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185bc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185c0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185c4;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185c8;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185cc;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185d0;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_37;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185d4;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185d8;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185dc;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185e0;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185e4;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185e8;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_23;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185ec;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_24;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127185f0) = param_25;
    lVar3 = (long)_DAT_1127185f4;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_26;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185f8;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_27;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127185fc;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_28;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718600;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_29;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718604;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_30;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718608;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_31;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271860c;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_32;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718610;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_33;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718614;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_34;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718618;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_35;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271861c;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_36;
    _objc_release(uVar2);
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f95d5c; end: 104f95d8b; -[SCMusicPickerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95d5c(long param_1)

{
  func_0x00010be4cee0();
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112718620));
  return;
}



/* Entry: 104f95d8c; end: 104f95d8f; -[SCMusicPickerViewController preferredStatusBarStyle] */

undefined8 FUN_104f95d8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 104f95d90; end: 104f95e0f; -[SCMusicPickerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95d90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e55c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  if (*(long *)(param_1 + _DAT_112718624) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c14cde0();
    *(undefined **)(param_1 + _DAT_112718628) = puVar2;
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 104f95e10; end: 104f95edb; -[SCMusicPickerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95e10(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e55c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  if (*(long *)(param_1 + _DAT_112718624) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1070e0(param_1);
    func_0x00010c106ee0(param_1);
    func_0x00010c14dc40(puVar1);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 104f95edc; end: 104f95f73; -[SCMusicPickerViewController prepareWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be4cee0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718620);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f95f74;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a1520(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f95f74; end: 104f95f87;  */

void FUN_104f95f74(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f95f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104f95f88; end: 104f968af; -[SCMusicPickerViewController _loadContentViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f95f88(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112718620;
  lVar3 = param_2;
  if (*(long *)(param_2 + lVar19) != 0) goto LAB_104f96874;
  lVar22 = (long)_DAT_112718624;
  uVar2 = *(undefined8 *)(param_2 + lVar22);
  *(undefined8 *)(param_2 + lVar22) = 0;
  _objc_release();
  if (*(long *)(param_2 + _DAT_1127185f0) == 1) {
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
LAB_104f96014:
    uVar17 = *(undefined8 *)(param_2 + lVar22);
    *(undefined8 *)(param_2 + lVar22) = uVar2;
    _objc_release(uVar17);
  }
  else if (*(long *)(param_2 + _DAT_1127185f0) == 0) {
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_104f96014;
  }
  lVar3 = *(long *)(param_2 + _DAT_1127185bc);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c277e80();
    func_0x00010af28d88();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b2ee0;
  _objc_alloc();
  lVar21 = (long)_DAT_1127185c0;
  uVar2 = *(undefined8 *)(param_2 + lVar21);
  func_0x00010c247a20(uVar2);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112718614;
  uVar17 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010c247520(uVar17);
  func_0x00010c04ab60(puVar4,param_3,uVar2,uVar17);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar21);
  func_0x00010bf31200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010bfadea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c120(puVar4,param_3,uVar2);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010bfe2780(uVar2);
  func_0x00010c0df6e0(puVar5,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8360(puVar4,param_3,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b2fd8;
  _objc_alloc_init();
  func_0x00010c1ca320();
  puVar6 = PTR_PTR_1126b2fe0;
  _objc_alloc_init();
  func_0x00010c1fb6a0();
  func_0x00010c196900(puVar6,param_3,puVar4);
  func_0x00010c198aa0(puVar6,param_3,puVar5);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be738;
  if (*(long *)(param_2 + lVar22) != 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be720;
  }
  func_0x00010c20eaa0(puVar6,param_3,ppuVar1);
  func_0x00010c18ac40(puVar6,param_3,*(undefined8 *)(param_2 + _DAT_112718618));
  puVar7 = PTR_PTR_1126b2f60;
  _objc_alloc();
  func_0x00010c029900();
  puVar8 = PTR_PTR_1126b2ef8;
  _objc_alloc();
  func_0x00010bff5660();
  puVar9 = PTR_PTR_1126b2f00;
  _objc_alloc();
  func_0x00010c0510a0();
  uVar17 = *(undefined8 *)(param_2 + _DAT_1127185e8);
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  puVar10 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar17 = *(undefined8 *)(param_2 + _DAT_11271862c);
  *(undefined **)(param_2 + _DAT_11271862c) = puVar10;
  _objc_release(uVar17);
  lVar20 = (long)_DAT_1127185dc;
  uVar11 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar11);
  puVar10 = PTR_PTR_1126b2fe8;
  _objc_alloc();
  func_0x00010c039460();
  uVar12 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar17;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar12);
  puVar13 = PTR_PTR_1126b2ff0;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_2 + _DAT_1127185c4);
  uVar17 = *(undefined8 *)(param_2 + lVar21);
  func_0x00010bf31200(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02cd20(puVar13,param_3,uVar12,param_2,param_2,uVar17);
  _objc_release(uVar17);
  puVar14 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  func_0x00010c040b80();
  func_0x00010c1c1bc0();
  puVar15 = PTR_PTR_1126b2ff8;
  _objc_opt_new(PTR_PTR_1126b2ff8);
  func_0x00010c1cba60();
  func_0x00010c161980(puVar15,param_3,param_2);
  func_0x00010c16bb60(puVar15,param_3,puVar7);
  func_0x00010c1dda80(puVar15,param_3,puVar8);
  func_0x00010c16bc80(puVar15,param_3,puVar9);
  func_0x00010c166b20(puVar15,param_3,uVar18);
  func_0x00010c1c9e60(puVar15,param_3,*(undefined8 *)(param_2 + _DAT_1127185a8));
  func_0x00010c171b20(puVar15,param_3,uVar2);
  lVar20 = (long)_DAT_1127185e0;
  uVar12 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010c0d2cc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a7e0(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_2 + _DAT_1127185ec);
  func_0x00010c0d3640(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8800(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  _objc_release(uVar12);
  func_0x00010c176ee0(puVar15,param_3,puVar10);
  uVar17 = *(undefined8 *)(param_2 + _DAT_1127185b0);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172f60(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  func_0x00010c161e00(puVar15,param_3,uVar11);
  func_0x00010c16c1c0(puVar15,param_3,*(undefined8 *)(param_2 + _DAT_11271861c));
  uVar17 = *(undefined8 *)(param_2 + _DAT_1127185d8);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  func_0x00010c2178c0(puVar15,param_3,puVar13);
  uVar12 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010c0dc660(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4c0(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_2 + lVar20);
  func_0x00010c0d2f00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19aba0(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  _objc_release(uVar12);
  func_0x00010c1f8480(puVar15,param_3,*(undefined8 *)(param_2 + _DAT_1127185ac));
  uVar17 = *(undefined8 *)(param_2 + _DAT_1127185e4);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  uVar12 = *(undefined8 *)(param_2 + _DAT_112718600);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar15,param_3,uVar17);
  _objc_release(uVar17);
  _objc_release(uVar12);
  func_0x00010c21ab00(puVar15,param_3,*(undefined8 *)(param_2 + _DAT_112718608));
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0540(puVar15,param_3,puVar16);
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209f40(puVar15,param_3,puVar16);
  _objc_release(puVar16);
  func_0x00010c1db760(puVar15,param_3,*(undefined8 *)(param_2 + _DAT_112718604));
  puVar16 = PTR_PTR_1126b3000;
  _objc_alloc();
  func_0x00010c061d40();
  uVar17 = *(undefined8 *)(param_2 + lVar19);
  *(undefined **)(param_2 + lVar19) = puVar16;
  _objc_release(uVar17);
  puVar16 = *(undefined **)(param_2 + lVar19);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  param_4 = puVar16;
  func_0x00010bf8f080();
  uVar17 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194900();
  _objc_release(uVar17);
  _objc_release(puVar16);
  if (*(long *)(param_2 + lVar22) != 0) {
    func_0x00010c1797c0(*(long *)(param_2 + lVar22),param_3,param_2);
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar22));
    func_0x00010c219b20(param_2,param_3,*(undefined8 *)(param_2 + lVar22));
    uVar17 = *(undefined8 *)(param_2 + lVar22);
    uStack_70 = *(undefined8 *)(param_2 + lVar19);
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar16;
    func_0x00010c067a20(uVar17,param_3,puVar16);
    _objc_release(puVar16);
  }
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar18);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
LAB_104f96874:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b3008;
  _objc_retain(param_4);
  _objc_alloc();
  lVar19 = (long)_DAT_1127185c0;
  uVar2 = *(undefined8 *)(lVar3 + lVar19);
  func_0x00010bf31200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar3 + lVar19);
  func_0x00010bf4f080(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab00(puVar5,param_3,0x7c,uVar2,uVar17);
  uVar18 = *(undefined8 *)(lVar3 + lVar19);
  *(undefined **)(lVar3 + lVar19) = puVar5;
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar2);
  func_0x00010c278800(lVar3,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f968b0; end: 104f9696f; -[SCMusicPickerViewController topicPageTrackSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f968b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b3008;
  _objc_retain(param_3);
  _objc_alloc();
  lVar5 = (long)_DAT_1127185c0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf31200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4f080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab00(puVar1,param_2,0x7c,uVar2,uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c278800(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f96970; end: 104f96973; -[SCMusicPickerViewController topicPagePresented:] */

void FUN_104f96970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pausePlaybackWithIsPaused__11261b1e8);
  return;
}



/* Entry: 104f96974; end: 104f96977; -[SCMusicPickerViewController onTrackSelectedWithSelectedTrack:] */

void FUN_104f96974(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trackSelected__11267bc28);
  return;
}



/* Entry: 104f96978; end: 104f9697b; -[SCMusicPickerViewController presentTopicPageForTrackWithTrack:] */

void FUN_104f96978(void)

{
  return;
}



/* Entry: 104f9697c; end: 104f96a23; -[SCMusicPickerViewController onDismiss] */

void FUN_104f9697c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f96a24;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f96a24; end: 104f96a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96a24(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = (long)_DAT_112718630;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0d34a0();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f96aa0; end: 104f96c43; -[SCMusicPickerViewController launchSpotlightTrendingSnapWithSelectedSpotlightTrendingCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112718634) = 1;
  lVar5 = (long)_DAT_112718638;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126b3010;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127185c4);
    func_0x00010c0d2a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0544a0();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  puVar3 = auStack_58;
  _objc_initWeak(puVar3,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104f96c44; end: 104f96c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96c44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c10e540(*(undefined8 *)(lVar1 + _DAT_112718638),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f96c88; end: 104f96d83; -[SCMusicPickerViewController expandTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96c88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104f96d84; end: 104f96dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96d84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3520();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f96dd4; end: 104f96ecf; -[SCMusicPickerViewController collapseTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96dd4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104f96ed0; end: 104f96f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96ed0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3500();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f96f20; end: 104f9701b; -[SCMusicPickerViewController allowCollapsingTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f96f20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104f9701c; end: 104f9706b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9701c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3480();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9706c; end: 104f970eb; -[SCMusicPickerViewController isTrayExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104f9706c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112718630;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c0d34e0();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 104f970ec; end: 104f9720f; -[SCMusicPickerViewController onTrackPreviewedWithTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f970ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f97210; end: 104f9726f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f97210(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3440();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f97270; end: 104f97393; -[SCMusicPickerViewController onTrackDownloadedWithTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f97270(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f97394; end: 104f97427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f97394(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127185c0);
    func_0x00010c247a20(uVar2);
    FUN_104f97428(uVar4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0d3420();
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f97428; end: 104f97dc3;  */

void FUN_104f97428(double param_1,long param_2)

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
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_a0;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  _objc_retain();
  if (param_2 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c079d80();
    if ((int)lVar3 == 0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      puStack_80 = PTR_PTR_1126b3020;
      _objc_alloc();
      puVar19 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar3 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0();
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar19);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar14 = PTR_PTR_1126b3028;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0fbb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ab80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126b3030;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    lVar3 = param_2;
    func_0x00010bf0ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a4e0();
    _CMTimeMakeWithSeconds(auStack_78,param_1 / 1000.0,600);
    lVar5 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (puStack_80 == (undefined *)0x0) {
      lVar1 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b240();
      _objc_release(lVar1);
    }
    puVar16 = PTR_PTR_1126b3038;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b240();
    lVar6 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c072480();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c081860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c054e00();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beff2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      puStack_a0 = (undefined *)0x0;
    }
    else {
      puStack_a0 = PTR_PTR_1126b3020;
      _objc_alloc();
      puVar19 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar4 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar13;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0();
      _objc_release(lVar17);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(puVar19);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c260ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126b3040;
      _objc_alloc_init(PTR_PTR_1126b3040);
      lVar1 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c260ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2473e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206b40(puVar20);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c260ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf86660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18ff80(puVar20);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c260ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe5be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a98a0(puVar20);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c260ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010befcfa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1659a0(puVar20);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c260ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf8b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192f00(puVar20);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    puVar19 = PTR_PTR_1126b2f20;
    _objc_alloc(PTR_PTR_1126b2f20);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c128040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    func_0x00010c0df880(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043d40(puVar19);
    _objc_release(puVar18);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar20);
    _objc_release(puStack_a0);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puStack_80);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 104f97dc4; end: 104f97ebf; -[SCMusicPickerViewController onDismissAndPresentScrubber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f97dc4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}


