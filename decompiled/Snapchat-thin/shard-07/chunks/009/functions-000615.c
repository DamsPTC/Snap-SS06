/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b796cc; end: 105b7970f; -[SCFriendsFeedTableHeaderRenderer dismissStoriesEverywhereOpera] */

void FUN_105b796cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = PTR_PTR_1126c2af0;
  func_0x00010bf83f60(PTR_PTR_1126c2af0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b79710; end: 105b79767; -[SCFriendsFeedTableHeaderRenderer setStoriesCarouselVisible:] */

void FUN_105b79710(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
    func_0x00010c074c20();
    if (param_3 == iVar1) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0,param_1,PTR_s__refreshTableHeaderViewWithOffse_11257fc60);
      return;
    }
  }
  return;
}



/* Entry: 105b79768; end: 105b797bf; -[SCFriendsFeedTableHeaderRenderer didSelectShortcut:shortcutType:] */

void FUN_105b79768(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b080();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b797c0; end: 105b79827; -[SCFriendsFeedTableHeaderRenderer didUpdateShortcutBadges:shortcuts:] */

void FUN_105b797c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e6a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b79828; end: 105b798cf; -[SCFriendsFeedTableHeaderRenderer onLayoutChanged] */

void FUN_105b79828(undefined8 param_1)

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
  pcStack_40 = FUN_105b798d0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b798d0; end: 105b798fb;  */

void FUN_105b798d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b798fc; end: 105b79943; -[SCFriendsFeedTableHeaderRenderer _onLayoutChanged] */

void FUN_105b798fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf20c00(uVar1);
  _CGRectGetWidth();
  uVar2 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(uVar1);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s__refreshTableHeaderViewWithOffse_11257fc60)
  ;
  return;
}



/* Entry: 105b79944; end: 105b79977; -[SCFriendsFeedTableHeaderRenderer startBatchCameraReply:] */

void FUN_105b79944(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24df40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b79978; end: 105b79a1f; -[SCFriendsFeedTableHeaderRenderer hideShortcutsCarousel] */

void FUN_105b79978(undefined8 param_1)

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
  pcStack_40 = FUN_105b79a20;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b79a20; end: 105b79a4b;  */

void FUN_105b79a20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b79a4c; end: 105b79ab7; -[SCFriendsFeedTableHeaderRenderer _tableHeaderView] */

void FUN_105b79a4c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  *(undefined8 *)(param_2 + 200) = param_1;
  _objc_release(puVar1);
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,*(undefined8 *)(param_2 + 200),0x10000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b79ab8; end: 105b79abb; -[SCFriendsFeedTableHeaderRenderer handleViewHasAppearedIfNecessary] */

void FUN_105b79ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdddc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkIfWidthChangedAndLayoutIfN_1125550b8);
  return;
}



/* Entry: 105b79abc; end: 105b79abf; -[SCFriendsFeedTableHeaderRenderer willTransitionToSize:withTransitionCoordinator:] */

void FUN_105b79abc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdddc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkIfWidthChangedAndLayoutIfN_1125550b8);
  return;
}



/* Entry: 105b79ac0; end: 105b79b37; -[SCFriendsFeedTableHeaderRenderer _checkIfWidthChangedAndLayoutIfNeeded] */

void FUN_105b79ac0(double param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  if (param_1 != *(double *)(param_2 + 200)) {
    *(double *)(param_2 + 200) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,param_2,PTR_s__refreshTableHeaderViewWithOffse_11257fc60);
    return;
  }
  return;
}



/* Entry: 105b79b38; end: 105b79dd3; -[SCFriendsFeedTableHeaderRenderer _exposeBillboardPrompt] */

void FUN_105b79b38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105b79dd4;
  puStack_90 = &UNK_110845cb0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105b79e7c;
  puStack_b8 = &UNK_110849710;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar3;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105b79f6c;
  puStack_e0 = &UNK_11084d688;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c0311a0(puVar2);
  puVar3 = PTR_PTR_1126c2af8;
  _objc_alloc(PTR_PTR_1126c2af8);
  func_0x00010c01a140();
  puVar4 = puVar3;
  func_0x00010c070ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_80);
  puVar6 = puVar5;
  func_0x00010c25ff60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105b79dd4; end: 105b79e73;  */

void FUN_105b79dd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d66a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e500(puVar3,param_2,uVar2,&PTR___NSConcreteGlobalBlock_1108d88f0);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b79e74; end: 105b79e7b;  */

undefined8 FUN_105b79e74(void)

{
  return 1;
}



/* Entry: 105b79e7c; end: 105b79f37;  */

void FUN_105b79e7c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b79f38;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b79f38; end: 105b79f6b;  */

void FUN_105b79f38(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b79f6c; end: 105b7a027;  */

void FUN_105b79f6c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b7a028;
  puStack_48 = &UNK_110848708;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b7a028; end: 105b7a05b;  */

void FUN_105b7a028(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a05c; end: 105b7a0bb;  */

void FUN_105b7a05c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bed9ea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a0bc; end: 105b7a0e7; -[SCFriendsFeedTableHeaderRenderer headerPromptViewDidTap:] */

void FUN_105b7a0bc(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf19de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a0e8; end: 105b7a113; -[SCFriendsFeedTableHeaderRenderer headerPromptViewDidDismiss:] */

void FUN_105b7a0e8(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf19dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a114; end: 105b7a13f; -[SCFriendsFeedTableHeaderRenderer headerPromptViewExtraButtonDidTap:] */

void FUN_105b7a114(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf19e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a140; end: 105b7a173; -[SCFriendsFeedTableHeaderRenderer _updateIsDisplayingBillboard:] */

void FUN_105b7a140(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf19e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a174; end: 105b7a22f; -[SCFriendsFeedTableHeaderRenderer _attachBillboardView:] */

void FUN_105b7a174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  *(undefined8 *)(param_5 + 0x20) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  *(undefined8 *)(param_5 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_5,PTR_s__refreshTableHeaderViewWithOffse_11257fc60)
  ;
  return;
}



/* Entry: 105b7a230; end: 105b7a293; -[SCFriendsFeedTableHeaderRenderer _detachBillboardView:] */

void FUN_105b7a230(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = 0x10000000000000;
  func_0x00010be88b00(0,param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b7a294; end: 105b7a387; -[SCFriendsFeedTableHeaderRenderer _revealShortcutsCarouselWithSelectedShortcut:shouldPreselectShortcut:] */

void FUN_105b7a294(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be0d380(param_1);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b7a388;
    puStack_58 = &UNK_11085da78;
    _objc_copyWeak(auStack_50,auStack_38);
    uStack_48 = param_3;
    uStack_40 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b7a388; end: 105b7a3eb;  */

void FUN_105b7a388(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed10e0();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfed60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b7a3ec; end: 105b7a5e7; -[SCFriendsFeedTableHeaderRenderer _exposeShortcutsHeaderScope:] */

void FUN_105b7a3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar2 = PTR_PTR_1126af4a8;
    _objc_alloc(PTR_PTR_1126af4a8);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105b7a5e8;
    puStack_90 = &UNK_1108d8910;
    _objc_copyWeak(auStack_88,auStack_78);
    uStack_80 = param_3;
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010c0311a0(puVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar3);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40));
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
  }
  return;
}



/* Entry: 105b7a5e8; end: 105b7a6ab;  */

void FUN_105b7a5e8(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b7a6ac;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105b7a6ac; end: 105b7a6e3;  */

void FUN_105b7a6ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a6e4; end: 105b7a79f;  */

void FUN_105b7a6e4(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b7a7a0;
  puStack_48 = &UNK_110848708;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b7a7a0; end: 105b7a7d3;  */

void FUN_105b7a7a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7a7d4; end: 105b7a823; -[SCFriendsFeedTableHeaderRenderer _onShortcutsScopeExposedWithView:selectedShortcut:] */

void FUN_105b7a7d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  func_0x00010bdd0620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdfed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPreselectShortcut__11255d4f8,param_4);
  return;
}



/* Entry: 105b7a824; end: 105b7a877; -[SCFriendsFeedTableHeaderRenderer _removeShortcutsHeaderScope] */

void FUN_105b7a824(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 105b7a878; end: 105b7a92b; -[SCFriendsFeedTableHeaderRenderer _attachShortcutsViewIfNecessary] */

void FUN_105b7a878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xb8),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  func_0x00010bf20c00(uVar1);
  _CGRectGetWidth();
  uVar2 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(uVar1);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  func_0x00010be88b00(0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b7a92c; end: 105b7a95f; -[SCFriendsFeedTableHeaderRenderer _didPreselectShortcut:] */

void FUN_105b7a92c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0xd0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c232c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b7a960; end: 105b7a9cf; -[SCFriendsFeedTableHeaderRenderer _detachShortcutsView:] */

void FUN_105b7a960(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be8d3e0(param_1);
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0xc0) = 0x10000000000000;
    func_0x00010be88b00(0,param_1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b7a9d0; end: 105b7acdf; -[SCFriendsFeedTableHeaderRenderer _refreshTableHeaderViewWithOffsetToRetain:] */

void FUN_105b7a9d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c0;
  
  uVar1 = *(ulong *)(param_5 + 0xb8);
  func_0x00010c074c20();
  dVar13 = 0.0;
  dVar4 = 0.0;
  if ((uVar1 & 1) == 0) {
    dVar4 = *(double *)(param_5 + 0xc0);
  }
  uVar2 = *(ulong *)(param_5 + 0x70);
  dVar5 = dVar4;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    dVar13 = *(double *)(param_5 + 0x80);
  }
  uVar3 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = dVar5;
  uVar12 = param_2;
  uVar10 = param_3;
  uVar11 = param_4;
  _objc_release(uVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  if ((int)uVar1 == 0) {
    dStack_c0 = dVar6;
    uStack_d0 = uVar12;
    uStack_d8 = uVar10;
    uStack_e0 = uVar11;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0xb8));
  }
  else {
    dStack_c0 = *(double *)PTR__CGRectZero_110347608;
    uStack_d0 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uStack_d8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uStack_e0 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  }
  _CGRectGetMinY(dVar5,param_2,param_3,param_4);
  dVar7 = dVar5;
  _CGRectGetMinY(dVar5,param_2,param_3,param_4);
  dVar8 = dVar13 + dVar7;
  if (*(long *)(param_5 + 0xb8) != 0) {
    dVar8 = dVar4 + dVar13 + dVar7;
  }
  _CGRectGetMinX(dVar5,param_2,param_3,param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x70));
  _CGRectGetMinX(dStack_c0,uStack_d0,uStack_d8,uStack_e0);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0xb8));
  dVar7 = dVar6;
  _CGRectGetMinX(dVar6,uVar12,uVar10,uVar11);
  dVar9 = dVar6;
  _CGRectGetWidth(dVar6,uVar12,uVar10,uVar11);
  _CGRectGetHeight(dVar6,uVar12,uVar10,uVar11);
  func_0x00010c19f0e0(dVar7,dVar8,dVar9,dVar6,*(undefined8 *)(param_5 + 0x20));
  dVar6 = dVar5;
  _CGRectGetMinX(dVar5,param_2,param_3,param_4);
  dVar7 = dVar5;
  _CGRectGetMinY(dVar5,param_2,param_3,param_4);
  uVar12 = *(undefined8 *)(param_5 + 200);
  dVar13 = dVar13 + dVar4 + *(double *)(param_5 + 0x28);
  uVar1 = *(ulong *)(param_5 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar6,dVar7,uVar12,dVar13);
  _objc_release();
  _CGRectEqualToRect(dVar5,param_2,param_3,param_4,dVar6,dVar7,uVar12,dVar13);
  if ((param_1 <= 2.2250738585072014e-308) && ((uVar1 & 1) != 0)) {
    return;
  }
  uVar12 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar12);
  param_5 = param_5 + 0xd0;
  _objc_loadWeakRetained(param_5);
  func_0x00010c267d60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b7ace0; end: 105b7ad27; -[SCFriendsFeedTableHeaderRenderer _hideShortcutsCarouselIfNecessary] */

void FUN_105b7ace0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0xb8);
  func_0x00010c074c20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s__refreshTableHeaderViewWithOffse_11257fc60)
  ;
  return;
}



/* Entry: 105b7ad28; end: 105b7ad73; -[SCFriendsFeedTableHeaderRenderer _unhideShortcutsCarouselIfNecessary] */

void FUN_105b7ad28(long param_1)

{
  int iVar1;
  
  func_0x00010bdd0620();
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
  func_0x00010c074c20();
  if (iVar1 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,param_1,PTR_s__refreshTableHeaderViewWithOffse_11257fc60);
    return;
  }
  return;
}



/* Entry: 105b7ad74; end: 105b7ae57; -[SCFriendsFeedTableHeaderRenderer _subscribeToFriendsFeedEvents] */

void FUN_105b7ad74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105b7ae58; end: 105b7ae9f;  */

void FUN_105b7ae58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7aea0; end: 105b7afc3; -[SCFriendsFeedTableHeaderRenderer _handleFriendsFeedEvent:] */

void FUN_105b7aea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b7afc4;
  puStack_30 = &UNK_1108d8940;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105b7b0d8;
  puStack_58 = &UNK_1108450c8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105b7b120;
  puStack_80 = &UNK_1108450c8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105b7b168;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105b7b1b0;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105b7b1fc;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105b7b244;
  puStack_120 = &UNK_1108c9ee8;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bf6e0(param_3,param_2,&puStack_48,&PTR___NSConcreteGlobalBlock_1108d8970,
                      &PTR___NSConcreteGlobalBlock_1108d8990,&puStack_70,&puStack_98,&puStack_c0,
                      &puStack_e8,&puStack_110,&puStack_138);
  return;
}



/* Entry: 105b7afc4; end: 105b7b097;  */

void FUN_105b7afc4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105b7b098;
  puStack_58 = &UNK_11085da78;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b7b098; end: 105b7b0cf;  */

void FUN_105b7b098(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7b0d0; end: 105b7b0d7;  */

void FUN_105b7b0d0(void)

{
  return;
}



/* Entry: 105b7b0d8; end: 105b7b28f;  */

void FUN_105b7b0d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126c2af0;
  func_0x00010c13da60(PTR_PTR_1126c2af0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b7b290; end: 105b7b407; -[SCFriendsFeedTableHeaderRenderer _exposeStoriesCarouselScope] */

void FUN_105b7b290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    return;
  }
  puVar5 = PTR_PTR_1126b0870;
  _objc_alloc();
  lVar2 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c033f60(puVar5,param_2,lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar5;
  _objc_release(uVar4);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar5;
  _objc_release(uVar4);
  if (*(char *)(param_1 + 0x91) == '\x01') {
    puVar5 = PTR_PTR_1126c2b00;
    _objc_alloc(PTR_PTR_1126c2b00);
    func_0x00010c026680();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126c2b08;
  _objc_alloc(PTR_PTR_1126c2b08);
  func_0x00010c0333c0();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  lVar2 = param_1 + 0xe0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf243e0(uVar4,param_2,uVar1,lVar2,puVar3,*(undefined8 *)(param_1 + 0x78),param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105b7b408; end: 105b7b49b; -[SCFriendsFeedTableHeaderRenderer _attachStoriesCarouselView] */

void FUN_105b7b408(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x90) = 1;
  uVar1 = param_1;
  func_0x00010c07ad20();
  puVar2 = PTR_PTR_1126c2af0;
  if ((uVar1 & 1) == 0) {
    func_0x00010c10ae00(PTR_PTR_1126c2af0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c10ec00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b7b49c; end: 105b7b4e3; -[SCFriendsFeedTableHeaderRenderer _removeStoriesCarouselScope] */

void FUN_105b7b49c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b7b4e4; end: 105b7b523; -[SCFriendsFeedTableHeaderRenderer _removeStoriesCarouselView] */

void FUN_105b7b4e4(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010c12c960();
    *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be88b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,param_1,PTR_s__refreshTableHeaderViewWithOffse_11257fc60);
    return;
  }
  return;
}



/* Entry: 105b7b524; end: 105b7b547; -[SCFriendsFeedTableHeaderRenderer didDismissStoriesCarousel] */

void FUN_105b7b524(undefined8 param_1)

{
  func_0x00010be8d700();
                    /* WARNING: Could not recover jumptable at 0x00010be8d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeStoriesCarouselView_112580f68);
  return;
}



/* Entry: 105b7b548; end: 105b7b55b; -[SCFriendsFeedTableHeaderRenderer didInitializeStoriesCarousel] */

void FUN_105b7b548(long param_1)

{
  if (*(long *)(param_1 + 0x88) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd06f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attachStoriesCarouselView_112551b58);
    return;
  }
  return;
}



/* Entry: 105b7b55c; end: 105b7b5e3; -[SCFriendsFeedTableHeaderRenderer contentCollectionViewDidChangeHeight:] */

void FUN_105b7b55c(double param_1,long param_2)

{
  undefined8 uVar1;
  
  *(double *)(param_2 + 0x80) = param_1;
  func_0x00010be88b00(0);
  if (0.0 < param_1) {
    uVar1 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c2582a0(uVar1);
    _objc_release(uVar1);
    param_2 = param_2 + 0xd0;
    _objc_loadWeakRetained(param_2);
    func_0x00010c258280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 105b7b5e4; end: 105b7b613; -[SCFriendsFeedTableHeaderRenderer willPresentStories] */

void FUN_105b7b5e4(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c258400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7b614; end: 105b7b643; -[SCFriendsFeedTableHeaderRenderer didDismissStories] */

void FUN_105b7b614(long param_1)

{
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c258400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7b644; end: 105b7b64b; -[SCFriendsFeedTableHeaderRenderer isPresentingUnderChat] */

undefined1 FUN_105b7b644(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}



/* Entry: 105b7b64c; end: 105b7b653; -[SCFriendsFeedTableHeaderRenderer setIsPresentingUnderChat:] */

void FUN_105b7b64c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 105b7b654; end: 105b7b65b; -[SCFriendsFeedTableHeaderRenderer isCarouselPulldownEnabled] */

undefined1 FUN_105b7b654(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf1);
}



/* Entry: 105b7b65c; end: 105b7b663; -[SCFriendsFeedTableHeaderRenderer setIsCarouselPulldownEnabled:] */

void FUN_105b7b65c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf1) = param_3;
  return;
}



/* Entry: 105b7b664; end: 105b7b783; -[SCFriendsFeedTableHeaderRenderer .cxx_destruct] */

void FUN_105b7b664(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b7b784; end: 105b7b79b; +[SCFriendsFeedTableLoadingView textColor] */

void FUN_105b7b784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd999999999999a,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 105b7b79c; end: 105b7b827; -[SCFriendsFeedTableLoadingView loadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7b79c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112730e90;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1bed40(param_1,param_2,*(undefined1 *)(param_1 + _DAT_112730e94));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105b7b828; end: 105b7b937; -[SCFriendsFeedTableLoadingView failedLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7b828(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112730e98;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c2ae0;
    func_0x00010c26b920(PTR_PTR_1126c2ae0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e200f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e200f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbb60(param_1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105b7b938; end: 105b7bb4f; -[SCFriendsFeedTableLoadingView initWithFriendsFeedLoadingStatusStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105b7b938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puStack_68 = PTR_PTR_1126ec178;
  puVar2 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(0,0,param_1,0x4050800000000000,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_112730e9c);
    *(undefined **)((long)puVar2 + (long)_DAT_112730e9c) = puVar1;
    _objc_release(uVar7);
    func_0x00010bef9040(puVar2);
    _objc_initWeak(auStack_78,puVar2);
    uVar7 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c09d440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_112730ea0);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112730ea0) = uVar6;
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 105b7bb50; end: 105b7bbaf;  */

void FUN_105b7bb50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d440(param_2);
  _objc_release(param_2);
  func_0x00010c28c1c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7bbb0; end: 105b7bc73; -[SCFriendsFeedTableLoadingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7bbb0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ec178;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  uVar1 = 0x403e000000000000;
  func_0x00010c19f0e0((param_3 + -30.0) * 0.5,(param_4 + -30.0) * 0.5,0x403e000000000000,
                      0x403e000000000000,*(undefined8 *)(param_5 + _DAT_112730e90));
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(0,0,uVar1,*(undefined8 *)(param_5 + _DAT_112730e98));
  return;
}



/* Entry: 105b7bc74; end: 105b7bd13; -[SCFriendsFeedTableLoadingView updateViewsWithLoadingStatus:] */

/* WARNING: Possible PIC construction at 0x000105b7bcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b7bcf8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7bc74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 1U < 2) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 3) {
      func_0x00010c1bed40(param_1,param_2,1);
      func_0x00010bf9fcc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c1a7f60;
    }
    if (param_3 != 0) {
      return;
    }
    uVar1 = 1;
  }
  func_0x00010c1bed40(param_1,param_2,uVar1);
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105b7bd14; end: 105b7bd9f; -[SCFriendsFeedTableLoadingView setLoadingIndicatorHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7bd14(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  *(char *)(param_1 + _DAT_112730e94) = (char)param_3;
  if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + _DAT_112730ea4) & 1) != 0)) {
    lVar1 = param_1;
    func_0x00010c09cea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(lVar1);
    lVar1 = (long)_DAT_112730e90;
  }
  else {
    lVar1 = (long)_DAT_112730e90;
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 105b7bda0; end: 105b7bdcb; -[SCFriendsFeedTableLoadingView setIsOnscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7bda0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112730ea4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112730ea4) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1bed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setLoadingIndicatorHidden__11264d578,
             *(undefined1 *)(param_1 + _DAT_112730e94));
  return;
}



/* Entry: 105b7bdcc; end: 105b7bdff; -[SCFriendsFeedTableLoadingView handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7bdcc(long param_1)

{
  param_1 = param_1 + _DAT_112730ea8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb4d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b7be00; end: 105b7be1f; -[SCFriendsFeedTableLoadingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7be00(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112730ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b7be20; end: 105b7be33; -[SCFriendsFeedTableLoadingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7be20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112730ea8,param_3);
  return;
}



/* Entry: 105b7be34; end: 105b7be43; -[SCFriendsFeedTableLoadingView isOnscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105b7be34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112730ea4);
}



/* Entry: 105b7be44; end: 105b7beaf; -[SCFriendsFeedTableLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b7be44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112730ea8);
  _objc_storeStrong(param_1 + _DAT_112730e90,0);
  _objc_storeStrong(param_1 + _DAT_112730e98,0);
  _objc_storeStrong(param_1 + _DAT_112730ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112730e9c,0);
  return;
}



/* Entry: 105b7beb0; end: 105b7c327; -[SCFriendsFeedViewController _initScrollToTopButton] */

void FUN_105b7beb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010bfb6ca0();
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc(PTR_PTR_1126b6138);
  uVar5 = 0;
  func_0x00010c013de0(0,param_1,0x403e000000000000,0x403e000000000000);
  func_0x00010c1f7ce0(param_2,param_3,puVar1);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar3 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a840(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110e20118);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa420(0x4014000000000000,0x4014000000000000);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aac60();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d680();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xc4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x3d);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e4ccccd);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x4000000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4010000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bdd7400(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar3 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b7c328; end: 105b7c387; -[SCFriendsFeedViewController frameHeight] */

double FUN_105b7c328(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(param_5);
  return (param_4 - param_3) + -40.0;
}



/* Entry: 105b7c388; end: 105b7c463; -[SCFriendsFeedViewController fadeInScrollToTopButton] */

void FUN_105b7c388(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c152880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be3a3e0(param_1);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105b7c42c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03460(0x3fd3333340000000,0,0x3feb333340000000,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,4,&puStack_48,0);
  return;
}



/* Entry: 105b7c464; end: 105b7c547; -[SCFriendsFeedViewController fadeOutScrollToTopButton] */

void FUN_105b7c464(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  func_0x00010c152880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c152880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (0.01 < param_1) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105b7c548;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_2;
      func_0x00010bf03460(0x3fd3333340000000,0,0x3feb333340000000,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_3,4,&puStack_68,0);
    }
  }
  return;
}



/* Entry: 105b7c548; end: 105b7c57f;  */

void FUN_105b7c548(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b7c580; end: 105b7c5a7; -[SCFriendsFeedViewController _didTapScrollToTopButton] */

void FUN_105b7c580(undefined8 param_1)

{
  func_0x00010be583a0();
                    /* WARNING: Could not recover jumptable at 0x00010c152870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToTop__112632438,1);
  return;
}



/* Entry: 105b7c5a8; end: 105b7c5bb; -[SCFriendsFeedViewController _buttonTintColor] */

void FUN_105b7c5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithDynamicProvider__1125adf00,
             &PTR___NSConcreteGlobalBlock_1108d89d0);
  return;
}



/* Entry: 105b7c5bc; end: 105b7c5fb;  */

void FUN_105b7c5bc(void)

{
  func_0x00010c292b20();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b7c5fc; end: 105b7c65f; -[SCPreferences lastCheckTsInSecs] */

void FUN_105b7c5fc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e201d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 105b7c660; end: 105b7c66b; -[SCPreferences setLastCheckTsInSecs:] */

void FUN_105b7c660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e201d8);
  return;
}



/* Entry: 105b7c66c; end: 105b7c67f; -[SCFriendsFeedViewController pageViewName] */

void FUN_105b7c66c(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pageViewName_11261a2a0);
  return;
}



/* Entry: 105b7c680; end: 105b7c687; +[SCFriendsFeedViewController pageViewName] */

undefined8 FUN_105b7c680(void)

{
  return 0x67;
}



/* Entry: 105b7c688; end: 105b7c693; -[SCFriendsFeedViewController getPageName] */

undefined ** FUN_105b7c688(void)

{
  return &PTR____CFConstantStringClassReference_110e12ff8;
}



/* Entry: 105b810b8; end: 105b81183;  */

void FUN_105b810b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e201f8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105b81184; end: 105b8120f;  */

void FUN_105b81184(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a8;
  func_0x00010bf82860(PTR_PTR_1126c22a8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f360(uVar1,param_2,puVar2);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b81210; end: 105b81363;  */

void FUN_105b81210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dbe20();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b81364; end: 105b8137f;  */

void FUN_105b81364(void)

{
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b81380; end: 105b814fb;  */

void FUN_105b81380(void)

{
  _objc_alloc(PTR_PTR_1126c2b18);
  func_0x00010c0183c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b814fc; end: 105b8157f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b814fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730fd4);
    lVar1 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11e260(uVar2,param_2,8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b81580; end: 105b81723;  */

void FUN_105b81580(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b81724; end: 105b817bf;  */

void FUN_105b81724(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_2;
  func_0x00010bf140c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed3b20(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bede360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b817c0; end: 105b81827;  */

void FUN_105b817c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e20278,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}


