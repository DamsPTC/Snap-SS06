/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063622f0; end: 1063622f7;  */

void FUN_1063622f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_teardown_112678538);
  return;
}



/* Entry: 1063622f8; end: 1063623b7; -[SCOperaSharedResourceManager _prebuildPlayerViews] */

void FUN_1063622f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0);
  lVar4 = param_1;
  func_0x00010be65620();
  if (0 < lVar4) {
    lVar4 = 0;
    do {
      lVar2 = param_1;
      func_0x00010bdd6800(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar2);
      lVar4 = lVar4 + 1;
      lVar2 = param_1;
      func_0x00010be65620();
    } while (lVar4 < lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar1);
  return;
}



/* Entry: 1063623b8; end: 1063623ef; -[SCOperaSharedResourceManager _playerViews] */

void FUN_1063623b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    func_0x00010be76bc0();
    lVar1 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1063623f0; end: 106362503; -[SCOperaSharedResourceManager _buildPlayerView] */

void FUN_1063623f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9e68;
  _objc_alloc(PTR_PTR_1126c9e68);
  func_0x00010c037060();
  func_0x00010c161660();
  func_0x00010c1675a0(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126c9e70;
  _objc_alloc(PTR_PTR_1126c9e70);
  func_0x00010c037020();
  func_0x00010c1ddbc0(puVar1,param_2,puVar2);
  func_0x00010c16d460(puVar1,param_2,*(undefined1 *)(param_1 + 0x58));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"status");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar4,param_2,puVar1,puVar3,0,PTR_s__playerStatusDidChange_11257ae08);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c9e78;
  _objc_alloc(PTR_PTR_1126c9e78);
  func_0x00010c038760();
  func_0x00010bdd0500(param_1,param_2,puVar3);
  func_0x00010c1dda40(puVar3,param_2,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106362504; end: 1063625ab; -[SCOperaSharedResourceManager _playerStatusDidChange] */

void FUN_106362504(undefined8 param_1)

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
  pcStack_40 = FUN_1063625ac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1063625ac; end: 1063625df;  */

void FUN_1063625ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be751e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063625e0; end: 10636272b; -[SCOperaSharedResourceManager _playerStatusDidChangeInternal] */

void FUN_1063625e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010be75260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010c100720();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c252d60();
        _objc_release(lVar3);
        if (lVar4 == 2) {
          func_0x00010be8ec60(param_1,param_2,lVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  func_0x00010bf4b900(uVar5,param_2,puVar7);
  if ((int)uVar5 != 0) {
    puVar6 = (undefined1 *)puVar7;
    func_0x00010c101060(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6620();
    _objc_release(puVar6);
    func_0x00010bed1480(lVar2,param_2,puVar7);
    func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x40),param_2,puVar7);
    puVar6 = (undefined1 *)puVar7;
    func_0x00010c101060(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf773c0();
    _objc_release(puVar6);
    func_0x00010befa120(*(undefined8 *)(lVar2 + 0x48),param_2,puVar7);
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  puVar6 = (undefined1 *)puVar7;
  func_0x00010c100720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281a80(uVar5,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010bdfb5c0(lVar2,param_2,puVar7);
  func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x38),param_2,puVar7);
  lVar1 = lVar2;
  func_0x00010be75260(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd6800(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10636272c; end: 106362863; -[SCOperaSharedResourceManager _replacePlayerView:] */

void FUN_10636272c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c101060(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6620();
    _objc_release(uVar1);
    func_0x00010bed1480(param_1,param_2,param_3);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    uVar1 = param_3;
    func_0x00010c101060(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf773c0();
    _objc_release(uVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c100720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281a80(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bdfb5c0(param_1,param_2,param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  lVar2 = param_1;
  func_0x00010be75260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd6800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106362864; end: 10636290b; -[SCOperaSharedResourceManager didReceiveMediaServicesWereLostNotification] */

void FUN_106362864(undefined8 param_1)

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
  pcStack_40 = FUN_10636290c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10636290c; end: 106362943;  */

void FUN_10636290c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1c51e0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106362944; end: 1063629eb; -[SCOperaSharedResourceManager didReceiveMediaServicesWereResetNotification] */

void FUN_106362944(undefined8 param_1)

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
  pcStack_40 = FUN_1063629ec;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1063629ec; end: 106362a2b;  */

void FUN_1063629ec(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be751e0(param_1);
    func_0x00010c1c51e0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106362a2c; end: 106362b37; -[SCOperaSharedResourceManager preparedPlayerViewForAsset:subtitlesObserver:relativePosition:pageId:playerConfiguration:] */

void FUN_106362a2c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010be75200(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010be75240(param_1,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be77c80(param_1,param_2,uVar1,param_3,param_4,param_7);
  }
  uVar2 = uVar1;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c1d8220(uVar1,param_2,param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106362b38; end: 106362b3b; -[SCOperaSharedResourceManager playerViewForVideoAsset:subtitlesObserver:pageId:playerConfiguration:] */

void FUN_106362b38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be75230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playerViewForVideoAsset_subtitl_11257ae28);
  return;
}



/* Entry: 106362b3c; end: 106362beb; -[SCOperaSharedResourceManager updatedPlayerViewOnExistingAsset:withNewAsset:subtitlesObserver:pageId:playerConfiguration:] */

void FUN_106362b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be75220(param_1,param_2,param_3,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4e3c0(param_1,param_2,uVar1,param_4,param_5,param_7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106362bec; end: 106362c93; -[SCOperaSharedResourceManager updatePlayerConfiguration:playerView:] */

void FUN_106362bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar1 = param_4;
    func_0x00010c100ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8620(param_1,param_2,lVar1,param_3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106362c94; end: 106362dcb; -[SCOperaSharedResourceManager finishDisplayingPlayerView:pageId:] */

void FUN_106362c94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c101060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6620();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = param_3;
    func_0x00010c0f12c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,0,lVar1);
    _objc_release(lVar1);
  }
  func_0x00010c1d8220(param_3,param_2,0);
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4b900(uVar4,param_2,param_3);
  if ((int)uVar4 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    lVar1 = param_3;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c252d60();
    _objc_release(lVar1);
    if (lVar3 == 2) {
      func_0x00010be751e0(param_1);
    }
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  }
  func_0x00010bed1480(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106362dcc; end: 106362dd3; -[SCOperaSharedResourceManager isPlayerViewDisplaying:] */

void FUN_106362dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 106362dd4; end: 106362f97; -[SCOperaSharedResourceManager _playerViewForVideoAsset:subtitlesObserver:pageId:playerConfiguration:] */

void FUN_106362dd4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bdf69c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c1d8220(uVar1,param_2,param_5);
    }
    _objc_retain(uVar1);
    uVar2 = uVar1;
    goto LAB_106362f54;
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (*(ulong *)(param_1 + 0x60) < uVar2) {
    uVar2 = 0;
    goto LAB_106362f54;
  }
  uVar2 = param_1;
  func_0x00010be75200(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010be75240(param_1,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e3c0(param_1,param_2,uVar2,param_3,param_4,param_6);
    if (uVar2 != 0) goto LAB_106362ef4;
  }
  else {
LAB_106362ef4:
    uVar3 = uVar2;
    func_0x00010c101060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a61c0();
    _objc_release(uVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x40),param_2,uVar2);
    uVar3 = uVar2;
    func_0x00010c101060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75520();
    _objc_release(uVar3);
  }
  func_0x00010c1d8220(uVar2,param_2,param_5);
LAB_106362f54:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106362f98; end: 10636302f; -[SCOperaSharedResourceManager _currentDisplayingPlayerViewForVideoAsset:] */

void FUN_106362f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106363030;
  puStack_30 = &UNK_11091d3a8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2040(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106363030; end: 106363097;  */

undefined8 FUN_106363030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c100ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14d1a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106363098; end: 10636309f; -[SCOperaSharedResourceManager _currentDisplayingPlayerViewsDebugInfo] */

undefined8 FUN_106363098(void)

{
  return 0;
}



/* Entry: 1063630a0; end: 1063631bf; -[SCOperaSharedResourceManager _playerViewForVideoAsset:] */

void FUN_1063630a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be75260(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106363158;
  puStack_40 = &UNK_11091d3a8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb2040(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063631c0; end: 1063633a7; -[SCOperaSharedResourceManager _playerViewNotCurrentDisplayingWithConfig:] */

void FUN_1063631c0(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined1 *puVar14;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = *(undefined1 **)(param_1 + 0x38);
  _objc_retain(puVar10);
  puVar8 = auStack_e8;
  uVar9 = 0x10;
  puVar1 = puVar10;
  func_0x00010bf52a60();
  if (puVar1 == (undefined1 *)0x0) {
    _objc_release(puVar10);
LAB_106363308:
    puVar10 = param_1;
    func_0x00010be75260();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf529e0();
    puVar1 = param_1;
    func_0x00010be65620();
    _objc_release(puVar10);
    puVar12 = param_1;
    func_0x00010bdd6800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 < puVar1) {
      puVar7 = (undefined8 *)puVar12;
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    puVar11 = (undefined1 *)0x0;
    unaff_x26 = *plStack_120;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(puVar10);
        }
        puVar12 = *(undefined1 **)(lStack_128 + (long)puVar14 * 8);
        uVar2 = *(ulong *)(param_1 + 0x40);
        puVar7 = (undefined8 *)puVar12;
        func_0x00010bf4b900();
        if ((uVar2 & 1) == 0) {
          unaff_x25 = puVar12;
          func_0x00010c100ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_retain(puVar12);
          if (unaff_x25 == (undefined1 *)0x0) {
            _objc_release(puVar10);
            _objc_release(puVar11);
            goto LAB_106363360;
          }
          _objc_release(puVar11);
          puVar11 = puVar12;
        }
        puVar14 = puVar14 + 1;
      } while (puVar1 != puVar14);
      puVar8 = auStack_e8;
      uVar9 = 0x10;
      puVar1 = puVar10;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
    _objc_release(puVar10);
    if (puVar11 == (undefined1 *)0x0) goto LAB_106363308;
    puVar7 = (undefined8 *)puVar11;
    func_0x00010bed1480(param_1);
    puVar12 = puVar11;
  }
LAB_106363360:
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1063633a8;
  lStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = puVar12;
  puStack_168 = puVar1;
  puStack_160 = puVar11;
  puStack_158 = puVar10;
  puStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  if (puVar7 == (undefined8 *)0x0) goto LAB_106363574;
  lVar4 = *(long *)(lVar3 + 0x40);
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    lVar5 = *(long *)(lVar3 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if ((lVar4 == 0) || (lVar5 = lVar4, func_0x00010c252d60(), lVar5 == 1)) goto LAB_106363554;
    _objc_initWeak(auStack_188,lVar3);
    uVar13 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    _objc_retain(lVar4);
    _objc_retain(uVar9);
    _objc_retain(param_6);
    func_0x00010c0e0780(uVar13);
    _objc_release(puVar6);
    _objc_release(param_6);
    _objc_release(uVar9);
    _objc_release(lVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  else {
    lVar4 = 0;
LAB_106363554:
    func_0x00010be4e3c0(lVar3);
  }
  _objc_release(lVar4);
LAB_106363574:
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1063633a8; end: 1063635d3; -[SCOperaSharedResourceManager _preloadWhenNecessaryForPlayerView:videoAsset:subtitlesObserver:playerConfiguration:] */

void FUN_1063633a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) goto LAB_106363574;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c252d60(), lVar2 == 1)) goto LAB_106363554;
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(lVar1);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0e0780(uVar4);
    _objc_release(puVar3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    lVar1 = 0;
LAB_106363554:
    func_0x00010be4e3c0(param_1);
  }
  _objc_release(lVar1);
LAB_106363574:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063635d4; end: 106363697;  */

void FUN_1063635d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c100ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c14d1a0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      if ((int)uVar5 == 0) goto LAB_106363680;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c252d60();
    if (lVar2 == 1) {
      func_0x00010be4e3c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x40));
    }
  }
LAB_106363680:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106363698; end: 106363727; -[SCOperaSharedResourceManager _numberOfPlayers] */

long FUN_106363698(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c29a020();
  puVar3 = PTR_PTR_1126c9b90;
  func_0x00010bf02080();
  puVar4 = PTR_PTR_1126c9b90;
  func_0x00010c0d9c20();
  puVar5 = PTR_PTR_1126c9b90;
  func_0x00010c0d9c40();
  lVar1 = 1;
  if ((((ulong)puVar4 | (ulong)puVar3 | (ulong)puVar5) & uVar2) != 0) {
    lVar1 = 2;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c29a020();
  puVar3 = PTR_PTR_1126c9b90;
  func_0x00010bf020a0();
  puVar4 = PTR_PTR_1126c9b90;
  func_0x00010c0d9b00();
  if ((((ulong)puVar4 | (ulong)puVar3) & uVar2) != 0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 106363728; end: 10636384f; -[SCOperaSharedResourceManager assetWithUrl:pageId:] */

void FUN_106363728(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c9e80;
  _objc_alloc();
  func_0x00010c02bd60();
  uVar12 = param_3;
  func_0x00010c072e60();
  puVar5 = puVar3;
  uVar8 = param_3;
  if ((int)uVar12 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x3;
    puVar9 = puVar4;
    func_0x00010bf54a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar7 = (undefined *)0x3;
    puVar9 = (undefined *)0x0;
    func_0x00010bf54a80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(puVar9);
  _objc_retain(param_6);
  if (uVar8 != 0) {
    puVar5 = puVar7;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    puVar3 = puVar4;
    func_0x00010c14d1a0();
    _objc_release(puVar4);
    _objc_release(puVar5);
    if ((uVar12 & 1) == 0) {
      puVar3 = puVar7;
      func_0x00010c100720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(puVar3);
      puVar5 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c24fba0(param_6);
      func_0x00010c209da0(puVar5);
      func_0x00010beacac0(param_3);
      func_0x00010bec13a0(param_3);
      if (puVar9 != (undefined *)0x0) {
        func_0x00010bf18180();
        puVar4 = puVar5;
        func_0x00010c0ef240();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            uVar12 = *(ulong *)((long)puVar11 * 8);
            puVar6 = PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88;
            _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88);
            _objc_opt_isKindOfClass(uVar12,puVar6);
            if ((uVar12 & 1) != 0) goto LAB_106363afc;
            puVar11 = puVar11 + 1;
          } while (puVar3 != puVar11);
          puVar3 = puVar4;
          func_0x00010bf52a60();
        }
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88;
        _objc_opt_new(PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88);
        func_0x00010c2102a0();
        func_0x00010c18b640(puVar4);
        func_0x00010befa4c0(puVar5);
LAB_106363afc:
        _objc_release(puVar4);
        func_0x00010bf94960(PTR_PTR_1126c98e0);
      }
      puVar3 = puVar5;
      func_0x00010c1ddac0(puVar7);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_6);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  if (puVar3 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar5 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = puVar3;
      func_0x00010bdc2b80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(puVar7 + 0x18);
      func_0x00010c07b680();
      if (iVar2 != 0) {
        uVar12 = *(ulong *)(puVar7 + 0x18);
        func_0x00010c07cd60();
        if ((uVar12 & 1) == 0) {
          lVar10 = *(long *)(puVar7 + 0x18);
          func_0x00010c24d960();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 != 0) {
            func_0x00010b29736c(*(undefined8 *)(puVar7 + 0x30),
                                &PTR____CFConstantStringClassReference_110e4c218,0,
                                &PTR____CFConstantStringClassReference_110daafd8,1);
          }
          _objc_release(lVar10);
        }
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106363850; end: 106363b83; -[SCOperaSharedResourceManager _loadPlayerView:asset:subtitlesObserver:playerConfiguration:] */

void FUN_106363850(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != 0) {
    puVar3 = param_3;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    puVar5 = puVar4;
    func_0x00010c14d1a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((uVar9 & 1) == 0) {
      puVar5 = param_3;
      func_0x00010c100720(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(puVar5);
      puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar5);
      func_0x00010c24fba0(param_6);
      func_0x00010c209da0(puVar3);
      func_0x00010beacac0(param_1);
      func_0x00010bec13a0(param_1);
      if (param_5 != 0) {
        func_0x00010bf18180();
        puVar4 = puVar3;
        func_0x00010c0ef240();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar5 != (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            uVar9 = *(ulong *)((long)puVar8 * 8);
            puVar6 = PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88;
            _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88);
            _objc_opt_isKindOfClass(uVar9,puVar6);
            if ((uVar9 & 1) != 0) goto LAB_106363afc;
            puVar8 = puVar8 + 1;
          } while (puVar5 != puVar8);
          puVar5 = puVar4;
          func_0x00010bf52a60();
        }
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88;
        _objc_opt_new(PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88);
        func_0x00010c2102a0();
        func_0x00010c18b640(puVar4);
        func_0x00010befa4c0(puVar3);
LAB_106363afc:
        _objc_release(puVar4);
        func_0x00010bf94960(PTR_PTR_1126c98e0);
      }
      puVar5 = puVar3;
      func_0x00010c1ddac0(param_3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  if (puVar5 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    puVar4 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar3);
    puVar3 = puVar5;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = puVar5;
      func_0x00010bdc2b80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(param_3 + 0x18);
      func_0x00010c07b680();
      if (iVar2 != 0) {
        uVar9 = *(ulong *)(param_3 + 0x18);
        func_0x00010c07cd60();
        if ((uVar9 & 1) == 0) {
          lVar7 = *(long *)(param_3 + 0x18);
          func_0x00010c24d960();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) {
            func_0x00010b29736c(*(undefined8 *)(param_3 + 0x30),
                                &PTR____CFConstantStringClassReference_110e4c218,0,
                                &PTR____CFConstantStringClassReference_110daafd8,1);
          }
          _objc_release(lVar7);
        }
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106363b84; end: 106363c73; -[SCOperaSharedResourceManager _startProxyIfNeededForAsset:] */

void FUN_106363b84(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c07b680();
      if (iVar2 != 0) {
        uVar5 = *(ulong *)(param_1 + 0x18);
        func_0x00010c07cd60();
        if ((uVar5 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          func_0x00010c24d960();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            func_0x00010b29736c(*(undefined8 *)(param_1 + 0x30),
                                &PTR____CFConstantStringClassReference_110e4c218,0,
                                &PTR____CFConstantStringClassReference_110daafd8,1);
          }
          _objc_release(lVar6);
        }
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106363c74; end: 106363c93; -[SCOperaSharedResourceManager reportProxyConnectionFailure] */

void FUN_106363c74(long param_1)

{
  func_0x00010bfb4f00(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106363c94; end: 106363ccb; -[SCOperaSharedResourceManager updatePlaybackMonitorLogViewerVisibility:] */

void FUN_106363c94(undefined8 param_1)

{
  func_0x00010c0ffc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106363ccc; end: 106363cfb; -[SCOperaSharedResourceManager activateAllPlaybackMonitors] */

void FUN_106363ccc(undefined8 param_1)

{
  func_0x00010c0ffc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106363cfc; end: 106363d2b; -[SCOperaSharedResourceManager deactivateAllPlaybackMonitors] */

void FUN_106363cfc(undefined8 param_1)

{
  func_0x00010c0ffc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106363d2c; end: 106363d9f; -[SCOperaSharedResourceManager _setupForwardBufferingPreferenceForPlayerItem:playerConfiguration:] */

void FUN_106363d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf118a0();
  if ((int)uVar1 == 0) {
    func_0x00010c1dffa0(0x3ff0000000000000,param_3);
  }
  else {
    func_0x00010bed8620(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106363da0; end: 106363e57; -[SCOperaSharedResourceManager _updateForwardBufferingPreferenceForPlayerItem:playerConfiguration:] */

void FUN_106363da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf118a0();
  if ((int)lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c106ae0();
    dVar2 = (double)lVar1;
    dVar3 = dVar2 / 1000.0;
    func_0x00010c106ac0(param_3);
    if (dVar3 != dVar2) {
      func_0x00010c1dffa0(param_3);
      dVar2 = dVar3;
    }
    func_0x00010c106da0(param_3);
    lVar1 = param_4;
    func_0x00010c106da0();
    if (dVar2 != (double)lVar1) {
      lVar1 = param_4;
      func_0x00010c106da0(param_4);
      func_0x00010c1e0200((double)lVar1,param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106363e58; end: 106363ee3; -[SCOperaSharedResourceManager _unloadPlayerView:] */

void FUN_106363e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c100720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c100ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281a80(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1ddac0(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106363ee4; end: 106363ee7; -[SCOperaSharedResourceManager _setupPlaybackMonitor] */

void FUN_106363ee4(void)

{
  return;
}



/* Entry: 106363ee8; end: 106363f0f; -[SCOperaSharedResourceManager _attachMonitorToPlayerView:] */

void FUN_106363ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106363f10; end: 106363f37; -[SCOperaSharedResourceManager _detachMonitorFromPlayerView:] */

void FUN_106363f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106363f38; end: 106363fa3; -[SCOperaSharedResourceManager _hasExistingPlayerViewForPlayerItem:] */

bool FUN_106363f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be75200(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 106363fa4; end: 106363fa7; -[SCOperaSharedResourceManager _observePlayerEvents] */

void FUN_106363fa4(void)

{
  return;
}



/* Entry: 106363fa8; end: 106363faf; -[SCOperaSharedResourceManager _currentDisplayingPlayerViewDebugDescription] */

undefined8 FUN_106363fa8(void)

{
  return 0;
}



/* Entry: 106363fb0; end: 10636404b; -[SCOperaSharedResourceManager mediaPlaybackSessionIdForPageId:] */

void FUN_106363fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,lVar2,param_3);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10636404c; end: 106364073; -[SCOperaSharedResourceManager _rawPlayerViews] */

void FUN_10636404c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106364074; end: 10636407b; -[SCOperaSharedResourceManager playbackMonitorManager] */

undefined8 FUN_106364074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10636407c; end: 1063640ab; -[SCOperaSharedResourceManager setPlaybackMonitorManager:] */

void FUN_10636407c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063640ac; end: 1063640b3; -[SCOperaSharedResourceManager mediaServicesWereLost] */

undefined1 FUN_1063640ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 1063640b4; end: 1063640bb; -[SCOperaSharedResourceManager setMediaServicesWereLost:] */

void FUN_1063640b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 1063640bc; end: 106364163; -[SCOperaSharedResourceManager .cxx_destruct] */

void FUN_1063640bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106364164; end: 1063641ff; -[SCOperaTriggerPointsManager initWithConfigProvider:] */

undefined1 * FUN_106364164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0f70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 8) = 0xbff0000000000000;
    iVar1 = (int)*(undefined8 *)((long)puVar2 + 0x10);
    func_0x00010c067f00();
    *(double *)((long)puVar2 + 0x18) = (double)iVar1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 106364200; end: 1063642e3; -[SCOperaTriggerPointsManager shouldTriggerPoint:playbackInfo:] */

undefined8 FUN_106364200(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c27c0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    dVar4 = *(double *)(param_1 + 8);
    if ((0.0 < dVar4) && (func_0x00010bf5fa40(param_4), *(double *)(param_1 + 8) < dVar4)) {
      func_0x00010bf5fa40(param_4);
      dVar4 = dVar4 - *(double *)(param_1 + 8);
      if (dVar4 < *(double *)(param_1 + 0x18)) goto LAB_1063642b8;
    }
    lVar1 = param_3;
    func_0x00010c234f80(param_3,param_2,param_4);
    if ((int)lVar1 != 0) {
      func_0x00010bf5fa40(param_4);
      *(double *)(param_1 + 8) = dVar4;
      uVar3 = 1;
      goto LAB_1063642bc;
    }
  }
LAB_1063642b8:
  uVar3 = 0;
LAB_1063642bc:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1063642e4; end: 1063642ef; -[SCOperaTriggerPointsManager willTriggerPoint:playbackInfo:] */

void FUN_1063642e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_willTriggerForPlaybackInfo__112687658,param_4);
  return;
}



/* Entry: 1063642f0; end: 1063642fb; -[SCOperaTriggerPointsManager didTriggerPoint:playbackInfo:] */

void FUN_1063642f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_didTriggerForPlaybackInfo__1125bd0a0,param_4)
  ;
  return;
}



/* Entry: 1063642fc; end: 106364307; -[SCOperaTriggerPointsManager .cxx_destruct] */

void FUN_1063642fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106364308; end: 1063643cf; -[SCOperaEventListenerAnnouncer initWithFlipper:configProvider:] */

undefined1 *
FUN_106364308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0f78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    _objc_release(uVar2);
    func_0x00010beac780(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063643d0; end: 106364aeb; -[SCOperaEventListenerAnnouncer addListener:events:] */

void FUN_1063643d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar4 = (long *)0x40;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar12 = plVar4 + 3;
  plVar4[4] = 0;
  *plVar12 = 0;
  *plVar4 = (long)&PTR_FUN_11091d448;
  plVar4[6] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 7) = 0x3f800000;
  plVar5 = (long *)0x30;
  plStack_80 = plVar12;
  plStack_78 = plVar4;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_11091d498;
  plVar5[4] = 0;
  plStack_90 = plVar5 + 3;
  *plStack_90 = (long)(plVar5 + 4);
  plVar5[5] = 0;
  lVar13 = *(long *)(param_1 + 0x48);
  plStack_88 = plVar5;
  if (lVar13 != 0) {
    for (plVar4 = *(long **)(lVar13 + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      plVar5 = plVar12;
      FUN_10636608c(plVar12,plVar4 + 2,plVar4 + 2);
      FUN_106364aec(plVar5 + 3,plVar4[3],plVar4[4]);
    }
  }
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)*plVar4;
    while (plVar5 != plVar4 + 1) {
      plVar12 = plVar5 + 4;
      plVar9 = plVar12;
      _objc_loadWeakRetained();
      _objc_release();
      if (plVar9 != (long *)0x0) {
        plVar9 = plStack_90;
        plStack_a0 = plVar12;
        FUN_106366480(plStack_90,plVar12,&plStack_a0);
        func_0x000106364b60(plVar9 + 5,plVar5[5],plVar5[6]);
      }
      plVar12 = (long *)plVar5[1];
      plVar9 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar9[2];
          bVar3 = plVar9 != (long *)*plVar5;
          plVar9 = plVar5;
        } while (bVar3);
      }
      else {
        do {
          plVar5 = plVar12;
          plVar12 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_11091d4e8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_a0 = plVar4 + 3;
  *plStack_a0 = (long)(plVar4 + 4);
  lVar13 = param_4;
  plStack_98 = plVar4;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    lVar15 = 0;
    do {
      lVar6 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      plVar12 = plStack_a0;
      plVar5 = (long *)plStack_a0[1];
      plVar4 = plStack_a0 + 1;
      lStack_a8 = lVar6;
      while (plVar9 = plVar4, plVar5 != (long *)0x0) {
        while (plVar9 = plVar5, lVar7 = lVar6, func_0x00010bf433a0(), lVar7 != -1) {
          lVar7 = plVar9[4];
          func_0x00010bf433a0();
          if (lVar7 != -1) {
            if (*plVar4 == 0) goto LAB_10636460c;
            goto LAB_106364658;
          }
          plVar4 = plVar9 + 1;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_10636460c;
        }
        plVar4 = plVar9;
        plVar5 = (long *)*plVar9;
      }
LAB_10636460c:
      puVar8 = (undefined8 *)0x28;
      __Znwm();
      _objc_retain(lVar6);
      puVar8[4] = lVar6;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = plVar9;
      *plVar4 = (long)puVar8;
      if (*(long *)*plVar12 != 0) {
        *plVar12 = *(long *)*plVar12;
      }
      func_0x00010002c5b0(plVar12[1],puVar8);
      plVar12[2] = plVar12[2] + 1;
LAB_106364658:
      plVar9 = (long *)0x30;
      __Znwm();
      plVar12 = plStack_80;
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar16 = plVar9 + 3;
      *plVar16 = 0;
      *plVar9 = (long)&PTR_FUN_11091d538;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar5 = plStack_80;
      plStack_b8 = plVar16;
      plStack_b0 = plVar9;
      FUN_10636608c(plStack_80,&lStack_a8,&lStack_a8);
      plVar4 = (long *)plVar5[3];
      plVar5 = (long *)plVar5[4];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_c8 = plVar4;
      plStack_c0 = plVar5;
      if (plVar4 == (long *)0x0) {
LAB_106364734:
        _objc_initWeak(auStack_d0,param_3);
        FUN_106364bd4(plVar16,auStack_d0);
        _objc_destroyWeak(auStack_d0);
        FUN_10636608c(plVar12,&lStack_a8,&lStack_a8);
        FUN_106364aec(plVar12 + 3,plVar16,plVar9);
      }
      else {
        lVar11 = *plVar4;
        lVar14 = plVar4[1];
        lVar7 = lVar11;
        if (lVar11 != lVar14) {
          do {
            lVar10 = lVar7;
            _objc_loadWeakRetained();
            _objc_release();
            lVar11 = lVar7;
            if (lVar10 == param_3) break;
            lVar7 = lVar7 + 8;
            lVar11 = lVar14;
          } while (lVar7 != lVar14);
          lVar14 = plVar4[1];
        }
        if (lVar11 == lVar14) {
          for (lVar7 = *plVar4; lVar7 != lVar14; lVar7 = lVar7 + 8) {
            lVar11 = lVar7;
            _objc_loadWeakRetained();
            _objc_release();
            if (lVar11 != 0) {
              FUN_106364bd4(plVar16,lVar7);
            }
          }
          goto LAB_106364734;
        }
      }
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar4 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar5 = plStack_b0 + 1;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      _objc_release(lVar6);
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar13);
  }
  plVar4 = plStack_90;
  _objc_initWeak(&lStack_d8,param_3);
  plStack_b8 = &lStack_d8;
  FUN_106366480(plVar4,&lStack_d8,&plStack_b8);
  func_0x000106364b60(plVar4 + 5,plStack_a0,plStack_98);
  _objc_destroyWeak(&lStack_d8);
  plStack_e8 = plStack_78;
  plStack_f0 = plStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_106364d14((long *)(param_1 + 0x48),&plStack_f0);
  plVar4 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar5 = plStack_e8 + 1;
    do {
      lVar13 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plStack_f8 = plStack_88;
  plStack_100 = plStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000106364d5c((undefined8 *)(param_1 + 0x58),&plStack_100);
  plVar4 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar5 = plStack_f8 + 1;
    do {
      lVar13 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar5 = plStack_98 + 1;
    do {
      lVar13 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
    do {
      lVar13 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar13 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106364aec; end: 106364bd3;  */

undefined8 * FUN_106364aec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106364bd4; end: 106364d13;  */

void FUN_106364bd4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_106365ea4();
LAB_106364d10:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_106364d10;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 106364d14; end: 106364da3;  */

void FUN_106364d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 106364da4; end: 10636541f; -[SCOperaEventListenerAnnouncer removeListener:] */

void FUN_106364da4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar11 = (long *)(param_1 + 0x58);
  lVar12 = *plVar11;
  if (lVar12 == 0) goto LAB_10636532c;
  _objc_initWeak(&lStack_80,param_3);
  plStack_b0 = &lStack_80;
  FUN_106366480(lVar12,&lStack_80,&plStack_b0);
  plVar13 = *(long **)(lVar12 + 0x28);
  plStack_70 = *(long **)(lVar12 + 0x30);
  if (plStack_70 != (long *)0x0) {
    plVar4 = plStack_70 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_78 = plVar13;
  _objc_destroyWeak(&lStack_80);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)*plVar11;
    if (plVar13[2] == 1) {
      uStack_90 = 0;
      plStack_88 = (long *)0x0;
      FUN_106364d14(param_1 + 0x48,&uStack_90);
      plVar13 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar4 = plStack_88 + 1;
        do {
          lVar12 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      uStack_a0 = 0;
      plStack_98 = (long *)0x0;
      func_0x000106364d5c(plVar11,&uStack_a0);
      if (plStack_98 != (long *)0x0) {
        plVar11 = plStack_98 + 1;
        do {
          lVar12 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar13 = plStack_98;
        } while (cVar2 != '\0');
LAB_1063652d8:
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    else {
      plVar4 = (long *)0x40;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_FUN_11091d448;
      plVar4[6] = 0;
      plVar4[5] = 0;
      plStack_b0 = plVar4 + 3;
      plVar4[4] = 0;
      *plStack_b0 = 0;
      *(undefined4 *)(plVar4 + 7) = 0x3f800000;
      plVar5 = (long *)0x30;
      plStack_a8 = plVar4;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_11091d498;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plStack_c0 = plVar5 + 3;
      *plStack_c0 = (long)(plVar5 + 4);
      plVar4 = *(long **)(*(long *)(param_1 + 0x48) + 0x10);
      plStack_b8 = plVar5;
      if (plVar4 != (long *)0x0) {
        do {
          plVar13 = plStack_78 + 1;
          plVar5 = (long *)*plStack_78;
          if (plVar5 == plVar13) {
LAB_106364f98:
            if (plVar5 == plVar13) goto LAB_1063650f4;
            plVar5 = (long *)0x30;
            __Znwm();
            plVar5[1] = 0;
            plVar5[2] = 0;
            *plVar5 = (long)&PTR_FUN_11091d538;
            plVar9 = plVar5 + 3;
            *plVar9 = 0;
            plVar5[4] = 0;
            plVar5[5] = 0;
            puVar1 = (undefined8 *)plVar4[3];
            plVar13 = (long *)plVar4[4];
            if (plVar13 != (long *)0x0) {
              plVar6 = plVar13 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = *plVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plVar6 = (long *)*puVar1;
            plVar10 = (long *)puVar1[1];
            puStack_e0 = puVar1;
            plStack_d8 = plVar13;
            plStack_d0 = plVar9;
            plStack_c8 = plVar5;
            if ((long)plVar10 - (long)plVar6 == 8) {
              _objc_loadWeakRetained();
              _objc_release();
              if (plVar6 != param_3) {
                plVar6 = (long *)*puVar1;
                plVar10 = (long *)puVar1[1];
                goto LAB_10636505c;
              }
            }
            else {
LAB_10636505c:
              for (; plVar6 != plVar10; plVar6 = plVar6 + 1) {
                plVar7 = plVar6;
                _objc_loadWeakRetained();
                if (plVar7 != (long *)0x0) {
                  plVar8 = plVar6;
                  _objc_loadWeakRetained();
                  _objc_release();
                  _objc_release(plVar7);
                  if (plVar8 != param_3) {
                    FUN_106364bd4(plVar9,plVar6);
                  }
                }
              }
              plVar6 = plStack_b0;
              FUN_10636608c(plStack_b0,plVar4 + 2,plVar4 + 2);
              FUN_106364aec(plVar6 + 3,plVar9,plVar5);
            }
            if (plVar13 != (long *)0x0) {
              plVar5 = plVar13 + 1;
              do {
                lVar12 = *plVar5;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            plVar13 = plStack_c8;
            if (plStack_c8 != (long *)0x0) {
              plVar5 = plStack_c8 + 1;
              do {
                lVar12 = *plVar5;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
          }
          else {
            do {
              if (plVar5[4] == plVar4[2]) goto LAB_106364f98;
              plVar9 = plVar5;
              plVar6 = (long *)plVar5[1];
              if ((long *)plVar5[1] == (long *)0x0) {
                do {
                  plVar5 = (long *)plVar9[2];
                  bVar3 = plVar9 != (long *)*plVar5;
                  plVar9 = plVar5;
                } while (bVar3);
              }
              else {
                do {
                  plVar5 = plVar6;
                  plVar6 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
              }
            } while (plVar5 != plVar13);
LAB_1063650f4:
            plVar13 = plStack_b0;
            FUN_10636608c(plStack_b0,plVar4 + 2,plVar4 + 2);
            FUN_106364aec(plVar13 + 3,plVar4[3],plVar4[4]);
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        plVar13 = (long *)*plVar11;
      }
      plVar4 = (long *)*plVar13;
      plStack_f0 = plStack_b0;
      plStack_e8 = plStack_a8;
      while (plStack_b0 = plStack_f0, plStack_a8 = plStack_e8, plVar4 != plVar13 + 1) {
        plVar5 = plVar4 + 4;
        plVar9 = plVar5;
        _objc_loadWeakRetained();
        if (plVar9 != (long *)0x0) {
          plVar6 = plVar5;
          _objc_loadWeakRetained();
          _objc_release();
          _objc_release(plVar9);
          if (plVar6 != param_3) {
            plVar9 = plStack_c0;
            plStack_d0 = plVar5;
            FUN_106366480(plStack_c0,plVar5,&plStack_d0);
            func_0x000106364b60(plVar9 + 5,plVar4[5],plVar4[6]);
          }
        }
        plVar5 = (long *)plVar4[1];
        plVar9 = plVar4;
        plStack_f0 = plStack_b0;
        plStack_e8 = plStack_a8;
        if ((long *)plVar4[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar9[2];
            bVar3 = plVar9 != (long *)*plVar4;
            plVar9 = plVar4;
          } while (bVar3);
        }
        else {
          do {
            plVar4 = plVar5;
            plVar5 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
      }
      if (plStack_e8 != (long *)0x0) {
        plVar13 = plStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_106364d14((long *)(param_1 + 0x48),&plStack_f0);
      plVar13 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar4 = plStack_e8 + 1;
        do {
          lVar12 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plStack_f8 = plStack_b8;
      plStack_100 = plStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar13 = plStack_b8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000106364d5c(plVar11,&plStack_100);
      plVar11 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar13 = plStack_f8 + 1;
        do {
          lVar12 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar13 = plStack_b8 + 1;
        do {
          lVar12 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (plStack_a8 != (long *)0x0) {
        plVar11 = plStack_a8 + 1;
        do {
          lVar12 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar13 = plStack_a8;
        } while (cVar2 != '\0');
        goto LAB_1063652d8;
      }
    }
  }
  plVar11 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar13 = plStack_70 + 1;
    do {
      lVar12 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10636532c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return;
}



/* Entry: 106365420; end: 10636542b; -[SCOperaEventListenerAnnouncer operaViewDidSendEvent:] */

void FUN_106365420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEvent_page_params__1125855e8,param_3,0,0);
  return;
}



/* Entry: 10636542c; end: 106365437; -[SCOperaEventListenerAnnouncer operaViewDidSendEvent:params:] */

void FUN_10636542c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEvent_page_params__1125855e8,param_3,0,param_4);
  return;
}



/* Entry: 106365438; end: 10636543f; -[SCOperaEventListenerAnnouncer operaViewDidSendEvent:page:] */

void FUN_106365438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendEvent_page_params__1125855e8,param_3,param_4,0);
  return;
}



/* Entry: 106365440; end: 106365443; -[SCOperaEventListenerAnnouncer operaViewDidSendEvent:page:params:] */

void FUN_106365440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendEvent_page_params__1125855e8);
  return;
}



/* Entry: 106365444; end: 1063656e3; -[SCOperaEventListenerAnnouncer _sendEvent:page:params:] */

void FUN_106365444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar7 = PTR_PTR_1126b2e48;
  func_0x00010c2709c0(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar7);
  lVar8 = param_5;
  if (lVar10 == 0) {
    lVar8 = param_1;
    func_0x00010be6fec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  lVar10 = param_1 + 0x48;
  __ZNSt3__112__get_sp_mutEPKv(lVar10);
  __ZNSt3__18__sp_mut4lockEv();
  lVar9 = *(long *)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __ZNSt3__18__sp_mut6unlockEv(lVar10);
  if (lVar9 != 0) {
    FUN_10636608c(lVar9,&uStack_58,&uStack_58);
    plVar2 = *(long **)(lVar9 + 0x18);
    plVar4 = *(long **)(lVar9 + 0x20);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (plVar2 != (long *)0x0) {
      lVar10 = *(long *)(param_1 + 0x70);
      func_0x00010bf9b1c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 != 0) {
        param_1 = lVar10;
      }
      _objc_retain(param_1);
      _objc_release(lVar10);
      lVar9 = plVar2[1];
      for (lVar10 = *plVar2; lVar10 != lVar9; lVar10 = lVar10 + 8) {
        lVar11 = lVar10;
        _objc_loadWeakRetained(lVar10);
        func_0x00010be9f980(param_1);
        _objc_release(lVar11);
      }
      _objc_release(param_1);
    }
    if (plVar4 != (long *)0x0) {
      plVar2 = plVar4 + 1;
      do {
        lVar10 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar10 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  _objc_release(lVar8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063656e4; end: 1063657e7; -[SCOperaEventListenerAnnouncer _sendOperaEventToListenter:eventName:page:params:] */

void FUN_1063656e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eefa0(uVar2,param_2,param_4,param_3,uVar1,param_6);
  _objc_release(uVar1);
  func_0x00010c0eb7c0(param_3,param_2,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063657e8; end: 106365a87; -[SCOperaEventListenerAnnouncer _paramsWithTimestamp:] */

void FUN_1063657e8(double param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *****pppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  undefined **ppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 uStack_168;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  double dStack_e8;
  double dStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 ****ppppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 ****ppppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b2e48;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar4;
    _CACurrentMediaTime();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2e48;
    ppppuStack_68 = pppppuVar5;
    func_0x00010c270aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_70 = puVar6;
    func_0x00010bd55f40();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = &ppppuStack_68;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_60 = ppuVar14;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    _objc_release(puVar6);
    _objc_release(pppppuVar5);
    _objc_release(puVar4);
  }
  else {
    puVar4 = param_4;
    func_0x00010c0d3c80();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar14 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2e48;
    func_0x00010c2709c0(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bd55f40();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2e48;
    func_0x00010c270aa0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar5;
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar6);
    _objc_release(pppppuVar5);
    puVar7 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
  }
  puVar8 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar14);
  _objc_release(puVar6);
  _objc_release(pppppuVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  puVar7 = puVar8;
  __Unwind_Resume();
  pcStack_88 = FUN_106365a88;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c0 = ppuVar14;
  puStack_b8 = puVar6;
  ppppuStack_b0 = pppppuVar5;
  puStack_a8 = puVar8;
  puStack_a0 = puVar4;
  puStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar11);
  pppppuVar5 = pppppuVar11;
  func_0x00010c26fa00();
  pppppuVar9 = pppppuVar11;
  func_0x00010c26fa20();
  pppppuVar10 = pppppuVar5;
  if (pppppuVar5 != (undefined8 *****)0x0 || pppppuVar9 != (undefined8 *****)0x0) {
    _objc_initWeak(auStack_d8,puVar7);
    pppppuVar10 = (undefined8 *****)PTR_PTR_1126c9e20;
    _objc_alloc();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_106365c8c;
    puStack_f8 = &UNK_11091d408;
    param_3 = auStack_d8;
    _objc_copyWeak(auStack_f0,param_3);
    dStack_e0 = (double)pppppuVar9 / 1000.0;
    dStack_e8 = (double)pppppuVar5 / 1000.0;
    func_0x00010bffae20();
    puVar4 = PTR_PTR_1126c9e28;
    _objc_alloc();
    pppppuVar9 = (undefined8 *****)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppppuStack_d0 = pppppuVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010c050a60();
    uVar12 = *(undefined8 *)(puVar7 + 0x70);
    *(undefined **)(puVar7 + 0x70) = puVar4;
    _objc_release(uVar12);
    _objc_release(pppppuVar9);
    _objc_release(pppppuVar10);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_d8);
    ppuVar14 = &puStack_110;
  }
  pppppuVar5 = pppppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pppppuVar9);
    _objc_release(pppppuVar10);
    _objc_destroyWeak(ppuVar14 + 4);
    _objc_destroyWeak(auStack_d8);
    _objc_release(pppppuVar11);
    __Unwind_Resume();
    _objc_retain(param_3);
    pppppuVar11 = pppppuVar5 + 4;
    _objc_loadWeakRetained();
    if ((pppppuVar11 != (undefined8 *****)0x0) &&
       (((double)pppppuVar5[5] < param_1 || ((double)pppppuVar5[6] < param_1)))) {
      uStack_168 = 0;
      func_0x00010bfc2740(param_3);
      func_0x00010bfc2740(param_3);
      ppppuVar15 = pppppuVar5[6];
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (0.0 < (double)ppppuVar15) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_1) && !NAN((double)ppppuVar15)) {
          bVar1 = param_1 < (double)ppppuVar15;
          bVar2 = param_1 == (double)ppppuVar15;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        ppppuVar15 = pppppuVar11[0xf];
        if (ppppuVar15 == (undefined8 ****)0x0) {
          ppppuVar15 = (undefined8 ****)PTR_PTR_1126c99e8;
          _objc_alloc_init();
          ppppuVar13 = pppppuVar11[0xf];
          pppppuVar11[0xf] = ppppuVar15;
          _objc_release(ppppuVar13);
          ppppuVar15 = pppppuVar11[0xf];
        }
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(ppppuVar15);
        _objc_opt_class(0);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        FUN_10636ec00(param_1,ppppuVar15,uStack_168,0);
        _objc_release(uStack_168);
        _objc_release(ppppuVar15);
        _objc_release(0);
        _objc_release(0);
      }
    }
    _objc_release(pppppuVar11);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 106365a88; end: 106365c8b; -[SCOperaEventListenerAnnouncer _setupExecutionControllerForTimeTracking:] */

void FUN_106365a88(double param_1,long param_2,undefined1 *param_3,undefined *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **unaff_x24;
  double dVar9;
  undefined8 uStack_e8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar4 = param_4;
  func_0x00010c26fa00();
  puVar5 = param_4;
  func_0x00010c26fa20();
  puVar6 = puVar4;
  if (puVar4 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
    _objc_initWeak(auStack_58,param_2);
    puVar6 = PTR_PTR_1126c9e20;
    _objc_alloc();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106365c8c;
    puStack_78 = &UNK_11091d408;
    param_3 = auStack_58;
    _objc_copyWeak(auStack_70,param_3);
    dStack_60 = (double)puVar5 / 1000.0;
    dStack_68 = (double)puVar4 / 1000.0;
    func_0x00010bffae20();
    puVar4 = PTR_PTR_1126c9e28;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010c050a60();
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    *(undefined **)(param_2 + 0x70) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    unaff_x24 = &puStack_90;
  }
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
    _objc_destroyWeak(auStack_58);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(param_3);
    puVar5 = puVar4 + 0x20;
    _objc_loadWeakRetained();
    if ((puVar5 != (undefined *)0x0) &&
       ((*(double *)(puVar4 + 0x28) < param_1 || (*(double *)(puVar4 + 0x30) < param_1)))) {
      uStack_e8 = 0;
      func_0x00010bfc2740(param_3);
      func_0x00010bfc2740(param_3);
      dVar9 = *(double *)(puVar4 + 0x30);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (0.0 < dVar9) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_1) && !NAN(dVar9)) {
          bVar1 = param_1 < dVar9;
          bVar2 = param_1 == dVar9;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        lVar8 = *(long *)(puVar5 + 0x78);
        if (lVar8 == 0) {
          puVar4 = PTR_PTR_1126c99e8;
          _objc_alloc_init();
          uVar7 = *(undefined8 *)(puVar5 + 0x78);
          *(undefined **)(puVar5 + 0x78) = puVar4;
          _objc_release(uVar7);
          lVar8 = *(long *)(puVar5 + 0x78);
        }
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(lVar8);
        _objc_opt_class(0);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        FUN_10636ec00(param_1,lVar8,uStack_e8,0);
        _objc_release(uStack_e8);
        _objc_release(lVar8);
        _objc_release(0);
        _objc_release(0);
      }
    }
    _objc_release(puVar5);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 106365c8c; end: 106365e2b;  */

void FUN_106365c8c(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar4 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar4 != 0) &&
     ((*(double *)(param_2 + 0x28) < param_1 || (*(double *)(param_2 + 0x30) < param_1)))) {
    uStack_58 = 0;
    func_0x00010bfc2740(param_3);
    func_0x00010bfc2740(param_3);
    dVar8 = *(double *)(param_2 + 0x30);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < dVar8) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1) && !NAN(dVar8)) {
        bVar1 = param_1 < dVar8;
        bVar2 = param_1 == dVar8;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      lVar7 = *(long *)(lVar4 + 0x78);
      if (lVar7 == 0) {
        puVar5 = PTR_PTR_1126c99e8;
        _objc_alloc_init();
        uVar6 = *(undefined8 *)(lVar4 + 0x78);
        *(undefined **)(lVar4 + 0x78) = puVar5;
        _objc_release(uVar6);
        lVar7 = *(long *)(lVar4 + 0x78);
      }
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(lVar7);
      _objc_opt_class(0);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      FUN_10636ec00(param_1,lVar7,uStack_58,0);
      _objc_release(uStack_58);
      _objc_release(lVar7);
      _objc_release(0);
      _objc_release(0);
    }
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106365e2c; end: 106365e7f; -[SCOperaEventListenerAnnouncer .cxx_destruct] */

void FUN_106365e2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  func_0x000106366034(param_1 + 0x58);
  FUN_106365f58(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106365e80; end: 106365ea3; -[SCOperaEventListenerAnnouncer .cxx_construct] */

void FUN_106365e80(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 106365ea4; end: 106365eb7;  */

void FUN_106365ea4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_11091d448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106365eb8; end: 106365ec7;  */

void FUN_106365eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106365ec8; end: 106365ee7;  */

void FUN_106365ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d448;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106365ee8; end: 106365f53;  */

void FUN_106365ee8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x28);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10636671c(plVar1 + 3);
    _objc_release(plVar1[2]);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106365f54; end: 106365f57;  */

void FUN_106365f54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106365f58; end: 106365faf;  */

long FUN_106365f58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106365fb0; end: 106365fbf;  */

void FUN_106365fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d498;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106365fc0; end: 106365fdf;  */

void FUN_106365fc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d498;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106365fe0; end: 106365feb;  */

void FUN_106365fe0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_106365fec(*puVar1);
    FUN_106365fec(puVar1[1]);
    func_0x000106366628(puVar1 + 5);
    _objc_destroyWeak(puVar1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 106365fec; end: 10636608b;  */

void FUN_106365fec(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_106365fec(*param_1);
    FUN_106365fec(param_1[1]);
    func_0x000106366628(param_1 + 5);
    _objc_destroyWeak(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10636608c; end: 10636644b;  */

long * FUN_10636608c(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x26;
  
  uVar3 = *param_2;
  func_0x00010bfde980();
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      unaff_x26 = uVar15 & uVar3;
    }
    else {
      unaff_x26 = uVar3;
      if (uVar14 <= uVar3) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar3 / uVar14;
        }
        unaff_x26 = uVar3 - uVar7 * uVar14;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          uVar7 = plVar6[2];
          func_0x00010c0720c0();
          if ((uVar7 & 1) != 0) {
            return plVar6;
          }
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar14 <= uVar7) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar7 / uVar14;
            }
            uVar7 = uVar7 - uVar8 * uVar14;
          }
          if (uVar7 != unaff_x26) break;
        }
      }
    }
  }
  plVar6 = param_1 + 2;
  plVar4 = (long *)0x28;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar3;
  lVar13 = *param_3;
  _objc_retain(lVar13);
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = lVar13;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_106366368;
  uVar15 = 1;
  if (2 < uVar14) {
    uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar15 = uVar15 | uVar14 << 1;
  uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  if (uVar15 - 1 == 0) {
    uVar15 = 2;
  }
  else if ((uVar15 & uVar15 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = param_1[1];
  if (uVar14 < uVar15) {
LAB_106366200:
    if (uVar15 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x106366434);
      (*pcVar2)();
    }
    lVar13 = uVar15 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar13;
    if (lVar5 != 0) {
      __ZdlPv();
      lVar13 = *param_1;
    }
    param_1[1] = uVar15;
    _bzero(lVar13,uVar15 << 3);
    plVar9 = (long *)param_1[2];
    uVar14 = uVar15;
    if (plVar9 != (long *)0x0) {
      uVar7 = plVar9[1];
      uVar8 = uVar15 - 1;
      if ((uVar15 & uVar8) == 0) {
        uVar7 = uVar7 & uVar8;
      }
      else if (uVar15 <= uVar7) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar7 / uVar15;
        }
        uVar7 = uVar7 - uVar12 * uVar15;
      }
      *(long **)(lVar13 + uVar7 * 8) = plVar6;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar15 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar15 <= uVar12) {
          uVar1 = 0;
          if (uVar15 != 0) {
            uVar1 = uVar12 / uVar15;
          }
          uVar12 = uVar12 - uVar1 * uVar15;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar7) {
          if (*(long *)(lVar13 + uVar12 * 8) == 0) {
            *(long **)(lVar13 + uVar12 * 8) = plVar9;
            uVar7 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar13 + uVar12 * 8);
            **(long **)(lVar13 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar15 < uVar14) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar15 <= uVar7) {
      uVar15 = uVar7;
    }
    if (uVar15 < uVar14) {
      if (uVar15 != 0) goto LAB_106366200;
      lVar13 = *param_1;
      *param_1 = 0;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x26 = uVar14 - 1 & uVar3;
  }
  else {
    unaff_x26 = uVar3;
    if (uVar14 <= uVar3) {
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = uVar3 / uVar14;
      }
      unaff_x26 = uVar3 - uVar15 * uVar14;
    }
  }
LAB_106366368:
  lVar13 = *param_1;
  plVar9 = *(long **)(lVar13 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(lVar13 + unaff_x26 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar3 = *(ulong *)(*plVar4 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar3 = uVar3 & uVar14 - 1;
      }
      else if (uVar14 <= uVar3) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar3 / uVar14;
        }
        uVar3 = uVar3 - uVar15 * uVar14;
      }
      *(long **)(lVar13 + uVar3 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 10636644c; end: 10636647f;  */

void FUN_10636644c(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_10636671c(param_2 + 0x18);
    _objc_release(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 106366480; end: 106366567;  */

undefined8 * FUN_106366480(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)param_1[1];
  plVar4 = param_1 + 1;
  while (plVar5 = plVar4, plVar3 != (long *)0x0) {
    while (plVar5 = plVar3, uVar1 = param_2, FUN_106366568(param_2,plVar5 + 4), (int)uVar1 == 0) {
      plVar3 = plVar5 + 4;
      FUN_106366568(plVar3,param_2);
      if ((int)plVar3 == 0) {
        if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
          return (undefined8 *)*plVar4;
        }
        goto LAB_1063664f4;
      }
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1063664f4;
    }
    plVar4 = plVar5;
    plVar3 = (long *)*plVar5;
  }
LAB_1063664f4:
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  _objc_copyWeak(puVar2 + 4,*param_3);
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar5;
  *plVar4 = (long)puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],puVar2);
  param_1[2] = param_1[2] + 1;
  return puVar2;
}



/* Entry: 106366568; end: 1063665ab;  */

bool FUN_106366568(ulong param_1,ulong param_2)

{
  _objc_loadWeakRetained();
  _objc_loadWeakRetained(param_2);
  _objc_release();
  _objc_release(param_1);
  return param_1 < param_2;
}



/* Entry: 1063665ac; end: 1063665bb;  */

void FUN_1063665ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d4e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1063665bc; end: 1063665db;  */

void FUN_1063665bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d4e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1063665dc; end: 1063665e7;  */

void FUN_1063665dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1063665e8(*puVar1);
    FUN_1063665e8(puVar1[1]);
    _objc_release(puVar1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1063665e8; end: 10636667f;  */

void FUN_1063665e8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1063665e8(*param_1);
    FUN_1063665e8(param_1[1]);
    _objc_release(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 106366680; end: 10636668f;  */

void FUN_106366680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d538;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106366690; end: 1063666af;  */

void FUN_106366690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091d538;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1063666b0; end: 106366717;  */

void FUN_1063666b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 106366718; end: 10636671b;  */

void FUN_106366718(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10636671c; end: 106366773;  */

long FUN_10636671c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106366774; end: 10636681f; -[SCOperaBlurViewConfiguration initWithText:image:] */

undefined1 *
FUN_106366774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0f80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106366820; end: 106366843; -[SCOperaBlurViewConfiguration copyWithZone:] */

undefined8 FUN_106366820(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106366844; end: 1063668b7; -[SCOperaBlurViewConfiguration hash] */

undefined8 * FUN_106366844(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106366938:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106366944;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106366944;
        }
        goto LAB_106366938;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106366944:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1063668b8; end: 10636695f; -[SCOperaBlurViewConfiguration isEqual:] */

long FUN_1063668b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106366938:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106366944;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106366944;
        }
        goto LAB_106366938;
      }
    }
    lVar3 = 0;
  }
LAB_106366944:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106366960; end: 106366967; -[SCOperaBlurViewConfiguration text] */

undefined8 FUN_106366960(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


