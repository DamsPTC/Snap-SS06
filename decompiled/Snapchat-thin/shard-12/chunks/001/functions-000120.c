/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e2d8c4; end: 108e2d957; -[SCPreviewCaptionEditingManagerLegacy willStopEditing] */

void FUN_108e2d8c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c10a200(*(undefined8 *)(param_1 + 0x100));
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010bf301e0(PTR_PTR_1126c4438,param_2,*(undefined8 *)(param_1 + 0x158));
  lVar2 = param_1 + 0x150;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  uVar3 = uVar4;
  func_0x00010c252440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1107a0(lVar2,param_2,param_1,uVar4,uVar3,*(undefined1 *)(param_1 + 0xb0),
                      (uint)puVar1 ^ 1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e2d958; end: 108e2def7; -[SCPreviewCaptionEditingManagerLegacy stoppedEditing] */

void FUN_108e2d958(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lStack_240;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [264];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c4438;
  func_0x00010bf301e0(PTR_PTR_1126c4438,param_2,*(undefined8 *)(param_1 + 0x158));
  if (((ulong)puVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    puVar6 = PTR_PTR_1126c4178;
    uVar12 = *(ulong *)(param_1 + 0x158);
    _objc_retain(uVar12);
    _objc_opt_class(puVar6);
    uVar7 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar6);
    uVar1 = uVar12;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar12);
    uVar7 = uVar1;
    func_0x00010c26ba60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c18b940(uVar7);
    _objc_release(uVar7);
    lStack_240 = *(long *)(param_1 + 0x158);
    _objc_retain();
    _objc_initWeak(auStack_178,param_1);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108e2def8;
    puStack_190 = &UNK_110841fb0;
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(lStack_240);
    lStack_188 = lStack_240;
    func_0x000107c312d4(0x3e4ccccd,"APPSTORE",&puStack_1a8);
    _objc_release(lStack_188);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  else {
    lStack_240 = *(long *)(param_1 + 0x158);
    func_0x00010c294880();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(lStack_240);
    lVar13 = lStack_240;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lStack_240);
        }
        uVar11 = *(undefined8 *)(lVar10 * 8);
        lVar14 = param_1 + 0x10;
        _objc_loadWeakRetained();
        func_0x00010c0b5ac0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar11;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar14;
        func_0x00010c244440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar11);
        _objc_release(lVar14);
        if (lVar3 != 0) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar13 != lVar10);
      lVar13 = lStack_240;
      func_0x00010bf52a60();
    }
    _objc_release(lStack_240);
    func_0x00010befbd00(*(undefined8 *)(param_1 + 0x158));
    lVar10 = *(long *)(param_1 + 0x158);
    func_0x00010c275a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar10);
    lVar13 = lVar10;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        puVar5 = PTR_PTR_1126c0e38;
        _objc_alloc(PTR_PTR_1126c0e38);
        func_0x00010c019f00();
        func_0x00010befa120(puVar4);
        _objc_release(puVar5);
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      lVar13 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    func_0x00010c217ac0(*(undefined8 *)(param_1 + 0x158));
    _objc_release(puVar4);
    _objc_release(lVar10);
    _objc_release(puVar6);
  }
  _objc_release(lStack_240);
  lVar13 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1106a0();
  _objc_release(lVar13);
  lVar13 = *(long *)(param_1 + 0x158);
  _objc_retain(lVar13);
  uVar8 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  _objc_release(uVar8);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0xe8));
  func_0x00010be35da0(param_1);
  lVar10 = *(long *)(param_1 + 0x160);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010bf529e0();
  _objc_release(lVar10);
  if (lVar9 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c14d960();
    FUN_108e3eca4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x160));
    _objc_release(uVar8);
  }
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x160));
  if ((int)puVar2 != 0) {
    lVar10 = lVar13;
    func_0x00010bf303a0(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained();
    func_0x00010c289180();
    _objc_release(lVar9);
    func_0x00010c167d60(*(undefined8 *)(param_1 + 0x100));
    _objc_release(lVar10);
  }
  lVar9 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar13;
  func_0x00010c252440(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110780(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar9);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  func_0x00010beba980(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar13 = lVar13 + 0x28;
  _objc_loadWeakRetained(lVar13);
  func_0x00010bf6b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 108e2def8; end: 108e2df2f;  */

void FUN_108e2def8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e2df30; end: 108e2dfb7; -[SCPreviewCaptionEditingManagerLegacy didStartEditingCaption:] */

void FUN_108e2df30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf303a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c110860(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c265790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_switchToCarouselMode__112677008,0);
  return;
}



/* Entry: 108e2dfb8; end: 108e2dfeb; -[SCPreviewCaptionEditingManagerLegacy captionEditingLayoutDidUpdate:] */

void FUN_108e2dfb8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x158) != param_3) {
    return;
  }
  func_0x00010be49720();
                    /* WARNING: Could not recover jumptable at 0x00010bebb330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showStickerSuggestionsIfAvailab_11258c670);
  return;
}



/* Entry: 108e2dfec; end: 108e2e03b; -[SCPreviewCaptionEditingManagerLegacy textChanged] */

void FUN_108e2dfec(long param_1)

{
  func_0x00010c0b08e0(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010beba980(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1106c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e2e03c; end: 108e2e043; -[SCPreviewCaptionEditingManagerLegacy textViewDidChangeSelectionRange:text:] */

void FUN_108e2e03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf30290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_captionSelectionChanged_text__1125a9a48);
  return;
}



/* Entry: 108e2e044; end: 108e2e093; -[SCPreviewCaptionEditingManagerLegacy captionDidMove:] */

void FUN_108e2e044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1107e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e2e094; end: 108e2e0cf; -[SCPreviewCaptionEditingManagerLegacy didSwitchToTaggingMode] */

void FUN_108e2e094(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010bf329a0();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xa8),PTR_s_logUserTaggingFromTextInput_11260a580);
    return;
  }
  return;
}



/* Entry: 108e2e0d0; end: 108e2e2ab; -[SCPreviewCaptionEditingManagerLegacy userToggledAppliedStyle] */

void FUN_108e2e0d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010bf301e0(PTR_PTR_1126c4438,param_2,*(undefined8 *)(param_1 + 0x158));
  if ((int)puVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x158);
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010befd420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x158);
      func_0x00010bf303a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c113040();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c1593c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c113040();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c071ae0(uVar6,param_2,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar11);
      _objc_release(uVar5);
      if ((int)uVar10 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x158);
        func_0x00010c252440(uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010beccaa0(param_1,param_2,uVar11);
        _objc_release(uVar11);
        func_0x00010c1789c0(*(undefined8 *)(param_1 + 0x158),param_2,lVar3);
        puVar1 = PTR_PTR_1126c4438;
        func_0x00010bfaf420(PTR_PTR_1126c4438,param_2,*(undefined8 *)(param_1 + 0x158));
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x158);
        func_0x00010bf303a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed7440(param_1,param_2,uVar11,puVar1,0);
        _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 108e2e2ac; end: 108e2e393; -[SCPreviewCaptionEditingManagerLegacy _toggleCaptionStylePreferenceForState:] */

undefined8 FUN_108e2e2ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c113040(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c071ae0(lVar2,param_2,lVar3);
  if ((int)lVar4 == 0) {
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    lVar4 = lVar1;
    func_0x00010befd420();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 != 0) {
      uVar6 = 2;
      goto LAB_108e2e374;
    }
  }
  uVar6 = 1;
LAB_108e2e374:
  _objc_release(lVar1);
  return uVar6;
}



/* Entry: 108e2e394; end: 108e2e3fb; -[SCPreviewCaptionEditingManagerLegacy caption:didPasteImageData:isAnimated:] */

void FUN_108e2e394(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x150;
    _objc_loadWeakRetained(param_1);
    func_0x00010c110700();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e2e3fc; end: 108e2e45b; -[SCPreviewCaptionEditingManagerLegacy canStopEditingCaption:] */

long FUN_108e2e3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x150;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c110640();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108e2e45c; end: 108e2e627; -[SCPreviewCaptionEditingManagerLegacy beginEditingWithText:carouselMode:defaultCaptionStyleType:openAction:customBackgroundView:] */

void FUN_108e2e45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1 + 0x150;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1108a0();
  _objc_release(lVar1);
  func_0x00010bde6940(param_1);
  lVar1 = param_1 + 0x150;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1107c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010be62dc0(param_1);
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_4;
    _objc_retain(param_7);
    _objc_retain(param_6);
    uVar3 = param_3;
    _objc_retain(param_3);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108e2e628; end: 108e2e773;  */

void FUN_108e2e628(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2a6cc0(*(undefined8 *)(lVar1 + 0x100));
    uVar3 = *(undefined8 *)(lVar1 + 0x100);
    uVar2 = param_2;
    func_0x00010bf303a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d60(uVar3);
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x40) != 0) {
      func_0x00010c265780(*(undefined8 *)(lVar1 + 0x100));
    }
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x158);
    *(undefined8 *)(lVar1 + 0x158) = param_2;
    _objc_release(uVar2);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010bdd34a0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e2e774; end: 108e2e807;  */

void FUN_108e2e774(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c24eaa0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  if (*(long *)(param_1 + 0x38) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c213430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setTextFromTagging__112662730,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000108edf3c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 108e2e808; end: 108e2e977; -[SCPreviewCaptionEditingManagerLegacy _createCaptionFromState:shouldKeepStyles:] */

void FUN_108e2e808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_PTR_1126dc0c0;
  _objc_retain(param_3);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf2ff00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x31);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bee66a0();
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010bf2ffe0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),puVar7,param_2
                      ,param_3,param_1,lVar4,uVar1,uVar2,&uStack_90,uVar5,
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),(char)lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c087020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6fc0(puVar7,param_2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e2e978; end: 108e2eb0b; -[SCPreviewCaptionEditingManagerLegacy _createCaptionStateWithRecentCaptionStyleType] */

void FUN_108e2e978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cbf60;
  _objc_alloc_init();
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  func_0x00010c21b740();
  lVar2 = *(long *)(param_1 + 0x100);
  func_0x00010c1593c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126cbf68;
    func_0x00010bf8b640(PTR_PTR_1126cbf68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178860(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c178860(puVar1,param_2,lVar2);
  }
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010bf303a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25e1c0(puVar1);
  lVar2 = param_1;
  func_0x00010bdcd9e0(param_1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169b00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  puVar3 = puVar1;
  func_0x00010bf303a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d60(uVar7,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c26b7a0();
  *(undefined **)(param_1 + 0xa0) = puVar6;
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c166c00(puVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e2eb0c; end: 108e2ed63; -[SCPreviewCaptionEditingManagerLegacy _createCaptionStateWithDefaultCaptionStyleType:] */

void FUN_108e2eb0c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126cbf60;
  _objc_alloc_init();
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  func_0x00010c21b740();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108e2ed64;
  puStack_70 = &UNK_110848ba8;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  lStack_60 = param_1;
  _objc_retain(puVar1);
  ppuVar3 = &puStack_88;
  puStack_58 = puVar1;
  _objc_retainBlock();
  if (param_3 == 0) {
    puVar5 = *(undefined **)(param_1 + 0x100);
    func_0x00010c1593c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) goto LAB_108e2ec94;
    puVar6 = PTR_PTR_1126cbf68;
    func_0x00010bf8b640(PTR_PTR_1126cbf68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178860(puVar2);
    _objc_release(puVar6);
  }
  else {
    if (param_3 == 1) {
      _objc_initWeak(auStack_90,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_90);
      _objc_retain(puVar2);
      _objc_retain(ppuVar3);
      func_0x00010bfc69a0(uVar4);
      _objc_release(uVar4);
      _objc_release(ppuVar3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      goto LAB_108e2ecb4;
    }
    if (param_3 != 2) goto LAB_108e2ecb4;
    puVar5 = PTR_PTR_1126cbf68;
    func_0x00010bf8b640(PTR_PTR_1126cbf68);
    _objc_retainAutoreleasedReturnValue();
LAB_108e2ec94:
    func_0x00010c178860(puVar2);
  }
  _objc_release(puVar5);
  (*(code *)ppuVar3[2])(ppuVar3);
LAB_108e2ecb4:
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puStack_58);
  _objc_release(puStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e2ed64; end: 108e2ee7f;  */

void FUN_108e2ed64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf303a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25e1c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdcd9e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169b00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x100);
  func_0x00010bf303a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d60(uVar4);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c26b7a0();
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c166c00(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e2ee80; end: 108e2ef97;  */

void FUN_108e2ee80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126dc100;
  func_0x00010bfbc0e0(PTR_PTR_1126dc100);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfa5820();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c0e3040(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e2ef98; end: 108e2f2f7;  */

void FUN_108e2ef98(long param_1,long param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = lVar3 + 0x18;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf00b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_opt_new();
    _objc_retain(param_2);
    param_4 = auStack_f0;
    param_5 = 0x10;
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar16 = *(ulong *)(lVar13 * 8);
        _objc_retain(lVar5);
        lVar8 = lVar5;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar8 != 0) {
          lVar15 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar5);
            }
            uVar14 = *(ulong *)(lVar15 * 8);
            uVar9 = uVar14;
            func_0x00010bfadea0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar7;
            func_0x00010c0de9e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            uVar9 = uVar16;
            if (puVar10 == (undefined *)0x0) {
              func_0x00010bfadea0();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar14;
              func_0x00010c0720c0();
              if ((uVar11 & 1) != 0) {
                func_0x00010c071f40();
                _objc_release(uVar14);
                goto joined_r0x000108e2f184;
              }
              _objc_release(uVar14);
            }
            else {
              func_0x00010c071f40();
joined_r0x000108e2f184:
              if ((uVar9 & 1) != 0) {
                func_0x00010befa120(puVar6);
                _objc_release(puVar10);
                goto LAB_108e2f1dc;
              }
            }
            _objc_release(puVar10);
            lVar15 = lVar15 + 1;
          } while (lVar8 != lVar15);
          lVar8 = lVar5;
          func_0x00010bf52a60();
        }
LAB_108e2f1dc:
        _objc_release(lVar5);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar4);
      param_4 = auStack_f0;
      param_5 = 0x10;
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar10 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      puVar12 = PTR_PTR_1126cbf68;
      func_0x00010bf8b5c0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar12;
      func_0x00010c178860(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar12);
    }
    else {
      param_3 = puVar10;
      func_0x00010c178860(*(undefined8 *)(param_1 + 0x20));
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar6 = PTR_PTR_1126cbf60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  func_0x00010c166c00();
  func_0x00010c247520(param_3);
  func_0x00010c206c40(puVar6);
  func_0x00010c178860(puVar6);
  _objc_release(param_4);
  func_0x00010c169b00(puVar6);
  _objc_release(param_5);
  puVar7 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6);
  _objc_release(puVar7);
  func_0x00010bf348c0(param_3);
  func_0x00010c17a860(puVar6);
  func_0x00010bfe1300(param_3);
  func_0x00010c1a7f60(puVar6);
  func_0x00010bf8c660(param_3);
  func_0x00010c193b00(puVar6);
  func_0x00010c086c00(param_3);
  func_0x00010c1b6e20(puVar6);
  puVar7 = param_3;
  func_0x00010c0fb8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db640(puVar6);
  _objc_release(puVar7);
  func_0x00010c280560(param_3);
  func_0x00010c21b740(puVar6);
  puVar7 = param_3;
  func_0x00010c268460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211940(puVar6);
  _objc_release(puVar7);
  func_0x00010c08a3e0(param_3);
  func_0x00010c1b8c80(puVar6);
  puVar7 = param_3;
  func_0x00010c2759e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ac0(puVar6);
  _objc_release(puVar7);
  func_0x00010c25e1c0(param_3);
  func_0x00010c20eb40(puVar6);
  func_0x00010c0ff520(param_3);
  func_0x00010c1dd660(puVar6);
  puVar7 = param_3;
  func_0x00010bf8c1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193640(puVar6);
  _objc_release(puVar7);
  puVar7 = param_3;
  func_0x00010c06e960();
  puVar10 = puVar6;
  func_0x00010c06e960();
  puVar12 = param_3;
  if ((int)puVar7 == (int)puVar10) {
    puVar7 = param_3;
    func_0x00010c06e960();
    puVar10 = puVar6;
    func_0x00010c06e960();
    func_0x00010bf34840(param_3);
    func_0x00010c17a840(puVar6);
    func_0x00010c141a80(param_3);
    func_0x00010c1ee7a0(puVar6);
    if ((int)puVar7 == (int)puVar10) goto LAB_108e2f5bc;
    func_0x00010bf0e540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar6);
  }
  else {
    func_0x00010c06e960(puVar6);
    func_0x00010bf0e540(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010c14c7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar6);
    _objc_release(puVar7);
  }
  _objc_release(puVar12);
LAB_108e2f5bc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e2f2f8; end: 108e2f5db; -[SCPreviewCaptionEditingManagerLegacy _transferStateToCurrentMode:captionStyle:appliedStyle:] */

void FUN_108e2f2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbf60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  func_0x00010c166c00();
  uVar2 = param_3;
  func_0x00010c247520(param_3);
  func_0x00010c206c40(puVar1,param_2,uVar2);
  func_0x00010c178860(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c169b00(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bf348c0(param_3);
  func_0x00010c17a860(puVar1);
  uVar2 = param_3;
  func_0x00010bfe1300(param_3);
  func_0x00010c1a7f60(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf8c660(param_3);
  func_0x00010c193b00(puVar1,param_2,uVar2);
  func_0x00010c086c00(param_3);
  func_0x00010c1b6e20(puVar1);
  uVar2 = param_3;
  func_0x00010c0fb8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db640(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c280560(param_3);
  func_0x00010c21b740(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c268460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211940(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c08a3e0(param_3);
  func_0x00010c1b8c80(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2759e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ac0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c25e1c0(param_3);
  func_0x00010c20eb40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0ff520(param_3);
  func_0x00010c1dd660(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf8c1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193640(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c06e960();
  puVar3 = puVar1;
  func_0x00010c06e960();
  uVar4 = param_3;
  if ((int)uVar2 == (int)puVar3) {
    uVar2 = param_3;
    func_0x00010c06e960();
    puVar3 = puVar1;
    func_0x00010c06e960();
    func_0x00010bf34840(param_3);
    func_0x00010c17a840(puVar1);
    func_0x00010c141a80(param_3);
    func_0x00010c1ee7a0(puVar1);
    if ((int)uVar2 == (int)puVar3) goto LAB_108e2f5bc;
    func_0x00010bf0e540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar1,param_2,uVar4);
  }
  else {
    func_0x00010c06e960(puVar1);
    func_0x00010bf0e540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c14c7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
LAB_108e2f5bc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e2f5dc; end: 108e2f62b; -[SCPreviewCaptionEditingManagerLegacy _constructCarouselControllerIfNecessary] */

void FUN_108e2f5dc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    return;
  }
  lVar1 = param_1 + 0x150;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c110880();
  _objc_release(lVar1);
  func_0x00010bde6920(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beaff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupStickerSuggestionsControll_112589970);
  return;
}



/* Entry: 108e2f62c; end: 108e2f7f7; -[SCPreviewCaptionEditingManagerLegacy _constructCaptionCarousel] */

void FUN_108e2f62c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126dc108;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c05fbe0(puVar1,param_2,uVar5,uVar6,lVar3,lVar4,*(undefined8 *)(param_1 + 0xa8),param_1
                      ,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x148));
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _CGRectGetHeight(uVar2,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                   *(undefined8 *)(param_1 + 0x58));
  dVar7 = *(double *)(param_1 + 0x40);
  _CGRectGetWidth(dVar7,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                  *(undefined8 *)(param_1 + 0x58));
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0,uVar2,dVar7,0x404e000000000000);
  _objc_release(uVar5);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf20c00();
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a840(dVar7 * 0.5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108e2f7f8; end: 108e2f8d7; -[SCPreviewCaptionEditingManagerLegacy _setupStickerSuggestionsControllerIfNecessary] */

void FUN_108e2f7f8(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x140) != 0) {
    return;
  }
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108e2f88c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108e2f8d8; end: 108e2fa7f; -[SCPreviewCaptionEditingManagerLegacy _constructStickerSuggestionsController] */

void FUN_108e2f8d8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  if (((*(long *)(param_1 + 0x140) == 0) && (lVar2 = *(long *)(param_1 + 0x128), lVar2 != 0)) &&
     (*(long *)(param_1 + 0x130) != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa2c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x108);
      func_0x00010c07fa80();
      if (iVar1 != 0) {
        puVar5 = PTR_PTR_1126dc110;
        _objc_alloc();
        uVar6 = *(undefined8 *)(param_1 + 0xf8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c142e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05fc60(puVar5,param_2,uVar7,lVar4,*(undefined8 *)(param_1 + 0x130),param_1);
        uVar8 = *(undefined8 *)(param_1 + 0x140);
        *(undefined **)(param_1 + 0x140) = puVar5;
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar7 = *(undefined8 *)(param_1 + 0x140);
        func_0x00010bf4b2a0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        _CGRectGetHeight(uVar6,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(param_1 + 0x58));
        dVar9 = *(double *)(param_1 + 0x40);
        _CGRectGetWidth(dVar9,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58));
        func_0x00010c19f0e0(0,uVar6,dVar9,0x404e000000000000,uVar7);
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf20c00();
        func_0x00010c17a840(dVar9 * 0.5,uVar7);
        _objc_release(param_1);
        _objc_release(uVar7);
      }
    }
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108e2fa80; end: 108e2fba3; -[SCPreviewCaptionEditingManagerLegacy _showStickerSuggestionsIfAvailable] */

void FUN_108e2fa80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x140);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x140);
    func_0x00010bfdb140();
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c074c20();
      _objc_release(uVar4);
      if ((int)uVar5 == 0) {
        lVar6 = lVar3;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        if (lVar6 == 0) {
          puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_58 = 0xc2000000;
          pcStack_50 = FUN_108e2fba4;
          puStack_48 = &UNK_110841f80;
          lStack_40 = param_1;
          _objc_retain(lVar3);
          lStack_38 = lVar3;
          func_0x00010c0f9680(puVar1,param_2,&puStack_60);
          _objc_release(lStack_38);
        }
        func_0x00010c1a7f60(lVar3,param_2,0);
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf21300();
        _objc_release(param_1);
        goto LAB_108e2fb8c;
      }
    }
    func_0x00010be35da0(param_1);
  }
LAB_108e2fb8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108e2fba4; end: 108e2fbeb;  */

void FUN_108e2fba4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108e2fbec; end: 108e2fc23; -[SCPreviewCaptionEditingManagerLegacy _hideStickerSuggestions] */

void FUN_108e2fbec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e2fc24; end: 108e2fe2f; -[SCPreviewCaptionEditingManagerLegacy _updateCaptionStyleWithEvent:] */

void FUN_108e2fc24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1593c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) goto LAB_108e2fe08;
  lVar2 = *(long *)(param_1 + 0x100);
  func_0x00010bf329a0();
  if (lVar2 != 0) goto LAB_108e2fe08;
  lVar2 = *(long *)(param_1 + 0x158);
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_108e2fe08;
  lVar2 = param_3;
  func_0x00010bfc1d00();
  lVar3 = param_3;
  func_0x00010c159860();
  *(long *)(param_1 + 0xb8) = lVar3;
  uVar4 = *(ulong *)(param_1 + 0x158);
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 1) {
    lVar3 = lVar1;
    FUN_108e242f0(lVar1,*(undefined8 *)(param_1 + 0x158));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2780(*(undefined8 *)(param_1 + 0xa8));
    _objc_release(lVar3);
LAB_108e2fd78:
    uVar9 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c071ae0();
    _objc_release(uVar9);
    if ((lVar2 == 1) && ((int)uVar10 != 0)) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c110840();
      lVar2 = param_1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x158);
      func_0x00010c252440(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25e1c0();
      func_0x00010bed7460(param_1);
    }
    _objc_release(lVar2);
  }
  else {
    if (lVar2 != 2) goto LAB_108e2fd78;
    uVar5 = uVar4;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c113040(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0720c0();
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar8 & 1) == 0) goto LAB_108e2fd78;
  }
  _objc_release(uVar4);
LAB_108e2fe08:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e2fe30; end: 108e2fea3; -[SCPreviewCaptionEditingManagerLegacy _updateEditingCaptionWithStyle:fromGesture:withStylePreference:] */

void FUN_108e2fe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdcd9e0(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7440(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e2fea4; end: 108e2ff2b; -[SCPreviewCaptionEditingManagerLegacy _appliedStyleForCaptionStyle:captionStylePreference:] */

void FUN_108e2fea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x150;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c110760();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c4438;
  func_0x00010bf07fa0(PTR_PTR_1126c4438,param_2,param_3,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e2ff2c; end: 108e30047; -[SCPreviewCaptionEditingManagerLegacy _updateEditingCaptionWithCaptionStyle:appliedStyle:withGesture:] */

void FUN_108e2ff2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be92aa0(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = param_3;
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cbf68;
  func_0x00010c25e260(param_4);
  func_0x00010c06cf40(puVar1);
  uVar3 = param_3;
  FUN_108e242f0(param_3,*(undefined8 *)(param_1 + 0x158));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2800(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c178880(*(undefined8 *)(param_1 + 0x158));
  _objc_release(param_3);
  lVar4 = param_1 + 0x150;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c110680();
  _objc_release(param_4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be946b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resizeEditingCaptionForStickerS_112582b48);
  return;
}



/* Entry: 108e30048; end: 108e30063; -[SCPreviewCaptionEditingManagerLegacy _useFirstNamesForTagging] */

void FUN_108e30048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110efb7f8,0,0);
  return;
}



/* Entry: 108e30064; end: 108e3019f; -[SCPreviewCaptionEditingManagerLegacy _beginEditingWithCaption:customBackgroundView:prepareCaptionBlock:] */

void FUN_108e30064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010beaff20(param_1);
  uVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  func_0x00010be49720(param_1,param_2,param_3);
  func_0x00010bebb320(param_1);
  func_0x00010be77fe0(param_1,param_2,param_4);
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e301a0; end: 108e30393; -[SCPreviewCaptionEditingManagerLegacy _layoutStickerSuggestionsForEditingCaption:] */

void FUN_108e301a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_7);
  uVar2 = *(ulong *)(param_5 + 0x140);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar5 = param_7;
    func_0x00010c26ba60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_7;
    func_0x00010c26ba60(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar5,param_6,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release();
    iVar1 = (int)uVar5;
    dVar7 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar9 = 0.0;
    if (0.0 <= dVar7 + -60.0) {
      dVar9 = dVar7 + -60.0;
    }
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(param_5 + 0x100);
      func_0x00010bf4b2a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      _objc_release(uVar5);
      dVar9 = 0.0;
      if (0.0 <= param_1 + -60.0) {
        dVar9 = param_1 + -60.0;
      }
    }
    dVar7 = *(double *)(param_5 + 0x40);
    dVar8 = *(double *)(param_5 + 0x50);
    _CGRectGetWidth(dVar7,*(undefined8 *)(param_5 + 0x48),dVar8,*(undefined8 *)(param_5 + 0x58));
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    func_0x00010bf20c00();
    _objc_release(param_5);
    uVar6 = uVar2;
    func_0x00010bfb68e0();
    _CGRectEqualToRect();
    if ((uVar6 & 1) == 0) {
      func_0x00010c19f0e0(dVar8 * 0.5 - dVar7 * 0.5,dVar9,dVar7,0x404e000000000000,uVar2);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e30394; end: 108e303ff; -[SCPreviewCaptionEditingManagerLegacy _resizeEditingCaptionForStickerSuggestionsIfNeeded] */

void FUN_108e30394(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x158) != 0) && (uVar1 = *(ulong *)(param_1 + 0x140), uVar1 != 0)) {
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c074c20();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x158),PTR_s_resizeForEditing_11262c298);
      return;
    }
  }
  return;
}



/* Entry: 108e30400; end: 108e304a7; -[SCPreviewCaptionEditingManagerLegacy _prepareBackgroundsViewsForEditingWithCustomBackgroundView:] */

void FUN_108e30400(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    _objc_retain(param_3);
    func_0x00010bf20c00(uVar2);
    func_0x00010c19f0e0(param_3);
    func_0x00010c21e900(param_3);
    func_0x00010c16d4a0(param_3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x160));
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x160));
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateEditingBackgroundViewsVis_1125936b0);
  return;
}



/* Entry: 108e304a8; end: 108e304af; -[SCPreviewCaptionEditingManagerLegacy captionCarouselView] */

void FUN_108e304a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 108e304b0; end: 108e304b7; -[SCPreviewCaptionEditingManagerLegacy captionScrollCount] */

void FUN_108e304b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf30270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_captionScrollCount_1125a9a40);
  return;
}



/* Entry: 108e304b8; end: 108e304bf; -[SCPreviewCaptionEditingManagerLegacy captionStyleLoadingTime] */

void FUN_108e304b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf304d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_captionStyleLoadingTime_1125a9ad8);
  return;
}



/* Entry: 108e304c0; end: 108e304c7; -[SCPreviewCaptionEditingManagerLegacy updateCaptionStylesFromMemoriesWithSet:] */

void FUN_108e304c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_updateCaptionStylesFromMemoriesW_11267eab0);
  return;
}



/* Entry: 108e304c8; end: 108e304d7; -[SCPreviewCaptionEditingManagerLegacy isCaptionToolOpened] */

bool FUN_108e304c8(long param_1)

{
  return *(long *)(param_1 + 0x100) != 0;
}



/* Entry: 108e304d8; end: 108e304ff; -[SCPreviewCaptionEditingManagerLegacy currentEditingCaption] */

void FUN_108e304d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e30500; end: 108e30503; -[SCPreviewCaptionEditingManagerLegacy selectedStyleUpdated:] */

void FUN_108e30500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCaptionStyleWithEvent__112592d18);
  return;
}



/* Entry: 108e30504; end: 108e3050b; -[SCPreviewCaptionEditingManagerLegacy selectedColorUpdated:] */

void FUN_108e30504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x158),PTR_s_colorChanged__1125add08);
  return;
}



/* Entry: 108e3050c; end: 108e3056f; -[SCPreviewCaptionEditingManagerLegacy handleTaggedUser:taggingStartIndex:] */

void FUN_108e3050c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x158);
  func_0x00010c293da0();
  if (lVar1 == 0x7fffffffffffffff) {
    func_0x00010c21f580(*(undefined8 *)(param_1 + 0x158),param_2,param_4);
  }
  func_0x00010be319e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e30570; end: 108e3058b; -[SCPreviewCaptionEditingManagerLegacy handleExternalAction:] */

void FUN_108e30570(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bf7c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didTapCustomojiButton_1125bcbe8);
    return;
  }
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be042d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayColorEyeDropperPicker_11255ea50);
    return;
  }
  return;
}



/* Entry: 108e3058c; end: 108e305ff; -[SCPreviewCaptionEditingManagerLegacy didTapCustomojiButton] */

void FUN_108e3058c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x158);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010be356c0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10bdc0();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e30600; end: 108e30603; -[SCPreviewCaptionEditingManagerLegacy updatedCarouselType:] */

void FUN_108e30600(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showRemixExplanationLabelIfNece_11258c408);
  return;
}



/* Entry: 108e30604; end: 108e3074f; -[SCPreviewCaptionEditingManagerLegacy _displayColorEyeDropperPicker] */

void FUN_108e30604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  func_0x00010be35ac0();
  func_0x00010be356c0(param_5);
  puVar1 = PTR_PTR_1126dc118;
  _objc_alloc();
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf20c00();
  uVar3 = *(undefined8 *)(param_5 + 0x110);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014c40(param_1,param_2,param_3,param_4,puVar1,param_6,uVar3,param_5);
  uVar4 = *(undefined8 *)(param_5 + 0x118);
  *(undefined **)(param_5 + 0x118) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c16d4a0(*(undefined8 *)(param_5 + 0x118),param_6,0x12);
  func_0x00010c1677c0(0,*(undefined8 *)(param_5 + 0x118));
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c066fe0();
  _objc_release(lVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108e30750;
  puStack_60 = &UNK_110842e18;
  lStack_58 = param_5;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_78);
  return;
}



/* Entry: 108e30750; end: 108e3075f;  */

void FUN_108e30750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e30760; end: 108e3079b; -[SCPreviewCaptionEditingManagerLegacy _hideOverlay] */

void FUN_108e30760(long param_1,undefined8 param_2)

{
  func_0x00010c1e1a20(*(undefined8 *)(param_1 + 0x110),param_2,1);
  func_0x00010c1a98e0(*(undefined8 *)(param_1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x160),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e3079c; end: 108e3080b; -[SCPreviewCaptionEditingManagerLegacy _hideEditingCaption] */

void FUN_108e3079c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x158),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010be35da0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010bf8c8e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e3080c; end: 108e30913; -[SCPreviewCaptionEditingManagerLegacy _displayEditingCaption] */

void FUN_108e3080c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108e30914;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108e30924;
  puStack_58 = &UNK_110841f20;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                      &puStack_70);
  func_0x00010c1e1a20(*(undefined8 *)(param_1 + 0x110),param_2,0);
  func_0x00010c1a98e0(*(undefined8 *)(param_1 + 0x110),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x158),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bebb320(param_1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x160),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010bf8c8e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(uVar1);
  return;
}



/* Entry: 108e30914; end: 108e30923;  */

void FUN_108e30914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e30924; end: 108e30957;  */

void FUN_108e30924(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e30958; end: 108e309c3; -[SCPreviewCaptionEditingManagerLegacy _handleTaggedSnapchatter:] */

void FUN_108e30958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_retain(param_3);
  func_0x00010befbce0(uVar1,param_2,param_3);
  func_0x00010c0a27a0(*(undefined8 *)(param_1 + 0xa8));
  param_1 = param_1 + 0x150;
  _objc_loadWeakRetained(param_1);
  func_0x00010c110720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e309c4; end: 108e309f7; -[SCPreviewCaptionEditingManagerLegacy didFinishPickingWithColor:] */

void FUN_108e309c4(long param_1)

{
  func_0x00010bf40d80(*(undefined8 *)(param_1 + 0x158));
  func_0x00010c265780(*(undefined8 *)(param_1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010be044b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayEditingCaption_11255eac8);
  return;
}



/* Entry: 108e309f8; end: 108e30a47; -[SCPreviewCaptionEditingManagerLegacy customojiPickerDidDismissWithDidSelectSticker:] */

void FUN_108e309f8(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x158) != 0) {
      func_0x00010bf6b840(param_1,param_2,*(long *)(param_1 + 0x158),0);
    }
    func_0x00010c2a6f00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c256ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stoppedEditing_112673620);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be044b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayEditingCaption_11255eac8);
  return;
}



/* Entry: 108e30a48; end: 108e30acb; -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidTapSticker:] */

void FUN_108e30a48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x158) != 0)) {
    lVar1 = param_1 + 0x138;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1116a0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be16d00();
    if ((int)lVar1 != 0) {
      param_1 = param_1 + 0x138;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1113c0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e30acc; end: 108e30b17; -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidTapViewAll] */

void FUN_108e30acc(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x158) != 0) && (lVar1 = param_1, func_0x00010be16d00(), (int)lVar1 != 0)
     ) {
    param_1 = param_1 + 0x138;
    _objc_loadWeakRetained(param_1);
    func_0x00010c111860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e30b18; end: 108e30b63; -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidTapCutout] */

void FUN_108e30b18(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x158) != 0) && (lVar1 = param_1, func_0x00010be16d00(), (int)lVar1 != 0)
     ) {
    param_1 = param_1 + 0x138;
    _objc_loadWeakRetained(param_1);
    func_0x00010c111840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e30b64; end: 108e30b93; -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidUpdateAvailableSuggestions] */

void FUN_108e30b64(long param_1)

{
  if (*(long *)(param_1 + 0x158) != 0) {
    func_0x00010be49720();
                    /* WARNING: Could not recover jumptable at 0x00010bebb330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showStickerSuggestionsIfAvailab_11258c670)
    ;
    return;
  }
  return;
}



/* Entry: 108e30b94; end: 108e30c0b; -[SCPreviewCaptionEditingManagerLegacy _finishCaptionEditingForStickerSuggestionAction] */

undefined8 FUN_108e30b94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x158) == 0) {
    uVar3 = 1;
  }
  else {
    lVar1 = param_1 + 0x150;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c110640();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      func_0x00010c255ee0(*(undefined8 *)(param_1 + 0x158),param_2,1);
    }
  }
  return uVar3;
}



/* Entry: 108e30c0c; end: 108e30c23; -[SCPreviewCaptionEditingManagerLegacy delegate] */

void FUN_108e30c0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e30c24; end: 108e30c2f; -[SCPreviewCaptionEditingManagerLegacy setDelegate:] */

void FUN_108e30c24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x150,param_3);
  return;
}



/* Entry: 108e30c30; end: 108e30c37; -[SCPreviewCaptionEditingManagerLegacy editingCaption] */

undefined8 FUN_108e30c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 108e30c38; end: 108e30c3f; -[SCPreviewCaptionEditingManagerLegacy blackBackgroundView] */

undefined8 FUN_108e30c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 108e30c40; end: 108e30d4b; -[SCPreviewCaptionEditingManagerLegacy .cxx_destruct] */

void FUN_108e30c40(long param_1)

{
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_destroyWeak(param_1 + 0x150);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108e30d4c; end: 108e30deb; -[SCPreviewCaptionTextView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e30d4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fea68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c1ac) = 0x3ff0000000000000;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c1b0) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c1b4) = 1;
    func_0x00010c181fc0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08ce80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e30dec; end: 108e30edb; -[SCPreviewCaptionTextView becomeFirstResponder] */

undefined8 * FUN_108e30dec(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_50;
  iVar1 = 2;
  func_0x000107c31924(2,0x12,0,0);
  if ((iVar1 == 0) || (uVar2 = param_1, func_0x00010c263e00(), (int)uVar2 == 0)) {
    puStack_48 = PTR_PTR_1126fea68;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_becomeFirstResponder_1125a3810);
  }
  else {
    uVar2 = param_1;
    func_0x00010c0f5640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2633a0(param_1);
    func_0x00010c1d97a0(param_1);
    func_0x00010c20ffc0(param_1);
    puStack_38 = PTR_PTR_1126fea68;
    puVar3 = &uStack_40;
    uStack_40 = param_1;
    _objc_msgSendSuper2(puVar3,PTR_s_becomeFirstResponder_1125a3810);
    func_0x00010c20ffc0(param_1);
    func_0x00010c1d97a0(param_1);
    _objc_release(uVar2);
  }
  return puVar3;
}



/* Entry: 108e30edc; end: 108e3101b; -[SCPreviewCaptionTextView setTextViewWithAppliedStyle:currentFontSize:isTextEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e30edc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar4 = (long)_DAT_11277c1b8;
  dVar7 = param_1;
  _objc_retain(param_4);
  _objc_storeWeak(param_2 + lVar4,param_4);
  _objc_retain();
  uVar1 = param_4;
  func_0x00010bfb40c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb4000(uVar1);
  dVar7 = param_1 / dVar7;
  lVar6 = (long)_DAT_11277c1ac;
  *(double *)(param_2 + lVar6) = dVar7;
  _objc_release(uVar1);
  lVar2 = param_2 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  lVar5 = (long)_DAT_11277c1bc;
  *(double *)(param_2 + lVar5) = param_1 * (dVar7 + -1.0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  dVar7 = *(double *)(param_2 + lVar5);
  func_0x00010c1bdce0(dVar7,param_2);
  lVar4 = param_2 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar2 = lVar4;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0989c0();
  func_0x00010c1bd7c0(dVar7 * *(double *)(param_2 + lVar6),param_2);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e3101c; end: 108e3113b; -[SCPreviewCaptionTextView canPerformAction:withSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e3101c(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_4);
  if (param_3 == PTR_s_paste__11252ff78) {
LAB_108e31080:
    puVar4 = (undefined1 *)0x1;
  }
  else {
    func_0x00010c159e80(param_1);
    if (param_2 == 0) {
      lVar1 = param_1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if ((lVar2 != 0) &&
         ((puVar4 = (undefined1 *)0x1, param_3 == PTR_s_select__11253d928 ||
          (param_3 == PTR_s_selectAll__112633bd0)))) goto LAB_108e31118;
    }
    else if (param_3 == PTR_s_cut__11253d920 || param_3 == PTR_s_copy__11253b4c8)
    goto LAB_108e31080;
    if (*(char *)(param_1 + _DAT_11277c1b0) == '\x01') {
      puStack_48 = PTR_PTR_1126fea68;
      lStack_50 = param_1;
      _objc_msgSendSuper2(&lStack_50,PTR_s_canPerformAction_withSender__1125311f8,param_3,param_4);
      puVar4 = (undefined1 *)plVar3;
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
  }
LAB_108e31118:
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 108e3113c; end: 108e312db; -[SCPreviewCaptionTextView textRect] */

undefined8
FUN_108e3113c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c099400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar14 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar9 = 0;
  lVar1 = param_5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    uVar8 = uVar13;
    uVar10 = uVar14;
    uVar11 = uVar15;
    uVar12 = uVar16;
    do {
      uVar13 = uVar9;
      uVar14 = param_2;
      uVar15 = param_3;
      uVar16 = param_4;
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_5);
        uVar13 = uVar9;
        uVar14 = param_2;
        uVar15 = param_3;
        uVar16 = param_4;
      }
      uVar2 = *(ulong *)(lVar7 * 8);
      func_0x00010bdc1080();
      uVar9 = uVar8;
      param_2 = uVar10;
      param_3 = uVar11;
      param_4 = uVar12;
      _CGRectIsNull();
      if ((uVar2 & 1) == 0) {
        _CGRectUnion();
        uVar9 = uVar8;
        param_2 = uVar10;
        param_3 = uVar11;
        param_4 = uVar12;
        uVar13 = uVar8;
        uVar14 = uVar10;
        uVar15 = uVar11;
        uVar16 = uVar12;
      }
      lVar7 = lVar7 + 1;
      uVar8 = uVar13;
      uVar10 = uVar14;
      uVar11 = uVar15;
      uVar12 = uVar16;
    } while (lVar1 != lVar7);
    lVar1 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar13;
  }
  ___stack_chk_fail();
  puStack_1d8 = &uStack_1e0;
  uStack_1e0 = 0;
  uVar9 = 0x3032000000;
  uStack_1d0 = 0x3032000000;
  pcStack_1c8 = FUN_108e31480;
  uStack_1c0 = 0x108e31490;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_1b0 = uVar16;
  uStack_1a8 = uVar15;
  uStack_1a0 = uVar14;
  uStack_198 = uVar13;
  _objc_opt_new();
  puStack_1b8 = puVar3;
  func_0x00010c26ba40(param_5);
  lVar1 = param_5;
  func_0x00010c08ce80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c26ba00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd260(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uVar14 = 0xc2000000;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_108e31498;
  puStack_210 = &UNK_110ac69a0;
  puStack_208 = &uStack_1e0;
  ppuVar5 = &puStack_228;
  uStack_200 = uVar9;
  uStack_1f8 = param_2;
  uStack_1f0 = param_3;
  uStack_1e8 = param_4;
  _objc_retainBlock(ppuVar5);
  func_0x00010c08ce80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97d80();
  _objc_release(param_5);
  uVar13 = puStack_1d8[5];
  _objc_retain(uVar13);
  _objc_release(ppuVar5);
  __Block_object_dispose(&uStack_1e0,8);
  _objc_release(puStack_1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  return uVar14;
}



/* Entry: 108e312dc; end: 108e3147f; -[SCPreviewCaptionTextView lineRects] */

void FUN_108e312dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uVar5 = 0x3032000000;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108e31480;
  uStack_70 = 0x108e31490;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_68 = puVar1;
  func_0x00010c26ba40(param_5);
  uVar4 = param_5;
  func_0x00010c08ce80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c26ba00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd260(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108e31498;
  puStack_c0 = &UNK_110ac69a0;
  puStack_b8 = &uStack_90;
  ppuVar3 = &puStack_d8;
  uStack_b0 = uVar5;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  _objc_retainBlock(ppuVar3);
  func_0x00010c08ce80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97d80();
  _objc_release(param_5);
  uVar4 = puStack_88[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e31480; end: 108e31497;  */

void FUN_108e31480(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e31498; end: 108e314f7;  */

void FUN_108e31498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double in_d4;
  double in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(in_d4 + *(double *)(param_1 + 0x30),in_d5 + *(double *)(param_1 + 0x28),in_d6,
                      in_d7,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e314f8; end: 108e3160f; -[SCPreviewCaptionTextView layoutManager:shouldSetLineFragmentRect:lineFragmentUsedRect:baselineOffset:inTextContainer:forGlyphRange:] */

undefined8
FUN_108e314f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             double *param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  double in_d3;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  func_0x00010bf35a00(param_3);
  lVar1 = param_3;
  func_0x00010c26c860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf0e4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bf20bc0(*(undefined8 *)(param_4 + 0x10),0x7fefffffffffffff,lVar2);
    dVar3 = *(double *)(param_4 + 0x18);
    if (dVar3 < in_d3) {
      in_d3 = in_d3 - dVar3;
      uVar4 = *(undefined8 *)(param_5 + 0x10);
      dVar5 = *(double *)(param_5 + 0x18);
      dVar6 = *param_6;
      *(double *)(param_4 + 0x18) = dVar3 + in_d3;
      *(undefined8 *)(param_5 + 0x10) = uVar4;
      *(double *)(param_5 + 0x18) = in_d3 + dVar5;
      *param_6 = in_d3 + dVar6;
      uVar4 = 1;
      goto LAB_108e315ec;
    }
  }
  uVar4 = 0;
LAB_108e315ec:
  _objc_release(lVar2);
  return uVar4;
}



/* Entry: 108e31610; end: 108e3161f; -[SCPreviewCaptionTextView scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e31610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c1ac);
}



/* Entry: 108e31620; end: 108e3162f; -[SCPreviewCaptionTextView setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e31620(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c1ac) = param_1;
  return;
}



/* Entry: 108e31630; end: 108e3163f; -[SCPreviewCaptionTextView showCaptionStyleOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e31630(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c1b0);
}



/* Entry: 108e31640; end: 108e3164f; -[SCPreviewCaptionTextView setShowCaptionStyleOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e31640(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c1b0) = param_3;
  return;
}



/* Entry: 108e31650; end: 108e3165f; -[SCPreviewCaptionTextView lineSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e31650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c1bc);
}



/* Entry: 108e31660; end: 108e3167f; -[SCPreviewCaptionTextView appliedStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e31660(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e31680; end: 108e3168f; -[SCPreviewCaptionTextView suppressesPasteConfigurationDuringFocus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e31680(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c1b4);
}



/* Entry: 108e31690; end: 108e3169f; -[SCPreviewCaptionTextView setSuppressesPasteConfigurationDuringFocus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e31690(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c1b4) = param_3;
  return;
}



/* Entry: 108e316a0; end: 108e316af; -[SCPreviewCaptionTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e316a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c1b8);
  return;
}



/* Entry: 108e316b0; end: 108e31783; -[SCQuickCaptionManagerImpl initWithCaptionState:originalContentBounds:creativeToolsABProvider:] */

undefined8 *
FUN_108e316b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fea70;
  puVar1 = &uStack_50;
  uStack_50 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1acda0(puVar1);
    func_0x00010c1d65a0(param_1,param_2,param_3,param_4,puVar1);
    func_0x00010c1b2140(puVar1);
    func_0x00010c187da0(puVar1);
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108e31784; end: 108e31b3f; -[SCQuickCaptionManagerImpl newViewForCurrentCaptionModeWithSuperviewBounds:superviewContentBounds:] */

undefined *
FUN_108e31784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined *param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [48];
  
  uVar5 = param_1;
  uVar7 = param_2;
  uVar9 = param_3;
  uVar11 = param_4;
  func_0x00010bf3a060();
  puVar1 = param_9;
  func_0x00010c064480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cbf60;
    _objc_alloc_init();
    puVar2 = param_9;
    func_0x00010c26b320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_9;
      func_0x00010c26b320(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010beffa20();
      func_0x00010c166c00(puVar1,param_10,puVar3);
      _objc_release(puVar2);
      puVar2 = param_9;
      func_0x00010c26b320(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar1,param_10,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_9;
      func_0x00010c26b320(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348c0();
      func_0x00010c17a860(puVar1);
      _objc_release(puVar2);
      puVar2 = param_9;
      func_0x00010c26b320(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfe1300();
      func_0x00010c1a7f60(puVar1,param_10,puVar3);
      _objc_release(puVar2);
      puVar2 = param_9;
      func_0x00010c26b320(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf8c660();
      func_0x00010c193b00(puVar1,param_10,puVar3);
      _objc_release(puVar2);
      puVar2 = param_9;
      func_0x00010c26b320(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c086c00();
      func_0x00010c1b6e20(puVar1);
      _objc_release(puVar2);
      puVar2 = param_9;
      func_0x00010c26b320();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c06e960();
      puVar4 = puVar1;
      func_0x00010c06e960();
      _objc_release(puVar2);
      puVar2 = param_9;
      if ((int)puVar3 == (int)puVar4) {
        func_0x00010c26b320(param_9);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf0e540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b720(puVar1,param_10,puVar3);
      }
      else {
        func_0x00010c06e960();
        func_0x00010c26b320(param_9);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf0e540();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c14c7e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b720(puVar1,param_10,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  else {
    puVar1 = param_9;
    func_0x00010c064480(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1acda0(param_9,param_10,0);
  }
  puVar2 = PTR_PTR_1126dc0c0;
  puVar3 = param_9;
  func_0x00010c075fe0(param_9);
  func_0x00010bf607a0(auStack_b0,param_9);
  func_0x00010c0ed460(param_9);
  uVar6 = uVar5;
  uVar8 = uVar7;
  uVar10 = uVar9;
  uVar12 = uVar11;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010bf2ffe0(uVar5,uVar7,uVar9,uVar11,param_1,param_2,param_3,param_4,puVar2,param_10,
                      puVar1,0,0,puVar3,0,auStack_b0,0,param_5,param_6,param_7,param_8,uVar6,uVar8,
                      uVar10,uVar12,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178460(param_9,param_10,puVar2);
  _objc_release(puVar2);
  func_0x00010bf2fba0(param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 108e31b40; end: 108e31bf3; -[SCQuickCaptionManagerImpl cleanUpLastMode] */

void FUN_108e31b40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf2fba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212d40(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf2fba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26aba0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c178470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCaption__11263bb38,0);
    return;
  }
  return;
}



/* Entry: 108e31bf4; end: 108e31c8b; -[SCQuickCaptionManagerImpl state] */

void FUN_108e31bf4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf301c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010bf2fba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      param_1 = lVar1;
      goto LAB_108e31c78;
    }
  }
  func_0x00010c26b320(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_108e31c78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e31c8c; end: 108e31d27; -[SCQuickCaptionManagerImpl isHidden] */

long FUN_108e31c8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c26b320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      return 1;
    }
    func_0x00010c26b320(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfe1300();
  }
  else {
    func_0x00010bf2fba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c074c20();
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108e31d28; end: 108e31dc7; -[SCQuickCaptionManagerImpl text] */

void FUN_108e31d28(undefined **param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = param_1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c26b320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_108e31dac;
    }
    func_0x00010c26b320(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf2fba0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
LAB_108e31dac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e31dc8; end: 108e31e57; -[SCQuickCaptionManagerImpl captionPresent] */

uint FUN_108e31dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  _objc_release(uVar2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 108e31e58; end: 108e31efb; -[SCQuickCaptionManagerImpl setText:] */

void FUN_108e31e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf2fba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_release(param_3);
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
  func_0x00010bf2fba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e31efc; end: 108e31f33; -[SCQuickCaptionManagerImpl setHidden:] */

void FUN_108e31efc(undefined8 param_1)

{
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e31f34; end: 108e31f3b; -[SCQuickCaptionManagerImpl caption] */

undefined8 FUN_108e31f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e31f3c; end: 108e31f6b; -[SCQuickCaptionManagerImpl setCaption:] */

void FUN_108e31f3c(long param_1,undefined8 param_2,undefined8 param_3)

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


