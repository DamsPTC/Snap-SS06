/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e984e4; end: 108e984f7; -[SCChatStickerSearchPillCollectionView setScrollDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e984e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cf18,param_3);
  return;
}



/* Entry: 108e984f8; end: 108e9853f; -[SCChatStickerSearchPillCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e984f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277cf18);
  _objc_storeStrong(param_1 + _DAT_11277cf14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277cf10);
  return;
}



/* Entry: 108e98540; end: 108e98597; -[SCChatStickerSearchPillCollectionViewCell initWithFrame:] */

undefined1 * FUN_108e98540(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fee68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaece0(puVar1);
    func_0x00010bead500(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e98598; end: 108e98893; -[SCChatStickerSearchPillCollectionViewCell _setupPillBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98598(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar18 = (long)_DAT_11277cf1c;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(uVar4);
  _objc_release(lVar16);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar19 = (long)_DAT_11277cf20;
  uVar15 = *(undefined8 *)(lVar3 + lVar19);
  *(undefined **)(lVar3 + lVar19) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar3 + lVar19));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar3 + lVar19));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar3 + lVar19));
  lVar17 = (long)_DAT_11277cf1c;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar19));
  lVar10 = *(long *)(lVar3 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(lVar10);
  func_0x00010c1e3380(0x437a0000,lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(lVar3 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010c08de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010c274200(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar3 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar3 + lVar17);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_11277cf20),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 108e98894; end: 108e98b83; -[SCChatStickerSearchPillCollectionViewCell _setupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98894(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar16 = (long)_DAT_11277cf20;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16));
  lVar15 = (long)_DAT_11277cf1c;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(lVar2);
  func_0x00010c1e3380(0x437a0000,lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + _DAT_11277cf20),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 108e98b84; end: 108e98b93; -[SCChatStickerSearchPillCollectionViewCell setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cf20),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 108e98b94; end: 108e98bd3; -[SCChatStickerSearchPillCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98b94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cf20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cf1c,0);
  return;
}



/* Entry: 108e98bd4; end: 108e98c27; +[SCChatStickerSearchPillTermsImpl pills] */

void FUN_108e98bd4(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ea80 != -1) {
    func_0x000107c27d9c(0x11372ea80,&PTR___NSConcreteGlobalBlock_110ac7de8);
  }
  uVar1 = uRam000000011372ea78;
  _objc_retain(uRam000000011372ea78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e98c28; end: 108e98ee7;  */

void FUN_108e98c28(void)

{
  undefined8 uVar1;
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
  long lVar18;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126dc4c0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126d4e50;
  puVar3 = puVar2;
  func_0x000108e9956c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25db40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051360();
  puVar5 = PTR_PTR_1126dc4c0;
  _objc_alloc();
  puVar7 = PTR_PTR_1126d4e50;
  puVar6 = puVar5;
  func_0x000108e99584();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25db40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051360();
  puVar8 = PTR_PTR_1126dc4c0;
  _objc_alloc();
  puVar10 = PTR_PTR_1126d4e50;
  puVar9 = puVar8;
  func_0x000108e9959c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25db40(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051360();
  puVar11 = PTR_PTR_1126dc4c0;
  _objc_alloc();
  puVar13 = PTR_PTR_1126d4e50;
  puVar12 = puVar11;
  func_0x000108e995b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25db40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051360();
  puVar14 = PTR_PTR_1126dc4c0;
  _objc_alloc();
  puVar16 = PTR_PTR_1126d4e50;
  puVar15 = puVar14;
  func_0x000108e995cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25db40(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051360();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372ea78;
  puRam000000011372ea78 = puVar17;
  _objc_release(uVar1);
  _objc_release(puVar14);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  if (lRam000000011372ea90 != -1) {
    func_0x000107c27d9c(0x11372ea90,&PTR___NSConcreteGlobalBlock_110ac7e08);
  }
  uVar1 = uRam000000011372ea88;
  _objc_retain(uRam000000011372ea88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e98ee8; end: 108e98f9f; +[SCChatStickerSearchPillTermsImpl birthdayPill] */

void FUN_108e98ee8(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ea90 != -1) {
    func_0x000107c27d9c(0x11372ea90,&PTR___NSConcreteGlobalBlock_110ac7e08);
  }
  uVar1 = uRam000000011372ea88;
  _objc_retain(uRam000000011372ea88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e98fa0; end: 108e99027; +[SCChatStickerSearchPillTermsImpl searchTerms] */

void FUN_108e98fa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108e99028;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam000000011372eaa0 != -1) {
    func_0x000107c27d9c(0x11372eaa0,&puStack_48);
  }
  uVar1 = uRam000000011372ea98;
  _objc_retain(uRam000000011372ea98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e99028; end: 108e9918b;  */

void FUN_108e99028(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0fbea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x22);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar1;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar6 = puRam000000011372ea98;
  puRam000000011372ea98 = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar2);
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = lRam000000011372eab0;
  pcStack_128 = FUN_108e9918c;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc0000000;
  uStack_168 = 0x108e9925c;
  puStack_160 = &UNK_110848088;
  lStack_158 = lVar3;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  puStack_140 = puVar2;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  if (lVar8 != -1) {
    func_0x000107c27d9c(0x11372eab0,&puStack_178);
  }
  uVar6 = uRam000000011372eaa8;
  puVar5 = (undefined1 *)puVar7;
  func_0x00010c0b5ac0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 108e9918c; end: 108e99327; +[SCChatStickerSearchPillTermsImpl englishLocaleForSearchTerm:] */

void FUN_108e9918c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = lRam000000011372eab0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  uStack_48 = 0x108e9925c;
  puStack_40 = &UNK_110848088;
  uStack_38 = param_1;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x11372eab0,&puStack_58);
  }
  uVar3 = uRam000000011372eaa8;
  uVar2 = param_3;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e99328; end: 108e993ef;  */

void FUN_108e99328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf960c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0b5ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108e993f0; end: 108e9953b; +[SCChatStickerSearchPillTermsImpl stripDirectionalIsolates:] */

void FUN_108e993f0(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_retain(param_3);
    ppuVar1 = param_3;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110efd618);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010c11f340(param_3,param_2,puVar3);
    _objc_release(puVar3);
    if (ppuVar1 == (undefined **)0x7fffffffffffffff) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar4 = param_3;
      func_0x00010c260c00(param_3,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      puVar3 = puVar2;
      func_0x00010c06a520(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar4;
      func_0x00010c11f360(ppuVar4,param_2,puVar3,4);
      _objc_release(puVar3);
      param_3 = ppuVar4;
      if (ppuVar1 != (undefined **)0x7fffffffffffffff) {
        func_0x00010c260c20(ppuVar4,param_2,(long)ppuVar1 + 1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
      }
      _objc_retain(param_3);
      ppuVar1 = param_3;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e9953c; end: 108e9962b;  */

void FUN_108e9953c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd638;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efd638,
                      &PTR____CFConstantStringClassReference_110efd658,0);
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



/* Entry: 108e9962c; end: 108e9968f; +[SCChatStickerSendingEvent stickerWithStickerEvent:] */

void FUN_108e9962c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf980;
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



/* Entry: 108e99690; end: 108e996b3; -[SCChatStickerSendingEvent copyWithZone:] */

undefined8 FUN_108e99690(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e996b4; end: 108e99713; -[SCChatStickerSendingEvent hash] */

void FUN_108e996b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fee70;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e99714; end: 108e99757; -[SCChatStickerSendingEvent internalInit] */

void FUN_108e99714(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fee70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e99758; end: 108e997f7; -[SCChatStickerSendingEvent isEqual:] */

long FUN_108e99758(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e997dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108e997dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108e997dc;
    }
  }
  lVar3 = 1;
LAB_108e997dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e997f8; end: 108e99817; -[SCChatStickerSendingEvent matchSticker:] */

void FUN_108e997f8(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108e99810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 108e99818; end: 108e99823; -[SCChatStickerSendingEvent .cxx_destruct] */

void FUN_108e99818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e99824; end: 108e9986b; +[SCStickerChatLayoutConfiguration sectionByStickerType] */

void FUN_108e99824(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dc4b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e9986c; end: 108e99923; +[SCStickerChatLayoutConfiguration sectionByStickerTypeRepeatingWithSectionSpacingOverrideTop:sectionSpacingOverrideBottom:itemsInSectionWidth:itemsInSectionHeightSquare:itemsInSectionHeightTall:] */

void FUN_108e9986c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc4b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e99924; end: 108e99947; -[SCStickerChatLayoutConfiguration copyWithZone:] */

undefined8 FUN_108e99924(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e99948; end: 108e999cf; -[SCStickerChatLayoutConfiguration hash] */

void FUN_108e99948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fee78;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e999d0; end: 108e99a13; -[SCStickerChatLayoutConfiguration internalInit] */

void FUN_108e999d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fee78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e99a14; end: 108e99afb; -[SCStickerChatLayoutConfiguration isEqual:] */

long FUN_108e99a14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e99ad4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e99ae0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108e99ae0;
        }
        goto LAB_108e99ad4;
      }
    }
    lVar3 = 0;
  }
LAB_108e99ae0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e99afc; end: 108e99b87; -[SCStickerChatLayoutConfiguration matchSectionByStickerType:sectionByStickerTypeRepeating:] */

void FUN_108e99afc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e99b88; end: 108e99bb7; -[SCStickerChatLayoutConfiguration .cxx_destruct] */

void FUN_108e99b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e99bb8; end: 108e99c63; -[SCStickerSearchPill initWithText:englishLocalText:] */

undefined1 *
FUN_108e99bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fee80;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e99c64; end: 108e99c87; -[SCStickerSearchPill copyWithZone:] */

undefined8 FUN_108e99c64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e99c88; end: 108e99cfb; -[SCStickerSearchPill hash] */

undefined8 * FUN_108e99c88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e99d7c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e99d88;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108e99d88;
        }
        goto LAB_108e99d7c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e99d88:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e99cfc; end: 108e99da3; -[SCStickerSearchPill isEqual:] */

long FUN_108e99cfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e99d7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e99d88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108e99d88;
        }
        goto LAB_108e99d7c;
      }
    }
    lVar3 = 0;
  }
LAB_108e99d88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e99da4; end: 108e99dab; -[SCStickerSearchPill text] */

undefined8 FUN_108e99da4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e99dac; end: 108e99db3; -[SCStickerSearchPill englishLocalText] */

undefined8 FUN_108e99dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e99db4; end: 108e99de3; -[SCStickerSearchPill .cxx_destruct] */

void FUN_108e99db4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e99de4; end: 108e99e5b; -[SCLocalStickerSearchQuery initWithTerm:] */

undefined1 * FUN_108e99de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fee88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e99e5c; end: 108e99e7f; -[SCLocalStickerSearchQuery copyWithZone:] */

undefined8 FUN_108e99e5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e99e80; end: 108e99e87; -[SCLocalStickerSearchQuery hash] */

void FUN_108e99e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108e99e88; end: 108e99f17; -[SCLocalStickerSearchQuery isEqual:] */

long FUN_108e99e88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e99efc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108e99efc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e99efc;
    }
  }
  lVar3 = 1;
LAB_108e99efc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e99f18; end: 108e99f1f; -[SCLocalStickerSearchQuery term] */

undefined8 FUN_108e99f18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e99f20; end: 108e99f2b; -[SCLocalStickerSearchQuery .cxx_destruct] */

void FUN_108e99f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e99f2c; end: 108e99f73; +[SCBloopsGenericFactory genericFactoryWithBlock:] */

void FUN_108e99f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c006720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e99f74; end: 108e99feb; -[SCBloopsGenericFactory initWithCreationBlock:] */

undefined1 * FUN_108e99f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fee90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e99fec; end: 108e99ff7; -[SCBloopsGenericFactory create] */

void FUN_108e99fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e99ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 108e99ff8; end: 108e9a003; -[SCBloopsGenericFactory .cxx_destruct] */

void FUN_108e99ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9a004; end: 108e9a08b;  */

void FUN_108e9a004(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b97c8;
  _objc_opt_class(PTR_PTR_1126b97c8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010bf3ec40(param_1);
  }
  return;
}



/* Entry: 108e9a08c; end: 108e9a173;  */

void FUN_108e9a08c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b9a78;
    _objc_alloc(PTR_PTR_1126b9a78);
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c085300(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdc2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00fb00(puVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e9a174; end: 108e9a19b;  */

long FUN_108e9a174(uint param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 < 3) {
    lVar1 = (ulong)param_1 + 1;
  }
  return lVar1;
}



/* Entry: 108e9a19c; end: 108e9a25b;  */

void FUN_108e9a19c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b97d8;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010c28f340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf92c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf92c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1b64a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e9a25c; end: 108e9a2a7;  */

undefined ** FUN_108e9a25c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd878;
  if (param_1 != 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110efd858;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110efd858;
  if (param_1 != 2) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd838;
  if (param_1 != 1) {
    ppuVar1 = ppuVar3;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110efd818;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  if (param_1 < 2) {
    ppuVar3 = ppuVar2;
  }
  return ppuVar3;
}



/* Entry: 108e9a2a8; end: 108e9a2eb; -[SCBloopsVolumeButtonsHandler dealloc] */

void FUN_108e9a2a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c2560c0();
  puStack_28 = PTR_PTR_1126fee98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108e9a2ec; end: 108e9a423; -[SCBloopsVolumeButtonsHandler startHandlingVolumeButtonEvents] */

void FUN_108e9a2ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010be40de0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14cae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s__handleButtonDown__11252ac10;
  puVar5 = puVar4;
  func_0x00010c14cba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar3,param_2,param_1,puVar2,puVar5,0);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c14cbe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar3,param_2,param_1,puVar2,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108e9a424; end: 108e9a533; -[SCBloopsVolumeButtonsHandler stopHandlingVolumeButtonEvents] */

void FUN_108e9a424(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be40de0();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c14cba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0(puVar2,param_2,param_1,puVar4,0);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c14cbe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0(puVar2,param_2,param_1,puVar4,0);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ca60();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108e9a534; end: 108e9a543; -[SCBloopsVolumeButtonsHandler _isHandlingVolumeButtonEvents] */

bool FUN_108e9a534(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 108e9a544; end: 108e9a573; -[SCBloopsVolumeButtonsHandler _handleButtonDown:] */

void FUN_108e9a544(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1e4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e9a574; end: 108e9a58b; -[SCBloopsVolumeButtonsHandler delegate] */

void FUN_108e9a574(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e9a58c; end: 108e9a597; -[SCBloopsVolumeButtonsHandler setDelegate:] */

void FUN_108e9a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108e9a598; end: 108e9a63f; -[SCBloopsVolumeButtonsHandler .cxx_destruct] */

void FUN_108e9a598(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9a640; end: 108e9a69f;  */

undefined8 FUN_108e9a640(int param_1)

{
  if (param_1 < 400) {
    if ((param_1 != 0) && (param_1 != 0xcc)) {
      return 0;
    }
  }
  else if ((((0x1d < param_1 - 400U) || ((1 << (ulong)(param_1 - 400U & 0x1f) & 0x2000065bU) == 0))
           && (param_1 != 500)) && (param_1 != 0x1f8)) {
    return 0;
  }
  return 1;
}



/* Entry: 108e9a6a0; end: 108e9a73f; +[SCCameosError descriptor] */

void FUN_108e9a6a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc6d70,
                        &PTR____CFConstantStringClassReference_110dae318,&PTR_DAT_11329ad78,
                        &PTR_s_status_11329ad90,3,0x18,0x1c);
    puRam000000011372eac0 = puVar1;
  }
  return;
}



/* Entry: 108e9a740; end: 108e9a7a7; +[SCCameosFriendBloopsData descriptor] */

void FUN_108e9a740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc6e10,
                        &PTR____CFConstantStringClassReference_110efd8b8,&PTR_DAT_11329adf0,
                        &PTR_s_userId_11329ae08,10,0x48,0x1c);
    puRam000000011372eac8 = puVar1;
  }
  return;
}



/* Entry: 108e9a7a8; end: 108e9a89f; +[SCCameosEncryptedData descriptor] */

undefined * FUN_108e9a7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ead0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc6eb0,
                        &PTR____CFConstantStringClassReference_110efd8d8,&PTR_DAT_11329af48,
                        &PTR_s_URL_11329af60,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ead0 = puVar1;
  }
  return puRam000000011372ead0;
}



/* Entry: 108e9a8a0; end: 108e9a8ab;  */

bool FUN_108e9a8a0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108e9a8ac; end: 108e9a927;  */

undefined * FUN_108e9a8ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eae0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110efd918,
                        &UNK_10dfa3e94,&UNK_10dfa3ec0,3,FUN_108e9a928,0);
    do {
      if (puRam000000011372eae0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eae0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eae0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eae0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eae0;
}



/* Entry: 108e9a928; end: 108e9a933;  */

bool FUN_108e9a928(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108e9a934; end: 108e9a93b; -[CTPRepositoryServices itemsRepository] */

undefined8 FUN_108e9a934(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e9a93c; end: 108e9a943; -[CTPRepositoryServices feedsRepository] */

undefined8 FUN_108e9a93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e9a944; end: 108e9a94b; -[CTPRepositoryServices cacheClearingService] */

undefined8 FUN_108e9a944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e9a94c; end: 108e9a953; -[CTPRepositoryServices experiments] */

undefined8 FUN_108e9a94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e9a954; end: 108e9a99b; -[CTPRepositoryServices .cxx_destruct] */

void FUN_108e9a954(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9a99c; end: 108e9aa0f; -[SCCustomStickerManagerServices initWithCustomStickerManager:] */

undefined1 * FUN_108e9a99c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feea8;
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



/* Entry: 108e9aa10; end: 108e9aa17; -[SCCustomStickerManagerServices customStickerManager] */

undefined8 FUN_108e9aa10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e9aa18; end: 108e9aa23; -[SCCustomStickerManagerServices .cxx_destruct] */

void FUN_108e9aa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9aa24; end: 108e9aa97; -[CTPUserDataFeedServices initWithUserDataFeedService:] */

undefined1 * FUN_108e9aa24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feeb0;
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



/* Entry: 108e9aa98; end: 108e9aaa3; -[CTPUserDataFeedServices .cxx_destruct] */

void FUN_108e9aa98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9aaa4; end: 108e9ac07; -[CTPUserDataUpdateJob initWithCoder:] */

undefined1 * FUN_108e9aaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feeb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e9ac08; end: 108e9ad5f; -[CTPUserDataUpdateJob initWithExternalId:jobType:category:state:favoritedState:error:startTime:completionTime:] */

undefined1 *
FUN_108e9ac08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126feeb8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e9ad60; end: 108e9ad83; -[CTPUserDataUpdateJob copyWithZone:] */

undefined8 FUN_108e9ad60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e9ad84; end: 108e9ae5b; -[CTPUserDataUpdateJob encodeWithCoder:] */

void FUN_108e9ad84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110efd938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efd958);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110efd978);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110efd998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110efd9b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110dacbf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110efd9d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110efd9f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e9ae5c; end: 108e9aeff; -[CTPUserDataUpdateJob hash] */

undefined8 * FUN_108e9ae5c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e9aff8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e9b004;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])) && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[5];
        if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[6];
          if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[7];
            if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[8];
              if (puVar6 != (undefined8 *)param_3[8]) {
                func_0x00010c071ae0();
                goto LAB_108e9b004;
              }
              goto LAB_108e9aff8;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e9b004:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e9af00; end: 108e9b01f; -[CTPUserDataUpdateJob isEqual:] */

long FUN_108e9af00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e9aff8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e9b004;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if (lVar3 != *(long *)(param_3 + 0x40)) {
                func_0x00010c071ae0();
                goto LAB_108e9b004;
              }
              goto LAB_108e9aff8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e9b004:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e9b020; end: 108e9b027; -[CTPUserDataUpdateJob externalId] */

undefined8 FUN_108e9b020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e9b028; end: 108e9b02f; -[CTPUserDataUpdateJob jobType] */

undefined8 FUN_108e9b028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e9b030; end: 108e9b037; -[CTPUserDataUpdateJob category] */

undefined8 FUN_108e9b030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e9b038; end: 108e9b03f; -[CTPUserDataUpdateJob state] */

undefined8 FUN_108e9b038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e9b040; end: 108e9b047; -[CTPUserDataUpdateJob favoritedState] */

undefined8 FUN_108e9b040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e9b048; end: 108e9b04f; -[CTPUserDataUpdateJob error] */

undefined8 FUN_108e9b048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e9b050; end: 108e9b057; -[CTPUserDataUpdateJob startTime] */

undefined8 FUN_108e9b050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e9b058; end: 108e9b05f; -[CTPUserDataUpdateJob completionTime] */

undefined8 FUN_108e9b058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108e9b060; end: 108e9b0b3; -[CTPUserDataUpdateJob .cxx_destruct] */

void FUN_108e9b060(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e9b0b4; end: 108e9b0cf; +[CTPUserDataUpdateJobBuilder userDataUpdateJob] */

void FUN_108e9b0b4(void)

{
  _objc_alloc_init(PTR_PTR_1126be9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e9b0d0; end: 108e9b2f3; +[CTPUserDataUpdateJobBuilder userDataUpdateJobFromExistingUserDataUpdateJob:] */

void FUN_108e9b0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126be9b8;
  _objc_retain(param_3);
  func_0x00010c2919e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ad960(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c085920(param_3);
  puVar5 = puVar3;
  func_0x00010c2b1ea0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf33240(param_3);
  puVar6 = puVar5;
  func_0x00010c2aa3c0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c252440(param_3);
  puVar7 = puVar6;
  func_0x00010c2b9fa0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfa1240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2adac0(puVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2ad520(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c250f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b9f60(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf441c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar14 = puVar12;
  func_0x00010c2aab80(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 108e9b2f4; end: 108e9b33b; -[CTPUserDataUpdateJobBuilder build] */

void FUN_108e9b2f4(void)

{
  _objc_alloc(PTR_PTR_1126be9a8);
  func_0x00010c011260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e9b33c; end: 108e9b373; -[CTPUserDataUpdateJobBuilder withExternalId:] */

long FUN_108e9b33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e9b374; end: 108e9b37b; -[CTPUserDataUpdateJobBuilder withJobType:] */

void FUN_108e9b374(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108e9b37c; end: 108e9b383; -[CTPUserDataUpdateJobBuilder withCategory:] */

void FUN_108e9b37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108e9b384; end: 108e9b38b; -[CTPUserDataUpdateJobBuilder withState:] */

void FUN_108e9b384(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}


