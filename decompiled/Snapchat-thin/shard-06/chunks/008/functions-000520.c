/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104df61bc; end: 104df6b8f; -[SCCommerceHeroCarouselCell _setupViews] */

/* WARNING: Possible PIC construction at 0x000104df6b44: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df61bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c16e440();
  _objc_release(lVar22);
  _objc_release();
  lVar22 = (long)_DAT_1127136a0;
  if (*(long *)(param_1 + lVar22) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      return;
    }
    ___stack_chk_fail();
    if (*(long *)(puVar1 + _DAT_1127136a0) == 0) {
      return;
    }
    lVar22 = (long)_DAT_1127136a8;
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar22));
    if ((int)puVar19 != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(puVar1 + lVar22));
    }
    lVar22 = (long)_DAT_1127136ac;
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar22));
    uVar14 = *(undefined8 *)(puVar1 + lVar22);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar27 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    dVar29 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar30 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    uVar14 = uVar27;
    uVar15 = uVar28;
    dVar25 = dVar29;
    dVar26 = dVar30;
    func_0x00010c013de0(uVar27,uVar28,dVar29,dVar30);
    lVar23 = (long)_DAT_1127136a4;
    uVar21 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar1;
    _objc_release(uVar21);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar23));
    _objc_release(puVar1);
    func_0x00010bf525a0(*(undefined8 *)(param_1 + lVar22));
    uVar21 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c08c0e0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar14);
    _objc_release(uVar21);
    lVar20 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar20);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0ba0(*(undefined8 *)(param_1 + lVar22));
    uVar14 = uVar2;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0ba0(*(undefined8 *)(param_1 + lVar22));
    uVar21 = uVar3;
    func_0x00010bf493c0(-dVar26);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0ba0(*(undefined8 *)(param_1 + lVar22));
    uVar9 = uVar6;
    func_0x00010bf493c0(-dVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0ba0(*(undefined8 *)(param_1 + lVar22));
    uVar13 = uVar10;
    func_0x00010bf493c0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar19);
    _objc_release(uVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar21);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar14);
    _objc_release(lVar24);
    _objc_release(lVar20);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar14 = uVar27;
    func_0x00010c013de0(uVar27,uVar28,dVar29,dVar30);
    lVar20 = (long)_DAT_1127136a8;
    uVar21 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar1;
    _objc_release(uVar21);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20));
    _objc_release(puVar1);
    func_0x00010bf525a0(*(undefined8 *)(param_1 + lVar22));
    uVar21 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08c0e0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar14);
    _objc_release(uVar21);
    uVar14 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08c0e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar14);
    func_0x00010bf4cbe0();
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar20));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar23));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar19);
    _objc_release(uVar21);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar9);
    _objc_release(uVar16);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar13);
    _objc_release(uVar2);
    _objc_release(uVar15);
    puVar1 = PTR_PTR_1126b0880;
    _objc_alloc();
    func_0x00010c013de0(uVar27,uVar28,dVar29,dVar30);
    lVar24 = (long)_DAT_1127136ac;
    uVar14 = *(undefined8 *)(param_1 + lVar24);
    *(undefined **)(param_1 + lVar24) = puVar1;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar23));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar19);
    _objc_release(uVar14);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar21);
    _objc_release(uVar16);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar13);
    _objc_release(uVar2);
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar27,uVar28,dVar29,dVar30);
    func_0x00010c182b00(*(undefined8 *)(param_1 + lVar24));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar14);
    _objc_release(puVar1);
    func_0x00010bf525a0(*(undefined8 *)(param_1 + lVar22));
    uVar21 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar21;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar27);
    _objc_release(uVar14);
    _objc_release(uVar21);
    uVar14 = *(undefined8 *)(param_1 + lVar24);
    puVar19 = (undefined *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar14,PTR_s_setShimmering__11265d770,puVar19);
  return;
}



/* Entry: 104df6b90; end: 104df6c07; -[SCCommerceHeroCarouselCell _setShimmerOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df6b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_1127136a0) != 0) {
    lVar1 = (long)_DAT_1127136a8;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
    if ((int)param_3 != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
    }
    lVar1 = (long)_DAT_1127136ac;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_setShimmering__11265d770,param_3);
    return;
  }
  return;
}



/* Entry: 104df6c08; end: 104df6c67; -[SCCommerceHeroCarouselCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df6c08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127136a0,0);
  _objc_storeStrong(param_1 + _DAT_1127136ac,0);
  _objc_storeStrong(param_1 + _DAT_1127136a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127136a4,0);
  return;
}



/* Entry: 104df6c68; end: 104df6cdb; -[SCCommerceHeroCarouselAssetHelperImpl initWithOnDemandResourceDownloader:] */

undefined1 * FUN_104df6c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df6cdc; end: 104df6f03; -[SCCommerceHeroCarouselAssetHelperImpl fetchImageForUrl:completion:] */

void FUN_104df6cdc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be529e0(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    func_0x00010bde3740(param_1,param_2);
  }
  else {
    _objc_initWeak(auStack_68,param_2);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar2 = PTR_PTR_1126aebd8;
    func_0x00010c14e320(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar1);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_70 = param_1;
    func_0x00010bf88c20(uVar4);
    _objc_release(puVar1);
    _objc_release(param_2);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104df6f04; end: 104df6f5b;  */

void FUN_104df6f04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde3740(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104df6f5c; end: 104df712f; -[SCCommerceHeroCarouselAssetHelperImpl _completeWithImage:url:completion:startTimeMilliseconds:] */

void FUN_104df6f5c(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar4 - param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be529e0(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a40(param_2);
  }
  else {
    puVar2 = param_4;
    _UIImageJPEGRepresentation(0x3ff0000000000000,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be529e0(param_2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  (**(code **)(param_6 + 0x10))(param_6,param_4);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104df7130; end: 104df7133; -[SCCommerceHeroCarouselAssetHelperImpl _logEntry:] */

void FUN_104df7130(void)

{
  return;
}



/* Entry: 104df7134; end: 104df7137; -[SCCommerceHeroCarouselAssetHelperImpl _logError:] */

void FUN_104df7134(void)

{
  return;
}



/* Entry: 104df7138; end: 104df7143; -[SCCommerceHeroCarouselAssetHelperImpl .cxx_destruct] */

void FUN_104df7138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df7144; end: 104df714b; -[SCCommerceRTLCollectionViewFlowLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_104df7144(void)

{
  return 1;
}



/* Entry: 104df714c; end: 104df734f; -[SCCommerceHeroCarouselCollectionView initWithCarouselConfig:carouselDelegate:assetHelper:imageScrubbing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104df714c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e4468;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127136b4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127136b8),param_4);
    lVar6 = (long)_DAT_1127136bc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c28fbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c064600(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if ((int)uVar5 == 0) {
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127136c0);
      *(undefined **)((long)puVar1 + (long)_DAT_1127136c0) = puVar4;
    }
    else {
      uVar2 = param_3;
      func_0x00010c28fbc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c064600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0(uVar2);
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127136c0);
      *(undefined **)((long)puVar1 + (long)_DAT_1127136c0) = puVar4;
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127136c4) = param_6;
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df7350; end: 104df73d3; -[SCCommerceHeroCarouselCollectionView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7350(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4468;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar2 = *(long *)(param_1 + _DAT_1127136c8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127136b4);
    func_0x00010c28fbc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c1cfc60(lVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 104df73d4; end: 104df7423; -[SCCommerceHeroCarouselCollectionView didMoveToSuperview] */

void FUN_104df73d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x00010be9c000(param_1);
  return;
}



/* Entry: 104df7424; end: 104df7aa7; -[SCCommerceHeroCarouselCollectionView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7424(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b09f8;
  _objc_opt_new();
  func_0x00010c1f7ac0();
  puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar23 = (long)_DAT_1127136cc;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar4;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar4);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar23));
  lVar22 = (long)_DAT_1127136b4;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar22);
  func_0x00010bfb4f80();
  puVar1 = (undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8;
  if (iVar2 == 0) {
    puVar1 = (undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
  }
  func_0x00010c18a140(*puVar1,*(undefined8 *)(param_1 + lVar23));
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  _objc_opt_class(PTR_PTR_1126b0a00);
  func_0x00010c126000(uVar20);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar23));
  lVar5 = *(long *)(param_1 + lVar22);
  func_0x00010c28fbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar6 == 1) {
    func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar23));
  }
  func_0x00010befbb60(param_1);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar14);
  _objc_release(uVar17);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar21);
  _objc_release(lVar5);
  _objc_release(uVar8);
  _objc_release(uVar20);
  _objc_release(lVar6);
  _objc_release(uVar7);
  if (*(char *)(param_1 + _DAT_1127136c4) == '\x01') {
    uVar15 = *(ulong *)(param_1 + lVar22);
    func_0x00010c28fbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf529e0();
    _objc_release(uVar15);
    if (1 < uVar16) {
      func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar23));
      puVar4 = PTR_PTR_1126b0890;
      _objc_alloc();
      uVar20 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c28fbc0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c030560();
      lVar22 = (long)_DAT_1127136c8;
      uVar21 = *(undefined8 *)(param_1 + lVar22);
      *(undefined **)(param_1 + lVar22) = puVar4;
      _objc_release(uVar21);
      _objc_release(uVar20);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22));
      func_0x00010c183840(*(undefined8 *)(param_1 + lVar22));
      func_0x00010befbb60(param_1);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar17 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar17;
      func_0x00010bf493c0(0xc026000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c08de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar8;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar22);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c2793a0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar12;
      func_0x00010bf493c0(0xc020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar14);
      _objc_release(uVar11);
      _objc_release(uVar18);
      _objc_release(uVar12);
      _objc_release(uVar21);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar20);
      _objc_release(uVar7);
      _objc_release(uVar17);
      func_0x00010befbd60(*(undefined8 *)(param_1 + lVar22));
      func_0x00010befbd60(*(undefined8 *)(param_1 + lVar22));
      func_0x00010befbd60(*(undefined8 *)(param_1 + lVar22));
    }
  }
  func_0x00010befa220(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  uVar20 = *(undefined8 *)(puVar3 + _DAT_1127136cc);
  func_0x00010bf408e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010be9c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar3,PTR_s__scrollToCurrentIndexAnimating_s_1125849a8,0,1);
  return;
}



/* Entry: 104df7aa8; end: 104df7af7; -[SCCommerceHeroCarouselCollectionView _shouldResize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7aa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127136cc);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scrollToCurrentIndexAnimating_s_1125849a8,0,1);
  return;
}



/* Entry: 104df7af8; end: 104df7b8b; -[SCCommerceHeroCarouselCollectionView _currentCellSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104df7af8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x00010bfb68e0();
  lVar1 = (long)_DAT_1127136b4;
  func_0x00010bf0aca0(*(undefined8 *)(param_5 + lVar1));
  dVar3 = param_4 / param_1;
  func_0x00010bfe4240(*(undefined8 *)(param_5 + lVar1));
  dVar3 = dVar3 - param_1;
  func_0x00010bfb68e0(param_5);
  dVar2 = param_3;
  func_0x00010bfe4240(*(undefined8 *)(param_5 + lVar1));
  param_3 = param_3 - param_1;
  if (param_3 < dVar3) {
    func_0x00010bfb68e0(param_5);
    func_0x00010bfe4240(*(undefined8 *)(param_5 + lVar1));
    dVar3 = dVar2 - param_3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 104df7b8c; end: 104df7c57; -[SCCommerceHeroCarouselCollectionView _scrollToNearestVisibleCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7b8c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_1127136cc;
  lVar2 = *(long *)(param_5 + lVar3);
  func_0x00010bf345e0(lVar2);
  dVar4 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfed040(param_1 + dVar4,param_4 * 0.5 + param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_5 + _DAT_1127136c0);
    func_0x00010c0840e0();
    lVar3 = lVar2;
    func_0x00010c0840e0();
    if (lVar1 != lVar3) {
      func_0x00010bea3240(param_5,param_6,lVar2);
    }
  }
  func_0x00010be9c000(param_5,param_6,1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104df7c58; end: 104df7c8f; -[SCCommerceHeroCarouselCollectionView _scrollToCurrentIndexAnimating:selecting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7c58(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c158b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127136cc),
               PTR_s_selectItemAtIndexPath_animated_s_112633cf8,
               *(undefined8 *)(param_1 + _DAT_1127136c0),param_3,0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1525b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127136cc),
             PTR_s_scrollToItemAtIndexPath_atScroll_112632388,
             *(undefined8 *)(param_1 + _DAT_1127136c0),0x10);
  return;
}



/* Entry: 104df7c90; end: 104df7dcf; -[SCCommerceHeroCarouselCollectionView _fetchImageForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7c90(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  lVar6 = (long)_DAT_1127136b4;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c28fbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127136bc);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c28fbc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    func_0x00010bfa78a0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 104df7dd0; end: 104df7e97;  */

void FUN_104df7dd0(long param_1,long param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104df7e98;
    puStack_50 = &UNK_110842a68;
    _objc_copyWeak(auStack_40,param_1 + 0x20);
    _objc_retain(param_2);
    uStack_38 = *(undefined8 *)(param_1 + 0x28);
    lStack_48 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104df7e98; end: 104df7ecf;  */

void FUN_104df7e98(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4d8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df7ed0; end: 104df7fb7; -[SCCommerceHeroCarouselCollectionView _setCurrentIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7ed0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0840e0();
  lVar6 = (long)_DAT_1127136c0;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c0840e0();
  if (lVar1 != lVar2) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = param_3;
    _objc_release(uVar3);
    lVar1 = param_1 + _DAT_1127136b8;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127136b4);
    func_0x00010c28fbc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0840e0(uVar5);
    uVar3 = uVar4;
    func_0x00010c0dfd20(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32520(lVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104df7fb8; end: 104df80b7; -[SCCommerceHeroCarouselCollectionView _loadImage:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df7fb8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + _DAT_1127136cc);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0a00;
  _objc_opt_class(PTR_PTR_1126b0a00);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if ((uVar1 != 0) && (func_0x00010c103de0(uVar4), param_3 != 0)) {
    param_1 = param_1 + _DAT_1127136b8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf325a0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104df80b8; end: 104df8117; -[SCCommerceHeroCarouselCollectionView _scrubberValueChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df80b8(double param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127136cc);
  func_0x00010c296d80(*(undefined8 *)(param_2 + _DAT_1127136c8));
  fVar2 = SUB84(param_1,0);
  func_0x00010be5dc80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_1 * (double)fVar2) / 100.0,0,uVar1,PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 104df8118; end: 104df811b; -[SCCommerceHeroCarouselCollectionView _scrubberDoneChanging] */

void FUN_104df8118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollToNearestVisibleCell_1125849f8);
  return;
}



/* Entry: 104df811c; end: 104df8183; -[SCCommerceHeroCarouselCollectionView _maxOffsetX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104df811c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_1127136cc;
  func_0x00010bf4d5e0(*(undefined8 *)(param_4 + lVar1));
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfe4240(*(undefined8 *)(param_4 + _DAT_1127136b4));
  dVar2 = (param_1 - param_3) + dVar2;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return dVar2;
}



/* Entry: 104df8184; end: 104df8233; -[SCCommerceHeroCarouselCollectionView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df8184(double param_1,long param_2)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = (long)_DAT_1127136c8;
  if (*(long *)(param_2 + lVar1) == 0) {
    return;
  }
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + _DAT_1127136cc));
  dVar4 = param_1 * 100.0;
  func_0x00010be5dc80(param_2);
  dVar4 = dVar4 / param_1;
  func_0x00010c0ce740(*(undefined8 *)(param_2 + lVar1));
  dVar3 = (double)SUB84(param_1,0);
  if (dVar3 <= dVar4) {
    func_0x00010c0c36c0(*(undefined8 *)(param_2 + lVar1));
    dVar3 = (double)SUB84(dVar3,0);
    if (dVar4 <= dVar3) goto LAB_104df821c;
    func_0x00010c0c36c0(*(undefined8 *)(param_2 + lVar1));
    fVar2 = SUB84(dVar3,0);
  }
  else {
    func_0x00010c0ce740();
    fVar2 = SUB84(dVar3,0);
  }
  dVar4 = (double)fVar2;
LAB_104df821c:
                    /* WARNING: Could not recover jumptable at 0x00010c220170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)dVar4,*(undefined8 *)(param_2 + lVar1),PTR_s_setValue__112665a80);
  return;
}



/* Entry: 104df8234; end: 104df8273; -[SCCommerceHeroCarouselCollectionView scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df8234(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127136b4);
  func_0x00010bfb4f80();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollToNearestVisibleCell_1125849f8);
  return;
}



/* Entry: 104df8274; end: 104df8433; -[SCCommerceHeroCarouselCollectionView scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df8274(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,double *param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_1127136b4;
  uVar1 = *(ulong *)(param_4 + lVar6);
  dVar8 = param_1;
  func_0x00010bfb4f80();
  if ((uVar1 & 1) == 0) {
    if (param_1 != 0.0) {
      return;
    }
  }
  else {
    lVar5 = (long)_DAT_1127136c0;
    lVar2 = *(long *)(param_4 + lVar5);
    func_0x00010c0840e0();
    func_0x00010bfb68e0(param_4);
    dVar7 = param_3;
    func_0x00010bfe4240(*(undefined8 *)(param_4 + lVar6));
    param_3 = param_3 - dVar8;
    dVar8 = param_3 * (double)lVar2;
    if (0.0 < param_1) {
      uVar1 = *(ulong *)(param_4 + lVar5);
      func_0x00010c0840e0();
      lVar3 = *(long *)(param_4 + lVar6);
      func_0x00010c28fbc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (uVar1 < lVar2 - 1U) {
        func_0x00010bfb68e0(param_4);
        func_0x00010bfe4240(*(undefined8 *)(param_4 + lVar6));
        *param_7 = (dVar8 + dVar7) - param_3;
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010c0840e0(*(undefined8 *)(param_4 + lVar5));
        goto LAB_104df83c8;
      }
    }
    if (param_1 < 0.0) {
      lVar2 = *(long *)(param_4 + lVar5);
      func_0x00010c0840e0();
      if (0 < lVar2) {
        func_0x00010bfb68e0(param_4);
        func_0x00010bfe4240(*(undefined8 *)(param_4 + lVar6));
        *param_7 = param_3 + (dVar8 - dVar7);
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010c0840e0(*(undefined8 *)(param_4 + lVar5));
LAB_104df83c8:
        func_0x00010bfed020(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea3240(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s__scrollToNearestVisibleCell_1125849f8);
  return;
}



/* Entry: 104df8434; end: 104df847f; -[SCCommerceHeroCarouselCollectionView collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_104df8434(undefined8 param_1)

{
  func_0x00010bfb68e0();
  func_0x00010bdf6860(param_1);
  return 0;
}



/* Entry: 104df8480; end: 104df84c7; -[SCCommerceHeroCarouselCollectionView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df8480(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127136b4);
  func_0x00010c28fbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104df84c8; end: 104df84cf; -[SCCommerceHeroCarouselCollectionView collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_104df84c8(void)

{
  return 0;
}



/* Entry: 104df84d0; end: 104df84d3; -[SCCommerceHeroCarouselCollectionView collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_104df84d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf6870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__currentCellSize_11255b3b8);
  return;
}



/* Entry: 104df84d4; end: 104df8543; -[SCCommerceHeroCarouselCollectionView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df84d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db4478);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127136b4);
  func_0x00010bf33980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a320(param_3,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104df8544; end: 104df865f; -[SCCommerceHeroCarouselCollectionView collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_104df8544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104df8660;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104df8660; end: 104df869f;  */

void FUN_104df8660(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(uVar2);
  func_0x00010be11b40(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104df86a0; end: 104df86cf; -[SCCommerceHeroCarouselCollectionView collectionView:didSelectItemAtIndexPath:] */

void FUN_104df86a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bea3240(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be9c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scrollToCurrentIndexAnimating_s_1125849a8,1,0);
  return;
}



/* Entry: 104df86d0; end: 104df8783; -[SCCommerceHeroCarouselCollectionView observeValueForKeyPath:ofObject:change:context:] */

void FUN_104df86d0(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104df8758;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104df8784; end: 104df87ff; -[SCCommerceHeroCarouselCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df8784(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127136b4,0);
  _objc_storeStrong(param_1 + _DAT_1127136c0,0);
  _objc_storeStrong(param_1 + _DAT_1127136c8,0);
  _objc_storeStrong(param_1 + _DAT_1127136cc,0);
  _objc_storeStrong(param_1 + _DAT_1127136bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127136b8);
  return;
}



/* Entry: 104df8800; end: 104df88ef; -[SCCommerceHeroCarouselCollectionViewConfig initWithInitialUrl:urls:aspectRatio:horizontalInset:forceSwiping:cellConfig:] */

undefined1 *
FUN_104df8800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e4470;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 104df88f0; end: 104df8913; -[SCCommerceHeroCarouselCollectionViewConfig copyWithZone:] */

undefined8 FUN_104df88f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df8914; end: 104df891b; -[SCCommerceHeroCarouselCollectionViewConfig initialUrl] */

undefined8 FUN_104df8914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df891c; end: 104df8923; -[SCCommerceHeroCarouselCollectionViewConfig urls] */

undefined8 FUN_104df891c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df8924; end: 104df892b; -[SCCommerceHeroCarouselCollectionViewConfig aspectRatio] */

undefined8 FUN_104df8924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104df892c; end: 104df8933; -[SCCommerceHeroCarouselCollectionViewConfig horizontalInset] */

undefined8 FUN_104df892c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104df8934; end: 104df893b; -[SCCommerceHeroCarouselCollectionViewConfig forceSwiping] */

undefined1 FUN_104df8934(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104df893c; end: 104df8943; -[SCCommerceHeroCarouselCollectionViewConfig cellConfig] */

undefined8 FUN_104df893c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104df8944; end: 104df897f; -[SCCommerceHeroCarouselCollectionViewConfig .cxx_destruct] */

void FUN_104df8944(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104df8980; end: 104df8a07; -[SCCommerceHeroCarouselCellConfig initWithContentMode:padding:cornerRadius:hasDropShadows:] */

void FUN_104df8980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126e4478;
  uStack_60 = param_6;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  return;
}



/* Entry: 104df8a08; end: 104df8a2b; -[SCCommerceHeroCarouselCellConfig copyWithZone:] */

undefined8 FUN_104df8a08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df8a2c; end: 104df8a33; -[SCCommerceHeroCarouselCellConfig contentMode] */

undefined8 FUN_104df8a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104df8a34; end: 104df8a3f; -[SCCommerceHeroCarouselCellConfig padding] */

undefined8 FUN_104df8a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104df8a40; end: 104df8a47; -[SCCommerceHeroCarouselCellConfig cornerRadius] */

undefined8 FUN_104df8a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104df8a48; end: 104df8a4f; -[SCCommerceHeroCarouselCellConfig hasDropShadows] */

undefined1 FUN_104df8a48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104df8a50; end: 104df8abb; -[SCCommerceTrayUIContainer initWithHostViewController:] */

undefined1 * FUN_104df8a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4480;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df8abc; end: 104df8b9b; -[SCCommerceTrayUIContainer attachUI:] */

void FUN_104df8abc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0a08;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c055600();
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined **)(param_2 + 8) = puVar1;
  _objc_release(uVar3);
  func_0x00010c167420(*(undefined8 *)(param_2 + 8));
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c219e20(*(undefined8 *)(param_2 + 8));
  _objc_release(lVar2);
  func_0x00010c27b320(param_2);
  if (param_1 == 0.0) {
    param_1 = 0.699999988079071;
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c10c5a0(param_1,uVar3);
  _objc_release(lVar2);
  _objc_storeWeak(param_2 + 0x10,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104df8b9c; end: 104df8be7; -[SCCommerceTrayUIContainer detachUI:] */

void FUN_104df8b9c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf83180(*(long *)(param_1 + 8),param_2,1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104df8be8; end: 104df8bef; -[SCCommerceTrayUIContainer trayHeight] */

undefined8 FUN_104df8be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104df8bf0; end: 104df8bf7; -[SCCommerceTrayUIContainer setTrayHeight:] */

void FUN_104df8bf0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 104df8bf8; end: 104df8c0f; -[SCCommerceTrayUIContainer trayHostDelegate] */

void FUN_104df8bf8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df8c10; end: 104df8c1b; -[SCCommerceTrayUIContainer setTrayHostDelegate:] */

void FUN_104df8c10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104df8c1c; end: 104df8c57; -[SCCommerceTrayUIContainer .cxx_destruct] */

void FUN_104df8c1c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df8c58; end: 104df8e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df8c58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0a18;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b0a10;
  puVar2 = puVar1;
  func_0x000104df9d00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b0a10;
  puStack_68 = puVar4;
  func_0x000104df9d18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d260();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puVar3 = puVar4;
  func_0x000104df9ce8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d240();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_78 = FUN_104df8e40;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126b0a18;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b0a10;
    puStack_108 = puVar3;
    func_0x000104df9cd0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_f8 = puVar4;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar3 = PTR_PTR_1126b0a10;
    puVar1 = puVar2;
    func_0x000104df9be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126b0a10;
    func_0x000104df9bf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126b0a10;
    func_0x000104df9c10();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126b0a10;
    func_0x000104df9c28();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126b0a10;
    func_0x000104df9c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x000104df9ce8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09a380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar1 = PTR_PTR_1126b0a10;
    puStack_f0 = puVar3;
    func_0x000104df9c58();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_e8 = puVar1;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar2 = PTR_PTR_1126b0a10;
    puVar6 = puVar5;
    func_0x000104df9c88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4520(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar2 = PTR_PTR_1126b0a10;
    func_0x000104df9ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4520(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar2 = PTR_PTR_1126b0a10;
    func_0x000104df9cb8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4520(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar2 = PTR_PTR_1126b0a10;
    func_0x000104df9c70();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000104df9ce8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09a380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_108;
    func_0x00010c03d260();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b0a20;
    _objc_alloc();
    puVar3 = puVar4;
    func_0x000104df9ce8();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_100 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d240();
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      ppuStack_138 = &PTR____CFConstantStringClassReference_110db4738;
      pcStack_118 = FUN_104df93c0;
      puStack_140 = puVar3;
      puStack_130 = puVar6;
      puStack_128 = puVar4;
      ppuStack_120 = &puStack_80;
      _objc_initWeak(auStack_148,puVar1);
      puVar4 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_150,auStack_148);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar1 + _DAT_11271370c);
      *(undefined **)(puVar1 + _DAT_11271370c) = puVar4;
      _objc_release(uVar8);
      func_0x00010bebaa80(puVar1);
      _objc_destroyWeak(auStack_150);
      _objc_destroyWeak(auStack_148);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104df8e40; end: 104df93bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df8e40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0a18;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0a10;
  puStack_98 = puVar1;
  func_0x000104df9cd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_88 = puVar2;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar1 = PTR_PTR_1126b0a10;
  puVar4 = puVar3;
  func_0x000104df9be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126b0a10;
  func_0x000104df9bf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126b0a10;
  func_0x000104df9c10();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126b0a10;
  func_0x000104df9c28();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126b0a10;
  func_0x000104df9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000104df9ce8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126b0a10;
  puStack_80 = puVar1;
  func_0x000104df9c58();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_78 = puVar4;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR_PTR_1126b0a10;
  puVar6 = puVar5;
  func_0x000104df9c88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar3 = PTR_PTR_1126b0a10;
  func_0x000104df9ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar3 = PTR_PTR_1126b0a10;
  func_0x000104df9cb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar3 = PTR_PTR_1126b0a10;
  func_0x000104df9c70();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000104df9ce8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_98;
  func_0x00010c03d260();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puVar1 = puVar2;
  func_0x000104df9ce8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d240();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110db4738;
  pcStack_a8 = FUN_104df93c0;
  puStack_d0 = puVar1;
  puStack_c0 = puVar6;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_d8,puVar4);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_e0,auStack_d8);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar4 + _DAT_11271370c);
  *(undefined **)(puVar4 + _DAT_11271370c) = puVar2;
  _objc_release(uVar8);
  func_0x00010bebaa80(puVar4);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  return;
}



/* Entry: 104df93c0; end: 104df949f; -[SCCommerceReportProductEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df93c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271370c);
  *(undefined **)(param_1 + _DAT_11271370c) = puVar1;
  _objc_release(uVar2);
  func_0x00010bebaa80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104df94a0; end: 104df94df;  */

void FUN_104df94a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104df94e0; end: 104df958f; -[SCCommerceReportProductEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df94e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_112713710;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_38 = PTR_PTR_1126e4488;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df9590; end: 104df967b; -[SCCommerceReportProductEntryPoint _createReportService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df9590(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1);
  _objc_release(puVar2);
  param_1 = param_1 + _DAT_112713714;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_104df9d48();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 104df967c; end: 104df97ff; -[SCCommerceReportProductEntryPoint _showReportV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df967c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112713710;
  lVar1 = *(long *)(param_1 + lVar8);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = (long)_DAT_112713718;
      uVar2 = param_1 + lVar1;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010c133880();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c076780();
      if ((uVar4 & 1) == 0) {
        FUN_104df8e40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_104df8c58();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar5 = PTR_PTR_1126b0a40;
      _objc_opt_new(PTR_PTR_1126b0a40);
      puVar6 = puVar5;
      func_0x000104df9d30();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eda0(puVar5,param_2,puVar6);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b0a48;
      _objc_alloc(PTR_PTR_1126b0a48);
      lVar1 = param_1 + lVar1;
      _objc_loadWeakRetained(lVar1);
      lVar7 = lVar1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c058860(puVar6,param_2,lVar7,&PTR____CFConstantStringClassReference_110db4518,
                          uVar4,param_1,puVar5);
      _objc_release(lVar7);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar8),param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 104df9800; end: 104df985b; -[SCCommerceReportProductEntryPoint reportDidCompleteWithCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df9800(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112713718;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df985c; end: 104df9b77; -[SCCommerceReportProductEntryPoint submitReportWithReasonId:comment:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df985c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  lVar8 = (long)_DAT_112713718;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar1 = lVar8;
  func_0x00010c133880();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0a28;
  _objc_retain();
  _objc_opt_new(puVar2);
  lVar3 = lVar1;
  func_0x00010c257800(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010bf33480(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a100(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010c241860(lVar1);
  _objc_release(lVar1);
  func_0x00010c204900(puVar2,param_2,lVar3);
  puVar4 = PTR_PTR_1126b0a30;
  _objc_opt_new(PTR_PTR_1126b0a30);
  puVar5 = puVar4;
  func_0x00010c134120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c260();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b0a38;
  _objc_opt_new(PTR_PTR_1126b0a38);
  func_0x00010c1eb3a0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  puVar2 = puVar5;
  func_0x00010c1323e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ed60();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db4758);
  if (((((uVar6 & 1) == 0) &&
       (uVar6 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db4798),
       (uVar6 & 1) == 0)) &&
      (uVar6 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db4798),
      (uVar6 & 1) == 0)) &&
     (((uVar6 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db47b8),
       (uVar6 & 1) == 0 &&
       (uVar6 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db47d8),
       (uVar6 & 1) == 0)) &&
      (uVar6 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db47f8),
      (uVar6 & 1) == 0)))) {
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db48b8);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  puVar2 = puVar5;
  func_0x00010c1323e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8080();
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271370c);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104df9b78;
  puStack_70 = &UNK_110851018;
  uStack_68 = param_5;
  _objc_retain(param_5);
  func_0x00010c15c6a0(uVar7,param_2,puVar5,0,&puStack_88);
  _objc_release(uVar7);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(puVar5);
  return;
}



/* Entry: 104df9b78; end: 104df9b87;  */

void FUN_104df9b78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104df9b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 104df9b88; end: 104df9bdf; -[SCCommerceReportProductEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df9b88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713710,0);
  _objc_destroyWeak(param_1 + _DAT_112713714);
  _objc_destroyWeak(param_1 + _DAT_112713718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271370c,0);
  return;
}



/* Entry: 104df9be0; end: 104df9d47;  */

void FUN_104df9be0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db4538;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db4538,
                      &PTR____CFConstantStringClassReference_110db4558,0);
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



/* Entry: 104df9d48; end: 104df9e4b;  */

void FUN_104df9d48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf56360(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b0a50;
  _objc_alloc(PTR_PTR_1126b0a50);
  func_0x00010c058f80();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104df9e4c; end: 104df9ebf; -[UNISCReportReportService initWithUnifiedGrpcService:] */

undefined1 * FUN_104df9e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104df9ec0; end: 104df9fa3; -[UNISCReportReportService sendReportWithRequest:callOptionsBuilder:handler:] */

void FUN_104df9ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b0a58;
  _objc_opt_class(PTR_PTR_1126b0a58);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db48f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104df9fa4; end: 104df9faf; -[UNISCReportReportService .cxx_destruct] */

void FUN_104df9fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104df9fb0; end: 104dfa02b;  */

undefined * FUN_104df9fb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4918,
                        &UNK_10dd8b8cc,&UNK_10dd8baec,0x29,FUN_104dfa02c,0);
    do {
      if (puRam00000001136b8c30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c30;
}



/* Entry: 104dfa02c; end: 104dfa057;  */

bool FUN_104dfa02c(uint param_1)

{
  if ((param_1 < 0x29) && (param_1 != 0x12)) {
    return true;
  }
  return param_1 == 99;
}



/* Entry: 104dfa058; end: 104dfa0d3;  */

undefined * FUN_104dfa058(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4938,
                        &UNK_10dd8bb90,&UNK_10dd8bbdc,6,FUN_104dfa0d4,0);
    do {
      if (puRam00000001136b8c38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c38;
}



/* Entry: 104dfa0d4; end: 104dfa0df;  */

bool FUN_104dfa0d4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 104dfa0e0; end: 104dfa15b;  */

undefined * FUN_104dfa0e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4958,
                        &UNK_10dd8bbf4,&UNK_10dd8bc50,7,FUN_104dfa15c,0);
    do {
      if (puRam00000001136b8c40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c40;
}



/* Entry: 104dfa15c; end: 104dfa167;  */

bool FUN_104dfa15c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 104dfa168; end: 104dfa1e3;  */

undefined * FUN_104dfa168(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4978,
                        &UNK_10dd8bc6c,&UNK_10dd8bcac,5,FUN_104dfa1e4,0);
    do {
      if (puRam00000001136b8c48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c48;
}



/* Entry: 104dfa1e4; end: 104dfa1ef;  */

bool FUN_104dfa1e4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104dfa1f0; end: 104dfa26b;  */

undefined * FUN_104dfa1f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4998,
                        &UNK_10dd8bb90,&UNK_10dd8bcc0,6,FUN_104dfa26c,0);
    do {
      if (puRam00000001136b8c50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c50;
}



/* Entry: 104dfa26c; end: 104dfa277;  */

bool FUN_104dfa26c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 104dfa278; end: 104dfa2f3;  */

undefined * FUN_104dfa278(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db49b8,
                        &UNK_10dd8bcd8,&UNK_10dd8bcec,3,FUN_104dfa2f4,0);
    do {
      if (puRam00000001136b8c58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c58;
}



/* Entry: 104dfa2f4; end: 104dfa2ff;  */

bool FUN_104dfa2f4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104dfa300; end: 104dfa37b;  */

undefined * FUN_104dfa300(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db49d8,
                        &UNK_10dd8bcf8,&UNK_10dd8bd24,7,FUN_104dfa37c,0);
    do {
      if (puRam00000001136b8c60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c60;
}



/* Entry: 104dfa37c; end: 104dfa387;  */

bool FUN_104dfa37c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 104dfa388; end: 104dfa403;  */

undefined * FUN_104dfa388(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db49f8,
                        &UNK_10dd8bd40,&UNK_10dd8bd50,2,FUN_104dfa404,0);
    do {
      if (puRam00000001136b8c68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c68;
}



/* Entry: 104dfa404; end: 104dfa40f;  */

bool FUN_104dfa404(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 104dfa410; end: 104dfa48b;  */

undefined * FUN_104dfa410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4a18,
                        &UNK_10dd8bd58,&UNK_10dd8bd84,5,FUN_104dfa48c,0);
    do {
      if (puRam00000001136b8c70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c70;
}



/* Entry: 104dfa48c; end: 104dfa497;  */

bool FUN_104dfa48c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104dfa498; end: 104dfa513;  */

undefined * FUN_104dfa498(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8c78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db4a38,
                        &UNK_10dd8bd98,&UNK_10dd8bef8,0x13,FUN_104dfa514,0);
    do {
      if (puRam00000001136b8c78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8c78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8c78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8c78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8c78;
}



/* Entry: 104dfa514; end: 104dfa51f;  */

bool FUN_104dfa514(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 104dfa520; end: 104dfa5ab; +[SCReportReporter descriptor] */

undefined * FUN_104dfa520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fc4e0,
                        &PTR____CFConstantStringClassReference_110db4a58,
                        &PTR_s_snapchat_abuse_support_1130b2fd0,&PTR_s_userId_1130b3168,2,0x18,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136b8c80 = puVar1;
  }
  return puRam00000001136b8c80;
}


