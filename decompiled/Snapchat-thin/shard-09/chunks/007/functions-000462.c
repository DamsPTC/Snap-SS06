/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107021d54; end: 107021d97; -[SCMemoriesSideButtonImpl _removeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021d54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b00;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107021d98; end: 107021da7; -[SCMemoriesSideButtonImpl _toggleDefaultBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762ae8),PTR_s_showBadge__11266b248);
  return;
}



/* Entry: 107021da8; end: 107021ea3; -[SCMemoriesSideButtonImpl _galleryIconImageOfIconStyle:] */

void FUN_107021da8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *unaff_x19;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x207;
  }
  else {
    if (param_3 != 1) {
      puVar2 = unaff_x19;
      if (param_3 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e98c38);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107021e94;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x206;
  }
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4010000000000000,0x4010000000000000,
                      0x4010000000000000,0x4010000000000000,puVar2,param_2,uVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_107021e94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107021ea4; end: 107021eb3; -[SCMemoriesSideButtonImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107021ea4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762af0);
}



/* Entry: 107021eb4; end: 107021ebf; -[SCMemoriesSideButtonImpl setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107021ec0; end: 107021eff; -[SCMemoriesSideButtonImpl setMaskImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107021f00; end: 107021f3f; -[SCMemoriesSideButtonImpl setThumbnailView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b0c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107021f40; end: 107021f7f; -[SCMemoriesSideButtonImpl setShapeMaskView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107021f80; end: 107021fbf; -[SCMemoriesSideButtonImpl setSpecStateImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107021fc0; end: 10702209b; -[SCMemoriesSideButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021fc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762b04,0);
  _objc_storeStrong(param_1 + _DAT_112762b10,0);
  _objc_storeStrong(param_1 + _DAT_112762b0c,0);
  _objc_storeStrong(param_1 + _DAT_112762b08,0);
  _objc_storeStrong(param_1 + _DAT_112762af0,0);
  _objc_storeStrong(param_1 + _DAT_112762ae8,0);
  _objc_storeStrong(param_1 + _DAT_112762ae0,0);
  _objc_storeStrong(param_1 + _DAT_112762b00,0);
  _objc_destroyWeak(param_1 + _DAT_112762af4);
  _objc_storeStrong(param_1 + _DAT_112762b14,0);
  _objc_storeStrong(param_1 + _DAT_112762afc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762b18,0);
  return;
}



/* Entry: 10702209c; end: 107022137; -[SCMemoriesSideButtonOnLeftEdgeHandler initWithMemoriesSideButtonDelegate:circumstanceEngine:memoriesExperimentService:] */

undefined1 *
FUN_10702209c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107022138; end: 107022423; -[SCMemoriesSideButtonOnLeftEdgeHandler configureWithView:] */

void FUN_107022138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126d4160;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c00a340(puVar1,param_2,lVar2,1,*(undefined8 *)(param_1 + 0x18),0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar16);
  _objc_release(lVar2);
  func_0x00010c1a1b20(param_3,param_2,*(undefined8 *)(param_1 + 8),1);
  puVar3 = PTR_PTR_1126d41b8;
  _objc_alloc();
  func_0x00010c02ad60();
  uVar16 = param_3;
  func_0x00010bfe12e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar16);
  func_0x00010c219b60(puVar3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_88 = puVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf2b240(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010bf348e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_80 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  puStack_78 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107022424; end: 107022427; -[SCMemoriesSideButtonOnLeftEdgeHandler updateThumbnailForYearEndRecap:] */

void FUN_107022424(void)

{
  return;
}



/* Entry: 107022428; end: 10702242f; -[SCMemoriesSideButtonOnLeftEdgeHandler memoriesSideButton] */

undefined8 FUN_107022428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107022430; end: 107022467; -[SCMemoriesSideButtonOnLeftEdgeHandler .cxx_destruct] */

void FUN_107022430(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107022468; end: 1070226bb; -[SCMemoriesSideButtonOnLeftEdgeImpl initWithMemoriesSideButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107022468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_a0 = PTR_PTR_1126f8418;
  puVar18 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar18,PTR_s_init_1125d9248);
  if (puVar18 != (undefined8 *)0x0) {
    func_0x00010bea2460(puVar18);
    func_0x00010befbb60(puVar18);
    func_0x00010c219b60(param_3);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar22 = param_3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar18;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar22;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    uStack_98 = uVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar18;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = param_3;
    uStack_90 = uVar21;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar23;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    uStack_88 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar23);
    _objc_release(uVar21);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar22);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar18;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar23 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  puVar18 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar22,uVar23,0x4045000000000000,0x4049000000000000);
  puVar1 = puVar18;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar18);
  _objc_release(puVar9);
  puVar1 = puVar18;
  func_0x00010c08c0e0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = 0x4039000000000000;
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(puVar1);
  puVar1 = puVar18;
  func_0x00010c08c0e0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(puVar1);
  puVar8 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010bf20c00(puVar18);
  func_0x00010c013de0();
  puVar10 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(puVar8);
  func_0x00010befbb60(puVar18);
  func_0x00010befbb60(param_3);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar18;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2a5060(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf34860(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010beef8c0(puVar9);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(param_3);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar2);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(uVar22);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar18;
  }
  ___stack_chk_fail();
  lVar20 = (long)_DAT_112762b2c;
  _objc_retain(puVar19);
  func_0x00010bf512a0(uVar21,uVar23,puVar18);
  puVar18 = *(undefined8 **)((long)puVar18 + lVar20);
  func_0x00010c102b20(puVar18);
  _objc_release(puVar19);
  return puVar18;
}



/* Entry: 1070226bc; end: 107022a37; -[SCMemoriesSideButtonOnLeftEdgeImpl _setBlurredBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1070226bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar20 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,0x4045000000000000,0x4049000000000000);
  puVar15 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar15);
  _objc_release(puVar15);
  puVar15 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 0x4039000000000000;
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(puVar15);
  puVar15 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(puVar15);
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010bf20c00(puVar1);
  func_0x00010c013de0();
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(puVar2,param_2,puVar3);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  func_0x00010befbb60(param_1,param_2,puVar1);
  puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_98 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_90 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_88 = puVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493a0(puVar12,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010beef8c0(puVar15,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar19);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_112762b2c;
  uVar19 = *(undefined8 *)(puVar1 + lVar17);
  _objc_retain(puVar16);
  func_0x00010bf512a0(uVar18,uVar20,puVar1,param_2,uVar19);
  puVar15 = *(undefined **)(puVar1 + lVar17);
  func_0x00010c102b20(puVar15,param_2,puVar16);
  _objc_release(puVar16);
  return puVar15;
}



/* Entry: 107022a38; end: 107022ab3; -[SCMemoriesSideButtonRoundedImpl pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107022a38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b2c;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  _objc_retain(param_5);
  func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010c102b20(uVar1,param_4,param_5);
  _objc_release(param_5);
  return uVar1;
}



/* Entry: 107022ab4; end: 107022ac7; -[SCMemoriesSideButtonRoundedImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107022ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762b2c,0);
  return;
}



/* Entry: 107022ac8; end: 107022d2b; -[SCMemoriesSideButtonThumbnailView _createTextLabelWithUserContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107022ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar12 = param_1;
  func_0x00010be46be0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,lVar12);
  _objc_release(lVar12);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,7);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c165e20(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112762b34;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_80 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0xc010000000000000,puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((puVar11 < (undefined *)0x12) || (puVar11 + -0x13 < (undefined *)0x2)) {
      func_0x00010b0aea44();
      _objc_retainAutoreleasedReturnValue();
    }
    else if ((puVar11 == (undefined *)0x15) || (puVar11 == (undefined *)0x12)) {
      FUN_107023878();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107022d2c; end: 107022d7b; -[SCMemoriesSideButtonThumbnailView _labelTextWithUserContext:] */

void FUN_107022d2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 < 0x12) || (param_3 - 0x13 < 2)) {
    func_0x00010b0aea44();
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((param_3 == 0x15) || (param_3 == 0x12)) {
    FUN_107023878();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107022d7c; end: 107022eb3; -[SCMemoriesSideButtonThumbnailView _applyRoundedCornersToImage:withRadius:size:] */

void FUN_107022d7c(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_retain(param_6);
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c23d0a0(param_6);
    dVar5 = param_3 / dVar4;
    if (param_3 / dVar4 <= param_2 / dVar3) {
      dVar5 = param_2 / dVar3;
    }
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(param_2,param_3);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_107022eb4;
    puStack_b8 = &UNK_110988ba0;
    dStack_a8 = param_2;
    dStack_a0 = param_3;
    dStack_98 = param_1;
    _objc_retain(param_6);
    puVar2 = puVar1;
    lStack_b0 = param_6;
    dStack_90 = (param_2 - dVar3 * dVar5) * 0.5;
    dStack_88 = (param_3 - dVar4 * dVar5) * 0.5;
    dStack_80 = dVar3 * dVar5;
    dStack_78 = dVar4 * dVar5;
    func_0x00010bfe91c0(puVar1,param_5,&puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_b0);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107022eb4; end: 107022f0f;  */

void FUN_107022eb4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7740();
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107022f10; end: 10702306b; -[SCMemoriesSideButtonThumbnailView _createThumbnailView] */

/* WARNING: Possible PIC construction at 0x00010702304c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107023050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107022f10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4044000000000000,0x4044000000000000);
  lVar4 = (long)_DAT_112762b3c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4000000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c013de0();
  lVar3 = (long)_DAT_112762b40;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10702306c; end: 107023227; -[SCMemoriesSideButtonThumbnailView updateWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702306c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c25dfa0();
  lVar3 = (long)_DAT_112762b30;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c25dfa0();
  if (lVar4 == lVar1) {
    lVar4 = param_3;
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar4 == lVar1) goto LAB_107023210;
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
  lVar4 = param_3;
  func_0x00010c25dfa0();
  if (lVar4 == 1) {
    lVar4 = param_3;
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_107023210;
    lVar4 = (long)_DAT_112762b3c;
    if (*(long *)(param_1 + lVar4) == 0) {
      func_0x00010bdf4b60(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112762b34),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar1 = param_3;
    func_0x00010c26dde0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdce860(0x4028000000000000,0x4044000000000000,0x4044000000000000,param_1,param_2,
                        lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112762b40),param_2,lVar3);
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,0);
    _objc_release(lVar3);
  }
  else if (lVar4 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112762b34),param_2,0);
    if (*(long *)(param_1 + _DAT_112762b3c) != 0) {
      func_0x00010c1a7f60(*(long *)(param_1 + _DAT_112762b3c),param_2,1);
    }
  }
  func_0x00010bed3d80(param_1);
LAB_107023210:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107023228; end: 10702327f; -[SCMemoriesSideButtonThumbnailView _badgeAnchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107023228(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112762b30);
  func_0x00010c25dfa0();
  if (lVar1 != 0) {
    if (lVar1 != 1) goto LAB_107023270;
    if (*(long *)(param_1 + _DAT_112762b3c) != 0) {
      param_1 = *(long *)(param_1 + _DAT_112762b3c);
    }
  }
  _objc_retain(param_1);
LAB_107023270:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107023280; end: 1070232af; -[SCMemoriesSideButtonThumbnailView _badgeTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107023280(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112762b30);
  func_0x00010c25dfa0();
  uVar2 = 0x4014000000000000;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1070232b0; end: 1070232df; -[SCMemoriesSideButtonThumbnailView _badgeRightOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070232b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112762b30);
  func_0x00010c25dfa0();
  uVar2 = 0xc000000000000000;
  if (lVar1 != 0) {
    uVar2 = 0x4014000000000000;
  }
  return uVar2;
}



/* Entry: 1070232e0; end: 1070233ef; -[SCMemoriesSideButtonThumbnailView badgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070232e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112762b44;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4024000000000000,
                        0x4024000000000000);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bf199e0(puVar1,param_2,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e98d18);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1070233f0; end: 10702344b; -[SCMemoriesSideButtonThumbnailView showBadge:] */

void FUN_1070233f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2360a0(param_1,param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10702344c; end: 107023503; -[SCMemoriesSideButtonThumbnailView showBadge:color:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702344c(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (((param_3 & 1) != 0) || (*(long *)(param_1 + _DAT_112762b44) != 0)) {
    lVar1 = param_1;
    func_0x00010bf155a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease(param_4);
    func_0x00010bdc0fe0();
    lVar2 = lVar1;
    func_0x00010c22a660(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(lVar2);
    func_0x00010c1a7f60(lVar1,param_2,param_3 ^ 1);
    func_0x00010bed3d80(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107023504; end: 1070235cb; -[SCMemoriesSideButtonThumbnailView _updateBadgePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107023504(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c06d020();
  if ((int)lVar1 != 0) {
    lVar2 = (long)_DAT_112762b44;
    func_0x00010bf21300(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    lVar1 = param_1;
    func_0x00010bdd2600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1070235cc;
    puStack_48 = &UNK_11084fc58;
    lStack_40 = lVar1;
    lStack_38 = param_1;
    _objc_retain();
    func_0x00010c0bbfe0(uVar3,param_2,&puStack_60);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1070235cc; end: 10702378f;  */

void FUN_1070235cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2800(*(undefined8 *)(param_1 + 0x28));
  (**(code **)(lVar4 + 0x10))(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2720(*(undefined8 *)(param_1 + 0x28));
  (**(code **)(lVar4 + 0x10))(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x4024000000000000,0x4024000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107023790; end: 1070237b7; -[SCMemoriesSideButtonThumbnailView isBadgeVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107023790(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112762b44);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c074c20();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 1070237b8; end: 1070237f7; -[SCMemoriesSideButtonThumbnailView setBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070237b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762b44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070237f8; end: 107023877; -[SCMemoriesSideButtonThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070237f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762b44,0);
  _objc_storeStrong(param_1 + _DAT_112762b30,0);
  _objc_storeStrong(param_1 + _DAT_112762b38,0);
  _objc_storeStrong(param_1 + _DAT_112762b40,0);
  _objc_storeStrong(param_1 + _DAT_112762b3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762b34,0);
  return;
}



/* Entry: 107023878; end: 10702388f;  */

void FUN_107023878(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e98d38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e98d38,
                      &PTR____CFConstantStringClassReference_110e98d58,0);
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



/* Entry: 107023890; end: 1070238b3; -[SCMemoriesSideButtonThumbnailConfig copyWithZone:] */

undefined8 FUN_107023890(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070238b4; end: 107023913; -[SCMemoriesSideButtonThumbnailConfig hash] */

undefined8 * FUN_1070238b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107023998;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107023998;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107023998;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107023998:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107023914; end: 1070239b3; -[SCMemoriesSideButtonThumbnailConfig isEqual:] */

long FUN_107023914(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107023998;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107023998;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107023998;
    }
  }
  lVar3 = 1;
LAB_107023998:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070239b4; end: 1070239bb; -[SCMemoriesSideButtonThumbnailConfig style] */

undefined8 FUN_1070239b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070239bc; end: 1070239c3; -[SCMemoriesSideButtonThumbnailConfig thumbnailImage] */

undefined8 FUN_1070239bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070239c4; end: 1070239cf; -[SCMemoriesSideButtonThumbnailConfig .cxx_destruct] */

void FUN_1070239c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070239d0; end: 1070239db; -[SCLegacyMemoriesNavigationServices .cxx_destruct] */

void FUN_1070239d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070239dc; end: 1070239e7; -[SCMemoriesRecentThumbnailProvidingServices .cxx_destruct] */

void FUN_1070239dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070239e8; end: 107023afb; -[SCMemoriesRecentThumbnailData initWithImage:size:isNewlySavedSnap:localIdentifier:creationDate:] */

undefined1 *
FUN_1070239e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8448;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107023afc; end: 107023b1f; -[SCMemoriesRecentThumbnailData copyWithZone:] */

undefined8 FUN_107023afc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107023b20; end: 107023baf; -[SCMemoriesRecentThumbnailData hash] */

undefined8 * FUN_107023b20(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107023c70:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107023c7c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_107023c7c;
            }
            goto LAB_107023c70;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107023c7c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107023bb0; end: 107023c97; -[SCMemoriesRecentThumbnailData isEqual:] */

long FUN_107023bb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107023c70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107023c7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_107023c7c;
            }
            goto LAB_107023c70;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107023c7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107023c98; end: 107023c9f; -[SCMemoriesRecentThumbnailData image] */

undefined8 FUN_107023c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107023ca0; end: 107023ca7; -[SCMemoriesRecentThumbnailData size] */

undefined8 FUN_107023ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107023ca8; end: 107023caf; -[SCMemoriesRecentThumbnailData isNewlySavedSnap] */

undefined1 FUN_107023ca8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107023cb0; end: 107023cb7; -[SCMemoriesRecentThumbnailData localIdentifier] */

undefined8 FUN_107023cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107023cb8; end: 107023cbf; -[SCMemoriesRecentThumbnailData creationDate] */

undefined8 FUN_107023cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107023cc0; end: 107023d07; -[SCMemoriesRecentThumbnailData .cxx_destruct] */

void FUN_107023cc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107023d08; end: 107023d13; -[SCMemoriesSideButtonStateProvidingServices .cxx_destruct] */

void FUN_107023d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107023d14; end: 107023d37; -[SCMemoriesSideButtonSpectaclesState copyWithZone:] */

undefined8 FUN_107023d14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107023d38; end: 107023d8f; -[SCMemoriesSideButtonSpectaclesState hash] */

undefined8 * FUN_107023d38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 107023d90; end: 107023e27; -[SCMemoriesSideButtonSpectaclesState isEqual:] */

bool FUN_107023d90(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107023e28; end: 107023e2f; -[SCMemoriesSideButtonSpectaclesState deviceState] */

undefined8 FUN_107023e28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107023e30; end: 107023e37; -[SCMemoriesSideButtonSpectaclesState productType] */

undefined8 FUN_107023e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107023e38; end: 107023e97; -[SCMemoriesSideButtonBadgeModel initWithShowDreamsBadge:badgeCount:hasPendingFeaturedStoriesNotification:] */

void FUN_107023e38(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 107023e98; end: 107023ebb; -[SCMemoriesSideButtonBadgeModel copyWithZone:] */

undefined8 FUN_107023e98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107023ebc; end: 107023f1f; -[SCMemoriesSideButtonBadgeModel hash] */

ulong * FUN_107023ebc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 9) == param_3[9]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 107023f20; end: 107023fc7; -[SCMemoriesSideButtonBadgeModel isEqual:] */

bool FUN_107023f20(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107023fc8; end: 107023fcf; -[SCMemoriesSideButtonBadgeModel showDreamsBadge] */

undefined1 FUN_107023fc8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107023fd0; end: 107023fd7; -[SCMemoriesSideButtonBadgeModel badgeCount] */

undefined8 FUN_107023fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107023fd8; end: 107023fdf; -[SCMemoriesSideButtonBadgeModel hasPendingFeaturedStoriesNotification] */

undefined1 FUN_107023fd8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107023fe0; end: 10702400f; +[SCExposureBiasAnimationView exposureBiasAnimationView] */

void FUN_107023fe0(void)

{
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4060000000000000,0x4064800000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107024010; end: 10702407f; -[SCExposureBiasAnimationView initWithFrame:] */

undefined1 * FUN_107024010(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be065c0(puVar1);
    func_0x00010be06580(puVar1);
    func_0x00010be065e0(puVar1);
    func_0x00010be06600(puVar1);
    func_0x00010be065a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107024080; end: 107024103; -[SCExposureBiasAnimationView animationWithKeyPath:byValue:] */

void FUN_107024080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_4);
  func_0x00010bf04040(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174c20();
  _objc_release(param_4);
  func_0x00010c19bc40(puVar1,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107024104; end: 1070241a7; -[SCExposureBiasAnimationView adjustExposure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107024104(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = param_1 * 117.0 * 0.5;
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c1dee80(0,dVar1,*(undefined8 *)(param_2 + _DAT_112762b84));
  func_0x00010c1dee80(0,dVar1,*(undefined8 *)(param_2 + _DAT_112762b88));
  func_0x00010be06640(dVar1,param_2);
  func_0x00010bee1800(dVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 1070241a8; end: 107024303; -[SCExposureBiasAnimationView fadeOutView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070241a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107024304;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,&puStack_68);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fc5604189374bc7);
  func_0x00010c216920(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184de0);
  func_0x00010c19bc40(puVar1,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar1,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762b84),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110de5e98);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762b8c),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110de5e98);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762b90),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110de5e98);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762b94),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110de5e98);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762b88),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110de5e98);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar1);
  return;
}



/* Entry: 107024304; end: 10702430b;  */

void FUN_107024304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10702430c; end: 1070244b3; -[SCExposureBiasAnimationView _drawExposureLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702430c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112762b8c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112762b98;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c0d18c0(0x4050000000000000,0x402e000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef98c0(0x4050000000000000,0x4062a00000000000,*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bdc1040(uVar3);
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)PTR__kCALineCapRound_110346d40);
  func_0x00010c1733a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010be06640(0,param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070244b4; end: 10702465f; -[SCExposureBiasAnimationView _drawExposureSymbolMinus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070244b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112762b90;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112762b9c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c0d18c0(0x404d800000000000,0x4063e00000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef98c0(0x4051400000000000,0x4063e00000000000,*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bdc1040(uVar3);
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)PTR__kCALineCapRound_110346d40);
  func_0x00010c1733a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1bdd00(0x3ff8000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107024660; end: 10702482b; -[SCExposureBiasAnimationView _drawExposureSymbolPlus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107024660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112762b94;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112762ba0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c0d18c0(0x404d800000000000,0x4014000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef98c0(0x4051400000000000,0x4014000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c0d18c0(0x4050000000000000,0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef98c0(0x4050000000000000,0x4024000000000000,*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bdc1040(uVar3);
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)PTR__kCALineCapRound_110346d40);
  func_0x00010c1733a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1bdd00(0x3ff8000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702482c; end: 107024a5f; -[SCExposureBiasAnimationView _drawExposureIndicatorSun] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702482c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112762b88;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112762ba4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  dVar11 = 0.0;
  iVar6 = 8;
  do {
    dVar8 = 0.125;
    dVar7 = dVar11 * 6.283185307179586 * 0.125;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    ___sincos_stret(dVar7);
    dVar9 = dVar8 * 6.0 + 64.0;
    dVar10 = dVar7 * 6.0 + 82.0;
    func_0x00010c0d18c0(dVar9,dVar10,uVar3);
    func_0x00010bef98c0(dVar9 + dVar8 * 2.5,dVar10 + dVar7 * 2.5,*(undefined8 *)(param_1 + lVar5));
    dVar11 = dVar11 + 1.0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bdc1040(uVar3);
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c1bdb40(*(undefined8 *)(param_1 + lVar4),param_2,
                      *(undefined8 *)PTR__kCALineCapRound_110346d40);
  func_0x00010c1733a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1bdd00(0x3ff8000000000000,*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010bee1800(0,param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107024a60; end: 107024c4b; -[SCExposureBiasAnimationView _drawLineDashPatternWithTranslateValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107024a60(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = ((117.0 - param_1) / 117.0) * 2.5 + 20.0;
  param_1 = param_1 + (134.0 - dVar9) * 0.5;
  dVar8 = (134.0 - param_1) - dVar9;
  lVar6 = (long)_DAT_112762b8c;
  dVar7 = dVar8;
  if (param_1 <= 0.0) {
    func_0x00010c1bdba0(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar6));
    ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9bf8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar9 + param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar2;
    func_0x00010c0df720(dVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb80(*(undefined8 *)(param_2 + lVar6),param_3,puVar4);
  }
  else {
    func_0x00010c1bdba0(0,*(undefined8 *)(param_2 + lVar6));
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar2;
    func_0x00010c0df720(dVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_90 = puVar3;
    func_0x00010c0df720(dVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_98,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb80(*(undefined8 *)(param_2 + lVar6),param_3,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_107024c4c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_112762b88;
  dStack_e0 = dVar9;
  dStack_d8 = dVar8;
  puStack_d0 = puVar4;
  puStack_c8 = puVar3;
  puStack_c0 = puVar2;
  lStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c1bdba0(0x3ff0000000000000,*(undefined8 *)(puVar1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(((117.0 - dVar7) / 117.0) * 2.5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184df0;
  ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9bf8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_100,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb80(*(undefined8 *)(puVar1 + lVar6),param_3,puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112762b84;
  uVar5 = *(undefined8 *)(puVar2 + lVar6);
  *(undefined **)(puVar2 + lVar6) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar5 = *(undefined8 *)(puVar2 + lVar6);
  func_0x00010bddc7e0(0x4010000000000000,puVar2);
  func_0x00010bf199a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(uVar5,param_3,puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(puVar2 + lVar6),param_3,puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(puVar2 + lVar6),param_3,puVar4);
  _objc_release(puVar3);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(puVar2 + lVar6));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(puVar2 + lVar6));
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107024c4c; end: 107024d43; -[SCExposureBiasAnimationView _updateSunRayLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107024c4c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112762b88;
  func_0x00010c1bdba0(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar5));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(((117.0 - param_1) / 117.0) * 2.5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184df0;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9bf8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb80(*(undefined8 *)(param_2 + lVar5),param_3,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112762b84;
  uVar4 = *(undefined8 *)(puVar1 + lVar5);
  *(undefined **)(puVar1 + lVar5) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar4 = *(undefined8 *)(puVar1 + lVar5);
  func_0x00010bddc7e0(0x4010000000000000,puVar1);
  func_0x00010bf199a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(uVar4,param_3,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(puVar1 + lVar5),param_3,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(puVar1 + lVar5),param_3,puVar3);
  _objc_release(puVar2);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(puVar1 + lVar5));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(puVar1 + lVar5));
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107024d44; end: 107024e87; -[SCExposureBiasAnimationView _drawExposureIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107024d44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112762b84;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bddc7e0(0x4010000000000000,param_1);
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(uVar3,param_2,puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar1);
  func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107024e88; end: 107024eaf; -[SCExposureBiasAnimationView _cgRectWithRadius:] */

double FUN_107024e88(double param_1)

{
  return 64.0 - param_1;
}



/* Entry: 107024eb0; end: 107024f5f; -[SCExposureBiasAnimationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107024eb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762b84,0);
  _objc_storeStrong(param_1 + _DAT_112762ba4,0);
  _objc_storeStrong(param_1 + _DAT_112762b88,0);
  _objc_storeStrong(param_1 + _DAT_112762ba0,0);
  _objc_storeStrong(param_1 + _DAT_112762b94,0);
  _objc_storeStrong(param_1 + _DAT_112762b9c,0);
  _objc_storeStrong(param_1 + _DAT_112762b90,0);
  _objc_storeStrong(param_1 + _DAT_112762b98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762b8c,0);
  return;
}



/* Entry: 107024f60; end: 107025267; -[SCFeatureTapToFocusAndExposureImpl initWithCommands:cameraUserActionLogger:cameraHardwareServicesAPI:captureDeviceManager:deviceSubjectAreaHandler:exposureBiasConfiguration:simpleFeatureGatingConfiguration:cameraHardwareResources:optimizedExposureConfiguration:closeupCapture:lensCarouselManager:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107024f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f8470;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112762bbc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112762bc0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112762bc4,param_5);
    lVar5 = (long)_DAT_112762bc8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112762bcc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112762bd0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112762bd4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112762bd8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112762bdc;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112762be0,param_14);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112762be4,param_15);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762be8);
    *(undefined **)((long)puVar1 + (long)_DAT_112762be8) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf8f820();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762bec);
      *(undefined8 *)((long)puVar1 + (long)_DAT_112762bec) = 0;
      _objc_release(uVar2);
    }
    *(undefined1 *)((long)puVar1 + (long)_DAT_112762bf0) = 1;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 107025268; end: 1070253d7; -[SCFeatureTapToFocusAndExposureImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025268(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + _DAT_112762bf4) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112762bf4) = 0;
    uVar1 = *(ulong *)(param_1 + _DAT_112762bd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8f820();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar5 = (long)_DAT_112762bc8;
    }
    else {
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112762bf8));
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112762bfc));
      uVar3 = *(undefined8 *)(param_1 + _DAT_112762bec);
      *(undefined8 *)(param_1 + _DAT_112762bec) = 0;
      _objc_release(uVar3);
      lVar5 = (long)_DAT_112762bc8;
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf9d820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199000();
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfb35a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8fbc0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf9d820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199080(0x3fe0000000000000,0x3fe0000000000000);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1070253d8; end: 107025433; -[SCFeatureTapToFocusAndExposureImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070253d8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762c00);
  *(undefined8 *)(param_1 + _DAT_112762c00) = 0;
  _objc_release(uVar1);
  func_0x00010c256420(param_1);
  puStack_28 = PTR_PTR_1126f8470;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107025434; end: 10702545f; -[SCFeatureTapToFocusAndExposureImpl enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107025434(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_112762c04) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112762bf0);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 107025460; end: 1070254c3; -[SCFeatureTapToFocusAndExposureImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_storeWeak(param_1 + _DAT_112762c08,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762bd4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142ea0();
  *(char *)(param_1 + _DAT_112762c0c) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070254c4; end: 1070255c3; -[SCFeatureTapToFocusAndExposureImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070254c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112762bd8;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beab550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupCameraModeActivationInfoOb_1125886f8);
  return;
}



/* Entry: 1070255c4; end: 107025737; -[SCFeatureTapToFocusAndExposureImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070255c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107025738;
  puStack_68 = &UNK_11084ec60;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762c10);
  *(undefined8 *)(param_1 + _DAT_112762c10) = uVar1;
  _objc_release(uVar2);
  _objc_copyWeak(auStack_88,auStack_58);
  uVar1 = param_4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762c14);
  *(undefined8 *)(param_1 + _DAT_112762c14) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107025738; end: 107025883;  */

void FUN_107025738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107025884;
  puStack_70 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1070258b0;
  puStack_98 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 107025884; end: 1070258ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025884(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112762ba8) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107025900; end: 1070259ab;  */

void FUN_107025900(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1070259ac; end: 1070259d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070259ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112762ba8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1070259d4; end: 107025c37; -[SCFeatureTapToFocusAndExposureImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070259d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_112762c18;
  if (*(long *)(param_1 + lVar7) == 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_112762c1c;
    if (*(long *)(param_1 + lVar7) == 0) {
      puVar1 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar1;
      _objc_release(uVar6);
      uVar6 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bf70e20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2880c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107025c38;
      puStack_88 = &UNK_11086e3f0;
      _objc_copyWeak(auStack_80,auStack_78);
      uVar4 = uVar3;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar6);
      param_1 = param_1 + _DAT_112762be0;
      _objc_loadWeakRetained(param_1);
      puVar5 = auStack_a8;
      _objc_copyWeak(puVar5,auStack_78);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(param_1);
      _objc_release(puVar5);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
    }
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107025c38; end: 107025cdb;  */

void FUN_107025c38(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107025cdc; end: 107025d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025cdc(long param_1,undefined1 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c137fe0(param_1);
    *(undefined1 *)(param_1 + _DAT_112762c04) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107025d20; end: 107025e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025d20(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef0d60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x28);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107025e90; end: 107025ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025e90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112762c20) = (char)uVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107025ee8; end: 107025f3f; -[SCFeatureTapToFocusAndExposureImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025ee8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762c18;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112762c1c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


