/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d8d0ac; end: 104d8d14b; -[SCCommerceAttachmentToolViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8d0ac(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4210;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    lVar1 = (long)_DAT_112712a3c;
    FUN_104d8b130(*(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + _DAT_112712a54));
    func_0x00010c0abb20(*(undefined8 *)(param_1 + lVar1));
    param_1 = param_1 + _DAT_112712a44;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf0d3e0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104d8d14c; end: 104d8d52b; -[SCCommerceAttachmentToolViewController _setupHeaderView] */

/* WARNING: Possible PIC construction at 0x000104d8dcd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d8dcdc) */
/* WARNING: Removing unreachable block (ram,0x000104d8dd1c) */
/* WARNING: Removing unreachable block (ram,0x000104d8df78) */
/* WARNING: Removing unreachable block (ram,0x000104d8e004) */
/* WARNING: Removing unreachable block (ram,0x000104d8dff8) */
/* WARNING: Removing unreachable block (ram,0x000104d8e00c) */
/* WARNING: Removing unreachable block (ram,0x000104d8df58) */
/* WARNING: Removing unreachable block (ram,0x000104d8dcfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8d14c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar31 = (long)_DAT_112712a50;
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  *(undefined **)(param_1 + lVar31) = puVar1;
  _objc_release(uVar29);
  puVar1 = PTR_PTR_1126af080;
  _objc_alloc_init(PTR_PTR_1126af080);
  func_0x00010c187440(*(undefined8 *)(param_1 + lVar31));
  _objc_release(puVar1);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf5eee0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf5eee0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf5eee0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf5eee0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf5eee0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216340();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c153980(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c153980(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c153980(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar29);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31));
  uVar3 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar29);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar6 = *(long *)(param_1 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar29);
  _objc_release(lVar31);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02f8;
  _objc_alloc();
  func_0x00010c01cf60();
  lVar31 = (long)_DAT_112712a58;
  uVar29 = *(undefined8 *)(lVar6 + lVar31);
  *(undefined **)(lVar6 + lVar31) = puVar1;
  _objc_release(uVar29);
  func_0x00010c1d8ba0(*(undefined8 *)(lVar6 + lVar31));
  uVar29 = *(undefined8 *)(lVar6 + lVar31);
  func_0x00010c29bf00(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar29);
  func_0x00010bef7700(lVar6);
  lVar2 = lVar6;
  func_0x00010c29bf00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf33000(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar29 = *(undefined8 *)(lVar6 + lVar31);
  func_0x00010c29bf00(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar29);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar6;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(lVar6 + _DAT_112712a50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar6;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar28;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar6;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar6);
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
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar28);
  _objc_release(lVar31);
  _objc_release(uVar29);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112712a5c;
  uVar29 = *(undefined8 *)(lVar2 + lVar6);
  *(undefined **)(lVar2 + lVar6) = puVar1;
  _objc_release(uVar29);
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + lVar6));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar6));
  lVar4 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(lVar2 + lVar6);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar3;
  func_0x00010bf493a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1747a0(lVar2);
  _objc_release(uVar29);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + lVar6);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar3;
  func_0x00010bf493c0(0xc036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1747c0(lVar2);
  _objc_release(uVar29);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = lVar2;
  func_0x00010bf25420();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar2 + lVar6);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar24;
  func_0x00010bf49420(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar2 + lVar6);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar25;
  func_0x00010bf49420(0x406c200000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar2 + lVar6);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar27);
  _objc_release(lVar31);
  _objc_release(lVar5);
  _objc_release(uVar26);
  _objc_release(uVar3);
  _objc_release(uVar25);
  _objc_release(uVar29);
  _objc_release(uVar24);
  _objc_release(lVar4);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar6));
  lVar4 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010beb76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__showActionButtonWithAttach_enab_11258b758,1,0)
  ;
  return;
}



/* Entry: 104d8d52c; end: 104d8d98b; -[SCCommerceAttachmentToolViewController _setupCollectionView] */

/* WARNING: Possible PIC construction at 0x000104d8dcd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d8dcdc) */
/* WARNING: Removing unreachable block (ram,0x000104d8dd1c) */
/* WARNING: Removing unreachable block (ram,0x000104d8df78) */
/* WARNING: Removing unreachable block (ram,0x000104d8e004) */
/* WARNING: Removing unreachable block (ram,0x000104d8dff8) */
/* WARNING: Removing unreachable block (ram,0x000104d8e00c) */
/* WARNING: Removing unreachable block (ram,0x000104d8df58) */
/* WARNING: Removing unreachable block (ram,0x000104d8dcfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8d52c(long param_1)

{
  undefined *puVar1;
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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02f8;
  _objc_alloc();
  func_0x00010c01cf60();
  lVar29 = (long)_DAT_112712a58;
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar28);
  func_0x00010c1d8ba0(*(undefined8 *)(param_1 + lVar29));
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c29bf00(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar28);
  func_0x00010bef7700(param_1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf33000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c29bf00(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar28);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + _DAT_112712a50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar30;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf33000();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uVar28);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_112712a5c;
  uVar28 = *(undefined8 *)(lVar2 + lVar30);
  *(undefined **)(lVar2 + lVar30) = puVar1;
  _objc_release(uVar28);
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + lVar30));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar30));
  lVar3 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar22 = *(undefined8 *)(lVar2 + lVar30);
  func_0x00010c274200(uVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar22;
  func_0x00010bf493a0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1747a0(lVar2);
  _objc_release(uVar28);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar2 + lVar30);
  func_0x00010bf1ff80(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar22;
  func_0x00010bf493c0(0xc036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1747c0(lVar2);
  _objc_release(uVar28);
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = lVar2;
  func_0x00010bf25420();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar23;
  func_0x00010bf49420(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar2 + lVar30);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar24;
  func_0x00010bf49420(0x406c200000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar2 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(uVar26);
  _objc_release(lVar29);
  _objc_release(lVar4);
  _objc_release(uVar25);
  _objc_release(uVar22);
  _objc_release(uVar24);
  _objc_release(uVar28);
  _objc_release(uVar23);
  _objc_release(lVar3);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar30));
  lVar3 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010beb76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__showActionButtonWithAttach_enab_11258b758,1,0)
  ;
  return;
}



/* Entry: 104d8d98c; end: 104d8dd1f; -[SCCommerceAttachmentToolViewController _setupAttachButton] */

/* WARNING: Possible PIC construction at 0x000104d8dcd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d8dcdc) */
/* WARNING: Removing unreachable block (ram,0x000104d8dd1c) */
/* WARNING: Removing unreachable block (ram,0x000104d8df78) */
/* WARNING: Removing unreachable block (ram,0x000104d8e004) */
/* WARNING: Removing unreachable block (ram,0x000104d8dff8) */
/* WARNING: Removing unreachable block (ram,0x000104d8e00c) */
/* WARNING: Removing unreachable block (ram,0x000104d8df58) */
/* WARNING: Removing unreachable block (ram,0x000104d8dcfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8d98c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112712a5c;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1747a0(param_1);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493c0(0xc036000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1747c0(param_1);
  _objc_release(uVar11);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bf25420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010bf49420(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf49420(0x406c200000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(lVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beb76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showActionButtonWithAttach_enab_11258b758,1,0);
  return;
}



/* Entry: 104d8dd20; end: 104d8df7b; -[SCCommerceAttachmentToolViewController _setupNoResultsLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8dd20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar10 = (long)_DAT_112712a60;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x000106d78790();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10));
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712a50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar9 = (long)_DAT_112712a64;
  _objc_retain(puVar6);
  uVar8 = *(undefined8 *)(lVar2 + lVar9);
  *(undefined **)(lVar2 + lVar9) = puVar6;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_112712a54);
  *(undefined **)(lVar2 + _DAT_112712a54) = puVar6;
  _objc_retain(puVar6);
  _objc_release(uVar8);
  func_0x00010c1fb4a0(*(undefined8 *)(lVar2 + _DAT_112712a4c));
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010beb76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s__showActionButtonWithAttach_enab_11258b758,puVar6 == (undefined *)0x0,
             puVar6 != (undefined *)0x0);
  return;
}



/* Entry: 104d8df7c; end: 104d8e01b; -[SCCommerceAttachmentToolViewController _setAttachedProduct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8df7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112712a64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712a54);
  *(long *)(param_1 + _DAT_112712a54) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1fb4a0(*(undefined8 *)(param_1 + _DAT_112712a4c));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beb76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showActionButtonWithAttach_enab_11258b758,param_3 == 0,param_3 != 0);
  return;
}



/* Entry: 104d8e01c; end: 104d8e157; -[SCCommerceAttachmentToolViewController _didTapAttachButton] */

/* WARNING: Possible PIC construction at 0x000104d8e0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d8e0fc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e01c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112712a64;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112712a54);
    if (uVar1 != 0) {
      func_0x00010bf0cf00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf0cf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(param_1 + lVar5);
      }
      else {
        lVar4 = param_1 + _DAT_112712a44;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bf74900();
        _objc_release(lVar4);
        lVar4 = 0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bea1fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAttachedProduct__112586190,lVar4);
    return;
  }
  return;
}



/* Entry: 104d8e158; end: 104d8e2cb; -[SCCommerceAttachmentToolViewController _showActionButtonWithAttach:enabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e158(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1cb8;
    if (param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db1cd8;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = (long)_DAT_112712a5c;
    func_0x00010c216260(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar2));
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar2);
    _objc_release(ppuVar1);
  }
  lVar2 = param_1;
  func_0x00010bf25440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf25420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar2);
  func_0x00010bf0c5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf40();
  _objc_release(param_1);
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 104d8e2cc; end: 104d8e2ff;  */

void FUN_104d8e2cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8e300; end: 104d8e39b; -[SCCommerceAttachmentToolViewController _filterProductsWithText:] */

void FUN_104d8e300(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010bfde000();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf99fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1960();
      _objc_release(uVar1);
      func_0x00010c1a7240(param_1,param_2,1);
    }
    func_0x00010bf63700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289040();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d8e39c; end: 104d8e3cb; -[SCCommerceAttachmentToolViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e39c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712a40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d8e3cc; end: 104d8e3ff; -[SCCommerceAttachmentToolViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e3cc(long param_1)

{
  param_1 = param_1 + _DAT_112712a44;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf833c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8e400; end: 104d8e413; -[SCCommerceAttachmentToolViewController didTapHeaderItemTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712a58),PTR_s_scrollToTop__112632438,1);
  return;
}



/* Entry: 104d8e414; end: 104d8e453; -[SCCommerceAttachmentToolViewController _textFieldDidChange:] */

void FUN_104d8e414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be16300(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d8e454; end: 104d8e473; -[SCCommerceAttachmentToolViewController textFieldShouldClear:] */

undefined8 FUN_104d8e454(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be16300(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  return 1;
}



/* Entry: 104d8e474; end: 104d8e48f; -[SCCommerceAttachmentToolViewController textFieldShouldReturn:] */

undefined8 FUN_104d8e474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 0;
}



/* Entry: 104d8e490; end: 104d8e7a3; -[SCCommerceAttachmentToolViewController handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8e490(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b02a0;
      _objc_opt_class(PTR_PTR_1126b02a0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bf63dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      lVar7 = (long)_DAT_112712a64;
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      *(ulong *)(param_1 + lVar7) = uVar2;
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112712a4c);
      uVar1 = param_1;
      func_0x00010c159e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb4a0(uVar6);
      _objc_release(uVar1);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112712a54);
      func_0x00010bf0cf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf0cf00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar6);
      uVar6 = 1;
      func_0x00010beb76c0(param_1);
      goto LAB_104d8e784;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010bf0cae0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112712a64);
      *(ulong *)(param_1 + (long)_DAT_112712a64) = uVar1;
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112712a4c);
      uVar1 = param_1;
      func_0x00010bf0cae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb4a0(uVar6);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf0cae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf0cae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb76c0(param_1);
      goto LAB_104d8e76c;
    }
  }
  else {
    uVar1 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0300;
    _objc_opt_class(PTR_PTR_1126b0300);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar2 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uVar6 = 0;
      goto LAB_104d8e784;
    }
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112712a48);
    uVar2 = uVar1;
    func_0x00010c0f0be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b800(uVar6);
LAB_104d8e76c:
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar6 = 1;
LAB_104d8e784:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 104d8e7a4; end: 104d8e8a3; -[SCCommerceAttachmentToolViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104d8e7a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104d8e8a4;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d8e8a4; end: 104d8e97b;  */

void FUN_104d8e8a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x23;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0f2840();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      unaff_x23 = param_1;
      func_0x00010c0f2840(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2cd60();
    }
    lVar4 = param_1;
    func_0x00010c0da8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    if (lVar3 == 0) {
      _objc_release(unaff_x23);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8e97c; end: 104d8e98b; -[SCCommerceAttachmentToolViewController imageSourceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8e97c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a34);
}



/* Entry: 104d8e98c; end: 104d8e9cb; -[SCCommerceAttachmentToolViewController setImageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a34;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8e9cc; end: 104d8e9db; -[SCCommerceAttachmentToolViewController imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8e9cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a38);
}



/* Entry: 104d8e9dc; end: 104d8ea1b; -[SCCommerceAttachmentToolViewController setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8e9dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8ea1c; end: 104d8ea2b; -[SCCommerceAttachmentToolViewController eventLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ea1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a3c);
}



/* Entry: 104d8ea2c; end: 104d8ea3b; -[SCCommerceAttachmentToolViewController headerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ea2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a50);
}



/* Entry: 104d8ea3c; end: 104d8ea7b; -[SCCommerceAttachmentToolViewController setHeaderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ea3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a50;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8ea7c; end: 104d8ea8b; -[SCCommerceAttachmentToolViewController attachButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ea7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a5c);
}



/* Entry: 104d8ea8c; end: 104d8eacb; -[SCCommerceAttachmentToolViewController setAttachButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ea8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a5c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8eacc; end: 104d8eadb; -[SCCommerceAttachmentToolViewController noResultsLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8eacc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a60);
}



/* Entry: 104d8eadc; end: 104d8eb1b; -[SCCommerceAttachmentToolViewController setNoResultsLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8eadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a60;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8eb1c; end: 104d8eb2b; -[SCCommerceAttachmentToolViewController paginationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8eb1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a4c);
}



/* Entry: 104d8eb2c; end: 104d8eb6b; -[SCCommerceAttachmentToolViewController setPaginationProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8eb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a4c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8eb6c; end: 104d8eb7b; -[SCCommerceAttachmentToolViewController dataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8eb6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a48);
}



/* Entry: 104d8eb7c; end: 104d8ebbb; -[SCCommerceAttachmentToolViewController setDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8eb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a48;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8ebbc; end: 104d8ebcb; -[SCCommerceAttachmentToolViewController catalogViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ebbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a58);
}



/* Entry: 104d8ebcc; end: 104d8ec0b; -[SCCommerceAttachmentToolViewController setCatalogViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ebcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8ec0c; end: 104d8ec1b; -[SCCommerceAttachmentToolViewController metricsUUID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ec0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a40);
}



/* Entry: 104d8ec1c; end: 104d8ec5b; -[SCCommerceAttachmentToolViewController setMetricsUUID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ec1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8ec5c; end: 104d8ec6b; -[SCCommerceAttachmentToolViewController hasUsedFiltering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d8ec5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712a30);
}



/* Entry: 104d8ec6c; end: 104d8ec7b; -[SCCommerceAttachmentToolViewController setHasUsedFiltering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ec6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712a30) = param_3;
  return;
}



/* Entry: 104d8ec7c; end: 104d8ec8b; -[SCCommerceAttachmentToolViewController selectedProduct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ec7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a64);
}



/* Entry: 104d8ec8c; end: 104d8eccb; -[SCCommerceAttachmentToolViewController setSelectedProduct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ec8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8eccc; end: 104d8ecdb; -[SCCommerceAttachmentToolViewController attachedProduct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8eccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a54);
}



/* Entry: 104d8ecdc; end: 104d8ed1b; -[SCCommerceAttachmentToolViewController setAttachedProduct:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ecdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8ed1c; end: 104d8ed3b; -[SCCommerceAttachmentToolViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ed1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712a44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d8ed3c; end: 104d8ed4f; -[SCCommerceAttachmentToolViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ed3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712a44,param_3);
  return;
}



/* Entry: 104d8ed50; end: 104d8ed5f; -[SCCommerceAttachmentToolViewController buttonBottomShowConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8ed50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a68);
}



/* Entry: 104d8ed60; end: 104d8ed9f; -[SCCommerceAttachmentToolViewController setButtonBottomShowConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8ed60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8eda0; end: 104d8edaf; -[SCCommerceAttachmentToolViewController buttonBottomHideConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d8eda0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712a6c);
}



/* Entry: 104d8edb0; end: 104d8edef; -[SCCommerceAttachmentToolViewController setButtonBottomHideConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8edb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712a6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8edf0; end: 104d8eefb; -[SCCommerceAttachmentToolViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8edf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712a6c,0);
  _objc_storeStrong(param_1 + _DAT_112712a68,0);
  _objc_destroyWeak(param_1 + _DAT_112712a44);
  _objc_storeStrong(param_1 + _DAT_112712a54,0);
  _objc_storeStrong(param_1 + _DAT_112712a64,0);
  _objc_storeStrong(param_1 + _DAT_112712a40,0);
  _objc_storeStrong(param_1 + _DAT_112712a58,0);
  _objc_storeStrong(param_1 + _DAT_112712a48,0);
  _objc_storeStrong(param_1 + _DAT_112712a4c,0);
  _objc_storeStrong(param_1 + _DAT_112712a60,0);
  _objc_storeStrong(param_1 + _DAT_112712a5c,0);
  _objc_storeStrong(param_1 + _DAT_112712a50,0);
  _objc_storeStrong(param_1 + _DAT_112712a3c,0);
  _objc_storeStrong(param_1 + _DAT_112712a38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712a34,0);
  return;
}



/* Entry: 104d8eefc; end: 104d8f293; -[SCCommerceAttachmentToolEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8eefc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  puVar1 = PTR_PTR_1126b0308;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112712a70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112712a74;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a840(puVar1,param_2,1,8,0x13,lVar4,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar20 = (long)_DAT_112712a78;
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c257a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfe5e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b0310;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112712a7c;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112712a80;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112712a84;
  _objc_loadWeakRetained();
  lVar12 = lVar3;
  func_0x00010c2578c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar14 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar15 = lVar6;
  func_0x00010c257a20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar16 = lVar7;
  func_0x00010bf0cae0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112712a8c;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar21;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010ba0(puVar8,param_2,puVar1,lVar10,lVar11,lVar13,lVar14,lVar15,lVar16,lVar18);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112712a88);
  *(undefined **)(param_1 + _DAT_112712a88) = puVar8;
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar21);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar2);
  param_1 = param_1 + lVar20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d8f294; end: 104d8f317; -[SCCommerceAttachmentToolEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8f294(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712a8c);
  _objc_destroyWeak(param_1 + _DAT_112712a84);
  _objc_destroyWeak(param_1 + _DAT_112712a80);
  _objc_destroyWeak(param_1 + _DAT_112712a7c);
  _objc_destroyWeak(param_1 + _DAT_112712a78);
  _objc_destroyWeak(param_1 + _DAT_112712a74);
  _objc_destroyWeak(param_1 + _DAT_112712a70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712a88,0);
  return;
}



/* Entry: 104d8f318; end: 104d8f39b; -[SCCommerceAttachmentActionDataModel initWithIndex:dataModel:] */

undefined1 *
FUN_104d8f318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104d8f39c; end: 104d8f3bf; -[SCCommerceAttachmentActionDataModel copyWithZone:] */

undefined8 FUN_104d8f39c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d8f3c0; end: 104d8f3c7; -[SCCommerceAttachmentActionDataModel index] */

undefined8 FUN_104d8f3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d8f3c8; end: 104d8f3cf; -[SCCommerceAttachmentActionDataModel dataModel] */

undefined8 FUN_104d8f3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d8f3d0; end: 104d8f3db; -[SCCommerceAttachmentActionDataModel .cxx_destruct] */

void FUN_104d8f3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d8f3dc; end: 104d8f847; -[SCCommerceCheckoutWorkflow initWithUIContainer:parentDeckContainer:delegate:eventLogger:runtime:performerProvider:alertPresenterFactory:composerBlizzardLogger:cartServices:grpcServiceFactory:networkingClient:webBrowsingScopeExposer:paymentMethodTokenizer:cart:userSession:preloadedContactDetails:cofStore:] */

undefined8 *
FUN_104d8f3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126e4220;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_19;
    _objc_release(uVar2);
    if (param_4 == 0) {
      uVar2 = param_3;
      func_0x00010b09483c();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0xd];
      puVar1[0xd] = uVar2;
      _objc_release(uVar5);
      uVar2 = puVar1[0xd];
      puVar4 = PTR_PTR_1126b0318;
      _objc_alloc(PTR_PTR_1126b0318);
      func_0x00010c008220();
      func_0x00010b0947a4(uVar2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0xe];
      puVar1[0xe] = uVar2;
      _objc_release(uVar5);
      _objc_release(puVar4);
      uVar2 = puVar1[0xe];
      puVar4 = PTR_PTR_1126b0320;
      func_0x00010c0cf9c0(PTR_PTR_1126b0320);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cfa00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[0xf];
      puVar1[0xf] = uVar2;
      _objc_release(uVar5);
      _objc_release(puVar4);
      func_0x00010c1a4840(puVar1[0xf]);
    }
    else {
      puVar4 = PTR_PTR_1126b0320;
      func_0x00010c0cf9c0(PTR_PTR_1126b0320);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c0cfa00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0xf];
      puVar1[0xf] = lVar3;
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
  }
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



/* Entry: 104d8f848; end: 104d8f987; -[SCCommerceCheckoutWorkflow begin] */

void FUN_104d8f848(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d8f988;
  puStack_58 = &UNK_11084f130;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0e3aa0(uVar3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf38a60();
  _objc_release(lVar2);
  func_0x00010c1a2ec0(*(undefined8 *)(param_1 + 0x78));
  uVar3 = 9;
  _dispatch_get_global_queue(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104d8f9b4;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010007380c(uVar3,&puStack_98);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104d8f988; end: 104d8f9df;  */

void FUN_104d8f988(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8f9e0; end: 104d8fa9b; -[SCCommerceCheckoutWorkflow endWithCompletion:] */

void FUN_104d8f9e0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x68);
  if (uVar1 != 0) {
    func_0x00010c06c7c0();
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_3 + 0x10))(param_3);
      goto LAB_104d8fa84;
    }
    func_0x00010bf6f280(*(undefined8 *)(param_1 + 0x68));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d8fa9c;
  puStack_30 = &UNK_110842508;
  _objc_retain(param_3);
  lStack_28 = param_3;
  func_0x00010bf84b00(uVar2,param_2,1,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lStack_28);
LAB_104d8fa84:
  _objc_release(param_3);
  return;
}



/* Entry: 104d8fa9c; end: 104d8faa7;  */

void FUN_104d8fa9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d8faa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104d8faa8; end: 104d904db; -[SCCommerceCheckoutWorkflow _prepare] */

void FUN_104d8faa8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b0328;
  _objc_alloc_init(PTR_PTR_1126b0328);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf42660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar11 = lVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f480(puVar1);
    _objc_release(lVar11);
  }
  else {
    func_0x00010c17f480(puVar1);
  }
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c115e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3e40(puVar1);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c2579e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c320(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c247800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2072c0(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c247b60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2072e0(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c278ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219480(puVar1);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ed2a0();
  func_0x00010baf0c7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c17f420(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c116320();
  func_0x00010baf1b3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c17f460(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ed2a0();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c247520(uVar3);
  func_0x000107af14e8(uVar6,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c247520(uVar3);
  func_0x000107af13b0(uVar6,uVar3);
  func_0x00010baf1938();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c17f440(puVar1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07f200(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df6e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5c60(puVar1);
  _objc_release(puVar7);
  puVar8 = PTR_PTR_1126b0330;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126b0338;
  _objc_alloc(PTR_PTR_1126b0338);
  lVar2 = param_1;
  func_0x00010bee7fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bee81a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeff20(puVar7);
  func_0x00010c1a4d20(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar11);
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9dc0(puVar8);
  _objc_release(puVar7);
  _objc_initWeak(auStack_80,param_1);
  puVar9 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d904dc;
  puStack_90 = &UNK_110849680;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar7;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104d90530;
  puStack_b8 = &UNK_11084d688;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0311a0();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b7600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar8);
  _objc_release(uVar3);
  func_0x00010c171b20(puVar8);
  func_0x00010c17c200(puVar8);
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c2579e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee8200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  FUN_104d91f04(uVar10,lVar2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c1c0(puVar8);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar10);
  lVar11 = *(long *)(param_1 + 0x98);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c08fa60();
  _objc_release(lVar11);
  if (lVar2 != 0) {
    puVar12 = PTR_PTR_1126b0340;
    _objc_alloc_init(PTR_PTR_1126b0340);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100576d08();
    _objc_release(uVar3);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0fe0(puVar12);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a85a0(puVar12);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126b0348;
    _objc_alloc(PTR_PTR_1126b0348);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c320(puVar13);
    _objc_release(uVar3);
    puVar14 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e660(puVar8);
    _objc_release(puVar15);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c880(puVar8);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  puStack_108 = puVar7;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_104d905dc;
  puStack_f0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e8,auStack_80);
  func_0x00010c1e6c00(puVar8);
  puStack_130 = puVar7;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x104d90608;
  puStack_118 = &UNK_1108434b0;
  _objc_copyWeak(auStack_110,auStack_80);
  func_0x00010c1d1de0(puVar8);
  puStack_158 = puVar7;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x104d90634;
  puStack_140 = &UNK_110843540;
  _objc_copyWeak(auStack_138,auStack_80);
  func_0x00010c1d1dc0(puVar8);
  puVar12 = PTR_PTR_1126b0350;
  _objc_alloc(PTR_PTR_1126b0350);
  puStack_180 = puVar7;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_104d9067c;
  puStack_168 = &UNK_11084f180;
  _objc_copyWeak(auStack_160,auStack_80);
  func_0x00010bff95c0(puVar12);
  func_0x00010c173a60(puVar8);
  _objc_release(puVar12);
  puStack_1a8 = puVar7;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_104d90718;
  puStack_190 = &UNK_110848ab8;
  _objc_copyWeak(auStack_188,auStack_80);
  func_0x00010c1d51e0(puVar8);
  puStack_1d0 = puVar7;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_104d90770;
  puStack_1b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1b0,auStack_80);
  func_0x00010c1d2de0(puVar8);
  puVar12 = PTR_PTR_1126b0358;
  _objc_alloc_init(PTR_PTR_1126b0358);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0faaa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db060(puVar12);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf8d6c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194080(puVar12);
  _objc_release(uVar3);
  puVar13 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181840(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar13);
  func_0x00010c1cc960(puVar8);
  func_0x00010c17df40(puVar8);
  puStack_200 = puVar7;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x104d9079c;
  puStack_1e8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_1d8,auStack_80);
  _objc_retain(puVar8);
  puStack_1e0 = puVar8;
  func_0x0001000d76cc("APPSTORE",&puStack_200);
  _objc_release(puStack_1e0);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 104d904dc; end: 104d9052b;  */

void FUN_104d904dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9052c; end: 104d9052f;  */

void FUN_104d9052c(void)

{
  return;
}



/* Entry: 104d90530; end: 104d905c7;  */

void FUN_104d90530(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be02500(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104d905c8; end: 104d905db;  */

void FUN_104d905c8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d905d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104d905dc; end: 104d9067b;  */

void FUN_104d905dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be026a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9067c; end: 104d90717;  */

void FUN_104d9067c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be23640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d90718; end: 104d9076f;  */

void FUN_104d90718(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d90770; end: 104d907cf;  */

void FUN_104d90770(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d907d0; end: 104d90887; -[SCCommerceCheckoutWorkflow _begin:] */

void FUN_104d907d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0360;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c040c60();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1cba60(param_3,param_2,*(undefined8 *)(param_1 + 0x80));
  puVar1 = PTR_PTR_1126b0368;
  _objc_alloc(PTR_PTR_1126b0368);
  func_0x00010c061d40();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b0370;
  _objc_alloc();
  func_0x00010c0601e0();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d90888; end: 104d9090f; -[SCCommerceCheckoutWorkflow _launch] */

void FUN_104d90888(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf38a40();
  _objc_release(lVar1);
  uVar2 = *(ulong *)(param_1 + 0x68);
  func_0x00010c06c7c0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf0c8e0(*(undefined8 *)(param_1 + 0x68));
  }
  puVar3 = PTR_PTR_1126b0378;
  _objc_alloc();
  func_0x00010c0402e0();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1c1bc0(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_presentViewController_animated_c_112621588,
             *(undefined8 *)(param_1 + 0x88),1,&PTR___NSConcreteGlobalBlock_11084f1b0);
  return;
}



/* Entry: 104d90910; end: 104d90913;  */

void FUN_104d90910(void)

{
  return;
}



/* Entry: 104d90914; end: 104d909c7; -[SCCommerceCheckoutWorkflow _vendStoreInfo] */

void FUN_104d90914(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c10a740();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x90);
    func_0x00010c2579e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c078780();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c10a740(uVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d909b4;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c2579e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001060e2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
LAB_104d909b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104d909c8; end: 104d90a6b; -[SCCommerceCheckoutWorkflow _vendBuilder] */

void FUN_104d909c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,4000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dec0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d90a6c; end: 104d90b07; -[SCCommerceCheckoutWorkflow _vendAccountInfoGrpcService] */

void FUN_104d90a6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f9920(uVar1,param_2,&PTR____CFConstantStringClassReference_110db1d98,1,1,0x24);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bee7fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7020(uVar2,param_2,&PTR____CFConstantStringClassReference_110db1db8,param_1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d90b08; end: 104d90ba3; -[SCCommerceCheckoutWorkflow _vendOrderGrpcService] */

void FUN_104d90b08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f9920(uVar1,param_2,&PTR____CFConstantStringClassReference_110db1d58,1,1,0x24);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bee7fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7020(uVar2,param_2,&PTR____CFConstantStringClassReference_110db1d78,param_1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d90ba4; end: 104d90c4b; -[SCCommerceCheckoutWorkflow _dismissButtonPressed] */

void FUN_104d90ba4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d90c4c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d90c4c; end: 104d90c77;  */

void FUN_104d90c4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d90c78; end: 104d90d1f; -[SCCommerceCheckoutWorkflow _checkoutCreated] */

void FUN_104d90c78(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d90d20;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d90d20; end: 104d90d4b;  */

void FUN_104d90d20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d90d4c; end: 104d90e53; -[SCCommerceCheckoutWorkflow _checkoutErrored:] */

void FUN_104d90d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d90e54;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d90e54; end: 104d90e87;  */

void FUN_104d90e54(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d90e88; end: 104d90edf; -[SCCommerceCheckoutWorkflow _dismissComposerWithError:] */

void FUN_104d90e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf389e0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissComposer_11255e3b0);
  return;
}



/* Entry: 104d90ee0; end: 104d90f0f; -[SCCommerceCheckoutWorkflow _dismissComposer] */

void FUN_104d90ee0(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf389c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d90f10; end: 104d9117f; -[SCCommerceCheckoutWorkflow _openUrl:isThirdParty:] */

void FUN_104d90f10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2ad780();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ae560;
      _objc_alloc_init(PTR_PTR_1126ae560);
      _objc_initWeak(auStack_68,param_1);
      puVar4 = puVar3;
      func_0x00010bfbc3e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      puVar6 = puVar2;
      _objc_retain(puVar2);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar6 = PTR_PTR_1126ae638;
      _objc_opt_new(PTR_PTR_1126ae638);
      puVar7 = puVar6;
      func_0x00010bf22ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50));
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d91180; end: 104d911eb;  */

void FUN_104d91180(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde27e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d911ec; end: 104d9124f; -[SCCommerceCheckoutWorkflow _completWebBrowserPromise:error:url:] */

void FUN_104d911ec(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  
  if ((param_3 != 0) && (param_4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_loadURL__112604b58,param_5);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d91250; end: 104d9136f; -[SCCommerceCheckoutWorkflow _placedOrder] */

void FUN_104d91250(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf32e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c2579e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf3ae00(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 104d91370; end: 104d9139b;  */

void FUN_104d91370(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9139c; end: 104d916af; -[SCCommerceCheckoutWorkflow _getTokenizedCard:inputCreditCard:inputBillingAddress:] */

void FUN_104d9139c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b0388;
  _objc_alloc();
  uVar13 = param_5;
  func_0x00010bfb18a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c089720(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c25cae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c25cb00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf39960(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c252440(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010bf53220();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c105600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c013580(puVar2,param_2,uVar13,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  puVar10 = PTR_PTR_1126b0390;
  _objc_alloc(PTR_PTR_1126b0390);
  uVar13 = param_4;
  func_0x00010bf31e80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf9bc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf9bc20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf630e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b0398;
  uVar6 = param_4;
  func_0x00010bf31e80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c25db60(puVar11,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x0001060e6b00();
  func_0x00010bff7740(puVar10,param_2,puVar2,uVar13,uVar3,uVar4,uVar5,puVar12);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d916b0;
  puStack_70 = &UNK_11084f200;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c2733c0(uVar13,param_2,puVar10,&puStack_88,PTR___dispatch_main_q_11034be20);
  puVar11 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_68);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104d916b0; end: 104d91703;  */

void FUN_104d916b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_3 == 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d91704; end: 104d9170b; -[SCCommerceCheckoutWorkflow sig_allowedGesturesForContainer:] */

undefined8 FUN_104d91704(void)

{
  return 1;
}



/* Entry: 104d9170c; end: 104d91753; -[SCCommerceCheckoutWorkflow webBrowserDidDismiss:] */

void FUN_104d9170c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d91754; end: 104d91763; -[SCCommerceCheckoutWorkflow _presentAlertViewController:completion:] */

void FUN_104d91754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_presentAlertViewController_anima_112620670,
             param_3,1,param_4);
  return;
}



/* Entry: 104d91764; end: 104d91773; -[SCCommerceCheckoutWorkflow _dismissAlertViewController:] */

void FUN_104d91764(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf830b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_dismissAlertViewControllerAnimat_1125be5d0,1,
             param_3);
  return;
}



/* Entry: 104d91774; end: 104d91777; -[SCCommerceCheckoutWorkflow navigatorShouldDismiss] */

void FUN_104d91774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissComposer_11255e3b0);
  return;
}



/* Entry: 104d91778; end: 104d91887; -[SCCommerceCheckoutWorkflow .cxx_destruct] */

void FUN_104d91778(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}


