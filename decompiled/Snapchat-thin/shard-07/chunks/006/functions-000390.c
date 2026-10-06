/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105714dcc; end: 105715117; -[SCBitmojiSelfieViewController doneButton] */

/* WARNING: Possible PIC construction at 0x000105714e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105714e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105714dcc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_1127285f4;
  ppuVar5 = *(undefined ***)(param_1 + lVar6);
  if (ppuVar5 == (undefined **)0x0) {
    puVar1 = PTR_PTR_1126bd6e0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbb618;
  }
  else {
    _objc_retain(ppuVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
    ppuVar2 = &PTR____CFConstantStringClassReference_110df9618;
  }
  func_0x000107c312f0(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar5 = ppuVar2;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 105715118; end: 105715127; -[SCBitmojiSelfieViewController getTitle] */

void FUN_105715118(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df9618;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110df9618,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105715128; end: 105715197; -[SCBitmojiSelfieViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715128(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + _DAT_1127285dc) == '\x01') {
    func_0x00010c0af100(*(undefined8 *)(param_1 + _DAT_1127285c4),param_2,
                        *(undefined8 *)(param_1 + _DAT_1127285c8));
  }
  func_0x00010be58760(param_1,param_2,0);
  param_1 = param_1 + _DAT_1127285cc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1c140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105715198; end: 105715243; -[SCBitmojiSelfieViewController didSelectSelfie:collectionSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715198(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_1127285ec) != param_4) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127285c4);
  func_0x00010c25d700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af160(uVar2,param_2,param_3,*(undefined8 *)(param_1 + _DAT_1127285c8));
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bf88120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_1127285dc) = 1;
  return;
}



/* Entry: 105715244; end: 1057152a3; -[SCBitmojiSelfieViewController onImageLoadWithLatency:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127285e4;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + lVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_1127285e0),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
  return;
}



/* Entry: 1057152a4; end: 1057153df; -[SCBitmojiSelfieViewController _didPressDoneButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057152a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bf88120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237dc0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127285ec);
  func_0x00010c159f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127285b8);
  func_0x00010c2827c0(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf35240(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 1057153e0; end: 105715537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057153e0(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_1127285c4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25d700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af120(uVar6);
    _objc_release(uVar3);
    lVar4 = lVar2;
    func_0x00010bf88120(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237dc0();
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bf4b2a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar4);
    puVar1 = PTR_PTR_1126afca8;
    if (param_2 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db1398;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
    }
    else {
      lVar4 = lVar2;
      func_0x00010bf88120(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar4);
      func_0x00010be58760(lVar2);
      ppuVar5 = (undefined **)(lVar2 + _DAT_1127285cc);
      _objc_loadWeakRetained(ppuVar5);
      func_0x00010bf1c140();
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105715538; end: 1057155af; -[SCBitmojiSelfieViewController _logSessionFinishWithSaved:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127285e4;
  _os_unfair_lock_lock(param_1 + lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127285c4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127285e0);
  func_0x00010bf51e00(uVar1);
  func_0x00010c0af480(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar3);
  return;
}



/* Entry: 1057155b0; end: 105715617; -[SCBitmojiSelfieViewController _refreshSelfieCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057155b0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127285b4);
  func_0x00010bfd46e0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be889d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshSelfieIds_11257fc10);
    return;
  }
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103980();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105715618; end: 105715713; -[SCBitmojiSelfieViewController _refreshSelfieIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715618(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127285bc;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c15ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127285ec);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127285e8);
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c15ae20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127285c0);
    func_0x00010c15ade0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar6,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b20(uVar7,param_2,uVar8,uVar3,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105715714; end: 105715753; -[SCBitmojiSelfieViewController setDoneButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127285f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105715754; end: 10571584f; -[SCBitmojiSelfieViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715754(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127285f4,0);
  _objc_storeStrong(param_1 + _DAT_1127285e0,0);
  _objc_storeStrong(param_1 + _DAT_1127285d8,0);
  _objc_storeStrong(param_1 + _DAT_1127285d4,0);
  _objc_storeStrong(param_1 + _DAT_1127285d0,0);
  _objc_storeStrong(param_1 + _DAT_1127285ec,0);
  _objc_storeStrong(param_1 + _DAT_1127285e8,0);
  _objc_storeStrong(param_1 + _DAT_1127285f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127285cc);
  _objc_storeStrong(param_1 + _DAT_1127285c4,0);
  _objc_storeStrong(param_1 + _DAT_1127285c0,0);
  _objc_storeStrong(param_1 + _DAT_1127285bc,0);
  _objc_storeStrong(param_1 + _DAT_1127285b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127285b4,0);
  return;
}



/* Entry: 105715850; end: 105715d27; -[SCBitmojiSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715850(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_78;
  undefined *puStack_70;
  
  puStack_70 = PTR_PTR_1126e9ee8;
  lStack_78 = param_1;
  _objc_msgSendSuper2(&lStack_78,PTR_s_begin_1125a3840);
  puVar1 = PTR_PTR_1126bd6e8;
  _objc_alloc();
  lVar32 = (long)_DAT_1127285f8;
  lVar2 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127285fc;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112728600;
  lVar8 = param_1 + lVar33;
  _objc_loadWeakRetained();
  func_0x00010c0f0be0();
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112728628);
  }
  _objc_retain();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar10 = lVar32;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(param_1 + _DAT_112728620);
    _objc_retain();
    lStack_a8 = param_1 + _DAT_112728624;
    _objc_loadWeakRetained();
  }
  lVar28 = param_1 + _DAT_112728604;
  lVar12 = lVar28;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c15af80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar28;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112728608;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c292c60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11272860c;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112728610;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar33;
  _objc_loadWeakRetained();
  func_0x00010c252d60();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11272861c;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar30;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112728618;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar31;
  func_0x00010bf05100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar34 = 0;
    lVar35 = 0;
  }
  else {
    uVar34 = *(undefined8 *)(param_1 + _DAT_112728630);
    _objc_retain(uVar34);
    lVar35 = param_1 + _DAT_11272862c;
    _objc_loadWeakRetained();
  }
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a3a0();
  _objc_release(uVar34);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar35);
  _objc_release(lVar27);
  _objc_release(lVar31);
  _objc_release(lVar26);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar32);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar33;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105715d28; end: 105715d9b; -[SCBitmojiSettingsEntryPoint bitmojiSettingsViewControllerDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715d28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112728600;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1c280(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105715d9c; end: 105715e7b; -[SCBitmojiSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715d9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728630,0);
  _objc_destroyWeak(param_1 + _DAT_11272862c);
  _objc_storeStrong(param_1 + _DAT_112728628,0);
  _objc_destroyWeak(param_1 + _DAT_112728624);
  _objc_storeStrong(param_1 + _DAT_112728620,0);
  _objc_destroyWeak(param_1 + _DAT_11272861c);
  _objc_destroyWeak(param_1 + _DAT_112728618);
  _objc_destroyWeak(param_1 + _DAT_112728600);
  _objc_destroyWeak(param_1 + _DAT_1127285fc);
  _objc_destroyWeak(param_1 + _DAT_112728604);
  _objc_destroyWeak(param_1 + _DAT_112728608);
  _objc_destroyWeak(param_1 + _DAT_1127285f8);
  _objc_destroyWeak(param_1 + _DAT_112728610);
  _objc_destroyWeak(param_1 + _DAT_11272860c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728614);
  return;
}



/* Entry: 105715e7c; end: 105715edb; -[SCBitmojiSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105715e7c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112728634));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112728638));
  puStack_28 = PTR_PTR_1126e9ef0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105715edc; end: 1057162ff; -[SCBitmojiSettingsViewController initWithDelegate:bitmojiAvatarProvider:bitmojiLogger:page:bitmojiAvatarBuilderScopeExposer:bitmojiImageFetcher:bitmojiSelfiePickerScopeExposer:bitmojiSelfiePickerScopeServices:bitmojiSelfiePackProvider:bitmojiSelfieFetcher:bitmojiUserLinkingServices:configProvider:currentPageTracker:status:resourceDownloader:bitmojiAppEventsEmitter:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:bitmojiSelfieProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105715edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126e9ef0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272863c,param_3);
    lVar3 = (long)_DAT_112728640;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728644;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112728648) = param_6;
    lVar3 = (long)_DAT_11272864c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728650;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728654;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728658;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272865c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728660;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728664;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728668;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272866c) = param_16;
    lVar3 = (long)_DAT_112728670;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728674;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728678;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272867c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728680;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112728684;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    _objc_release(uVar2);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105716300; end: 10571662b; -[SCBitmojiSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716300(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined *puStack_138;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e9ef0;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar2 = PTR_PTR_1126bd6f0;
  _objc_alloc();
  func_0x00010c03f8a0();
  lVar18 = (long)_DAT_112728688;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar2;
  _objc_release(uVar16);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  lStack_88 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = PTR_PTR_1126e9ef0;
  lStack_140 = lVar3;
  _objc_msgSendSuper2(&lStack_140,PTR_s_viewDidLoad_112684cd8);
  lVar17 = lVar3;
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar17);
  lVar17 = (long)_DAT_112728640;
  iVar1 = (int)*(undefined8 *)(lVar3 + lVar17);
  func_0x00010bfd46e0();
  if (iVar1 == 0) {
    if (*(long *)(lVar3 + _DAT_11272866c) == 1) {
      func_0x00010bedfc00(lVar3);
    }
    else {
      func_0x00010c283d80(*(undefined8 *)(lVar3 + _DAT_112728688));
      lVar4 = (long)_DAT_112728644;
      func_0x00010c0af4a0(*(undefined8 *)(lVar3 + lVar4));
      func_0x00010c0aef00(*(undefined8 *)(lVar3 + lVar4));
    }
    uVar16 = 0x1b;
  }
  else {
    if (*(long *)(lVar3 + _DAT_11272866c) == 2) {
      func_0x00010bedfbe0();
    }
    else {
      func_0x00010bedfbc0(lVar3);
      func_0x00010c0af4a0(*(undefined8 *)(lVar3 + _DAT_112728644));
    }
    func_0x00010bfaa0a0(*(undefined8 *)(lVar3 + _DAT_11272865c));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar16 = 0x1a;
  }
  *(undefined8 *)(lVar3 + _DAT_11272868c) = uVar16;
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  _objc_initWeak(auStack_148,lVar3);
  uVar14 = *(undefined8 *)(lVar3 + _DAT_112728674);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf050a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_105716938;
  puStack_158 = &UNK_1108acac0;
  _objc_copyWeak(auStack_150,auStack_148);
  uVar15 = uVar16;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar3 + _DAT_112728638);
  *(undefined8 *)(lVar3 + _DAT_112728638) = uVar15;
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar14);
  uVar15 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_178,auStack_148);
  uVar16 = uVar15;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar3 + _DAT_112728634);
  *(undefined8 *)(lVar3 + _DAT_112728634) = uVar16;
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 10571662c; end: 105716937; -[SCBitmojiSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571662c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e9ef0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar8);
  lVar8 = (long)_DAT_112728640;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010bfd46e0();
  if (iVar2 == 0) {
    if (*(long *)(param_1 + _DAT_11272866c) == 1) {
      func_0x00010bedfc00(param_1);
    }
    else {
      func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688));
      lVar1 = (long)_DAT_112728644;
      func_0x00010c0af4a0(*(undefined8 *)(param_1 + lVar1));
      func_0x00010c0aef00(*(undefined8 *)(param_1 + lVar1));
    }
    uVar6 = 0x1b;
  }
  else {
    if (*(long *)(param_1 + _DAT_11272866c) == 2) {
      func_0x00010bedfbe0();
    }
    else {
      func_0x00010bedfbc0(param_1);
      func_0x00010c0af4a0(*(undefined8 *)(param_1 + _DAT_112728644));
    }
    func_0x00010bfaa0a0(*(undefined8 *)(param_1 + _DAT_11272865c));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = 0x1a;
  }
  *(undefined8 *)(param_1 + _DAT_11272868c) = uVar6;
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112728674);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf050a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105716938;
  puStack_78 = &UNK_1108acac0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar5 = uVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112728638);
  *(undefined8 *)(param_1 + _DAT_112728638) = uVar5;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112728634);
  *(undefined8 *)(param_1 + _DAT_112728634) = uVar6;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105716938; end: 1057169ab;  */

void FUN_105716938(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057169ac; end: 1057169f3; -[SCBitmojiSettingsViewController viewWillAppear:] */

void FUN_1057169ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e9ef0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 1057169f4; end: 105716a9f; -[SCBitmojiSettingsViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1057169f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9ef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc20(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105716aa0; end: 105716b1b; -[SCBitmojiSettingsViewController _appDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716aa0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112728640);
  func_0x00010bfd46e0();
  if ((iVar1 != 0) && (*(long *)(param_1 + _DAT_11272866c) != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c283d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112728688),
               PTR_s_updateBitmojiSettingsViewWithSta_11267e988,1);
    return;
  }
  lVar3 = (long)_DAT_112728690;
  func_0x00010c1bdd80(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105716b1c; end: 105716b8f; -[SCBitmojiSettingsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716b1c(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e9ef0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010c077fe0(), (int)uVar1 != 0)) {
    func_0x00010c24fc40(*(undefined8 *)(param_1 + (long)_DAT_112728668));
  }
  return;
}



/* Entry: 105716b90; end: 105716b9f; -[SCBitmojiSettingsViewController getTitle] */

void FUN_105716b90(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7978;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dc7978,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105716ba0; end: 105716c53; -[SCBitmojiSettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716ba0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9ef0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_leftButtonPressed_112601348);
  lVar1 = param_1 + _DAT_11272863c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1c2c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    func_0x00010bf84b00(param_1);
  }
  return;
}



/* Entry: 105716c54; end: 105716cdb; -[SCBitmojiSettingsViewController _handleAppEvent:] */

void FUN_105716c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105716cdc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 105716cdc; end: 105716d4f;  */

void FUN_105716cdc(long param_1,undefined8 param_2)

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
  pcStack_28 = FUN_105716d50;
  puStack_20 = &UNK_110842e18;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105716d58;
  puStack_48 = &UNK_110842e18;
  uStack_18 = uStack_40;
  func_0x00010c0bd440(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105716d50; end: 105716d5f;  */

void FUN_105716d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedfc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSettingsViewToConfirmLink_1125958a8);
  return;
}



/* Entry: 105716d60; end: 105716dfb; -[SCBitmojiSettingsViewController _refreshView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716d60(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112728640);
  func_0x00010bfd46e0();
  if (iVar1 == 0) {
    func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688));
    lVar3 = (long)_DAT_11272868c;
    if (*(long *)(param_1 + lVar3) == 0x1b) {
      return;
    }
    uVar2 = 0x1b;
  }
  else {
    func_0x00010bedfbc0(param_1);
    lVar3 = (long)_DAT_11272868c;
    if (*(long *)(param_1 + lVar3) == 0x1a) {
      return;
    }
    uVar2 = 0x1a;
  }
  *(undefined8 *)(param_1 + lVar3) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112728668),PTR_s_startPage__112671938);
  return;
}



/* Entry: 105716dfc; end: 105716ebf; -[SCBitmojiSettingsViewController _updateSettingsViewToConfirmLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716dfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688),param_2,2);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728660);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf47e20(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105716ec0; end: 105716f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716ec0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688));
      puVar1 = PTR_PTR_1126afca8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110db1398;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar3);
    }
    else {
      func_0x00010bedfba0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105716f78; end: 105717193; -[SCBitmojiSettingsViewController _updateSettingsViewIfBitmojiJustLinkedWithAvatarId:scale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105716f78(long param_1,undefined1 *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **unaff_x25;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bea22c0(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126b58e0;
    _objc_opt_new();
    func_0x00010c2bae20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8ea0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b78c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11272864c);
    puVar2 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105717194;
    puStack_80 = &UNK_1108acaf0;
    unaff_x25 = &puStack_98;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70);
    _objc_retain(param_3);
    puVar5 = puVar2;
    puStack_78 = param_3;
    func_0x00010bfa5420(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != (undefined *)0x0) {
    if (param_2 == (undefined1 *)0x0) {
      puVar1 = puVar5;
      func_0x00010c14e120();
      if (puVar1 == (undefined *)0x2) {
        func_0x00010bedfba0(param_3);
      }
      else {
        func_0x00010bea22c0(param_3);
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + _DAT_112728688);
      func_0x00010c0999e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283ae0();
      _objc_release(uVar6);
    }
  }
  _objc_release(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105717194; end: 105717253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717194(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar2 = param_3;
      func_0x00010c14e120();
      if (lVar2 == 2) {
        func_0x00010bedfba0(param_1);
      }
      else {
        func_0x00010bea22c0(param_1);
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112728688);
      func_0x00010c0999e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283ae0();
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105717254; end: 1057173b3; -[SCBitmojiSettingsViewController _setBackupLinkingSucceededViewImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717254(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728670);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010bf1bcc0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1057173b4; end: 1057174a3;  */

void FUN_1057173b4(long param_1,long param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      uStack_40 = 0x10571745c;
      puStack_38 = &UNK_110841f80;
      lStack_30 = param_1;
      _objc_retain(param_2);
      lStack_28 = param_2;
      func_0x0001000d76cc("APPSTORE",&puStack_50);
      _objc_release(lStack_28);
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1057174a4; end: 105717567; -[SCBitmojiSettingsViewController _updateSettingsViewToChangeAvatar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057174a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688),param_2,1);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728660);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf47e20(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105717568; end: 105717617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717568(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688));
      puVar1 = PTR_PTR_1126afca8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110db1398;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar3);
    }
    else {
      func_0x00010bedfbc0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105717618; end: 105717697; -[SCBitmojiSettingsViewController _updateSettingsViewIfBitmojiLinked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112728688;
  func_0x00010c283d80(*(undefined8 *)(param_1 + lVar3),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c280a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112728640);
  func_0x00010bf12ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105717698; end: 105717713; -[SCBitmojiSettingsViewController didPressLinkButton:linkingView:settingsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112728688) == param_5) {
    func_0x00010c1bdd80(param_4,param_2,1);
    lVar2 = (long)_DAT_112728690;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
    func_0x00010be7a380(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105717714; end: 10571772f; -[SCBitmojiSettingsViewController didPressUnlinkBitmojiForUnlinkingView:settingsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717714(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + _DAT_112728688) != param_4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be04d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displaySIGUnlinkingModalWithEdi_11255ece0);
  return;
}



/* Entry: 105717730; end: 10571798b; -[SCBitmojiSettingsViewController _displaySIGUnlinkingModalWithEditOptionForUnlinkingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126bd6f8;
  _objc_alloc();
  puVar3 = puVar2;
  FUN_105718aa8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105718ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000105718af0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105718ad8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10571798c;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105717a0c;
  puStack_c8 = &UNK_110841fb0;
  uStack_90 = param_3;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_copyWeak(auStack_e8,auStack_80);
  func_0x00010c039480();
  lVar9 = (long)_DAT_112728694;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar9));
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 10571798c; end: 105717a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571798c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112728694);
    *(undefined8 *)(lVar1 + _DAT_112728694) = 0;
    _objc_release(uVar2);
    func_0x00010c0b2300(*(undefined8 *)(lVar1 + _DAT_112728644),param_2,3,1,
                        *(undefined8 *)(lVar1 + _DAT_112728648));
    func_0x00010be47520(lVar1,param_2,2,0,*(undefined8 *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105717a0c; end: 105717ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717a0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112728694);
    *(undefined8 *)(lVar1 + _DAT_112728694) = 0;
    _objc_release(uVar2);
    func_0x00010be72c20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105717ab4; end: 105717b7f; -[SCBitmojiSettingsViewController _performUnlinkAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728660);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2809c0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105717b80; end: 105717c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717b80(long param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126afca8;
  if (param_1 != 0) {
    if (param_2 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1398;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar2);
    }
    else {
      func_0x00010c283d80(*(undefined8 *)(param_1 + _DAT_112728688));
    }
    func_0x00010c0b2320(*(undefined8 *)(param_1 + _DAT_112728644));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105717c2c; end: 105717c5b; -[SCBitmojiSettingsViewController didPressChangeOutfitCell:unlinkingView:settingsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (*(long *)(param_1 + _DAT_112728688) != param_5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be47530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__launchAvatarBuilderWithFlowMode_11256f6e8,3,param_3,param_4,0);
  return;
}



/* Entry: 105717c5c; end: 105717c8b; -[SCBitmojiSettingsViewController didPressEditBitmojiCell:unlinkingView:settingsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717c5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (*(long *)(param_1 + _DAT_112728688) != param_5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be47530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__launchAvatarBuilderWithFlowMode_11256f6e8,2,param_3,param_4,0);
  return;
}



/* Entry: 105717c8c; end: 105717dcf; -[SCBitmojiSettingsViewController _launchAvatarBuilderWithFlowMode:cell:unlinkingView:logAvatarSaveFromUnlinkFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c21e900(param_5,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c24dbc0();
  func_0x00010c161280(param_4,param_2,puVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112728698);
  *(undefined8 *)(param_1 + _DAT_112728698) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272869c);
  *(undefined8 *)(param_1 + _DAT_11272869c) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c2ae460(puVar2,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be7b160(param_1,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)lVar4 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127286a0) = param_6;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105717dd0; end: 105717ea7; -[SCBitmojiSettingsViewController _presentAvatarBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717dd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112728658;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = 0x1c;
  if (*(long *)(param_1 + _DAT_112728648) != -1) {
    lVar1 = *(long *)(param_1 + _DAT_112728648);
  }
  puVar2 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  lVar3 = param_1;
  func_0x00010bed0d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a940(puVar2,param_2,lVar1,lVar3,param_1);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  func_0x00010be262c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105717ea8; end: 105717fa3; -[SCBitmojiSettingsViewController _presentEditAvatarBuilderWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105717ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11272867c;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar1 = 0x1c;
    if (*(long *)(param_1 + _DAT_112728648) != -1) {
      lVar1 = *(long *)(param_1 + _DAT_112728648);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112728680);
    lVar3 = param_1;
    func_0x00010bed0d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23c40(uVar4,param_2,lVar3,param_3,param_1,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
    func_0x00010be262c0(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return lVar2 == 0;
}



/* Entry: 105717fa4; end: 105717fd7; -[SCBitmojiSettingsViewController _uiContainerForAvatarBuilderScope] */

void FUN_105717fa4(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105717fd8; end: 105718067; -[SCBitmojiSettingsViewController _handleAvatarBuilderPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105717fd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112728690;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c1bdd80(*(long *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_11272869c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c21e900(*(long *)(param_1 + lVar2),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_112728698;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c161280(*(long *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105718068; end: 105718083; -[SCBitmojiSettingsViewController didPressChangeSelfieCell:unlinkingView:settingsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718068(long param_1)

{
  long in_x4;
  
  if (*(long *)(param_1 + _DAT_112728688) != in_x4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__changeSelfieWithCell_unlinkingV_112554c70);
  return;
}



/* Entry: 105718084; end: 10571815b; -[SCBitmojiSettingsViewController _selfiePackDidChangeWithCell:unlinkingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c161280(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11272865c);
  func_0x00010c15ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126afca8;
  if (lVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db1398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(ppuVar4);
  }
  else {
    func_0x00010bddcb40(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10571815c; end: 10571818f; -[SCBitmojiSettingsViewController leftSwipeSucceed] */

void FUN_10571815c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e9ef0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_leftSwipeSucceed_112601480);
  return;
}



/* Entry: 105718190; end: 1057181e7; -[SCBitmojiSettingsViewController bitmojiSelfiePickerComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718190(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112728650;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1057181e8; end: 10571858b; -[SCBitmojiSettingsViewController _changeSelfieWithCell:unlinkingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057181e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11272865c;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c15ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
    func_0x00010bff0f20();
    func_0x00010c24dbc0();
    func_0x00010c161280(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfaa0a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(&uStack_a8,param_1);
    _objc_copyWeak(auStack_110,&uStack_a8);
    _objc_retain(param_3);
    uVar6 = param_4;
    _objc_retain(param_4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(uVar6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(&uStack_a8);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3042000000;
    pcStack_90 = FUN_10571858c;
    uStack_88 = 0x105718598;
    _objc_initWeak(auStack_80,0);
    lVar3 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 == param_1) {
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
    }
    else {
      puVar4 = PTR_PTR_1126aeaf8;
      _objc_alloc(PTR_PTR_1126aeaf8);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1057185a0;
      puStack_c0 = &UNK_11084d948;
      puStack_b8 = &uStack_a8;
      _objc_copyWeak(auStack_b0,auStack_78);
      puStack_108 = puVar1;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_105718620;
      puStack_f0 = &UNK_11084d978;
      _objc_copyWeak(auStack_e0,auStack_78);
      puStack_e8 = &uStack_a8;
      func_0x00010c0311a0(puVar4);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_b0);
    }
    uVar6 = *(undefined8 *)(param_1 + _DAT_112728654);
    func_0x00010bf23ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112728650));
    _objc_release(uVar6);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_a8,8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10571858c; end: 10571859f;  */

void FUN_10571858c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1057185a0; end: 10571861f;  */

void FUN_1057185a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  _objc_storeWeak(lVar1 + 0x28,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105718620; end: 105718723;  */

void FUN_105718620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar3;
  func_0x00010c071ae0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105718724; end: 105718757;  */

void FUN_105718724(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9e5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105718758; end: 10571877f; -[SCBitmojiSettingsViewController bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718758(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112728658));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105718780; end: 1057187e3; -[SCBitmojiSettingsViewController bitmojiAvatarBuilderCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718780(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127286a0) = 0;
  lVar2 = (long)_DAT_11272867c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1057187e4; end: 105718873; -[SCBitmojiSettingsViewController bitmojiAvatarBuilderCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057187e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_1127286a0;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010c0b2300(*(undefined8 *)(param_1 + _DAT_112728644),param_2,2,2,
                        *(undefined8 *)(param_1 + _DAT_112728648));
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  lVar2 = (long)_DAT_11272867c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105718874; end: 10571890b; -[SCBitmojiSettingsViewController bitmojiAvatarBuilderFailedWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718874(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + _DAT_1127286a0) = 0;
  lVar4 = (long)_DAT_11272867c;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126afca8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 10571890c; end: 105718aa7; -[SCBitmojiSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571890c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728694,0);
  _objc_storeStrong(param_1 + _DAT_112728680,0);
  _objc_storeStrong(param_1 + _DAT_11272867c,0);
  _objc_storeStrong(param_1 + _DAT_112728684,0);
  _objc_storeStrong(param_1 + _DAT_112728678,0);
  _objc_storeStrong(param_1 + _DAT_112728698,0);
  _objc_storeStrong(param_1 + _DAT_11272869c,0);
  _objc_storeStrong(param_1 + _DAT_112728690,0);
  _objc_storeStrong(param_1 + _DAT_112728638,0);
  _objc_storeStrong(param_1 + _DAT_112728634,0);
  _objc_storeStrong(param_1 + _DAT_112728670,0);
  _objc_storeStrong(param_1 + _DAT_112728658,0);
  _objc_storeStrong(param_1 + _DAT_112728654,0);
  _objc_storeStrong(param_1 + _DAT_112728650,0);
  _objc_storeStrong(param_1 + _DAT_112728688,0);
  _objc_storeStrong(param_1 + _DAT_112728674,0);
  _objc_storeStrong(param_1 + _DAT_112728664,0);
  _objc_storeStrong(param_1 + _DAT_112728668,0);
  _objc_storeStrong(param_1 + _DAT_112728660,0);
  _objc_storeStrong(param_1 + _DAT_11272865c,0);
  _objc_storeStrong(param_1 + _DAT_11272864c,0);
  _objc_storeStrong(param_1 + _DAT_112728644,0);
  _objc_storeStrong(param_1 + _DAT_112728640,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272863c);
  return;
}



/* Entry: 105718aa8; end: 105718b07;  */

void FUN_105718aa8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df9678;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110df9678,
                      &PTR____CFConstantStringClassReference_110df9658,0);
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



/* Entry: 105718b08; end: 105718bef; -[SCSpotlightRepliesFeatureSettingsManager initWithFeatureSettingsService:spotlightRepliesRequestSender:spotlightRepliesUpdateAnnouncer:] */

undefined1 *
FUN_105718b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126bd700;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105718bf0; end: 105718c93; -[SCSpotlightRepliesFeatureSettingsManager updateSpotlightRepliesAutoApprovalSettingOption:] */

void FUN_105718bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c208aa0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c289280(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf045a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be57ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logRepliesSettingsGrapheneEvent_112573850,param_3);
  return;
}



/* Entry: 105718c94; end: 105718c9b; -[SCSpotlightRepliesFeatureSettingsManager spotlightRepliesAutoApprovalSettingOption] */

void FUN_105718c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_spotlightRepliesAutoApprovalSett_112670998);
  return;
}



/* Entry: 105718c9c; end: 105718ca3; -[SCSpotlightRepliesFeatureSettingsManager updateSeenCommentFavoritedByCreatorModal:] */

void FUN_105718c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCommentFavoritedByCreatorModa_11263d5a0);
  return;
}



/* Entry: 105718ca4; end: 105718cab; -[SCSpotlightRepliesFeatureSettingsManager hasUserSeenCommentFavoritedByCreatorModal] */

void FUN_105718ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_commentFavoritedByCreatorModalSe_1125ae150);
  return;
}



/* Entry: 105718cac; end: 105718cd7; -[SCSpotlightRepliesFeatureSettingsManager _logRepliesSettingsGrapheneEventWithAutoApprovalSettingType:] */

undefined ** FUN_105718cac(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  if (param_3 < 4) {
    ppuVar5 = (undefined **)(&PTR_PTR_1108acb20)[param_3];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110df96f8;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f2ed803;
    }
    else {
      ppuVar2 = ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108acb70,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar2 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_b0;
  pcStack_88 = FUN_10571918c;
  puStack_a8 = PTR_PTR_1126e9f08;
  ppuStack_b0 = ppuVar3;
  ppuStack_a0 = ppuVar2;
  ppuStack_98 = ppuVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined ***)0x0) {
    ppuVar5 = (undefined **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar5;
  }
  return (undefined **)pppuVar4;
}



/* Entry: 105718cd8; end: 105718d1f; -[SCSpotlightRepliesFeatureSettingsManager .cxx_destruct] */

void FUN_105718cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105718d20; end: 105718e03; -[SCSpotlightRepliesFeatureSettingsServiceProvider provide] */

void FUN_105718d20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd708;
  _objc_alloc(PTR_PTR_1126bd708);
  func_0x00010c04b480();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105718e04; end: 105718e43;  */

void FUN_105718e04(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105718e44; end: 105718f53; -[SCSpotlightRepliesFeatureSettingsServiceProvider _createSpotlightRepliesFeatureSettingsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718e44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126bd710;
  _objc_alloc(PTR_PTR_1126bd710);
  lVar2 = param_1 + _DAT_1127286b4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127286b8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c24bf40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127286bc;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c131940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012080(puVar1,param_2,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105718f54; end: 105718fa3; -[SCSpotlightRepliesFeatureSettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105718f54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127286bc);
  _objc_destroyWeak(param_1 + _DAT_1127286b8);
  _objc_destroyWeak(param_1 + _DAT_1127286b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127286c0);
  return;
}



/* Entry: 105718fa4; end: 105719017; -[SCGrapheneSpotlightRepliesSettingsMetric2 init] */

undefined1 * FUN_105718fa4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9f00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105719018; end: 10571918b;  */

undefined * FUN_105719018(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2ed803;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108acb70,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_10571918c;
  puStack_a8 = PTR_PTR_1126e9f08;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 10571918c; end: 1057191ff; -[SCGrapheneFriendSyncDuplexMetric2 init] */

undefined1 * FUN_10571918c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9f08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105719200; end: 105719373;  */

char * FUN_105719200(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108acbd0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume(pcVar3);
    if (pcRam00000001136bfb18 == (char *)0x0) {
      pcVar3 = PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (pcRam00000001136bfb18 != (char *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return pcRam00000001136bfb18;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136bfb18,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pcRam00000001136bfb18 = pcVar3;
        }
      } while (cVar1 != '\0');
    }
    return pcRam00000001136bfb18;
  }
  return pcVar3;
}



/* Entry: 105719374; end: 1057193ef;  */

undefined * FUN_105719374(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfb18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df9758,
                        &UNK_10ddbc670,&UNK_10ddbc6ac,3,FUN_1057193f0,0);
    do {
      if (puRam00000001136bfb18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfb18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfb18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfb18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfb18;
}



/* Entry: 1057193f0; end: 1057193fb;  */

bool FUN_1057193f0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1057193fc; end: 105719487; +[SCDuplexTriggerAtlasSyncTriggerEnvelope descriptor] */

undefined * FUN_1057193fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5d7e0,
                        &PTR____CFConstantStringClassReference_110df9778,&PTR_DAT_1130f7290,
                        &PTR_DAT_1130f72c8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bfb20 = puVar1;
  }
  return puRam00000001136bfb20;
}



/* Entry: 105719488; end: 1057194ef; +[SCDuplexTriggerSaturnSyncPayload descriptor] */

void FUN_105719488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5d8a8,
                        &PTR____CFConstantStringClassReference_110df9798,&PTR_DAT_1130f7290,
                        &PTR_DAT_1130f72a8,1,0x10,0x1c);
    puRam00000001136bfb28 = puVar1;
  }
  return;
}



/* Entry: 1057194f0; end: 105719573; +[SCDuplexTriggerSaturnSyncPayload_UserSaturnData descriptor] */

undefined * FUN_1057194f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5d8d0,
                        &PTR____CFConstantStringClassReference_110df97b8,&PTR_DAT_1130f7290,
                        &PTR_s_userId_1130f7308,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bfb30 = puVar1;
  }
  return puRam00000001136bfb30;
}



/* Entry: 105719574; end: 1057195db; +[SCDuplexTriggerFriendSyncPayload descriptor] */

void FUN_105719574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5d880,
                        &PTR____CFConstantStringClassReference_110df97d8,&PTR_DAT_1130f7290,0,0,4,
                        0x1c);
    puRam00000001136bfb38 = puVar1;
  }
  return;
}



/* Entry: 1057195dc; end: 10571964f; -[SCGrapheneMutualFriendsBillboardFstEligibilityMetric2 init] */

undefined1 * FUN_1057195dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9f10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105719650; end: 1057196c7;  */

void FUN_105719650(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108acc30,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1057196c8; end: 10571973f;  */

void FUN_1057196c8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108acc80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105719740; end: 1057198b3;  */

char * FUN_105719740(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108accd0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_1057198b4;
  puStack_a8 = PTR_PTR_1126e9f18;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 1057198b4; end: 105719927; -[SCGrapheneMutualFriendsEducationalBillboardFstEligibilityMetric2 init] */

undefined1 * FUN_1057198b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9f18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105719928; end: 10571999f;  */

void FUN_105719928(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108acd30,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1057199a0; end: 105719a17;  */

void FUN_1057199a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108acd80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105719a18; end: 105719b8b;  */

char * FUN_105719a18(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108acdd0);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_e0;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_d8 = PTR_PTR_1126e9f20;
  pcStack_e0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    _objc_retain(puVar4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 8);
    *(undefined1 **)((long)ppcVar2 + 8) = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x10);
    *(undefined1 **)((long)ppcVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x18);
    *(undefined8 *)((long)ppcVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x20);
    *(undefined8 *)((long)ppcVar2 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x28);
    *(undefined8 *)((long)ppcVar2 + 0x28) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x30);
    *(undefined8 *)((long)ppcVar2 + 0x30) = param_8;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  return (char *)ppcVar2;
}



/* Entry: 105719b8c; end: 105719cdf; -[SCSnapAnyoneNativeMessagingListener initWithContactTempSnapchatterInviter:nonSnapchattersDataFetcher:snapchattersDataFetcher:snapchattersDataMutator:grapheneRegistry:notificationPool:] */

undefined1 *
FUN_105719b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e9f20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105719ce0; end: 105719ce3; -[SCSnapAnyoneNativeMessagingListener didCreateConversation:] */

void FUN_105719ce0(void)

{
  return;
}



/* Entry: 105719ce4; end: 105719ce7; -[SCSnapAnyoneNativeMessagingListener didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_105719ce4(void)

{
  return;
}


