/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b850410; end: 10b85041f; -[SIGHeader setUseNewAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850410(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794994) = param_3;
  return;
}



/* Entry: 10b850420; end: 10b85042f; -[SIGHeader headerItemViewCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b850420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127949c4);
}



/* Entry: 10b850430; end: 10b85044f; -[SIGHeader tooltipPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850430(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127949b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b850450; end: 10b85046f; -[SIGHeader delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850450(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127949c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b850470; end: 10b85048f; -[SIGHeader headerAssociateBackgroundDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850470(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127949c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b850490; end: 10b8504a3; -[SIGHeader setHeaderAssociateBackgroundDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850490(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127949c8,param_3);
  return;
}



/* Entry: 10b8504a4; end: 10b850597; -[SIGHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8504a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127949c8);
  _objc_destroyWeak(param_1 + _DAT_1127949c0);
  _objc_destroyWeak(param_1 + _DAT_1127949b8);
  _objc_storeStrong(param_1 + _DAT_1127949c4,0);
  _objc_storeStrong(param_1 + _DAT_1127949b0,0);
  _objc_storeStrong(param_1 + _DAT_1127949d0,0);
  _objc_storeStrong(param_1 + _DAT_1127949a0,0);
  _objc_storeStrong(param_1 + _DAT_112794998,0);
  _objc_storeStrong(param_1 + _DAT_1127949cc,0);
  _objc_storeStrong(param_1 + _DAT_1127949b4,0);
  _objc_storeStrong(param_1 + _DAT_1127949d4,0);
  _objc_storeStrong(param_1 + _DAT_1127949a8,0);
  _objc_storeStrong(param_1 + _DAT_1127949a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127949bc,0);
  return;
}



/* Entry: 10b850598; end: 10b8505a3; +[SIGHeaderWhiteGradient layerClass] */

void FUN_10b850598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1778);
  return;
}



/* Entry: 10b8505a4; end: 10b850703; -[SIGHeaderWhiteGradient traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_10b8505a4(undefined8 ***param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b4e0;
  ppuStack_68 = param_1;
  _objc_msgSendSuper2(&ppuStack_68,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(param_1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  pppuVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b850704;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_11270b4e8;
  pppuVar8 = &ppuStack_d8;
  ppuStack_d8 = pppuVar7;
  puStack_b0 = puVar6;
  puStack_a8 = puVar3;
  puStack_a0 = puVar4;
  puStack_98 = puVar2;
  puStack_90 = puVar1;
  ppuStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(pppuVar8,PTR_s_init_1125d9248);
  pppuVar7 = pppuVar8;
  if (pppuVar8 != (undefined8 ***)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c8 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(pppuVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c209760(0x3fe0000000000000,0,pppuVar8);
    func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  if ((*(byte *)((long)pppuVar7 + (long)_DAT_1127949d8) & 1) == 0) {
    pppuVar8 = &ppuStack_100;
    pcStack_e8 = FUN_10b850870;
    puStack_f8 = PTR_PTR_11270b4f0;
    ppuStack_100 = pppuVar7;
    ppuStack_f0 = &puStack_80;
    _objc_msgSendSuper2(&ppuStack_100,PTR_s_hitTest_withEvent__1125d6850);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    pppuVar8 = (undefined8 ***)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return pppuVar8;
}



/* Entry: 10b850704; end: 10b85086f; -[SIGHeaderWhiteGradientLayer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b850704(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b4e8;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar8 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar4;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c209760(0x3fe0000000000000,0,puVar1);
    func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  if ((*(byte *)((long)puVar8 + (long)_DAT_1127949d8) & 1) == 0) {
    ppuVar9 = &puStack_90;
    pcStack_78 = FUN_10b850870;
    puStack_88 = PTR_PTR_11270b4f0;
    puStack_90 = puVar8;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_90,PTR_s_hitTest_withEvent__1125d6850);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar9 = (undefined8 **)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar9;
}



/* Entry: 10b850870; end: 10b8508c3; -[SIGHeaderBackgroundView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850870(long param_1)

{
  long lStack_20;
  undefined *puStack_18;
  
  if ((*(byte *)(param_1 + _DAT_1127949d8) & 1) == 0) {
    puStack_18 = PTR_PTR_11270b4f0;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_hitTest_withEvent__1125d6850);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8508c4; end: 10b8509a3; -[SIGHeaderBackgroundView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b8508c4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  _objc_retain(param_7);
  lVar3 = (long)_DAT_1127949dc;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar3);
  func_0x00010c102b20(param_1,param_2);
  if (iVar1 == 0) {
    puStack_48 = PTR_PTR_11270b4f0;
    lStack_50 = param_5;
    _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_pointInside_withEvent__11261e4e8,param_7);
  }
  else if (*(char *)(param_5 + _DAT_1127949e4) == '\x01') {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    plVar2 = (long *)(ulong)(param_2 <= param_4 - *(double *)(param_5 + _DAT_1127949e8));
  }
  else {
    plVar2 = (long *)0x1;
  }
  _objc_release(param_7);
  return (undefined1 *)plVar2;
}



/* Entry: 10b8509a4; end: 10b8509b3; -[SIGHeaderBackgroundView contentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8509a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127949e8);
}



/* Entry: 10b8509b4; end: 10b8509c3; -[SIGHeaderBackgroundView showsSectionTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8509b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127949e4);
}



/* Entry: 10b8509c4; end: 10b8509d3; -[SIGHeaderBackgroundView isPassingThroughTouchEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8509c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127949d8);
}



/* Entry: 10b8509d4; end: 10b8509e3; -[SIGHeaderBackgroundView paddingHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8509d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127949ec);
}



/* Entry: 10b8509e4; end: 10b850a23; -[SIGHeaderBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8509e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127949dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127949e0,0);
  return;
}



/* Entry: 10b850a24; end: 10b850d0b; -[SIGHeaderBottomAccessoryRow initWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b850a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_11270b508;
  puVar16 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar16,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar16 != (undefined8 *)0x0) {
    lVar17 = (long)_DAT_1127949f0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar16 + lVar17);
    *(long *)((long)puVar16 + lVar17) = param_3;
    _objc_release(uVar2);
    lVar17 = param_3;
    func_0x00010bf1fee0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar16 + (long)_DAT_1127949f4);
    *(long *)((long)puVar16 + (long)_DAT_1127949f4) = lVar17;
    _objc_release(uVar2);
    _objc_retain(lVar17);
    func_0x00010c12c960(lVar17);
    func_0x00010c219b60(lVar17);
    func_0x00010befbb60(puVar16);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = lVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar17;
    lStack_88 = lVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar17;
    lStack_80 = lVar8;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar16;
    func_0x00010c08e400(puVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar17;
    lStack_78 = lVar11;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010c1408a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(lVar17);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(puVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar16 = *(undefined8 **)(param_3 + _DAT_1127949f4);
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar16,PTR_s_intrinsicContentSize_1125f8080);
  return puVar16;
}



/* Entry: 10b850d0c; end: 10b850d1b; -[SIGHeaderBottomAccessoryRow intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127949f4),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b850d1c; end: 10b850ebb; -[SIGHeaderBottomAccessoryRow performTransitionToHeaderItem:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127949f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  puVar3 = PTR_DAT_1126a5cc8;
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127949f4);
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x000107c318f8(uVar5,puVar3);
  uVar1 = uVar5;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar2 = param_3;
  func_0x00010bf1fee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfdfc20();
  _objc_release(uVar2);
  if ((int)uVar5 == 0) {
    func_0x00010bdf9200(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126df778;
    _objc_alloc(PTR_PTR_1126df778);
    func_0x00010c004160();
    lVar4 = (long)_DAT_1127949fc;
    _objc_storeWeak(param_1 + lVar4,puVar3);
    _objc_retain();
    uVar2 = param_3;
    func_0x00010bf1fee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c24dd00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34b60(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b850ebc; end: 10b851027; -[SIGHeaderBottomAccessoryRow _defaultBottomAcccessoryViewTransitionTo:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b850ebc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126df778;
  _objc_alloc(PTR_PTR_1126df778);
  func_0x00010c004160();
  _objc_storeWeak(param_1 + _DAT_1127949fc,puVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_4 == 0) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_1127949f4));
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10b851028;
    uStack_40 = 0x10b851038;
    uStack_38 = 0;
    _objc_retain(param_3);
    func_0x00010c0f9680(puVar1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_1127949f4));
    func_0x00010c1677c0(0x3ff0000000000000,puStack_58[5]);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b851028; end: 10b85103f;  */

void FUN_10b851028(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b851040; end: 10b8512bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b851040(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794a00);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794a00) = uVar2;
  _objc_release(uVar3);
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = uVar2;
  _objc_release(uVar3);
  func_0x00010c12c960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  func_0x00010c219b60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  iVar11 = (int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c069fa0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  lVar14 = 0;
  if (lVar4 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2793a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010beef8c0(puVar1);
    iVar11 = (int)puVar12;
    _objc_release(puVar10);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar14);
    _objc_release(uVar5);
    _objc_release(lVar4);
    lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  }
  func_0x00010c1677c0(0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 == 0) {
    lVar4 = (long)_DAT_112794a00;
    func_0x00010c12c960(*(undefined8 *)(lVar14 + lVar4));
    iVar11 = _DAT_1127949f4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar14 + _DAT_1127949f8);
    lVar4 = (long)_DAT_1127949f0;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar14 + lVar4);
    *(undefined8 *)(lVar14 + lVar4) = uVar3;
    _objc_release(uVar2);
    iVar11 = _DAT_1127949f4;
    lVar4 = (long)_DAT_112794a00;
    if (*(long *)(lVar14 + lVar4) != 0) {
      func_0x00010c12c960(*(undefined8 *)(lVar14 + _DAT_1127949f4));
      uVar3 = *(undefined8 *)(lVar14 + lVar4);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar14 + iVar11);
      *(undefined8 *)(lVar14 + iVar11) = uVar3;
      _objc_release(uVar2);
    }
  }
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar14 + iVar11));
  uVar2 = *(undefined8 *)(lVar14 + _DAT_1127949f8);
  *(undefined8 *)(lVar14 + _DAT_1127949f8) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar14 + lVar4);
  *(undefined8 *)(lVar14 + lVar4) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(lVar14 + _DAT_1127949fc,0);
  return;
}



/* Entry: 10b8512c0; end: 10b851397; -[SIGHeaderBottomAccessoryRow completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8512c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (param_3 == 0) {
    lVar3 = (long)_DAT_112794a00;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    iVar4 = _DAT_1127949f4;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127949f8);
    lVar3 = (long)_DAT_1127949f0;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar2;
    _objc_release(uVar1);
    iVar4 = _DAT_1127949f4;
    lVar3 = (long)_DAT_112794a00;
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_1127949f4));
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      _objc_retain(uVar2);
      uVar1 = *(undefined8 *)(param_1 + iVar4);
      *(undefined8 *)(param_1 + iVar4) = uVar2;
      _objc_release(uVar1);
    }
  }
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + iVar4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127949f8);
  *(undefined8 *)(param_1 + _DAT_1127949f8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127949fc,0);
  return;
}



/* Entry: 10b851398; end: 10b8513f7; -[SIGHeaderBottomAccessoryRow setOpacity:] */

void FUN_10b851398(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setHidden__1126479f8,param_1 < 2.220446049250313e-16);
  return;
}



/* Entry: 10b8513f8; end: 10b851407; -[SIGHeaderBottomAccessoryRow accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8513f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127949f4);
}



/* Entry: 10b851408; end: 10b851483; -[SIGHeaderBottomAccessoryRow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b851408(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127949f4,0);
  _objc_storeStrong(param_1 + _DAT_112794a00,0);
  _objc_storeStrong(param_1 + _DAT_112794a04,0);
  _objc_destroyWeak(param_1 + _DAT_1127949fc);
  _objc_storeStrong(param_1 + _DAT_1127949f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127949f0,0);
  return;
}



/* Entry: 10b851484; end: 10b8515bb;  */

undefined1  [16]
FUN_10b851484(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined *param_5
             ,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain();
  puVar1 = param_5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107c318fc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  func_0x00010bf20c00(puVar4);
  dVar5 = param_3;
  func_0x00010bf20c00(param_5);
  func_0x00010bf51460(param_5);
  _objc_release(param_5);
  if (param_6 == 0) {
    _CGRectGetMaxX(param_1,param_2,dVar5,param_4);
    param_1 = param_3 - param_1;
  }
  else {
    _CGRectGetMinX();
  }
  _objc_release(puVar4);
  auVar6._8_8_ = param_1 / param_3;
  auVar6._0_8_ = dVar5 / param_3;
  return auVar6;
}



/* Entry: 10b8515bc; end: 10b851643; -[SIGHeaderButton hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8515bc(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270b510;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar1 == (undefined1 **)param_1) ||
     (ppuVar1 == (undefined1 **)*(undefined1 **)(param_1 + _DAT_112794a08))) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b851644; end: 10b85167b; -[SIGHeaderButton pointInside:withEvent:] */

void FUN_10b851644(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 10b85167c; end: 10b8516c3; -[SIGHeaderButton item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85167c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794a08);
  func_0x00010c0840e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b8516c4; end: 10b8516fb; -[SIGHeaderButton setItem:] */

void FUN_10b8516c4(undefined8 param_1)

{
  func_0x00010c27aae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8516fc; end: 10b851a53; -[SIGHeaderButton transitionTo:withAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8516fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126df778;
  _objc_alloc();
  func_0x00010c004160();
  lVar6 = (long)_DAT_112794a10;
  _objc_storeWeak(param_1 + lVar6,puVar3);
  lVar7 = (long)_DAT_112794a08;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010bf2d080();
  if (iVar2 == 0) {
    lVar7 = (long)_DAT_112794a0c;
    if (*(long *)(param_1 + lVar7) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(undefined8 *)(param_1 + lVar7) = 0;
      _objc_release(uVar5);
    }
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_10b851a54;
    uStack_98 = 0x10b851a64;
    uStack_90 = 0;
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_10b851a54;
    uStack_c8 = 0x10b851a64;
    uStack_c0 = 0;
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_10b851a54;
    uStack_f8 = 0x10b851a64;
    uStack_f0 = 0;
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x3032000000;
    pcStack_130 = FUN_10b851a54;
    uStack_128 = 0x10b851a64;
    uStack_120 = 0;
    puStack_170 = &uStack_178;
    uStack_178 = 0;
    uStack_168 = 0x3032000000;
    pcStack_160 = FUN_10b851a54;
    uStack_158 = 0x10b851a64;
    uStack_150 = 0;
    _objc_retain(param_3);
    func_0x00010c0f9680(puVar1);
    FUN_10b851484(param_1,param_4 == 2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf02ee0(puVar1);
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_178,8);
    _objc_release(uStack_150);
    __Block_object_dispose(&uStack_148,8);
    _objc_release(uStack_120);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
  }
  else {
    lVar4 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c27aae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34b60(lVar4);
    _objc_release(uVar5);
    _objc_release(lVar4);
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b851a54; end: 10b851a6b;  */

void FUN_10b851a54(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b851a6c; end: 10b852407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b851a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e1790;
  _objc_alloc();
  func_0x00010c01fc40();
  uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_112794a14);
  *(undefined **)(*(long *)(param_4 + 0x20) + (long)_DAT_112794a14) = puVar1;
  _objc_release(uVar2);
  lVar11 = *(long *)(*(long *)(param_4 + 0x30) + 8);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28),param_5,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar12 = (long)_DAT_112794a08;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12));
  func_0x00010c013de0();
  lStack_108 = (long)_DAT_112794a18;
  uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x20) + lStack_108);
  *(undefined **)(*(long *)(param_4 + 0x20) + lStack_108) = puVar1;
  _objc_release(uVar2);
  lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28),param_5,0);
  func_0x00010c17d4c0(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28),param_5,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12));
  func_0x00010c013de0();
  lStack_110 = (long)_DAT_112794a1c;
  uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x20) + lStack_110);
  *(undefined **)(*(long *)(param_4 + 0x20) + lStack_110) = puVar1;
  _objc_release(uVar2);
  lVar11 = *(long *)(*(long *)(param_4 + 0x40) + 8);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28),param_5,0);
  func_0x00010c17d4c0(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28),param_5,1);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x20));
  uVar2 = uVar3;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_4 + 0x48) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar2;
  _objc_release(uVar10);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_4 + 0x50) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar2;
  _objc_release(uVar10);
  _objc_release(uVar3);
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12));
  func_0x00010befbb60(*(undefined8 *)(param_4 + 0x20),param_5,
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28));
  func_0x00010befbb60(*(undefined8 *)(param_4 + 0x20),param_5,
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28));
  func_0x00010befbb60(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28),param_5,
                      *(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12));
  func_0x00010befbb60(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28),param_5,
                      *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28));
  puStack_158 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  uStack_120 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar2;
  func_0x00010bf493a0(uVar3,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
  puStack_130 = (undefined *)uVar3;
  uStack_c0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  uStack_138 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = uVar2;
  func_0x00010bf493a0(uVar10,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28);
  uStack_148 = uVar10;
  uStack_b8 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
  uStack_150 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar2;
  func_0x00010bf493a0(uVar3,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12);
  uStack_168 = uVar3;
  uStack_b0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
  uStack_170 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar2;
  func_0x00010bf493a0(uVar10,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x48) + 8) + 0x28);
  uStack_98 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x50) + 8) + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12);
  uStack_180 = uVar10;
  uStack_a8 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x20));
  uVar2 = uVar4;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28);
  uStack_90 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x20));
  uVar3 = uVar5;
  func_0x00010bf49420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
  uStack_88 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar12;
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar12));
  uVar10 = uVar6;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
  uStack_80 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28));
  uVar8 = uVar7;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_c0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_158,param_5,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(puStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28);
  if (*(long *)(param_4 + 0x58) == 2) {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar3;
    uStack_120 = uVar2;
    func_0x00010bf493a0(uVar2,param_5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
    uStack_138 = uVar2;
    uStack_e0 = uVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c08e400(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar8;
    func_0x00010bf493a0(uVar8,param_5,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x20) + lStack_118);
    uStack_d8 = uVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
    func_0x00010c1408a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0(uVar4,param_5,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
    uStack_d0 = uVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c1408a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493a0(uVar6,param_5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_e0;
    uStack_c8 = uVar3;
  }
  else {
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar3;
    uStack_120 = uVar2;
    func_0x00010bf493a0(uVar2,param_5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x28);
    uStack_138 = uVar2;
    uStack_100 = uVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c1408a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar8;
    func_0x00010bf493a0(uVar8,param_5,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x20) + lStack_118);
    uStack_f8 = uVar8;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
    func_0x00010c08e400(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0(uVar4,param_5,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x28);
    uStack_f0 = uVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c08e400(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493a0(uVar6,param_5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_100;
    uStack_e8 = uVar3;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,puVar9,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_130,param_5,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  func_0x00010c08cdc0(*(undefined8 *)(param_4 + 0x20));
  func_0x00010c08cdc0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lStack_110));
  lVar11 = *(long *)(*(long *)(param_4 + 0x20) + lStack_108);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10b852408;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_10b852474;
  puStack_1b0 = &UNK_110876070;
  uStack_1a0 = *(undefined8 *)(lVar11 + 0x28);
  uStack_1a8 = *(undefined8 *)(lVar11 + 0x20);
  uStack_198 = *(undefined8 *)(lVar11 + 0x30);
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010bef95a0(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x38),
                      PTR__OBJC_CLASS___UIView_1126aec20,param_5,&puStack_1c8);
  return;
}



/* Entry: 10b852408; end: 10b852473;  */

void FUN_10b852408(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b852474;
  puStack_30 = &UNK_110876070;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef95a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  return;
}



/* Entry: 10b852474; end: 10b8524eb;  */

/* WARNING: Possible PIC construction at 0x00010b8524b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8524bc) */

void FUN_10b852474(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x20));
  func_0x00010c181140(param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x28) + 8) + 0x28));
  func_0x00010c181140(0,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b8524ec; end: 10b852727; -[SIGHeaderButton completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b8524ec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112794a14;
  lVar10 = (long)_DAT_112794a08;
  uVar1 = *(ulong *)(param_1 + lVar10);
  if (*(long *)(param_1 + lVar11) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeTransition__1125ae898,param_3);
      return uVar1;
    }
  }
  else {
    func_0x00010c12c960();
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar11));
    if ((int)param_3 != 0) {
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      _objc_retain(uVar9);
      uVar2 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar9;
      _objc_release(uVar2);
    }
    func_0x00010befbb60(param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf348e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112794a0c;
    uVar8 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar6;
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(lVar10);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(uVar3);
    param_3 = *(long *)(param_1 + lVar12);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar10 = (long)_DAT_112794a1c;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar10));
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_112794a18;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar10));
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0;
    _objc_release(uVar2);
    uVar1 = *(ulong *)(param_1 + lVar11);
    *(undefined8 *)(param_1 + lVar11) = 0;
    _objc_release(uVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return uVar1;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar6 = PTR_PTR_1126c5140;
  _objc_opt_class(PTR_PTR_1126c5140);
  lVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  _objc_release(param_3);
  return (ulong)((uint)(param_3 != 0) & (uint)lVar7);
}



/* Entry: 10b852728; end: 10b852783; -[SIGHeaderButton headerItemViewCanTransitionInPlaceTo:] */

uint FUN_10b852728(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5140;
  _objc_opt_class(PTR_PTR_1126c5140);
  lVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)(param_3 != 0) & (uint)lVar2;
}



/* Entry: 10b852784; end: 10b85283f; -[SIGHeaderButton startAnimationForTransitionTo:style:] */

void FUN_10b852784(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5140;
  _objc_opt_class(PTR_PTR_1126c5140);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27aae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b852840; end: 10b8528bb; -[SIGHeaderButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b852840(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112794a10);
  _objc_storeStrong(param_1 + _DAT_112794a0c,0);
  _objc_storeStrong(param_1 + _DAT_112794a1c,0);
  _objc_storeStrong(param_1 + _DAT_112794a18,0);
  _objc_storeStrong(param_1 + _DAT_112794a14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794a08,0);
  return;
}



/* Entry: 10b8528bc; end: 10b85296b; -[SIGHeaderButtonBadge copyWithZone:] */

undefined * FUN_10b8528bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c2fb0;
  _objc_alloc(PTR_PTR_1126c2fb0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar2);
  func_0x00010bfffba0(puVar1,param_2,uVar3,uVar4,uVar2);
  _objc_release(uVar2);
  func_0x00010c1b1a80(puVar1,param_2,*(undefined1 *)(param_1 + 0x10));
  func_0x00010c213180(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c160fc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c161020(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c21daa0(puVar1,param_2,*(undefined1 *)(param_1 + 0x11));
  return puVar1;
}



/* Entry: 10b85296c; end: 10b8529f3; -[SIGHeaderButtonBadge isEqual:] */

undefined8 FUN_10b85296c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2fb0;
  _objc_opt_class(PTR_PTR_1126c2fb0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c071bc0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b8529f4; end: 10b852a93; -[SIGHeaderButtonBadge isEqualToButtonBadge:] */

bool FUN_10b8529f4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (((param_3 != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
     (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(param_3 + 0x38));
    if ((((int)uVar2 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
       (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) {
      bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      goto LAB_10b852a7c;
    }
  }
  bVar1 = false;
LAB_10b852a7c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b852a94; end: 10b852ae7; -[SIGHeaderButtonBadge setStyle:] */

void FUN_10b852a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b852ae8;
  puStack_20 = &UNK_110d62a20;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b852ae8; end: 10b852b87;  */

void FUN_10b852ae8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonBadge_didChangeStlye_1125d5620);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf180(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b852b88; end: 10b852c1b; -[SIGHeaderButtonBadge setText:] */

void FUN_10b852b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b852c1c;
  puStack_40 = &UNK_110d62a20;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b852c1c; end: 10b852cbb;  */

void FUN_10b852c1c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonBadge_didChangeText__1125d5628);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf1a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b852cbc; end: 10b852cc3; -[SIGHeaderButtonBadge setAccessibilityIdentifier:] */

void FUN_10b852cbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b852cc4; end: 10b852ccb; -[SIGHeaderButtonBadge setAccessibilityLabel:] */

void FUN_10b852cc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b852ccc; end: 10b852d13; -[SIGHeaderButtonBadge .cxx_destruct] */

void FUN_10b852ccc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b852d14; end: 10b852d87; -[SIGHeaderButtonGroup hitTest:withEvent:] */

void FUN_10b852d14(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270b520;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b852d88; end: 10b852dbf; -[SIGHeaderButtonGroup pointInside:withEvent:] */

void FUN_10b852d88(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 10b852dc0; end: 10b852dc3; -[SIGHeaderButtonGroup _temporaryButtonSelector] */

void FUN_10b852dc0(void)

{
  return;
}



/* Entry: 10b852dc4; end: 10b852f9b; -[SIGHeaderButtonGroup _transitionButtonsToEmptyState:animationContext:animationStyle:] */

void FUN_10b852dc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar4 = &uStack_140;
  puVar5 = auStack_f0;
  uVar6 = 0x10;
  lVar1 = param_3;
  lStack_150 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar4);
  lVar7 = param_4;
  if (lVar1 != 0) {
    param_3 = *plStack_130;
    do {
      unaff_x24 = PTR_s__temporaryButtonSelector_112548570;
      lVar7 = 0;
      do {
        if (*plStack_130 != param_3) {
          _objc_enumerationMutation(lStack_150);
        }
        unaff_x25 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        unaff_x26 = PTR_PTR_1126c2d78;
        _objc_alloc();
        func_0x00010c01ae60();
        puVar2 = PTR_PTR_1126c2d70;
        _objc_alloc_init(PTR_PTR_1126c2d70);
        func_0x00010c20eaa0();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_f8 = unaff_x26;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d5fe0(puVar2,param_2,puVar3);
        _objc_release(puVar3);
        func_0x00010c27aae0(unaff_x25,param_2,puVar2,uStack_148);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf34b60(param_4,param_2,unaff_x25);
        _objc_release(unaff_x25);
        _objc_release(puVar2);
        _objc_release(unaff_x26);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = &uStack_140;
      puVar5 = auStack_f0;
      uVar6 = 0x10;
      lVar1 = lStack_150;
      func_0x00010bf52a60(lStack_150,param_2,puVar4);
      unaff_x23 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  lVar1 = lStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10b852f9c;
  puStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  uStack_188 = unaff_x23;
  uStack_180 = param_1;
  lStack_178 = param_4;
  lStack_170 = lVar7;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(puVar4);
  _objc_opt_new();
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_10b8530d8;
  puStack_1d8 = &UNK_110d62a50;
  lStack_1d0 = lVar1;
  uStack_1c8 = param_7;
  puStack_1c0 = puVar2;
  uStack_1b8 = param_6;
  puStack_1b0 = puVar5;
  uStack_1a8 = uVar6;
  _objc_retain(puVar5);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  _objc_retain(param_7);
  func_0x00010bf97e80(puVar4,param_2,&puStack_1f0);
  _objc_release(puVar4);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar2);
  _objc_release(puStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(puStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b852f9c; end: 10b8530d7; -[SIGHeaderButtonGroup _createEmptyButtonsToTransitionToUsingButtonItems:animationContext:animationStyle:currentButtons:temporaryButtons:] */

void FUN_10b852f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b8530d8;
  puStack_88 = &UNK_110d62a50;
  uStack_80 = param_1;
  uStack_78 = param_7;
  puStack_70 = puVar1;
  uStack_68 = param_6;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(puVar1);
  _objc_retain(param_7);
  func_0x00010bf97e80(param_3,param_2,&puStack_a0);
  _objc_release(param_3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b8530d8; end: 10b853343;  */

void FUN_10b8530d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c2d78;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010c01ae60();
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126c2d70;
  _objc_alloc_init();
  func_0x00010c1a9680(puVar2);
  func_0x00010c20eaa0(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5fe0(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10b853344;
  uStack_60 = 0x10b853354;
  uStack_58 = 0;
  _objc_retain(puVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  func_0x00010c0f9680(puVar3);
  uVar5 = puStack_78[5];
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c27aae0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34b60(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 10b853344; end: 10b85335b;  */

void FUN_10b853344(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b85335c; end: 10b853553;  */

void FUN_10b85335c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c5140;
  _objc_alloc();
  func_0x00010c01fc40();
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28),param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    if (lVar4 == 0) {
      func_0x00010bde6660(0x4020000000000000,uVar6,param_2,uVar5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,uVar6);
      goto LAB_10b853490;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bde6660(0x4020000000000000,uVar6,param_2,uVar5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = uVar2;
LAB_10b853490:
  _objc_release(uVar6);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  func_0x00010c274200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10b853554; end: 10b85363f; -[SIGHeaderButtonGroup _constraintForButton:anchorView:constant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b853554(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_2 + _DAT_112794a5c);
  _objc_retain(param_5);
  uVar2 = param_5;
  if (cVar1 == '\x01') {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    param_1 = -param_1;
  }
  else {
    func_0x00010c08de00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  uVar3 = param_4;
  func_0x00010bf493c0(param_1,param_4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b853640; end: 10b8536f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b853640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c27aae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x28) + (long)_DAT_112794a60;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf34b60();
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b8536f4; end: 10b853703; -[SIGHeaderButtonGroup trailingAligned] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8536f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794a5c);
}



/* Entry: 10b853704; end: 10b85370f; -[SIGHeaderButtonGroup setButtonItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b853704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b853710; end: 10b853797; -[SIGHeaderButtonGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b853710(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794a4c,0);
  _objc_destroyWeak(param_1 + _DAT_112794a60);
  _objc_destroyWeak(param_1 + _DAT_112794a54);
  _objc_storeStrong(param_1 + _DAT_112794a6c,0);
  _objc_storeStrong(param_1 + _DAT_112794a58,0);
  _objc_storeStrong(param_1 + _DAT_112794a68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794a50,0);
  return;
}



/* Entry: 10b853798; end: 10b85393f; -[SIGHeaderButtonItem copyWithZone:] */

undefined * FUN_10b853798(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126c2d70;
  _objc_alloc_init();
  func_0x00010c20eaa0();
  func_0x00010c213a60(puVar4);
  func_0x00010c1882a0(puVar4);
  func_0x00010c188e60(puVar4);
  func_0x00010c188e80(puVar4);
  func_0x00010c169be0(puVar4);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar10);
  lVar7 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar5 = *(undefined8 *)(lVar12 * 8);
      func_0x00010bf51e00(uVar5);
      func_0x00010befa120(puVar11);
      _objc_release(uVar5);
      lVar12 = lVar12 + 1;
    } while (lVar7 != lVar12);
    lVar7 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar8 = puVar11;
  func_0x00010c1d5fe0(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  if (puVar11 == puVar8) {
    puVar11 = (undefined *)0x1;
    goto LAB_10b853a58;
  }
  puVar4 = PTR_PTR_1126c2d70;
  _objc_opt_class(PTR_PTR_1126c2d70);
  puVar6 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar4);
  puVar4 = puVar8;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 == (undefined *)0x0) {
LAB_10b853a4c:
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar7 = *(long *)(puVar11 + 0x20);
    if (((lVar7 == *(long *)(puVar8 + 0x20)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
       ((lVar7 = *(long *)(puVar11 + 0x28), lVar7 == *(long *)(puVar8 + 0x28) ||
        (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
      lVar7 = *(long *)(puVar11 + 0x30);
      if (lVar7 == *(long *)(puVar8 + 0x30)) {
        uVar2 = 1;
      }
      else {
        func_0x00010c071ae0();
        uVar2 = (uint)lVar7;
      }
    }
    else {
      uVar2 = 0;
    }
    lVar7 = *(long *)(puVar11 + 0x38);
    if (lVar7 == *(long *)(puVar8 + 0x38)) {
      uVar3 = 1;
    }
    else {
      func_0x00010c071b60();
      uVar3 = (uint)lVar7;
    }
    if ((*(long *)(puVar11 + 0x10) != *(long *)(puVar8 + 0x10)) ||
       (*(long *)(puVar11 + 0x18) != *(long *)(puVar8 + 0x18))) goto LAB_10b853a4c;
    puVar11 = (undefined *)(ulong)((uint)(puVar11[8] == puVar8[8]) & uVar2 & uVar3);
  }
  _objc_release(puVar4);
LAB_10b853a58:
  _objc_release(puVar8);
  return puVar11;
}



/* Entry: 10b853940; end: 10b853a73; -[SIGHeaderButtonItem isEqual:] */

uint FUN_10b853940(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
    goto LAB_10b853a58;
  }
  puVar4 = PTR_PTR_1126c2d70;
  _objc_opt_class(PTR_PTR_1126c2d70);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_10b853a4c:
    uVar2 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
      lVar6 = *(long *)(param_1 + 0x28);
      if ((lVar6 != *(long *)(param_3 + 0x28)) && (func_0x00010c071ae0(), (int)lVar6 == 0))
      goto LAB_10b8539e8;
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 == *(long *)(param_3 + 0x30)) {
        uVar2 = 1;
      }
      else {
        func_0x00010c071ae0();
        uVar2 = (uint)lVar6;
      }
    }
    else {
LAB_10b8539e8:
      uVar2 = 0;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == *(long *)(param_3 + 0x38)) {
      uVar3 = 1;
    }
    else {
      func_0x00010c071b60();
      uVar3 = (uint)lVar6;
    }
    if ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10)) ||
       (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) goto LAB_10b853a4c;
    uVar2 = (uint)(*(char *)(param_1 + 8) == *(char *)(param_3 + 8)) & uVar2 & uVar3;
  }
  _objc_release(uVar1);
LAB_10b853a58:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b853a74; end: 10b853af7; -[SIGHeaderButtonItem hash] */

long FUN_10b853a74(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10) * 0x1f;
  bVar1 = *(byte *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfde980(lVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bfde980(lVar3);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bfde980(lVar4);
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x00010bfde980(lVar5);
  return lVar5 + (lVar4 + (lVar3 + (lVar2 + (((ulong)bVar1 - lVar6) + lVar6 * 0x20) * 0x1f) * 0x1f)
                          * 0x1f) * 0x1f + 0x6ce5f3facf;
}



/* Entry: 10b853af8; end: 10b853b27; -[SIGHeaderButtonItem setCustomBackgroundColor:] */

void FUN_10b853af8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b853b28; end: 10b853b57; -[SIGHeaderButtonItem setCustomTintColor:] */

void FUN_10b853b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b853b58; end: 10b853b87; -[SIGHeaderButtonItem setCustomTintColorWhenBadged:] */

void FUN_10b853b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b853b88; end: 10b853bcf; -[SIGHeaderButtonItem .cxx_destruct] */

void FUN_10b853b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b853bd0; end: 10b853c07; -[SIGHeaderButtonItemView pointInside:withEvent:] */

void FUN_10b853bd0(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 10b853c08; end: 10b853e3f; -[SIGHeaderButtonItemView _applyConfiguration:withAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b853c08(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + _DAT_112794aa4) = param_4;
  uVar9 = param_3;
  func_0x00010c25dfa0();
  *(ulong *)(param_1 + _DAT_112794aa8) = uVar9;
  uVar9 = param_3;
  func_0x00010c26cfe0();
  *(ulong *)(param_1 + _DAT_112794aac) = uVar9;
  puVar1 = PTR_PTR_1126df778;
  _objc_alloc();
  func_0x00010c004160();
  lVar8 = (long)_DAT_112794ab0;
  _objc_storeWeak(param_1 + lVar8);
  uVar9 = param_3;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  if (uVar2 != 0) {
    uVar9 = 0;
    lVar7 = (long)_DAT_112794a9c;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0ec860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar5 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bfb1940(uVar3);
      func_0x00010c089880(uVar3);
      func_0x00010c25dfa0(param_3);
      func_0x00010c26cfe0(param_3);
      uVar6 = uVar3;
      func_0x00010c24dce0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34b60(lVar5);
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar9 = uVar9 + 1;
      uVar2 = param_3;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
    } while (uVar9 < uVar4);
  }
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b853e40; end: 10b853e53; -[SIGHeaderButtonItemView completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b853e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794ab0,0);
  return;
}



/* Entry: 10b853e54; end: 10b853ff3; -[SIGHeaderButtonItemView setExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b853e54(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = (uint)param_3;
  if (*(byte *)(param_1 + (long)_DAT_112794aa0) == uVar11) {
    lVar19 = 8;
    if (uVar11 == 0) {
      lVar19 = 4;
    }
    lVar15 = 4;
    if (uVar11 == 0) {
      lVar15 = 8;
    }
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + (long)*(int *)(&DAT_112794a90 + lVar19)));
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + (long)*(int *)(&DAT_112794a90 + lVar15)));
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar15 = *(long *)(param_1 + (long)_DAT_112794a9c);
    _objc_retain(lVar15);
    lVar19 = lVar15;
    func_0x00010bf52a60();
    if (lVar19 != 0) {
      lVar17 = *plStack_120;
      do {
        lVar18 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(lVar15);
          }
          uVar16 = *(undefined8 *)(lStack_128 + lVar18 * 8);
          uVar2 = uVar16;
          func_0x00010c0ec1e0();
          _objc_retainAutoreleasedReturnValue();
          if (((ulong)param_3 & 1) == 0) {
            uVar13 = uVar2;
            func_0x00010c075900(uVar2);
          }
          else {
            uVar13 = 0;
          }
          func_0x00010c1a7f60(uVar16,param_2,uVar13);
          _objc_release(uVar2);
          lVar18 = lVar18 + 1;
        } while (lVar19 != lVar18);
        lVar19 = lVar15;
        puVar12 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar19 != 0);
    }
    _objc_release(lVar15);
    func_0x00010c069fa0();
    param_3 = (undefined1 *)puVar12;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar19 = (long)_DAT_112794a90;
  puVar3 = *(undefined1 **)(param_1 + lVar19);
  func_0x00010bf61240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf61240();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == puVar4) ||
     (puVar5 = puVar3, func_0x00010c071ae0(puVar3,param_2,puVar4), ((ulong)puVar5 & 1) != 0)) {
    puVar6 = *(undefined1 **)(param_1 + lVar19);
    func_0x00010bf62980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf62980();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar6 != puVar5) &&
       (puVar7 = puVar6, func_0x00010c071ae0(puVar6,param_2,puVar5), (int)puVar7 == 0)) {
LAB_10b8541a4:
      _objc_release(puVar5);
      _objc_release(puVar6);
      goto LAB_10b8541b4;
    }
    puVar8 = *(undefined1 **)(param_1 + lVar19);
    func_0x00010bf629a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bf629a0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar8 != puVar7) &&
       (puVar9 = puVar8, func_0x00010c071ae0(puVar8,param_2,puVar7), (int)puVar9 == 0)) {
      _objc_release(puVar7);
      _objc_release(puVar8);
      goto LAB_10b8541a4;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + lVar19);
    func_0x00010bf08300();
    puVar9 = param_3;
    func_0x00010bf08300();
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (iVar1 == (int)puVar9) {
      uVar10 = *(ulong *)(param_1 + lVar19);
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010c0ec860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar10;
      func_0x00010c071b60(uVar10,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar10);
      if ((uVar14 & 1) != 0) {
        uVar14 = 1;
        goto LAB_10b8541c8;
      }
      puVar6 = *(undefined1 **)(param_1 + lVar19);
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010bf529e0();
      puVar3 = param_3;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      _objc_release(puVar6);
      if ((puVar4 == puVar5) && ((*(byte *)(param_1 + (long)_DAT_112794aa0) & 1) == 0)) {
        uVar14 = *(ulong *)(param_1 + lVar19);
        FUN_10b854270();
        if ((uVar14 & 1) == 0) {
          puVar4 = param_3;
          FUN_10b854270(param_3);
          uVar14 = (ulong)((uint)puVar4 ^ 1);
          goto LAB_10b8541c8;
        }
      }
    }
  }
  else {
LAB_10b8541b4:
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uVar14 = 0;
LAB_10b8541c8:
  _objc_release(param_3);
  return uVar14;
}



/* Entry: 10b853ff4; end: 10b85426f; -[SIGHeaderButtonItemView canPerformUpdateWithoutTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10b853ff4(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112794a90;
  uVar2 = *(ulong *)(param_1 + lVar10);
  func_0x00010bf61240();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf61240();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 == uVar8) ||
     (uVar7 = uVar2, func_0x00010c071ae0(uVar2,param_2,uVar8), (uVar7 & 1) != 0)) {
    uVar3 = *(ulong *)(param_1 + lVar10);
    func_0x00010bf62980();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf62980();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 != uVar7) &&
       (uVar4 = uVar3, func_0x00010c071ae0(uVar3,param_2,uVar7), (int)uVar4 == 0)) {
LAB_10b8541a4:
      _objc_release(uVar7);
      _objc_release(uVar3);
      goto LAB_10b8541b4;
    }
    uVar5 = *(ulong *)(param_1 + lVar10);
    func_0x00010bf629a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf629a0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar5 != uVar4) &&
       (uVar6 = uVar5, func_0x00010c071ae0(uVar5,param_2,uVar4), (int)uVar6 == 0)) {
      _objc_release(uVar4);
      _objc_release(uVar5);
      goto LAB_10b8541a4;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
    func_0x00010bf08300();
    uVar6 = param_3;
    func_0x00010bf08300();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar2);
    if (iVar1 == (int)uVar6) {
      uVar7 = *(ulong *)(param_1 + lVar10);
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0ec860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c071b60(uVar7,param_2,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((uVar2 & 1) != 0) {
        uVar9 = 1;
        goto LAB_10b8541c8;
      }
      uVar3 = *(ulong *)(param_1 + lVar10);
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf529e0();
      uVar2 = param_3;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      _objc_release(uVar3);
      if ((uVar8 == uVar7) && ((*(byte *)(param_1 + _DAT_112794aa0) & 1) == 0)) {
        uVar8 = *(ulong *)(param_1 + lVar10);
        FUN_10b854270();
        if ((uVar8 & 1) == 0) {
          uVar8 = param_3;
          FUN_10b854270(param_3);
          uVar9 = (uint)uVar8 ^ 1;
          goto LAB_10b8541c8;
        }
      }
    }
  }
  else {
LAB_10b8541b4:
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  uVar9 = 0;
LAB_10b8541c8:
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10b854270; end: 10b85436f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b854270(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_c8;
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar5 = 0;
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar6 * 8);
        func_0x00010c075900();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_10b854330;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar4 = auStack_c8;
      lVar1 = param_1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar5 = 0;
  }
LAB_10b854330:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar5 = (long)_DAT_112794ab4;
  uVar7 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 **)(param_1 + lVar5) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar7);
  *(undefined1 **)(param_1 + _DAT_112794ab8) = puVar4;
  func_0x00010bdcdde0(param_1,param_2,*(undefined8 *)(param_1 + lVar5),puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 10b854370; end: 10b8543ff; -[SIGHeaderButtonItemView transitionTo:withAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b854370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112794ab4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112794ab8) = param_4;
  func_0x00010bdcdde0(param_1,param_2,*(undefined8 *)(param_1 + lVar2),param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b854400; end: 10b85449b; -[SIGHeaderButtonItemView completeTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b854400(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (((param_3 & 1) == 0) && (*(long *)(param_1 + _DAT_112794ab8) != 0)) {
    func_0x00010bdcdde0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794a90),0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = (long)_DAT_112794ab4;
  }
  else {
    lVar3 = (long)_DAT_112794ab4;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    lVar4 = (long)_DAT_112794a90;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b85449c; end: 10b8544ab; -[SIGHeaderButtonItemView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85449c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794a90);
}



/* Entry: 10b8544ac; end: 10b8544eb; -[SIGHeaderButtonItemView setItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8544ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794a90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8544ec; end: 10b8544fb; -[SIGHeaderButtonItemView hasCollapsableItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b8544ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794a8c);
}



/* Entry: 10b8544fc; end: 10b85450b; -[SIGHeaderButtonItemView setHasCollapsableItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8544fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794a8c) = param_3;
  return;
}



/* Entry: 10b85450c; end: 10b85451b; -[SIGHeaderButtonItemView expanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b85450c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794aa0);
}



/* Entry: 10b85451c; end: 10b854597; -[SIGHeaderButtonItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85451c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112794ab0);
  _objc_storeStrong(param_1 + _DAT_112794a94,0);
  _objc_storeStrong(param_1 + _DAT_112794a98,0);
  _objc_storeStrong(param_1 + _DAT_112794a9c,0);
  _objc_storeStrong(param_1 + _DAT_112794ab4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794a90,0);
  return;
}



/* Entry: 10b854598; end: 10b85470f; -[SIGHeaderButtonOption copyWithZone:] */

undefined * FUN_10b854598(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c2d78;
  _objc_alloc();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c01ae60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  puVar1[0x28] = *(undefined1 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  _objc_release(uVar4);
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  puVar1[0x2b] = *(undefined1 *)(param_1 + 0x2b);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined8 *)(puVar1 + 0x40) = uVar4;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x58);
  *(undefined8 *)(puVar1 + 0x58) = uVar3;
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x60);
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  _objc_release(uVar4);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  _objc_storeWeak(puVar1 + 0x70,lVar2);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(puVar1 + 0x68);
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  _objc_release(uVar3);
  lVar2 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar2);
  _objc_storeWeak(puVar1 + 0x78,lVar2);
  _objc_release(lVar2);
  puVar1[0x29] = *(undefined1 *)(param_1 + 0x29);
  puVar1[0x2a] = *(undefined1 *)(param_1 + 0x2a);
  return puVar1;
}



/* Entry: 10b854710; end: 10b8548b7; -[SIGHeaderButtonOption isEqual:] */

bool FUN_10b854710(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_10b854898;
  }
  puVar6 = PTR_PTR_1126c2d78;
  _objc_opt_class(PTR_PTR_1126c2d78);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar1 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_10b85488c:
    bVar2 = false;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    if ((lVar8 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar8 != 0)) {
      lVar8 = *(long *)(param_1 + 0x48);
      if ((lVar8 != *(long *)(param_3 + 0x48)) && (func_0x00010c071ae0(), (int)lVar8 == 0))
      goto LAB_10b8547bc;
      lVar8 = *(long *)(param_1 + 0x50);
      if (lVar8 == *(long *)(param_3 + 0x50)) {
        uVar3 = 1;
      }
      else {
        func_0x00010c071ae0();
        uVar3 = (uint)lVar8;
      }
    }
    else {
LAB_10b8547bc:
      uVar3 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x40);
    if ((lVar8 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar8 != 0)) {
      lVar8 = *(long *)(param_1 + 0x60);
      if (lVar8 == *(long *)(param_3 + 0x60)) {
        uVar4 = 1;
      }
      else {
        func_0x00010c071ae0();
        uVar4 = (uint)lVar8;
      }
    }
    else {
      uVar4 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 == *(long *)(param_3 + 0x58)) {
      iVar5 = 1;
    }
    else {
      func_0x00010c071ae0();
      iVar5 = (int)lVar8;
    }
    bVar2 = false;
    if (((uVar3 & uVar4) == 1) && (iVar5 != 0)) {
      if ((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38)) ||
         (((*(char *)(param_1 + 0x28) != *(char *)(param_3 + 0x28) ||
           (*(char *)(param_1 + 0x29) != *(char *)(param_3 + 0x29))) ||
          (*(char *)(param_1 + 0x2a) != *(char *)(param_3 + 0x2a))))) goto LAB_10b85488c;
      bVar2 = *(char *)(param_1 + 0x2b) == *(char *)(param_3 + 0x2b);
    }
  }
  _objc_release(uVar1);
LAB_10b854898:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 10b8548b8; end: 10b854a4f; -[SIGHeaderButtonOption hash] */

long FUN_10b8548b8(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bfde980(lVar2);
  bVar1 = *(byte *)(param_1 + 0x28);
  lVar14 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010bfde980(lVar3);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010bfde980(lVar4);
  lVar5 = *(long *)(param_1 + 0x50);
  func_0x00010bfde980(lVar5);
  uVar15 = *(ulong *)(param_1 + 0x58);
  if (uVar15 == 0) {
    lVar13 = 0;
  }
  else {
    _objc_retain(uVar15);
    uVar6 = uVar15;
    func_0x00010bf40c40(uVar15);
    uVar7 = uVar15;
    func_0x00010c25dfa0(uVar15);
    uVar8 = uVar15;
    func_0x00010c26b700(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfde980();
    _objc_release(uVar8);
    uVar8 = uVar15;
    func_0x00010c26b920(uVar15);
    uVar10 = uVar15;
    func_0x00010c074c20(uVar15);
    uVar11 = uVar15;
    func_0x00010c290960(uVar15);
    _objc_release(uVar15);
    lVar13 = ((uVar8 + (uVar9 + ((uVar7 - uVar6) + uVar6 * 0x20) * 0x1f) * 0x1f) * 0x1f +
             (uVar10 & 0xffffffff)) * 0x1f + (uVar11 & 0xffffffff) + 0x38349ef51;
  }
  lVar12 = *(long *)(param_1 + 0x60);
  func_0x00010bfde980(lVar12);
  lVar14 = (ulong)*(byte *)(param_1 + 0x29) +
           (lVar12 + (lVar13 + (lVar5 + (lVar4 + (lVar3 + ((ulong)bVar1 +
                                                          (lVar14 + lVar2 * 0x1f) * 0x1f) * 0x1f) *
                                                 0x1f) * 0x1f) * 0x1f) * 0x1f) * 0x1f;
  return (ulong)*(byte *)(param_1 + 0x2b) +
         (((ulong)*(byte *)(param_1 + 0x2a) - lVar14) + lVar14 * 0x20) * 0x1f + 0x5fe92e082cbfb4f;
}



/* Entry: 10b854a50; end: 10b854a5b; -[SIGHeaderButtonOption trigger] */

void FUN_10b854a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_sendActionsWithSender__112634758,param_1);
  return;
}



/* Entry: 10b854a5c; end: 10b854a63; -[SIGHeaderButtonOption _tooltipStyle] */

undefined8 FUN_10b854a5c(void)

{
  return 0;
}



/* Entry: 10b854a64; end: 10b854af7; -[SIGHeaderButtonOption setText:] */

void FUN_10b854a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b854af8;
  puStack_40 = &UNK_110d62ab0;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b854af8; end: 10b854b47;  */

void FUN_10b854af8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonOption_didChangeText_1125d5668);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf2a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b854b48; end: 10b854b9b; -[SIGHeaderButtonOption setTypeStyle:] */

void FUN_10b854b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b854b9c;
  puStack_20 = &UNK_110d62ab0;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b854b9c; end: 10b854beb;  */

void FUN_10b854b9c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonOption_didChangeType_1125d5688);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf320(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b854bec; end: 10b854c3f; -[SIGHeaderButtonOption setTextPositionLeading:] */

void FUN_10b854bec(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b854c40;
  puStack_20 = &UNK_110d62ab0;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b854c40; end: 10b854d2f;  */

void FUN_10b854c40(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonOption_didChangeText_1125d5670);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf2c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b854d30; end: 10b854df7;  */

void FUN_10b854d30(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonOption_didChangeBadg_1125d5648);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf220(param_2);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf150c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf150c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != lVar5) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf150c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa200();
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b854df8; end: 10b854e8b; -[SIGHeaderButtonOption setTooltipOption:] */

void FUN_10b854df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b854e8c;
  puStack_40 = &UNK_110d62ab0;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b854e8c; end: 10b854edb;  */

void FUN_10b854e8c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerButtonOption_didChangeTool_1125d5678);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf2e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b854edc; end: 10b854ee3; -[SIGHeaderButtonOption presentTooltipWithText:] */

void FUN_10b854edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4000000000000000,param_1,PTR_s_presentTooltipWithText_duration__112621468);
  return;
}


