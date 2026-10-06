/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e4dd94; end: 104e4de57; -[SCSharedStoryProfileViewController _setupSectionsFromPlugins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4dd94(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714790);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e4de58; end: 104e4df7f;  */

void FUN_104e4de58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104e4df28;
  puStack_50 = &UNK_110848218;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4df80; end: 104e4dfc3; -[SCSharedStoryProfileViewController _handleError:forInjectedSections:] */

void FUN_104e4df80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e4dfc4; end: 104e4e08f; -[SCSharedStoryProfileViewController _handleInjectedSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4dfc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdef8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf09f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c246ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100504554();
  func_0x00010c1f9720(*(undefined8 *)(param_1 + _DAT_1127147a0));
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e4e090; end: 104e4e2e3;  */

ulong FUN_104e4e090(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12f8;
  _objc_opt_class(PTR_PTR_1126b12f8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar4 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b12f8;
  _objc_opt_class(PTR_PTR_1126b12f8);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar6 = 0;
  if (uVar1 != 0 && uVar3 != 0) {
    uVar6 = param_2;
    func_0x00010c0ec9a0();
    uVar5 = uVar4;
    func_0x00010c0ec9a0();
    if ((long)uVar6 < (long)uVar5) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      func_0x00010c0ec9a0(param_2);
      func_0x00010c0ec9a0(uVar4);
      uVar6 = (ulong)((long)uVar4 < (long)param_2);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 104e4e2e4; end: 104e4e31f; -[SCSharedStoryProfileViewController _didExitProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4e2e4(long param_1)

{
  param_1 = param_1 + _DAT_1127147a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4e320; end: 104e4e453; -[SCSharedStoryProfileViewController collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4e320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127147a8;
  puVar4 = *(undefined **)(param_1 + lVar5);
  if (puVar4 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b1310;
    _objc_opt_new(PTR_PTR_1126b1310);
    func_0x00010c1a79e0(0xc059000000000000);
    func_0x00010c1a7ac0(puVar1,param_2,1);
    puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar4;
    _objc_release(uVar2);
    _objc_retain(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1318;
    func_0x00010c1555c0(PTR_PTR_1126b1318,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127147a0;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1f7d00(*(undefined8 *)(param_1 + _DAT_112714788),param_2,puVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e4e454; end: 104e4e457; -[SCSharedStoryProfileViewController loadScrollView] */

void FUN_104e4e454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_collectionView_1125ad9f0);
  return;
}



/* Entry: 104e4e458; end: 104e4e4ab; -[SCSharedStoryProfileViewController cardTransitionEndedWithView:transitionType:] */

void FUN_104e4e458(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e47f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if (param_4 == 1) {
    func_0x00010bdfda60(param_1);
  }
  return;
}



/* Entry: 104e4e4ac; end: 104e4e593; -[SCSharedStoryProfileViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_104e4e4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf84b00(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4e594; end: 104e4e5bf;  */

void FUN_104e4e594(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfda60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4e5c0; end: 104e4e667; -[SCSharedStoryProfileViewController visibleHeaderCell] */

void FUN_104e4e5c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a4e88);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e4e668; end: 104e4e88f; -[SCSharedStoryProfileViewController scrollViewContentOffsetDidChange:] */

void FUN_104e4e668(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  uVar1 = param_3;
  func_0x00010bfdef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7da0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29fde0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe61e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe0480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(uVar3);
  uVar5 = uVar1;
  func_0x00010bfe61e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(uVar4,param_4,uVar5);
  dVar6 = param_1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (param_1 == 0.0) {
    uVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    param_1 = dVar6 * 0.5;
    _objc_release(uVar4);
  }
  uVar4 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  dVar7 = 22.0;
  dVar8 = dVar6 + 22.0;
  _objc_release(uVar4);
  dStack_88 = dVar8;
  if (dVar8 <= param_2) {
    dStack_88 = param_2;
  }
  func_0x00010befda00(param_5);
  func_0x00010bf4cdc0(param_5);
  _objc_release(param_5);
  dStack_78 = 100.0;
  if (dVar6 + dVar7 <= 100.0) {
    dStack_78 = dVar6 + dVar7;
  }
  if (dStack_78 <= 0.0) {
    dStack_78 = 0.0;
  }
  dStack_78 = dStack_78 / 100.0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104e4e890;
  puStack_a8 = &UNK_110853530;
  dStack_80 = 1.0 - dStack_78;
  uStack_a0 = param_3;
  uStack_98 = uVar1;
  dStack_90 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_4,&puStack_c0);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e4e890; end: 104e4e997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4e890(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112714798));
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe61e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _CGAffineTransformMakeTranslation(&uStack_a0,0,*(double *)(param_1 + 0x48) * 53.0);
  _CGAffineTransformScale
            (&uStack_70,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),&uStack_a0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe61e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e4e998; end: 104e4e9bf; -[SCSharedStoryProfileViewController didCompleteCustomStoryMenuScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4e998(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11271477c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104e4e9c0; end: 104e4e9c3; -[SCSharedStoryProfileViewController didSelectAddToStoryWithPublicationId:storyType:] */

void FUN_104e4e9c0(void)

{
  return;
}



/* Entry: 104e4e9c4; end: 104e4e9c7; -[SCSharedStoryProfileViewController didRemoveCustomStoryWithPublicationId:] */

void FUN_104e4e9c4(void)

{
  return;
}



/* Entry: 104e4e9c8; end: 104e4e9cb; -[SCSharedStoryProfileViewController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_104e4e9c8(void)

{
  return;
}



/* Entry: 104e4e9cc; end: 104e4e9cf; -[SCSharedStoryProfileViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_104e4e9cc(void)

{
  return;
}



/* Entry: 104e4e9d0; end: 104e4e9d3; -[SCSharedStoryProfileViewController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_104e4e9d0(void)

{
  return;
}



/* Entry: 104e4e9d4; end: 104e4e9d7; -[SCSharedStoryProfileViewController sectionBasedCollectionViewUpdater:didSetUpSections:] */

void FUN_104e4e9d4(void)

{
  return;
}



/* Entry: 104e4e9d8; end: 104e4e9db; -[SCSharedStoryProfileViewController sectionBasedCollectionViewUpdater:didTearDownSections:] */

void FUN_104e4e9d8(void)

{
  return;
}



/* Entry: 104e4e9dc; end: 104e4e9f3; -[SCSharedStoryProfileViewController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_104e4e9dc(void)

{
  return 0x4059000000000000;
}



/* Entry: 104e4e9f4; end: 104e4e9f7; -[SCSharedStoryProfileViewController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_104e4e9f4(void)

{
  return;
}



/* Entry: 104e4e9f8; end: 104e4ea17; -[SCSharedStoryProfileViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4e9f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127147a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e4ea18; end: 104e4ea2b; -[SCSharedStoryProfileViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ea18(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127147a4,param_3);
  return;
}



/* Entry: 104e4ea2c; end: 104e4eb23; -[SCSharedStoryProfileViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ea2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127147a4);
  _objc_storeStrong(param_1 + _DAT_112714798,0);
  _objc_storeStrong(param_1 + _DAT_112714794,0);
  _objc_storeStrong(param_1 + _DAT_11271478c,0);
  _objc_storeStrong(param_1 + _DAT_11271479c,0);
  _objc_storeStrong(param_1 + _DAT_112714790,0);
  _objc_destroyWeak(param_1 + _DAT_112714780);
  _objc_storeStrong(param_1 + _DAT_11271477c,0);
  _objc_storeStrong(param_1 + _DAT_112714784,0);
  _objc_storeStrong(param_1 + _DAT_112714788,0);
  _objc_storeStrong(param_1 + _DAT_1127147a0,0);
  _objc_storeStrong(param_1 + _DAT_1127147a8,0);
  _objc_storeStrong(param_1 + _DAT_112714778,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714774,0);
  return;
}



/* Entry: 104e4eb24; end: 104e4ec43;  */

void FUN_104e4eb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010bfe9ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_retain(param_3);
    func_0x00010c297260(param_1);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e4ec44; end: 104e4ee77;  */

undefined1 * FUN_104e4ec44(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *puVar9;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined *unaff_x24;
  ulong uVar10;
  ulong unaff_x25;
  ulong unaff_x26;
  long lVar11;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  puVar9 = auStack_f0;
  uVar8 = 0x10;
  puStack_138 = param_2;
  func_0x00010bf52a60();
  if (param_2 != (undefined1 *)0x0) {
    lVar11 = *plStack_120;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puStack_138);
        }
        uVar10 = *(ulong *)(lStack_128 + (long)puVar9 * 8);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = uVar10;
        func_0x00010beee460(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbae0(uVar8);
        _objc_release(uVar3);
        unaff_x23 = uVar10;
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = unaff_x23;
        func_0x00010010fab4();
        unaff_x26 = unaff_x23;
        if ((int)uVar3 == 0) {
          unaff_x26 = 0;
        }
        _objc_retain(unaff_x26);
        func_0x00010c161980(unaff_x26);
        _objc_release(unaff_x26);
        func_0x00010c22c2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSObject_1126b1300;
        _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
        uVar3 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar4);
        unaff_x25 = uVar10;
        if ((uVar3 & 1) == 0) {
          unaff_x25 = 0;
        }
        _objc_retain(unaff_x25);
        _objc_release(uVar10);
        unaff_x24 = PTR_PTR_1126b1308;
        _objc_alloc();
        func_0x00010c042ce0();
        _objc_release(unaff_x25);
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        puVar9 = puVar9 + 1;
      } while (param_2 != puVar9);
      puVar9 = auStack_f0;
      uVar8 = 0x10;
      param_2 = puStack_138;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (param_2 != (undefined1 *)0x0);
  }
  puVar1 = puStack_138;
  _objc_release(puStack_138);
  puVar4 = puVar2;
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_1a0;
  puStack_158 = puVar1;
  pcStack_148 = FUN_104e4ee78;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar2;
  lStack_160 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  _objc_retain(uVar8);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puStack_198 = PTR_PTR_1126e47f8;
  puStack_1a0 = puVar5;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined1 **)0x0) {
    _objc_retain(puVar4);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar4;
    _objc_release(uVar7);
    _objc_retain(puVar9);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined1 **)((long)ppuVar6 + 0x10) = puVar9;
    _objc_release(uVar7);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined8 *)((long)ppuVar6 + 0x18) = uVar8;
    _objc_release(uVar7);
    _objc_retain(in_x5);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x20);
    *(undefined8 *)((long)ppuVar6 + 0x20) = in_x5;
    _objc_release(uVar7);
    _objc_retain(in_x6);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x28);
    *(undefined8 *)((long)ppuVar6 + 0x28) = in_x6;
    _objc_release(uVar7);
    *(undefined8 *)((long)ppuVar6 + 0x38) = 0x19;
    _objc_retain(in_x7);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x30);
    *(undefined8 *)((long)ppuVar6 + 0x30) = in_x7;
    _objc_release(uVar7);
  }
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar4);
  return (undefined1 *)ppuVar6;
}



/* Entry: 104e4ee78; end: 104e4efd3; -[SCMyStoryFriendAction initWithFriend:context:storiesPreferencesServices:snapchatterServices:notificationServices:messagingExperimentService:] */

undefined1 *
FUN_104e4ee78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e47f8;
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
    *(undefined8 *)((long)puVar1 + 0x38) = 0x19;
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



/* Entry: 104e4efd4; end: 104e4efdb; -[SCMyStoryFriendAction parentAction] */

undefined8 FUN_104e4efd4(void)

{
  return 0x18;
}



/* Entry: 104e4efdc; end: 104e4f1f7; -[SCMyStoryFriendAction actionSheetCell] */

void FUN_104e4efdc(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d76c0();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar4);
    lVar5 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar6 = *(long *)(param_1 + 0x18);
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c25aac0();
  _objc_release(lVar4);
  _objc_release(lVar6);
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010be44540(param_1);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar2 & 1) == 0) {
      func_0x000104e501a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000104e501b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      param_1 = puVar7;
    }
    puVar7 = PTR_PTR_1126b10a0;
    func_0x00010c2655e0(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,puVar7);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf1d200(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(param_1);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e4f1f8; end: 104e4f22f;  */

void FUN_104e4f1f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c9a0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4f230; end: 104e4f2c7; -[SCMyStoryFriendAction _isStoryVisible] */

undefined8 FUN_104e4f230(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25aac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 < 2) {
    uVar4 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb8280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf2d540();
    _objc_release(uVar5);
  }
  return uVar4;
}



/* Entry: 104e4f2c8; end: 104e4f32b; -[SCMyStoryFriendAction _handleMyStoryVisibleToggleChanged:] */

void FUN_104e4f2c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = param_1;
    func_0x00010be44540();
    if ((int)uVar2 == 0) goto LAB_104e4f310;
  }
  else {
    uVar1 = param_3;
    func_0x00010c07d660();
    if ((uVar1 & 1) == 0) {
LAB_104e4f310:
      func_0x00010be2c9e0(param_1,param_2,param_3);
      goto LAB_104e4f31c;
    }
  }
  func_0x00010be2c9c0(param_1,param_2,param_3);
LAB_104e4f31c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e4f32c; end: 104e4f3cb; -[SCMyStoryFriendAction _handleMyStoryVisibleToggleChangedToOn:] */

void FUN_104e4f32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0xac);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25aac0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c195460(param_3,param_2,0);
    func_0x00010be8de00(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e4f3cc; end: 104e4f50b; -[SCMyStoryFriendAction _handleMyStoryVisibleToggleChangedToOff:] */

void FUN_104e4f3cc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = (undefined *)0xab;
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25aac0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c195460(param_3);
    if (lVar3 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar7 = puVar5;
      func_0x00010bee1000(param_1);
      _objc_release(puVar5);
    }
    else {
      puVar7 = param_3;
      func_0x00010bdc8ea0(param_1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_initWeak(auStack_98,param_3);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c244ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(puVar7);
  func_0x00010c0eea40(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar7);
  return;
}



/* Entry: 104e4f50c; end: 104e4f643; -[SCMyStoryFriendAction _removeUserFromStoryBlockListWithCell:] */

void FUN_104e4f50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0eea40(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4f644; end: 104e4f697;  */

void FUN_104e4f644(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8de20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4f698; end: 104e4f7cf; -[SCMyStoryFriendAction _addUserToStoryBlockListWithCell:] */

void FUN_104e4f698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0eea40(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4f7d0; end: 104e4f823;  */

void FUN_104e4f7d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8ec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4f824; end: 104e4f9b3; -[SCMyStoryFriendAction _removeUserFromStoryBlockListWithSnapchatters:cell:] */

void FUN_104e4f824(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_4;
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x000104e501d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b3c0(param_1);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x104e4f8e4;
    puStack_40 = &UNK_1108535c0;
    uStack_38 = param_1;
    func_0x000100504554(param_3,&puStack_58);
    func_0x00010bee1000(param_1);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e4f9b4; end: 104e4fa93; -[SCMyStoryFriendAction _addUserToStoryBlockListWithSnapchatters:cell:] */

void FUN_104e4f9b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_4;
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x000104e501d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b3c0(param_1);
  }
  else {
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110853610);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar3);
    func_0x00010bee1000(param_1);
    _objc_release(puVar2);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e4fa94; end: 104e4fb0f;  */

void FUN_104e4fa94(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf2d540();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e4fb10; end: 104e4fc93; -[SCMyStoryFriendAction _updateStoryPrivacyWithBlockedUserIds:cell:newToggleVale:] */

void FUN_104e4fb10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c25aae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1320;
  func_0x00010bf62c00(PTR_PTR_1126b1320);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_5;
  func_0x00010c28a660(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e4fc94; end: 104e4fcdb;  */

void FUN_104e4fc94(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4fcdc; end: 104e4fd83; -[SCMyStoryFriendAction _updateStoryPrivacyWithSuccess:cell:newToggleVale:] */

void FUN_104e4fcdc(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c195460(param_4,param_2,1);
  if (param_3 == 0) {
    func_0x000104e501d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b3c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x000104e501e8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7ee00(param_1,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010c1fade0(param_4,param_2,param_5,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e4fd84; end: 104e4fe1f; -[SCMyStoryFriendAction _presentSuccessStatusMessage:] */

void FUN_104e4fd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e4fe20; end: 104e4febb; -[SCMyStoryFriendAction _presentErrorStatusMessage:] */

void FUN_104e4fe20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e4febc; end: 104e4fec3; -[SCMyStoryFriendAction position] */

undefined8 FUN_104e4febc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104e4fec4; end: 104e4fecb; -[SCMyStoryFriendAction prominentActionButton] */

undefined8 FUN_104e4fec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104e4fecc; end: 104e4ff37; -[SCMyStoryFriendAction .cxx_destruct] */

void FUN_104e4fecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e4ff38; end: 104e50137; -[SCMyStoryFriendActionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e4ff38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = param_1 + _DAT_1127147cc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar11 != 0) {
    lVar11 = (long)_DAT_1127147d0;
    lVar1 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1328;
    _objc_alloc(PTR_PTR_1126b1328);
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar11);
    lVar6 = lVar11;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_1127147d4;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + _DAT_1127147d8;
    _objc_loadWeakRetained(lVar8);
    lVar9 = param_1 + _DAT_1127147dc;
    _objc_loadWeakRetained(lVar9);
    param_1 = param_1 + _DAT_1127147e0;
    _objc_loadWeakRetained(param_1);
    lVar10 = param_1;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0153a0(puVar4,param_2,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10);
    func_0x00010c125b60(lVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104e50138; end: 104e5019f; -[SCMyStoryFriendActionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e50138(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127147cc);
  _objc_destroyWeak(param_1 + _DAT_1127147e0);
  _objc_destroyWeak(param_1 + _DAT_1127147dc);
  _objc_destroyWeak(param_1 + _DAT_1127147d8);
  _objc_destroyWeak(param_1 + _DAT_1127147d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127147d0);
  return;
}



/* Entry: 104e501a0; end: 104e501ff;  */

void FUN_104e501a0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7418;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7418,
                      &PTR____CFConstantStringClassReference_110db7438,0);
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



/* Entry: 104e50200; end: 104e5069b; -[SCMyStoriesSaver initWithUserSession:galleryStorySaver:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:storiesBlizzardLogger:circumstanceEngine:customStoriesDataFetcher:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:discoverFeedDataFetcher:snapchattersSynchronousDataFetcher:grapheneMetricsEmitter:featureSettingsService:memoriesStoryMutator:grapheneRegistry:userBlizzardLogger:watermarkGenerator:genAIDreamsService:] */

undefined8 *
FUN_104e50200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126e4800;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1330;
    _objc_alloc();
    func_0x00010c05d720();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_release(param_9);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e5069c; end: 104e506cb;  */

void FUN_104e5069c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001005929c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 104e506cc; end: 104e50853; -[SCMyStoriesSaver saveStorySnapWithClientId:storyId:] */

void FUN_104e506cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c11d5e0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e50854; end: 104e508ab;  */

void FUN_104e50854(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e508ac; end: 104e50a0b; -[SCMyStoriesSaver saveStoryWithStoryId:] */

void FUN_104e508ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c11d5e0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e50a0c; end: 104e50a5f;  */

void FUN_104e50a0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9a000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e50a60; end: 104e50d57; -[SCMyStoriesSaver saveEntireSnapProStoryWithStoryId:snapPlaybackInfosOverride:] */

void FUN_104e50a60(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  if (param_4 == 0) {
    puVar2 = param_3;
    func_0x000108f51d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25baa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c259560(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010c245680(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x000100504554();
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_4);
    lVar6 = param_4;
  }
  puVar2 = PTR_PTR_1126b1338;
  _objc_alloc();
  lVar4 = lVar6;
  func_0x0001006372a4(lVar6,&PTR___NSConcreteGlobalBlock_110853720);
  func_0x00010c04dbe0();
  _objc_release(lVar4);
  puVar7 = puVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    puVar7 = puVar2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    if (puVar8 == (undefined *)0x1) {
      puVar7 = puVar2;
      func_0x00010c25b340(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bfb1920(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14aee0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(param_3);
      _objc_retain(puVar1);
      func_0x00010c14a4c0(uVar10);
      _objc_release(puVar1);
      puVar7 = param_3;
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e50d58; end: 104e50d9f;  */

void FUN_104e50d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0b8260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c14aea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e50da0; end: 104e50e5f;  */

uint FUN_104e50da0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107d2a86c();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010bf4e880(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000107d294ec();
    uVar6 = (uint)uVar5 ^ 1;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 104e50e60; end: 104e50ea7;  */

void FUN_104e50e60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1340;
  func_0x00010c14a620(PTR_PTR_1126b1340,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e50ea8; end: 104e51153; -[SCMyStoriesSaver saveSnapProStoryWithStoryId:clientId:snapPlaybackInfoOverride:] */

void FUN_104e50ea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  if (param_5 == (undefined *)0x0) {
    uVar2 = param_3;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c25baa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar6;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lStack_138 = lVar4;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    puVar5 = (undefined *)0x0;
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      lStack_158 = lVar6;
      uStack_150 = uVar2;
      lStack_148 = param_1;
      puStack_140 = puVar1;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          puVar8 = *(undefined **)(lStack_128 + lVar6 * 8);
          puVar1 = puVar8;
          func_0x00010c24cfc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)puVar5 != 0) {
            func_0x00010c0b8260();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar8;
            func_0x00010c14aea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar1 = puStack_140;
            param_1 = lStack_148;
            uVar2 = uStack_150;
            lVar6 = lStack_158;
            goto LAB_104e51090;
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar4;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      puVar5 = (undefined *)0x0;
      puVar1 = puStack_140;
      param_1 = lStack_148;
      uVar2 = uStack_150;
      lVar6 = lStack_158;
    }
LAB_104e51090:
    _objc_release(lVar4);
    _objc_release(lStack_138);
    _objc_release(lVar6);
    _objc_release(uVar2);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b1340;
      func_0x00010c14a620();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c0d9840(puVar1);
      goto LAB_104e510c8;
    }
  }
  else {
    _objc_retain(param_5);
    puVar5 = param_5;
  }
  puVar8 = puVar5;
  func_0x00010be99f20(param_1);
LAB_104e510c8:
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_104e51154;
    puStack_190 = puVar1;
    puStack_188 = param_5;
    uStack_180 = param_4;
    uStack_178 = param_3;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    _objc_initWeak(auStack_198,uVar2);
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_104e5124c;
    puStack_1b8 = &UNK_110848218;
    _objc_copyWeak(auStack_1a0,auStack_198);
    puStack_1b0 = puVar8;
    _objc_retain(puVar1);
    puStack_1a8 = puVar1;
    _objc_retain(puVar8);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1d0);
    puVar5 = puStack_1a8;
    _objc_retain(puVar1);
    _objc_release(puVar5);
    _objc_release(puStack_1b0);
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e51154; end: 104e5124b; -[SCMyStoriesSaver saveOurStoryWithPlaybackInfo:] */

void FUN_104e51154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e5124c;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  puVar1 = puStack_48;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e5124c; end: 104e5127f;  */

void FUN_104e5124c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e51280; end: 104e51517; -[SCMyStoriesSaver _saveOurStoryWithPlaybackInfo:saveUpdateSubject:] */

void FUN_104e51280(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1340;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010c14a620(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0d9840(param_4);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000108e00d3c();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      func_0x00010be99f20(param_1);
      goto LAB_104e514c4;
    }
    puVar1 = param_3;
    func_0x000107d22a6c(param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e43098;
    puVar3 = puVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b26c050(&PTR____CFConstantStringClassReference_110e43098,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c11d620(uVar2);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(ppuVar6);
  }
  _objc_release(puVar1);
LAB_104e514c4:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e51518; end: 104e5163b;  */

void FUN_104e51518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e5163c;
  puStack_78 = &UNK_110853740;
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uStack_48 = param_2;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = param_3;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_4;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e5163c; end: 104e516f3;  */

void FUN_104e5163c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x48) == 2) {
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010c23fc80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar4 == 0;
      _objc_release();
    }
    else {
      bVar2 = true;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c23fc80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99f40(lVar3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e43098,uVar6,
                        uVar5,bVar2);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104e516f4; end: 104e516fb; -[SCMyStoriesSaver isSavingMyStoriesForStoryId:] */

void FUN_104e516f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_isSavingMyStoriesForStoryId__1125fceb0);
  return;
}



/* Entry: 104e516fc; end: 104e51783; -[SCMyStoriesSaver handleStartSavingStoryId:] */

void FUN_104e516fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_104e51784;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104e51784; end: 104e518b3;  */

void FUN_104e51784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000108e00d3c();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000108e00cf8();
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c0e00e0(lVar6,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      return;
    }
    lVar6 = 0x48;
  }
  else {
    lVar6 = 0x40;
  }
  puVar4 = PTR_PTR_1126b1340;
  func_0x00010c14a080(PTR_PTR_1126b1340,param_2,uVar5,uVar1,lVar3 != 0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0e00e0(uVar5,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104e518b4; end: 104e51a63; -[SCMyStoriesSaver handleSavedStoryId:storyDisplayName:error:] */

void FUN_104e518b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108e00d3c();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000108e00cf8();
  _objc_release(uVar3);
  plVar6 = (long *)(param_1 + 0x40);
  lVar4 = *plVar6;
  func_0x00010c0e00e0(lVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    plVar6 = (long *)(param_1 + 0x48);
    lVar4 = *plVar6;
    func_0x00010c0e00e0(lVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_104e51a38;
    puVar5 = PTR_PTR_1126b1340;
    if (param_5 == 0) {
      func_0x00010c14b3c0(PTR_PTR_1126b1340,param_2,uVar2,uVar1,0,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14a620(PTR_PTR_1126b1340,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar5 = PTR_PTR_1126b1340;
    if (param_5 == 0) {
      func_0x00010c14b3c0(PTR_PTR_1126b1340,param_2,uVar2,uVar1,1,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14a620(PTR_PTR_1126b1340,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  lVar4 = *plVar6;
  func_0x00010c0e00e0(lVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar4);
  _objc_release(puVar5);
LAB_104e51a38:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e51a64; end: 104e51cb3; -[SCMyStoriesSaver _saveStoryWithStoryId:playbackSequence:saveUpdateSubject:] */

void FUN_104e51a64(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1338;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc();
    lVar2 = param_4;
    func_0x00010c259cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720(param_4);
    lVar3 = param_4;
    func_0x00010c25b340(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar4 = lVar3;
    func_0x0001006372a4(lVar3,&PTR___NSConcreteGlobalBlock_1108537a0);
    func_0x00010c04dbe0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    if (puVar6 != (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      _objc_release(puVar5);
      if (puVar6 == (undefined *)0x1) {
        puVar5 = puVar1;
        func_0x00010c25b340(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be99f60(param_1);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(param_3);
        _objc_retain(param_5);
        func_0x00010c14a4e0(uVar8);
        _objc_release(param_5);
        puVar5 = param_3;
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104e51cb4; end: 104e51d73;  */

uint FUN_104e51cb4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107d2a86c();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010bf4e880(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000107d294ec();
    uVar6 = (uint)uVar5 ^ 1;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 104e51d74; end: 104e51dbb;  */

void FUN_104e51d74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1340;
  func_0x00010c14a620(PTR_PTR_1126b1340,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e51dbc; end: 104e5229f; -[SCMyStoriesSaver _saveStorySnapWithClientId:storyId:playbackSequence:saveUpdateSubject:] */

undefined **
FUN_104e51dbc(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    puVar11 = PTR_PTR_1126b1340;
    func_0x00010c14a620(PTR_PTR_1126b1340);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_6);
    goto LAB_104e521a0;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar1 = param_5;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar12 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        puVar11 = *(undefined **)(lStack_138 + lVar10 * 8);
        puVar3 = puVar11;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)puVar4 != 0) {
          _objc_retain(puVar11);
          goto LAB_104e51f34;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar11 = (undefined *)0x0;
  }
LAB_104e51f34:
  _objc_release(lVar1);
  puVar3 = puVar11;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000107d2a86c();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (((ulong)puVar5 & 1) != 0) goto LAB_104e521a0;
  puVar3 = puVar11;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000107d294ec();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (((ulong)puVar5 & 1) != 0) goto LAB_104e521a0;
  puVar3 = puVar11;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1340;
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010c14a620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
LAB_104e5218c:
    func_0x00010c0d9840(param_6);
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      func_0x00010c14a620(PTR_PTR_1126b1340);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e5218c;
    }
    puVar4 = puVar11;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar1 = param_5;
    func_0x00010c25b720();
    if ((lVar1 == 3) && (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      if ((int)uVar6 == 0) goto LAB_104e52158;
      lVar1 = param_5;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_104e522a0;
      puStack_150 = &UNK_1108537c0;
      _objc_retain(puVar3);
      param_2 = &puStack_168;
      lVar2 = lVar1;
      puStack_148 = puVar3;
      func_0x0001006372a4(lVar1,param_2);
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010bf529e0();
      if (lVar1 == 1) {
        func_0x00010be99f20(param_1);
      }
      else {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
        puVar4 = PTR_PTR_1126b1338;
        _objc_alloc(PTR_PTR_1126b1338);
        func_0x00010c04dbe0();
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(param_6);
        func_0x00010c14a4e0(uVar6);
        _objc_release(param_6);
        _objc_release(puVar4);
      }
      _objc_release(lVar2);
      _objc_release(puStack_148);
    }
    else {
LAB_104e52158:
      func_0x00010be99f20(param_1);
    }
  }
  _objc_release(puVar3);
LAB_104e521a0:
  _objc_release(puVar11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    func_0x00010c0d2260(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_2;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c0720c0();
    _objc_release(ppuVar8);
    _objc_release(param_2);
    return ppuVar9;
  }
  return param_3;
}



/* Entry: 104e522a0; end: 104e52307;  */

undefined8 FUN_104e522a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0d2260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104e52308; end: 104e5234f;  */

void FUN_104e52308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1340;
  func_0x00010c14a620(PTR_PTR_1126b1340,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e52350; end: 104e5235b; -[SCMyStoriesSaver _saveStorySnap:storyId:saveUpdateSubject:] */

void FUN_104e52350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveStorySnap_storyId_saveUpdat_112584170);
  return;
}



/* Entry: 104e5235c; end: 104e529bf; -[SCMyStoriesSaver _saveStorySnap:storyId:saveUpdateSubject:prefetchedMediaData:forceSkipMemories:] */

void FUN_104e5235c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250680();
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108e00cf8();
  _objc_release(uVar4);
  if ((param_7 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x000108e00d3c();
    _objc_release(uVar7);
  }
  else {
    uVar3 = 0;
  }
  lVar1 = param_3;
  func_0x0001084d261c(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  func_0x00010795da60(1,uVar3,uVar5 & 0xffffffff,lVar1,uVar6,*(undefined8 *)(param_1 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 1;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  _objc_initWeak(auStack_b0,param_1);
  if ((int)uVar5 != 0) {
    _dispatch_group_enter(uVar6);
    lVar1 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c27dd80();
    if ((lVar8 + 1U < 0x1a) && ((1L << (lVar8 + 1U & 0x3f) & 0x36de5fdU) != 0)) {
      _objc_release(lVar1);
      puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_104e533a4;
      puStack_178 = &UNK_110853940;
      puStack_140 = &uStack_88;
      puStack_138 = &uStack_a8;
      _objc_copyWeak(auStack_130,auStack_b0);
      _objc_retain(param_4);
      uStack_170 = param_4;
      _objc_retain(lVar2);
      lStack_168 = lVar2;
      _objc_retain(uVar7);
      uStack_160 = uVar7;
      _objc_retain(param_3);
      lStack_158 = param_3;
      _objc_retain(param_5);
      uStack_150 = param_5;
      _objc_retain(uVar6);
      uStack_148 = uVar6;
      func_0x00010be0c960(param_1);
      _objc_release(uStack_148);
      _objc_release(uStack_150);
      _objc_release(lStack_158);
      _objc_release(uStack_160);
      _objc_release(lStack_168);
      _objc_release(uStack_170);
      _objc_destroyWeak(auStack_130);
    }
    else {
      _objc_release(lVar1);
      uVar10 = *(undefined8 *)(param_1 + 0x90);
      _objc_retain(uVar10);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_104e529c0;
      puStack_110 = &UNK_110853910;
      puStack_c8 = &uStack_88;
      _objc_retain(lVar2);
      lStack_108 = lVar2;
      _objc_retain(param_4);
      uStack_100 = param_4;
      _objc_retain(param_3);
      puStack_c0 = &uStack_a8;
      lStack_f8 = param_3;
      _objc_copyWeak(auStack_b8,auStack_b0);
      _objc_retain(uVar7);
      uStack_f0 = uVar7;
      _objc_retain(param_5);
      uStack_e8 = param_5;
      _objc_retain(uVar6);
      uStack_e0 = uVar6;
      lStack_d8 = param_1;
      _objc_retain(uVar10);
      uStack_d0 = uVar10;
      func_0x00010be11ba0(param_1);
      _objc_release(uStack_d0);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
      _objc_release(uStack_f0);
      _objc_destroyWeak(auStack_b8);
      _objc_release(lStack_f8);
      _objc_release(uStack_100);
      _objc_release(lStack_108);
      _objc_release(uVar10);
    }
  }
  if ((int)uVar3 != 0) {
    _dispatch_group_enter(uVar6);
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_104e53584;
    puStack_1c0 = &UNK_110853970;
    _objc_retain(uVar6);
    puStack_1a8 = &uStack_88;
    puStack_1a0 = &uStack_a8;
    uStack_1b8 = uVar6;
    _objc_copyWeak(auStack_198,auStack_b0);
    _objc_retain(uVar7);
    ppuVar9 = &puStack_1d8;
    uStack_1b0 = uVar7;
    _objc_retainBlock(ppuVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (param_6 == 0) {
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14b280();
    }
    else {
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14b260();
    }
    _objc_release(uVar10);
    _objc_release(ppuVar9);
    _objc_release(uStack_1b0);
    _objc_destroyWeak(auStack_198);
    _objc_release(uStack_1b8);
  }
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  uStack_228 = 0x104e53708;
  puStack_220 = &UNK_1108539a0;
  _objc_copyWeak(auStack_1e8,auStack_b0);
  puStack_1f8 = &uStack_88;
  uStack_1e0 = (undefined1)uVar5;
  uStack_1df = (undefined1)uVar3;
  puStack_1f0 = &uStack_a8;
  uStack_218 = param_4;
  lStack_210 = lVar2;
  lStack_208 = param_3;
  uStack_200 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(lVar2);
  _objc_retain(param_4);
  func_0x000100bc0718(uVar6,PTR___dispatch_main_q_11034be20,&puStack_238);
  _objc_release(uStack_200);
  _objc_release(lStack_208);
  _objc_release(lStack_210);
  _objc_release(uStack_218);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_1e8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(param_6);
  return;
}



/* Entry: 104e529c0; end: 104e52e0f;  */

void FUN_104e529c0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) = param_2 != 0;
  if (param_2 == 0) {
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_104e53270;
    puStack_150 = &UNK_110848218;
    _objc_copyWeak(auStack_138,param_1 + 0x70);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    uStack_148 = uVar11;
    _objc_retain(uVar12);
    uStack_140 = uVar12;
    func_0x0001000d76cc("APPSTORE",&puStack_168);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x48));
    _objc_release(uStack_140);
    _objc_release(uStack_148);
    _objc_destroyWeak(auStack_138);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27dd80();
    puVar10 = puVar3;
    if ((undefined *)0x19 < puVar5 + 1 || (1L << ((ulong)(puVar5 + 1) & 0x3f) & 0x36de5ffU) == 0) {
      _objc_release(puVar4);
      if (param_3 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar8 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c27dd80();
      func_0x0001084f2c4c();
      bVar1 = false;
      if ((uVar9 < 0x1b) && ((1L << (uVar9 & 0x3f) & 0x7e7fc60U) != 0)) {
        func_0x000108544644();
        bVar1 = (uint)uVar9 < 9;
      }
      _objc_release(uVar8);
      func_0x000107d9f9cc(puVar3,puVar4,bVar1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104e52e10;
    puStack_b0 = &UNK_110853820;
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_78,param_1 + 0x70);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uStack_a8 = uVar11;
    _objc_retain(uVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = uVar12;
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = uVar11;
    _objc_retain(uVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = uVar12;
    _objc_retain(uVar11);
    ppuVar6 = &puStack_c8;
    uStack_88 = uVar11;
    _objc_retainBlock();
    puStack_100 = puVar3;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_104e530c4;
    puStack_e8 = &UNK_110853850;
    _objc_copyWeak(auStack_d0,param_1 + 0x70);
    _objc_retain(ppuVar6);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    ppuStack_d8 = ppuVar6;
    _objc_retain(uVar11);
    ppuVar7 = &puStack_100;
    uStack_e0 = uVar11;
    _objc_retainBlock();
    iVar2 = (int)*(undefined8 *)(param_1 + 0x50);
    func_0x00010beb2840();
    if (iVar2 == 0) {
      (*(code *)ppuVar7[2])(ppuVar7,puVar10);
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = puVar3;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_104e53148;
      puStack_118 = &UNK_1108538e0;
      _objc_retain(ppuVar7);
      ppuStack_108 = ppuVar7;
      _objc_retain(puVar10);
      puStack_110 = puVar10;
      func_0x00010bfc0720(uVar11);
      _objc_release(uVar11);
      _objc_release(puStack_110);
      _objc_release(ppuStack_108);
    }
    _objc_release(ppuVar7);
    _objc_release(uStack_e0);
    _objc_release(ppuStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(ppuVar6);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar10);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104e52e10; end: 104e52f37;  */

void FUN_104e52e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e52f38;
  puStack_78 = &UNK_1108537f0;
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_2);
  uStack_70 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_70);
  _objc_release(param_2);
  return;
}



/* Entry: 104e52f38; end: 104e530c3;  */

void FUN_104e52f38(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x000107ffa0b8();
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(lVar2 + 0x18) = uVar1;
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e530c4; end: 104e53147;  */

void FUN_104e530c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1348;
    func_0x00010c22b6a0(PTR_PTR_1126b1348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ae20();
    _objc_release(puVar2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e53148; end: 104e53233;  */

void FUN_104e53148(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e53234; end: 104e5326f;  */

void FUN_104e53234(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      param_2 = *(long *)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x000104e5324c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 104e53270; end: 104e533a3;  */

void FUN_104e53270(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e533a4; end: 104e534a3;  */

void FUN_104e533a4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = param_3 == 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
    lVar3 = param_3;
    func_0x000107ffa0b8();
    uVar1 = (undefined1)lVar3;
    lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(lVar3 + 0x18) = uVar1;
  lVar3 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar3);
  uVar2 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69160(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e534a4; end: 104e53583;  */

void FUN_104e534a4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 104e53584; end: 104e53667;  */

void FUN_104e53584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((int)param_4 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(lVar3 + 0x18);
  }
  *(byte *)(lVar3 + 0x18) = bVar4 & 1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
    uVar2 = param_5;
    func_0x000107ffa0b8();
    uVar1 = (undefined1)uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(lVar3 + 0x18) = uVar1;
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(lVar3 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795dd20(uVar5,param_4,param_5,uVar2,*(undefined8 *)(lVar3 + 0x80));
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e53668; end: 104e5382b;  */

void FUN_104e53668(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 104e5382c; end: 104e53937; -[SCMyStoriesSaver _shouldAttachGenAIWatermark:] */

undefined1 * FUN_104e5382c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
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
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_c8;
  uVar7 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  puVar8 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_108 + lVar10 * 8);
        func_0x00010c067fc0();
        if (0xfffffffffffffffc < lVar2 - 8U) {
          puVar8 = (undefined1 *)0x1;
          goto LAB_104e538f8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar6 = auStack_c8;
      uVar7 = 0x10;
      lVar1 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar8 = (undefined1 *)0x0;
  }
LAB_104e538f8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(puVar6);
  func_0x000107d22a6c(puVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined1 *)puVar3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010b26c050(puVar6,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar8);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  func_0x00010c11d620(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return (undefined1 *)puVar3;
}



/* Entry: 104e53938; end: 104e53b0b; -[SCMyStoriesSaver _fetchImageForSnap:storyId:completion:] */

void FUN_104e53938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000107d22a6c(param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010b26c050(param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c11d620(uVar2);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104e53b0c; end: 104e54323; -[SCMyStoriesSaver _exportVideoToUrlForSnap:storyId:completion:] */

void FUN_104e53b0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107d9f928();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar9);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104e53d68;
  puStack_a8 = &UNK_110853a30;
  uStack_a0 = uVar3;
  uStack_98 = param_3;
  uStack_90 = param_4;
  lStack_88 = param_1;
  uStack_80 = uVar9;
  uStack_78 = param_5;
  _objc_retain(uVar9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  ppuVar4 = &puStack_c0;
  _objc_retainBlock(ppuVar4);
  uVar2 = param_3;
  func_0x000107d22a6c(param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010b26c050(param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010845c614(uVar3,1,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104e543c0;
  puStack_d0 = &UNK_1108539d0;
  uStack_c8 = uVar5;
  _objc_retain();
  ppuVar7 = &puStack_e8;
  _objc_retainBlock(ppuVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d620();
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(uStack_c8);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(ppuVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 104e54324; end: 104e543bf;  */

void FUN_104e54324(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_3 == 0) && (param_2 != 0)) {
    puVar1 = PTR_PTR_1126b1358;
    func_0x00010bf5a440(PTR_PTR_1126b1358);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e543c0; end: 104e54467;  */

void FUN_104e543c0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27f2a0(param_3);
  _objc_release(param_3);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,param_2 == 2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e54468; end: 104e5454b; -[SCMyStoriesSaver _onFetchImageFailureWithSavingLoggerSessionId:saveUpdateSubject:] */

void FUN_104e54468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf99240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1340;
  func_0x00010c14a620(PTR_PTR_1126b1340);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_4);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795e04c(param_3,0,puVar1,uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


