/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b87f774; end: 10b87f80b; -[SIGControlStylesDefaults pullToRefreshThemeGhostWink] */

void FUN_10b87f774(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = lRam00000001138466f0;
  func_0x000107c30a90();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c11ba80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10b87f284();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b87f80c; end: 10b87f883; -[SIGControlStylesDefaults pullToRefreshThemeBackground] */

void FUN_10b87f80c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam00000001138466f0;
  func_0x000107c30a90(uRam00000001138466f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be847e0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b87f884; end: 10b87fa2b; -[SIGControlStylesDefaults _pullToRefreshThemeBackgroundImageFromImageName:] */

void FUN_10b87f884(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_4);
    uVar3 = param_4;
    func_0x00010c08fa60();
    if (uVar3 < 6) {
      _objc_release(param_4);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf99aa0();
      _objc_release(puVar1);
      _objc_release(param_4);
      if ((int)puVar2 != 0) {
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf415c0(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        _objc_retain(puVar1);
        uVar3 = 0;
        _UIGraphicsBeginImageContextWithOptions(0x3ff0000000000000,0x3ff0000000000000,param_1,0);
        _UIGraphicsGetCurrentContext();
        puVar4 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc0fe0();
        _objc_release(puVar1);
        _CGContextSetFillColorWithColor(uVar3,puVar4);
        _CGContextFillRect(0,0,0x3ff0000000000000,0x3ff0000000000000,uVar3);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        _UIGraphicsEndImageContext();
        _objc_release(puVar2);
        _objc_release(puVar1);
        goto LAB_10b87fa04;
      }
    }
    uVar3 = param_4;
    FUN_10b87f284(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b87fa04:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b87fa2c; end: 10b87faa7; -[SIGControlStylesDefaults _cellRightIconImage] */

void FUN_10b87fa2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x87,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87faa8; end: 10b87fb27; -[SIGControlStylesDefaults _dismissIconImage] */

void FUN_10b87faa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4040000000000000,0x4040000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x83,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87fb28; end: 10b87fba3; -[SIGControlStylesDefaults _iconXSignVariantAFillImage] */

void FUN_10b87fb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4030000000000000,0x4030000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87fba4; end: 10b87fc1f; -[SIGControlStylesDefaults _iconXSignVariantBFillImage] */

void FUN_10b87fba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4010000000000000,0x4010000000000000,
                      0x4010000000000000,0x4010000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87fc20; end: 10b87fc9b; -[SIGControlStylesDefaults _iconBookmarkFillImage] */

void FUN_10b87fc20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4008000000000000,0x4008000000000000,
                      0x4008000000000000,0x4008000000000000,puVar2,param_2,0x59,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87fc9c; end: 10b87fcc3; -[SIGControlStylesDefaults _personBookStrokeTemplateImage] */

void FUN_10b87fc9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4030000000000000,0x4030000000000000,0x3ff8000000000000,0,0x3ff8000000000000,0,
             PTR_PTR_1126b0c40,PTR_s_imageTemplateFromIconType_size_e_1125d7d20,0x1c8);
  return;
}



/* Entry: 10b87fcc4; end: 10b87fcdf; -[SIGControlStylesDefaults .cxx_destruct] */

void FUN_10b87fcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b87fce0; end: 10b87fd73; -[SIGKeyboardLayoutGuideProvider init] */

undefined1 * FUN_10b87fce0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b87fd74; end: 10b87fdb7; -[SIGKeyboardLayoutGuideProvider dealloc] */

void FUN_10b87fd74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c2803c0();
  puStack_28 = PTR_PTR_11270b788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b87fdb8; end: 10b87feb3; -[SIGKeyboardLayoutGuideProvider setEnabled:] */

void FUN_10b87fdb8(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if (*(byte *)(param_1 + 0x28) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x28) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c181140(0,*(undefined8 *)(param_1 + 8));
    func_0x00010c12d5c0(puVar1,param_2,param_1,
                        *(undefined8 *)PTR__UIKeyboardWillShowNotification_110345d20,0);
    func_0x00010c12d5c0(puVar1,param_2,param_1,
                        *(undefined8 *)PTR__UIKeyboardWillHideNotification_110345d18,0);
  }
  else {
    func_0x00010c181140(-*(double *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    func_0x00010befa240(puVar1,param_2,param_1,PTR_s__keyboardWillShow__112525b40,
                        *(undefined8 *)PTR__UIKeyboardWillShowNotification_110345d20,0);
    func_0x00010befa240(puVar1,param_2,param_1,PTR_s__keyboardWillHide__112525b38,
                        *(undefined8 *)PTR__UIKeyboardWillHideNotification_110345d18,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b87feb4; end: 10b880157; -[SIGKeyboardLayoutGuideProvider installInView:] */

void FUN_10b87feb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c2803c0(param_1);
  }
  _objc_storeWeak(param_1 + 0x30,param_3);
  lVar14 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar14);
  func_0x00010bef9680(param_3);
  lVar1 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar2;
  _objc_release(uVar3);
  _objc_retain(lVar2);
  _objc_release(lVar1);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = lVar14;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c1408a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar10 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar12;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c195460(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c195460();
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar3 = *(undefined8 *)(lVar14 + 0x20);
  *(undefined8 *)(lVar14 + 0x20) = 0;
  _objc_release(uVar3);
  lVar1 = lVar14 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12cdc0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(lVar14 + 0x30,0);
  return;
}



/* Entry: 10b880158; end: 10b8801bb; -[SIGKeyboardLayoutGuideProvider uninstall] */

void FUN_10b880158(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c195460(param_1,param_2,0);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c12cdc0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,0);
  return;
}



/* Entry: 10b8801bc; end: 10b8803df; -[SIGKeyboardLayoutGuideProvider _keyboardWillShow:] */

void FUN_10b8801bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar4 = param_1;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar2 = lVar1;
  func_0x00010c0e00e0(lVar1,param_6,*(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c2a71e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar4,param_2,param_3,lVar1,param_6,lVar2);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  func_0x00010c181140(param_4,*(undefined8 *)(param_5 + 8));
  lVar1 = param_5 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b8803e0;
  puStack_80 = &UNK_110842e18;
  lStack_78 = param_5;
  func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,lVar3 << 0x10 | 4,
                      &puStack_98,0);
  return;
}



/* Entry: 10b8803e0; end: 10b88040f;  */

void FUN_10b8803e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b880410; end: 10b88056b; -[SIGKeyboardLayoutGuideProvider _keyboardWillHide:] */

void FUN_10b880410(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c0e00e0(lVar1,param_3,
                      *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x00010c181140(0,*(undefined8 *)(param_2 + 8));
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b88056c;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_2;
  func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,lVar3 << 0x10 | 4,
                      &puStack_68,0);
  return;
}



/* Entry: 10b88056c; end: 10b88059b;  */

void FUN_10b88056c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b88059c; end: 10b8805a3; -[SIGKeyboardLayoutGuideProvider isEnabled] */

undefined1 FUN_10b88059c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10b8805a4; end: 10b8805bb; -[SIGKeyboardLayoutGuideProvider view] */

void FUN_10b8805a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8805bc; end: 10b8805c3; -[SIGKeyboardLayoutGuideProvider keyboardAnchor] */

undefined8 FUN_10b8805bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b8805c4; end: 10b880613; -[SIGKeyboardLayoutGuideProvider .cxx_destruct] */

void FUN_10b8805c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b880614; end: 10b880667; +[SIGXModelActionIndicatorOrView actionIndicatorWithIndicatorStyle:] */

void FUN_10b880614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2fe8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b880668; end: 10b8806d3; +[SIGXModelActionIndicatorOrView viewWithView:] */

void FUN_10b880668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2fe8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8806d4; end: 10b8806f7; -[SIGXModelActionIndicatorOrView copyWithZone:] */

undefined8 FUN_10b8806d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8806f8; end: 10b88075b; -[SIGXModelActionIndicatorOrView hash] */

void FUN_10b8806f8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270b790;
  puStack_60 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b88075c; end: 10b88079f; -[SIGXModelActionIndicatorOrView internalInit] */

void FUN_10b88075c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b790;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8807a0; end: 10b88084f; -[SIGXModelActionIndicatorOrView isEqual:] */

long FUN_10b8807a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b880834;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10b880834;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b880834;
    }
  }
  lVar3 = 1;
LAB_10b880834:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b880850; end: 10b8808d3; -[SIGXModelActionIndicatorOrView matchActionIndicator:view:] */

void FUN_10b880850(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b8808b8;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b8808b8;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10b8808b8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8808d4; end: 10b8808df; -[SIGXModelActionIndicatorOrView .cxx_destruct] */

void FUN_10b8808d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b8808e0; end: 10b880943; +[SIGXModelLabelOrView labelWithText:] */

void FUN_10b8808e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1918;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b880944; end: 10b8809af; +[SIGXModelLabelOrView viewWithView:] */

void FUN_10b880944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1918;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8809b0; end: 10b8809d3; -[SIGXModelLabelOrView copyWithZone:] */

undefined8 FUN_10b8809b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8809d4; end: 10b880a4b; -[SIGXModelLabelOrView hash] */

void FUN_10b8809d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_11270b798;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b880a4c; end: 10b880a8f; -[SIGXModelLabelOrView internalInit] */

void FUN_10b880a4c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b798;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b880a90; end: 10b880b47; -[SIGXModelLabelOrView isEqual:] */

long FUN_10b880a90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b880b20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b880b2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b880b2c;
        }
        goto LAB_10b880b20;
      }
    }
    lVar3 = 0;
  }
LAB_10b880b2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b880b48; end: 10b880bcb; -[SIGXModelLabelOrView matchLabel:view:] */

void FUN_10b880b48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b880bb0;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b880bb0;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b880bb0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b880bcc; end: 10b880bfb; -[SIGXModelLabelOrView .cxx_destruct] */

void FUN_10b880bcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b880bfc; end: 10b880d8f; +[SIGXCellViewModel customLayoutStrategyWithPrimaryText:secondaryText:tertiaryText:leadingAccessoryView:trailingAccessoryViewModel:secondaryTrailingAccessoryViewModel:secondaryTitleAccessoryView:selected:] */

void FUN_10b880bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c3000;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x108);
  *(undefined8 *)(puVar2 + 0x108) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x110);
  *(undefined8 *)(puVar2 + 0x110) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x118);
  *(undefined8 *)(puVar2 + 0x118) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x120);
  *(undefined8 *)(puVar2 + 0x120) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x128);
  *(undefined8 *)(puVar2 + 0x128) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x130);
  *(undefined8 *)(puVar2 + 0x130) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x138);
  *(undefined8 *)(puVar2 + 0x138) = param_9;
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x140] = param_10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b880d90; end: 10b880ef7; +[SIGXCellViewModel friendingWithPrimaryText:secondaryText:tertiaryText:leadingAccessoryView:trailingAccessoryViewModel:secondaryTrailingAccessoryViewModel:selected:] */

void FUN_10b880d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126c3000;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe0);
  *(undefined8 *)(puVar2 + 0xe0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf8);
  *(undefined8 *)(puVar2 + 0xf8) = param_8;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x100] = param_9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b880ef8; end: 10b88102b; +[SIGXCellViewModel groupedUserWithPrimaryText:secondaryText:leadingAccessoryView:trailingAccessoryViewModel:secondaryTitleAccessoryView:selected:] */

void FUN_10b880ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c3000;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x70] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b88102c; end: 10b88115f; +[SIGXCellViewModel infoWithPrimaryText:secondaryText:leadingAccessoryView:trailingAccessoryViewModel:secondaryTrailingAccessoryViewModel:selected:] */

void FUN_10b88102c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c3000;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 *)(puVar2 + 0xb8) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[200] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881160; end: 10b881267; +[SIGXCellViewModel settingsWithPrimaryText:secondaryText:trailingAccessoryViewModel:secondaryTrailingAccessoryViewModel:selected:] */

void FUN_10b881160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c3000;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x98] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881268; end: 10b8813c7; +[SIGXCellViewModel userSelectWithPrimaryText:secondaryText:leadingAccessoryView:trailingAccessoryViewModel:secondaryTrailingAccessoryViewModel:secondaryTitleAccessoryView:selected:] */

void FUN_10b881268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126c3000;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x40] = param_9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8813c8; end: 10b8813eb; -[SIGXCellViewModel copyWithZone:] */

undefined8 FUN_10b8813c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8813ec; end: 10b8815ef; -[SIGXCellViewModel hash] */

void FUN_10b8813ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_160 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_158 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_148 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_140 = uVar2;
  func_0x00010bfde980();
  uStack_130 = (ulong)*(byte *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_138 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_128 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_110 = uVar1;
  func_0x00010bfde980();
  uStack_100 = (ulong)*(byte *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uStack_d8 = (ulong)*(byte *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uStack_a8 = (ulong)*(byte *)(param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x100);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x140);
  puVar3 = &uStack_168;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_198 = PTR_PTR_11270b7a0;
  puStack_1a0 = puVar3;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8815f0; end: 10b881633; -[SIGXCellViewModel internalInit] */

void FUN_10b8815f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b7a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b881634; end: 10b881a33; -[SIGXCellViewModel isEqual:] */

long FUN_10b881634(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b881a0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b881a18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))) &&
           (*(char *)(param_1 + 0x70) == *(char *)(param_3 + 0x70))) &&
          ((*(char *)(param_1 + 0x98) == *(char *)(param_3 + 0x98) &&
           (*(char *)(param_1 + 200) == *(char *)(param_3 + 200))))))) &&
        (*(char *)(param_1 + 0x100) == *(char *)(param_3 + 0x100))) &&
       (*(char *)(param_1 + 0x140) == *(char *)(param_3 + 0x140))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x80);
                              if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x88);
                                if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x90);
                                  if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xa0);
                                    if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0xa8);
                                      if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xb0);
                                        if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xb8);
                                          if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xc0);
                                            if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xd0);
                                              if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xd8);
                                                if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xe0);
                                                  if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0xe8);
                                                    if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0xf0);
                                                      if ((lVar3 == *(long *)(param_3 + 0xf0)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0xf8);
                                                        if ((lVar3 == *(long *)(param_3 + 0xf8)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x108);
                                                          if ((lVar3 == *(long *)(param_3 + 0x108))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x110);
                                                            if ((lVar3 == *(long *)(param_3 + 0x110)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0x118);
                                                              if ((lVar3 == *(long *)(param_3 +
                                                                                     0x118)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x120);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x120)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 0x128)
                                                                  ;
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         0x128)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x130);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x130)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x138);
                                                    if (lVar3 != *(long *)(param_3 + 0x138)) {
                                                      func_0x00010c071ae0();
                                                      goto LAB_10b881a18;
                                                    }
                                                    goto LAB_10b881a0c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b881a18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b881a34; end: 10b881beb; -[SIGXCellViewModel matchUserSelect:groupedUser:settings:info:friending:customLayoutStrategy:] */

void FUN_10b881a34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 < 3) {
    if (lVar8 == 0) {
      if (param_3 == 0) goto LAB_10b881ba4;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = *(undefined1 *)(param_1 + 0x40);
      pcVar9 = *(code **)(param_3 + 0x10);
      lVar8 = param_3;
LAB_10b881ba0:
      (*pcVar9)(lVar8,uVar2,uVar4,uVar5,uVar6,uVar3,uVar7,uVar1);
      goto LAB_10b881ba4;
    }
    if (lVar8 != 1) {
      if ((lVar8 == 2) && (param_5 != 0)) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                   *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                   *(undefined1 *)(param_1 + 0x98));
      }
      goto LAB_10b881ba4;
    }
    if (param_4 == 0) goto LAB_10b881ba4;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    uVar1 = *(undefined1 *)(param_1 + 0x70);
    pcVar9 = *(code **)(param_4 + 0x10);
    lVar8 = param_4;
  }
  else {
    if (lVar8 != 3) {
      if (lVar8 != 4) {
        if ((lVar8 == 5) && (param_8 != 0)) {
          (**(code **)(param_8 + 0x10))
                    (param_8,*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                     *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                     *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                     *(undefined8 *)(param_1 + 0x138),*(undefined1 *)(param_1 + 0x140));
        }
        goto LAB_10b881ba4;
      }
      if (param_7 == 0) goto LAB_10b881ba4;
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      uVar6 = *(undefined8 *)(param_1 + 0xe8);
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      uVar7 = *(undefined8 *)(param_1 + 0xf8);
      uVar1 = *(undefined1 *)(param_1 + 0x100);
      pcVar9 = *(code **)(param_7 + 0x10);
      lVar8 = param_7;
      goto LAB_10b881ba0;
    }
    if (param_6 == 0) goto LAB_10b881ba4;
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *(undefined1 *)(param_1 + 200);
    pcVar9 = *(code **)(param_6 + 0x10);
    lVar8 = param_6;
  }
  (*pcVar9)(lVar8,uVar2,uVar3,uVar5,uVar4,uVar6,uVar1);
LAB_10b881ba4:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b881bec; end: 10b881d8f; -[SIGXCellViewModel .cxx_destruct] */

void FUN_10b881bec(long param_1)

{
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b881d90; end: 10b881dfb; +[SIGXCellSlotViewModel leadingAccessoryViewWithView:] */

void FUN_10b881d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881dfc; end: 10b881e5f; +[SIGXCellSlotViewModel primaryLabelWithText:] */

void FUN_10b881dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881e60; end: 10b881ecb; +[SIGXCellSlotViewModel secondaryLabelWithText:] */

void FUN_10b881e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881ecc; end: 10b881f37; +[SIGXCellSlotViewModel secondaryTitleAccessoryViewWithView:] */

void FUN_10b881ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881f38; end: 10b881fa3; +[SIGXCellSlotViewModel secondaryTrailingAccessoryViewWithLabelTextOrView:] */

void FUN_10b881f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b881fa4; end: 10b88200f; +[SIGXCellSlotViewModel tertiaryLabelWithText:] */

void FUN_10b881fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b882010; end: 10b88207b; +[SIGXCellSlotViewModel trailingAccessoryViewWithActionIndicatorOrView:] */

void FUN_10b882010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b88207c; end: 10b88209f; -[SIGXCellSlotViewModel copyWithZone:] */

undefined8 FUN_10b88207c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8820a0; end: 10b882153; -[SIGXCellSlotViewModel hash] */

void FUN_10b8820a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_11270b7a8;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b882154; end: 10b882197; -[SIGXCellSlotViewModel internalInit] */

void FUN_10b882154(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b7a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b882198; end: 10b8822c7; -[SIGXCellSlotViewModel isEqual:] */

long FUN_10b882198(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8822a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8822ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10b8822ac;
                  }
                  goto LAB_10b8822a0;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8822ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8822c8; end: 10b882443; -[SIGXCellSlotViewModel matchPrimaryLabel:secondaryLabel:tertiaryLabel:leadingAccessoryView:trailingAccessoryView:secondaryTrailingAccessoryView:secondaryTitleAccessoryView:] */

void FUN_10b8822c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10b8823f8;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_10b8823f8;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 2) || (param_5 == 0)) goto LAB_10b8823f8;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_10b8823f8;
      lVar2 = 0x28;
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_10b8823f8;
      lVar2 = 0x30;
      lVar1 = param_7;
    }
  }
  else if (lVar1 == 5) {
    if (param_8 == 0) goto LAB_10b8823f8;
    lVar2 = 0x38;
    lVar1 = param_8;
  }
  else {
    if ((lVar1 != 6) || (param_9 == 0)) goto LAB_10b8823f8;
    lVar2 = 0x40;
    lVar1 = param_9;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b8823f8:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b882444; end: 10b8824af; -[SIGXCellSlotViewModel .cxx_destruct] */

void FUN_10b882444(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8824b0; end: 10b882513; +[SIGFooterBackground colorWithColor:] */

void FUN_10b8824b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6e78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b882514; end: 10b88257f; +[SIGFooterBackground gradientWithGradient:] */

void FUN_10b882514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6e78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b882580; end: 10b8825eb; +[SIGFooterBackground imageWithImage:] */

void FUN_10b882580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6e78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8825ec; end: 10b88260f; -[SIGFooterBackground copyWithZone:] */

undefined8 FUN_10b8825ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b882610; end: 10b882693; -[SIGFooterBackground hash] */

void FUN_10b882610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270b7b0;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b882694; end: 10b8826d7; -[SIGFooterBackground internalInit] */

void FUN_10b882694(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270b7b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8826d8; end: 10b8827a7; -[SIGFooterBackground isEqual:] */

long FUN_10b8826d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b882780:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b88278c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b88278c;
          }
          goto LAB_10b882780;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b88278c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8827a8; end: 10b882853; -[SIGFooterBackground matchColor:gradient:image:] */

void FUN_10b8827a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b882830;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10b882830;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10b882830;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b882830:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b882854; end: 10b88288f; -[SIGFooterBackground .cxx_destruct] */

void FUN_10b882854(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b882890; end: 10b88298f; -[SIGFooterGradient initWithType:colors:locations:startPoint:endPoint:] */

undefined1 *
FUN_10b882890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_11270b7b8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b882990; end: 10b8829b3; -[SIGFooterGradient copyWithZone:] */

undefined8 FUN_10b882990(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8829b4; end: 10b882ab7; -[SIGFooterGradient hash] */

undefined8 * FUN_10b8829b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_50 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10b882b90:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b882b94;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      bVar2 = false;
      if ((*(double *)((long)puVar5 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar2 = false, !NAN(*(double *)((long)puVar5 + 0x28)) && !NAN(*(double *)(param_3 + 0x28))
         )) {
        bVar2 = *(double *)((long)puVar5 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (bVar2) {
        puVar9 = (undefined1 *)0x0;
        if ((*(double *)((long)puVar5 + 0x30) != *(double *)(param_3 + 0x30)) ||
           (*(double *)((long)puVar5 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_10b882b94;
        lVar7 = *(long *)((long)puVar5 + 8);
        if (((lVar7 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x18);
          if (puVar9 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b882b94;
          }
          goto LAB_10b882b90;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b882b94:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10b882ab8; end: 10b882baf; -[SIGFooterGradient isEqual:] */

long FUN_10b882ab8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b882b90:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b882b94;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x28)) && !NAN(*(double *)(param_3 + 0x28)))) {
        bVar1 = *(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30)) ||
           (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_10b882b94;
        lVar4 = *(long *)(param_1 + 8);
        if (((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b882b94;
          }
          goto LAB_10b882b90;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b882b94:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b882bb0; end: 10b882bb7; -[SIGFooterGradient type] */

undefined8 FUN_10b882bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b882bb8; end: 10b882bbf; -[SIGFooterGradient colors] */

undefined8 FUN_10b882bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b882bc0; end: 10b882bc7; -[SIGFooterGradient locations] */

undefined8 FUN_10b882bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b882bc8; end: 10b882bcf; -[SIGFooterGradient startPoint] */

undefined1  [16] FUN_10b882bc8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10b882bd0; end: 10b882bd7; -[SIGFooterGradient endPoint] */

undefined1  [16] FUN_10b882bd0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 10b882bd8; end: 10b882c8f; -[SIGFooterGradient .cxx_destruct] */

void FUN_10b882bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b882c90; end: 10b882c9b;  */

bool FUN_10b882c90(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b882c9c; end: 10b882d17;  */

undefined * FUN_10b882c9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbcf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b118,
                        &UNK_10e5f34a0,&UNK_10e5f34fc,7,FUN_10b882d18,0);
    do {
      if (puRam00000001137fbcf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbcf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbcf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbcf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbcf0;
}



/* Entry: 10b882d18; end: 10b882d23;  */

bool FUN_10b882d18(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b882d24; end: 10b882d9f;  */

undefined * FUN_10b882d24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbcf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b138,
                        &UNK_10e5f3518,&UNK_10e5f3548,3,FUN_10b882da0,0);
    do {
      if (puRam00000001137fbcf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbcf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbcf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbcf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbcf8;
}



/* Entry: 10b882da0; end: 10b882dab;  */

bool FUN_10b882da0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b882dac; end: 10b882e3b;  */

undefined * FUN_10b882dac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbd00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b158,
                        &UNK_10e5f3554,&UNK_10e5f35c8,7,FUN_10b882e3c,0,&UNK_10e5f35e4);
    do {
      if (puRam00000001137fbd00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbd00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbd00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbd00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbd00;
}



/* Entry: 10b882e3c; end: 10b882e47;  */

bool FUN_10b882e3c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b882e48; end: 10b882eaf; +[SCAppInsightsCameraInfo descriptor] */

void FUN_10b882e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce99a0,
                        &PTR____CFConstantStringClassReference_110f8b178,&PTR_DAT_1133f9448,
                        &PTR_DAT_1133f9460,0xd,0x50,0x1c);
    puRam00000001137fbd08 = puVar1;
  }
  return;
}



/* Entry: 10b882eb0; end: 10b882f93; +[ComposerInfo descriptor] */

void FUN_10b882eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9a40,
                        &PTR____CFConstantStringClassReference_110f8b198,&PTR_DAT_1133f9600,
                        &PTR_DAT_1133f9618,1,0x10,0x1c);
    puRam00000001137fbd10 = puVar1;
  }
  return;
}



/* Entry: 10b882f94; end: 10b882f9f;  */

bool FUN_10b882f94(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b882fa0; end: 10b88301b;  */

undefined * FUN_10b882fa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbd20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b1d8,
                        &UNK_10e5f3654,&UNK_10e5f369c,3,FUN_10b88301c,0);
    do {
      if (puRam00000001137fbd20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbd20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbd20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbd20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbd20;
}



/* Entry: 10b88301c; end: 10b883027;  */

bool FUN_10b88301c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b883028; end: 10b8830a3;  */

undefined * FUN_10b883028(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbd28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f8b1f8,
                        &UNK_10e5f36a8,&UNK_10e5f3768,10,FUN_10b8830a4,0);
    do {
      if (puRam00000001137fbd28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fbd28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbd28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fbd28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fbd28;
}



/* Entry: 10b8830a4; end: 10b8830af;  */

bool FUN_10b8830a4(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b8830b0; end: 10b883117; +[CallSessionInfo descriptor] */

void FUN_10b8830b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9ae0,
                        &PTR____CFConstantStringClassReference_110f8b218,&PTR_DAT_1133f9640,
                        &PTR_DAT_1133f9698,10,0x40,0x1c);
    puRam00000001137fbd30 = puVar1;
  }
  return;
}



/* Entry: 10b883118; end: 10b88317f; +[CallSessionMetadata descriptor] */

void FUN_10b883118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9b30,
                        &PTR____CFConstantStringClassReference_110f8b238,&PTR_DAT_1133f9640,
                        &PTR_DAT_1133f9658,1,0x10,0x1c);
    puRam00000001137fbd38 = puVar1;
  }
  return;
}



/* Entry: 10b883180; end: 10b88320b; +[CallingInfo descriptor] */

undefined * FUN_10b883180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbd40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce9b80,
                        &PTR____CFConstantStringClassReference_110f8b258,&PTR_DAT_1133f9640,
                        &PTR_DAT_1133f9678,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137fbd40 = puVar1;
  }
  return puRam00000001137fbd40;
}


