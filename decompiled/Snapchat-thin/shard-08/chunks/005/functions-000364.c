/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106248268; end: 10624827f; -[SCSpotlightRepliesSectionDataProvider favByCreatorIconDelegate] */

void FUN_106248268(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106248280; end: 10624828b; -[SCSpotlightRepliesSectionDataProvider setFavByCreatorIconDelegate:] */

void FUN_106248280(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10624828c; end: 1062483af; -[SCSpotlightRepliesSectionDataProvider .cxx_destruct] */

void FUN_10624828c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062483b0; end: 1062484cb; -[SCSpotlightCommentsFavByCreatorModalTrayViewController initWithCommentPosterThumbnailFetcher:spotlightRepliesViewCountManager:creatorId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062483b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f0910;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112743ea4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf4e4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112743ea8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112743ea8) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c9168;
    _objc_alloc();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c01c5c0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112743eac);
    *(undefined **)((long)puVar1 + (long)_DAT_112743eac) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062484cc; end: 106248f63; -[SCSpotlightCommentsFavByCreatorModalTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062484cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lStack_e8;
  undefined *puStack_e0;
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
  puStack_e0 = PTR_PTR_1126f0910;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(&lStack_e8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar34 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar32 = (long)_DAT_112743eb0;
  uVar30 = *(undefined8 *)(param_1 + lVar32);
  *(undefined **)(param_1 + lVar32) = puVar1;
  _objc_release(uVar30);
  _objc_release(lVar34);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar32));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar32));
  lVar34 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar34);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar34;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar32);
  uStack_90 = uVar30;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar32);
  uStack_88 = uVar31;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar32);
  uStack_80 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(uVar4);
  _objc_release(uVar31);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(uVar3);
  _objc_release(uVar30);
  _objc_release(lVar33);
  _objc_release(lVar34);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar38 = (long)_DAT_112743eb4;
  uVar30 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar1;
  _objc_release(uVar30);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_1 + lVar38));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar38));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar32));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar33 = (long)_DAT_112743eb8;
  uVar30 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar1;
  _objc_release(uVar30);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar33));
  lVar34 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292b20();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112743eac);
  func_0x00010bfc6480(uVar30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar33));
  _objc_release(uVar30);
  _objc_release(lVar34);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar33));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR_PTR_1126c9050;
  _objc_alloc_init();
  lVar34 = (long)_DAT_112743ebc;
  uVar30 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar1;
  _objc_release(uVar30);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar34));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar33));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar35 = (long)_DAT_112743ec0;
  uVar30 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar1;
  _objc_release(uVar30);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar35));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar35));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar35));
  _objc_release(puVar1);
  uVar30 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c213040(uVar30);
  func_0x000106262130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar35));
  _objc_release(uVar30);
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar35));
  func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar35));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar35));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar36 = (long)_DAT_112743ec4;
  uVar30 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar30);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar36));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar36));
  _objc_release(puVar1);
  uVar30 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c213040(uVar30);
  func_0x000106262148();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar36));
  _objc_release(uVar30);
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar36));
  func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar36));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar36));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_112743ec8;
  uVar30 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar30);
  uVar31 = *(undefined8 *)(param_1 + lVar37);
  func_0x000106261b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar31);
  _objc_release(uVar30);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar37));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar37));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar37));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c1887e0(0x4038000000000000,*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar38);
  uStack_d8 = uVar30;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar38);
  uStack_d0 = uVar31;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar38);
  uStack_c8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar17;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar34);
  uStack_c0 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar34);
  uStack_b8 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar35);
  uStack_b0 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar36);
  uStack_a8 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar37);
  uStack_a0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar4);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar6);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar2);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar31);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar30);
  _objc_release(uVar12);
  _objc_release(uVar11);
  func_0x00010be10aa0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106248f64; end: 106248f9b; -[SCSpotlightCommentsFavByCreatorModalTrayViewController _didTapDismissButton] */

void FUN_106248f64(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106248f9c; end: 1062491d3; -[SCSpotlightCommentsFavByCreatorModalTrayViewController _fetchCreatorImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106248f9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar3 = &puStack_80;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112743ebc);
  lVar8 = (long)_DAT_112743ea8;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf5b440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x000108ffe710();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108ffef38(0,uVar6,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185d40(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1062491d4;
  puStack_68 = &UNK_110917d40;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  lVar4 = *(long *)(param_1 + lVar8);
  func_0x00010c116d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    lVar4 = *(long *)(param_1 + lVar8);
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 == 0) goto LAB_106249184;
    uVar7 = *(undefined8 *)(param_1 + _DAT_112743ea4);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf5b440(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf1c0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf1acc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5580(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112743ea4);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c116d20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa98a0(uVar1);
  }
  _objc_release(uVar6);
LAB_106249184:
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1062491d4; end: 106249287;  */

void FUN_1062491d4(long param_1,int param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106249288;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 106249288; end: 10624929b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106249288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c185d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112743ebc),
             PTR_s_setCreatorProfileImage__11263f170,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10624929c; end: 1062492bb; -[SCSpotlightCommentsFavByCreatorModalTrayViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624929c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112743ecc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062492bc; end: 1062492cf; -[SCSpotlightCommentsFavByCreatorModalTrayViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062492bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743ecc,param_3);
  return;
}



/* Entry: 1062492d0; end: 1062493ab; -[SCSpotlightCommentsFavByCreatorModalTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062492d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743ecc);
  _objc_storeStrong(param_1 + _DAT_112743ea8,0);
  _objc_storeStrong(param_1 + _DAT_112743eac,0);
  _objc_storeStrong(param_1 + _DAT_112743ec8,0);
  _objc_storeStrong(param_1 + _DAT_112743ec4,0);
  _objc_storeStrong(param_1 + _DAT_112743ec0,0);
  _objc_storeStrong(param_1 + _DAT_112743ebc,0);
  _objc_storeStrong(param_1 + _DAT_112743eb8,0);
  _objc_storeStrong(param_1 + _DAT_112743eb4,0);
  _objc_storeStrong(param_1 + _DAT_112743eb0,0);
  _objc_storeStrong(param_1 + _DAT_112743ea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743ed0,0);
  return;
}



/* Entry: 1062493ac; end: 1062497fb; -[SCSpotlightRepliesTabBarsController initWithRepliesViewCountManager:snapID:] */

undefined8 *
FUN_1062493ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_a8 = PTR_PTR_1126f0918;
  puVar1 = &uStack_b0;
  puVar3 = PTR_s_init_1125d9248;
  uStack_b0 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = 0;
    _objc_retain(param_6);
    plVar19 = puVar1 + 4;
    lVar2 = *plVar19;
    *plVar19 = param_6;
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar18 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar18);
    lVar4 = *plVar19;
    func_0x00010c0f78e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b8,puVar1);
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0e0e60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_b8;
    _objc_copyWeak(auStack_c0,puVar3);
    lVar6 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,param_3,0x4043000000000000);
    puVar20 = puVar1 + 7;
    uVar18 = *puVar20;
    *puVar20 = puVar5;
    _objc_release(uVar18);
    func_0x00010c1fbe00(*puVar20);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c21e900();
    func_0x00010befbb60(puVar1[7]);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = puVar1[7];
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    puStack_a0 = puVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[7];
    func_0x00010bf34860(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    puStack_98 = puVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    puStack_90 = puVar14;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar18);
    _objc_release(puVar8);
    func_0x00010beb0500(puVar1);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(lVar4);
  }
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume(param_6);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)(param_6 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bedcde0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1062497fc; end: 106249843;  */

void FUN_1062497fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedcde0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106249844; end: 1062498ab; -[SCSpotlightRepliesTabBarsController setSelectedTab:] */

void FUN_106249844(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fade0();
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x48) = param_3;
  }
  return;
}



/* Entry: 1062498ac; end: 106249a5f; -[SCSpotlightRepliesTabBarsController _setupTabBarViewItems] */

void FUN_1062498ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b09e0;
  puVar2 = puVar1;
  FUN_106261aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_s__handleTabBarTap__11252feb0;
  func_0x00010c267620(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e46078,param_1
                      ,PTR_s__handleTabBarTap__11252feb0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1fadc0(puVar3,param_2,1);
  func_0x00010befa120(puVar1,param_2,puVar3);
  puVar2 = PTR_PTR_1126b09e0;
  lVar4 = param_1;
  func_0x00010bdf11c0(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267620(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110e46098,param_1,
                      puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c3ac8;
  _objc_alloc();
  func_0x00010c020480();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar5;
  _objc_release(uVar6);
  func_0x00010c1f7c60(*(undefined8 *)(param_1 + 8),param_2,1);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x38));
  _CGRectGetHeight();
  func_0x00010c0699c0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x38));
  _CGRectInset();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 8));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8));
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106249a60; end: 106249aaf; -[SCSpotlightRepliesTabBarsController _handleTabBarTap:] */

void FUN_106249a60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfecde0();
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106249ab0; end: 106249b57; -[SCSpotlightRepliesTabBarsController _createPendingReplyTitle:] */

void FUN_106249ab0(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    func_0x000106261ab8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106261ad0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b10c8;
    func_0x00010c22d8c0((double)param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106249b58; end: 106249ba7; -[SCSpotlightRepliesTabBarsController _updatePendingTabTextWithCount:] */

void FUN_106249b58(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010c131780(param_3);
  lVar1 = param_1;
  func_0x00010bdf11c0(param_1,param_2,param_3 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f60(*(undefined8 *)(param_1 + 8),param_2,lVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106249ba8; end: 106249baf; -[SCSpotlightRepliesTabBarsController containerView] */

undefined8 FUN_106249ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106249bb0; end: 106249bc7; -[SCSpotlightRepliesTabBarsController delegate] */

void FUN_106249bb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106249bc8; end: 106249bd3; -[SCSpotlightRepliesTabBarsController setDelegate:] */

void FUN_106249bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106249bd4; end: 106249bdb; -[SCSpotlightRepliesTabBarsController selectedTab] */

undefined8 FUN_106249bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106249bdc; end: 106249c43; -[SCSpotlightRepliesTabBarsController .cxx_destruct] */

void FUN_106249bdc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106249c44; end: 10624a41b; -[SCSpotlightRepliesTabsController initWithRepliesDataFetcher:actionHandler:isCreatorMode:isCommentAdmin:spotlightRepliesRequestSender:snapInteractionInfo:identifierOfCompositeStoryId:reactionManager:bitmojiSelfieProvider:avatarProvider:repliesViewCountManager:repliesLogger:spotlightRepliesUpdateAnnouncer:spotlightRepliesFeatureSettingsManager:circumstanceEngine:userPreferences:repliesActionConfig:valdiRuntimeProvider:mentionsScopeExposer:snapchatterObservableRepository:snapchattersSynchronousDataFetcher:commentPosterThumbnailFetcher:spotlightRepliesDataMutator:storiesConfigProvider:commentsSnapReplyActionsConfig:commentsStickerPickerExposer:commentsAttachmentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106249c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puVar2 = &UNK_10f370c2a;
  func_0x0001000ba800();
  puStack_70 = PTR_PTR_1126f0920;
  puVar3 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_112743ef8;
    _objc_retain(param_25);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_25;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743efc;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_17;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f00;
    _objc_retain(param_19);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_19;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_112743f04;
    _objc_retain(param_27);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar8);
    *(undefined8 *)((long)puVar3 + lVar8) = param_27;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f08;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_14;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f0c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_3;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f10;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_4;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_112743f14) = param_5;
    *(undefined1 *)((long)puVar3 + (long)_DAT_112743f18) = param_6;
    lVar7 = (long)_DAT_112743f1c;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_15;
    _objc_release(uVar4);
    uVar4 = param_8;
    func_0x00010c23fc20(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_13;
    func_0x00010bf4e4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c9178;
    _objc_alloc();
    func_0x00010bf8ff60();
    func_0x00010c0086e0();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112743f20);
    *(undefined **)((long)puVar3 + (long)_DAT_112743f20) = puVar6;
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c9178;
    _objc_alloc();
    func_0x00010c0086e0();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112743f24);
    *(undefined **)((long)puVar3 + (long)_DAT_112743f24) = puVar6;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f28;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_7;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f2c;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_8;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f30;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_9;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f34;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_11;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f38;
    _objc_retain(param_12);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_12;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f3c;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_13;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar3 + (long)_DAT_112743f40) = 0;
    lVar7 = (long)_DAT_112743f44;
    _objc_retain(param_18);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_18;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f48;
    _objc_retain(param_24);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_24;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f4c;
    _objc_retain(param_29);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_29;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f50;
    _objc_retain(param_16);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_16;
    _objc_release(uVar4);
    uVar4 = param_17;
    func_0x000108f4b110();
    *(char *)((long)puVar3 + (long)_DAT_112743f54) = (char)uVar4;
    lVar7 = (long)_DAT_112743f58;
    _objc_retain(param_26);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_26;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f5c;
    _objc_retain(param_28);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_28;
    _objc_release(uVar4);
    uVar4 = param_15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
    func_0x00010bfa6300(puVar3);
    uVar4 = param_19;
    func_0x00010bf6a840();
    if ((int)uVar4 != 0) {
      func_0x00010bfa6300(puVar3);
    }
    iVar1 = (int)*(undefined8 *)((long)puVar3 + lVar8);
    func_0x00010bf924a0();
    if (iVar1 != 0) {
      func_0x00010be14020(puVar3);
    }
    func_0x00010beb0540(puVar3);
    func_0x00010beac260(puVar3);
    func_0x00010beab960(puVar3);
    lVar7 = (long)_DAT_112743f60;
    _objc_retain(param_22);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_22;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f64;
    _objc_retain(param_21);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_21;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f68;
    _objc_retain(param_20);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_20;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112743f6c;
    _objc_retain(param_23);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined8 *)((long)puVar3 + lVar7) = param_23;
    _objc_release(uVar4);
    func_0x00010beb9d40(puVar3);
    _objc_release(uVar5);
  }
  func_0x0001000e2a84(puVar2);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10624a41c; end: 10624a4db; -[SCSpotlightRepliesTabsController navigateToPendingTab] */

void FUN_10624a41c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10624a4dc; end: 10624a507;  */

void FUN_10624a4dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be623a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624a508; end: 10624a537; -[SCSpotlightRepliesTabsController mentionsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624a508(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743f64);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10624a538; end: 10624a603; -[SCSpotlightRepliesTabsController _navigateToPendingTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624a538(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x0001000ba800(&UNK_10f370c61);
  if ((*(byte *)(param_1 + _DAT_112743f14) & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb5e0(*(undefined8 *)(param_1 + _DAT_112743f70),param_2,1);
    lVar2 = (long)_DAT_112743f74;
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar2),param_2,puVar1,0,0);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10624a604; end: 10624a65f; -[SCSpotlightRepliesTabsController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10624a604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41218);
  if ((int)param_3 != 0) {
    func_0x00010be2ef60(param_1,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10624a660; end: 10624a6bf; -[SCSpotlightRepliesTabsController _fetchSnapReplies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624a660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743f10),param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10624a6c0; end: 10624ac5b; -[SCSpotlightRepliesTabsController _handleReplyToCommentEventWithExtraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624a6c0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c0e98;
  _objc_opt_class(PTR_PTR_1126c0e98);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c131f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08fa60();
  if (uVar5 == 0) {
    func_0x000106261c20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = uVar1;
    func_0x00010c131f40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106261dd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = uVar1;
  if (uVar3 == 0) {
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar12 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain(uVar12);
  _objc_release(uVar7);
  puVar8 = (undefined *)0x0;
  if (uVar3 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR_PTR_1126c9180;
  _objc_alloc(PTR_PTR_1126c9180);
  func_0x00010c0368a0();
  _objc_release(uVar12);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    lVar16 = (long)_DAT_112743f7c;
  }
  else {
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar3);
    lVar16 = (long)_DAT_112743f7c;
    func_0x00010c185100(*(undefined8 *)(param_2 + lVar16));
  }
  func_0x00010c222720(*(undefined8 *)(param_2 + lVar16));
  puVar11 = PTR_PTR_1126c9188;
  _objc_alloc();
  func_0x00010c1321a0(uVar1);
  uVar3 = uVar1;
  func_0x00010c132180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010c131f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffe80(param_1);
  _objc_release(uVar12);
  _objc_release(uVar3);
  func_0x00010befc520(*(undefined8 *)(param_2 + lVar16));
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10624ac5c;
  puStack_80 = &UNK_110917db0;
  _objc_retain(puVar11);
  ppuVar13 = &puStack_98;
  puStack_78 = puVar11;
  _objc_retainBlock(ppuVar13);
  uVar3 = uVar1;
  func_0x00010c131fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  uVar15 = *(undefined8 *)(param_2 + _DAT_112743f48);
  uVar3 = uVar1;
  if (uVar12 == 0) {
    func_0x00010c131f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010c131f20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c131f00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5580(uVar15);
    _objc_release(uVar7);
    _objc_release(uVar12);
  }
  else {
    func_0x00010c131fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa98a0(uVar15);
  }
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bf529e0();
  if (uVar12 != 0) {
    uVar14 = *(undefined8 *)(param_2 + _DAT_112743f58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf1c3e0();
    if ((int)uVar15 == 0) {
      cVar2 = *(char *)(param_2 + _DAT_112743f14);
      _objc_release(uVar14);
      _objc_release(uVar3);
      if (cVar2 != '\x01') goto LAB_10624abdc;
    }
    else {
      _objc_release(uVar14);
      _objc_release(uVar3);
    }
    uVar12 = uVar1;
    func_0x00010c131a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar15 = *(undefined8 *)(param_2 + _DAT_112743f4c);
    _objc_retain(puVar11);
    func_0x00010bfa7820(uVar15);
    _objc_release(puVar11);
  }
  _objc_release(uVar3);
LAB_10624abdc:
  func_0x00010be75e60(param_2);
  _objc_release(ppuVar13);
  _objc_release(puStack_78);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10624ac5c; end: 10624ac7f;  */

void FUN_10624ac5c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c283af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_updateAvatarImage__11267e8e0);
    return;
  }
  return;
}



/* Entry: 10624ac80; end: 10624adcb; -[SCSpotlightRepliesTabsController _populateMentionBarWithThreadedUsersForSpotlightReply:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624ac80(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f370c8d;
  func_0x0001000ba800(&UNK_10f370c8d);
  lVar2 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  lVar2 = param_3;
  if (lVar3 == 0) {
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112743f0c);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10624adcc;
  puStack_60 = &UNK_110860d88;
  lStack_58 = param_1;
  _objc_retain(param_3);
  lStack_50 = param_3;
  uStack_48 = lVar3 != 0;
  func_0x00010befff80(uVar4,param_2,lVar2,&puStack_78);
  _objc_release(lStack_50);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10624adcc; end: 10624addf;  */

void FUN_10624adcc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be826f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processThreadedReplies_forSpotl_11257e358,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 10624ade0; end: 10624b34b; -[SCSpotlightRepliesTabsController _processThreadedReplies:forSpotlightReply:isThreadedReply:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624ade0(long param_1,undefined8 param_2,undefined *param_3,long param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long *plStack_1d8;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10624b34c;
  uStack_100 = 0x10624b35c;
  uStack_f8 = 0;
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
  }
  else {
    _objc_retain(param_4);
    puStack_128 = &uStack_120;
    puVar2 = param_3;
    lStack_130 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    plStack_1d8 = &lStack_130;
  }
  if (param_5 == 0) {
    _objc_retain(param_4);
    lVar14 = param_4;
  }
  else {
    lVar14 = *(long *)(param_1 + _DAT_112743f0c);
    lVar3 = param_4;
    func_0x00010c0f3b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = lVar14;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126b28d8;
    _objc_alloc(PTR_PTR_1126b28d8);
    lVar3 = lVar14;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010be5f560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar14;
    func_0x00010c131f40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      func_0x000106261c20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = lVar14;
      func_0x00010c131f40(lVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = lVar14;
    func_0x00010c131f00(lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar14;
    func_0x00010c131f20(lVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c280(puVar2);
    func_0x00010befa120(puVar4);
    _objc_release(puVar2);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar16);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  if (puStack_118[5] != 0) {
    func_0x00010c12d360(puVar4);
    func_0x00010c066b00(puVar4);
    uVar11 = puStack_118[5];
    func_0x00010c2923e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    uVar13 = 0;
    if (puVar2 != (undefined *)0x0) {
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(param_3);
          }
          uVar13 = *(undefined8 *)((long)puVar16 * 8);
          uVar15 = uVar13;
          func_0x00010c131f60();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar15;
          func_0x00010c0720c0();
          _objc_release(uVar15);
          if ((int)uVar12 != 0) {
            func_0x00010c131f80(uVar13);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10624b1ec;
          }
          puVar16 = puVar16 + 1;
        } while (puVar2 != puVar16);
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
      uVar13 = 0;
    }
LAB_10624b1ec:
    _objc_release(param_3);
    lVar3 = param_4;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar15 = puStack_118[5];
      func_0x00010bf85d80(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x000108f4b634();
      func_0x00010bdc76a0(param_1);
      _objc_release(uVar15);
    }
    _objc_release(uVar13);
    _objc_release(uVar11);
  }
  func_0x00010beb9d40(param_1);
  _objc_release(lVar14);
  _objc_release(puVar4);
  if (puVar1 != (undefined *)0x0) {
    _objc_release(*plStack_1d8);
  }
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar14 = 8;
    __Block_object_dispose(&uStack_120);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(lVar14 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 10624b34c; end: 10624b363;  */

void FUN_10624b34c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10624b364; end: 10624b5a7;  */

void FUN_10624b364(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b28d8;
    _objc_alloc();
    lVar8 = param_2;
    func_0x00010c131f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c131f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5f560(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c131f40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      func_0x000106261c20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_2;
      func_0x00010c131f40(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_2;
    func_0x00010c131f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c131f20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c280();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(lVar1);
    _objc_release(lVar8);
    puVar2 = puVar10;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c131f60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0720c0();
    _objc_release(uVar9);
    _objc_release(puVar2);
    if ((int)puVar7 != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(puVar10);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined **)(lVar8 + 0x28) = puVar10;
      _objc_release(uVar9);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10624b5a8; end: 10624b603; -[SCSpotlightRepliesTabsController currentTabScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624b5a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743f80);
  func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_112743f84));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10624b604; end: 10624b64f; -[SCSpotlightRepliesTabsController tabsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624b604(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x7c;
  if (*(char *)(param_1 + _DAT_112743f14) == '\0') {
    lVar1 = 0x90;
  }
  uVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_112743ef8 + lVar1));
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10624b650; end: 10624b65f; -[SCSpotlightRepliesTabsController tabBarsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624b650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743f70),PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 10624b660; end: 10624b8af; -[SCSpotlightRepliesTabsController fetchDataWithApprovalState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624b660(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  if ((param_3 & 0xfffffffffffffffe) == 2) {
    uVar2 = param_1;
    func_0x00010be9cc80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf339e0();
    if (uVar3 != 1) {
      func_0x00010c17a380(uVar2);
      if ((param_3 == 3) && (uVar3 = param_1, func_0x00010be3f6a0(), (uVar3 & 1) == 0)) {
        func_0x00010c2230e0(*(undefined8 *)(param_1 + (long)_DAT_112743f20));
        func_0x00010be155a0(param_1);
      }
      uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112743ef8);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112743f08);
      _objc_retain(uVar9);
      _objc_initWeak(auStack_68,param_1);
      lVar4 = *(long *)(param_1 + (long)_DAT_112743f0c);
      func_0x00010c0f2940();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = (long)_DAT_112743f2c;
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112743f28);
      uVar5 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c241220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c23fc20(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = param_3;
      uStack_70 = lVar4 == 0;
      _objc_retain(uVar9);
      _objc_retain(uVar8);
      _objc_copyWeak(auStack_80,auStack_68);
      func_0x00010bfa9ca0(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_80);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(lVar4);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10624b8b0; end: 10624b9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624b8b0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\x01') && (*(long *)(param_1 + 0x38) == 3)) {
      func_0x00010c0ab8c0(*(undefined8 *)(param_1 + 0x20));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa5a0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befaf40();
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x38) == 3) {
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained();
      if (lVar2 != 0) {
        uVar1 = *(undefined8 *)(lVar2 + _DAT_112743f88);
        func_0x00010c1317e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185b80();
        _objc_release(uVar1);
      }
      _objc_release(lVar2);
    }
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcd00();
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10624b9f8; end: 10624baa3; -[SCSpotlightRepliesTabsController showKeyboardInLiveTabWithGestureType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624b9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_112743f84) == 0) {
    lVar4 = (long)_DAT_112743f7c;
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c073040();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c185260(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c26ca80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf179a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10624baa4; end: 10624bb1b; -[SCSpotlightRepliesTabsController addReplyAttachmentToLiveTab:gestureType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624baa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112743f84) != 0) {
    return;
  }
  lVar2 = (long)_DAT_112743f7c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c185260(uVar1,param_2,param_4);
  func_0x00010befaf60(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10624bb1c; end: 10624bbdb; -[SCSpotlightRepliesTabsController _setupTabBarsControllerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624bb1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + _DAT_112743f14) == '\x01') {
    puVar1 = PTR_PTR_1126c9190;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112743f2c);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e500();
    lVar4 = (long)_DAT_112743f70;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c185b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112743f10),PTR_s_setCreatorApprovalDelegate__11263f0e8
               ,param_1);
    return;
  }
  return;
}



/* Entry: 10624bbdc; end: 10624beff; -[SCSpotlightRepliesTabsController _setupDisplayedTabViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624bbdc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  func_0x0001000ba800();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar7 = (long)_DAT_112743f80;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112743f3c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112743f2c);
  func_0x00010c23fc20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c9198;
  _objc_alloc();
  lVar1 = (long)_DAT_112743f14;
  lVar2 = (long)_DAT_112743f20;
  func_0x00010c061cc0();
  lVar8 = (long)_DAT_112743f88;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar3;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c1317e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112743f7c;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = uVar4;
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8));
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c26bba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743f8c);
  *(undefined8 *)(param_1 + _DAT_112743f8c) = uVar4;
  _objc_release(uVar5);
  func_0x00010c19a480(*(undefined8 *)(param_1 + lVar2));
  if ((*(byte *)(param_1 + lVar1) & 1) != 0) {
    puVar3 = PTR_PTR_1126c9198;
    _objc_alloc(PTR_PTR_1126c9198);
    func_0x00010c061cc0();
    func_0x00010c18b5e0();
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar3);
  }
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10624bf00; end: 10624c0cb; -[SCSpotlightRepliesTabsController _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624bf00(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = param_1;
  func_0x00010bcbeb30();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  }
  else {
    puVar3 = PTR_PTR_1126c91a0;
    _objc_opt_new(PTR_PTR_1126c91a0);
  }
  func_0x00010c1f7ac0();
  func_0x00010c1c8300(0,puVar3);
  func_0x00010c1c82c0(0,puVar3);
  func_0x00010c1f93e0(0,0,0,0,puVar3);
  puVar4 = PTR_PTR_1126c91a8;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar4,param_2,puVar3);
  lVar7 = (long)_DAT_112743f74;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar4;
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar4);
  _objc_release();
  iVar1 = (int)puVar4;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bcbeb30();
  uVar5 = 3;
  if (iVar1 != 0) {
    uVar5 = 4;
  }
  func_0x00010c1fbe00(uVar6,param_2,uVar5);
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar7),param_2,1);
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar7),param_2,2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar7),param_2,0);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  puVar4 = PTR_PTR_1126c91b0;
  _objc_opt_class(PTR_PTR_1126c91b0);
  func_0x00010c126000(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110e460b8);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar7),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10624c0cc; end: 10624c0d3; -[SCSpotlightRepliesTabsController numberOfSectionsInCollectionView:] */

undefined8 FUN_10624c0cc(void)

{
  return 1;
}



/* Entry: 10624c0d4; end: 10624c0e3; -[SCSpotlightRepliesTabsController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743f80),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10624c0e4; end: 10624c187; -[SCSpotlightRepliesTabsController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c0e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e460b8,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743f80);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115e0(param_3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10624c188; end: 10624c1af; -[SCSpotlightRepliesTabsController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10624c188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112743f74));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10624c1b0; end: 10624c2a7; -[SCSpotlightRepliesTabsController didSelectTab:onTabBarController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f370d28;
  func_0x0001000ba800(&UNK_10f370d28);
  func_0x00010be02c60(param_1);
  func_0x00010be13960(param_1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_112743f74),param_2,puVar2,9,1);
  *(undefined8 *)(param_1 + _DAT_112743f84) = param_3;
  func_0x00010be598a0(param_1,param_2,param_3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10624c2a8; end: 10624c3bf; -[SCSpotlightRepliesTabsController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c2a8(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_6);
  puVar1 = &UNK_10f370d5a;
  func_0x0001000ba800(&UNK_10f370d5a);
  lVar3 = (long)_DAT_112743f74;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar3));
  uVar2 = param_6;
  func_0x00010c081660();
  if (((uVar2 & 1) != 0) || (uVar2 = param_6, func_0x00010c070ea0(), (uVar2 & 1) != 0)) {
    dVar4 = (double)(long)(param_1 / param_3);
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar4 = (double)NEON_fminnm(dVar4,0x3ff0000000000000);
    lVar3 = (long)dVar4;
    func_0x00010be13960(param_4,param_5,lVar3);
    func_0x00010c1fb5e0(*(undefined8 *)(param_4 + _DAT_112743f70),param_5,lVar3);
    func_0x00010be02c60(param_4);
    *(long *)(param_4 + _DAT_112743f84) = lVar3;
    func_0x00010be598a0(param_4,param_5,lVar3);
  }
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10624c3c0; end: 10624c417; -[SCSpotlightRepliesTabsController _logSwitchTabToIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c3c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112743f40;
  if (*(long *)(param_1 + lVar1) != param_3) {
    func_0x00010bfd2b80(*(undefined8 *)(param_1 + _DAT_112743f08),param_2,param_3 != 0);
  }
  *(long *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10624c418; end: 10624c41b; -[SCSpotlightRepliesTabsController repliesTabViewDidScrollToEnd:] */

void FUN_10624c418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performPaginationForTabViewMode_11257a260);
  return;
}



/* Entry: 10624c41c; end: 10624c4db; -[SCSpotlightRepliesTabsController repliesTabViewKeyBoardWillShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c41c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112743f90) == 0) {
    func_0x00010bea92a0(param_1);
  }
  else {
    func_0x00010beb8d20(param_1);
  }
  lVar1 = *(long *)(param_1 + _DAT_112743f44);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624c4dc; end: 10624c4ff; -[SCSpotlightRepliesTabsController repliesTabViewKeyBoardWillHide] */

void FUN_10624c4dc(undefined8 param_1)

{
  func_0x00010be356e0();
                    /* WARNING: Could not recover jumptable at 0x00010bfe1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideExplainerCopy_1125d6168);
  return;
}



/* Entry: 10624c500; end: 10624c533; -[SCSpotlightRepliesTabsController hideExplainerCopy] */

void FUN_10624c500(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624c534; end: 10624c53b; -[SCSpotlightRepliesTabsController didRemoveReplyFromPendingSection:] */

void FUN_10624c534(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__canTriggerPaginationOnTabBarTab_1125541f0,1)
  ;
  return;
}



/* Entry: 10624c53c; end: 10624c543; -[SCSpotlightRepliesTabsController didRemoveReplyFromApprovedSection:] */

void FUN_10624c53c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__canTriggerPaginationOnTabBarTab_1125541f0,0)
  ;
  return;
}



/* Entry: 10624c544; end: 10624c5e3; -[SCSpotlightRepliesTabsController didTapOnCancelReplyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c544(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c9180;
  _objc_alloc(PTR_PTR_1126c9180);
  puVar2 = puVar1;
  func_0x000106261da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0368a0(puVar1);
  lVar3 = (long)_DAT_112743f7c;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c12ebe0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf83c40(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010beb9d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showMentionBarWithThreadedParti_11258c0f8,0)
  ;
  return;
}



/* Entry: 10624c5e4; end: 10624c683; -[SCSpotlightRepliesTabsController _mentionsUserNameForUserWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = *(undefined ***)(param_1 + _DAT_112743f6c);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010c0d4260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar2);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c294420(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10624c684; end: 10624c6fb; -[SCSpotlightRepliesTabsController _isCurrentViewerSnapCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10624c684(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112743f2c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf41fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c23fc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10624c6fc; end: 10624cccf; -[SCSpotlightRepliesTabsController _updateMentionsObservableWithThreadedParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624c6fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puStack_d8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f370d95;
  func_0x0001000ba800();
  lVar18 = *(long *)(param_1 + (long)_DAT_112743f3c);
  lVar19 = (long)_DAT_112743f2c;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c23fc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf41fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be5f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar13 = param_1;
  func_0x00010be3f6a0();
  if ((uVar13 & 1) == 0) {
    lVar4 = lVar18;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar4;
    func_0x00010c08fa60();
    if (lVar12 == 0) {
      puStack_d8 = (undefined *)0x0;
    }
    else {
      puStack_d8 = PTR_PTR_1126b28d8;
      _objc_alloc();
      lVar12 = lVar18;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar18;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_1;
      func_0x00010be5f560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar18;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fa60();
      lVar9 = lVar18;
      if (lVar8 == 0) {
        func_0x00010c294420(lVar18);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf85d80(lVar18);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar8 = lVar18;
      func_0x00010bf1acc0(lVar18);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar18;
      func_0x00010bf1c0a0(lVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05c280();
      _objc_release(lVar10);
      _objc_release(lVar8);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(uVar13);
      _objc_release(lVar5);
      _objc_release(lVar12);
    }
    _objc_release(lVar4);
  }
  else {
    puStack_d8 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126b28d8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf41fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_1 + lVar19);
  func_0x00010bf41fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c08fa60();
  uVar13 = uVar3;
  if (lVar4 != 0) {
    uVar13 = *(ulong *)(param_1 + lVar19);
    func_0x00010bf41fa0(uVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_112743f38);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + (long)_DAT_112743f34);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c280();
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  if (lVar4 != 0) {
    _objc_release(uVar13);
  }
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(uVar2);
  lVar19 = (long)_DAT_112743f60;
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar17;
  func_0x00010bf19580();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar17);
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0d4340();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puStack_d8);
  _objc_retain(param_3);
  _objc_retain(puVar6);
  uVar2 = uVar15;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + (long)_DAT_112743f94);
  *(undefined8 *)(param_1 + (long)_DAT_112743f94) = uVar14;
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(puStack_d8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(puVar6);
  _objc_release(puStack_d8);
  _objc_release(uVar3);
  _objc_release(lVar18);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10624ccd0; end: 10624ccef;  */

void FUN_10624ccd0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110917eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10624ccf0; end: 10624cea3;  */

void FUN_10624ccf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b28d8;
  _objc_alloc(PTR_PTR_1126b28d8);
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  lVar7 = param_2;
  if (lVar6 == 0) {
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c280(puVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10624cea4; end: 10624cec3;  */

void FUN_10624cea4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110917ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10624cec4; end: 10624d36f;  */

void FUN_10624cec4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bf119c();
  if (((int)uVar1 == 0) || (uVar1 = param_2, func_0x00010901ca64(), (uVar1 & 1) != 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b28d8;
    _objc_alloc(PTR_PTR_1126b28d8);
    uVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    uVar6 = param_2;
    if (uVar5 == 0) {
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c280(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10624d370; end: 10624d5cf; -[SCSpotlightRepliesTabsController _merlinMentionOnce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624d370(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = (long)_DAT_112743f98;
  lVar12 = *(long *)(param_1 + lVar13);
  if (lVar12 == 0) {
    if ((*(byte *)(param_1 + _DAT_112743f9c) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112743f9c) = 1;
      lVar12 = *(long *)(param_1 + _DAT_112743f6c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar12;
      func_0x00010c0d4260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      if (lVar1 == 0) {
        uVar11 = *(undefined8 *)(param_1 + lVar13);
        *(undefined8 *)(param_1 + lVar13) = 0;
        _objc_release(uVar11);
        lVar12 = 0;
      }
      else {
        puVar2 = PTR_PTR_1126b28d8;
        _objc_alloc();
        lVar12 = lVar1;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcf);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        lVar7 = lVar1;
        if (lVar6 == 0) {
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar6 = lVar1;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010bf1bae0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05c280(puVar2,param_2,lVar12,lVar3,puVar4,lVar7,lVar8,lVar10,3,0);
        uVar11 = *(undefined8 *)(param_1 + lVar13);
        *(undefined **)(param_1 + lVar13) = puVar2;
        _objc_release(uVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar6);
        _objc_release(lVar7);
        _objc_release(lVar5);
        _objc_release(puVar4);
        _objc_release(lVar3);
        _objc_release(lVar12);
        lVar12 = *(long *)(param_1 + lVar13);
        _objc_retain(lVar12);
      }
      _objc_release(lVar1);
    }
    else {
      lVar12 = 0;
    }
  }
  else {
    _objc_retain(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return;
}



/* Entry: 10624d5d0; end: 10624d65f; -[SCSpotlightRepliesTabsController _hideMentionBarIfVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624d5d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112743f78;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar1);
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_112743f64));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf773b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didHideMentionBar_1125bb690);
    return;
  }
  return;
}



/* Entry: 10624d660; end: 10624d7e7; -[SCSpotlightRepliesTabsController _reloadMentionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624d660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x0001000ba800(&UNK_10f370e08);
  func_0x00010be359c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743f68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c91b8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743f8c);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110917fc0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743f94);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112743f7c);
  func_0x00010c2741a0(uVar4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0518e0(puVar3,param_2,uVar1,uVar5,0,param_1,uVar4,uVar2,0,0,8);
  lVar6 = (long)_DAT_112743f78;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112743f64),param_2,
                      *(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10624d7e8; end: 10624d80b; -[SCSpotlightRepliesTabsController _showMentionBarWithThreadedParticipants:] */

void FUN_10624d7e8(undefined8 param_1)

{
  func_0x00010bedb940();
                    /* WARNING: Could not recover jumptable at 0x00010be8aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadMentionBar_112580448);
  return;
}



/* Entry: 10624d80c; end: 10624da13; -[SCSpotlightRepliesTabsController _setUpEmojiBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624d80c(double param_1,double param_2,double param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112743f90;
  puVar1 = param_4;
  if (*(long *)(param_4 + lVar7) == 0) {
    puVar1 = PTR_PTR_1126c91c0;
    _objc_alloc();
    puVar2 = puVar1;
    FUN_10623bf28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f5a0(puVar1,param_5,puVar2,param_4);
    uVar6 = *(undefined8 *)(param_4 + lVar7);
    *(undefined **)(param_4 + lVar7) = puVar1;
    _objc_release(uVar6);
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar7),param_5,param_4[_DAT_112743fa0]);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar7),param_5,0);
    func_0x00010c21e900(*(undefined8 *)(param_4 + lVar7),param_5,1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_4 + lVar7);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + lVar7);
    uStack_78 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_3;
    func_0x00010bf20c00(*(undefined8 *)(param_4 + _DAT_112743f88));
    uVar5 = uVar4;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_5,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010befc520(*(undefined8 *)(param_4 + _DAT_112743f7c),param_5,
                        *(undefined8 *)(param_4 + lVar7),1);
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    param_6 = puVar1;
    func_0x00010bef9040(*(undefined8 *)(param_4 + lVar7));
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  puVar2 = param_6;
  func_0x00010c252440();
  if (puVar2 == (undefined *)0x1) {
    puVar2 = param_6;
    func_0x00010c29bf00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_6,param_5,puVar2);
    _objc_release(puVar2);
    if (ABS(param_1) <= ABS(param_2)) {
      func_0x00010bf83c40(*(undefined8 *)(puVar1 + _DAT_112743f7c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10624da14; end: 10624daaf; -[SCSpotlightRepliesTabsController _handlePanOnEmojiBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624da14(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5,param_4,lVar1);
    _objc_release(lVar1);
    if (ABS(param_1) <= ABS(param_2)) {
      func_0x00010bf83c40(*(undefined8 *)(param_3 + _DAT_112743f7c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10624dab0; end: 10624db0b; -[SCSpotlightRepliesTabsController _fetchRepliesIfNeverFetchedWithIndex:] */

void FUN_10624dab0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 3;
  }
  lVar2 = param_1;
  func_0x00010be9cc80(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf339e0();
  if (lVar3 == 0) {
    func_0x00010bfa6300(param_1,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10624db0c; end: 10624dbf7; -[SCSpotlightRepliesTabsController _fetchViewerPendingReplies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624db0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743f28);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743f2c);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfab3a0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10624dbf8; end: 10624dc4f;  */

void FUN_10624dbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcd60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624dc50; end: 10624dce7; -[SCSpotlightRepliesTabsController _didCompleteFetchViewerPendingRepliesWithSuccess:spotlightReplies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624dc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((int)param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112743ef8);
    _objc_retain(param_4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befaf40();
    _objc_release(param_4);
    _objc_release(uVar1);
  }
  func_0x00010c2230e0(*(undefined8 *)(param_1 + _DAT_112743f20));
                    /* WARNING: Could not recover jumptable at 0x00010be28450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleDidCompleteFetchDataInLiv_112567ab0,param_3);
  return;
}



/* Entry: 10624dce8; end: 10624dd3f; -[SCSpotlightRepliesTabsController _sectionDataProviderWithApprovalState:] */

void FUN_10624dce8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 & 0xfffffffffffffffe) == 2) {
    lVar1 = 0x2c;
    if (param_3 != 2) {
      lVar1 = 0x28;
    }
    uVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_112743ef8 + lVar1));
    _objc_retain(uVar2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10624dd40; end: 10624ddcb; -[SCSpotlightRepliesTabsController _canTriggerPaginationOnTabBarTabIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624dd40(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112743f0c);
  if (param_3 == 0) {
    func_0x00010bfa9c60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa9c80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (10 < uVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be72310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performPaginationForTabViewMode_11257a260,param_3 != 0);
  return;
}



/* Entry: 10624ddcc; end: 10624de6b; -[SCSpotlightRepliesTabsController _didCompleteFetchDataWithApprovalState:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624ddcc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 2) {
    lVar2 = param_1;
    func_0x00010be9cc80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a380();
    if ((param_4 & 1) == 0) {
      func_0x00010c128f60(lVar2);
    }
    func_0x00010bedcd40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  uVar1 = 2;
  if ((int)param_4 == 0) {
    uVar1 = 3;
  }
  func_0x00010c1be4e0(*(undefined8 *)(param_1 + _DAT_112743f20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be28450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleDidCompleteFetchDataInLiv_112567ab0,param_4);
  return;
}



/* Entry: 10624de6c; end: 10624e043; -[SCSpotlightRepliesTabsController _handleDidCompleteFetchDataInLiveSectionWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624de6c(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar2 = param_1;
  func_0x00010be3f6a0();
  lVar8 = (long)_DAT_112743f20;
  lVar3 = *(long *)(param_1 + lVar8);
  func_0x00010c29f020();
  uVar4 = *(ulong *)(param_1 + lVar8);
  func_0x00010c09aa80();
  uVar7 = (uint)uVar2;
  if (lVar3 == 2) {
    uVar7 = 1;
  }
  uVar1 = uVar7;
  if (lVar3 == 3) {
    uVar1 = 1;
  }
  if (uVar1 == 1 && (uVar4 & 0xfffffffffffffffe) == 2) {
    uVar7 = uVar7 & uVar4 == 2;
    func_0x00010c17a380(*(undefined8 *)(param_1 + lVar8));
    lVar3 = (long)_DAT_112743f08;
    if (uVar7 == 0) {
      func_0x00010bf42080(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c128f60(*(undefined8 *)(param_1 + lVar8));
    }
    func_0x00010c24e4e0(*(undefined8 *)(param_1 + lVar3));
    lVar3 = *(long *)(param_1 + (long)_DAT_112743f7c);
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar3 != 0 && (uVar2 & 1) == 0) && (uVar7 == 1)) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112743f0c);
      func_0x00010c2a0000();
      _objc_initWeak(auStack_48,param_1);
      if (*(char *)(param_1 + (long)_DAT_112743f18) == '\x01') {
        uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112743f50);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfde180();
        uVar7 = (uint)uVar6 ^ 1;
        _objc_release(uVar5);
      }
      else {
        uVar7 = 0;
      }
      if ((lVar3 == 0) && ((uVar7 & 1) == 0)) {
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_10624e044;
        puStack_58 = &UNK_1108434b0;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        _objc_copyWeak(auStack_50,auStack_48);
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
        _objc_destroyWeak(auStack_50);
      }
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 10624e044; end: 10624e07b;  */

void FUN_10624e044(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c237f80(param_1,param_2,5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624e07c; end: 10624e167; -[SCSpotlightRepliesTabsController _updatePendingCountAfterPendingRequestIsComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e07c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743f3c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743f2c);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa9c40(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10624e168; end: 10624e1c7;  */

void FUN_10624e168(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c131780(param_2);
  _objc_release(param_2);
  func_0x00010bedcd80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624e1c8; end: 10624e2b7; -[SCSpotlightRepliesTabsController _updatePendingRepliesCountManagerIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e1c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112743f0c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c1317a0(uVar1,param_2,4);
  if (uVar1 >= param_3 && uVar1 != param_3) {
LAB_10624e204:
    uVar4 = *(undefined8 *)(param_1 + _DAT_112743f3c);
    puVar2 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112743f2c);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e3a0(puVar2,param_2,uVar1,uVar3,2);
    func_0x00010c1eae40(uVar4,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  if (uVar1 < param_3) {
    lVar5 = *(long *)(param_1 + lVar5);
    func_0x00010c0f2940(lVar5,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) goto LAB_10624e204;
  }
  return;
}



/* Entry: 10624e2b8; end: 10624e453; -[SCSpotlightRepliesTabsController _performPaginationForTabViewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e2b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = 3;
  }
  lVar3 = *(long *)(param_1 + _DAT_112743f0c);
  uVar4 = 3;
  if (param_3 == 1) {
    uVar4 = 4;
  }
  func_0x00010c0f2940(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112743ef8);
    _objc_retain(uVar6);
    lVar2 = (long)_DAT_112743f2c;
    uVar7 = *(undefined8 *)(param_1 + _DAT_112743f28);
    uVar4 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c23fc20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    uStack_60 = uVar1;
    _objc_copyWeak(auStack_68,auStack_58);
    func_0x00010bfa9ca0(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10624e454; end: 10624e51f;  */

void FUN_10624e454(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa5a0();
    _objc_release(param_4);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befaf40();
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624e520; end: 10624e533; -[SCSpotlightRepliesTabsController _didCompletePaginationRequestForState:success:] */

void FUN_10624e520(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  if ((param_3 == 2) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bedcd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePendingCountAfterPendingR_112594cf8)
    ;
    return;
  }
  return;
}



/* Entry: 10624e534; end: 10624e5a7; -[SCSpotlightRepliesTabsController _dismissLiveTabKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e534(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112743f80;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0dfd40(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1317e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83c40();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10624e5a8; end: 10624e71b; -[SCSpotlightRepliesTabsController _addMentionPersonToInputBar:replacementRange:replyPosterProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e5a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + _DAT_112743f78) != 0) {
    _objc_retain(param_6);
    lVar1 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    lVar3 = param_3;
    if (lVar2 == 0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e280b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126c9038;
    _objc_alloc(PTR_PTR_1126c9038);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c08fa60(puVar4);
    func_0x00010c05b140(puVar5,param_2,lVar1,puVar4,param_6,param_4,puVar6);
    _objc_release(param_6);
    _objc_release(lVar1);
    func_0x00010bef9fc0(*(undefined8 *)(param_1 + _DAT_112743f7c),param_2,puVar5,param_4,param_5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10624e71c; end: 10624e7ff; -[SCSpotlightRepliesTabsController didSelectMentionPerson:replacementRange:] */

void FUN_10624e71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10624e800;
  puStack_60 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10624e800; end: 10624e913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e800(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112743f2c;
    uVar3 = *(undefined8 *)(lVar1 + lVar5);
    func_0x00010c23fc20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112743f3c);
      uVar4 = *(undefined8 *)(lVar1 + lVar5);
      func_0x00010c23fc20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4e4a0(uVar2,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010bf25140(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    func_0x00010bdc76a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10624e914; end: 10624e95b; -[SCSpotlightRepliesTabsController willShowMentionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e914(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112743fa0) = 1;
  lVar1 = (long)_DAT_112743f90;
  func_0x00010bf9f580(*(undefined8 *)(param_1 + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10624e95c; end: 10624e99f; -[SCSpotlightRepliesTabsController didHideMentionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e95c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112743fa0) = 0;
  lVar1 = (long)_DAT_112743f90;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf9f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_fadeEmojiViewFromVisible__1125c5708,0);
  return;
}



/* Entry: 10624e9a0; end: 10624ea07; -[SCSpotlightRepliesTabsController didDismissMerlinOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624e9a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_112743f84) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743f7c);
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  if ((int)uVar2 == 0) {
    func_0x00010bf179a0(uVar1);
  }
  else {
    func_0x00010c128d60(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10624ea08; end: 10624ee4b; -[SCSpotlightRepliesTabsController spotlightRepliesInputView:didAddReply:replyAttachments:parentCommentId:mentions:replyGesture:parentCommentRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624ea08(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined *param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar16 = (long)_DAT_112743f2c;
  uVar15 = *(undefined8 *)(param_2 + lVar16);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010c23fc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010be3f6a0();
  uVar3 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010bf41fe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar16);
  func_0x00010bf41fa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + (long)_DAT_112743f38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + (long)_DAT_112743f34);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010623bcc4(param_5,uVar15,uVar1,uVar2 & 0xffffffff,uVar3,uVar4,uVar12,uVar13,param_7,
                      param_8,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar15);
  uVar12 = uVar7;
  func_0x00010bf51e00();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_10;
  if (param_10 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (param_10 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  _objc_release(uVar12);
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_2 + (long)_DAT_112743f10));
  puVar9 = PTR_PTR_1126c9180;
  _objc_alloc();
  puVar11 = puVar9;
  func_0x000106261da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0368a0();
  func_0x00010c2226c0(param_4);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(puVar11);
  lVar16 = (long)_DAT_112743f88;
  if (param_7 == 0) {
    uVar12 = *(undefined8 *)(param_2 + lVar16);
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + lVar16);
    func_0x00010bf4c080(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    uVar15 = *(undefined8 *)(param_2 + lVar16);
    dVar17 = param_1;
    func_0x00010bf4c080(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c7c0();
    func_0x00010c182300(param_1,-dVar17,uVar12);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
  }
  func_0x00010c08cdc0(*(undefined8 *)(param_2 + lVar16));
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_10 + _DAT_112743f10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10624ee4c; end: 10624eeab; -[SCSpotlightRepliesTabsController spotlightRepliesInputViewShowCharLimitNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624ee4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743f10),param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10624eeac; end: 10624ef9b; -[SCSpotlightRepliesTabsController spotlightRepliesInputViewDidTapCameraButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10624eeac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e47138;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5290;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e46f18,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743f10),param_2,param_1,puVar1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10624ef9c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112743f7c);
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_1);
  func_0x00010befbe80(uVar3,param_2,param_1);
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112743f08);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f43598;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f435b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_a8 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_a8,&ppuStack_b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uVar3,param_2,0x1f,puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10624f0b4;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10624f138;
  puStack_e0 = &UNK_110842e18;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10624f150;
  puStack_108 = &UNK_110841f20;
  puStack_100 = puVar1;
  puStack_d8 = puVar1;
  ppuStack_d0 = &puStack_60;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_f8,
                      &puStack_120);
  return;
}


