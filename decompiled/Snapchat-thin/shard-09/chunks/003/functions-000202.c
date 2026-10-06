/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ba2b1c; end: 106ba2b4b; -[SCSharedStoryProfileFooterCellViewModel .cxx_destruct] */

void FUN_106ba2b1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba2b4c; end: 106ba2beb; -[SCSharedStoryProfileGroupMember nameToDisplay] */

void FUN_106ba2b4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c294420(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba2bec; end: 106ba2bf3; -[SCSharedStoryProfileGroupMember colorOption] */

undefined8 FUN_106ba2bec(void)

{
  return 0;
}



/* Entry: 106ba2bf4; end: 106ba2bfb; -[SCSharedStoryProfileGroupMember petImageURL] */

undefined8 FUN_106ba2bf4(void)

{
  return 0;
}



/* Entry: 106ba2bfc; end: 106ba2c03; -[SCSharedStoryProfileGroupMember birthday] */

undefined8 FUN_106ba2bfc(void)

{
  return 0;
}



/* Entry: 106ba2c04; end: 106ba2f63; -[SCSharedStoryProfileHeaderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba2c04(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112759824;
  if (*(ulong *)(param_1 + lVar8) != param_3) {
    puVar2 = PTR_PTR_1126d0db0;
    _objc_opt_class(PTR_PTR_1126d0db0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = uVar1;
    _objc_release(uVar4);
    if (uVar1 != 0) {
      uVar3 = param_3;
      func_0x00010c084fc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c27f880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7c00();
      _objc_release(lVar8);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c27f880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20ecc0();
      _objc_release(lVar8);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c258fa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c27f880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2012c0();
      _objc_release(lVar8);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c258fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfddf00();
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bd8e0;
      _objc_retain();
      _objc_retain(puVar2);
      _objc_alloc(puVar7);
      func_0x00010bff9340(0x4000000000000000,0x4000000000000000);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar2);
      lVar8 = param_1;
      func_0x00010c27f880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ee500();
      _objc_release(lVar8);
      _objc_release(puVar7);
      func_0x00010c0bcbe0(uVar5);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_1);
      _objc_release(puVar2);
      func_0x00010c1cbe20(param_1);
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba2f64; end: 106ba2f7b;  */

void FUN_106ba2f64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processBitmojiGroupViewModel__11257db60,param_2)
  ;
  return;
}



/* Entry: 106ba2f7c; end: 106ba2fbb; -[SCSharedStoryProfileHeaderCell _processBitmojiGroupViewModel:] */

void FUN_106ba2f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfce5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a45c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba2fbc; end: 106ba3013; -[SCSharedStoryProfileHeaderCell _processStoryViewModel:] */

void FUN_106ba2fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214160();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba3014; end: 106ba3063; -[SCSharedStoryProfileHeaderCell setStoriesThumbnailCoordinator:] */

void FUN_106ba3014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba3064; end: 106ba3473; -[SCSharedStoryProfileHeaderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106ba3064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f5658;
  puVar1 = &uStack_c0;
  uStack_c0 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar5 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)PTR_PTR_1126d0db8;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759828);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112759828) = puVar2;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar2);
    func_0x00010c23ba80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    func_0x00010c219b60(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_b0 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    puStack_a8 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    puStack_a0 = puVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
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
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010bf398a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    _objc_release(puVar2);
    func_0x00010bef9040(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c27f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar5;
}



/* Entry: 106ba3474; end: 106ba3477; -[SCSharedStoryProfileHeaderCell identityView] */

void FUN_106ba3474(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_underlyingView_11267d848);
  return;
}



/* Entry: 106ba3478; end: 106ba34c7; -[SCSharedStoryProfileHeaderCell setGroupAvatarConfiguration:] */

void FUN_106ba3478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a45c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba34c8; end: 106ba3517; -[SCSharedStoryProfileHeaderCell setGroupAvatarScopeExposer:] */

void FUN_106ba34c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4600();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba3518; end: 106ba3567; -[SCSharedStoryProfileHeaderCell setGroupAvatarScopeDelegate:] */

void FUN_106ba3518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a45e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba3568; end: 106ba35ab; -[SCSharedStoryProfileHeaderCell groupAvatarScopeExposer] */

void FUN_106ba3568(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfce620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba35ac; end: 106ba35ef; -[SCSharedStoryProfileHeaderCell groupAvatarScopeDelegate] */

void FUN_106ba35ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfce600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba35f0; end: 106ba35fb; +[SCSharedStoryProfileHeaderCell sizeWithViewModel:constrainedToSize:] */

void FUN_106ba35f0(void)

{
  return;
}



/* Entry: 106ba35fc; end: 106ba36e3; -[SCSharedStoryProfileHeaderCell _handleItemTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba35fc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126d0db0;
  uVar5 = *(ulong *)(param_1 + _DAT_112759824);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c258fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275982c);
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar6);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106ba36e4; end: 106ba36f3; -[SCSharedStoryProfileHeaderCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba36e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275982c);
}



/* Entry: 106ba36f4; end: 106ba3733; -[SCSharedStoryProfileHeaderCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba36f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275982c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba3734; end: 106ba3743; -[SCSharedStoryProfileHeaderCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba3734(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759824);
}



/* Entry: 106ba3744; end: 106ba3753; -[SCSharedStoryProfileHeaderCell underlyingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba3744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759828);
}



/* Entry: 106ba3754; end: 106ba3793; -[SCSharedStoryProfileHeaderCell setUnderlyingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba3754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759828;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba3794; end: 106ba37e3; -[SCSharedStoryProfileHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba3794(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759828,0);
  _objc_storeStrong(param_1 + _DAT_112759824,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275982c,0);
  return;
}



/* Entry: 106ba37e4; end: 106ba3a97; -[SCSharedStoryProfileHeaderSectionActionHandler initWithStoryPlaybackCoordinator:userSession:myStoriesPlaybackDataProvider:playbackManagementDataProvider:remoteStoriesDataProvider:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:snapchatterServices:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:circumstanceEngine:notificationPool:notificationOSSettingsRetriever:] */

undefined8 *
FUN_106ba37e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  puStack_70 = PTR_PTR_1126f5660;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_11;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_11;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_11;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_11;
    func_0x00010bf1d740();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf579c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[1];
    puVar1[1] = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
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



/* Entry: 106ba3a98; end: 106ba3a9f; -[SCSharedStoryProfileHeaderSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

void FUN_106ba3a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleActionWithSender_actionMod_1125d19f8);
  return;
}



/* Entry: 106ba3aa0; end: 106ba3ae3; -[SCSharedStoryProfileHeaderSectionActionHandler setPresentingViewController:] */

void FUN_106ba3aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba3ae4; end: 106ba3afb; -[SCSharedStoryProfileHeaderSectionActionHandler presentingViewController] */

void FUN_106ba3ae4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba3afc; end: 106ba3b27; -[SCSharedStoryProfileHeaderSectionActionHandler .cxx_destruct] */

void FUN_106ba3afc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba3b28; end: 106ba3ec7; -[SCSharedStoryProfileHeaderSectionCreator initWithCustomStoryMetadata:userSession:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:myStoriesDataCoordinator:storiesThumbnailCoordinator:storyPlaybackCoordinator:snapchatterServices:groupAvatarScopeExposer:dataSource:readReceiptCoordinator:myStoriesPlaybackDataProvider:playbackManagementDataProvider:remoteStoriesDataProvider:storiesMediaCoordinator:circumstanceEngine:notificationPool:notificationOSSettingsRetriever:] */

undefined8 *
FUN_106ba3b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f5668;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d0dc0;
    _objc_alloc();
    func_0x00010c04dea0();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_19;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
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



/* Entry: 106ba3ec8; end: 106ba3ecf; -[SCSharedStoryProfileHeaderSectionCreator sharedStoryProfileSectionOrder] */

undefined8 FUN_106ba3ec8(void)

{
  return 0;
}



/* Entry: 106ba3ed0; end: 106ba3fc3; -[SCSharedStoryProfileHeaderSectionCreator sharedStoryProfileOrderedConfig] */

void FUN_106ba3ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0xc048000000000000,0,0,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar1,param_2,0,puVar2,puVar3,1,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b12f8;
  _objc_alloc(PTR_PTR_1126b12f8);
  func_0x00010c22c300(param_1);
  func_0x00010c0322a0(puVar2,param_2,param_1,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ba3fc4; end: 106ba405b; -[SCSharedStoryProfileHeaderSectionCreator section] */

void FUN_106ba3fc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  puVar2 = PTR_PTR_1126d0dc8;
  _objc_alloc(PTR_PTR_1126d0dc8);
  func_0x00010c008080();
  func_0x00010c1f9240(puVar1,param_2,puVar2);
  func_0x00010c161980(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba405c; end: 106ba4083; -[SCSharedStoryProfileHeaderSectionCreator actionHandler] */

void FUN_106ba405c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba4084; end: 106ba412b; -[SCSharedStoryProfileHeaderSectionCreator .cxx_destruct] */

void FUN_106ba4084(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106ba412c; end: 106ba4227; -[SCSharedStoryProfileHeaderSectionUpdate initWithCustomStoryMetadata:playbackSequence:snapchatters:snapIdToViewState:] */

undefined1 *
FUN_106ba412c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5670;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba4228; end: 106ba422f; -[SCSharedStoryProfileHeaderSectionUpdate customStoryMetadata] */

undefined8 FUN_106ba4228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ba4230; end: 106ba425f; -[SCSharedStoryProfileHeaderSectionUpdate setCustomStoryMetadata:] */

void FUN_106ba4230(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ba4260; end: 106ba4267; -[SCSharedStoryProfileHeaderSectionUpdate playbackSequence] */

undefined8 FUN_106ba4260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ba4268; end: 106ba4297; -[SCSharedStoryProfileHeaderSectionUpdate setPlaybackSequence:] */

void FUN_106ba4268(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ba4298; end: 106ba429f; -[SCSharedStoryProfileHeaderSectionUpdate snapchatters] */

undefined8 FUN_106ba4298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ba42a0; end: 106ba42cf; -[SCSharedStoryProfileHeaderSectionUpdate setSnapchatters:] */

void FUN_106ba42a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba42d0; end: 106ba42d7; -[SCSharedStoryProfileHeaderSectionUpdate snapIdToViewState] */

undefined8 FUN_106ba42d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ba42d8; end: 106ba4307; -[SCSharedStoryProfileHeaderSectionUpdate setSnapIdToViewState:] */

void FUN_106ba42d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba4308; end: 106ba434f; -[SCSharedStoryProfileHeaderSectionUpdate .cxx_destruct] */

void FUN_106ba4308(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba4350; end: 106ba4627; -[SCSharedStoryProfileHeaderSectionDataProvider initWithCustomStoryMetadata:userSession:dataSource:customStoriesDataFetcher:myStoriesDataCoordinator:storiesThumbnailCoordinator:storyPlaybackCoordinator:groupAvatarScopeExposer:readReceiptCoordinator:circumstanceEngine:] */

undefined8 *
FUN_106ba4350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f5678;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1338;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dbe0();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 106ba4628; end: 106ba48df; -[SCSharedStoryProfileHeaderSectionDataProvider setUp] */

void FUN_106ba4628(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11ac00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0d4c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c25a4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar3 = uVar6;
  func_0x00010bf41860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  uVar6 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 106ba48e0; end: 106ba4953;  */

void FUN_106ba48e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0dd0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c008040();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba4954; end: 106ba4b03;  */

void FUN_106ba4954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0dd0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf624a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c100100(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = param_3;
  func_0x00010c25a4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008040(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba4b04; end: 106ba4b4b;  */

void FUN_106ba4b04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d0a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba4b4c; end: 106ba5467; -[SCSharedStoryProfileHeaderSectionDataProvider _sectionUpdate:] */

void FUN_106ba4b4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puStack_1e8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar33);
  uVar1 = param_3;
  func_0x00010c244980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  func_0x00010bf529e0();
  uVar1 = uVar2;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  puVar37 = PTR_PTR_1126c93b0;
  if (uVar3 < 2) {
    func_0x00010c0fdb80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfcf080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126c96b8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246860(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c93a8;
  _objc_alloc();
  func_0x00010c0509a0();
  uVar3 = param_3;
  func_0x00010c100100();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  if (uVar8 == 0) {
    uVar33 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf624a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar9;
    func_0x00010c268ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar9);
  }
  puVar5 = PTR_PTR_1126d0de0;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bf624a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018a00();
  _objc_release(uVar7);
  _objc_release(uVar3);
  puVar10 = PTR_PTR_1126d0de8;
  func_0x00010bf1b960();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 == 0) {
    puStack_1e8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar8);
    uVar3 = uVar8;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    if (uVar3 == 0) {
      uVar11 = uVar8;
      func_0x000107d22fdc(uVar8,0,0,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c26d760(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar11 = uVar7;
      func_0x000107d227d0(uVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar7);
    _objc_release(uVar3);
    puVar12 = PTR_PTR_1126d0df0;
    _objc_alloc(PTR_PTR_1126d0df0);
    func_0x00010c051ea0();
    puVar13 = PTR_PTR_1126d0de8;
    func_0x00010c25bb80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar13;
    puStack_78 = puVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
  }
  puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_a8 = uVar9;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar14 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_a0 = uVar38;
  puStack_98 = puVar13;
  func_0x00010bf6d680(0x4033000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar7);
  _objc_release(uVar3);
  puVar13 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_c8 = uVar9;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_c0 = uVar38;
  puStack_b8 = puVar14;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  uVar3 = param_3;
  func_0x00010c2413c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uVar7 = param_3;
  func_0x00010c100100();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar11;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    lVar35 = *plStack_180;
    do {
      uVar34 = 0;
      do {
        if (*plStack_180 != lVar35) {
          _objc_enumerationMutation(uVar11);
        }
        lVar36 = *(long *)(lStack_188 + uVar34 * 8);
        lVar17 = lVar36;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar17;
        func_0x00010c08fa60();
        _objc_release(lVar17);
        if (lVar18 != 0) {
          func_0x00010c15f2e0(lVar36);
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29ea60();
          _objc_release(uVar19);
          _objc_release(lVar36);
        }
        uVar34 = uVar34 + 1;
      } while (uVar7 != uVar34);
      uVar7 = uVar11;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uVar11);
  puVar14 = PTR_PTR_1126d0db0;
  _objc_alloc();
  func_0x00010c053640(0x3ff0000000000000);
  puVar15 = PTR_PTR_1126aea98;
  _objc_alloc();
  puVar16 = PTR_PTR_1126d0df8;
  _objc_opt_class(PTR_PTR_1126d0df8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_150 = puVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_initWeak(auStack_198,param_1);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_106ba5724;
  puStack_1b8 = &UNK_110848218;
  _objc_copyWeak(auStack_1a0,auStack_198);
  _objc_retain(puVar20);
  puStack_1b0 = puVar20;
  _objc_retain(param_3);
  ppuVar32 = &puStack_1d0;
  uStack_1a8 = param_3;
  func_0x0001000d76cc("APPSTORE");
  _objc_release(uStack_1a8);
  _objc_release(puStack_1b0);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar20);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puStack_1e8);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(uVar33);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar37);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  __Unwind_Resume(param_3);
  _objc_retain(ppuVar32);
  ppuVar21 = ppuVar32;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar21 = ppuVar32;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar21 != (undefined **)0x0) {
      ppuVar21 = ppuVar32;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar21 != (undefined **)0x0) {
        ppuVar21 = ppuVar32;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar21;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar21);
        if (ppuVar22 != (undefined **)0x0) {
          ppuVar21 = ppuVar32;
          func_0x00010bf1bae0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar21;
          func_0x00010bf1c0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar21);
          if (ppuVar22 != (undefined **)0x0) {
            ppuVar21 = ppuVar32;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar22 = ppuVar21;
            func_0x00010bf1c000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(ppuVar21);
            if (ppuVar22 != (undefined **)0x0) {
              puVar37 = PTR_PTR_1126d0dd8;
              _objc_alloc();
              ppuVar21 = ppuVar32;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              ppuVar22 = ppuVar32;
              func_0x00010bf85d80(ppuVar32);
              _objc_retainAutoreleasedReturnValue();
              ppuVar23 = ppuVar32;
              func_0x00010c2923e0(ppuVar32);
              _objc_retainAutoreleasedReturnValue();
              ppuVar24 = ppuVar32;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar25 = ppuVar24;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar26 = ppuVar32;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar27 = ppuVar26;
              func_0x00010bf1c0a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar28 = ppuVar32;
              func_0x00010bf1bae0(ppuVar32);
              _objc_retainAutoreleasedReturnValue();
              ppuVar29 = ppuVar28;
              func_0x00010bf1c000();
              _objc_retainAutoreleasedReturnValue();
              ppuVar30 = ppuVar32;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar31 = ppuVar30;
              func_0x00010bf1af00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c05f620(puVar37);
              _objc_release(ppuVar31);
              _objc_release(ppuVar30);
              _objc_release(ppuVar29);
              _objc_release(ppuVar28);
              _objc_release(ppuVar27);
              _objc_release(ppuVar26);
              _objc_release(ppuVar25);
              _objc_release(ppuVar24);
              _objc_release(ppuVar23);
              _objc_release(ppuVar22);
              _objc_release(ppuVar21);
              goto LAB_106ba56f8;
            }
          }
        }
      }
    }
  }
  puVar37 = (undefined *)0x0;
LAB_106ba56f8:
  _objc_release(ppuVar32);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar37);
  return;
}



/* Entry: 106ba5468; end: 106ba5723;  */

void FUN_106ba5468(undefined8 param_1,long param_2)

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
  undefined *puVar12;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_2;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          lVar1 = param_2;
          func_0x00010bf1bae0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf1c0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar1);
          if (lVar2 != 0) {
            lVar1 = param_2;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010bf1c000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar1);
            if (lVar2 != 0) {
              puVar12 = PTR_PTR_1126d0dd8;
              _objc_alloc();
              lVar1 = param_2;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              lVar2 = param_2;
              func_0x00010bf85d80(param_2);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = param_2;
              func_0x00010c2923e0(param_2);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_2;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = param_2;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010bf1c0a0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = param_2;
              func_0x00010bf1bae0(param_2);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010bf1c000();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = param_2;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar10;
              func_0x00010bf1af00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c05f620(puVar12);
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
              _objc_release(lVar1);
              goto LAB_106ba56f8;
            }
          }
        }
      }
    }
  }
  puVar12 = (undefined *)0x0;
LAB_106ba56f8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106ba5724; end: 106ba5783;  */

void FUN_106ba5724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c100100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee3c40(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ba5784; end: 106ba580b; -[SCSharedStoryProfileHeaderSectionDataProvider _updateViewModelsOnMainQueue:playbackSequence:] */

void FUN_106ba5784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba580c; end: 106ba5813; -[SCSharedStoryProfileHeaderSectionDataProvider numberOfItemsInSection:] */

void FUN_106ba580c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106ba5814; end: 106ba58bb; -[SCSharedStoryProfileHeaderSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106ba5814(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0df8;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0df8;
  _objc_opt_class();
  ppuVar4 = &puStack_30;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(ppuVar4);
    func_0x00010bf51e00();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106ba5960;
    puStack_80 = &UNK_110845ab0;
    uStack_78 = uVar5;
    _objc_retain();
    ppuVar3 = ppuVar4;
    func_0x000100504554(ppuVar4,&puStack_98);
    _objc_release(ppuVar4);
    _objc_release(uStack_78);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106ba58bc; end: 106ba595f; -[SCSharedStoryProfileHeaderSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106ba58bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ba5960;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba5960; end: 106ba598b;  */

void FUN_106ba5960(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 106ba598c; end: 106ba5adf; -[SCSharedStoryProfileHeaderSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106ba598c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_60,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ba5ae0;
  puStack_70 = &UNK_110845ae0;
  puVar6 = auStack_60;
  _objc_copyWeak(auStack_68,puVar6);
  ppuVar1 = &puStack_88;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126d0df8;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  puStack_58 = puVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_68);
  puVar5 = auStack_60;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde5380();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106ba5ae0; end: 106ba5b27;  */

void FUN_106ba5ae0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba5b28; end: 106ba5beb; -[SCSharedStoryProfileHeaderSectionDataProvider _configureMemberCell:] */

void FUN_106ba5b28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5750);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c1a45e0(param_3);
    func_0x00010c1a4600(param_3);
  }
  puVar2 = PTR_DAT_1126a5758;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar3 = param_3;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(param_3);
  if (lVar3 != 0) {
    func_0x00010c20c920(param_3);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba5bec; end: 106ba5bef; -[SCSharedStoryProfileHeaderSectionDataProvider didTapOnGroupAvatarView] */

void FUN_106ba5bec(void)

{
  return;
}



/* Entry: 106ba5bf0; end: 106ba5c03; +[SCSharedStoryProfileHeaderSectionDataProvider announcerIdentifier] */

void FUN_106ba5bf0(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106ba5c04; end: 106ba5c07; -[SCSharedStoryProfileHeaderSectionDataProvider addListener:] */

void FUN_106ba5c04(void)

{
  return;
}



/* Entry: 106ba5c08; end: 106ba5c0b; -[SCSharedStoryProfileHeaderSectionDataProvider removeListener:] */

void FUN_106ba5c08(void)

{
  return;
}



/* Entry: 106ba5c0c; end: 106ba5c23; -[SCSharedStoryProfileHeaderSectionDataProvider dataProviderDelegate] */

void FUN_106ba5c0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba5c24; end: 106ba5c2f; -[SCSharedStoryProfileHeaderSectionDataProvider setDataProviderDelegate:] */

void FUN_106ba5c24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106ba5c30; end: 106ba5c37; -[SCSharedStoryProfileHeaderSectionDataProvider sectionDataModel] */

undefined8 FUN_106ba5c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106ba5c38; end: 106ba5c3f; -[SCSharedStoryProfileHeaderSectionDataProvider setSectionDataModel:] */

void FUN_106ba5c38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ba5c40; end: 106ba5c47; -[SCSharedStoryProfileHeaderSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106ba5c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106ba5c48; end: 106ba5c77; -[SCSharedStoryProfileHeaderSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106ba5c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba5c78; end: 106ba5c7f; -[SCSharedStoryProfileHeaderSectionDataProvider playbackSequence] */

undefined8 FUN_106ba5c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106ba5c80; end: 106ba5d5f; -[SCSharedStoryProfileHeaderSectionDataProvider .cxx_destruct] */

void FUN_106ba5c80(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106ba5d60; end: 106ba5ee3; -[SCStoriesProfileHeaderCellModel initWithTitle:subtitle:iconName:percentageUnseen:items:storyActionModel:hasUnviewedSnaps:accessibilityIdentifier:] */

undefined1 *
FUN_106ba5d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f5680;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
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
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba5ee4; end: 106ba5f07; -[SCStoriesProfileHeaderCellModel copyWithZone:] */

undefined8 FUN_106ba5ee4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ba5f08; end: 106ba5fd3; -[SCStoriesProfileHeaderCellModel hash] */

undefined8 * FUN_106ba5f08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar5 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_106ba60f8:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106ba6104;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(char *)(puVar5 + 1) == *(char *)(param_3 + 1))) {
      dVar11 = ABS((double)puVar5[5] - (double)param_3[5]);
      dVar10 = ABS((double)puVar5[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((bVar1) &&
           ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
          && ((lVar7 = puVar5[3], lVar7 == param_3[3] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
         && ((((lVar7 = puVar5[4], lVar7 == param_3[4] || (func_0x00010c071ae0(), (int)lVar7 != 0))
              && ((lVar7 = puVar5[6], lVar7 == param_3[6] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             ((lVar7 = puVar5[7], lVar7 == param_3[7] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
            )) {
        puVar9 = (undefined8 *)puVar5[8];
        if (puVar9 != (undefined8 *)param_3[8]) {
          func_0x00010c071ae0();
          goto LAB_106ba6104;
        }
        goto LAB_106ba60f8;
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_106ba6104:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 106ba5fd4; end: 106ba611f; -[SCStoriesProfileHeaderCellModel isEqual:] */

long FUN_106ba5fd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106ba60f8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106ba6104;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_106ba6104;
        }
        goto LAB_106ba60f8;
      }
    }
    lVar4 = 0;
  }
LAB_106ba6104:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106ba6120; end: 106ba6127; -[SCStoriesProfileHeaderCellModel title] */

undefined8 FUN_106ba6120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ba6128; end: 106ba612f; -[SCStoriesProfileHeaderCellModel subtitle] */

undefined8 FUN_106ba6128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ba6130; end: 106ba6137; -[SCStoriesProfileHeaderCellModel iconName] */

undefined8 FUN_106ba6130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ba6138; end: 106ba613f; -[SCStoriesProfileHeaderCellModel percentageUnseen] */

undefined8 FUN_106ba6138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ba6140; end: 106ba6147; -[SCStoriesProfileHeaderCellModel items] */

undefined8 FUN_106ba6140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ba6148; end: 106ba614f; -[SCStoriesProfileHeaderCellModel storyActionModel] */

undefined8 FUN_106ba6148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ba6150; end: 106ba6157; -[SCStoriesProfileHeaderCellModel hasUnviewedSnaps] */

undefined1 FUN_106ba6150(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106ba6158; end: 106ba615f; -[SCStoriesProfileHeaderCellModel accessibilityIdentifier] */

undefined8 FUN_106ba6158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ba6160; end: 106ba61bf; -[SCStoriesProfileHeaderCellModel .cxx_destruct] */

void FUN_106ba6160(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ba61c0; end: 106ba632b; -[SCStoriesProfileHeaderItemBitmojiGroup initWithGroupAvatarConfiguration:displayName:subtext:iconName:tapActionModel:accessibilityIdentifier:] */

undefined1 *
FUN_106ba61c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f5688;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba632c; end: 106ba634f; -[SCStoriesProfileHeaderItemBitmojiGroup copyWithZone:] */

undefined8 FUN_106ba632c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ba6350; end: 106ba63f3; -[SCStoriesProfileHeaderItemBitmojiGroup hash] */

undefined8 * FUN_106ba6350(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106ba64d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106ba64e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_106ba64e0;
                }
                goto LAB_106ba64d4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106ba64e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106ba63f4; end: 106ba64fb; -[SCStoriesProfileHeaderItemBitmojiGroup isEqual:] */

long FUN_106ba63f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106ba64d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106ba64e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_106ba64e0;
                }
                goto LAB_106ba64d4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106ba64e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106ba64fc; end: 106ba6503; -[SCStoriesProfileHeaderItemBitmojiGroup groupAvatarConfiguration] */

undefined8 FUN_106ba64fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ba6504; end: 106ba650b; -[SCStoriesProfileHeaderItemBitmojiGroup displayName] */

undefined8 FUN_106ba6504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ba650c; end: 106ba6513; -[SCStoriesProfileHeaderItemBitmojiGroup subtext] */

undefined8 FUN_106ba650c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ba6514; end: 106ba651b; -[SCStoriesProfileHeaderItemBitmojiGroup iconName] */

undefined8 FUN_106ba6514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ba651c; end: 106ba6523; -[SCStoriesProfileHeaderItemBitmojiGroup tapActionModel] */

undefined8 FUN_106ba651c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ba6524; end: 106ba652b; -[SCStoriesProfileHeaderItemBitmojiGroup accessibilityIdentifier] */

undefined8 FUN_106ba6524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ba652c; end: 106ba658b; -[SCStoriesProfileHeaderItemBitmojiGroup .cxx_destruct] */

void FUN_106ba652c(long param_1)

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



/* Entry: 106ba658c; end: 106ba6663; -[SCStoriesProfileHeaderItemStory initWithThumbnailInfo:tapActionModel:accessibilityIdentifier:] */

undefined1 *
FUN_106ba658c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5690;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba6664; end: 106ba6687; -[SCStoriesProfileHeaderItemStory copyWithZone:] */

undefined8 FUN_106ba6664(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


