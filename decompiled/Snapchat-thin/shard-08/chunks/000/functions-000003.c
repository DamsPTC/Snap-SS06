/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bb4b1c; end: 105bb4b57; -[SCFriendsFeedCellViewModel isPinned] */

undefined8 FUN_105bb4b1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07a0a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bb4b58; end: 105bb4b93; -[SCFriendsFeedCellViewModel isNotShortcutRecipient] */

undefined8 FUN_105bb4b58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078da0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bb4b94; end: 105bb4bd7; -[SCFriendsFeedCellViewModel cellHeight] */

undefined8 FUN_105bb4b94(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33e20();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105bb4bd8; end: 105bb4c13; -[SCFriendsFeedCellViewModel isMuted] */

undefined8 FUN_105bb4bd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078420();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bb4c14; end: 105bb4c57; -[SCFriendsFeedCellViewModel mainLabelBackgroundColor] */

void FUN_105bb4c14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b6a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bb4c58; end: 105bb4c63; -[SCFriendsFeedViewAllCellViewModel reusableCellIdentifier] */

undefined ** FUN_105bb4c58(void)

{
  return &PTR____CFConstantStringClassReference_110e207b8;
}



/* Entry: 105bb4c64; end: 105bb4c6b; -[SCFriendsFeedViewAllCellViewModel hasUnreadMessages] */

undefined8 FUN_105bb4c64(void)

{
  return 0;
}



/* Entry: 105bb4c6c; end: 105bb4c73; -[SCFriendsFeedViewAllCellViewModel entity] */

undefined8 FUN_105bb4c6c(void)

{
  return 0;
}



/* Entry: 105bb4c74; end: 105bb4c7b; -[SCFriendsFeedViewAllCellViewModel isGroupConversation] */

undefined8 FUN_105bb4c74(void)

{
  return 0;
}



/* Entry: 105bb4c7c; end: 105bb4c83; -[SCFriendsFeedViewAllCellViewModel shouldDisableFeedSwiping] */

undefined8 FUN_105bb4c7c(void)

{
  return 1;
}



/* Entry: 105bb4c84; end: 105bb4c8b; -[SCFriendsFeedViewAllCellViewModel tapActionModel] */

undefined8 FUN_105bb4c84(void)

{
  return 0;
}



/* Entry: 105bb4c8c; end: 105bb4c93; -[SCFriendsFeedViewAllCellViewModel doubleTapActionModel] */

undefined8 FUN_105bb4c8c(void)

{
  return 0;
}



/* Entry: 105bb4c94; end: 105bb4c9b; -[SCFriendsFeedViewAllCellViewModel longPressActionModel] */

undefined8 FUN_105bb4c94(void)

{
  return 0;
}



/* Entry: 105bb4c9c; end: 105bb4ca3; -[SCFriendsFeedViewAllCellViewModel avatarTapActionModel] */

undefined8 FUN_105bb4c9c(void)

{
  return 0;
}



/* Entry: 105bb4ca4; end: 105bb4cab; -[SCFriendsFeedViewAllCellViewModel primaryButtonTapActionModel] */

undefined8 FUN_105bb4ca4(void)

{
  return 0;
}



/* Entry: 105bb4cac; end: 105bb4cb3; -[SCFriendsFeedViewAllCellViewModel streakRestoreTapActionModel] */

undefined8 FUN_105bb4cac(void)

{
  return 0;
}



/* Entry: 105bb4cb4; end: 105bb4cbb; -[SCFriendsFeedViewAllCellViewModel shouldAllowTapToRetryOnCell] */

undefined8 FUN_105bb4cb4(void)

{
  return 0;
}



/* Entry: 105bb4cbc; end: 105bb4cc3; -[SCFriendsFeedViewAllCellViewModel isConversationSuggestion] */

undefined8 FUN_105bb4cbc(void)

{
  return 0;
}



/* Entry: 105bb4cc4; end: 105bb4ccb; -[SCFriendsFeedViewAllCellViewModel cellHeight] */

undefined8 FUN_105bb4cc4(void)

{
  return 0x403c000000000000;
}



/* Entry: 105bb4ccc; end: 105bb4da3;  */

undefined1 FUN_105bb4ccc(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf50940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcde0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bb4da4; end: 105bb4db7;  */

void FUN_105bb4da4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105bb4db8; end: 105bb5583;  */

undefined8 FUN_105bb4db8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 105bb5584; end: 105bb56ff;  */

void FUN_105bb5584(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c2980;
  _objc_opt_class(PTR_PTR_1126c2980);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105bb5700;
  uStack_40 = 0x105bb5710;
  uStack_38 = 0;
  func_0x00010c0bffe0(uVar1);
  uVar5 = puStack_58[5];
  _objc_retain(uVar5);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105bb5700; end: 105bb5717;  */

void FUN_105bb5700(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bb5718; end: 105bb5787;  */

void FUN_105bb5718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb5788; end: 105bb5cb3;  */

void FUN_105bb5788(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c2988;
  _objc_opt_class(PTR_PTR_1126c2988);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf50280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105bb5cb4; end: 105bb5daf;  */

undefined1 FUN_105bb5cb4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfa3920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa3ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bb5db0; end: 105bb5dc3;  */

void FUN_105bb5db0(void)

{
  return;
}



/* Entry: 105bb5dc4; end: 105bb5ef7;  */

undefined8 FUN_105bb5dc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8558);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105bb5ef8; end: 105bb614f; -[SCFriendsFeedCreateButton initWithNewChatButtonVariant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bb5ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126ec188;
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_70 = param_1;
  _objc_msgSendSuper2(uVar5,uVar6,uVar7,uVar8,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127314a8) = param_3;
    func_0x00010c219b60(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e99999a);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4008000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c1af000(puVar1);
    func_0x00010b0aeeac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126c2e30;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    lVar4 = (long)_DAT_1127314ac;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar5);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010be3b340(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bb6150; end: 105bb638f; -[SCFriendsFeedCreateButton _createIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6150(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127314b0;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127314b4;
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar3);
  uVar3 = 0;
  uVar8 = 0;
  lVar4 = *(long *)(param_1 + _DAT_1127314a8);
  if (lVar4 != 1) {
    if (lVar4 == 3) {
      uVar8 = 1;
      uVar3 = 0x7d;
    }
    else {
      if (lVar4 != 2) goto LAB_105bb6250;
      uVar8 = 1;
      uVar3 = 0x21c;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
LAB_105bb6250:
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  puVar2 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = uVar3;
  uStack_60 = uVar8;
  func_0x00010bfe8340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = (long)_DAT_1127314b8;
  func_0x00010c1aa620(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c216140(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127314ac));
  func_0x00010c1cbe20(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105bb6390; end: 105bb644f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6390(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      puVar2 = PTR_PTR_1126b0c40;
      func_0x00010bfe7aa0(0x403e000000000000,0x403e000000000000,PTR_PTR_1126b0c40,param_2,
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_1127314b0));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e207d8);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bb6450; end: 105bb66a3; -[SCFriendsFeedCreateButton _initializeCreateButtonIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6450(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  long lStack_120;
  undefined *puStack_118;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0648;
  _objc_opt_new();
  lVar14 = (long)_DAT_1127314b8;
  uVar13 = *(undefined8 *)(param_5 + lVar14);
  *(undefined **)(param_5 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c182220(*(undefined8 *)(param_5 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar14));
  func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_1127314ac));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c1408a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010bdee8e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puStack_118 = PTR_PTR_1126ec188;
  lStack_120 = param_5;
  _objc_msgSendSuper2(&lStack_120,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar15 = param_4 * 0.5;
  lVar3 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar15);
  _objc_release(lVar3);
  func_0x00010bf20c00(param_5);
  dVar16 = param_4 * 0.5;
  lVar12 = (long)_DAT_1127314ac;
  uVar13 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar16);
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  lVar3 = param_5;
  dVar15 = dVar16;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(dVar16,param_2,param_3,param_4,dVar15,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar5 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_release(lVar3);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar12));
  return;
}



/* Entry: 105bb66a4; end: 105bb681f; -[SCFriendsFeedCreateButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb66a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ec188;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar6 = param_4 * 0.5;
  lVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar6);
  _objc_release(lVar1);
  func_0x00010bf20c00(param_5);
  dVar7 = param_4 * 0.5;
  lVar5 = (long)_DAT_1127314ac;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar7);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  lVar1 = param_5;
  dVar6 = dVar7;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(dVar7,param_2,param_3,param_4,dVar6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar4 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  return;
}



/* Entry: 105bb6820; end: 105bb6867; -[SCFriendsFeedCreateButton traitCollectionDidChange:] */

void FUN_105bb6820(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bdee8e0(param_1);
  return;
}



/* Entry: 105bb6868; end: 105bb6897; -[SCFriendsFeedCreateButton handleTap] */

void FUN_105bb6868(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bb6898; end: 105bb693b; -[SCFriendsFeedCreateButton resetCreateButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6898(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = (long)_DAT_1127314b8;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_60);
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127314b0));
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127314ac),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127314b4));
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010c219960(param_1,param_2,&uStack_60);
  return;
}



/* Entry: 105bb693c; end: 105bb6a37; -[SCFriendsFeedCreateButton resetCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb693c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _CGAffineTransformMakeRotation(&uStack_70,0x3fe921fb54442d18);
  lVar2 = (long)_DAT_1127314b8;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_a0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127314ac),param_2,puVar1);
  _objc_release(puVar1);
  _CGAffineTransformMakeScale(&uStack_d0,0x3feb333333333333,0x3feb333333333333);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(param_1,param_2,&uStack_a0);
  return;
}



/* Entry: 105bb6a38; end: 105bb6b03; -[SCFriendsFeedCreateButton animateToCloseButtonWithCompletion:] */

void FUN_105bb6a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1386c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105bb6b04;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105bb6b0c;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fbeb851eb851eb8,0,puVar1,param_2,0x10000,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 105bb6b04; end: 105bb6b1f;  */

void FUN_105bb6b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetCloseButton_11262bb70);
  return;
}



/* Entry: 105bb6b20; end: 105bb6beb; -[SCFriendsFeedCreateButton animateToCreateButtonWithCompletion:] */

void FUN_105bb6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c138540(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105bb6bec;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105bb6bf4;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fbeb851eb851eb8,0,puVar1,param_2,0x10000,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 105bb6bec; end: 105bb6c07;  */

void FUN_105bb6bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1386d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetCreateButton_11262bbd0);
  return;
}



/* Entry: 105bb6c08; end: 105bb6c17; -[SCFriendsFeedCreateButton icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bb6c08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127314bc);
}



/* Entry: 105bb6c18; end: 105bb6c57; -[SCFriendsFeedCreateButton setIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127314bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb6c58; end: 105bb6c77; -[SCFriendsFeedCreateButton delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6c58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127314c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bb6c78; end: 105bb6c8b; -[SCFriendsFeedCreateButton setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6c78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127314c0,param_3);
  return;
}



/* Entry: 105bb6c8c; end: 105bb6d07; -[SCFriendsFeedCreateButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6c8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127314c0);
  _objc_storeStrong(param_1 + _DAT_1127314bc,0);
  _objc_storeStrong(param_1 + _DAT_1127314b4,0);
  _objc_storeStrong(param_1 + _DAT_1127314b0,0);
  _objc_storeStrong(param_1 + _DAT_1127314b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127314ac,0);
  return;
}



/* Entry: 105bb6d08; end: 105bb6de7; -[SCFriendsFeedSublabelIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bb6d08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127314c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127314c4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127314c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127314c8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127314cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127314cc) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bb6de8; end: 105bb6e0f;  */

void FUN_105bb6de8(void)

{
  _objc_alloc(PTR_PTR_1126afd30);
  func_0x00010bfffc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bb6e10; end: 105bb6e43;  */

void FUN_105bb6e10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bb6e44; end: 105bb6fd3; -[SCFriendsFeedSublabelIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6e44(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ec190;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  if (*(char *)(param_5 + _DAT_1127314d0) == '\x01') {
    pdVar1 = (double *)(param_5 + _DAT_1127314d4);
    param_1 = *pdVar1;
    param_2 = pdVar1[1];
    param_3 = *(double *)PTR__CGSizeZero_110347620;
    param_4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar2 = false;
    if ((param_1 == param_3) && (bVar2 = false, !NAN(param_2) && !NAN(param_4))) {
      bVar2 = param_2 == param_4;
    }
    if (!bVar2) {
      uVar3 = *(undefined8 *)(param_5 + _DAT_1127314cc);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      param_3 = *pdVar1;
      param_4 = pdVar1[1];
      param_1 = 0.0;
      func_0x00010c1739e0(0,0,param_3,param_4);
      func_0x00010bf20c00(param_5);
      _CGRectGetMidX();
      param_2 = param_1;
      func_0x00010bf20c00(param_5);
      _CGRectGetMidY();
      func_0x00010c17a6a0(param_1,param_2,uVar3);
      goto LAB_105bb6f60;
    }
  }
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + _DAT_1127314cc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
LAB_105bb6f60:
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + _DAT_1127314c4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105bb6fd4; end: 105bb708f; -[SCFriendsFeedSublabelIconView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb6fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ec190;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127314cc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127314c4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105bb7090; end: 105bb70fb; -[SCFriendsFeedSublabelIconView setIconAnimationLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127314d8;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bb70fc; end: 105bb7303; -[SCFriendsFeedSublabelIconView updateWithFeedIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb70fc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  lVar6 = (long)_DAT_1127314dc;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  if (uVar5 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  else {
    if (uVar2 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_105bb72ac;
    }
    uVar5 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    if (*(long *)(param_1 + lVar6) == 0) {
      func_0x00010bde0620(param_1);
      func_0x00010be35300(param_1);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105bb7304;
      puStack_68 = &UNK_110843540;
      _objc_copyWeak(auStack_60,auStack_58);
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105bb734c;
      puStack_90 = &UNK_1108daa30;
      _objc_copyWeak(auStack_88,auStack_58);
      _objc_copyWeak(auStack_b0,auStack_58);
      func_0x00010c0be3e0(uVar4);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
LAB_105bb72ac:
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105bb7304; end: 105bb734b;  */

void FUN_105bb7304(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed95e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bb734c; end: 105bb73a3;  */

void FUN_105bb734c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bb73a4; end: 105bb7407;  */

void FUN_105bb73a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bed9600(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bb7408; end: 105bb74af; -[SCFriendsFeedSublabelIconView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7408(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127314d8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12c940();
    _objc_release(lVar1);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12aaa0();
    _objc_release(lVar1);
  }
  _objc_storeWeak(param_1 + lVar3,0);
  *(undefined1 *)(param_1 + _DAT_1127314e0) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127314dc);
  *(undefined8 *)(param_1 + _DAT_1127314dc) = 0;
  _objc_release(uVar2);
  func_0x00010bde0620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be35310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideActivityIndicator_11256ae60);
  return;
}



/* Entry: 105bb74b0; end: 105bb753b; -[SCFriendsFeedSublabelIconView _clearIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb74b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_1127314cc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    func_0x00010c1a7f60(uVar2,param_2,1);
    *(undefined1 *)(param_1 + _DAT_1127314d0) = 0;
    lVar3 = (long)_DAT_1127314d4;
    uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
    ((undefined8 *)(param_1 + lVar3))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)(param_1 + lVar3) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105bb753c; end: 105bb7627; -[SCFriendsFeedSublabelIconView _updateIconImageViewWithImageName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb753c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be35300(param_1);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar2 = *(undefined **)(param_1 + _DAT_1127314cc);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    *(undefined1 *)(param_1 + _DAT_1127314d0) = 0;
    lVar3 = (long)_DAT_1127314d4;
    uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    ((undefined8 *)(param_1 + lVar3))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127314cc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar1);
    func_0x00010beb9620(param_1,param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bb7628; end: 105bb776b; -[SCFriendsFeedSublabelIconView _updateActivityIndicatorWithTintColor:isLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127314cc);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127314c4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb776c; end: 105bb78fb; -[SCFriendsFeedSublabelIconView _updateIconImageViewWithSIGIcon:iconColor:iconSize:centerInLegacySlot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb776c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010be35300();
  if (param_5 == 0) {
    puVar4 = *(undefined **)(param_3 + _DAT_1127314cc);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bc60(param_1,param_2,PTR__OBJC_CLASS___UIImage_1126aea68,param_4,param_5,param_6)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    if (param_5 - 0x73U < 2) {
      _objc_retain(puVar2);
      puVar3 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (puVar3 == (undefined *)0x0) {
        _objc_retain(puVar2);
        puVar4 = puVar2;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc1020();
        func_0x00010c14e120(puVar2);
        func_0x00010bfe9260(puVar4,param_4,puVar3,3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
      _objc_release(puVar2);
    }
    *(char *)(param_3 + _DAT_1127314d0) = (char)param_7;
    puVar1 = (undefined8 *)(param_3 + _DAT_1127314d4);
    if (param_7 == 0) {
      uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
      puVar1[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      *puVar1 = uVar5;
    }
    else {
      *puVar1 = param_1;
      puVar1[1] = param_2;
    }
    uVar5 = *(undefined8 *)(param_3 + _DAT_1127314cc);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar5);
    func_0x00010beb9620(param_3,param_4,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105bb78fc; end: 105bb7a77; -[SCFriendsFeedSublabelIconView _showIconImageViewWithIconImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb78fc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127314cc;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_2,param_1);
  puVar4 = param_3;
  if (puVar3 == (undefined *)0x1) {
    puVar3 = param_3;
    func_0x00010bfe8380();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (puVar3 + -1 < (undefined *)0x7) {
      uVar2 = *(undefined8 *)(&UNK_10ddcaab0 + (long)(puVar3 + -1) * 8);
    }
    else {
      uVar2 = 4;
    }
    puVar3 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1020();
    func_0x00010c14e120(param_3);
    func_0x00010bfe9260(puVar4,param_2,puVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105bb7a78; end: 105bb7b0f; -[SCFriendsFeedSublabelIconView setHideIconDuringAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7a78(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(byte *)(param_1 + _DAT_1127314e0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127314e0) = (char)param_3;
  lVar3 = (long)_DAT_1127314cc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  func_0x00010c262ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bb7b10; end: 105bb7b73; -[SCFriendsFeedSublabelIconView _hideActivityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7b10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127314c4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    func_0x00010c1a7f60(uVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105bb7b74; end: 105bb7bff; -[SCFriendsFeedSublabelIconView isIconImageViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bb7b74(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_1127314e0) & 1) == 0) {
    lVar4 = (long)_DAT_1127314cc;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      lVar2 = *(long *)(param_1 + lVar4);
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = 0;
      if (lVar4 != 0) {
        lVar4 = lVar2;
        func_0x00010c074c20(lVar2);
        uVar3 = (uint)lVar4 ^ 1;
      }
      _objc_release(lVar2);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 105bb7c00; end: 105bb7c1f; -[SCFriendsFeedSublabelIconView iconAnimationLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7c00(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127314d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bb7c20; end: 105bb7c2f; -[SCFriendsFeedSublabelIconView hideIconDuringAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105bb7c20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127314e0);
}



/* Entry: 105bb7c30; end: 105bb7c9b; -[SCFriendsFeedSublabelIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb7c30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127314d8);
  _objc_storeStrong(param_1 + _DAT_1127314c8,0);
  _objc_storeStrong(param_1 + _DAT_1127314c4,0);
  _objc_storeStrong(param_1 + _DAT_1127314dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127314cc,0);
  return;
}



/* Entry: 105bb7c9c; end: 105bb7f3f; -[SCTwoRowCarouselPullDownLearningView initWithFrame:] */

undefined8 * FUN_105bb7c9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ec198;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c213040(puVar1);
    puVar2 = puVar1;
    func_0x00010c1cfce0(puVar1);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    dVar10 = 12.0;
    puVar5 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    func_0x00010c26b880(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb3a80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f960();
    func_0x00010c1739e0(0,(dVar10 + -12.0) * 0.5,0x4028000000000000,0x4028000000000000,puVar6);
    _objc_release(puVar2);
    puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar7);
    _objc_release(puVar4);
    puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = puVar8;
    func_0x000105bcd228();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar8);
    func_0x00010bf069e0(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar9);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar7);
    _objc_release(puVar4);
    func_0x00010c16b720(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  return puVar1;
}



/* Entry: 105bb7f40; end: 105bb7fa3; -[SCTwoRowCarouselPullDownLearningView setUseGradientBackgroundColor:] */

void FUN_105bb7f40(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf41560(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        &PTR___NSConcreteGlobalBlock_1108daa90);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bb7fa4; end: 105bb800b;  */

void FUN_105bb7fa4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292b20();
  if (param_2 == 2) {
    uVar1 = 0x3fa2121212121212;
    uVar2 = uVar1;
  }
  else {
    uVar1 = 0x3fef1f1f1f1f1f1f;
    uVar2 = 0x3fef3f3f3f3f3f3f;
  }
  func_0x00010bf41620(uVar1,uVar1,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bb800c; end: 105bb808f; -[SCTwoRowCarouselPullDownLearningView animateDismissal] */

void FUN_105bb800c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105bb8090;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105bb809c;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03420(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 105bb8090; end: 105bb80a3;  */

void FUN_105bb8090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105bb80a4; end: 105bb80b3; -[SCTwoRowCarouselPullDownLearningView useGradientBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105bb80a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127314e4);
}



/* Entry: 105bb80b4; end: 105bb8137; -[SCFriendsFeedAvatarFriendmojiView initWithFrame:] */

undefined1 * FUN_105bb80b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec1a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bb8138; end: 105bb82a7; -[SCFriendsFeedAvatarFriendmojiView setFriendmojiText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb8138(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127314e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127314ec);
  *(undefined8 *)(param_1 + _DAT_1127314ec) = 0;
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127314f0),param_2,1);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar4,param_2,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010c16b720(param_1,param_2,puVar4);
  lVar7 = 1;
  func_0x00010c213040(param_1);
  func_0x00010c1cbe20(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  lVar5 = (long)_DAT_1127314ec;
  if (*(long *)(param_3 + lVar5) != lVar7) {
    _objc_retain(lVar7);
    uVar1 = *(undefined8 *)(param_3 + lVar5);
    *(long *)(param_3 + lVar5) = lVar7;
    _objc_release(uVar1);
    if (lVar7 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_1127314f0),param_2,1);
    }
    else {
      uVar1 = *(undefined8 *)(param_3 + _DAT_1127314e8);
      *(undefined8 *)(param_3 + _DAT_1127314e8) = 0;
      _objc_release(uVar1);
      func_0x00010c16b720(param_3,param_2,0);
      lVar6 = (long)_DAT_1127314f0;
      lVar5 = *(long *)(param_3 + lVar6);
      if (lVar5 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_opt_new();
        uVar1 = *(undefined8 *)(param_3 + lVar6);
        *(undefined **)(param_3 + lVar6) = puVar4;
        _objc_release(uVar1);
        func_0x00010c182220(*(undefined8 *)(param_3 + lVar6),param_2,1);
        func_0x00010befbb60(param_3,param_2,*(undefined8 *)(param_3 + lVar6));
        lVar5 = *(long *)(param_3 + lVar6);
      }
      func_0x00010c1a9f00(lVar5,param_2,lVar7);
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar6),param_2,0);
      func_0x00010c1cbe20(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 105bb82a8; end: 105bb83a3; -[SCFriendsFeedAvatarFriendmojiView setBadgeImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb82a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127314ec;
  if (*(long *)(param_1 + lVar3) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    if (param_3 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127314f0),param_2,1);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127314e8);
      *(undefined8 *)(param_1 + _DAT_1127314e8) = 0;
      _objc_release(uVar1);
      func_0x00010c16b720(param_1,param_2,0);
      lVar4 = (long)_DAT_1127314f0;
      lVar3 = *(long *)(param_1 + lVar4);
      if (lVar3 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_opt_new();
        uVar1 = *(undefined8 *)(param_1 + lVar4);
        *(undefined **)(param_1 + lVar4) = puVar2;
        _objc_release(uVar1);
        func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
        func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
        lVar3 = *(long *)(param_1 + lVar4);
      }
      func_0x00010c1a9f00(lVar3,param_2,param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
      func_0x00010c1cbe20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bb83a4; end: 105bb8433; -[SCFriendsFeedAvatarFriendmojiView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb83a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec1a0;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010b81635c(0x402c000000000000,0x402c000000000000,param_1,param_2,param_3,param_4);
  func_0x00010b816528();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_1127314f0));
  func_0x00010bee2a80(param_5);
  return;
}



/* Entry: 105bb8434; end: 105bb84e7; -[SCFriendsFeedAvatarFriendmojiView _updateUI] */

void FUN_105bb8434(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x21);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bb84e8; end: 105bb857f; -[SCFriendsFeedAvatarFriendmojiView traitCollectionDidChange:] */

void FUN_105bb84e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126ec1a0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010bee2a80(param_1);
  }
  return;
}



/* Entry: 105bb8580; end: 105bb858f; -[SCFriendsFeedAvatarFriendmojiView friendmojiText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bb8580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127314e8);
}



/* Entry: 105bb8590; end: 105bb859f; -[SCFriendsFeedAvatarFriendmojiView badgeImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bb8590(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127314ec);
}



/* Entry: 105bb85a0; end: 105bb85ef; -[SCFriendsFeedAvatarFriendmojiView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb85a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127314ec,0);
  _objc_storeStrong(param_1 + _DAT_1127314e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127314f0,0);
  return;
}



/* Entry: 105bb85f0; end: 105bb86ef; -[SCFriendsFeedAvatarIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bb85f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec1a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c21e900(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127314f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127314f4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127314f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127314f8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bb86f0; end: 105bb87a3;  */

void FUN_105bb86f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bb87a4; end: 105bb887f; -[SCFriendsFeedAvatarIconView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb87a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_1127314fc));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731500);
  *(undefined8 *)(param_1 + _DAT_112731500) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127314f8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127314f4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb8880; end: 105bb89f3; -[SCFriendsFeedAvatarIconView updateWithAvatarIcon:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb8880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = (long)_DAT_112731500;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105bb89f4;
  puStack_60 = &UNK_1108492c0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_copyWeak(auStack_80,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0bda60(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bb89f4; end: 105bb8a9b;  */

void FUN_105bb89f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8d00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bb8a9c; end: 105bb8bdb; -[SCFriendsFeedAvatarIconView _showEmoji:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb8a9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127314f8;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127314f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105bb8bdc; end: 105bb8efb; -[SCFriendsFeedAvatarIconView _showImageUrl:avatarIcon:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb8bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127314f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar10 = (long)_DAT_1127314f4;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  puVar6 = PTR_PTR_1126b85a0;
  puVar5 = puVar4;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar5);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar7);
  _objc_release(puVar8);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731504);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfa7900();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127314fc);
  *(undefined8 *)(param_1 + _DAT_1127314fc) = uVar1;
  _objc_release(uVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bb8efc; end: 105bb8fe7;  */

void FUN_105bb8efc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105bb8fe8;
  puStack_58 = &UNK_110857fd0;
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 105bb8fe8; end: 105bb912b;  */

void FUN_105bb8fe8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105bb912c;
  puStack_70 = &UNK_1108dab20;
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  _objc_copyWeak(auStack_90,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c0c0800(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105bb912c; end: 105bb922b;  */

void FUN_105bb912c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfe97e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a920();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bb922c; end: 105bb9393; -[SCFriendsFeedAvatarIconView _handleImage:avatarIcon:error:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb922c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + _DAT_112731500);
  _objc_retain(param_4);
  _objc_retain(lVar3);
  if (param_4 == lVar3) {
    _objc_release(lVar3);
    _objc_release(param_4);
    if (param_6 == 0) goto LAB_105bb9360;
  }
  else {
    if (lVar3 == 0) {
      _objc_release();
      goto LAB_105bb9360;
    }
    lVar1 = param_4;
    func_0x00010c071ae0();
    _objc_release(lVar3);
    _objc_release(param_4);
    if ((param_6 == 0) || ((int)lVar1 == 0)) goto LAB_105bb9360;
  }
  lVar3 = (long)_DAT_1127314f4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  (**(code **)(param_6 + 0x10))(param_6,param_3 != 0 && param_5 == 0);
  if (param_3 != 0) {
    func_0x00010c1cbe20(param_1);
  }
LAB_105bb9360:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bb9394; end: 105bb960f; -[SCFriendsFeedAvatarIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9394(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ec1a8;
  lStack_80 = param_2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar3 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar1);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  param_1 = param_1 * 0.5;
  lVar3 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0();
  _objc_release(lVar3);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar4 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0x4024000000000000;
  uVar8 = 0x4024000000000000;
  _CGRectIntegral(0,0,0x4024000000000000,0x4024000000000000);
  lVar3 = (long)_DAT_1127314f4;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1 * 0.5,dVar4 * 0.5);
  _objc_release(uVar2);
  dVar10 = dVar4 + -2.0;
  if (0.0 < dVar10) {
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(dVar10,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_1127314f8;
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar5 = 0;
    uVar6 = 0;
    dVar9 = dVar10;
    _CGRectIntegral(0,0,dVar10,dVar10);
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(uVar5,uVar6,dVar10,dVar9);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(param_1 * 0.5,dVar4 * 0.5);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105bb9610; end: 105bb961f; -[SCFriendsFeedAvatarIconView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bb9610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731504);
}



/* Entry: 105bb9620; end: 105bb965f; -[SCFriendsFeedAvatarIconView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731504;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bb9660; end: 105bb96cf; -[SCFriendsFeedAvatarIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9660(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731504,0);
  _objc_storeStrong(param_1 + _DAT_112731500,0);
  _objc_storeStrong(param_1 + _DAT_1127314fc,0);
  _objc_storeStrong(param_1 + _DAT_1127314f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127314f4,0);
  return;
}



/* Entry: 105bb96d0; end: 105bb987f; -[SCFriendsFeedCallingButtonView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bb96d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec1b0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_112731508;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e20838;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20838,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(ppuVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    uVar4 = 0x4026000000000000;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    lVar5 = (long)_DAT_11273150c;
    FUN_105bc9cd0();
    *(undefined8 *)((long)puVar1 + lVar5) = uVar4;
    ((undefined8 *)((long)puVar1 + lVar5))[1] = param_2;
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112731510;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731514);
    *(undefined **)((long)puVar1 + (long)_DAT_112731514) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}


