/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066acc14; end: 1066acc23; -[SCLensExplorerLensCollectionViewCell setVisibleFraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066acc14(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274dd20) = param_1;
  return;
}



/* Entry: 1066acc24; end: 1066acc33; -[SCLensExplorerLensCollectionViewCell sectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd24);
}



/* Entry: 1066acc34; end: 1066acc3f; -[SCLensExplorerLensCollectionViewCell setSectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066acc34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066acc40; end: 1066acc4f; -[SCLensExplorerLensCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd30);
}



/* Entry: 1066acc50; end: 1066acc5f; -[SCLensExplorerLensCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd2c);
}



/* Entry: 1066acc60; end: 1066acc6f; -[SCLensExplorerLensCollectionViewCell cellBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd28);
}



/* Entry: 1066acc70; end: 1066acc7f; -[SCLensExplorerLensCollectionViewCell layout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd18);
}



/* Entry: 1066acc80; end: 1066acc8f; -[SCLensExplorerLensCollectionViewCell animatableContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd1c);
}



/* Entry: 1066acc90; end: 1066acd4f; -[SCLensExplorerLensCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066acc90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dd18,0);
  _objc_storeStrong(param_1 + _DAT_11274dd2c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd30,0);
  _objc_storeStrong(param_1 + _DAT_11274dd3c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd38,0);
  _objc_storeStrong(param_1 + _DAT_11274dd40,0);
  _objc_storeStrong(param_1 + _DAT_11274dd1c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd34,0);
  _objc_storeStrong(param_1 + _DAT_11274dd28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dd24,0);
  return;
}



/* Entry: 1066acd50; end: 1066acd77; -[SCLensExplorerLensHeroCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066acd50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1066acd78; end: 1066acdf7; -[SCLensExplorerLensHeroCollectionViewCell initWithFrame:] */

undefined1 * FUN_1066acd78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
    func_0x00010c1af000(puVar1);
    func_0x00010c161080(puVar1);
    func_0x00010c160fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066acdf8; end: 1066ace8b; -[SCLensExplorerLensHeroCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066acdf8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2610;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dd44));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dd48));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11274dd4c));
  lVar1 = (long)_DAT_11274dd50;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1066ace8c; end: 1066acfdb; -[SCLensExplorerLensHeroCollectionViewCell layoutSubviews] */

void FUN_1066ace8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010bf02b60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  uVar4 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  uVar2 = param_5;
  func_0x00010bf02b60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,uVar4);
  _objc_release(uVar2);
  puStack_58 = PTR_PTR_1126f2610;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR_PTR_1126b08d8;
  func_0x00010bf02b60(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4010000000000000,0x3fbeb851eb851eb8,0,0x4000000000000000,puVar1,param_5,
                      puVar3);
  _objc_release(puVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 1066acfdc; end: 1066ad20b; -[SCLensExplorerLensHeroCollectionViewCell reloadViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066acfdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f2610;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_reloadViewModel_112627e58);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dd44));
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dd48));
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11274dd4c));
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbe3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274dd50;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbe3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bed2540(param_1);
  return;
}



/* Entry: 1066ad20c; end: 1066ad34f; -[SCLensExplorerLensHeroCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ad20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + _DAT_11274dd54) = param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x22,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dd58),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dd44),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dd48),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dd4c),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dd50),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066ad350; end: 1066ae043; -[SCLensExplorerLensHeroCollectionViewCell _setupViews] */

/* WARNING: Possible PIC construction at 0x0001066ad5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001066ad5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066ad5ac) */
/* WARNING: Removing unreachable block (ram,0x0001066ad5ec) */
/* WARNING: Removing unreachable block (ram,0x0001066ae040) */
/* WARNING: Removing unreachable block (ram,0x0001066ae01c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ad350(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(lVar4);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar4 = (long)_DAT_11274dd58;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010bf02b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_11274dd44;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c219b60();
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4));
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_11274dd48;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x00010befbb60(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar5 = (long)_DAT_11274dd4c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setTypeStyle__112664568,0x16);
  return;
}



/* Entry: 1066ae044; end: 1066ae04f;  */

void FUN_1066ae044(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 1066ae050; end: 1066ae1db; -[SCLensExplorerLensHeroCollectionViewCell _updateAccessibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1066ae050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dd4c);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274dd50);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e592b8;
  lVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e592b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfaea40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c08fa60(lVar8);
  return (undefined *)(ulong)(lVar8 != 0);
}



/* Entry: 1066ae1dc; end: 1066ae1fb;  */

bool FUN_1066ae1dc(undefined8 param_1,long param_2)

{
  func_0x00010c08fa60(param_2);
  return param_2 != 0;
}



/* Entry: 1066ae1fc; end: 1066ae27b; -[SCLensExplorerLensHeroCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ae1fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dd5c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd50,0);
  _objc_storeStrong(param_1 + _DAT_11274dd4c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd48,0);
  _objc_storeStrong(param_1 + _DAT_11274dd44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dd58,0);
  return;
}



/* Entry: 1066ae27c; end: 1066ae393; -[SCLensExplorerLensIconCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ae27c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2618;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar1 = param_1;
  func_0x00010c094420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dd60));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274dd64));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274dd68));
  return;
}



/* Entry: 1066ae394; end: 1066ae3db; -[SCLensExplorerLensIconCollectionViewCell layoutSubviews] */

void FUN_1066ae394(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2618;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bed9580(param_1);
  return;
}



/* Entry: 1066ae3dc; end: 1066ae45f; -[SCLensExplorerLensIconCollectionViewCell reloadViewModel] */

void FUN_1066ae3dc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2618;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reloadViewModel_112627e58);
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bed9640(param_1);
    func_0x00010bed3540(param_1);
    func_0x00010bedc200(param_1);
    func_0x00010bee1180(param_1);
    func_0x00010bedf840(param_1);
  }
  return;
}



/* Entry: 1066ae460; end: 1066ae463; -[SCLensExplorerLensIconCollectionViewCell setupKarma] */

void FUN_1066ae460(void)

{
  return;
}



/* Entry: 1066ae464; end: 1066ae4f7; -[SCLensExplorerLensIconCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ae464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2618;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_updateStyleOverride__112680418);
  *(undefined8 *)(param_1 + _DAT_11274dd6c) = param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dd70));
  _objc_release(puVar1);
  return;
}



/* Entry: 1066ae4f8; end: 1066ae6bb; -[SCLensExplorerLensIconCollectionViewCell _prepareIconViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ae4f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274dd74;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  lVar4 = param_2;
  func_0x00010bf02b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar4 = (long)_DAT_11274dd70;
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_2 + lVar4),param_3,2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar3),param_3,*(undefined8 *)(param_2 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066ae6bc; end: 1066ae8c3; -[SCLensExplorerLensIconCollectionViewCell _prepareAttributionIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ae6bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar18 = (long)_DAT_11274dd60;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar18),param_2,4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar18),param_2,
                      &PTR____CFConstantStringClassReference_110e82e78);
  lVar17 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  lStack_78 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_c0 = puVar1;
  pcStack_88 = FUN_1066ae8c4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c51b8;
  puStack_e0 = puVar6;
  uStack_d8 = uVar15;
  lStack_d0 = lVar18;
  uStack_c8 = uVar5;
  lStack_b8 = lVar4;
  lStack_b0 = lVar3;
  lStack_a8 = lVar17;
  lStack_a0 = param_1;
  lStack_98 = lVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c04eae0();
  lVar18 = (long)_DAT_11274dd64;
  uVar15 = *(undefined8 *)(lVar7 + lVar18);
  *(undefined **)(lVar7 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar18),param_2,0);
  lVar17 = lVar7;
  func_0x00010bf4dce0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar7 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf493c0(0xc01c000000000000,lVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar7 + lVar18);
  lStack_f8 = lVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493c0(0x4024000000000000,uVar5,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  lVar2 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = puVar1;
  pcStack_108 = FUN_1066aeac0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c51b8;
  puStack_160 = puVar6;
  uStack_158 = uVar15;
  lStack_150 = lVar18;
  uStack_148 = uVar5;
  lStack_140 = lVar4;
  lStack_130 = lVar3;
  lStack_128 = lVar7;
  lStack_120 = lVar17;
  lStack_118 = lVar8;
  ppuStack_110 = &puStack_90;
  _objc_alloc();
  func_0x00010c04eae0();
  lVar18 = (long)_DAT_11274dd68;
  uVar15 = *(undefined8 *)(lVar2 + lVar18);
  *(undefined **)(lVar2 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar18),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  lVar17 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar2 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar18);
  lStack_178 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_170 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_178,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  lVar7 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  puStack_1c0 = puVar1;
  pcStack_188 = FUN_1066aece4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cced8;
  puStack_1e0 = puVar6;
  uStack_1d8 = uVar15;
  lStack_1d0 = lVar18;
  uStack_1c8 = uVar5;
  lStack_1b8 = lVar4;
  lStack_1b0 = lVar3;
  lStack_1a8 = lVar17;
  lStack_1a0 = lVar8;
  lStack_198 = lVar2;
  ppuStack_190 = &ppuStack_110;
  _objc_alloc();
  func_0x00010bf20c00(lVar7);
  func_0x00010c014f80(puVar1,param_2,*(undefined8 *)(lVar7 + _DAT_11274dd6c),1);
  lVar16 = (long)_DAT_11274dd78;
  uVar15 = *(undefined8 *)(lVar7 + lVar16);
  *(undefined **)(lVar7 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar16),param_2,0);
  lVar17 = lVar7;
  func_0x00010bf02b60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar7 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf493c0(0xc010000000000000,lVar9,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar7 + lVar16);
  lStack_208 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar7;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar10;
  func_0x00010bf493c0(0x4010000000000000,uVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar7 + lVar16);
  uStack_200 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493c0(0xc010000000000000,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar7 + lVar16);
  uStack_1f8 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02b60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1f0 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_208,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(uVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_11274dd70;
  if (*(long *)(lVar9 + lVar17) == 0) {
    func_0x00010be785e0(lVar9);
  }
  func_0x00010bed9580(lVar9);
  lVar3 = lVar9;
  func_0x00010c29d560(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(lVar9 + lVar17),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066ae8c4; end: 1066aeabf; -[SCLensExplorerLensIconCollectionViewCell _prepareUpdatedContentBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ae8c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c51b8;
  _objc_alloc();
  func_0x00010c04eae0();
  lVar18 = (long)_DAT_11274dd64;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  lVar17 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0xc01c000000000000,lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  lStack_78 = lVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493c0(0x4024000000000000,uVar5,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_b8 = puVar1;
  pcStack_88 = FUN_1066aeac0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c51b8;
  puStack_e0 = puVar6;
  uStack_d8 = uVar15;
  lStack_d0 = lVar18;
  uStack_c8 = uVar5;
  lStack_c0 = lVar4;
  lStack_b0 = lVar3;
  lStack_a8 = param_1;
  lStack_a0 = lVar17;
  lStack_98 = lVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c04eae0();
  lVar18 = (long)_DAT_11274dd68;
  uVar15 = *(undefined8 *)(lVar7 + lVar18);
  *(undefined **)(lVar7 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar18),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar7 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  lVar17 = lVar7;
  func_0x00010bf4dce0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar7 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar7 + lVar18);
  lStack_f8 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  lVar2 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puStack_140 = puVar1;
  pcStack_108 = FUN_1066aece4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cced8;
  puStack_160 = puVar6;
  uStack_158 = uVar15;
  lStack_150 = lVar18;
  uStack_148 = uVar5;
  lStack_138 = lVar4;
  lStack_130 = lVar3;
  lStack_128 = lVar17;
  lStack_120 = lVar8;
  lStack_118 = lVar7;
  ppuStack_110 = &puStack_90;
  _objc_alloc();
  func_0x00010bf20c00(lVar2);
  func_0x00010c014f80(puVar1,param_2,*(undefined8 *)(lVar2 + _DAT_11274dd6c),1);
  lVar16 = (long)_DAT_11274dd78;
  uVar15 = *(undefined8 *)(lVar2 + lVar16);
  *(undefined **)(lVar2 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar16),param_2,0);
  lVar17 = lVar2;
  func_0x00010bf02b60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar2 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf493c0(0xc010000000000000,lVar9,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + lVar16);
  lStack_188 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar10;
  func_0x00010bf493c0(0x4010000000000000,uVar10,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + lVar16);
  uStack_180 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493c0(0xc010000000000000,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + lVar16);
  uStack_178 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02b60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_170 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_188,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(uVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_11274dd70;
  if (*(long *)(lVar9 + lVar17) == 0) {
    func_0x00010be785e0(lVar9);
  }
  func_0x00010bed9580(lVar9);
  lVar3 = lVar9;
  func_0x00010c29d560(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(lVar9 + lVar17),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066aeac0; end: 1066aece3; -[SCLensExplorerLensIconCollectionViewCell _prepareStreakBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aeac0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c51b8;
  _objc_alloc();
  func_0x00010c04eae0();
  lVar18 = (long)_DAT_11274dd68;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  lVar17 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  lStack_78 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_c0 = puVar1;
  pcStack_88 = FUN_1066aece4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cced8;
  puStack_e0 = puVar6;
  uStack_d8 = uVar15;
  lStack_d0 = lVar18;
  uStack_c8 = uVar5;
  lStack_b8 = lVar4;
  lStack_b0 = lVar3;
  lStack_a8 = lVar17;
  lStack_a0 = lVar2;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010bf20c00(lVar7);
  func_0x00010c014f80(puVar1,param_2,*(undefined8 *)(lVar7 + _DAT_11274dd6c),1);
  lVar16 = (long)_DAT_11274dd78;
  uVar15 = *(undefined8 *)(lVar7 + lVar16);
  *(undefined **)(lVar7 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar16),param_2,0);
  lVar17 = lVar7;
  func_0x00010bf02b60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar7 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar7;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf493c0(0xc010000000000000,lVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar7 + lVar16);
  lStack_108 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar7;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010bf493c0(0x4010000000000000,uVar9,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar7 + lVar16);
  uStack_100 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf493c0(0xc010000000000000,uVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar7 + lVar16);
  uStack_f8 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02b60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_108,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_11274dd70;
  if (*(long *)(lVar8 + lVar17) == 0) {
    func_0x00010be785e0(lVar8);
  }
  func_0x00010bed9580(lVar8);
  lVar3 = lVar8;
  func_0x00010c29d560(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(lVar8 + lVar17),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066aece4; end: 1066aeff3; -[SCLensExplorerLensIconCollectionViewCell _prepareSelectionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aece4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cced8;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c014f80(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11274dd6c),1);
  lVar16 = (long)_DAT_11274dd78;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  lVar17 = param_1;
  func_0x00010bf02b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0xc010000000000000,lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  lStack_88 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493c0(0x4010000000000000,uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0xc010000000000000,uVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493c0(0x4010000000000000,uVar12,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_11274dd70;
  if (*(long *)(lVar2 + lVar17) == 0) {
    func_0x00010be785e0(lVar2);
  }
  func_0x00010bed9580(lVar2);
  lVar3 = lVar2;
  func_0x00010c29d560(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(lVar2 + lVar17),param_2,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066aeff4; end: 1066af073; -[SCLensExplorerLensIconCollectionViewCell _updateIconViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aeff4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274dd70;
  if (*(long *)(param_1 + lVar3) == 0) {
    func_0x00010be785e0(param_1);
  }
  func_0x00010bed9580(param_1);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066af074; end: 1066af117; -[SCLensExplorerLensIconCollectionViewCell _updateSelectionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af074(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11274dd78;
  lVar4 = *(long *)(param_1 + lVar5);
  if ((uVar2 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    if (lVar4 == 0) {
      func_0x00010be79120(param_1);
      lVar4 = *(long *)(param_1 + lVar5);
    }
    uVar1 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d340();
    func_0x00010c237de0(lVar4);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + lVar5);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 1066af118; end: 1066af1cb; -[SCLensExplorerLensIconCollectionViewCell _updateAttributionIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af118(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0e9e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11274dd60);
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010be77f60(param_1);
    }
  }
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0e9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dd60),param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066af1cc; end: 1066af2f7; -[SCLensExplorerLensIconCollectionViewCell _updateNewContentBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af1cc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd96a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c094be0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf48fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c067fc0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (0 < (long)uVar7) {
      lVar10 = (long)_DAT_11274dd64;
      lVar8 = *(long *)(param_1 + lVar10);
      if (lVar8 == 0) {
        func_0x00010be79620(param_1);
        lVar8 = *(long *)(param_1 + lVar10);
      }
      uVar9 = 0;
      goto LAB_1066af2e0;
    }
  }
  lVar8 = *(long *)(param_1 + (long)_DAT_11274dd64);
  uVar9 = 1;
LAB_1066af2e0:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar8,PTR_s_setHidden__1126479f8,uVar9);
  return;
}



/* Entry: 1066af2f8; end: 1066af3f7; -[SCLensExplorerLensIconCollectionViewCell _updateStreakBadge] */

/* WARNING: Possible PIC construction at 0x0001066af3a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066af3ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af2f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf48fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar5 = (long)_DAT_11274dd68;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar2 < 2) {
    uVar4 = 1;
  }
  else {
    if (lVar3 == 0) {
      func_0x00010be793c0(param_1);
      lVar3 = *(long *)(param_1 + lVar5);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 1066af3f8; end: 1066af517; -[SCLensExplorerLensIconCollectionViewCell _updateIconFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af3f8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_5;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = (long)_DAT_11274dd74;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  _objc_release(lVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  dVar4 = param_3 * -0.19999999999999996 * 0.5;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.5);
  _objc_release(uVar2);
  _CGRectInset(param_1,param_2,param_3,param_4,dVar4,dVar4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11274dd70));
  func_0x00010bf02b60(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1066af518; end: 1066af527; -[SCLensExplorerLensIconCollectionViewCell lensIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066af518(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd70);
}



/* Entry: 1066af528; end: 1066af5a7; -[SCLensExplorerLensIconCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af528(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dd70,0);
  _objc_storeStrong(param_1 + _DAT_11274dd68,0);
  _objc_storeStrong(param_1 + _DAT_11274dd64,0);
  _objc_storeStrong(param_1 + _DAT_11274dd78,0);
  _objc_storeStrong(param_1 + _DAT_11274dd60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dd74,0);
  return;
}



/* Entry: 1066af5a8; end: 1066af647; -[SCLensExplorerLensRichCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af5a8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2620;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  lVar1 = param_1;
  func_0x00010c094420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c111360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar1);
  if (*(long *)(param_1 + _DAT_11274dd7c) != 0) {
    func_0x00010c212f20();
  }
  return;
}



/* Entry: 1066af648; end: 1066af6ef; -[SCLensExplorerLensRichCollectionViewCell reloadViewModel] */

void FUN_1066af648(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2620;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reloadViewModel_112627e58);
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010beada00(param_1);
    func_0x00010beaf100(param_1);
    func_0x00010bead9e0(param_1);
    func_0x00010beacda0(param_1);
    func_0x00010beafa60(param_1);
    func_0x00010beaf840(param_1);
    func_0x00010beafdc0(param_1);
    func_0x00010beb1200(param_1);
    func_0x00010beada40(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066af6f0; end: 1066af8bb; -[SCLensExplorerLensRichCollectionViewCell _setupPreviewImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af6f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11274dd80;
  if (*(long *)(param_3 + lVar6) == 0) {
    func_0x00010be78ee0(param_3);
  }
  lVar7 = (long)_DAT_11274dd84;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x66,
                      *(undefined8 *)(param_3 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c111360(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111c40();
  func_0x00010c181140(*(undefined8 *)(param_3 + _DAT_11274dd88));
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111c40();
  func_0x00010c181140(param_2,*(undefined8 *)(param_3 + _DAT_11274dd8c));
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c111360(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xae,
                      *(undefined8 *)(param_3 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar5 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar5);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066af8bc; end: 1066afa6f; -[SCLensExplorerLensRichCollectionViewCell _setupLensIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066af8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074f80();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c094420();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1a7f60();
  }
  else {
    _objc_release();
    if (uVar1 == 0) {
      func_0x00010be785c0(param_5);
    }
    uVar1 = param_5;
    func_0x00010c094420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5620();
    func_0x00010c181140(param_3,*(undefined8 *)(param_5 + (long)_DAT_11274dd90));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5620();
    func_0x00010c181140(param_4,*(undefined8 *)(param_5 + (long)_DAT_11274dd94));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5620();
    func_0x00010c181140(param_2,*(undefined8 *)(param_5 + (long)_DAT_11274dd98));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5620();
    func_0x00010c181140(*(undefined8 *)(param_5 + (long)_DAT_11274dd9c));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(param_5);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066afa70; end: 1066afd7f; -[SCLensExplorerLensRichCollectionViewCell _setupLensInfoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066afa70(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5
                  ,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06c880();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c094b20();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1a7f60();
  }
  else {
    _objc_release();
    if (uVar1 == 0) {
      func_0x00010be788c0(param_5);
    }
    uVar1 = param_5;
    func_0x00010c094b20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094a60();
    func_0x00010c181140(param_2,*(undefined8 *)(param_5 + (long)_DAT_11274dda0));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094a60();
    func_0x00010c181140(-param_4,*(undefined8 *)(param_5 + (long)_DAT_11274dda4));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094a60();
    param_3 = -param_3;
    func_0x00010c181140(param_3,*(undefined8 *)(param_5 + (long)_DAT_11274dda8));
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07d660();
    uVar3 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c095760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010bdce900(param_5,param_6,uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c094b20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc3c0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07d660();
    uVar3 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5bbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010bdce900(param_5,param_6,uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c094b20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185d00();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094a80();
    uVar2 = param_5;
    func_0x00010c094b20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2073c0(param_3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06f960();
    func_0x00010c094b20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066afd80; end: 1066afdef; -[SCLensExplorerLensRichCollectionViewCell _setupGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066afd80(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0728c0();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11274ddac;
  lVar3 = *(long *)(param_1 + lVar5);
  if ((uVar2 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    if (lVar3 == 0) {
      func_0x00010be78580(param_1);
      lVar3 = *(long *)(param_1 + lVar5);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 1066afdf0; end: 1066afe93; -[SCLensExplorerLensRichCollectionViewCell _setupSelectionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066afdf0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11274ddb0;
  lVar4 = *(long *)(param_1 + lVar5);
  if ((uVar2 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    if (lVar4 == 0) {
      func_0x00010be79120(param_1);
      lVar4 = *(long *)(param_1 + lVar5);
    }
    uVar1 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d340();
    func_0x00010c237de0(lVar4);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + lVar5);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 1066afe94; end: 1066aff03; -[SCLensExplorerLensRichCollectionViewCell _setupScpBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066afe94(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d340();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11274ddb4;
  lVar3 = *(long *)(param_1 + lVar5);
  if ((uVar2 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    if (lVar3 == 0) {
      func_0x00010be792c0(param_1);
      lVar3 = *(long *)(param_1 + lVar5);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 1066aff04; end: 1066aff73; -[SCLensExplorerLensRichCollectionViewCell _setupSponsoredIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aff04(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f220();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11274ddb8;
  lVar3 = *(long *)(param_1 + lVar5);
  if ((uVar2 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    if (lVar3 == 0) {
      func_0x00010be79300(param_1);
      lVar3 = *(long *)(param_1 + lVar5);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 1066aff74; end: 1066b0043; -[SCLensExplorerLensRichCollectionViewCell _setupViewCountView] */

/* WARNING: Possible PIC construction at 0x0001066affd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066affdc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aff74(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c29c5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar4 = (long)_DAT_11274ddbc;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    if (lVar2 == 0) {
      func_0x00010be79900(param_1);
      lVar2 = *(long *)(param_1 + lVar4);
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 1066b0044; end: 1066b018f; -[SCLensExplorerLensRichCollectionViewCell _setupLensNameView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b0044(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c233cc0();
  if ((uVar1 & 1) == 0) {
    _objc_release(uVar5);
  }
  else {
    uVar1 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c095760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if (uVar4 != 0) {
      lVar6 = (long)_DAT_11274dd7c;
      if (*(long *)(param_1 + lVar6) == 0) {
        func_0x00010be78920(param_1);
      }
      uVar5 = param_1;
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c095760();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_1066b0164;
    }
  }
  lVar6 = (long)_DAT_11274dd7c;
  if (*(long *)(param_1 + lVar6) == 0) {
    return;
  }
  func_0x00010c12c960();
  uVar5 = *(ulong *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
LAB_1066b0164:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066b0190; end: 1066b01c3; -[SCLensExplorerLensRichCollectionViewCell setupKarma] */

void FUN_1066b0190(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2620;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setupKarma_112667d68);
  return;
}



/* Entry: 1066b01c4; end: 1066b022f; -[SCLensExplorerLensRichCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b01c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2620;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_updateStyleOverride__112680418);
  *(undefined8 *)(param_1 + _DAT_11274dd84) = param_3;
  func_0x00010c28a7c0(*(undefined8 *)(param_1 + _DAT_11274ddc4));
  func_0x00010beaf100(param_1);
  return;
}



/* Entry: 1066b0230; end: 1066b02eb; -[SCLensExplorerLensRichCollectionViewCell _applySelection:toString:] */

void FUN_1066b0230(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    _objc_retain(param_4);
    uVar3 = param_4;
  }
  else {
    uVar1 = param_4;
    func_0x00010c0d3c80();
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c08fa60(param_4);
    func_0x00010bef6f20(uVar1,param_2,uVar4,puVar2,0,uVar3);
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010bf51e00(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066b02ec; end: 1066b069f; -[SCLensExplorerLensRichCollectionViewCell _preparePreviewImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b02ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined8 **ppuStack_580;
  code *pcStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  long lStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 **ppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  long lStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  long lStack_408;
  undefined8 **ppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 **ppuStack_380;
  code *pcStack_378;
  long lStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar26 = (long)_DAT_11274dd80;
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae,
                      *(undefined8 *)(param_1 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar20);
  _objc_release(puVar1);
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 0x4028000000000000;
  func_0x00010c1842e0();
  _objc_release(uVar20);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar26),param_2,1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar26),param_2,4);
  func_0x00010c1d4c20(*(undefined8 *)(param_1 + lVar26),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(uVar29);
  _objc_release(uVar20);
  _objc_release(puVar1);
  lVar23 = param_1;
  func_0x00010bf02b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar23);
  uVar29 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274dd88;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(undefined8 *)(param_1 + lVar25) = uVar20;
  _objc_release(uVar21);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11274dd8c;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined8 *)(param_1 + lVar22) = uVar20;
  _objc_release(uVar21);
  _objc_release(uVar29);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  lStack_a0 = lVar2;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(lVar2,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar26);
  lStack_98 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf493a0(uVar29,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_1 + lVar25);
  uStack_80 = *(undefined8 *)(param_1 + lVar22);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar20);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar29);
  _objc_release(lVar2);
  _objc_release(lVar24);
  _objc_release(lVar23);
  lVar28 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1066b06a0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126ccee0;
  uStack_110 = uVar20;
  lStack_108 = lVar27;
  lStack_100 = lVar26;
  uStack_f8 = uVar29;
  lStack_f0 = lVar25;
  lStack_e8 = lVar2;
  lStack_e0 = lVar24;
  lStack_d8 = lVar22;
  lStack_d0 = lVar23;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar30 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar31 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar21,dVar30,dVar31);
  lVar27 = (long)_DAT_11274ddc4;
  uVar20 = *(undefined8 *)(lVar28 + lVar27);
  *(undefined **)(lVar28 + lVar27) = puVar3;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar28 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar28 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  lVar23 = lVar28;
  func_0x00010bf4dce0(lVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar23);
  uVar29 = *(undefined8 *)(lVar28 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar28;
  func_0x00010bf4dce0(lVar28);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar28;
  func_0x00010c29d560(lVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60();
  uVar20 = uVar29;
  func_0x00010bf493c0(uVar21,uVar29,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11274dda0;
  uVar21 = *(undefined8 *)(lVar28 + lVar2);
  *(undefined8 *)(lVar28 + lVar2) = uVar20;
  _objc_release(uVar21);
  _objc_release(lVar26);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(lVar28 + lVar27);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar28;
  func_0x00010bf4dce0(lVar28);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar28;
  func_0x00010c29d560(lVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60();
  uVar20 = uVar29;
  func_0x00010bf493c0(-dVar31,uVar29,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11274dda4;
  uVar21 = *(undefined8 *)(lVar28 + lVar22);
  *(undefined8 *)(lVar28 + lVar22) = uVar20;
  _objc_release(uVar21);
  _objc_release(lVar26);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(lVar28 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar28;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar28;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60();
  dVar30 = -dVar30;
  uVar20 = uVar29;
  func_0x00010bf493c0(dVar30,uVar29,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274dda8;
  uVar21 = *(undefined8 *)(lVar28 + lVar25);
  *(undefined8 *)(lVar28 + lVar25) = uVar20;
  _objc_release(uVar21);
  _objc_release(lVar26);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(uVar29);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_130 = *(undefined8 *)(lVar28 + lVar2);
  uStack_128 = *(undefined8 *)(lVar28 + lVar22);
  uStack_120 = *(undefined8 *)(lVar28 + lVar25);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_130,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010bef9040(*(undefined8 *)(lVar28 + lVar27),param_2,puVar1);
  func_0x00010c28a7c0(*(undefined8 *)(lVar28 + lVar27),param_2,
                      *(undefined8 *)(lVar28 + _DAT_11274dd84));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1066b0a1c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  ppuStack_140 = &puStack_c0;
  _objc_opt_new();
  lVar26 = (long)_DAT_11274ddc8;
  uVar20 = *(undefined8 *)(puVar1 + lVar26);
  *(undefined **)(puVar1 + lVar26) = puVar3;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar26),param_2,0);
  func_0x00010c182220(*(undefined8 *)(puVar1 + lVar26),param_2,4);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar20 = *(undefined8 *)(puVar1 + lVar26);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(dVar30);
  _objc_release(uVar20);
  _objc_release(puVar3);
  lVar23 = (long)_DAT_11274ddc4;
  lVar24 = *(long *)(puVar1 + lVar23);
  puVar3 = puVar1;
  func_0x00010bf02b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar24 == 0) {
    func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(puVar1 + lVar26));
  }
  else {
    func_0x00010c066f80(puVar3,param_2,*(undefined8 *)(puVar1 + lVar26),
                        *(undefined8 *)(puVar1 + lVar23));
  }
  _objc_release(puVar3);
  uVar29 = *(undefined8 *)(puVar1 + lVar26);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11274dd90;
  uVar21 = *(undefined8 *)(puVar1 + lVar24);
  *(undefined8 *)(puVar1 + lVar24) = uVar20;
  _objc_release(uVar21);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(puVar1 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11274dd94;
  uVar21 = *(undefined8 *)(puVar1 + lVar27);
  *(undefined8 *)(puVar1 + lVar27) = uVar20;
  _objc_release(uVar21);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(puVar1 + lVar26);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf02b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf493a0(uVar29,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_11274dd98;
  uVar21 = *(undefined8 *)(puVar1 + lVar28);
  *(undefined8 *)(puVar1 + lVar28) = uVar20;
  _objc_release(uVar21);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(puVar1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar29;
  func_0x00010bf493a0(uVar29,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11274dd9c;
  uVar21 = *(undefined8 *)(puVar1 + lVar23);
  *(undefined8 *)(puVar1 + lVar23) = uVar20;
  _objc_release(uVar21);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar29);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_1c8 = *(undefined8 *)(puVar1 + lVar24);
  uStack_1c0 = *(undefined8 *)(puVar1 + lVar27);
  uStack_1b8 = *(undefined8 *)(puVar1 + lVar28);
  uStack_1b0 = *(undefined8 *)(puVar1 + lVar23);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar1);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_218 = &DAT_11274dd90;
  puStack_1f0 = puVar3;
  pcStack_1d8 = FUN_1066b0d30;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126ccee8;
  lStack_230 = lVar25;
  lStack_228 = lVar28;
  lStack_220 = lVar27;
  lStack_210 = lVar24;
  lStack_208 = lVar23;
  puStack_200 = puVar5;
  puStack_1f8 = puVar4;
  puStack_1e8 = puVar1;
  ppuStack_1e0 = &ppuStack_140;
  _objc_alloc();
  func_0x00010bf20c00(puVar6);
  func_0x00010c013de0();
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_250 = puVar5;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bf414e0(0x3fd0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_248 = puVar8;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf414e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_240 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_250,3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bfcd9c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bfcd9c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar1);
  lVar23 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar6 + lVar23),param_2,puVar3);
  puStack_2a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar6 + lVar23);
  puStack_278 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_280 = uVar20;
  func_0x00010bf493a0(puVar1,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_288 = puVar1;
  puStack_270 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar6 + lVar23);
  puStack_290 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = uVar20;
  func_0x00010bf493a0(puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  puStack_268 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar6 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf493a0(puVar1,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_260 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(puVar6 + lVar23);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493e0(0x3fe0000000000000,puVar7,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_258 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_270,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2a0,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar29);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(uStack_280);
  _objc_release(puStack_278);
  lVar23 = *(long *)(puVar6 + _DAT_11274ddac);
  *(undefined **)(puVar6 + _DAT_11274ddac) = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1066b1108;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126cced8;
  puStack_300 = puVar1;
  puStack_2f8 = puVar4;
  uStack_2f0 = uVar20;
  puStack_2e8 = puVar9;
  puStack_2e0 = puVar8;
  uStack_2d8 = uVar29;
  puStack_2d0 = puVar7;
  puStack_2c8 = puVar5;
  puStack_2c0 = puVar3;
  puStack_2b8 = puVar6;
  ppuStack_2b0 = &ppuStack_1e0;
  _objc_alloc();
  func_0x00010bf20c00(lVar23);
  func_0x00010c014f80(puVar10,param_2,*(undefined8 *)(lVar23 + _DAT_11274dd84),0);
  lVar27 = (long)_DAT_11274ddb0;
  uVar20 = *(undefined8 *)(lVar23 + lVar27);
  *(undefined **)(lVar23 + lVar27) = puVar10;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar23 + lVar27),param_2,0);
  lVar24 = lVar23;
  func_0x00010bf02b60(lVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  puStack_360 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = *(long *)(lVar23 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  lStack_338 = lVar26;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_330 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_340 = lVar24;
  func_0x00010bf493c0(0xc010000000000000,lVar26,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar23 + lVar27);
  lStack_348 = lVar26;
  lStack_328 = lVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  uStack_358 = uVar21;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_350 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_368 = lVar24;
  func_0x00010bf493c0(0x4010000000000000,uVar21,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar23 + lVar27);
  uStack_320 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar12;
  func_0x00010bf493c0(0xc010000000000000,uVar12,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar23 + lVar27);
  uStack_318 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar13;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_310 = uVar29;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_328,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_360,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar29);
  _objc_release(lVar27);
  _objc_release(lVar23);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(lVar26);
  _objc_release(lVar24);
  _objc_release(uVar12);
  _objc_release(uVar21);
  _objc_release(lStack_368);
  _objc_release(lStack_350);
  _objc_release(uStack_358);
  _objc_release(lStack_348);
  _objc_release(lStack_340);
  _objc_release(lStack_330);
  lVar28 = lStack_338;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_1066b1418;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar28;
  uStack_3d0 = uVar21;
  uStack_3c8 = uVar12;
  puStack_3c0 = puVar1;
  uStack_3b8 = uVar29;
  lStack_3b0 = lVar27;
  lStack_3a8 = lVar23;
  uStack_3a0 = uVar13;
  uStack_398 = uVar20;
  lStack_390 = lVar26;
  lStack_388 = lVar24;
  ppuStack_380 = &ppuStack_2b0;
  func_0x00010921dec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_3f0 = lVar2;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  lVar23 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar28 + lVar23),param_2,puVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar28 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc014000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_3e8 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(lVar28 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(0x4024000000000000,puVar6,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_3e0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_3e8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar29);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  uVar21 = *(undefined8 *)(lVar28 + _DAT_11274ddb4);
  *(undefined **)(lVar28 + _DAT_11274ddb4) = puVar3;
  _objc_release(uVar21);
  lVar23 = lStack_3f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  puStack_430 = puVar1;
  pcStack_3f8 = FUN_1066b15f0;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_450 = puVar7;
  uStack_448 = uVar29;
  puStack_440 = puVar6;
  puStack_438 = puVar5;
  uStack_428 = uVar20;
  puStack_420 = puVar4;
  puStack_418 = puVar3;
  puStack_410 = puVar8;
  lStack_408 = lVar28;
  ppuStack_400 = &ppuStack_380;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar3);
  lVar24 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar23 + lVar24),param_2,puVar1);
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar3,param_2,0x18);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010befbb60(puVar1,param_2,puVar3);
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar23 + lVar24);
  lStack_498 = lVar23;
  func_0x00010c08de00(uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0x4018000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puStack_490 = puVar5;
  _objc_release(uVar20);
  _objc_release(puVar4);
  puStack_4c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  puStack_488 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar23 + lVar24);
  puStack_4a0 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_4a8 = uVar20;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_4b0 = puVar4;
  puStack_480 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_4b8 = puVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_4c0 = puVar5;
  puStack_478 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_4d0 = puVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_470 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  puStack_468 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_460 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_488,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_4c8,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_4d0);
  _objc_release(puStack_4c0);
  _objc_release(puStack_4b8);
  _objc_release(puStack_4b0);
  _objc_release(uStack_4a8);
  _objc_release(puStack_4a0);
  uVar20 = *(undefined8 *)(lStack_498 + _DAT_11274ddb8);
  *(undefined **)(lStack_498 + _DAT_11274ddb8) = puVar1;
  _objc_release(uVar20);
  _objc_release(puStack_490);
  puVar14 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4d8 = FUN_1066b19e0;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_530 = puVar4;
  puStack_528 = puVar10;
  puStack_520 = puVar9;
  puStack_518 = puVar8;
  puStack_510 = puVar7;
  puStack_508 = puVar5;
  puStack_500 = puVar11;
  puStack_4f8 = puVar3;
  puStack_4f0 = puVar1;
  puStack_4e8 = puVar6;
  ppuStack_4e0 = &ppuStack_400;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar15,param_2,0);
  func_0x00010c166c00(puVar15,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar15);
  func_0x00010c190b80(puVar15,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar15,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_558 = puVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010c182220(puVar3,param_2,4);
  puVar1 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar23 = (long)_DAT_11274ddc0;
  uVar20 = *(undefined8 *)(puVar14 + lVar23);
  *(undefined **)(puVar14 + lVar23) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar14 + lVar23),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar14 + lVar23),param_2,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar14 + lVar23),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar15,param_2,puVar3);
  func_0x00010bef6d60(puVar15,param_2,*(undefined8 *)(puVar14 + lVar23));
  lVar23 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar14 + lVar23),param_2,puVar15);
  puStack_570 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar14 + lVar23);
  puStack_560 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_568 = uVar20;
  func_0x00010bf493c0(0x4018000000000000,puVar1,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  puStack_550 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar14 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar15;
  puStack_548 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_540 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_550,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_570,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uStack_568);
  _objc_release(puStack_560);
  uVar29 = *(undefined8 *)(puVar14 + _DAT_11274ddbc);
  *(undefined **)(puVar14 + _DAT_11274ddbc) = puVar15;
  _objc_release(uVar29);
  _objc_release(puVar3);
  puVar9 = puStack_558;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return;
  }
  ___stack_chk_fail();
  pcStack_578 = FUN_1066b1d9c;
  lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_5d0 = uVar20;
  puStack_5c8 = puVar4;
  puStack_5c0 = puVar6;
  puStack_5b8 = puVar1;
  puStack_5b0 = puVar8;
  puStack_5a8 = puVar7;
  puStack_5a0 = puVar3;
  puStack_598 = puVar5;
  puStack_590 = puVar15;
  puStack_588 = puVar14;
  ppuStack_580 = &ppuStack_4e0;
  _objc_opt_new();
  lVar23 = (long)_DAT_11274dd7c;
  uVar20 = *(undefined8 *)(puVar9 + lVar23);
  *(undefined **)(puVar9 + lVar23) = puVar10;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + lVar23),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar9 + lVar23),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar9 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar9 + lVar23),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar9 + lVar23),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar9 + lVar23),param_2,1);
  puVar1 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(puVar9 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar9 + lVar23);
  uStack_5f8 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar9 + lVar23);
  uStack_5f0 = uVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar9 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar17;
  func_0x00010bf493c0(0x4020000000000000,uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar9 + lVar23);
  uStack_5e8 = uVar21;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar19;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_5e0 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_5f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(uVar21);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar29);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 1066b06a0; end: 1066b0a1b; -[SCLensExplorerLensRichCollectionViewCell _prepareLensInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b06a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 **ppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  long lStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  long lStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  long lStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 **ppuStack_2d0;
  code *pcStack_2c8;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccee0;
  _objc_alloc();
  uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar29 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar30 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar28,dVar29,dVar30);
  lVar24 = (long)_DAT_11274ddc4;
  uVar20 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  lVar21 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar21);
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60();
  uVar20 = uVar2;
  func_0x00010bf493c0(uVar28,uVar2,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274dda0;
  uVar28 = *(undefined8 *)(param_1 + lVar25);
  *(undefined8 *)(param_1 + lVar25) = uVar20;
  _objc_release(uVar28);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60();
  uVar20 = uVar2;
  func_0x00010bf493c0(-dVar30,uVar2,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11274dda4;
  uVar28 = *(undefined8 *)(param_1 + lVar26);
  *(undefined8 *)(param_1 + lVar26) = uVar20;
  _objc_release(uVar28);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60();
  dVar29 = -dVar29;
  uVar20 = uVar2;
  func_0x00010bf493c0(dVar29,uVar2,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11274dda8;
  uVar28 = *(undefined8 *)(param_1 + lVar27);
  *(undefined8 *)(param_1 + lVar27) = uVar20;
  _objc_release(uVar28);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_80 = *(undefined8 *)(param_1 + lVar25);
  uStack_78 = *(undefined8 *)(param_1 + lVar26);
  uStack_70 = *(undefined8 *)(param_1 + lVar27);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar24),param_2,puVar1);
  func_0x00010c28a7c0(*(undefined8 *)(param_1 + lVar24),param_2,
                      *(undefined8 *)(param_1 + _DAT_11274dd84));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1066b0a1c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar23 = (long)_DAT_11274ddc8;
  uVar20 = *(undefined8 *)(puVar1 + lVar23);
  *(undefined **)(puVar1 + lVar23) = puVar3;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar23),param_2,0);
  func_0x00010c182220(*(undefined8 *)(puVar1 + lVar23),param_2,4);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar20 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(dVar29);
  _objc_release(uVar20);
  _objc_release(puVar3);
  lVar21 = (long)_DAT_11274ddc4;
  lVar22 = *(long *)(puVar1 + lVar21);
  puVar3 = puVar1;
  func_0x00010bf02b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar22 == 0) {
    func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(puVar1 + lVar23));
  }
  else {
    func_0x00010c066f80(puVar3,param_2,*(undefined8 *)(puVar1 + lVar23),
                        *(undefined8 *)(puVar1 + lVar21));
  }
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11274dd90;
  uVar28 = *(undefined8 *)(puVar1 + lVar22);
  *(undefined8 *)(puVar1 + lVar22) = uVar20;
  _objc_release(uVar28);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11274dd94;
  uVar28 = *(undefined8 *)(puVar1 + lVar24);
  *(undefined8 *)(puVar1 + lVar24) = uVar20;
  _objc_release(uVar28);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf02b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274dd98;
  uVar28 = *(undefined8 *)(puVar1 + lVar25);
  *(undefined8 *)(puVar1 + lVar25) = uVar20;
  _objc_release(uVar28);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11274dd9c;
  uVar28 = *(undefined8 *)(puVar1 + lVar21);
  *(undefined8 *)(puVar1 + lVar21) = uVar20;
  _objc_release(uVar28);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_118 = *(undefined8 *)(puVar1 + lVar22);
  uStack_110 = *(undefined8 *)(puVar1 + lVar24);
  uStack_108 = *(undefined8 *)(puVar1 + lVar25);
  uStack_100 = *(undefined8 *)(puVar1 + lVar21);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar1);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  puStack_168 = &DAT_11274dd90;
  puStack_140 = puVar3;
  pcStack_128 = FUN_1066b0d30;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126ccee8;
  lStack_180 = lVar27;
  lStack_178 = lVar25;
  lStack_170 = lVar24;
  lStack_160 = lVar22;
  lStack_158 = lVar21;
  puStack_150 = puVar5;
  puStack_148 = puVar4;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_alloc();
  func_0x00010bf20c00(puVar6);
  func_0x00010c013de0();
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1a0 = puVar5;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bf414e0(0x3fd0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_198 = puVar8;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf414e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_190 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a0,3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bfcd9c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bfcd9c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar1);
  lVar21 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar6 + lVar21),param_2,puVar3);
  puStack_1f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar6 + lVar21);
  puStack_1c8 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d0 = uVar20;
  func_0x00010bf493a0(puVar1,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_1d8 = puVar1;
  puStack_1c0 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar6 + lVar21);
  puStack_1e0 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = uVar20;
  func_0x00010bf493a0(puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  puStack_1b8 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar6 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf493a0(puVar1,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_1b0 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar6 + lVar21);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493e0(0x3fe0000000000000,puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1a8 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1f0,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1c8);
  lVar21 = *(long *)(puVar6 + _DAT_11274ddac);
  *(undefined **)(puVar6 + _DAT_11274ddac) = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_1066b1108;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126cced8;
  puStack_250 = puVar1;
  puStack_248 = puVar4;
  uStack_240 = uVar20;
  puStack_238 = puVar9;
  puStack_230 = puVar8;
  uStack_228 = uVar2;
  puStack_220 = puVar7;
  puStack_218 = puVar5;
  puStack_210 = puVar3;
  puStack_208 = puVar6;
  ppuStack_200 = &ppuStack_130;
  _objc_alloc();
  func_0x00010bf20c00(lVar21);
  func_0x00010c014f80(puVar10,param_2,*(undefined8 *)(lVar21 + _DAT_11274dd84),0);
  lVar24 = (long)_DAT_11274ddb0;
  uVar20 = *(undefined8 *)(lVar21 + lVar24);
  *(undefined **)(lVar21 + lVar24) = puVar10;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar21 + lVar24),param_2,0);
  lVar22 = lVar21;
  func_0x00010bf02b60(lVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_2b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar23 = *(long *)(lVar21 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  lStack_288 = lVar23;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_280 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_290 = lVar22;
  func_0x00010bf493c0(0xc010000000000000,lVar23,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(lVar21 + lVar24);
  lStack_298 = lVar23;
  lStack_278 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  uStack_2a8 = uVar28;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a0 = lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2b8 = lVar22;
  func_0x00010bf493c0(0x4010000000000000,uVar28,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar21 + lVar24);
  uStack_270 = uVar28;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar12;
  func_0x00010bf493c0(0xc010000000000000,uVar12,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar21 + lVar24);
  uStack_268 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_260 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_278,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2b0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar24);
  _objc_release(lVar21);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(uVar12);
  _objc_release(uVar28);
  _objc_release(lStack_2b8);
  _objc_release(lStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(lStack_298);
  _objc_release(lStack_290);
  _objc_release(lStack_280);
  lVar25 = lStack_288;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_1066b1418;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = lVar25;
  uStack_320 = uVar28;
  uStack_318 = uVar12;
  puStack_310 = puVar1;
  uStack_308 = uVar2;
  lStack_300 = lVar24;
  lStack_2f8 = lVar21;
  uStack_2f0 = uVar13;
  uStack_2e8 = uVar20;
  lStack_2e0 = lVar23;
  lStack_2d8 = lVar22;
  ppuStack_2d0 = &ppuStack_200;
  func_0x00010921dec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_340 = lVar26;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  lVar21 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar21),param_2,puVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar25 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc014000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_338 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar25 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(0x4024000000000000,puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_330 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_338,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  uVar28 = *(undefined8 *)(lVar25 + _DAT_11274ddb4);
  *(undefined **)(lVar25 + _DAT_11274ddb4) = puVar3;
  _objc_release(uVar28);
  lVar21 = lStack_340;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  puStack_380 = puVar1;
  pcStack_348 = FUN_1066b15f0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_3a0 = puVar7;
  uStack_398 = uVar2;
  puStack_390 = puVar6;
  puStack_388 = puVar5;
  uStack_378 = uVar20;
  puStack_370 = puVar4;
  puStack_368 = puVar3;
  puStack_360 = puVar8;
  lStack_358 = lVar25;
  ppuStack_350 = &ppuStack_2d0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar3);
  lVar22 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar21 + lVar22),param_2,puVar1);
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar3,param_2,0x18);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010befbb60(puVar1,param_2,puVar3);
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar21 + lVar22);
  lStack_3e8 = lVar21;
  func_0x00010c08de00(uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0x4018000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puStack_3e0 = puVar5;
  _objc_release(uVar20);
  _objc_release(puVar4);
  puStack_418 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  puStack_3d8 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar21 + lVar22);
  puStack_3f0 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_3f8 = uVar20;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_400 = puVar4;
  puStack_3d0 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_408 = puVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_410 = puVar5;
  puStack_3c8 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_420 = puVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_3c0 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  puStack_3b8 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_3b0 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_3d8,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_418,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_420);
  _objc_release(puStack_410);
  _objc_release(puStack_408);
  _objc_release(puStack_400);
  _objc_release(uStack_3f8);
  _objc_release(puStack_3f0);
  uVar20 = *(undefined8 *)(lStack_3e8 + _DAT_11274ddb8);
  *(undefined **)(lStack_3e8 + _DAT_11274ddb8) = puVar1;
  _objc_release(uVar20);
  _objc_release(puStack_3e0);
  puVar14 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_428 = FUN_1066b19e0;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_480 = puVar4;
  puStack_478 = puVar10;
  puStack_470 = puVar9;
  puStack_468 = puVar8;
  puStack_460 = puVar7;
  puStack_458 = puVar5;
  puStack_450 = puVar11;
  puStack_448 = puVar3;
  puStack_440 = puVar1;
  puStack_438 = puVar6;
  ppuStack_430 = &ppuStack_350;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar15,param_2,0);
  func_0x00010c166c00(puVar15,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar15);
  func_0x00010c190b80(puVar15,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar15,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_4a8 = puVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010c182220(puVar3,param_2,4);
  puVar1 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar21 = (long)_DAT_11274ddc0;
  uVar20 = *(undefined8 *)(puVar14 + lVar21);
  *(undefined **)(puVar14 + lVar21) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar14 + lVar21),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar14 + lVar21),param_2,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar14 + lVar21),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar15,param_2,puVar3);
  func_0x00010bef6d60(puVar15,param_2,*(undefined8 *)(puVar14 + lVar21));
  lVar21 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar14 + lVar21),param_2,puVar15);
  puStack_4c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar14 + lVar21);
  puStack_4b0 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_4b8 = uVar20;
  func_0x00010bf493c0(0x4018000000000000,puVar1,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  puStack_4a0 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar14 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar15;
  puStack_498 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_490 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_4a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_4c0,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uStack_4b8);
  _objc_release(puStack_4b0);
  uVar2 = *(undefined8 *)(puVar14 + _DAT_11274ddbc);
  *(undefined **)(puVar14 + _DAT_11274ddbc) = puVar15;
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar9 = puStack_4a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4c8 = FUN_1066b1d9c;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_520 = uVar20;
  puStack_518 = puVar4;
  puStack_510 = puVar6;
  puStack_508 = puVar1;
  puStack_500 = puVar8;
  puStack_4f8 = puVar7;
  puStack_4f0 = puVar3;
  puStack_4e8 = puVar5;
  puStack_4e0 = puVar15;
  puStack_4d8 = puVar14;
  ppuStack_4d0 = &ppuStack_430;
  _objc_opt_new();
  lVar21 = (long)_DAT_11274dd7c;
  uVar20 = *(undefined8 *)(puVar9 + lVar21);
  *(undefined **)(puVar9 + lVar21) = puVar10;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + lVar21),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar9 + lVar21),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar9 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar9 + lVar21),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar9 + lVar21),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar9 + lVar21),param_2,1);
  puVar1 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(puVar9 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar9 + lVar21);
  uStack_548 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar9 + lVar21);
  uStack_540 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar9 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar17;
  func_0x00010bf493c0(0x4020000000000000,uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar9 + lVar21);
  uStack_538 = uVar28;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar19;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_530 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_548,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(uVar28);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 1066b0a1c; end: 1066b0d2f; -[SCLensExplorerLensRichCollectionViewCell _prepareIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b0a1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  long lStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long lStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined8 **ppuStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar24 = (long)_DAT_11274ddc8;
  uVar20 = *(undefined8 *)(param_2 + lVar24);
  *(undefined **)(param_2 + lVar24) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar24),param_3,0);
  func_0x00010c182220(*(undefined8 *)(param_2 + lVar24),param_3,4);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar20 = *(undefined8 *)(param_2 + lVar24);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(param_1);
  _objc_release(uVar20);
  _objc_release(puVar1);
  lVar22 = (long)_DAT_11274ddc4;
  lVar23 = *(long *)(param_2 + lVar22);
  lVar25 = param_2;
  func_0x00010bf02b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar23 == 0) {
    func_0x00010befbb60(lVar25,param_3,*(undefined8 *)(param_2 + lVar24));
  }
  else {
    func_0x00010c066f80(lVar25,param_3,*(undefined8 *)(param_2 + lVar24),
                        *(undefined8 *)(param_2 + lVar22));
  }
  _objc_release(lVar25);
  uVar2 = *(undefined8 *)(param_2 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11274dd90;
  uVar21 = *(undefined8 *)(param_2 + lVar26);
  *(undefined8 *)(param_2 + lVar26) = uVar20;
  _objc_release(uVar21);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11274dd94;
  uVar21 = *(undefined8 *)(param_2 + lVar27);
  *(undefined8 *)(param_2 + lVar27) = uVar20;
  _objc_release(uVar21);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x00010bf02b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_11274dd98;
  uVar21 = *(undefined8 *)(param_2 + lVar28);
  *(undefined8 *)(param_2 + lVar28) = uVar20;
  _objc_release(uVar21);
  _objc_release(lVar22);
  _objc_release(lVar25);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x00010bf02b60();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11274dd9c;
  uVar21 = *(undefined8 *)(param_2 + lVar23);
  *(undefined8 *)(param_2 + lVar23) = uVar20;
  _objc_release(uVar21);
  _objc_release(lVar22);
  _objc_release(lVar25);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_98 = *(undefined8 *)(param_2 + lVar26);
  uStack_90 = *(undefined8 *)(param_2 + lVar27);
  uStack_88 = *(undefined8 *)(param_2 + lVar28);
  uStack_80 = *(undefined8 *)(param_2 + lVar23);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1066b0d30;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccee8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010bf20c00(puVar3);
  func_0x00010c013de0();
  func_0x00010c219b60();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_120 = puVar6;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bf414e0(0x3fd0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_118 = puVar8;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf414e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_120,3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar4);
  lVar25 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar3 + lVar25),param_3,puVar1);
  puStack_170 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar3 + lVar25);
  puStack_148 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = uVar20;
  func_0x00010bf493a0(puVar4,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_158 = puVar4;
  puStack_140 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar3 + lVar25);
  puStack_160 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uVar20;
  func_0x00010bf493a0(puVar5,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_138 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar3 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_130 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar3 + lVar25);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493e0(0x3fe0000000000000,puVar7,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_128 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_140,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_170,param_3,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(uStack_150);
  _objc_release(puStack_148);
  lVar25 = *(long *)(puVar3 + _DAT_11274ddac);
  *(undefined **)(puVar3 + _DAT_11274ddac) = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_1066b1108;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126cced8;
  puStack_1d0 = puVar4;
  puStack_1c8 = puVar5;
  uStack_1c0 = uVar20;
  puStack_1b8 = puVar9;
  puStack_1b0 = puVar8;
  uStack_1a8 = uVar2;
  puStack_1a0 = puVar7;
  puStack_198 = puVar6;
  puStack_190 = puVar1;
  puStack_188 = puVar3;
  ppuStack_180 = &puStack_b0;
  _objc_alloc();
  func_0x00010bf20c00(lVar25);
  func_0x00010c014f80(puVar10,param_3,*(undefined8 *)(lVar25 + _DAT_11274dd84),0);
  lVar24 = (long)_DAT_11274ddb0;
  uVar20 = *(undefined8 *)(lVar25 + lVar24);
  *(undefined **)(lVar25 + lVar24) = puVar10;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar24),param_3,0);
  lVar22 = lVar25;
  func_0x00010bf02b60(lVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_230 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar23 = *(long *)(lVar25 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar25;
  lStack_208 = lVar23;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = lVar22;
  func_0x00010bf493c0(0xc010000000000000,lVar23,param_3,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar25 + lVar24);
  lStack_218 = lVar23;
  lStack_1f8 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar25;
  uStack_228 = uVar21;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_220 = lVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = lVar22;
  func_0x00010bf493c0(0x4010000000000000,uVar21,param_3,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar25 + lVar24);
  uStack_1f0 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar25;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar12;
  func_0x00010bf493c0(0xc010000000000000,uVar12,param_3,lVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar25 + lVar24);
  uStack_1e8 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_3,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1e0 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_1f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_230,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(uVar12);
  _objc_release(uVar21);
  _objc_release(lStack_238);
  _objc_release(lStack_220);
  _objc_release(uStack_228);
  _objc_release(lStack_218);
  _objc_release(lStack_210);
  _objc_release(lStack_200);
  lVar26 = lStack_208;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_1066b1418;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = lVar26;
  uStack_2a0 = uVar21;
  uStack_298 = uVar12;
  puStack_290 = puVar1;
  uStack_288 = uVar2;
  lStack_280 = lVar24;
  lStack_278 = lVar25;
  uStack_270 = uVar13;
  uStack_268 = uVar20;
  lStack_260 = lVar23;
  lStack_258 = lVar22;
  ppuStack_250 = &ppuStack_180;
  func_0x00010921dec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_2c0 = lVar27;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  lVar25 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar25),param_3,puVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc014000000000000,puVar4,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_2b8 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(0x4024000000000000,puVar6,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2b0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_2b8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  uVar21 = *(undefined8 *)(lVar26 + _DAT_11274ddb4);
  *(undefined **)(lVar26 + _DAT_11274ddb4) = puVar3;
  _objc_release(uVar21);
  lVar25 = lStack_2c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_300 = puVar1;
  pcStack_2c8 = FUN_1066b15f0;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_320 = puVar7;
  uStack_318 = uVar2;
  puStack_310 = puVar6;
  puStack_308 = puVar5;
  uStack_2f8 = uVar20;
  puStack_2f0 = puVar4;
  puStack_2e8 = puVar3;
  puStack_2e0 = puVar8;
  lStack_2d8 = lVar26;
  ppuStack_2d0 = &ppuStack_250;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar3);
  lVar22 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar22),param_3,puVar1);
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar3,param_3,0x18);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  func_0x00010befbb60(puVar1,param_3,puVar3);
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar25 + lVar22);
  lStack_368 = lVar25;
  func_0x00010c08de00(uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0x4018000000000000,puVar4,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puStack_360 = puVar5;
  _objc_release(uVar20);
  _objc_release(puVar4);
  puStack_398 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  puStack_358 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar25 + lVar22);
  puStack_370 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_378 = uVar20;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_380 = puVar4;
  puStack_350 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_388 = puVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_390 = puVar5;
  puStack_348 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_3a0 = puVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_340 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  puStack_338 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_3,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_330 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_358,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_398,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_3a0);
  _objc_release(puStack_390);
  _objc_release(puStack_388);
  _objc_release(puStack_380);
  _objc_release(uStack_378);
  _objc_release(puStack_370);
  uVar20 = *(undefined8 *)(lStack_368 + _DAT_11274ddb8);
  *(undefined **)(lStack_368 + _DAT_11274ddb8) = puVar1;
  _objc_release(uVar20);
  _objc_release(puStack_360);
  puVar14 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_1066b19e0;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_400 = puVar4;
  puStack_3f8 = puVar10;
  puStack_3f0 = puVar9;
  puStack_3e8 = puVar8;
  puStack_3e0 = puVar7;
  puStack_3d8 = puVar5;
  puStack_3d0 = puVar11;
  puStack_3c8 = puVar3;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar6;
  ppuStack_3b0 = &ppuStack_2d0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar15,param_3,0);
  func_0x00010c166c00(puVar15,param_3,3);
  func_0x00010c207380(0x4010000000000000,puVar15);
  func_0x00010c190b80(puVar15,param_3,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar15,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_3,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_428 = puVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar3,param_3,0);
  func_0x00010c182220(puVar3,param_3,4);
  puVar1 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar25 = (long)_DAT_11274ddc0;
  uVar20 = *(undefined8 *)(puVar14 + lVar25);
  *(undefined **)(puVar14 + lVar25) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar14 + lVar25),param_3,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar14 + lVar25),param_3,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar14 + lVar25),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar15,param_3,puVar3);
  func_0x00010bef6d60(puVar15,param_3,*(undefined8 *)(puVar14 + lVar25));
  lVar25 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar14 + lVar25),param_3,puVar15);
  puStack_440 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar14 + lVar25);
  puStack_430 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_438 = uVar20;
  func_0x00010bf493c0(0x4018000000000000,puVar1,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  puStack_420 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar14 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar15;
  puStack_418 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_410 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_420,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_440,param_3,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uStack_438);
  _objc_release(puStack_430);
  uVar2 = *(undefined8 *)(puVar14 + _DAT_11274ddbc);
  *(undefined **)(puVar14 + _DAT_11274ddbc) = puVar15;
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar9 = puStack_428;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_1066b1d9c;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_4a0 = uVar20;
  puStack_498 = puVar4;
  puStack_490 = puVar6;
  puStack_488 = puVar1;
  puStack_480 = puVar8;
  puStack_478 = puVar7;
  puStack_470 = puVar3;
  puStack_468 = puVar5;
  puStack_460 = puVar15;
  puStack_458 = puVar14;
  ppuStack_450 = &ppuStack_3b0;
  _objc_opt_new();
  lVar25 = (long)_DAT_11274dd7c;
  uVar20 = *(undefined8 *)(puVar9 + lVar25);
  *(undefined **)(puVar9 + lVar25) = puVar10;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + lVar25),param_3,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar9 + lVar25),param_3,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xc6,
                      *(undefined8 *)(puVar9 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar9 + lVar25),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar9 + lVar25),param_3,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar9 + lVar25),param_3,1);
  puVar1 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(puVar9 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar16;
  func_0x00010bf493a0(uVar16,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar9 + lVar25);
  uStack_4c8 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493a0(uVar13,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar9 + lVar25);
  uStack_4c0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar9 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar17;
  func_0x00010bf493c0(0x4020000000000000,uVar17,param_3,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar9 + lVar25);
  uStack_4b8 = uVar21;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar19;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_4b0 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_4c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(uVar21);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 1066b0d30; end: 1066b1107; -[SCLensExplorerLensRichCollectionViewCell _prepareGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b0d30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccee8;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf414e0(0x3fd0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar6;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bf414e0(0x3fe8000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar2);
  lVar26 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar26),param_2,puVar1);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar26);
  puStack_a8 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar10;
  func_0x00010bf493a0(puVar2,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_b8 = puVar2;
  puStack_a0 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar26);
  puStack_c0 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar10;
  func_0x00010bf493a0(puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_98 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_90 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493e0(0x3fe0000000000000,puVar5,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uStack_c8);
  _objc_release(puStack_c0);
  _objc_release(puStack_b8);
  _objc_release(uStack_b0);
  _objc_release(puStack_a8);
  lVar26 = *(long *)(param_1 + _DAT_11274ddac);
  *(undefined **)(param_1 + _DAT_11274ddac) = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1066b1108;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126cced8;
  puStack_130 = puVar2;
  puStack_128 = puVar3;
  uStack_120 = uVar10;
  puStack_118 = puVar7;
  puStack_110 = puVar6;
  uStack_108 = uVar11;
  puStack_100 = puVar5;
  puStack_f8 = puVar4;
  puStack_f0 = puVar1;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010bf20c00(lVar26);
  func_0x00010c014f80(puVar8,param_2,*(undefined8 *)(lVar26 + _DAT_11274dd84),0);
  lVar25 = (long)_DAT_11274ddb0;
  uVar10 = *(undefined8 *)(lVar26 + lVar25);
  *(undefined **)(lVar26 + lVar25) = puVar8;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar25),param_2,0);
  lVar27 = lVar26;
  func_0x00010bf02b60(lVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar27);
  puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar26 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  lStack_168 = lVar12;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = lVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar27;
  func_0x00010bf493c0(0xc010000000000000,lVar12,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar26 + lVar25);
  lStack_178 = lVar12;
  lStack_158 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  uStack_188 = uVar13;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar27;
  func_0x00010bf493c0(0x4010000000000000,uVar13,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar26 + lVar25);
  uStack_150 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bf493c0(0xc010000000000000,uVar14,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar26 + lVar25);
  uStack_148 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar26;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar15;
  func_0x00010bf493c0(0x4010000000000000,uVar15,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_158,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_190,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(lVar25);
  _objc_release(lVar26);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(lVar27);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lStack_198);
  _objc_release(lStack_180);
  _objc_release(uStack_188);
  _objc_release(lStack_178);
  _objc_release(lStack_170);
  _objc_release(lStack_160);
  lVar16 = lStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_1066b1418;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = lVar16;
  uStack_200 = uVar13;
  uStack_1f8 = uVar14;
  puStack_1f0 = puVar1;
  uStack_1e8 = uVar11;
  lStack_1e0 = lVar25;
  lStack_1d8 = lVar26;
  uStack_1d0 = uVar15;
  uStack_1c8 = uVar10;
  lStack_1c0 = lVar12;
  lStack_1b8 = lVar27;
  ppuStack_1b0 = &puStack_e0;
  func_0x00010921dec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_220 = lVar17;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  lVar26 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar16 + lVar26),param_2,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar16 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493c0(0xc014000000000000,puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_218 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar16 + lVar26);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493c0(0x4024000000000000,puVar5,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_210 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_218,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(lVar16 + _DAT_11274ddb4);
  *(undefined **)(lVar16 + _DAT_11274ddb4) = puVar2;
  _objc_release(uVar13);
  lVar26 = lStack_220;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  puStack_260 = puVar1;
  pcStack_228 = FUN_1066b15f0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_280 = puVar6;
  uStack_278 = uVar11;
  puStack_270 = puVar5;
  puStack_268 = puVar4;
  uStack_258 = uVar10;
  puStack_250 = puVar3;
  puStack_248 = puVar2;
  puStack_240 = puVar7;
  lStack_238 = lVar16;
  ppuStack_230 = &ppuStack_1b0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar2);
  lVar27 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar27),param_2,puVar1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar2,param_2,0x18);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar26 + lVar27);
  lStack_2c8 = lVar26;
  func_0x00010c08de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493c0(0x4018000000000000,puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puStack_2c0 = puVar4;
  _objc_release(uVar10);
  _objc_release(puVar3);
  puStack_2f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  puStack_2b8 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar26 + lVar27);
  puStack_2d0 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2d8 = uVar10;
  func_0x00010bf493c0(0xc018000000000000,puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_2e0 = puVar3;
  puStack_2b0 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_2e8 = puVar4;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_2f0 = puVar4;
  puStack_2a8 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_300 = puVar3;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_2a0 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_298 = puVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_290 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2b8,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2f8,param_2,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_300);
  _objc_release(puStack_2f0);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(uStack_2d8);
  _objc_release(puStack_2d0);
  uVar10 = *(undefined8 *)(lStack_2c8 + _DAT_11274ddb8);
  *(undefined **)(lStack_2c8 + _DAT_11274ddb8) = puVar1;
  _objc_release(uVar10);
  _objc_release(puStack_2c0);
  puVar19 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  pcStack_308 = FUN_1066b19e0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_360 = puVar3;
  puStack_358 = puVar9;
  puStack_350 = puVar8;
  puStack_348 = puVar7;
  puStack_340 = puVar6;
  puStack_338 = puVar4;
  puStack_330 = puVar18;
  puStack_328 = puVar2;
  puStack_320 = puVar1;
  puStack_318 = puVar5;
  ppuStack_310 = &ppuStack_230;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar20,param_2,0);
  func_0x00010c166c00(puVar20,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar20);
  func_0x00010c190b80(puVar20,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar20,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_388 = puVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar2,param_2,0);
  func_0x00010c182220(puVar2,param_2,4);
  puVar1 = puVar2;
  func_0x00010c2a5060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar26 = (long)_DAT_11274ddc0;
  uVar10 = *(undefined8 *)(puVar19 + lVar26);
  *(undefined **)(puVar19 + lVar26) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(puVar19 + lVar26),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar19 + lVar26),param_2,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar19 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar20,param_2,puVar2);
  func_0x00010bef6d60(puVar20,param_2,*(undefined8 *)(puVar19 + lVar26));
  lVar26 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar19 + lVar26),param_2,puVar20);
  puStack_3a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar19 + lVar26);
  puStack_390 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_398 = uVar10;
  func_0x00010bf493c0(0x4018000000000000,puVar1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar20;
  puStack_380 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar19 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493c0(0xc018000000000000,puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  puStack_378 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_370 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_380,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_3a0,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uStack_398);
  _objc_release(puStack_390);
  uVar11 = *(undefined8 *)(puVar19 + _DAT_11274ddbc);
  *(undefined **)(puVar19 + _DAT_11274ddbc) = puVar20;
  _objc_release(uVar11);
  _objc_release(puVar2);
  puVar8 = puStack_388;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_1066b1d9c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126aea58;
  uStack_400 = uVar10;
  puStack_3f8 = puVar3;
  puStack_3f0 = puVar5;
  puStack_3e8 = puVar1;
  puStack_3e0 = puVar7;
  puStack_3d8 = puVar6;
  puStack_3d0 = puVar2;
  puStack_3c8 = puVar4;
  puStack_3c0 = puVar20;
  puStack_3b8 = puVar19;
  ppuStack_3b0 = &ppuStack_310;
  _objc_opt_new();
  lVar26 = (long)_DAT_11274dd7c;
  uVar10 = *(undefined8 *)(puVar8 + lVar26);
  *(undefined **)(puVar8 + lVar26) = puVar9;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(puVar8 + lVar26),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar8 + lVar26),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar8 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar8 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar8 + lVar26),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar8 + lVar26),param_2,1);
  puVar1 = puVar8;
  func_0x00010bf4dce0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar21 = *(undefined8 *)(puVar8 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar8 + lVar26);
  uStack_428 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010bf4dce0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(puVar8 + lVar26);
  uStack_420 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar8 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar22;
  func_0x00010bf493c0(0x4020000000000000,uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(puVar8 + lVar26);
  uStack_418 = uVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar24;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_410 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_428,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(uVar24);
  _objc_release(uVar13);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar21);
  return;
}



/* Entry: 1066b1108; end: 1066b1417; -[SCLensExplorerLensRichCollectionViewCell _prepareSelectionIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b1108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 **ppuStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cced8;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c014f80(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11274dd84),0);
  lVar26 = (long)_DAT_11274ddb0;
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26),param_2,0);
  lVar25 = param_1;
  func_0x00010bf02b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar25);
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  lStack_98 = lVar2;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar25;
  func_0x00010bf493c0(0xc010000000000000,lVar2,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar26);
  lStack_a8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  uStack_b8 = uVar3;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar25;
  func_0x00010bf493c0(0x4010000000000000,uVar3,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar26);
  uStack_80 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf493c0(0xc010000000000000,uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar26);
  uStack_78 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111360();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493c0(0x4010000000000000,uVar5,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(lVar26);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(lVar2);
  _objc_release(lVar25);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_c8);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar6 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1066b1418;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = lVar6;
  uStack_130 = uVar3;
  uStack_128 = uVar4;
  puStack_120 = puVar1;
  uStack_118 = uVar12;
  lStack_110 = lVar26;
  lStack_108 = param_1;
  uStack_100 = uVar5;
  uStack_f8 = uVar24;
  lStack_f0 = lVar2;
  lStack_e8 = lVar25;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010921dec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_150 = lVar7;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  lVar25 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar6 + lVar25),param_2,puVar8);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar9 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar6 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493c0(0xc014000000000000,puVar9,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  puStack_148 = puVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar6 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493c0(0x4024000000000000,puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_140 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar24);
  _objc_release(puVar9);
  uVar3 = *(undefined8 *)(lVar6 + _DAT_11274ddb4);
  *(undefined **)(lVar6 + _DAT_11274ddb4) = puVar8;
  _objc_release(uVar3);
  lVar25 = lStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  puStack_190 = puVar1;
  pcStack_158 = FUN_1066b15f0;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1b0 = puVar13;
  uStack_1a8 = uVar12;
  puStack_1a0 = puVar11;
  puStack_198 = puVar10;
  uStack_188 = uVar24;
  puStack_180 = puVar9;
  puStack_178 = puVar8;
  puStack_170 = puVar14;
  lStack_168 = lVar6;
  ppuStack_160 = &puStack_e0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar8);
  lVar2 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar2),param_2,puVar1);
  puVar8 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar8,param_2,0x18);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010befbb60(puVar1,param_2,puVar8);
  puVar9 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar25 + lVar2);
  lStack_1f8 = lVar25;
  func_0x00010c08de00(uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493c0(0x4018000000000000,puVar9,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar10;
  _objc_release(uVar24);
  _objc_release(puVar9);
  puStack_228 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar9 = puVar1;
  puStack_1e8 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar25 + lVar2);
  puStack_200 = puVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = uVar24;
  func_0x00010bf493c0(0xc018000000000000,puVar9,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_210 = puVar9;
  puStack_1e0 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_218 = puVar10;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_220 = puVar10;
  puStack_1d8 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = puVar9;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  puStack_1d0 = puVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  puStack_1c8 = puVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1c0 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e8,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_228,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puStack_230);
  _objc_release(puStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(uStack_208);
  _objc_release(puStack_200);
  uVar24 = *(undefined8 *)(lStack_1f8 + _DAT_11274ddb8);
  *(undefined **)(lStack_1f8 + _DAT_11274ddb8) = puVar1;
  _objc_release(uVar24);
  _objc_release(puStack_1f0);
  puVar18 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_1066b19e0;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_290 = puVar9;
  puStack_288 = puVar16;
  puStack_280 = puVar15;
  puStack_278 = puVar14;
  puStack_270 = puVar13;
  puStack_268 = puVar10;
  puStack_260 = puVar17;
  puStack_258 = puVar8;
  puStack_250 = puVar1;
  puStack_248 = puVar11;
  ppuStack_240 = &ppuStack_160;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar19,param_2,0);
  func_0x00010c166c00(puVar19,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar19);
  func_0x00010c190b80(puVar19,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar19,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_2b8 = puVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar8,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar8,param_2,0);
  func_0x00010c182220(puVar8,param_2,4);
  puVar1 = puVar8;
  func_0x00010c2a5060(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar9);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar25 = (long)_DAT_11274ddc0;
  uVar24 = *(undefined8 *)(puVar18 + lVar25);
  *(undefined **)(puVar18 + lVar25) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(puVar18 + lVar25),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar18 + lVar25),param_2,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar18 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar19,param_2,puVar8);
  func_0x00010bef6d60(puVar19,param_2,*(undefined8 *)(puVar18 + lVar25));
  lVar25 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar18 + lVar25),param_2,puVar19);
  puStack_2d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(puVar18 + lVar25);
  puStack_2c0 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c8 = uVar24;
  func_0x00010bf493c0(0x4018000000000000,puVar1,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar19;
  puStack_2b0 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(puVar18 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493c0(0xc018000000000000,puVar9,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar19;
  puStack_2a8 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2a0 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2b0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2d0,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar24);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(uStack_2c8);
  _objc_release(puStack_2c0);
  uVar12 = *(undefined8 *)(puVar18 + _DAT_11274ddbc);
  *(undefined **)(puVar18 + _DAT_11274ddbc) = puVar19;
  _objc_release(uVar12);
  _objc_release(puVar8);
  puVar15 = puStack_2b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_1066b1d9c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = PTR_PTR_1126aea58;
  uStack_330 = uVar24;
  puStack_328 = puVar9;
  puStack_320 = puVar11;
  puStack_318 = puVar1;
  puStack_310 = puVar14;
  puStack_308 = puVar13;
  puStack_300 = puVar8;
  puStack_2f8 = puVar10;
  puStack_2f0 = puVar19;
  puStack_2e8 = puVar18;
  ppuStack_2e0 = &ppuStack_240;
  _objc_opt_new();
  lVar25 = (long)_DAT_11274dd7c;
  uVar24 = *(undefined8 *)(puVar15 + lVar25);
  *(undefined **)(puVar15 + lVar25) = puVar16;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(puVar15 + lVar25),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar15 + lVar25),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar15 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar15 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar15 + lVar25),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar15 + lVar25),param_2,1);
  puVar1 = puVar15;
  func_0x00010bf4dce0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar20 = *(undefined8 *)(puVar15 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar15;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar15 + lVar25);
  uStack_358 = uVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar15;
  func_0x00010bf4dce0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar15 + lVar25);
  uStack_350 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(puVar15 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar21;
  func_0x00010bf493c0(0x4020000000000000,uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar15 + lVar25);
  uStack_348 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar23;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_340 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_358,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar4);
  _objc_release(uVar23);
  _objc_release(uVar3);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar20);
  return;
}



/* Entry: 1066b1418; end: 1066b15ef; -[SCLensExplorerLensRichCollectionViewCell _prepareSnapchatPlusBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b1418(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = param_1;
  func_0x00010921dec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_80 = lVar22;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  lVar22 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar22),param_2,puVar1);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0xc014000000000000,puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_78 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0x4024000000000000,puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274ddb4);
  *(undefined **)(param_1 + _DAT_11274ddb4) = puVar1;
  _objc_release(uVar9);
  lVar22 = lStack_80;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_c0 = puVar10;
  pcStack_88 = FUN_1066b15f0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_e0 = puVar7;
  uStack_d8 = uVar6;
  puStack_d0 = puVar5;
  puStack_c8 = puVar4;
  uStack_b8 = uVar3;
  puStack_b0 = puVar2;
  puStack_a8 = puVar1;
  puStack_a0 = puVar8;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar10,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar10;
  func_0x00010c08c0e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar1);
  lVar23 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(lVar22 + lVar23),param_2,puVar10);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar1,param_2,0x18);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar10,param_2,puVar1);
  puVar2 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar22 + lVar23);
  lStack_128 = lVar22;
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0x4018000000000000,puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar4;
  _objc_release(uVar3);
  _objc_release(puVar2);
  puStack_158 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar10;
  puStack_118 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar22 + lVar23);
  puStack_130 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar3;
  func_0x00010bf493c0(0xc018000000000000,puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  puStack_140 = puVar2;
  puStack_110 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar4;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  puStack_150 = puVar4;
  puStack_108 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_100 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_f8 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_158,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puStack_160);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release(puStack_130);
  uVar3 = *(undefined8 *)(lStack_128 + _DAT_11274ddb8);
  *(undefined **)(lStack_128 + _DAT_11274ddb8) = puVar10;
  _objc_release(uVar3);
  _objc_release(puStack_120);
  puVar14 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1066b19e0;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar12;
  puStack_1b0 = puVar11;
  puStack_1a8 = puVar8;
  puStack_1a0 = puVar7;
  puStack_198 = puVar4;
  puStack_190 = puVar13;
  puStack_188 = puVar1;
  puStack_180 = puVar10;
  puStack_178 = puVar5;
  ppuStack_170 = &puStack_90;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar15,param_2,0);
  func_0x00010c166c00(puVar15,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar15);
  func_0x00010c190b80(puVar15,param_2,0);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar15,param_2,puVar10);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_1e8 = puVar10;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c182220(puVar1,param_2,4);
  puVar10 = puVar1;
  func_0x00010c2a5060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar2);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar22 = (long)_DAT_11274ddc0;
  uVar3 = *(undefined8 *)(puVar14 + lVar22);
  *(undefined **)(puVar14 + lVar22) = puVar10;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(puVar14 + lVar22),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar14 + lVar22),param_2,0x18);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar14 + lVar22),param_2,puVar10);
  _objc_release(puVar10);
  func_0x00010bef6d60(puVar15,param_2,puVar1);
  func_0x00010bef6d60(puVar15,param_2,*(undefined8 *)(puVar14 + lVar22));
  lVar22 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar14 + lVar22),param_2,puVar15);
  puStack_200 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar14 + lVar22);
  puStack_1f0 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = uVar3;
  func_0x00010bf493c0(0x4018000000000000,puVar10,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  puStack_1e0 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar14 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0xc018000000000000,puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  puStack_1d8 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1d0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_200,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(uStack_1f8);
  _objc_release(puStack_1f0);
  uVar6 = *(undefined8 *)(puVar14 + _DAT_11274ddbc);
  *(undefined **)(puVar14 + _DAT_11274ddbc) = puVar15;
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar11 = puStack_1e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_1066b1d9c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR_PTR_1126aea58;
  uStack_260 = uVar3;
  puStack_258 = puVar2;
  puStack_250 = puVar5;
  puStack_248 = puVar10;
  puStack_240 = puVar8;
  puStack_238 = puVar7;
  puStack_230 = puVar1;
  puStack_228 = puVar4;
  puStack_220 = puVar15;
  puStack_218 = puVar14;
  ppuStack_210 = &ppuStack_170;
  _objc_opt_new();
  lVar22 = (long)_DAT_11274dd7c;
  uVar3 = *(undefined8 *)(puVar11 + lVar22);
  *(undefined **)(puVar11 + lVar22) = puVar12;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(puVar11 + lVar22),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar11 + lVar22),param_2,0x22);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar11 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar11 + lVar22),param_2,puVar10);
  _objc_release(puVar10);
  func_0x00010c213040(*(undefined8 *)(puVar11 + lVar22),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar11 + lVar22),param_2,1);
  puVar10 = puVar11;
  func_0x00010bf4dce0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(puVar11 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar11 + lVar22);
  uStack_288 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar11;
  func_0x00010bf4dce0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar11 + lVar22);
  uStack_280 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar11 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar18;
  func_0x00010bf493c0(0x4020000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar11 + lVar22);
  uStack_278 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_270 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_288,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 1066b15f0; end: 1066b19df; -[SCLensExplorerLensRichCollectionViewCell _prepareSponsoredIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b15f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar2);
  lVar22 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar22),param_2,puVar1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c21ad00(puVar2,param_2,0x18);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010670e090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  lStack_a8 = param_1;
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493c0(0x4018000000000000,puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar5;
  _objc_release(uVar4);
  _objc_release(puVar3);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  puStack_98 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  puStack_b0 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar4;
  func_0x00010bf493c0(0xc018000000000000,puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_c0 = puVar3;
  puStack_90 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar5;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_d0 = puVar5;
  puStack_88 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar3;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_78 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puStack_e0);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  _objc_release(puStack_c0);
  _objc_release(uStack_b8);
  _objc_release(puStack_b0);
  uVar4 = *(undefined8 *)(lStack_a8 + _DAT_11274ddb8);
  *(undefined **)(lStack_a8 + _DAT_11274ddb8) = puVar1;
  _objc_release(uVar4);
  _objc_release(puStack_a0);
  puVar12 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1066b19e0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_140 = puVar3;
  puStack_138 = puVar10;
  puStack_130 = puVar9;
  puStack_128 = puVar8;
  puStack_120 = puVar7;
  puStack_118 = puVar5;
  puStack_110 = puVar11;
  puStack_108 = puVar2;
  puStack_100 = puVar1;
  puStack_f8 = puVar6;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar13,param_2,0);
  func_0x00010c166c00(puVar13,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar13);
  func_0x00010c190b80(puVar13,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar13,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_168 = puVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar2,param_2,0);
  func_0x00010c182220(puVar2,param_2,4);
  puVar1 = puVar2;
  func_0x00010c2a5060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar22 = (long)_DAT_11274ddc0;
  uVar4 = *(undefined8 *)(puVar12 + lVar22);
  *(undefined **)(puVar12 + lVar22) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar22),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar12 + lVar22),param_2,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar12 + lVar22),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar13,param_2,puVar2);
  func_0x00010bef6d60(puVar13,param_2,*(undefined8 *)(puVar12 + lVar22));
  lVar22 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(puVar12 + lVar22),param_2,puVar13);
  puStack_180 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar12 + lVar22);
  puStack_170 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar4;
  func_0x00010bf493c0(0x4018000000000000,puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  puStack_160 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar12 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493c0(0xc018000000000000,puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  puStack_158 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_150 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_160,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_180,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uStack_178);
  _objc_release(puStack_170);
  uVar14 = *(undefined8 *)(puVar12 + _DAT_11274ddbc);
  *(undefined **)(puVar12 + _DAT_11274ddbc) = puVar13;
  _objc_release(uVar14);
  _objc_release(puVar2);
  puVar9 = puStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1066b1d9c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_1e0 = uVar4;
  puStack_1d8 = puVar3;
  puStack_1d0 = puVar6;
  puStack_1c8 = puVar1;
  puStack_1c0 = puVar8;
  puStack_1b8 = puVar7;
  puStack_1b0 = puVar2;
  puStack_1a8 = puVar5;
  puStack_1a0 = puVar13;
  puStack_198 = puVar12;
  ppuStack_190 = &puStack_f0;
  _objc_opt_new();
  lVar22 = (long)_DAT_11274dd7c;
  uVar4 = *(undefined8 *)(puVar9 + lVar22);
  *(undefined **)(puVar9 + lVar22) = puVar10;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(puVar9 + lVar22),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar9 + lVar22),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar9 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar9 + lVar22),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar9 + lVar22),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar9 + lVar22),param_2,1);
  puVar1 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(puVar9 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar9 + lVar22);
  uStack_208 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf4dce0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar9 + lVar22);
  uStack_200 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar9 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493c0(0x4020000000000000,uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar9 + lVar22);
  uStack_1f8 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1f0 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_208,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 1066b19e0; end: 1066b1d9b; -[SCLensExplorerLensRichCollectionViewCell _prepareViewCountView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b19e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c16e060(puVar1,param_2,0);
  func_0x00010c166c00(puVar1,param_2,3);
  func_0x00010c207380(0x4010000000000000,puVar1);
  func_0x00010c190b80(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4028000000000000,0x4028000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,0xf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_88 = puVar2;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010c182220(puVar3,param_2,4);
  puVar2 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar20 = (long)_DAT_11274ddc0;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar2;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar20),param_2,0x18);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar20),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bef6d60(puVar1,param_2,puVar3);
  func_0x00010bef6d60(puVar1,param_2,*(undefined8 *)(param_1 + lVar20));
  lVar20 = (long)_DAT_11274dd80;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  puStack_a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  puStack_90 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar19;
  func_0x00010bf493c0(0x4018000000000000,puVar2,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_80 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0xc018000000000000,puVar4,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a0,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar19);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uStack_98);
  _objc_release(puStack_90);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274ddbc);
  *(undefined **)(param_1 + _DAT_11274ddbc) = puVar1;
  _objc_release(uVar9);
  _objc_release(puVar3);
  puVar10 = puStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1066b1d9c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR_PTR_1126aea58;
  uStack_100 = uVar19;
  puStack_f8 = puVar4;
  puStack_f0 = puVar6;
  puStack_e8 = puVar2;
  puStack_e0 = puVar8;
  puStack_d8 = puVar7;
  puStack_d0 = puVar3;
  puStack_c8 = puVar5;
  puStack_c0 = puVar1;
  lStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar20 = (long)_DAT_11274dd7c;
  uVar19 = *(undefined8 *)(puVar10 + lVar20);
  *(undefined **)(puVar10 + lVar20) = puVar11;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(puVar10 + lVar20),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(puVar10 + lVar20),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(puVar10 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar10 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(puVar10 + lVar20),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar10 + lVar20),param_2,1);
  puVar1 = puVar10;
  func_0x00010bf4dce0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(puVar10 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar10 + lVar20);
  uStack_128 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010bf4dce0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar10 + lVar20);
  uStack_120 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar10 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493c0(0x4020000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar10 + lVar20);
  uStack_118 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_128,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar13);
  _objc_release(uVar19);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1066b1d9c; end: 1066b208b; -[SCLensExplorerLensRichCollectionViewCell _prepareLensNameView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b1d9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar16 = (long)_DAT_11274dd7c;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar16),param_2,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,
                      *(undefined8 *)(param_1 + _DAT_11274dd84));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16),param_2,1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11274dd80);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493c0(0x4020000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066b208c; end: 1066b20bb; -[SCLensExplorerLensRichCollectionViewCell _handleTapActionOnInfoView:] */

void FUN_1066b208c(undefined8 param_1)

{
  func_0x00010bf33940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f80e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066b20bc; end: 1066b20cb; -[SCLensExplorerLensRichCollectionViewCell lensIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b20bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ddc8);
}



/* Entry: 1066b20cc; end: 1066b20db; -[SCLensExplorerLensRichCollectionViewCell lensInfoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b20cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ddc4);
}



/* Entry: 1066b20dc; end: 1066b20eb; -[SCLensExplorerLensRichCollectionViewCell previewImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b20dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd80);
}



/* Entry: 1066b20ec; end: 1066b223b; -[SCLensExplorerLensRichCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b20ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dd80,0);
  _objc_storeStrong(param_1 + _DAT_11274ddc4,0);
  _objc_storeStrong(param_1 + _DAT_11274ddc8,0);
  _objc_storeStrong(param_1 + _DAT_11274dd7c,0);
  _objc_storeStrong(param_1 + _DAT_11274ddc0,0);
  _objc_storeStrong(param_1 + _DAT_11274ddb4,0);
  _objc_storeStrong(param_1 + _DAT_11274ddbc,0);
  _objc_storeStrong(param_1 + _DAT_11274ddb8,0);
  _objc_storeStrong(param_1 + _DAT_11274ddb0,0);
  _objc_storeStrong(param_1 + _DAT_11274ddac,0);
  _objc_storeStrong(param_1 + _DAT_11274dd9c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd98,0);
  _objc_storeStrong(param_1 + _DAT_11274dd94,0);
  _objc_storeStrong(param_1 + _DAT_11274dd90,0);
  _objc_storeStrong(param_1 + _DAT_11274dd8c,0);
  _objc_storeStrong(param_1 + _DAT_11274dd88,0);
  _objc_storeStrong(param_1 + _DAT_11274dda8,0);
  _objc_storeStrong(param_1 + _DAT_11274dda0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dda4,0);
  return;
}



/* Entry: 1066b223c; end: 1066b22af; -[SCLensExplorerLensTopicCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066b223c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ddd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274ddd0) = puVar2;
    _objc_release(uVar3);
    func_0x00010be3b0a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066b22b0; end: 1066b251f; -[SCLensExplorerLensTopicCollectionViewCell _initialSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b22b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c178280();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274ddd4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010be5bfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274ddd8;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010be5baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274dddc;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010be5c780();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11274dde0;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010be5bf60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11274dde4;
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar9));
  func_0x00010beabac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b2520; end: 1066b2d2b; -[SCLensExplorerLensTopicCollectionViewCell _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b2520(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
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
  puStack_1d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_11274ddd4;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_118 = lVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  lStack_128 = lVar1;
  lStack_108 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_138 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_148 = uVar2;
  uStack_100 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_158 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_168 = uVar3;
  uStack_f8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_178 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274ddd8;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_188 = uVar2;
  uStack_f0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_190 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_198 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1a0 = uVar3;
  uStack_e8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1a8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_1b8 = uVar4;
  uStack_e0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1c0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1d8 = uVar3;
  uStack_d8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1e0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274dddc;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_1f0 = uVar4;
  uStack_d0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1f8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_208 = uVar3;
  uStack_c8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_210 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_220 = uVar4;
  uStack_c0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_228 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_230 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_238 = uVar3;
  uStack_b8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_240 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_248 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11274dde4;
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uStack_250 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_258 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_260 = uVar2;
  func_0x00010bf493c0(0x401c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uStack_268 = uVar3;
  uStack_a8 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_270 = uVar2;
  func_0x00010bf49420(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uStack_278 = uVar2;
  uStack_a0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_280 = uVar3;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274dde0;
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_288 = uVar3;
  uStack_98 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uStack_290 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = uVar2;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_2a0 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf49520(0xc01c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d0);
  _objc_release(puVar11);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(lStack_180);
  _objc_release(lStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_168);
  _objc_release(lStack_160);
  _objc_release(lStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_148);
  _objc_release(lStack_140);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_release(lStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_110);
  lVar13 = lStack_118;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1066b2d2c;
  puStack_2c8 = PTR_PTR_1126f2628;
  lStack_2d0 = lVar13;
  uStack_2c0 = uVar3;
  uStack_2b8 = uVar9;
  puStack_2b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_2d0,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,lVar13);
  func_0x00010c1f9360(lVar13);
  func_0x00010bf86d80(*(undefined8 *)(lVar13 + _DAT_11274ddd0));
  return;
}



/* Entry: 1066b2d2c; end: 1066b2d93; -[SCLensExplorerLensTopicCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b2d2c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,param_1);
  func_0x00010c1f9360(param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274ddd0));
  return;
}



/* Entry: 1066b2d94; end: 1066b2e47; -[SCLensExplorerLensTopicCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066b2d94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f2628;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb780();
    _objc_release(param_3);
    func_0x00010c202c80(param_1,param_2,plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1066b2e48; end: 1066b2f3f; -[SCLensExplorerLensTopicCollectionViewCell setViewModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b2e48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274ddd0));
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066b2f40; end: 1066b2f87;  */

void FUN_1066b2f40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2226c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066b2f88; end: 1066b307f; -[SCLensExplorerLensTopicCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b2f88(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cce60;
  _objc_opt_class(PTR_PTR_1126cce60);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11274dde8;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    func_0x00010c1112a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274ddd8));
    _objc_release(lVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c29f340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11274dde0));
    _objc_release(uVar4);
    func_0x00010bead480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b3080; end: 1066b3083; -[SCLensExplorerLensTopicCollectionViewCell _setupKarma] */

void FUN_1066b3080(void)

{
  return;
}



/* Entry: 1066b3084; end: 1066b3113; -[SCLensExplorerLensTopicCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3084(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11274ddec;
    if (param_3 != *(long *)(param_1 + lVar3)) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126ccef0;
      _objc_alloc();
      func_0x00010bfff980();
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274ddf0);
      *(undefined **)(param_1 + _DAT_11274ddf0) = puVar2;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066b3114; end: 1066b3123; -[SCLensExplorerLensTopicCollectionViewCell _didTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ddf0),PTR_s_performActionOnTap_11261ba70);
  return;
}



/* Entry: 1066b3124; end: 1066b319b; -[SCLensExplorerLensTopicCollectionViewCell _makeContainerView] */

void FUN_1066b3124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar2);
  func_0x00010c17d4c0(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b319c; end: 1066b3413; -[SCLensExplorerLensTopicCollectionViewCell _makeGradinetView] */

void FUN_1066b319c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccee8;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  func_0x00010c219b60();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar4;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar6;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bf414e0(0x3fe199999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar8;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf414e0(0x3feae147ae147ae1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c219b60();
    func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    func_0x00010c1cfce0(puVar1,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1c83a0(0x3ff0000000000000,puVar1);
    func_0x00010c213040(puVar1,param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b3414; end: 1066b350f; -[SCLensExplorerLensTopicCollectionViewCell _makeViewCountLabel] */

void FUN_1066b3414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c219b60();
  func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c1cfce0(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1c83a0(0x3ff0000000000000,puVar1);
  func_0x00010c213040(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b3510; end: 1066b3617; -[SCLensExplorerLensTopicCollectionViewCell _makePreviewImageView] */

void FUN_1066b3510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c219b60();
  func_0x00010c17d4c0(puVar1,param_3,1);
  func_0x00010c182220(puVar1,param_3,4);
  func_0x00010c1d4c20(puVar1,param_3,1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x66);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b3618; end: 1066b373f; -[SCLensExplorerLensTopicCollectionViewCell _makePlayIconView] */

void FUN_1066b3618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110db6f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xc4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c219b60(puVar1,param_3,0);
  func_0x00010c17d4c0(puVar1,param_3,1);
  func_0x00010c182220(puVar1,param_3,4);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066b3740; end: 1066b374f; -[SCLensExplorerLensTopicCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b3740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ddec);
}



/* Entry: 1066b3750; end: 1066b375f; -[SCLensExplorerLensTopicCollectionViewCell visibleFraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b3750(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ddcc);
}



/* Entry: 1066b3760; end: 1066b376f; -[SCLensExplorerLensTopicCollectionViewCell setVisibleFraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3760(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274ddcc) = param_1;
  return;
}



/* Entry: 1066b3770; end: 1066b377f; -[SCLensExplorerLensTopicCollectionViewCell sectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b3770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ddf4);
}



/* Entry: 1066b3780; end: 1066b378b; -[SCLensExplorerLensTopicCollectionViewCell setSectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066b378c; end: 1066b379b; -[SCLensExplorerLensTopicCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066b378c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dde8);
}



/* Entry: 1066b379c; end: 1066b385b; -[SCLensExplorerLensTopicCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b379c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dde8,0);
  _objc_storeStrong(param_1 + _DAT_11274ddf4,0);
  _objc_storeStrong(param_1 + _DAT_11274ddec,0);
  _objc_storeStrong(param_1 + _DAT_11274ddf0,0);
  _objc_storeStrong(param_1 + _DAT_11274ddd0,0);
  _objc_storeStrong(param_1 + _DAT_11274dde4,0);
  _objc_storeStrong(param_1 + _DAT_11274dde0,0);
  _objc_storeStrong(param_1 + _DAT_11274dddc,0);
  _objc_storeStrong(param_1 + _DAT_11274ddd8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ddd4,0);
  return;
}



/* Entry: 1066b385c; end: 1066b38ab; -[SCLensExplorerLoadingCollectionViewCell initWithFrame:] */

undefined1 * FUN_1066b385c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be78980(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066b38ac; end: 1066b391b; -[SCLensExplorerLoadingCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b38ac(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2630;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + _DAT_11274ddf8));
  _objc_release(lVar1);
  return;
}



/* Entry: 1066b391c; end: 1066b39d3; -[SCLensExplorerLoadingCollectionViewCell _prepareLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b391c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar4 = (long)_DAT_11274ddf8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 1066b39d4; end: 1066b3a87; +[SCLensExplorerLoadingCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1066b39d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ccc18;
  _objc_opt_class(PTR_PTR_1126ccc18);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0913a0();
  uVar4 = param_1;
  uVar5 = param_2;
  _objc_release(puVar2);
  if (uVar1 != 0) {
    func_0x00010bfbb780(param_5);
    param_1 = uVar4;
    param_2 = uVar5;
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1066b3a88; end: 1066b3a9b; -[SCLensExplorerLoadingCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ddf8,0);
  return;
}



/* Entry: 1066b3a9c; end: 1066b3b0f; -[SCLensExplorerStoryCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066b3a9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2638;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274de00);
    *(undefined **)((long)puVar1 + (long)_DAT_11274de00) = puVar2;
    _objc_release(uVar3);
    func_0x00010be3b0a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066b3b10; end: 1066b3cab; -[SCLensExplorerStoryCollectionViewCell _initialSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c178280();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11274de04;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010be5bfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274de08;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010be5ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274de0c;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010be5c780();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274de10;
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010be5c760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11274de14;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010beabac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066b3cac; end: 1066b44b3; -[SCLensExplorerStoryCollectionViewCell _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b3cac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
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
  puStack_1d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_11274de04;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_118 = lVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  lStack_128 = lVar1;
  lStack_108 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_138 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_148 = uVar2;
  uStack_100 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_158 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_168 = uVar3;
  uStack_f8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_178 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274de08;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_188 = uVar2;
  uStack_f0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_190 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_198 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1a0 = uVar3;
  uStack_e8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1a8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_1b8 = uVar4;
  uStack_e0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1c0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1d8 = uVar3;
  uStack_d8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1e0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274de0c;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_1f0 = uVar4;
  uStack_d0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1f8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_208 = uVar3;
  uStack_c8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_210 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_220 = uVar4;
  uStack_c0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_228 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_230 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_238 = uVar3;
  uStack_b8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_240 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_248 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11274de14;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uStack_250 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = uVar2;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uStack_260 = uVar2;
  uStack_a8 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_268 = uVar3;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  uStack_270 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_278 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_280 = uVar2;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274de10;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_288 = uVar4;
  uStack_98 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uStack_290 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_2a0 = uVar3;
  uStack_90 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf49520(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d0);
  _objc_release(puVar11);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(lStack_180);
  _objc_release(lStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_168);
  _objc_release(lStack_160);
  _objc_release(lStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_148);
  _objc_release(lStack_140);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_release(lStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_110);
  lVar13 = lStack_118;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1066b44b4;
  puStack_2c8 = PTR_PTR_1126f2638;
  lStack_2d0 = lVar13;
  uStack_2c0 = uVar3;
  uStack_2b8 = uVar9;
  puStack_2b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_2d0,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,lVar13);
  func_0x00010c1f9360(lVar13);
  func_0x00010bf86d80(*(undefined8 *)(lVar13 + _DAT_11274de00));
  return;
}



/* Entry: 1066b44b4; end: 1066b451b; -[SCLensExplorerStoryCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b44b4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2638;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,param_1);
  func_0x00010c1f9360(param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274de00));
  return;
}



/* Entry: 1066b451c; end: 1066b45cf; -[SCLensExplorerStoryCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066b451c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f2638;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb780();
    _objc_release(param_3);
    func_0x00010c202c80(param_1,param_2,plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1066b45d0; end: 1066b46c7; -[SCLensExplorerStoryCollectionViewCell setViewModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066b45d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274de00));
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}


