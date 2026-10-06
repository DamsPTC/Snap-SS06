/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c1afa4; end: 107c1afdb; -[SCDiscoverFeedAutoPlaybackControlsContainer .cxx_destruct] */

void FUN_107c1afa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107c1afdc; end: 107c1b597; -[SCDiscoverFeedAutoPlaybackControlsView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1afdc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126fa3a0;
  puVar1 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276c0d8) = 1;
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4032000000000000,0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar4);
    _objc_release(puVar5);
    func_0x00010c182220(puVar4);
    func_0x00010c219b60(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(puVar5);
    func_0x00010befbb60(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    puStack_a0 = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    puStack_98 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    puStack_90 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    puStack_88 = puVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x00010c2793a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    puStack_80 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    func_0x00010bf1ff80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010befbd60(puVar3);
    uVar27 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c0dc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c0dc) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar27);
    uVar27 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c0e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c0e0) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar27);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar23 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2793a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar1;
    puStack_b0 = puVar24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf1ff80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010beef8c0(puVar5);
    param_3 = SUB81(puVar9,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar26);
    _objc_release(puVar7);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar6);
    _objc_release(puVar23);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)((long)puVar1 + (long)_DAT_11276c0d8) = param_3;
  uVar27 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c0e0);
  puVar5 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4032000000000000,0x4032000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar27);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107c1b598; end: 107c1b603; -[SCDiscoverFeedAutoPlaybackControlsView setButtonMuteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b598(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + _DAT_11276c0d8) = (char)param_3;
  uVar1 = 0x279;
  if (param_3 == 0) {
    uVar1 = 0x27a;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276c0e0);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4032000000000000,0x4032000000000000,PTR_PTR_1126b0c40,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107c1b604; end: 107c1b63b; -[SCDiscoverFeedAutoPlaybackControlsView isTapOnButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b604(long param_1)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11276c0dc));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 107c1b63c; end: 107c1b66b; -[SCDiscoverFeedAutoPlaybackControlsView _handleMuteTap] */

void FUN_107c1b63c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c1b66c; end: 107c1b813; -[SCDiscoverFeedAutoPlaybackControlsView muteToggleAccessibilityCustomActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107c1b66c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **unaff_x22;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c074c20();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    _objc_release();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (uVar2 != 0) {
      if ((*(byte *)(param_1 + (long)_DAT_11276c0d8) & 1) == 0) {
        func_0x000107c7adf8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107c7ae10();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_initWeak(auStack_48,param_1);
      puVar3 = PTR__OBJC_CLASS___UIAccessibilityCustomAction_1126d0d38;
      _objc_alloc();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107c1b814;
      puStack_58 = &UNK_110964610;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c02d4e0();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_40 = puVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release();
      unaff_x22 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x22 + 0x20));
    _objc_destroyWeak(auStack_48);
    __Unwind_Resume();
    lVar5 = uVar1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar5 != 0) {
      func_0x00010be2c8e0(lVar5);
    }
    _objc_release(lVar5);
    return (undefined *)(ulong)(lVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107c1b814; end: 107c1b857;  */

bool FUN_107c1b814(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2c8e0(param_1);
  }
  _objc_release(param_1);
  return param_1 != 0;
}



/* Entry: 107c1b858; end: 107c1b877; -[SCDiscoverFeedAutoPlaybackControlsView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b858(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276c0e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c1b878; end: 107c1b88b; -[SCDiscoverFeedAutoPlaybackControlsView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b878(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276c0e4,param_3);
  return;
}



/* Entry: 107c1b88c; end: 107c1b8d7; -[SCDiscoverFeedAutoPlaybackControlsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b88c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276c0e4);
  _objc_storeStrong(param_1 + _DAT_11276c0e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c0dc,0);
  return;
}



/* Entry: 107c1b8d8; end: 107c1b8e3; +[SCDiscoverFeedPublisherStoryCollectionViewCell announcerIdentifier] */

undefined ** FUN_107c1b8d8(void)

{
  return &PTR____CFConstantStringClassReference_110eb3ef8;
}



/* Entry: 107c1b8e4; end: 107c1b8f3; -[SCDiscoverFeedPublisherStoryCollectionViewCell addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c0f0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107c1b8f4; end: 107c1b903; -[SCDiscoverFeedPublisherStoryCollectionViewCell removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c0f0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107c1b904; end: 107c1b993; -[SCDiscoverFeedPublisherStoryCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1b904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c0f4);
  *(undefined8 *)(param_1 + _DAT_11276c0f4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11276c0f8),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c0fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1b994; end: 107c1bf17; -[SCDiscoverFeedPublisherStoryCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107c1b994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa3a8;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c0f0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c0f0) = puVar3;
    _objc_release(uVar6);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    FUN_107c1a278(puVar1,PTR_s__handleTapAction__112528440);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000107c1a2dc(puVar1,PTR_s__handleLongPressAction__112531790);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_11276c100;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar6);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c104);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c104) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar8 = (long)_DAT_11276c108;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    _objc_release(puVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc0000000;
    pcStack_c0 = FUN_107c1bf18;
    puStack_b8 = &UNK_110a01028;
    puVar3 = PTR_PTR_1126ae720;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c10c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c10c) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d7338;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c110);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c110) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_initWeak(auStack_d8,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    uStack_f8 = param_1;
    uStack_f0 = param_2;
    uStack_e8 = param_3;
    uStack_e0 = param_4;
    _objc_copyWeak(auStack_100,auStack_d8);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c0fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c0fc) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d7318;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003f40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c114);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c114) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c118);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c118) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c11c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c11c) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d7320;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c120);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c120) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c124);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c124) = puVar3;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
  }
  return puVar1;
}



/* Entry: 107c1bf18; end: 107c1bf4b;  */

void FUN_107c1bf18(long param_1)

{
  _objc_alloc(PTR_PTR_1126d5ab8);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c1bf4c; end: 107c1bfc3;  */

void FUN_107c1bf4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d5a18;
  _objc_alloc(PTR_PTR_1126d5a18);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c1bfc4; end: 107c1bfdf;  */

void FUN_107c1bfc4(void)

{
  _objc_opt_new(PTR_PTR_1126d7308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c1bfe0; end: 107c1c023;  */

void FUN_107c1bfe0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5ae0;
  _objc_alloc(PTR_PTR_1126d5ae0);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c1c024; end: 107c1c0a3; -[SCDiscoverFeedPublisherStoryCollectionViewCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c128);
  *(undefined8 *)(param_1 + _DAT_11276c128) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c10c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1c0a4; end: 107c1c123; -[SCDiscoverFeedPublisherStoryCollectionViewCell setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c12c);
  *(undefined8 *)(param_1 + _DAT_11276c12c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c10c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c5a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1c124; end: 107c1c15b; -[SCDiscoverFeedPublisherStoryCollectionViewCell setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c130);
  *(undefined8 *)(param_1 + _DAT_11276c130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1c15c; end: 107c1c16b; -[SCDiscoverFeedPublisherStoryCollectionViewCell storyThumbnailImageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107c1c15c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276c134);
}



/* Entry: 107c1c16c; end: 107c1c1b3; -[SCDiscoverFeedPublisherStoryCollectionViewCell layoutSubviews] */

void FUN_107c1c16c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa3a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be49a40(param_1);
  return;
}



/* Entry: 107c1c1b4; end: 107c1c1f7; -[SCDiscoverFeedPublisherStoryCollectionViewCell sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c1b4(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 107c1c1f8; end: 107c1c30b; -[SCDiscoverFeedPublisherStoryCollectionViewCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c1f8(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,uint param_7,uint param_8)

{
  double *pdVar1;
  int iVar2;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong uVar3;
  
  pdVar1 = (double *)(param_5 + (long)_DAT_11276c13c);
  uVar3 = param_5;
  dVar6 = param_1;
  dVar8 = param_2;
  dVar10 = param_3;
  dVar12 = param_4;
  func_0x00010bfb68e0();
  iVar2 = (int)uVar3;
  dVar7 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar11 = pdVar1[2];
  dVar13 = pdVar1[3];
  _CGRectIntersectsRect(dVar7,dVar9,dVar11,dVar13,dVar6,dVar8,dVar10,dVar12);
  uVar3 = param_5;
  func_0x00010bfb68e0();
  dVar6 = param_1;
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar7,dVar9,dVar11,dVar13);
  if ((iVar2 != 0) && ((uVar3 & 1) == 0)) {
    func_0x00010be2fa60(param_5);
  }
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar4 = (long)_DAT_11276c140;
  if (((param_7 | param_8) != 1) || (0.1 < dVar6 - *(double *)(param_5 + lVar4))) {
    lVar5 = (long)_DAT_11276c144;
    *(double *)(param_5 + lVar5) = param_1;
    ((double *)(param_5 + lVar5))[1] = param_2;
    *(double *)(param_5 + lVar4) = dVar6;
  }
  return;
}



/* Entry: 107c1c30c; end: 107c1c35b; -[SCDiscoverFeedPublisherStoryCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c30c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa3a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11276c148));
  return;
}



/* Entry: 107c1c35c; end: 107c1c477; -[SCDiscoverFeedPublisherStoryCollectionViewCell setViewModel:] */

void FUN_107c1c35c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c22b8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107c1c478;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107c1c478; end: 107c1c4ab;  */

void FUN_107c1c478(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde26c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c1c4ac; end: 107c1c56b; +[SCDiscoverFeedPublisherStoryCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c1c4ac(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106920(uVar1);
  uVar3 = uVar1;
  dVar4 = param_2;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    func_0x00010bf27b00(uVar1);
    param_2 = param_2 + dVar4;
  }
  func_0x00010b8165e8(param_1,param_2);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107c1c56c; end: 107c1c56f; -[SCDiscoverFeedPublisherStoryCollectionViewCell autoPlayBaseView] */

void FUN_107c1c56c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentView_1125b10e0);
  return;
}



/* Entry: 107c1c570; end: 107c1c583; -[SCDiscoverFeedPublisherStoryCollectionViewCell autoPlayDesiredSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107c1c570(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11276c14c);
}



/* Entry: 107c1c584; end: 107c1c5b3; -[SCDiscoverFeedPublisherStoryCollectionViewCell autoPlayInsertBelowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c584(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c110);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c1c5b4; end: 107c1c5c3; -[SCDiscoverFeedPublisherStoryCollectionViewCell autoPlayControlsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c5b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c114),PTR_s_autoPlayControlsView_1125a1ff8);
  return;
}



/* Entry: 107c1c5c4; end: 107c1c5d3; -[SCDiscoverFeedPublisherStoryCollectionViewCell setAutoPlayControlsActive:withDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c114),
             PTR_s_setAutoPlayControlsActive_withDe_112638da8);
  return;
}



/* Entry: 107c1c5d4; end: 107c1c5e3; -[SCDiscoverFeedPublisherStoryCollectionViewCell setAutoPlayControlsMuteState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c114),PTR_s_setAutoPlayControlsMuteState__112638db0
            );
  return;
}



/* Entry: 107c1c5e4; end: 107c1c69b; -[SCDiscoverFeedPublisherStoryCollectionViewCell autoPlayViewObstructed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107c1c5e4(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = PTR_PTR_1126c22b8;
  uVar5 = *(ulong *)(param_1 + _DAT_11276c138);
  _objc_retain(uVar5);
  _objc_opt_class(puVar3);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar4 = uVar1;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar5 = uVar1;
    func_0x00010bf96140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar5 != 0;
    _objc_release();
  }
  else {
    bVar2 = true;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 107c1c69c; end: 107c1c7b3; -[SCDiscoverFeedPublisherStoryCollectionViewCell accessibilityCustomActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c69c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126fa3a8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_accessibilityCustomActions_112538c68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)plVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x00010befa160(puVar1);
  }
  lVar4 = *(long *)(param_1 + _DAT_11276c114);
  func_0x00010bf11920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010befa160(puVar1);
  }
  lVar6 = *(long *)(param_1 + _DAT_11276c0fc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c0e9560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar5 != 0) {
    func_0x00010befa120(puVar1);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c1c7b4; end: 107c1c873; -[SCDiscoverFeedPublisherStoryCollectionViewCell operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c7b4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c22b8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276c138);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_11276c108);
    _objc_retain(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107c1c874; end: 107c1c91f; -[SCDiscoverFeedPublisherStoryCollectionViewCell _compareAndUpdateViewModelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c874(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_11276c138);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  if (uVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar1 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) goto LAB_107c1c90c;
    }
    func_0x00010bee5000(param_1,param_2,param_3);
  }
LAB_107c1c90c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c1c920; end: 107c1cf17; -[SCDiscoverFeedPublisherStoryCollectionViewCell _layoutWithViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1c920(double param_1,double param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  
  lVar6 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar7 = param_3;
  dVar21 = param_1;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar25 = *(undefined8 *)(param_3 + _DAT_11276c14c);
  dVar19 = (double)((undefined8 *)(param_3 + _DAT_11276c14c))[1];
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar8 = (long)_DAT_11276c118;
  uVar2 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15900();
  _objc_release(uVar2);
  dVar9 = param_1;
  _CGRectGetMinX(param_1,param_2,uVar25,dVar19);
  dVar10 = param_1;
  _CGRectGetMinY(param_1,param_2,uVar25,dVar19);
  dVar10 = dVar21 + dVar10;
  dVar11 = param_1;
  _CGRectGetWidth(param_1,param_2,uVar25,dVar19);
  dVar12 = param_1;
  uVar2 = uVar25;
  dVar17 = dVar19;
  _CGRectGetHeight(param_1,param_2);
  dVar12 = dVar12 - dVar21;
  lVar6 = param_3;
  dVar13 = dVar12;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010b816528();
  func_0x00010b8166f8(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar14 = param_1;
  dVar16 = param_2;
  uVar4 = uVar25;
  dVar18 = dVar19;
  func_0x00010b816528();
  func_0x00010b8166f8(lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816528();
  func_0x00010b8166f8(lVar6);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11276c100;
  func_0x00010c19f0e0(param_1,param_2,uVar25,dVar19,*(undefined8 *)(param_3 + lVar6));
  uVar3 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar14,dVar16,uVar4,dVar18);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_3 + _DAT_11276c11c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar14,dVar16,uVar4,dVar18);
  _objc_release(uVar3);
  func_0x00010c19f0e0(dVar14,dVar16,uVar4,dVar18,*(undefined8 *)(param_3 + _DAT_11276c0f8));
  lVar7 = (long)_DAT_11276c150;
  if (*(long *)(param_3 + lVar7) != 0) {
    dVar24 = param_1;
    _CGRectGetWidth(param_1,param_2,uVar25,dVar19);
    dVar22 = dVar24;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar7));
    _CGRectGetWidth();
    dVar15 = param_1;
    _CGRectGetHeight(param_1,param_2,uVar25,dVar19);
    dVar20 = dVar15;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar7));
    _CGRectGetHeight();
    dVar15 = dVar15 - dVar20;
    dVar23 = dVar15 + -5.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar7));
    _CGRectGetWidth();
    dVar20 = dVar15;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar7));
    _CGRectGetHeight();
    lVar8 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b816528((dVar24 - dVar22) + -5.0,dVar23,dVar15,dVar20);
    func_0x00010b8166f8(lVar8);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar7));
    _objc_release(lVar8);
  }
  lVar8 = (long)_DAT_11276c154;
  if (*(long *)(param_3 + lVar8) != 0) {
    dVar24 = 5.0;
    if (*(long *)(param_3 + lVar7) != 0) {
      dVar24 = 10.0;
    }
    dVar22 = param_1;
    _CGRectGetWidth(param_1,param_2,uVar25,dVar19);
    dVar15 = dVar22;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar8));
    _CGRectGetWidth();
    dVar22 = dVar22 - dVar15;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar7));
    _CGRectGetWidth();
    _CGRectGetHeight(param_1,param_2,uVar25,dVar19);
    dVar19 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar8));
    _CGRectGetHeight();
    param_1 = param_1 - dVar19;
    dVar20 = param_1 + -5.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar8));
    _CGRectGetWidth();
    dVar19 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar8));
    _CGRectGetHeight();
    lVar7 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b816528((dVar22 - dVar15) - dVar24,dVar20,param_1,dVar19);
    func_0x00010b8166f8(lVar7);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar8));
    _objc_release(lVar7);
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_11276c10c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar14,dVar16,uVar4,dVar18);
  _objc_release(uVar3);
  func_0x00010c19f0e0(dVar14,dVar16,uVar4,dVar18,*(undefined8 *)(param_3 + _DAT_11276c104));
  func_0x00010c19f0e0(dVar9,dVar10,dVar11,dVar12,*(undefined8 *)(param_3 + _DAT_11276c108));
  lVar7 = (long)_DAT_11276c110;
  func_0x00010c217560(dVar21,*(undefined8 *)(param_3 + lVar7));
  dVar21 = dVar16;
  func_0x00010c19f0e0(dVar14,dVar16,uVar4,dVar18,*(undefined8 *)(param_3 + lVar7));
  lVar7 = (long)_DAT_11276c0fc;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar7);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    dVar21 = dVar16 + dVar18;
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar13,dVar21,uVar2,dVar17 - dVar18);
    _objc_release(uVar4);
    dVar14 = dVar13;
  }
  lVar7 = (long)_DAT_11276c120;
  uVar5 = *(ulong *)(param_3 + lVar7);
  if ((uVar5 != 0) && (func_0x00010c074c20(), (uVar5 & 1) == 0)) {
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar7));
    _CGRectGetWidth(dVar9,dVar10,dVar11,dVar12);
    uVar2 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010b816528((dVar9 - dVar14) + -12.0,dVar10 + 12.0,dVar14,dVar21);
    func_0x00010b8166f8(uVar2);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + lVar6),PTR_s_bringSubviewToFront__1125a5e68,
               *(undefined8 *)(param_3 + lVar7));
    return;
  }
  return;
}



/* Entry: 107c1cf18; end: 107c1dcbf; -[SCDiscoverFeedPublisherStoryCollectionViewCell _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1cf18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  lVar12 = (long)_DAT_11276c14c;
  func_0x00010c106920(param_5);
  func_0x00010b8165e8();
  *(undefined8 *)(param_3 + lVar12) = param_1;
  ((undefined8 *)(param_3 + lVar12))[1] = param_2;
  lVar12 = (long)_DAT_11276c114;
  func_0x00010c183a40(param_2,*(undefined8 *)(param_3 + lVar12));
  *(undefined1 *)(param_3 + _DAT_11276c134) = 0;
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cfc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_11276c108));
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c137fe0(*(undefined8 *)(param_3 + lVar12));
  puVar5 = PTR_PTR_1126c22b8;
  lVar12 = (long)_DAT_11276c138;
  uVar16 = *(ulong *)(param_3 + lVar12);
  _objc_retain(uVar16);
  _objc_opt_class(puVar5);
  uVar6 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  uVar2 = uVar16;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar16);
  uVar6 = uVar2;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c112fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_3 + lVar12);
  *(ulong *)(param_3 + lVar12) = uVar11;
  _objc_release(uVar13);
  uVar11 = param_5;
  func_0x00010c112dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  FUN_107c1a400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_3 + _DAT_11276c104));
  _objc_release(uVar7);
  _objc_release(uVar11);
  lVar12 = (long)_DAT_11276c100;
  func_0x00010bf21300(param_3);
  lVar14 = (long)_DAT_11276c120;
  uVar13 = *(undefined8 *)(param_3 + lVar14);
  func_0x00010c259ca0(param_5);
  func_0x00010bf47b80(uVar13);
  uVar11 = param_5;
  func_0x00010c23a960();
  if ((uVar11 & 1) == 0) {
    uVar11 = param_5;
    func_0x00010bf15a40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010c08fa60();
    if (((uVar7 != 0) || (uVar7 = param_5, func_0x00010c076ae0(), (uVar7 & 1) != 0)) ||
       (uVar7 = param_5, func_0x00010bf915a0(), (int)uVar7 != 0)) {
      puVar1 = (ulong *)(param_3 + _DAT_11276c118);
      uVar7 = *puVar1;
      func_0x00010c06f880();
      _objc_release(uVar11);
      goto joined_r0x000107c1d15c;
    }
LAB_107c1d198:
    _objc_release(uVar11);
  }
  else {
    puVar1 = (ulong *)(param_3 + _DAT_11276c118);
    uVar7 = *puVar1;
    func_0x00010c06f880();
joined_r0x000107c1d15c:
    if ((uVar7 & 1) == 0) {
      func_0x00010bf57500(*puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + lVar12);
      uVar11 = *puVar1;
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar13);
      goto LAB_107c1d198;
    }
  }
  puVar5 = PTR_PTR_1126d7328;
  _objc_alloc(PTR_PTR_1126d7328);
  func_0x00010c23a960(param_5);
  uVar11 = param_5;
  func_0x00010bf15a40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076ae0(param_5);
  func_0x00010bf915a0(param_5);
  func_0x00010c260560(param_5);
  func_0x00010c074c20(*(undefined8 *)(param_3 + lVar14));
  func_0x00010c04f000(puVar5);
  lVar14 = (long)_DAT_11276c118;
  uVar13 = *(undefined8 *)(param_3 + lVar14);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar13);
  _objc_release(puVar5);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar11 != 0) {
    lVar17 = (long)_DAT_11276c11c;
    lVar8 = *(long *)(param_3 + lVar17);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar11);
    if (lVar8 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar17));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5f00();
      _objc_release(uVar13);
      uVar18 = *(undefined8 *)(param_3 + lVar12);
      uVar13 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar18);
      _objc_release(uVar13);
      uVar18 = *(undefined8 *)(param_3 + lVar12);
      uVar13 = *(undefined8 *)(param_3 + lVar17);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar13);
      uVar18 = *(undefined8 *)(param_3 + lVar12);
      uVar13 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar13);
    }
  }
  uVar11 = param_5;
  func_0x00010bf8ba00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276c11c;
  uVar13 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar13);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar11);
  if (uVar6 == uVar11) {
    _objc_release(uVar11);
    _objc_release(uVar6);
LAB_107c1d418:
    uVar9 = param_5;
    func_0x00010c112fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar16);
    _objc_retain(uVar9);
    if (uVar16 == uVar9) {
      _objc_release(uVar9);
      uVar7 = uVar16;
      goto LAB_107c1d544;
    }
    uVar7 = uVar16;
    if (uVar9 == 0) goto LAB_107c1d484;
    func_0x00010c071ae0();
    _objc_release(uVar9);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(uVar11);
    if ((uVar7 & 1) == 0) goto LAB_107c1d490;
  }
  else {
    uVar7 = uVar6;
    if (uVar11 == 0) {
LAB_107c1d484:
      _objc_release(uVar7);
    }
    else {
      func_0x00010c071ae0();
      _objc_release(uVar11);
      _objc_release(uVar6);
      if ((int)uVar7 != 0) goto LAB_107c1d418;
    }
    _objc_release(uVar11);
LAB_107c1d490:
    lVar17 = (long)_DAT_11276c0f8;
    uVar13 = *(undefined8 *)(param_3 + lVar12);
    uVar11 = param_5;
    func_0x00010bf96140(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_3 + _DAT_11276c0f4);
    uVar19 = *(undefined8 *)(param_3 + _DAT_11276c128);
    uVar20 = *(undefined8 *)(param_3 + _DAT_11276c158);
    uVar9 = param_5;
    func_0x00010c112fe0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_3 + lVar17;
    FUN_107c6f7d4(lVar17,uVar13,uVar11,uVar18,param_3,uVar19,uVar20,uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(ulong *)(param_3 + _DAT_11276c15c);
    *(long *)(param_3 + _DAT_11276c15c) = lVar17;
LAB_107c1d544:
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar11);
  }
  uVar11 = param_5;
  func_0x00010bf96140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar11 != 0) {
    lVar10 = *(long *)(param_3 + _DAT_11276c12c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2328;
    func_0x00010bf71400(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar10;
    func_0x00010c067e20();
    _objc_release(puVar5);
    _objc_release(lVar10);
    if (lVar17 != 0) {
      uVar13 = *(undefined8 *)(param_3 + lVar8);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar13);
      func_0x00010be35f60(param_3);
    }
  }
  func_0x00010beabfa0(param_3);
  uVar11 = param_5;
  func_0x00010bf28ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar11 == 0) {
    _objc_initWeak(auStack_78,param_3);
    uVar13 = *(undefined8 *)(param_3 + _DAT_11276c124);
    param_2 = 0xc2000000;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar13);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  uVar11 = param_5;
  func_0x00010c0b45e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar11 != 0) {
    lVar10 = (long)_DAT_11276c10c;
    lVar17 = *(long *)(param_3 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar11);
    if (lVar17 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar10));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + lVar10);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c5a0();
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_3 + lVar10);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa2c0();
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_3 + lVar10);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5f00();
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_3 + lVar10);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e67c0();
      _objc_release(uVar13);
      uVar18 = *(undefined8 *)(param_3 + lVar12);
      uVar13 = *(undefined8 *)(param_3 + lVar10);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar18);
      _objc_release(uVar13);
      uVar18 = *(undefined8 *)(param_3 + lVar12);
      uVar13 = *(undefined8 *)(param_3 + lVar8);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar13);
      uVar18 = *(undefined8 *)(param_3 + lVar12);
      uVar13 = *(undefined8 *)(param_3 + lVar14);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar18);
      _objc_release(uVar13);
    }
  }
  uVar11 = param_5;
  func_0x00010c0b45e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11276c10c;
  uVar13 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar13);
  _objc_release(uVar11);
  uVar13 = *(undefined8 *)(param_3 + lVar14);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15900();
  uVar18 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f0e0(param_2);
  _objc_release(uVar18);
  _objc_release(uVar13);
  uVar11 = param_5;
  func_0x00010c11b580(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = (ulong)_DAT_11276c110;
  func_0x00010c2226c0(*(undefined8 *)(param_3 + uVar7));
  _objc_release(uVar11);
  uVar11 = *(ulong *)(param_3 + _DAT_11276c0f8);
  if ((uVar11 == 0) || (func_0x00010c074c20(), (uVar11 & 1) != 0)) {
    uVar13 = *(undefined8 *)(param_3 + uVar7);
    func_0x00010c29d560(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + uVar7));
    _objc_release(uVar13);
    iVar3 = (int)*(undefined8 *)(param_3 + lVar12);
    func_0x00010c06f880();
    if (iVar3 == 0) goto LAB_107c1d9b8;
    uVar7 = param_5;
    func_0x00010c0b45e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    bVar15 = false;
  }
  else {
    bVar15 = true;
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + uVar7));
    uVar11 = *(ulong *)(param_3 + lVar12);
    func_0x00010c06f880();
    if ((uVar11 & 1) == 0) goto LAB_107c1d9b8;
  }
  uVar13 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar13);
  if (!bVar15) {
    _objc_release(uVar7);
  }
LAB_107c1d9b8:
  uVar11 = param_5;
  func_0x00010bf8ba00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bfe2cc0();
  _objc_release(uVar11);
  if ((int)uVar7 != 0) {
    func_0x00010be35f60(param_3);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar11 = param_5;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010c087760(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_3);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11276c0fc;
  if (uVar11 != 0) {
    uVar7 = *(ulong *)(param_3 + lVar12);
    func_0x00010c06f880();
    _objc_release(uVar11);
    if ((uVar7 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar12));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  iVar3 = (int)*(undefined8 *)(param_3 + lVar12);
  func_0x00010c06f880();
  if (iVar3 != 0) {
    uVar13 = *(undefined8 *)(param_3 + lVar12);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010c087660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222740(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar13);
  }
  uVar11 = param_5;
  func_0x00010c112fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_3 + _DAT_11276c160);
  *(ulong *)(param_3 + _DAT_11276c160) = uVar7;
  _objc_release(uVar13);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010c155060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_3 + _DAT_11276c164);
  *(ulong *)(param_3 + _DAT_11276c164) = uVar7;
  _objc_release(uVar13);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_3 + _DAT_11276c168);
  *(ulong *)(param_3 + _DAT_11276c168) = uVar7;
  _objc_release(uVar13);
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010c152160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_3 + _DAT_11276c16c);
  *(ulong *)(param_3 + _DAT_11276c16c) = uVar7;
  _objc_release(uVar13);
  _objc_release(uVar11);
  func_0x00010c1cbe20(param_3);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 107c1dcc0; end: 107c1dd1f;  */

void FUN_107c1dcc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26e120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be062a0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c1dd20; end: 107c1ddcb; -[SCDiscoverFeedPublisherStoryCollectionViewCell _hideUnderlayViews] */

/* WARNING: Possible PIC construction at 0x000107c1dd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1dd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c1dda4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c1dd78) */
/* WARNING: Removing unreachable block (ram,0x000107c1dd4c) */
/* WARNING: Removing unreachable block (ram,0x000107c1dd80) */
/* WARNING: Removing unreachable block (ram,0x000107c1dd5c) */
/* WARNING: Removing unreachable block (ram,0x000107c1dda8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1dd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c110),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107c1ddcc; end: 107c1ddcf; -[SCDiscoverFeedPublisherStoryCollectionViewCell _setupDebugViewIfNeeded:] */

void FUN_107c1ddcc(void)

{
  return;
}



/* Entry: 107c1ddd0; end: 107c1de93; -[SCDiscoverFeedPublisherStoryCollectionViewCell _debugGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1ddd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c22b8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276c138);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf65fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11276c0f4));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107c1de94; end: 107c1dfaf; -[SCDiscoverFeedPublisherStoryCollectionViewCell _setupThumbnailImageViewWithImage:viewModel:] */

void FUN_107c1de94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c1dfb0; end: 107c1dfe3;  */

void FUN_107c1dfb0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c1dfe4; end: 107c1e0bf; -[SCDiscoverFeedPublisherStoryCollectionViewCell _setThumbnailImageViewWithFinalImage:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1dfe4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_11276c138);
  _objc_retain(param_4);
  _objc_retain(lVar2);
  if (param_4 == lVar2) {
    _objc_release(lVar2);
    _objc_release(param_4);
  }
  else {
    if (lVar2 == 0) {
      _objc_release();
      goto LAB_107c1e0a0;
    }
    lVar1 = param_4;
    func_0x00010c071ae0(param_4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(param_4);
    if ((int)lVar1 == 0) goto LAB_107c1e0a0;
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276c108),param_2,param_3);
  *(undefined1 *)(param_1 + _DAT_11276c134) = 1;
LAB_107c1e0a0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c1e0c0; end: 107c1e5ff; -[SCDiscoverFeedPublisherStoryCollectionViewCell _downloadThumbnailWithThumbnailDataModel:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1e0c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_140 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107c1e600;
  uStack_80 = 0x107c1e610;
  uStack_78 = 0;
  puStack_138 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_107c1e600;
  uStack_b0 = 0x107c1e610;
  uStack_a8 = 0;
  puStack_130 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_107c1e600;
  uStack_e0 = 0x107c1e610;
  uStack_d8 = 0;
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 7;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107c1e618;
  puStack_148 = &UNK_1108d4ea8;
  puStack_118 = puStack_128;
  puStack_f8 = puStack_130;
  puStack_c8 = puStack_138;
  puStack_98 = puStack_140;
  func_0x00010c0c0cc0(param_3);
  lVar2 = puStack_98[5];
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = puStack_c8[5];
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar5 = PTR_PTR_1126b58e0;
      _objc_opt_new(PTR_PTR_1126b58e0);
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_initWeak(auStack_168,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276c130);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11276c124);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = puVar1;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_107c1e6ec;
      puStack_180 = &UNK_1108acaf0;
      _objc_copyWeak(auStack_170,auStack_168);
      _objc_retain(param_4);
      uStack_178 = param_4;
      func_0x00010bfa5420(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(uStack_178);
      _objc_destroyWeak(auStack_170);
      _objc_destroyWeak(auStack_168);
      _objc_release(puVar5);
      goto LAB_107c1e4f8;
    }
  }
  _objc_initWeak(auStack_168,param_1);
  uVar3 = param_3;
  func_0x000107dd4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar5);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar6);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11276c128);
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_107c1e748;
  puStack_1b8 = &UNK_110849840;
  _objc_copyWeak(auStack_1a0,auStack_168);
  _objc_retain(param_4);
  uStack_1b0 = param_4;
  _objc_retain(param_3);
  uStack_1a8 = param_3;
  func_0x00010bfa7900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1d8,auStack_168);
  _objc_retain(param_4);
  _objc_retain(uVar8);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(uVar8);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_168);
LAB_107c1e4f8:
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c1e600; end: 107c1e617;  */

void FUN_107c1e600(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107c1e618; end: 107c1e6eb;  */

void FUN_107c1e618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_5;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c1e6ec; end: 107c1e747;  */

void FUN_107c1e6ec(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010beb0820();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107c1e748; end: 107c1e84b;  */

void FUN_107c1e748(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107c1e84c; end: 107c1e8bf;  */

void FUN_107c1e84c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beb0820(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c1e8c0; end: 107c1e8c3;  */

void FUN_107c1e8c0(void)

{
  return;
}



/* Entry: 107c1e8c4; end: 107c1e9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1e8c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = lVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar5);
    _objc_retain(lVar6);
    if (lVar5 == lVar6) {
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar6);
LAB_107c1e968:
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      lVar6 = (long)_DAT_11276c148;
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(lVar1 + lVar6);
      *(undefined8 *)(lVar1 + lVar6) = uVar4;
      _objc_release(uVar3);
      goto LAB_107c1e99c;
    }
    if (lVar6 == 0) {
      _objc_release(lVar5);
    }
    else {
      lVar2 = lVar5;
      func_0x00010c071ae0(lVar5,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar6);
      if ((int)lVar2 != 0) goto LAB_107c1e968;
    }
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
LAB_107c1e99c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c1e9b4; end: 107c1ec7f; -[SCDiscoverFeedPublisherStoryCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1e9b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar2);
  iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11276c114);
  func_0x00010bfd0440();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_11276c0fc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bfd1b40();
    _objc_release(uVar3);
    if ((int)uVar8 == 0) {
      func_0x00010c09ef00(param_5);
      puVar2 = PTR_PTR_1126c22b8;
      puVar9 = *(undefined **)(param_3 + _DAT_11276c138);
      _objc_retain(puVar9);
      _objc_opt_class(puVar2);
      puVar4 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar2);
      puVar2 = puVar9;
      if (((ulong)puVar4 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar9);
      puVar4 = puVar2;
      func_0x00010bf96140();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c116500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar9 == (undefined *)0x0) {
LAB_107c1ebb8:
        if (*(long *)(param_3 + _DAT_11276c160) != 0) {
          if (*(long *)(param_3 + _DAT_11276c164) == 0) {
            uVar8 = *(undefined8 *)(param_3 + _DAT_11276c0f4);
          }
          else {
            func_0x00010bf20c00(param_3);
            _CGRectGetHeight();
            uVar8 = *(undefined8 *)(param_3 + _DAT_11276c0f4);
          }
          func_0x00010bfd0140(uVar8);
        }
        puVar4 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941e0();
        _objc_release(puVar4);
      }
      else {
        lVar10 = (long)_DAT_11276c0f8;
        uVar5 = *(ulong *)(param_3 + lVar10);
        func_0x00010c074c20();
        if ((uVar5 & 1) != 0) goto LAB_107c1ebb8;
        lVar6 = *(long *)(param_3 + _DAT_11276c12c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c2328;
        func_0x00010bf71400(PTR_PTR_1126c2328);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c067e20();
        _objc_release(puVar4);
        _objc_release(lVar6);
        if (lVar7 == 0) goto LAB_107c1ebb8;
        func_0x00010bf512a0(param_1,param_2,param_3);
        uVar5 = *(ulong *)(param_3 + lVar10);
        func_0x00010c080aa0();
        if ((uVar5 & 1) == 0) {
          func_0x00010bfd0140(*(undefined8 *)(param_3 + _DAT_11276c0f4));
        }
      }
      _objc_release(puVar9);
      goto LAB_107c1ec54;
    }
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
LAB_107c1ec54:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c1ec80; end: 107c1ed2b; -[SCDiscoverFeedPublisherStoryCollectionViewCell _handleLongPressAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1ec80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if ((lVar1 == 2) || (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)) {
    func_0x00010c14c8a0(param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c0f4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276c168);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c1ed2c; end: 107c1ed8f; -[SCDiscoverFeedPublisherStoryCollectionViewCell _handleScrollOutOfScreenAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1ed2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c0f4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276c16c);
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c1ed90; end: 107c1ed97; -[SCDiscoverFeedPublisherStoryCollectionViewCell shouldShowBackgroundView] */

undefined8 FUN_107c1ed90(void)

{
  return 0;
}



/* Entry: 107c1ed98; end: 107c1eef7; -[SCDiscoverFeedPublisherStoryCollectionViewCell didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1ed98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11276c0f0));
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107c1eef8;
    puStack_60 = &UNK_110850cf8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c1eef8; end: 107c1ef2f;  */

void FUN_107c1eef8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c1ef30; end: 107c1f023; -[SCDiscoverFeedPublisherStoryCollectionViewCell _calculateCellFrameAndDispatchEventIfNecessary:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1ef30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf20c00(param_1);
  func_0x00010bf51460(param_1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14c760();
  iVar1 = (int)puVar3;
  _CGRectIntersectsRect();
  _objc_release(puVar2);
  if (iVar1 != 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11276c0f0),param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c1f024; end: 107c1f033; -[SCDiscoverFeedPublisherStoryCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c0e8);
}



/* Entry: 107c1f034; end: 107c1f043; -[SCDiscoverFeedPublisherStoryCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f034(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276c0e8) = param_3;
  return;
}



/* Entry: 107c1f044; end: 107c1f053; -[SCDiscoverFeedPublisherStoryCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c0f4);
}



/* Entry: 107c1f054; end: 107c1f063; -[SCDiscoverFeedPublisherStoryCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f054(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c138);
}



/* Entry: 107c1f064; end: 107c1f07b; -[SCDiscoverFeedPublisherStoryCollectionViewCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c13c);
}



/* Entry: 107c1f07c; end: 107c1f093; -[SCDiscoverFeedPublisherStoryCollectionViewCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f07c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276c13c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107c1f094; end: 107c1f0a3; -[SCDiscoverFeedPublisherStoryCollectionViewCell truncateYaxisFromBottom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107c1f094(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276c0ec);
}



/* Entry: 107c1f0a4; end: 107c1f0b3; -[SCDiscoverFeedPublisherStoryCollectionViewCell setTruncateYaxisFromBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f0a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c0ec) = param_3;
  return;
}



/* Entry: 107c1f0b4; end: 107c1f0c3; -[SCDiscoverFeedPublisherStoryCollectionViewCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f0b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c128);
}



/* Entry: 107c1f0c4; end: 107c1f0d3; -[SCDiscoverFeedPublisherStoryCollectionViewCell bitmojiImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f0c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c130);
}



/* Entry: 107c1f0d4; end: 107c1f0e3; -[SCDiscoverFeedPublisherStoryCollectionViewCell bitmojiSelfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c158);
}



/* Entry: 107c1f0e4; end: 107c1f123; -[SCDiscoverFeedPublisherStoryCollectionViewCell setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c158;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1f124; end: 107c1f133; -[SCDiscoverFeedPublisherStoryCollectionViewCell setStoryThumbnailImageLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f124(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c134) = param_3;
  return;
}



/* Entry: 107c1f134; end: 107c1f143; -[SCDiscoverFeedPublisherStoryCollectionViewCell storyThumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f134(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c170);
}



/* Entry: 107c1f144; end: 107c1f183; -[SCDiscoverFeedPublisherStoryCollectionViewCell setStoryThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c170;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1f184; end: 107c1f193; -[SCDiscoverFeedPublisherStoryCollectionViewCell storiesConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1f184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c12c);
}



/* Entry: 107c1f194; end: 107c1f383; -[SCDiscoverFeedPublisherStoryCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1f194(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c170,0);
  _objc_storeStrong(param_1 + _DAT_11276c158,0);
  _objc_storeStrong(param_1 + _DAT_11276c130,0);
  _objc_storeStrong(param_1 + _DAT_11276c138,0);
  _objc_storeStrong(param_1 + _DAT_11276c0f4,0);
  _objc_storeStrong(param_1 + _DAT_11276c120,0);
  _objc_storeStrong(param_1 + _DAT_11276c124,0);
  _objc_storeStrong(param_1 + _DAT_11276c108,0);
  _objc_storeStrong(param_1 + _DAT_11276c148,0);
  _objc_storeStrong(param_1 + _DAT_11276c12c,0);
  _objc_storeStrong(param_1 + _DAT_11276c128,0);
  _objc_storeStrong(param_1 + _DAT_11276c174,0);
  _objc_storeStrong(param_1 + _DAT_11276c0f0,0);
  _objc_storeStrong(param_1 + _DAT_11276c16c,0);
  _objc_storeStrong(param_1 + _DAT_11276c168,0);
  _objc_storeStrong(param_1 + _DAT_11276c164,0);
  _objc_storeStrong(param_1 + _DAT_11276c160,0);
  _objc_storeStrong(param_1 + _DAT_11276c154,0);
  _objc_storeStrong(param_1 + _DAT_11276c150,0);
  _objc_storeStrong(param_1 + _DAT_11276c10c,0);
  _objc_storeStrong(param_1 + _DAT_11276c114,0);
  _objc_storeStrong(param_1 + _DAT_11276c0fc,0);
  _objc_storeStrong(param_1 + _DAT_11276c110,0);
  _objc_storeStrong(param_1 + _DAT_11276c15c,0);
  _objc_storeStrong(param_1 + _DAT_11276c0f8,0);
  _objc_storeStrong(param_1 + _DAT_11276c11c,0);
  _objc_storeStrong(param_1 + _DAT_11276c118,0);
  _objc_storeStrong(param_1 + _DAT_11276c100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c104,0);
  return;
}



/* Entry: 107c1f384; end: 107c1f41f;  */

void FUN_107c1f384(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010c09ef00(param_1);
  uVar2 = param_2;
  func_0x00010bfed040(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010c082800();
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c1f420; end: 107c1f503;  */

void FUN_107c1f420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107c1f504;
    puStack_50 = &UNK_110842e18;
    _objc_retain(param_1);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107c1f574;
    puStack_78 = &UNK_110841f20;
    lStack_48 = param_1;
    _objc_retain(param_1);
    lStack_70 = param_1;
    func_0x00010bf03460(0x3fc999999999999a,0,0x3ff0000000000000,0x4000000000000000,puVar2,param_2,0,
                        &puStack_68,&puStack_90);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107c1f504; end: 107c1f5f3;  */

void FUN_107c1f504(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,0x3fee666666666666,0x3fee666666666666,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 107c1f5f4; end: 107c1f62f;  */

void FUN_107c1f5f4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 107c1f630; end: 107c1fd67;  */

void FUN_107c1f630(double param_1,double param_2,undefined8 param_3,double param_4,ulong param_5,
                  undefined *param_6,ulong param_7,long param_8,long param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_5 == 0) || (uVar1 = param_7, func_0x00010bf529e0(), uVar1 == 0)) goto LAB_107c1fa08;
  uVar1 = param_5;
  func_0x00010c1554e0();
  uVar2 = param_7;
  func_0x00010bf529e0();
  if (uVar2 <= uVar1) goto LAB_107c1fa08;
  func_0x00010c1554e0(param_5);
  uVar1 = param_7;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4890;
  _objc_opt_class(PTR_PTR_1126b4890);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (((uVar2 & 1) == 0) || (uVar1 == 0)) {
    puVar7 = param_6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010010fab4();
    puVar3 = puVar7;
    if ((int)puVar8 == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar7);
    func_0x00010c152ca0(puVar3);
    _objc_release(puVar3);
    if (param_8 == 0) {
LAB_107c1f9ec:
      lVar11 = 0;
    }
    else {
      _objc_retain(uVar1);
      puVar3 = PTR_PTR_1126b1700;
      _objc_opt_class(PTR_PTR_1126b1700);
      uVar9 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar3);
      uVar2 = uVar1;
      if ((uVar9 & 1) == 0) {
        uVar2 = 0;
      }
      func_0x00010bf4c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c2180;
      _objc_opt_class(PTR_PTR_1126c2180);
      uVar10 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar9 = uVar2;
      if ((uVar10 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar2);
      if (uVar9 == 0) {
        _objc_release(uVar1);
        goto LAB_107c1f9ec;
      }
      uVar9 = uVar2;
      func_0x00010c06e300();
      _objc_release(uVar2);
      _objc_release(uVar1);
      lVar11 = 0;
      if ((uVar9 & 1) == 0) {
        lVar11 = param_8;
      }
    }
    FUN_107c1fdf8(param_6,param_5,1,lVar11);
  }
  else {
    func_0x00010c1554e0(param_5);
    func_0x00010bfed020(puVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_107c1fdf8(param_6,puVar3,1,0);
    puVar8 = param_6;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c20f8;
    _objc_opt_class(PTR_PTR_1126c20f8);
    puVar4 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar7);
    puVar7 = puVar8;
    if (((ulong)puVar4 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c0840e0(param_5);
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_retain(puVar4);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) goto LAB_107c1f9b8;
    _objc_retain(puVar4);
    _objc_retain(puVar8);
    puVar7 = puVar8;
    func_0x00010c1554e0();
    if ((long)puVar7 < 0) {
LAB_107c1f9a8:
      _objc_release(puVar8);
      puVar7 = puVar4;
LAB_107c1f9b4:
      _objc_release(puVar7);
    }
    else {
      puVar7 = puVar8;
      func_0x00010c1554e0();
      puVar5 = puVar4;
      func_0x00010c0df2e0();
      if (((long)puVar5 <= (long)puVar7) ||
         (puVar7 = puVar8, func_0x00010c0840e0(), (long)puVar7 < 0)) goto LAB_107c1f9a8;
      puVar5 = puVar8;
      func_0x00010c0840e0();
      func_0x00010c1554e0(puVar8);
      puVar6 = puVar4;
      func_0x00010c0deec0();
      _objc_release(puVar8);
      _objc_release(puVar4);
      puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if ((long)puVar5 < (long)puVar6) {
        if (param_9 < 3) {
          if (param_9 == 0) {
            FUN_107c1fdf8(puVar4,puVar8,8,0);
            goto LAB_107c1f9b8;
          }
          if (param_9 == 1) {
            puVar5 = puVar4;
            func_0x00010bfed1a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c225c20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar7;
            func_0x00010bf4b900();
          }
          else {
            if (param_9 != 2) goto LAB_107c1f9b8;
            puVar5 = puVar4;
            func_0x00010bfed1a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c225c20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar7;
            func_0x00010bf4b900();
          }
          func_0x00010c1525a0(puVar4);
          if (((ulong)puVar5 & 1) == 0) {
            func_0x00010c1cbe20(puVar4);
            func_0x00010c08cdc0(puVar4);
          }
        }
        else if (param_9 == 3) {
          puVar7 = puVar4;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 != (undefined *)0x0) {
            func_0x00010bf4cdc0(puVar4);
            dVar16 = param_1;
            func_0x00010befda00(puVar4);
            func_0x00010bf4cdc0(puVar4);
            dVar15 = dVar16;
            func_0x00010bf20c00(puVar4);
            _CGRectGetWidth();
            dVar12 = dVar15;
            func_0x00010befda00(puVar4);
            func_0x00010bfb68e0(puVar7);
            _CGRectGetMinX();
            dVar14 = dVar12;
            func_0x00010bfb68e0(puVar7);
            _CGRectGetMaxX();
            if ((dVar12 < param_1 + param_2) || ((dVar16 + dVar15) - param_4 < dVar14)) {
LAB_107c1fcb4:
              func_0x00010c1525a0(puVar4);
            }
          }
        }
        else if (param_9 == 4) {
          puVar7 = puVar4;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 != (undefined *)0x0) {
            func_0x00010bf20c00(puVar4);
            _CGRectGetWidth();
            dVar16 = param_1;
            func_0x00010befda00(puVar4);
            dVar12 = param_2;
            func_0x00010befda00(puVar4);
            dVar14 = param_4;
            func_0x00010bf4cdc0(puVar4);
            dVar15 = dVar16;
            func_0x00010befda00(puVar4);
            dVar16 = dVar16 + dVar12;
            func_0x00010bfb68e0(puVar7);
            _CGRectGetMinX();
            dVar12 = dVar15;
            func_0x00010bfb68e0(puVar7);
            _CGRectGetMaxX();
            if (dVar15 < dVar16) goto LAB_107c1fcb4;
            param_4 = (param_1 - param_2) - param_4;
            dVar15 = 0.1;
LAB_107c1fcd0:
            if ((param_4 + dVar16) - param_4 * dVar15 < dVar12) {
              dVar16 = dVar12;
              func_0x00010bf4d5e0(puVar4);
              dVar13 = dVar16;
              func_0x00010bf20c00(puVar4);
              _CGRectGetWidth();
              dVar16 = dVar16 - dVar13;
              func_0x00010befda00(puVar4);
              dVar16 = dVar16 + dVar14;
              func_0x00010bf20c00(puVar4);
              _CGRectGetWidth();
              func_0x00010befda00(puVar4);
              dVar14 = ((param_4 * dVar15 + dVar12) - dVar13) + dVar14;
              dVar15 = dVar14;
              if (dVar16 <= dVar14) {
                dVar15 = dVar16;
              }
              func_0x00010bf4cdc0(puVar4);
              if (dVar14 < dVar15) {
                func_0x00010bf4cdc0(puVar4);
                func_0x00010c182300(dVar15,puVar4);
              }
            }
          }
        }
        else {
          if (param_9 != 5) goto LAB_107c1f9b8;
          puVar7 = puVar4;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 != (undefined *)0x0) {
            func_0x00010bf20c00(puVar4);
            _CGRectGetWidth();
            dVar16 = param_1;
            func_0x00010befda00(puVar4);
            dVar12 = param_2;
            func_0x00010befda00(puVar4);
            dVar14 = param_4;
            func_0x00010bf4cdc0(puVar4);
            dVar15 = dVar16;
            func_0x00010befda00(puVar4);
            dVar16 = dVar16 + dVar12;
            func_0x00010bfb68e0(puVar7);
            _CGRectGetMinX();
            dVar12 = dVar15;
            func_0x00010bfb68e0(puVar7);
            _CGRectGetMaxX();
            if (dVar15 < dVar16) goto LAB_107c1fcb4;
            param_4 = (param_1 - param_2) - param_4;
            dVar15 = 0.2;
            goto LAB_107c1fcd0;
          }
        }
        goto LAB_107c1f9b4;
      }
    }
LAB_107c1f9b8:
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
LAB_107c1fa08:
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c1fd68; end: 107c1fdf7;  */

void FUN_107c1fd68(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb45d8;
  _objc_retain(&PTR____CFConstantStringClassReference_110eb45d8);
  if ((param_2 == 0xb) || (param_2 == 2)) {
    lVar1 = param_1;
    func_0x00010c11b580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eb4698;
      _objc_retain(&PTR____CFConstantStringClassReference_110eb4698);
      _objc_release(&PTR____CFConstantStringClassReference_110eb45d8);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107c1fdf8; end: 107c200e7;  */

void FUN_107c1fdf8(double param_1,double param_2,double param_3,undefined *param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain();
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_107c1ff74;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c1554e0();
  if (lVar1 < 0) {
LAB_107c1ff60:
    _objc_release(param_5);
    puVar2 = param_4;
  }
  else {
    lVar1 = param_5;
    func_0x00010c1554e0();
    puVar2 = param_4;
    func_0x00010c0df2e0();
    if (((long)puVar2 <= lVar1) || (lVar1 = param_5, func_0x00010c0840e0(), lVar1 < 0))
    goto LAB_107c1ff60;
    lVar1 = param_5;
    func_0x00010c0840e0();
    func_0x00010c1554e0(param_5);
    puVar3 = param_4;
    func_0x00010c0deec0();
    _objc_release(param_5);
    _objc_release(param_4);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if ((long)puVar3 <= lVar1) goto LAB_107c1ff74;
    puVar3 = param_4;
    func_0x00010bfed1a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf4b900();
    if ((int)puVar3 == 0) {
      func_0x00010c1525a0(param_4);
      func_0x00010c1cbe20(param_4);
      func_0x00010c08cdc0(param_4);
    }
    else {
      _objc_retain(param_4);
      _objc_retain(param_5);
      if (param_7 != 0) {
        puVar3 = param_4;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          if (param_7 < 3) {
            if (param_7 == 1) {
              puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20c00();
              _CGRectGetHeight();
              _objc_release(puVar4);
              func_0x00010bfb68e0(puVar3);
            }
            else {
              if (param_7 != 2) goto LAB_107c200cc;
              func_0x00010bfb68e0(puVar3);
              _CGRectGetMinY();
            }
            func_0x00010bf4cdc0(param_4);
            func_0x00010c182300(param_4);
          }
          else if (param_7 == 3) {
LAB_107c200c4:
            func_0x00010c1525a0(param_4);
          }
          else if (param_7 == 4) {
            func_0x00010bf4cdc0(param_4);
            dVar7 = param_2;
            func_0x00010befda00(param_4);
            param_2 = param_2 + param_1;
            func_0x00010bf4cdc0(param_4);
            func_0x00010bf20c00(param_4);
            _CGRectGetHeight();
            dVar5 = param_1;
            func_0x00010befda00(param_4);
            func_0x00010bfb68e0(puVar3);
            _CGRectGetMinY();
            dVar6 = dVar5;
            func_0x00010bfb68e0(puVar3);
            _CGRectGetMaxY();
            if ((dVar5 < param_2) || ((dVar7 + param_1) - param_3 < dVar6)) goto LAB_107c200c4;
          }
        }
LAB_107c200cc:
        _objc_release(puVar3);
      }
      _objc_release(param_5);
      _objc_release(param_4);
    }
  }
  _objc_release(puVar2);
LAB_107c1ff74:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c200e8; end: 107c2049b;  */

void FUN_107c200e8(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = param_1;
  if ((param_2 & 1) == 0) {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_1;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar7 == (undefined *)0x0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_1);
  puVar7 = param_1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c26d980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      goto LAB_107c20408;
    }
  }
  else {
    _objc_release(puVar7);
  }
  puVar3 = param_1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
LAB_107c2025c:
    puVar6 = PTR_PTR_1126d5168;
    _objc_alloc(PTR_PTR_1126d5168);
    puVar7 = param_1;
    func_0x00010c0c54a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c26df60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar6);
    _objc_release(puVar8);
LAB_107c202b8:
    _objc_release(puVar7);
  }
  else {
    puVar7 = param_1;
    func_0x00010c26df60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      goto LAB_107c202b8;
    }
    puVar6 = param_1;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) goto LAB_107c2025c;
    puVar6 = (undefined *)0x0;
  }
  puVar7 = param_1;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010c08fa60();
  _objc_release(puVar7);
  puVar8 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar7 = param_1;
    func_0x00010c26d940();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08fa60();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = param_1;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      _objc_release(puVar7);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        goto LAB_107c203d0;
      }
      puVar8 = PTR_PTR_1126d7340;
      _objc_alloc(PTR_PTR_1126d7340);
      puVar7 = param_1;
      func_0x00010c26d980(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c26d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c26d920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003920(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar7);
  }
LAB_107c203d0:
  puVar7 = PTR_PTR_1126d5170;
  _objc_alloc(PTR_PTR_1126d5170);
  func_0x00010c052020();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar3);
LAB_107c20408:
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d5178;
  _objc_alloc(PTR_PTR_1126d5178);
  func_0x00010bffa8c0();
  puVar6 = PTR_PTR_1126b4860;
  func_0x00010c258dc0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c2049c; end: 107c2147f;  */

void FUN_107c2049c(undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_228;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = param_8;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar25 = param_2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar25;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar23 = puVar1;
    func_0x00010c292e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    if (param_2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    if (param_2 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar25);
    _objc_release(puVar23);
    _objc_retain(&PTR____CFConstantStringClassReference_110eb8ad8);
    puVar5 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar7 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar26 = puVar1;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar8 = puVar1;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar22 = puVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar10 = puVar1;
    func_0x00010bf1acc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07a6a0(puVar1);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_2;
    if (param_2 == (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar14 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    _objc_release(puVar15);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar14);
    }
    if (param_2 == (undefined *)0x0) {
      _objc_release(puVar13);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar22);
    _objc_release(puVar23);
    _objc_release(puVar8);
    _objc_release(puVar25);
    _objc_release(puVar26);
    puVar2 = puVar1;
    func_0x00010c26e100();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_107c200e8();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar1;
    func_0x00010c0e1a60();
    puVar23 = PTR_PTR_1126d7348;
    if (puVar25 == (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
      uVar28 = 0x3fe8000000000000;
    }
    else {
      puVar25 = puVar1;
      func_0x00010c0e1a60(puVar1);
      func_0x000108f4715c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b3c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
      uVar28 = 0x3ff0000000000000;
    }
    uVar16 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf823c0();
    _objc_release(uVar16);
    if ((int)uVar17 == 0) {
      puStack_228 = (undefined *)0x0;
    }
    else {
      puStack_228 = PTR_PTR_1126d5a38;
      _objc_alloc();
      func_0x00010c04d3e0();
    }
    puVar11 = puVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = 0;
    puVar25 = puVar1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar25;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    uVar24 = 0;
    if (puVar12 != (undefined *)0x0) {
      do {
        puVar26 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar19) {
            _objc_enumerationMutation(puVar25);
          }
          uVar24 = *(undefined8 *)((long)puVar26 * 8);
          uVar20 = uVar24;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar1;
          func_0x00010c26e300(puVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar20;
          func_0x00010c0720c0();
          _objc_release(puVar8);
          _objc_release(uVar20);
          if ((int)uVar18 != 0) {
            func_0x00010c24b260();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107c20b1c;
          }
          puVar26 = puVar26 + 1;
        } while (puVar12 != puVar26);
        puVar12 = puVar25;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined *)0x0);
      uVar24 = 0;
    }
LAB_107c20b1c:
    _objc_release(puVar25);
    puVar12 = PTR_PTR_1126d5a78;
    _objc_alloc();
    func_0x00010c003ce0();
    puVar26 = puVar11;
    if ((param_5 & 1) == 0) {
      FUN_107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar25 = param_3;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar25;
    func_0x00010c067ec0();
    _objc_release(puVar25);
    if ((int)puVar8 == 2) {
      uVar16 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43320();
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43300();
      _objc_release(uVar16);
    }
    else {
      uVar27 = 0x3f800000;
    }
    puVar8 = PTR_PTR_1126ca450;
    _objc_alloc();
    param_1 = 0x3fe8000000000000;
    uVar20 = 0;
    param_9 = 0;
    func_0x00010c042c80(0x3fe8000000000000,uVar28,uVar27);
    _objc_retain(param_3);
    uVar16 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126b1270;
    func_0x00010bf71a80(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c067e20();
    _objc_release(puVar25);
    _objc_release(uVar16);
    puVar25 = param_3;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar22 = puVar25;
    func_0x00010c067ec0();
    _objc_release(puVar25);
    if (((int)puVar22 == 2) && ((uVar17 & 1) != 0)) {
      puVar25 = puVar1;
      func_0x00010bf24fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar25;
      func_0x00010c08fa60();
      _objc_release(puVar25);
      puVar22 = PTR_PTR_1126c21e0;
      if (puVar9 == (undefined *)0x0) goto LAB_107c20d94;
      puVar10 = puVar1;
      func_0x00010bf24fc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar1;
      func_0x00010bf24fc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = 7;
      param_9 = 1;
      func_0x00010c26e400();
      _objc_retainAutoreleasedReturnValue();
LAB_107c20f4c:
      _objc_release(puVar25);
      _objc_release(puVar10);
    }
    else {
LAB_107c20d94:
      puVar25 = puVar2;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar25;
      func_0x00010c08fa60();
      _objc_release(puVar25);
      puVar22 = PTR_PTR_1126c21e0;
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar10 = puVar2;
      puVar13 = puVar2;
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26d980(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010c26d940(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010c26d920(puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = 7;
        func_0x00010c26d8a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar9);
LAB_107c20f48:
        _objc_release(puVar13);
        goto LAB_107c20f4c;
      }
      puVar25 = puVar2;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar25;
      func_0x00010c08fa60();
      _objc_release(puVar25);
      puVar22 = PTR_PTR_1126c21e0;
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c241220(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar2;
        func_0x00010c26e3a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c54a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010c26df60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = 7;
        param_9 = 0;
        func_0x00010c26e400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        goto LAB_107c20f48;
      }
      puVar22 = (undefined *)0x0;
    }
    puVar25 = param_2;
    FUN_107c23a34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8f80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6020(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b32e0(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b7b80(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abce0(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afa80(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bb020(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b2000(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c2b1fe0(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba440(puVar25);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_2;
    func_0x00010c080120(param_2);
    FUN_107c23594(puVar25,param_2,puVar9,puVar10,param_3,param_8);
    _objc_release(puVar9);
    _objc_release(puVar22);
    _objc_release(puVar8);
    _objc_release(puVar26);
    _objc_release(puVar12);
    _objc_release(uVar24);
    _objc_release(puVar11);
    _objc_release(puStack_228);
    _objc_release(puVar23);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(&PTR____CFConstantStringClassReference_110eb8ad8);
    _objc_release(puVar4);
    param_7 = param_8;
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c2418;
  _objc_retain(uVar20);
  func_0x00010bf81c40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar20;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  uVar20 = uVar28;
  func_0x00010c067ec0();
  _objc_release(uVar28);
  if ((int)uVar20 == 2) {
    lVar21 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar21;
    func_0x00010bf432e0();
    _objc_release(lVar21);
    if (lVar19 == 0) goto LAB_107c212c8;
    if (lVar19 == 2) {
      uVar20 = param_7;
      FUN_107c794c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb3c0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar20);
    }
LAB_107c213a0:
    lVar21 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43300();
    _objc_release(lVar21);
    uVar28 = param_1;
  }
  else {
LAB_107c212c8:
    puVar25 = param_2;
    func_0x00010bfe0440(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar25;
    FUN_107c794c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb3c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar23);
    _objc_release(puVar25);
    puVar25 = param_2;
    func_0x00010c23a520(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar25;
    FUN_107c79fa8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba960(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar23);
    _objc_release(puVar25);
    puVar25 = PTR_PTR_1126d7350;
    _objc_alloc(PTR_PTR_1126d7350);
    func_0x00010c061ae0();
    func_0x00010c2baa00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar25);
    uVar28 = 0x3f800000;
    if ((int)uVar20 == 2) goto LAB_107c213a0;
  }
  func_0x00010c2aab40(uVar28,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar25 = param_2;
  func_0x00010c239600(param_2);
  FUN_107c21480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6300(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar25);
  func_0x00010c2b89a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar25 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 107c21480; end: 107c2157f;  */

void FUN_107c21480(ulong param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 - 1 < 99) {
    puVar4 = PTR_PTR_1126d5b38;
    _objc_alloc(PTR_PTR_1126d5b38);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      uVar5 = 0x4010000000000000;
      uVar6 = 0x4000000000000000;
    }
    else {
      uVar5 = 0x400c000000000000;
      uVar6 = 0x3ffc000000000000;
    }
    func_0x00010bff6440((double)((float)param_1 * 0.01),0x3fecccccc0000000,uVar5,uVar6,puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107c21580; end: 107c2184f;  */

void FUN_107c21580(double param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2418;
  func_0x00010bf81c60(PTR_PTR_1126c2418);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if ((param_3 & 1) == 0) {
      FUN_107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c2bb3c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  lVar2 = param_2;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c260dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107c7a0c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba960(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c117840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c117840(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117800();
    uVar5 = (ulong)(uint)(int)(param_1 * 100.0);
    FUN_107c21480(uVar5,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6300(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c261160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar6 = PTR_PTR_1126d7350;
    _objc_alloc(PTR_PTR_1126d7350);
    lVar2 = param_2;
    func_0x00010c261160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c5c0();
    lVar3 = param_2;
    func_0x00010c261160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf984c0();
    lVar4 = param_2;
    func_0x00010c261160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed580();
    func_0x00010c061ae0(puVar6);
    func_0x00010c2baa00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c21850; end: 107c2224f;  */

undefined *
FUN_107c21850(undefined *param_1,undefined *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar18 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar18;
  func_0x00010afefd10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    goto LAB_107c221e4;
  }
  puVar19 = puVar1;
  func_0x00010c291e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar18);
  _objc_release(puVar19);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar11 = puVar1;
  func_0x00010c291e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar21 = puVar1;
  func_0x00010c291e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar1;
  func_0x00010c2923e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar20);
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar19);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar11);
  puVar19 = puVar1;
  func_0x00010c26e100();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar19;
  FUN_107c200e8();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar22;
  func_0x00010bf823c0();
  _objc_release(uVar22);
  if ((int)uVar10 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126d5a38;
    _objc_alloc();
    func_0x00010c04d3e0();
  }
  puVar18 = puVar1;
  func_0x00010c0e1a60();
  puVar21 = PTR_PTR_1126d7348;
  if (puVar18 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    uVar22 = 0x3fe8000000000000;
  }
  else {
    puVar18 = puVar1;
    func_0x00010c0e1a60(puVar1);
    func_0x000108f4715c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    uVar22 = 0x3ff0000000000000;
  }
  puVar7 = puVar1;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d5a78;
  _objc_alloc();
  puVar18 = puVar1;
  func_0x00010c291e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c24b260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003d00();
  _objc_release(puVar9);
  _objc_release(puVar18);
  puVar9 = puVar7;
  if ((param_3 & 1) == 0) {
    FUN_107c79228();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107c794c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = PTR_PTR_1126ca450;
  _objc_alloc();
  puVar18 = puVar1;
  func_0x00010c291e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = param_1;
  func_0x00010c25b720(param_1);
  puVar13 = puVar18;
  FUN_107c79658(puVar18,puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042c60(0x3fe8000000000000,uVar22,0x3f800000);
  _objc_release(puVar13);
  _objc_release(puVar18);
  puVar18 = puVar19;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar18;
  func_0x00010c08fa60();
  _objc_release(puVar18);
  puVar20 = PTR_PTR_1126c21e0;
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar14 = puVar19;
  puVar15 = puVar19;
  puVar16 = puVar19;
  if (puVar13 == (undefined *)0x0) {
    puVar18 = puVar19;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010c08fa60();
    _objc_release(puVar18);
    puVar20 = PTR_PTR_1126c21e0;
    if (puVar13 != (undefined *)0x0) {
      func_0x00010c241220(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar19;
      func_0x00010c26e3a0(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c54a0(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26df60(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e400(puVar20);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107c21fe4;
    }
    puVar20 = (undefined *)0x0;
  }
  else {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d980(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d940(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar19;
    func_0x00010c26d920(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d8a0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
LAB_107c21fe4:
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar18);
    _objc_release(puVar14);
  }
  puVar18 = param_1;
  FUN_107c23a34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120(param_1);
  func_0x00010c2b8f80(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6020(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b32e0(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7b80(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abce0(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afa80(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb020(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2000(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar13 = param_1;
  func_0x00010c25a160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  func_0x00010c2b1fe0(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba440(puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c291e80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010c080120(param_1);
  FUN_107c23594(puVar18,param_1,puVar13,puVar14,param_2,param_6);
  _objc_release(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar21);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar19);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
LAB_107c221e4:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return puVar18;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar18 = param_1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar18;
  func_0x00010c067ec0();
  if ((int)puVar1 == 3) {
    puVar19 = (undefined *)0x1;
  }
  else {
    puVar1 = param_1;
    func_0x00010bfa4340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c067ec0();
    puVar19 = (undefined *)(ulong)((int)puVar19 == 0xf7);
    _objc_release(puVar1);
  }
  _objc_release(puVar18);
  _objc_release(param_1);
  return puVar19;
}



/* Entry: 107c22250; end: 107c222db;  */

bool FUN_107c22250(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  if ((int)uVar3 == 3) {
    bVar1 = true;
  }
  else {
    uVar3 = param_1;
    func_0x00010bfa4340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    bVar1 = (int)uVar4 == 0xf7;
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107c222dc; end: 107c2348f;  */

void FUN_107c222dc(undefined **param_1,undefined *param_2,uint param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  undefined **ppuStack_1a0;
  undefined *puStack_188;
  undefined *puStack_178;
  undefined **ppuStack_140;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  ppuVar27 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar27;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar27);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar27 = (undefined **)0x0;
    goto LAB_107c2342c;
  }
  ppuVar27 = param_1;
  if (param_1 == (undefined **)0x0) {
    ppuVar27 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar23 = ppuVar1;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar23;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar23);
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_1 == (undefined **)0x0) {
    _objc_release(ppuVar27);
  }
  ppuVar23 = &PTR____CFConstantStringClassReference_110eb8ad8;
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8ad8);
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8ad8);
  puVar2 = param_2;
  FUN_107c22250();
  if ((int)puVar2 != 0) {
    ppuVar23 = &PTR____CFConstantStringClassReference_110eb6618;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb6618);
    _objc_release(&PTR____CFConstantStringClassReference_110eb8ad8);
  }
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  ppuVar27 = ppuVar1;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar27;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar27);
  ppuVar4 = ppuVar1;
  func_0x00010c26e100();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar4;
  FUN_107c200e8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar4;
  if (ppuVar3 == (undefined **)0x0) {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar27 = ppuVar4;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar27;
  func_0x00010c08fa60();
  _objc_release(ppuVar27);
  puVar22 = PTR_PTR_1126c21e0;
  ppuVar27 = ppuVar4;
  ppuVar11 = ppuVar4;
  if (ppuVar10 == (undefined **)0x0) {
    ppuVar10 = ppuVar4;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar10;
    func_0x00010c08fa60();
    _objc_release(ppuVar10);
    puVar22 = PTR_PTR_1126c21e0;
    if (ppuVar24 != (undefined **)0x0) {
      ppuVar10 = ppuVar4;
      func_0x00010c26e3a0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c54a0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26df60(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e400();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107c22724;
    }
    puVar22 = (undefined *)0x0;
  }
  else {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d980(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d940(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar4;
    func_0x00010c26d920(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar24);
LAB_107c22724:
    _objc_release(ppuVar11);
    _objc_release(ppuVar27);
    _objc_release(ppuVar10);
  }
  ppuVar27 = param_1;
  FUN_107c23a34(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6020();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b32e0(ppuVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7b80(ppuVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abce0(ppuVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afa80(ppuVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb020(ppuVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar10 = param_1;
  func_0x00010c25a160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(ppuVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  ppuVar10 = ppuVar1;
  if (ppuVar3 == (undefined **)0x0) {
    puVar26 = param_2;
    FUN_107c22250();
    if ((int)puVar26 != 0) {
      func_0x00010c2ba440(ppuVar27);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar10;
      if ((param_3 & 1) == 0) {
        FUN_107c79228();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_107c794c0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar11 = param_5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR_PTR_1126c2328;
      func_0x00010bf714a0(PTR_PTR_1126c2328);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = ppuVar11;
      func_0x00010c0b84c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      _objc_release(ppuVar11);
      if (ppuStack_140 == (undefined **)0x0) {
        _objc_release(0);
LAB_107c22c24:
        ppuStack_140 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar11 = ppuStack_140;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar11;
        func_0x00010bf1f3c0();
        _objc_release(ppuVar11);
        _objc_release();
        if ((int)ppuVar24 == 0) goto LAB_107c22c24;
        func_0x000107c7ad38();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar11 = ppuStack_140;
      FUN_107c79658();
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = ppuVar1;
      func_0x00010c0e1a60();
      puStack_178 = PTR_PTR_1126d7348;
      if (ppuVar24 == (undefined **)0x0) {
        puStack_178 = (undefined *)0x0;
        uVar28 = 0x3fe8000000000000;
      }
      else {
        ppuVar24 = ppuVar1;
        func_0x00010c0e1a60(ppuVar1);
        func_0x000108f4715c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13b3c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar24);
        uVar28 = 0x3ff0000000000000;
      }
      ppuVar24 = param_5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar24;
      func_0x00010bf823c0();
      _objc_release(ppuVar24);
      if ((int)ppuVar12 == 0) {
        puStack_188 = (undefined *)0x0;
      }
      else {
        puStack_188 = PTR_PTR_1126d5a38;
        _objc_alloc();
        func_0x00010c04d3e0();
      }
      ppuVar24 = ppuVar1;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar24;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar12;
      func_0x00010c24b260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar24);
      ppuVar24 = ppuVar1;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar24;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar12;
      func_0x00010c24c480();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar14;
      func_0x00010bf28980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      _objc_release(ppuVar12);
      _objc_release(ppuVar24);
      ppuVar24 = param_5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR_PTR_1126c2328;
      func_0x00010bf71580(PTR_PTR_1126c2328);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar24;
      func_0x00010c0b84c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      _objc_release(ppuVar24);
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar24 = (undefined **)0x0;
      }
      else {
        ppuVar24 = ppuVar12;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar24;
        func_0x00010bf1f3c0();
        _objc_release(ppuVar24);
        ppuVar24 = (undefined **)0x0;
        if (((int)ppuVar14 != 0) && (ppuVar15 != (undefined **)0x0)) {
          _objc_retain(ppuVar15);
          ppuVar24 = ppuVar15;
        }
      }
      puVar26 = PTR_PTR_1126d5a78;
      _objc_alloc();
      ppuVar14 = ppuVar1;
      func_0x00010c23fd60(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003ce0();
      _objc_release(ppuVar14);
      func_0x00010c2b1fe0(ppuVar27);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuStack_1a0 = ppuVar13;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_1a0 == (undefined **)0x0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        ppuVar14 = ppuVar13;
        func_0x00010c275280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar14;
        func_0x00010c08fa60();
        if (ppuVar16 == (undefined **)0x0) {
          puVar25 = (undefined *)0x0;
        }
        else {
          ppuVar16 = param_5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar16;
          func_0x00010c086060();
          _objc_release(ppuVar16);
          _objc_release(ppuVar14);
          _objc_release(ppuStack_1a0);
          if ((int)ppuVar17 == 0) {
            puVar25 = (undefined *)0x0;
            goto LAB_107c232b8;
          }
          ppuVar14 = ppuVar13;
          func_0x00010bf50620();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar14;
          func_0x00010c067fc0();
          _objc_release(ppuVar14);
          if (ppuVar16 == (undefined **)0x0) {
            ppuStack_1a0 = (undefined **)0x0;
          }
          else {
            ppuVar14 = ppuVar13;
            func_0x00010bf50620();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar14;
            func_0x00010c067ec0();
            ppuStack_1a0 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((int)ppuVar16 == 1) {
              func_0x000107c7adc8();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_1a0 = ppuVar16;
            }
            else {
              func_0x000107c7ade0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar13;
              func_0x00010bf50620();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar17);
              _objc_release(ppuVar16);
            }
            _objc_release(ppuVar14);
          }
          ppuVar14 = (undefined **)PTR_PTR_1126b0cd8;
          ppuVar16 = ppuVar13;
          func_0x00010bf50280(ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar16;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc35c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar17);
          _objc_release(ppuVar16);
          puVar18 = PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
          ppuVar16 = ppuVar14;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar16;
          if (ppuVar16 == (undefined **)0x0) {
            ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
          }
          ppuVar19 = param_1;
          if (param_1 == (undefined **)0x0) {
            ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b460(puVar18);
          _objc_release(puVar25);
          if (param_1 == (undefined **)0x0) {
            _objc_release(ppuVar19);
          }
          if (ppuVar16 == (undefined **)0x0) {
            _objc_release(ppuVar17);
          }
          _objc_release(ppuVar16);
          if (puVar26 == (undefined *)0x0) {
            puVar25 = PTR_PTR_1126d7360;
            _objc_alloc(PTR_PTR_1126d7360);
            ppuVar16 = ppuVar13;
            func_0x00010c275280(ppuVar13);
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar16;
            func_0x000107c7adb0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c054620(puVar25);
            _objc_release(ppuVar17);
            _objc_release(ppuVar16);
            func_0x00010c2b1ee0(ppuVar27);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b7da0(ppuVar27);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar25);
            puVar25 = (undefined *)0x0;
          }
          else {
            puVar25 = PTR_PTR_1126d5a88;
            _objc_alloc();
            puVar20 = puVar25;
            func_0x000107c7adb0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0516c0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                                *(undefined8 *)PTR__CGSizeZero_110347620,
                                *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),0);
            _objc_release(puVar20);
            func_0x00010c2ab780(ppuVar27);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(puVar18);
        }
        _objc_release(ppuVar14);
        _objc_release(ppuStack_1a0);
      }
LAB_107c232b8:
      puVar18 = PTR_PTR_1126ca450;
      _objc_alloc(PTR_PTR_1126ca450);
      func_0x00010c042c80(0x3fe8000000000000,uVar28,0x3f800000);
      func_0x00010c2b2000(ppuVar27);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b8f80(ppuVar27);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar25);
      _objc_release(puVar26);
      _objc_release(ppuVar12);
      _objc_release(ppuVar24);
      _objc_release(ppuVar15);
      goto LAB_107c23390;
    }
  }
  else {
    func_0x00010c2ba440(ppuVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar10;
    FUN_107c79228();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar11;
    func_0x00010bfb8680();
    _objc_release();
    ppuStack_140 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar24 == (undefined **)0x1) {
      func_0x000107c7ad08();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = ppuVar11;
    }
    else if ((long)ppuVar24 < 2) {
      ppuStack_140 = (undefined **)0x0;
    }
    else {
      func_0x000107c7ad20();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      _objc_release(ppuVar11);
    }
    ppuVar11 = ppuStack_140;
    FUN_107c79658(ppuStack_140,0xd);
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR_PTR_1126d5a78;
    _objc_alloc();
    func_0x00010c003d00();
    func_0x00010c2b1fe0(ppuVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puStack_188 = PTR_PTR_1126ca450;
    _objc_alloc(PTR_PTR_1126ca450);
    ppuVar24 = ppuVar1;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar24;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar24);
    if (ppuVar12 == (undefined **)0x0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      ppuVar24 = &PTR____CFConstantStringClassReference_110eb4018;
      func_0x0001000f6108(&PTR____CFConstantStringClassReference_110eb4018,
                          &PTR____CFConstantStringClassReference_110e61f78,0);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR_PTR_1126d5a88;
      _objc_alloc();
      func_0x00010c0516c0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                          *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                          *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                          *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),0x4038000000000000
                          ,0x4038000000000000,0);
      _objc_release(puVar25);
      _objc_release(ppuVar24);
    }
    func_0x00010c042c60(0x3fe8000000000000,0x3fe8000000000000,0x3f800000,puStack_188);
    _objc_release(puVar26);
    func_0x00010c2b2000(ppuVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    ppuVar13 = (undefined **)PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010c2ab780(ppuVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6020(ppuVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
LAB_107c23390:
    _objc_release(ppuVar13);
    _objc_release(puStack_188);
    _objc_release(puStack_178);
    _objc_release(ppuVar11);
    _objc_release(ppuStack_140);
    _objc_release(ppuVar3);
    _objc_release(ppuVar10);
  }
  _objc_release(puVar22);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar4);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(ppuVar23);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8ad8);
  _objc_release(puVar5);
LAB_107c2342c:
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
    ___stack_chk_fail();
    ppuVar27 = (undefined **)PTR_PTR_1126b0c40;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,ppuVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar27);
  return;
}



/* Entry: 107c23490; end: 107c234fb;  */

void FUN_107c23490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x11e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c234fc; end: 107c23593;  */

void FUN_107c234fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x000107c273c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_107c79d70(0x4031000000000000,0x4036000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c2b6e00(uVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107c23594; end: 107c2386f;  */

void FUN_107c23594(ulong param_1,undefined8 param_2,undefined *param_3,uint param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_6 != 0) && (uVar1 = param_2, FUN_107c6e7e4(), (int)uVar1 != 0)) {
    uVar1 = param_2;
    FUN_107c6e9a0(param_2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    FUN_107c23870(param_1,uVar1,param_3);
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_107c2383c;
  }
  uVar1 = param_2;
  FUN_107c6e7e4();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c077680();
    if ((param_4 == 0) || ((int)uVar1 == 0)) {
      func_0x00010c2b8f80(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = param_3;
      _objc_retain(param_3);
      func_0x000107c273c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7d20(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      if ((param_4 & 1) == 0) {
        func_0x000107c7aca8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107c7acc0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = puVar4;
      FUN_107c79d70(0x4028000000000000,0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7d40(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = param_3;
      FUN_107c79d70(0x4031000000000000,0x4036000000000000,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      func_0x00010c2b6e00(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c2acbc0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar4 = PTR_PTR_1126d5a70;
      _objc_alloc(PTR_PTR_1126d5a70);
      func_0x00010c04d4c0();
      func_0x00010c01b460(puVar3);
      _objc_release(puVar4);
      func_0x00010c2b7da0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_3;
      FUN_107c234fc(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2acbc0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
LAB_107c2383c:
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c23870; end: 107c23a33;  */

bool FUN_107c23870(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    func_0x00010c2ad360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2b8f80(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000107c273c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5f80(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c2b5fa0(0x4038000000000000,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b35c0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = param_3;
    FUN_107c79d70(0x4031000000000000,0x4036000000000000,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c2b6e00(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c2af7c0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf21f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acbc0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return param_2 != 0;
}



/* Entry: 107c23a34; end: 107c23b93;  */

void FUN_107c23a34(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c21d8;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c259740(param_1);
  func_0x00010c2ba3e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c080120(param_1);
  func_0x00010c2b8f80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa31e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a91c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(0);
  func_0x00010c2abd80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(0);
  uVar2 = param_1;
  func_0x00010c25a160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfde980(param_1);
  _objc_release(param_1);
  FUN_107c1a108(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5f60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  FUN_107c79b74(3,0,0);
  func_0x00010c2b5a00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


