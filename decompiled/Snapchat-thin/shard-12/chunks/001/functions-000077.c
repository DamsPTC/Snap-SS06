/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d09ec8; end: 108d09ecf; -[SCFiltersState contextData] */

undefined8 FUN_108d09ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108d09ed0; end: 108d09eff; -[SCFiltersState setContextData:] */

void FUN_108d09ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d09f00; end: 108d09f9b; -[SCFiltersState .cxx_destruct] */

void FUN_108d09f00(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108d09f9c; end: 108d0a257; -[SCBroadLocationPromptFilterView initWithFrame:config:userSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d09f9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fe540;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame_config__1125e29f0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277b020;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x000108d10350();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277b024;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010befbd60(uVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x000108d10368();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar5);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    func_0x00010beaab60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d0a258; end: 108d0a25b; -[SCBroadLocationPromptFilterView drawScreenshotImageInCurrentContextWithRect:] */

void FUN_108d0a258(void)

{
  return;
}



/* Entry: 108d0a25c; end: 108d0a263; -[SCBroadLocationPromptFilterView hasImage] */

undefined8 FUN_108d0a25c(void)

{
  return 0;
}



/* Entry: 108d0a264; end: 108d0a58b; -[SCBroadLocationPromptFilterView _setupAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0a264(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11277b020;
  uVar2 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  uStack_a8 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar21);
  uStack_a0 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0xc048000000000000,uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11277b024;
  uVar11 = *(undefined8 *)(param_1 + lVar22);
  uStack_98 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49420(0x4066e00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  uStack_90 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  uStack_88 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf1ff80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493c0(0x4040000000000000,uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  uStack_80 = uVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar20);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(param_1);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d0a58c; end: 108d0a5bb; -[SCBroadLocationPromptFilterView _didTapOpenSettings] */

void FUN_108d0a58c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0a5bc; end: 108d0a5db; -[SCBroadLocationPromptFilterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0a5bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b028);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d0a5dc; end: 108d0a5ef; -[SCBroadLocationPromptFilterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0a5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b028,param_3);
  return;
}



/* Entry: 108d0a5f0; end: 108d0a63b; -[SCBroadLocationPromptFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0a5f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b028);
  _objc_storeStrong(param_1 + _DAT_11277b024,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b020,0);
  return;
}



/* Entry: 108d0a63c; end: 108d0b043; -[SCPromptFilterView initWithFrame:config:userSession:] */

undefined8 *
FUN_108d0a63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_7);
  puStack_a0 = PTR_PTR_1126fe548;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,puVar1,PTR_s_initWithFrame_config__1125e29f0,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    func_0x00010c1e4e60(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c118840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    puVar4 = puVar1;
    func_0x00010c118840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    lVar5 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    _objc_release();
    if (lVar5 == 0) {
      func_0x0001092019b8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_108d10308();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c212f20(puVar2);
    _objc_release(lVar6);
    func_0x00010c213040(puVar2);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c1bdb00(puVar2);
    func_0x00010c165e20(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar3);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    puVar4 = puVar1;
    func_0x00010c118840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar7);
    _objc_retain(puVar2);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    puVar4 = puVar1;
    func_0x00010c118840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    lVar5 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    _objc_release();
    if (lVar5 == 0) {
      func_0x000109201988();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108d10320();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c212f20(puVar7);
    _objc_release(lVar6);
    func_0x00010c213040(puVar7);
    func_0x00010c1cfce0(puVar7);
    func_0x00010c1bdb00(puVar7);
    func_0x00010c165e20(puVar7);
    puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar7);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar7);
    _objc_release(puVar8);
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc(PTR__OBJC_CLASS___UIButton_1126aec48);
    func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
    func_0x00010c21aac0(puVar1);
    _objc_release(puVar8);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff8000000000000);
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar9);
    _objc_release(puVar4);
    lVar5 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    if (lVar5 == 0) {
      func_0x0001092019a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108d10338();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c216260(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(puVar4);
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar8);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar4);
    func_0x0001092019a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c118840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c27d5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar7);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c118840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    func_0x00010c161020(puVar1);
    func_0x00010c21e900(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108d0b044; end: 108d0b277;  */

void FUN_108d0b044(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c118840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c118840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_108d0b278();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_108d0b278();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d0b278; end: 108d0b2b3;  */

void FUN_108d0b278(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d0b2b4; end: 108d0b94b;  */

void FUN_108d0b2b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c118840(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_108d0b278();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_108d0b278();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d0b94c; end: 108d0b94f; -[SCPromptFilterView drawScreenshotImageInCurrentContextWithRect:] */

void FUN_108d0b94c(void)

{
  return;
}



/* Entry: 108d0b950; end: 108d0b957; -[SCPromptFilterView hasImage] */

undefined8 FUN_108d0b950(void)

{
  return 0;
}



/* Entry: 108d0b958; end: 108d0b98b; -[SCPromptFilterView tap:] */

void FUN_108d0b958(undefined8 param_1)

{
  func_0x00010c27d5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0b98c; end: 108d0ba43; -[SCPromptFilterView shouldRespondToTap:] */

undefined8
FUN_108d0b98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c27d5e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010c09ef00(param_7,param_6,param_5);
  _objc_release(param_7);
  _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar2,uVar3);
  _objc_release(uVar1);
  return param_7;
}



/* Entry: 108d0ba44; end: 108d0ba73; -[SCPromptFilterView turnOnFiltersButtonPressed] */

void FUN_108d0ba44(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0ba74; end: 108d0ba93; -[SCPromptFilterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0ba74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b02c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d0ba94; end: 108d0baa7; -[SCPromptFilterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0ba94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b02c,param_3);
  return;
}



/* Entry: 108d0baa8; end: 108d0bab7; -[SCPromptFilterView promptOverlayContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d0baa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b030);
}



/* Entry: 108d0bab8; end: 108d0baf7; -[SCPromptFilterView setPromptOverlayContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0bab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b030;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0baf8; end: 108d0bb07; -[SCPromptFilterView turnOnFiltersButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d0baf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b034);
}



/* Entry: 108d0bb08; end: 108d0bb47; -[SCPromptFilterView setTurnOnFiltersButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0bb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b034;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0bb48; end: 108d0bb93; -[SCPromptFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0bb48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b034,0);
  _objc_storeStrong(param_1 + _DAT_11277b030,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b02c);
  return;
}



/* Entry: 108d0bb94; end: 108d0beb7; -[SCSnapStreakFilterView initWithFrame:config:userSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d0bb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126fe550;
  puVar1 = &uStack_80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame_config__1125e29f0,
                      param_7);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    dVar12 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar8,uVar10,uVar11,dVar12);
    lVar6 = (long)_DAT_11277b038;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    uVar3 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067fc0();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b03c) = uVar4;
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar10,uVar11,dVar12);
    lVar5 = (long)_DAT_11277b040;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x4055400000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar4);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4014000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3ecccccd);
    _objc_release(uVar4);
    func_0x00010c1fe7a0(0xc008000000000000,0x4008000000000000,*(undefined8 *)((long)puVar1 + lVar5))
    ;
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bf20c00(puVar1);
    dVar12 = dVar12 + -114.0;
    dVar9 = dVar12 + -85.0;
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar1 + lVar5));
    _CGRectGetWidth();
    dVar7 = dVar12;
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar1 + lVar5));
    _CGRectGetHeight();
    func_0x00010c19f0e0(0x4032000000000000,dVar9,dVar12,dVar7,*(undefined8 *)((long)puVar1 + lVar5))
    ;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108d0beb8; end: 108d0bebb; -[SCSnapStreakFilterView displayName] */

void FUN_108d0beb8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2c998;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f2c998,
                      &PTR____CFConstantStringClassReference_110f2c6b8,0);
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



/* Entry: 108d0bebc; end: 108d0becb; -[SCSnapStreakFilterView streakCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d0bebc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b03c);
}



/* Entry: 108d0becc; end: 108d0bedb; -[SCSnapStreakFilterView setStreakCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0becc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277b03c) = param_3;
  return;
}



/* Entry: 108d0bedc; end: 108d0bf1b; -[SCSnapStreakFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0bedc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b040,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b038,0);
  return;
}



/* Entry: 108d0bf1c; end: 108d0bf1f; -[SCUnfilteredOverlayFilterView drawScreenshotImageInCurrentContextWithRect:] */

void FUN_108d0bf1c(void)

{
  return;
}



/* Entry: 108d0bf20; end: 108d0bf27; -[SCUnfilteredOverlayFilterView hasImage] */

undefined8 FUN_108d0bf20(void)

{
  return 0;
}



/* Entry: 108d0bf28; end: 108d0c02f; -[SCUcoLensReadyFadeOutObserver initWithFilterId:trackerResolver:performer:fadeOutBlock:] */

undefined1 *
FUN_108d0bf28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe558;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d0c030; end: 108d0c077; -[SCUcoLensReadyFadeOutObserver dealloc] */

void FUN_108d0c030(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126fe558;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d0c078; end: 108d0c197; -[SCUcoLensReadyFadeOutObserver start] */

void FUN_108d0c078(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x32) = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      func_0x00010be66fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) && ((double)*(ulong *)(param_1 + 0x38) / 4.0 < 5.0)) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) + 1;
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fe0(0x3fd0000000000000,uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 108d0c198; end: 108d0c1d7;  */

void FUN_108d0c198(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x31) = 0;
    if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
      func_0x00010c24d960(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0c1d8; end: 108d0c333; -[SCUcoLensReadyFadeOutObserver _observeTracker:] */

void FUN_108d0c1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf08360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be0e060(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108d0c334; end: 108d0c36f;  */

void FUN_108d0c334(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be0e060(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d0c370; end: 108d0c403; -[SCUcoLensReadyFadeOutObserver _fadeOutIfRenderedWithTracker:] */

void FUN_108d0c370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf08420(param_3,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c07c360();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _objc_release(uVar2);
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d0c404; end: 108d0c43b; -[SCUcoLensReadyFadeOutObserver dispose] */

void FUN_108d0c404(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0c43c; end: 108d0c48f; -[SCUcoLensReadyFadeOutObserver .cxx_destruct] */

void FUN_108d0c43c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d0c490; end: 108d0c7ef; -[SCUnifiedCameraObjectFilterView initWithFrame:config:filterCarouselGroupName:ucoViewModelGenerator:sponsoredLensCTAViewProvider:sponsoredLensInfoActionSheetPreviewNavigator:previewCarouselPadding:lensPlusPreviewCTAProvider:previewABProvider:disableLoadingIndicator:infoViewHidden:lensReadyTrackerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d0c490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  puStack_a0 = PTR_PTR_1126fe560;
  puVar1 = &uStack_a8;
  uStack_a8 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame_config__1125e29f0,
                      param_8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277b068) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b06c) = param_15._1_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b070);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b070) = uVar2;
    _objc_release(uVar5);
    func_0x00010beb0de0(puVar1);
    uVar2 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b074);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b074) = uVar5;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11277b078;
    _objc_retain(param_11);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_11;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_11277b07c;
    _objc_retain(param_12);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b080) = param_5;
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b084);
    *(undefined **)((long)puVar1 + (long)_DAT_11277b084) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    lVar7 = (long)_DAT_11277b088;
    _objc_retain(param_13);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar5);
    uVar5 = param_8;
    func_0x00010c0e00e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c000();
    func_0x00010c1af280(puVar1);
    _objc_initWeak(auStack_b0,puVar1);
    _objc_copyWeak(auStack_b8,auStack_b0);
    func_0x00010c27e9e0();
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 108d0c7f0; end: 108d0c837;  */

void FUN_108d0c7f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb0e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0c838; end: 108d0c8e3; -[SCUnifiedCameraObjectFilterView startViewing] */

void FUN_108d0c838(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe560;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_startViewing_112672050);
  uVar2 = param_1;
  func_0x00010bfe84a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c40e0;
  _objc_opt_class(PTR_PTR_1126c40e0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    func_0x00010be664a0(param_1);
  }
  else {
    func_0x00010bec04a0();
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 108d0c8e4; end: 108d0c933; -[SCUnifiedCameraObjectFilterView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0c8e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11277b08c));
  puStack_28 = PTR_PTR_1126fe560;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d0c934; end: 108d0caa3; -[SCUnifiedCameraObjectFilterView updateImageProcessCommands:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0c934(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    uVar7 = param_3;
    if (uVar3 == 0) {
LAB_108d0ca58:
      _objc_release(uVar7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + (long)_DAT_11277b090),PTR_s_setHidden__1126479f8);
      return;
    }
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126c40e0;
      uVar7 = *(ulong *)(uVar8 * 8);
      _objc_retain(uVar7);
      _objc_opt_class(puVar4);
      uVar5 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      uVar1 = uVar7;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      if (uVar1 != 0) {
        _objc_release(param_3);
        func_0x00010bec04a0(param_1);
        goto LAB_108d0ca58;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    uVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108d0caa4; end: 108d0cab3; -[SCUnifiedCameraObjectFilterView setInfoViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0caa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b090),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108d0cab4; end: 108d0cbc7; -[SCUnifiedCameraObjectFilterView _startLoadingLensCommandV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cab4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      lVar4 = (long)_DAT_11277b068;
      _os_unfair_lock_lock(param_1 + lVar4);
      func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11277b08c));
      puVar2 = PTR_PTR_1126dbc08;
      _objc_alloc();
      func_0x00010c024240();
      lVar5 = (long)_DAT_11277b094;
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      func_0x00010c24f1e0(*(undefined8 *)(param_1 + _DAT_11277b098),param_2,
                          *(undefined8 *)(param_1 + lVar5));
      func_0x00010c18b5e0(param_3,param_2,param_1);
      lVar1 = param_3;
      func_0x00010c076b80();
      if ((int)lVar1 != 0) {
        func_0x00010c0dce60(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
      }
      _os_unfair_lock_unlock(param_1 + lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d0cbc8; end: 108d0cd07; -[SCUnifiedCameraObjectFilterView _observeLensReadyForFadeOutIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cbc8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + _DAT_11277b070) != 0) {
    lVar5 = (long)_DAT_11277b08c;
    lVar1 = *(long *)(param_1 + lVar5);
    if (lVar1 == 0) {
      _objc_initWeak(auStack_58,param_1);
      puVar2 = PTR_PTR_1126dbc10;
      _objc_alloc();
      puVar3 = puVar2;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0131c0();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      lVar1 = *(long *)(param_1 + lVar5);
    }
    func_0x00010c24d960(lVar1);
  }
  return;
}



/* Entry: 108d0cd08; end: 108d0cd3b;  */

void FUN_108d0cd08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0de40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0cd3c; end: 108d0cd6b; -[SCUnifiedCameraObjectFilterView _fadeAttributionForSnapEditor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cd3c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277b098) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11277b098),PTR_s_hideAttribution__1125d6010,1);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11277b09c) = 1;
  return;
}



/* Entry: 108d0cd6c; end: 108d0cd73; -[SCUnifiedCameraObjectFilterView hasImage] */

undefined8 FUN_108d0cd6c(void)

{
  return 0;
}



/* Entry: 108d0cd74; end: 108d0cdc3; -[SCUnifiedCameraObjectFilterView willStartDragging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cd74(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe560;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_willStartDragging_112687550);
  func_0x00010c235840(*(undefined8 *)(param_1 + _DAT_11277b098));
  return;
}



/* Entry: 108d0cdc4; end: 108d0ce17; -[SCUnifiedCameraObjectFilterView willEndDragging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cdc4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe560;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_willEndDragging_1126872f8);
  func_0x00010bfe24e0(*(undefined8 *)(param_1 + _DAT_11277b098));
  return;
}



/* Entry: 108d0ce18; end: 108d0ce97; -[SCUnifiedCameraObjectFilterView setUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0ce18(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe560;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setUserInteractionEnabled__112665468);
  if (lRam000000011372e4d8 != -1) {
    func_0x000107c27d9c(0x11372e4d8,&PTR___NSConcreteGlobalBlock_110ac2250);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277b090));
  return;
}



/* Entry: 108d0ce98; end: 108d0cec7; -[SCUnifiedCameraObjectFilterView ctaLayoutGuideObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0ce98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b084);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d0cec8; end: 108d0cf77; -[SCUnifiedCameraObjectFilterView _setupUcoInfoViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cec8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dbc18;
  _objc_opt_new();
  lVar3 = (long)_DAT_11277b090;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar3));
  if (lRam000000011372e4d8 != -1) {
    func_0x000107c27d9c(0x11372e4d8,&PTR___NSConcreteGlobalBlock_110ac2250);
  }
  if (*(char *)(param_1 + _DAT_11277b06c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 108d0cf78; end: 108d0d1bf; -[SCUnifiedCameraObjectFilterView _setupUcoInfoWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0cf78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar3 = param_3, func_0x00010c2339e0(), (int)lVar3 != 0)) {
    lVar3 = (long)_DAT_11277b0a0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126dbc20;
    _objc_alloc();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108d0d1c0;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0580c0();
    lVar3 = (long)_DAT_11277b098;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277b090));
    func_0x00010c14c940(*(undefined8 *)(param_1 + lVar3));
    if (*(char *)(param_1 + _DAT_11277b09c) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_11277b09c) = 0;
      func_0x00010bfe1940(*(undefined8 *)(param_1 + lVar3));
    }
    lVar3 = param_3;
    func_0x00010bf5d5a0();
    if (lVar3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11277b078);
      lVar3 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5d620(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_58);
      func_0x00010c297260(uVar1);
      _objc_release(uVar1);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_88);
    }
    else {
      lVar3 = param_3;
      func_0x00010bf5d5a0();
      if (lVar3 == 1) {
        func_0x00010bde52a0(param_1);
      }
    }
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108d0d1c0; end: 108d0d233;  */

void FUN_108d0d1c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0d234; end: 108d0d2af; -[SCUnifiedCameraObjectFilterView _didTapInfoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0d234(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277b0a0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bfed980();
  if (lVar1 == 1) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277b07c);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfadea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237e20(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108d0d2b0; end: 108d0d363; -[SCUnifiedCameraObjectFilterView _configureLensPlusCTAWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0d2b0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf5d5a0();
  if (lVar4 == 1) {
    lVar4 = (long)_DAT_11277b0a4;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c074c20();
    if (iVar1 == 0) {
      if (*(long *)(param_1 + lVar4) == 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_11277b088);
        func_0x00010bf5d600(uVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(undefined8 *)(param_1 + lVar4) = uVar2;
        _objc_release(uVar3);
        func_0x00010beab420(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
      }
    }
    else {
      func_0x00010c1a7f60(*(long *)(param_1 + lVar4),param_2,0);
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d0d364; end: 108d0d3eb; -[SCUnifiedCameraObjectFilterView _configureSponsoredCTAViewWithPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0d364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277b0a8);
  *(undefined8 *)(param_1 + _DAT_11277b0a8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11277b0ac;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  _objc_release(uVar1);
  func_0x00010beab420(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d0d3ec; end: 108d0d863; -[SCUnifiedCameraObjectFilterView _setupCTAView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108d0d3ec(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  _objc_retain(param_4);
  if (param_4 != (undefined *)0x0) {
    lVar28 = (long)_DAT_11277b098;
    func_0x00010befbb60(*(undefined8 *)(param_2 + lVar28),param_3,param_4);
    func_0x00010c219b60(param_4,param_3,0);
    puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_opt_new();
    lVar29 = (long)_DAT_11277b0b0;
    uVar26 = *(undefined8 *)(param_2 + lVar29);
    *(undefined **)(param_2 + lVar29) = puVar1;
    _objc_release(uVar26);
    func_0x00010bef9680(param_4,param_3,*(undefined8 *)(param_2 + lVar29));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar27 = param_4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar27;
    func_0x00010bf493a0(puVar27,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    puStack_b0 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -8.0 - *(double *)(param_2 + _DAT_11277b080);
    puVar6 = puVar4;
    func_0x00010bf493c0(puVar4,param_3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    puStack_a8 = puVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf49460(puVar7,param_3,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    puStack_a0 = puVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf49500(puVar10,param_3,uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + lVar29);
    puStack_98 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar13;
    func_0x00010bf493a0(uVar13,param_3,puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_2 + lVar29);
    uStack_90 = uVar26;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0(uVar15,param_3,puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + lVar29);
    uStack_88 = uVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_4;
    func_0x00010c08e400(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010bf493a0(uVar18,param_3,puVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_2 + lVar29);
    uStack_80 = uVar20;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_4;
    func_0x00010c1408a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar21;
    func_0x00010bf493a0(uVar21,param_3,puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_b0,8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_3,puVar24);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(puVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar26);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar27);
    uVar26 = *(undefined8 *)(param_2 + _DAT_11277b084);
    puVar27 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_3,*(undefined8 *)(param_2 + lVar29));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar27;
    func_0x00010c0d9840(uVar26,param_3,puVar27);
    _objc_release(puVar27);
    lVar28 = (long)_DAT_11277b0b4;
    _objc_retain(param_4);
    uVar26 = *(undefined8 *)(param_2 + lVar28);
    *(undefined **)(param_2 + lVar28) = param_4;
    _objc_release(uVar26);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  lVar28 = (long)_DAT_11277b0b4;
  if ((*(long *)(param_4 + lVar28) != 0) && (func_0x00010bf01b40(), 0.0 < param_1)) {
    uVar25 = *(ulong *)(param_4 + lVar28);
    func_0x00010c074c20();
    if ((uVar25 & 1) == 0) {
      func_0x00010c09ef00(puVar1,param_3,*(undefined8 *)(param_4 + lVar28));
      uVar25 = *(ulong *)(param_4 + lVar28);
      func_0x00010bf20c00();
      _CGRectContainsPoint();
      if ((uVar25 & 1) != 0) {
        puVar27 = (undefined *)0x1;
        goto LAB_108d0d8fc;
      }
    }
  }
  puVar27 = *(undefined **)(param_4 + _DAT_11277b098);
  func_0x00010c22e4e0(puVar27,param_3,puVar1);
LAB_108d0d8fc:
  _objc_release(puVar1);
  return puVar27;
}



/* Entry: 108d0d864; end: 108d0d91b; -[SCUnifiedCameraObjectFilterView shouldBlockGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d0d864(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11277b0b4;
  if ((*(long *)(param_2 + lVar3) != 0) && (func_0x00010bf01b40(), 0.0 < param_1)) {
    uVar1 = *(ulong *)(param_2 + lVar3);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      func_0x00010c09ef00(param_4,param_3,*(undefined8 *)(param_2 + lVar3));
      uVar1 = *(ulong *)(param_2 + lVar3);
      func_0x00010bf20c00();
      _CGRectContainsPoint();
      if ((uVar1 & 1) != 0) {
        uVar2 = 1;
        goto LAB_108d0d8fc;
      }
    }
  }
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277b098);
  func_0x00010c22e4e0(uVar2,param_3,param_4);
LAB_108d0d8fc:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 108d0d91c; end: 108d0d91f; -[SCUnifiedCameraObjectFilterView lensCommandDidApply:] */

void FUN_108d0d91c(void)

{
  return;
}



/* Entry: 108d0d920; end: 108d0d993; -[SCUnifiedCameraObjectFilterView lensCommandDidRender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0d920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = (long)_DAT_11277b068;
  _os_unfair_lock_lock(param_1 + lVar1);
  func_0x00010c0dce60(*(undefined8 *)(param_1 + _DAT_11277b094),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d0d994; end: 108d0db0b; -[SCUnifiedCameraObjectFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0d994(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b08c,0);
  _objc_storeStrong(param_1 + _DAT_11277b070,0);
  _objc_storeStrong(param_1 + _DAT_11277b084,0);
  _objc_storeStrong(param_1 + _DAT_11277b0b0,0);
  _objc_storeStrong(param_1 + _DAT_11277b0b4,0);
  _objc_storeStrong(param_1 + _DAT_11277b0a4,0);
  _objc_storeStrong(param_1 + _DAT_11277b088,0);
  _objc_storeStrong(param_1 + _DAT_11277b07c,0);
  _objc_storeStrong(param_1 + _DAT_11277b0a0,0);
  _objc_storeStrong(param_1 + _DAT_11277b0ac,0);
  _objc_storeStrong(param_1 + _DAT_11277b0a8,0);
  _objc_storeStrong(param_1 + _DAT_11277b078,0);
  _objc_storeStrong(param_1 + _DAT_11277b094,0);
  _objc_storeStrong(param_1 + _DAT_11277b074,0);
  _objc_storeStrong(param_1 + _DAT_11277b090,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b098,0);
  return;
}



/* Entry: 108d0db0c; end: 108d0e037; -[SCVenueFilterView initWithFrame:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d0db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_a8 = PTR_PTR_1126fe568;
  puVar1 = &uStack_b0;
  puVar14 = (undefined8 *)PTR_s_initWithFrame_config__1125e29f0;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame_config__1125e29f0,
                      param_7);
  if (puVar1 != (undefined8 *)0x0) {
    uVar16 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11277b0b8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 *)((long)puVar1 + lVar18) = uVar16;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277b0bc) = puVar2;
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar20 = (long)_DAT_11277b0c0;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar16);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc_init();
    lVar19 = (long)_DAT_11277b0c4;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar4;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf414e0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar6;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(uVar16);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar15 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bfcd9c0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,uVar15);
    func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,uVar15);
    func_0x00010c1a7d00(0x406ec00000000000,*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1677c0(0x3fe3333340000000,*(undefined8 *)((long)puVar1 + lVar19));
    puVar9 = puVar1;
    func_0x00010be5b920();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0c8);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277b0c8) = puVar9;
    _objc_release(uVar16);
    puVar9 = puVar1;
    func_0x00010be5b920();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0cc);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277b0cc) = puVar9;
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar19 = (long)_DAT_11277b0d0;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar9 = puVar1;
    func_0x00010be5bcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0d4);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277b0d4) = puVar9;
    _objc_release(uVar16);
    puVar9 = puVar1;
    func_0x00010be5bcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0d8);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277b0d8) = puVar9;
    _objc_release(uVar16);
    puVar9 = puVar1;
    func_0x00010be5bcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0dc);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277b0dc) = puVar9;
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar19));
    uVar10 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar10;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0e0) = uVar16;
    _objc_release(uVar17);
    _objc_release(uVar10);
    puVar11 = puVar1;
    func_0x00010c160fc0();
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    puVar9 = puVar11;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b0e4);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277b0e4) = puVar9;
    _objc_release(uVar16);
    _objc_release(puVar11);
    uVar12 = *(ulong *)((long)puVar1 + lVar18);
    func_0x00010c297dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf529e0();
    if (uVar13 < 2) {
      _objc_release(uVar12);
    }
    else {
      puVar9 = puVar1;
      func_0x00010beb0ac0();
      _objc_release(uVar12);
      if ((int)puVar9 != 0) {
        func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar20));
      }
    }
    _objc_release(uVar15);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c274130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_tooltipsProvider_11267aa70);
  return puVar14;
}



/* Entry: 108d0e038; end: 108d0e03f;  */

void FUN_108d0e038(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_tooltipsProvider_11267aa70);
  return;
}



/* Entry: 108d0e040; end: 108d0e2a7; -[SCVenueFilterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0e040(double param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5
                  )

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong uStack_70;
  undefined *puStack_68;
  
  uVar1 = param_5;
  func_0x00010be3e0e0();
  if ((uVar1 & 1) == 0) {
    puStack_68 = PTR_PTR_1126fe568;
    uStack_70 = param_5;
    _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_112600e60);
    func_0x00010c2a5040(param_5);
    dVar8 = param_1 * 0.2;
    func_0x00010c2a5040(param_5);
    lVar2 = (long)_DAT_11277b0c4;
    func_0x00010c2256c0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010c2bec60(*(undefined8 *)(param_5 + (long)_DAT_11277b0b8));
    if (param_1 == 0.0) {
      func_0x00010bfe0640(param_5);
      dVar9 = param_1;
      func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar2));
      func_0x00010bee32e0(param_1 + dVar9 * -0.95,param_5);
    }
    dVar8 = dVar8 * 0.5;
    func_0x00010beebe00(param_5);
    lVar4 = (long)_DAT_11277b0c0;
    func_0x00010c2172c0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010c202c80(param_3,param_4,*(undefined8 *)(param_5 + lVar4));
    lVar4 = (long)_DAT_11277b0d8;
    uVar1 = *(ulong *)(param_5 + lVar4);
    func_0x00010c074c20();
    lVar2 = (long)_DAT_11277b0d4;
    func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar2));
    if ((uVar1 & 1) == 0) {
      func_0x00010c2172c0(*(undefined8 *)(param_5 + lVar4));
      func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar4));
    }
    lVar5 = (long)_DAT_11277b0dc;
    func_0x00010c2172c0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar2));
    dVar9 = param_3;
    func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar5));
    dVar7 = dVar9;
    if (dVar9 <= param_3) {
      dVar7 = param_3;
    }
    func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar5));
    lVar3 = (long)_DAT_11277b0d0;
    dVar6 = dVar7;
    func_0x00010c202c80(dVar7,dVar9,*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf346a0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf34680(*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf34680(*(undefined8 *)(param_5 + lVar5));
    func_0x00010bf34680(*(undefined8 *)(param_5 + lVar2));
    func_0x00010c2a5040(param_5);
    dVar9 = ((dVar6 + dVar8 * -2.0 + -20.0) - dVar7) * 0.5;
    lVar2 = (long)_DAT_11277b0cc;
    func_0x00010c2256c0(dVar9,*(undefined8 *)(param_5 + lVar2));
    lVar4 = (long)_DAT_11277b0c8;
    func_0x00010c2256c0(dVar9,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c1ba100(dVar8,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c140820(*(undefined8 *)(param_5 + lVar4));
    dVar7 = dVar7 + dVar8 + 20.0;
    func_0x00010c1ba100(dVar7,*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf348c0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010c17a860(*(undefined8 *)(param_5 + lVar2));
    func_0x00010c17a860(dVar7,*(undefined8 *)(param_5 + lVar4));
    lVar2 = (long)_DAT_11277b0e8;
    if (*(long *)(param_5 + lVar2) != 0) {
      func_0x00010bf34680();
      func_0x00010c274140(*(undefined8 *)(param_5 + lVar3));
      func_0x00010c173440(dVar7 + -14.0,*(undefined8 *)(param_5 + lVar2));
    }
    func_0x00010bede720(param_5);
  }
  return;
}



/* Entry: 108d0e2a8; end: 108d0e66b; -[SCVenueFilterView _setupWithPlace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0e2a8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_108d0e648;
  func_0x00010c2a5040(param_2);
  lVar4 = param_4;
  func_0x00010c0c1c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
LAB_108d0e420:
    func_0x00010bddfe60(param_2);
  }
  else {
    lVar5 = (long)_DAT_11277b0bc;
    lVar2 = *(long *)(param_2 + lVar5);
    lVar4 = param_4;
    func_0x00010c0c1c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      lVar4 = param_2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c0c1c60(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c297d40(lVar4,param_3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar4);
      if (lVar2 == 0) goto LAB_108d0e420;
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      lVar4 = param_4;
      func_0x00010c0c1c60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_3,lVar2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = (long)_DAT_11277b0ec;
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(long *)(param_2 + lVar4) = lVar2;
    _objc_retain(lVar2);
    _objc_release(uVar3);
    func_0x00010c066fa0(param_2,param_3,lVar2,0);
    func_0x00010c190140(*(undefined8 *)(param_2 + lVar4),param_3,1);
    _objc_release(lVar2);
  }
  lVar4 = param_4;
  func_0x00010c0d4f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010be18ac0(param_1 * 0.5899999737739563,param_2,param_3,lVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010be46b00(param_2);
  func_0x00010c0c7340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010becb380(0,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar5 = param_4;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 == 0) {
    lVar5 = (long)_DAT_11277b0d8;
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar5),param_3,1);
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar5));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    lVar5 = param_4;
    func_0x00010c260dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar1,param_3,lVar5,lVar4);
    lVar6 = (long)_DAT_11277b0d8;
    func_0x00010c16b720(*(undefined8 *)(param_2 + lVar6),param_3,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar5);
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c2a5040(*(undefined8 *)(param_2 + _DAT_11277b0d4));
    func_0x00010c23d5a0(uVar3);
    func_0x00010c202c80(*(undefined8 *)(param_2 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar6),param_3,0);
    func_0x00010befbb60(*(undefined8 *)(param_2 + _DAT_11277b0d0),param_3,
                        *(undefined8 *)(param_2 + lVar6));
  }
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  lVar5 = param_4;
  func_0x00010c09e300(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_3,lVar5,lVar4);
  lVar6 = (long)_DAT_11277b0dc;
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar6),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar5);
  func_0x00010c23d5a0(param_1 * 0.5899999737739563,0x7fefffffffffffff,
                      *(undefined8 *)(param_2 + lVar6));
  func_0x00010c202c80(*(undefined8 *)(param_2 + lVar6));
  func_0x00010c1cbe20(param_2);
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297d80();
  _objc_release(param_2);
  _objc_release(lVar4);
  _objc_release(lVar2);
LAB_108d0e648:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108d0e66c; end: 108d0e6bb; -[SCVenueFilterView _clearBackgroundGeoFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0e66c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b0ec;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    func_0x00010c190140(*(undefined8 *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108d0e6bc; end: 108d0ea33; -[SCVenueFilterView _formatPlaceName:withMaxTextWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0e6bc(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  _objc_retain(param_7);
  func_0x00010be5de80(param_5);
  uVar8 = (ulong)dVar12;
  uVar9 = uVar8 * 5;
  lVar7 = 0;
  do {
    dVar13 = param_3;
    uVar9 = uVar9 - 5;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680((double)uVar8,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010becb380(0x3ff8000000000000,param_5,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(puVar1);
    func_0x00010bf20ba0(param_1,0x7fefffffffffffff,param_7,param_6,1,lVar6,0);
    dVar12 = (double)uVar9;
    param_3 = dVar13;
    if (param_4 <= dVar12) break;
    uVar8 = uVar8 - 1;
    func_0x00010be46b00(param_5);
    lVar7 = lVar6;
  } while (dVar12 <= (double)uVar8);
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  lVar7 = (long)_DAT_11277b0d4;
  func_0x00010c16b720(*(undefined8 *)(param_5 + lVar7),param_6,puVar1);
  _objc_release(puVar1);
  if (dVar13 <= param_1) {
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11277b0c8),param_6,0);
    iVar5 = 0;
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11277b0cc));
  }
  else {
    func_0x00010c2a5040(param_5);
    if (dVar12 * 0.800000011920929 < dVar13) {
      lVar2 = param_7;
      lStack_158 = lVar7;
      func_0x00010bf44740(param_7,param_6,&PTR____CFConstantStringClassReference_110db2db8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar7 = lVar2;
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(puVar1,param_6,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(lVar2);
      lVar7 = lVar2;
      func_0x00010bf52a60(lVar2,param_6,&uStack_150,auStack_110,0x10);
      if (lVar7 != 0) {
        lVar11 = *plStack_140;
        do {
          lVar10 = 0;
          do {
            if (*plStack_140 != lVar11) {
              _objc_enumerationMutation(lVar2);
            }
            func_0x00010bf20ba0(0x7fefffffffffffff,0x7fefffffffffffff,
                                *(undefined8 *)(lStack_148 + lVar10 * 8),param_6,1,lVar6,0);
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_6,puVar3);
            _objc_release(puVar3);
            lVar10 = lVar10 + 1;
          } while (lVar7 != lVar10);
          lVar7 = lVar2;
          func_0x00010bf52a60(lVar2,param_6,&uStack_150,auStack_110,0x10);
        } while (lVar7 != 0);
      }
      _objc_release(lVar2);
      func_0x00010bf446e0(lVar2,param_6,&PTR____CFConstantStringClassReference_110ef2878);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      _objc_release(lVar2);
      lVar7 = lStack_158;
    }
    param_1 = (double)(long)(dVar12 * 0.800000011920929);
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11277b0c8),param_6,1);
    iVar5 = 1;
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11277b0cc));
  }
  func_0x00010c23d5a0(param_1,0x7fefffffffffffff,*(undefined8 *)(param_5 + lVar7));
  func_0x00010c202c80(*(undefined8 *)(param_5 + lVar7));
  _objc_release(lVar6);
  lVar7 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_108d0ea34;
  lVar6 = (long)_DAT_11277b0e8;
  if (*(long *)(lVar7 + lVar6) != 0) {
    lStack_180 = param_5;
    lStack_178 = param_7;
    puStack_170 = &stack0xfffffffffffffff0;
    if (iVar5 == 0) {
      func_0x00010c12c960();
      uVar4 = *(undefined8 *)(lVar7 + lVar6);
      *(undefined8 *)(lVar7 + lVar6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108d0eaf0;
    puStack_190 = &UNK_110842e18;
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_108d0eb08;
    puStack_1b8 = &UNK_110841f20;
    lStack_1b0 = lVar7;
    lStack_188 = lVar7;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_1a8,
                        &puStack_1d0);
  }
  return;
}



/* Entry: 108d0ea34; end: 108d0eaef; -[SCVenueFilterView _dismissTooltipWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0ea34(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
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
  
  lVar2 = (long)_DAT_11277b0e8;
  if (*(long *)(param_1 + lVar2) != 0) {
    if (param_3 == 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108d0eaf0;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108d0eb08;
    puStack_58 = &UNK_110841f20;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                        &puStack_70);
  }
  return;
}



/* Entry: 108d0eaf0; end: 108d0eb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0eaf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b0e8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d0eb08; end: 108d0eb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0eb08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b0e8;
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0eb44; end: 108d0ec8f; -[SCVenueFilterView tap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0eb44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d0ec90;
  puStack_68 = &UNK_11098f8f8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277b0b8;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c297dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c297e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297d60(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 108d0ec90; end: 108d0eda7;  */

void FUN_108d0ec90(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c27dda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_68,param_2 + 0x20);
  uStack_60 = param_1;
  uStack_58 = param_4;
  func_0x00010c0c1400(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108d0eda8; end: 108d0efd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0eda8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126baaf0;
  _objc_alloc(PTR_PTR_1126baaf0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c060820(puVar1);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060820(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar7 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    uVar2 = *(undefined8 *)(lVar7 + _DAT_11277b0b8);
    func_0x00010c11f520(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1589c0(*(undefined8 *)(param_1 + 0x30),uVar2);
    func_0x00010beb1800(lVar7);
  }
  _objc_release(lVar7);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108d0efd4; end: 108d0efdb;  */

void FUN_108d0efd4(void)

{
  return;
}



/* Entry: 108d0efdc; end: 108d0efdf; -[SCVenueFilterView shouldRespondToTap:] */

void FUN_108d0efdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldRespondToTouchControl__11266a4c8);
  return;
}



/* Entry: 108d0efe0; end: 108d0f04f; -[SCVenueFilterView shouldRespondToTouchControl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108d0efe0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11277b0d0;
  func_0x00010c09ef00(param_5,param_4,*(undefined8 *)(param_3 + lVar2));
  dVar3 = -24.0;
  if ((param_2 < -24.0) ||
     (func_0x00010bfe0640(*(undefined8 *)(param_3 + lVar2)), dVar3 + 24.0 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108d0f050; end: 108d0f0cb; -[SCVenueFilterView pan:] */

void FUN_108d0f050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if ((lVar1 == 2) || (lVar1 = param_5, func_0x00010c252440(), lVar1 == 3)) {
    func_0x00010c27adc0(param_5,param_4,param_3);
    func_0x00010c0d18e0(param_2,param_3);
    func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_5,param_4,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108d0f0cc; end: 108d0f0cf; -[SCVenueFilterView rotation:] */

void FUN_108d0f0cc(void)

{
  return;
}



/* Entry: 108d0f0d0; end: 108d0f0d3; -[SCVenueFilterView pinch:] */

void FUN_108d0f0d0(void)

{
  return;
}



/* Entry: 108d0f0d4; end: 108d0f1d7; -[SCVenueFilterView setDisplayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar4 = (long)_DAT_11277b0e8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c074c20();
  if (iVar1 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c142960(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277b0e4);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1908e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c190140(*(undefined8 *)(param_1 + _DAT_11277b0ec));
  puStack_38 = PTR_PTR_1126fe568;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setDisplayed__112641a70,param_3);
  lVar4 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd47c0(param_1);
  func_0x00010c297d20(lVar4);
  _objc_release(lVar4);
  return;
}



/* Entry: 108d0f1d8; end: 108d0f2d3; -[SCVenueFilterView updateConfig:] */

void FUN_108d0f1d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_updateConfig__11267ebe8;
  puStack_38 = PTR_PTR_1126fe568;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010c220880(param_1);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c159620(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c297ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1589a0();
    _objc_release(uVar4);
    func_0x00010beb1800(param_1);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 108d0f2d4; end: 108d0f383; -[SCVenueFilterView drawScreenshotImageInCurrentContextWithRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  func_0x00010be03880(param_5,param_6,0);
  lVar1 = (long)_DAT_11277b0ec;
  func_0x00010bf89b80(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar1));
  puStack_48 = PTR_PTR_1126fe568;
  lStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_50,
                      PTR_s_drawScreenshotImageInCurrentCont_1125c0088);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 108d0f384; end: 108d0f3df; -[SCVenueFilterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_storeWeak(param_1 + _DAT_11277b0f0,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b0b8);
  func_0x00010c159620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb1800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0f3e0; end: 108d0f443; -[SCVenueFilterView selectedPlaceID] */

void FUN_108d0f3e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c159620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d0f444; end: 108d0f493; -[SCVenueFilterView selectedVenueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f444(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b0b8);
  func_0x00010c159620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d0f494; end: 108d0f4e3; -[SCVenueFilterView selectedVenueName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b0b8);
  func_0x00010c159620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d0f4e4; end: 108d0f4f3; -[SCVenueFilterView venueFilterArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b0b8),PTR_s_venueFilterIds_112683948);
  return;
}



/* Entry: 108d0f4f4; end: 108d0f503; -[SCVenueFilterView selectedVenueIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b0b8),PTR_s_selectedVenueIndex_112634320);
  return;
}



/* Entry: 108d0f504; end: 108d0f513; -[SCVenueFilterView selectedPlaceTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0f504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b0b8),PTR_s_selectedPlaceTag_112634180);
  return;
}



/* Entry: 108d0f514; end: 108d0f59b; -[SCVenueFilterView venueYOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108d0f514(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar2 = 0.0;
  if (param_1 != 0.0) {
    lVar1 = (long)_DAT_11277b0d0;
    func_0x00010bf20c00(0,*(undefined8 *)(param_2 + lVar1));
    func_0x00010bf513e0(param_2,param_3,*(undefined8 *)(param_2 + lVar1));
    _CGRectGetMinY();
    dVar3 = dVar2 + -60.0;
    func_0x00010becd940(param_2);
    dVar2 = (1.0 - dVar3 / dVar2) * 100.0;
  }
  return dVar2;
}



/* Entry: 108d0f59c; end: 108d0f5e3; -[SCVenueFilterView _totalHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108d0f59c(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bfe0640();
  dVar1 = param_1 + -120.0;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + _DAT_11277b0d0));
  return dVar1 - param_1;
}



/* Entry: 108d0f5e4; end: 108d0f5fb; -[SCVenueFilterView hasBackgroundFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d0f5e4(long param_1)

{
  return *(long *)(param_1 + _DAT_11277b0ec) != 0;
}


