/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e9a604; end: 107e9a60b; -[IGListBindingSingleSectionController cellClass] */

undefined8 FUN_107e9a604(void)

{
  return 0;
}



/* Entry: 107e9a60c; end: 107e9a60f; -[IGListBindingSingleSectionController configureCell:withViewModel:] */

void FUN_107e9a60c(void)

{
  return;
}



/* Entry: 107e9a610; end: 107e9a61f; -[IGListBindingSingleSectionController sizeForViewModel:] */

undefined1  [16] FUN_107e9a610(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 107e9a620; end: 107e9a627; -[IGListBindingSingleSectionController numberOfItems] */

undefined8 FUN_107e9a620(void)

{
  return 1;
}



/* Entry: 107e9a628; end: 107e9a637; -[IGListBindingSingleSectionController sizeForItemAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sizeForViewModel__11266cf38,*(undefined8 *)(param_1 + _DAT_112770d18));
  return;
}



/* Entry: 107e9a638; end: 107e9a6bb; -[IGListBindingSingleSectionController cellForItemAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf33960(param_1);
  lVar3 = lVar1;
  func_0x00010bf6e020(lVar1,param_2,lVar2,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf46d40(param_1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_112770d18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107e9a6bc; end: 107e9a763; -[IGListBindingSingleSectionController didUpdateToObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112770d18;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071d20(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112770d1c;
    lVar3 = param_1 + lVar5;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar3 != 0) {
      lVar5 = param_1 + lVar5;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bf46d40(param_1,param_2,lVar5,*(undefined8 *)(param_1 + lVar4));
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9a764; end: 107e9a7c7; -[IGListBindingSingleSectionController didSelectItemAtIndex:] */

void FUN_107e9a764(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf7aa80(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e9a7c8; end: 107e9a82b; -[IGListBindingSingleSectionController didDeselectItemAtIndex:] */

void FUN_107e9a7c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf74840(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e9a82c; end: 107e9a88f; -[IGListBindingSingleSectionController didHighlightItemAtIndex:] */

void FUN_107e9a82c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf77460(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e9a890; end: 107e9a8f3; -[IGListBindingSingleSectionController didUnhighlightItemAtIndex:] */

void FUN_107e9a890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf7dec0(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e9a8f4; end: 107e9a98f; -[IGListBindingSingleSectionController willDisplayCell:atIndex:listAdapter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a8f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = (long)_DAT_112770d1c;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  puStack_48 = PTR_PTR_1126fb870;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_willDisplayCell_atIndex_listAdap_112687220,param_3,param_4,
                      param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9a990; end: 107e9aa43; -[IGListBindingSingleSectionController didEndDisplayingCell:atIndex:listAdapter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a990(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = (long)_DAT_112770d1c;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 == lVar1) {
    _objc_storeWeak(param_1 + lVar2,0);
  }
  puStack_48 = PTR_PTR_1126fb870;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_didEndDisplayingCell_atIndex_lis_1125bafc8,param_3,param_4,
                      param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9aa44; end: 107e9aa7b; -[IGListBindingSingleSectionController isDisplayingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107e9aa44(long param_1)

{
  param_1 = param_1 + _DAT_112770d1c;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 107e9aa7c; end: 107e9aab7; -[IGListBindingSingleSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9aa7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770d1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770d18,0);
  return;
}



/* Entry: 107e9aab8; end: 107e9ab3f; -[IGListCollectionView initWithFrame:] */

undefined8
FUN_107e9aab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8158;
  _objc_alloc(PTR_PTR_1126d8158);
  func_0x00010c04ca40(0);
  func_0x00010c014840(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 107e9ab40; end: 107e9ab73; -[IGListCollectionView initWithFrame:listCollectionViewLayout:] */

void FUN_107e9ab40(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb878;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame_collectionViewLayo_1125e29e0);
  return;
}



/* Entry: 107e9ab74; end: 107e9abdb; -[IGListCollectionView _listLayout] */

void FUN_107e9ab74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf481c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf408e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9abdc; end: 107e9ac3f; -[IGListCollectionView reloadItemsAtIndexPaths:] */

void FUN_107e9abdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdfe960(param_1);
  puStack_28 = PTR_PTR_1126fb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_reloadItemsAtIndexPaths__112627d98,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9ac40; end: 107e9aca3; -[IGListCollectionView reloadSections:] */

void FUN_107e9ac40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdfe9a0(param_1);
  puStack_28 = PTR_PTR_1126fb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_reloadSections__112627e08,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9aca4; end: 107e9ad07; -[IGListCollectionView deleteItemsAtIndexPaths:] */

void FUN_107e9aca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdfe960(param_1);
  puStack_28 = PTR_PTR_1126fb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_deleteItemsAtIndexPaths__1125b89e8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9ad08; end: 107e9ad6b; -[IGListCollectionView deleteSections:] */

void FUN_107e9ad08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdfe9a0(param_1);
  puStack_28 = PTR_PTR_1126fb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_deleteSections__1125b8b78,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9ad6c; end: 107e9adcf; -[IGListCollectionView insertItemsAtIndexPaths:] */

void FUN_107e9ad6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdfe960(param_1);
  puStack_28 = PTR_PTR_1126fb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_insertItemsAtIndexPaths__1125f74a0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9add0; end: 107e9ae33; -[IGListCollectionView insertSections:] */

void FUN_107e9add0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdfe9a0(param_1);
  puStack_28 = PTR_PTR_1126fb878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_insertSections__1125f7580,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e9ae34; end: 107e9af13; -[IGListCollectionView moveItemAtIndexPath:toIndexPath:] */

void FUN_107e9ae34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_48 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe960(param_1);
  _objc_release(puVar1);
  puStack_50 = PTR_PTR_1126fb878;
  lVar3 = param_3;
  uVar4 = param_4;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_moveItemAtIndexPath_toIndexPath__112611f68);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_107e9af14;
  puStack_90 = puVar1;
  uStack_88 = param_1;
  lStack_80 = param_3;
  uStack_78 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bdfe980();
  puStack_98 = PTR_PTR_1126fb878;
  lStack_a0 = lVar2;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_moveSection_toSection__112611fd0,lVar3,uVar4);
  return;
}



/* Entry: 107e9af14; end: 107e9af77; -[IGListCollectionView moveSection:toSection:] */

void FUN_107e9af14(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = param_3;
  if (param_4 <= param_3) {
    lVar1 = param_4;
  }
  func_0x00010bdfe980(param_1,param_2,lVar1);
  puStack_38 = PTR_PTR_1126fb878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_moveSection_toSection__112611fd0,param_3,param_4);
  return;
}



/* Entry: 107e9af78; end: 107e9afc3; -[IGListCollectionView _didModifySections:] */

void FUN_107e9af78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb16e0(param_3);
    func_0x00010bdfe980(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9afc4; end: 107e9affb; -[IGListCollectionView _didModifySection:] */

void FUN_107e9afc4(undefined8 param_1)

{
  func_0x00010be4c5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9affc; end: 107e9b0fb; -[IGListCollectionView _didModifyIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9affc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_108 + lVar5 * 8);
        func_0x00010c1554e0(uVar2);
        func_0x00010bdfe980(param_1,param_2,uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar2 = *(undefined8 *)(param_3 + _DAT_112770d20);
  *(undefined8 **)(param_3 + _DAT_112770d20) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e9b0fc; end: 107e9b133; -[IGListGenericSectionController didUpdateToObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9b0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770d20);
  *(undefined8 *)(param_1 + _DAT_112770d20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9b134; end: 107e9b143; -[IGListGenericSectionController object] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9b134(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d20);
}



/* Entry: 107e9b144; end: 107e9b157; -[IGListGenericSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9b144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770d20,0);
  return;
}



/* Entry: 107e9b158; end: 107e9b167; -[IGListReloadDataUpdater objectLookupPointerFunctions] */

void FUN_107e9b158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPointerFunctions_1126d8110,
             PTR_s_pointerFunctionsWithOptions__11261e5a8,0);
  return;
}



/* Entry: 107e9b168; end: 107e9b277; -[IGListReloadDataUpdater performUpdateWithCollectionViewBlock:animated:sectionDataBlock:applySectionDataBlock:completion:] */

void FUN_107e9b168(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_5;
    (**(code **)(param_5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    if ((param_6 != 0) && (lVar2 != 0)) {
      *(undefined1 *)(param_1 + 8) = 1;
      (**(code **)(param_6 + 0x10))(param_6,lVar2);
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  lVar1 = param_3;
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beca1c0(param_1);
  _objc_release(lVar1);
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,1);
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9b278; end: 107e9b317; -[IGListReloadDataUpdater performUpdateWithCollectionViewBlock:animated:itemUpdates:completion:] */

void FUN_107e9b278(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_6);
  pcVar2 = *(code **)(param_5 + 0x10);
  _objc_retain(param_3);
  (*pcVar2)(param_5);
  lVar1 = param_3;
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010beca1c0(param_1);
  _objc_release(lVar1);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107e9b318; end: 107e9b323; -[IGListReloadDataUpdater performDataSourceChange:] */

void FUN_107e9b318(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107e9b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 107e9b324; end: 107e9b3c3; -[IGListReloadDataUpdater reloadDataWithCollectionViewBlock:reloadUpdateBlock:completion:] */

void FUN_107e9b324(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_5);
  pcVar2 = *(code **)(param_4 + 0x10);
  _objc_retain(param_3);
  (*pcVar2)(param_4);
  lVar1 = param_3;
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010beca1c0(param_1);
  _objc_release(lVar1);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107e9b3c4; end: 107e9b3c7; -[IGListReloadDataUpdater insertItemsIntoCollectionView:indexPaths:] */

void FUN_107e9b3c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronousReloadDataWithCollec_112590218);
  return;
}



/* Entry: 107e9b3c8; end: 107e9b3cb; -[IGListReloadDataUpdater deleteItemsFromCollectionView:indexPaths:] */

void FUN_107e9b3c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronousReloadDataWithCollec_112590218);
  return;
}



/* Entry: 107e9b3cc; end: 107e9b3cf; -[IGListReloadDataUpdater moveItemInCollectionView:fromIndexPath:toIndexPath:] */

void FUN_107e9b3cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronousReloadDataWithCollec_112590218);
  return;
}



/* Entry: 107e9b3d0; end: 107e9b3d3; -[IGListReloadDataUpdater reloadItemInCollectionView:fromIndexPath:toIndexPath:] */

void FUN_107e9b3d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronousReloadDataWithCollec_112590218);
  return;
}



/* Entry: 107e9b3d4; end: 107e9b3d7; -[IGListReloadDataUpdater moveSectionInCollectionView:fromIndex:toIndex:] */

void FUN_107e9b3d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronousReloadDataWithCollec_112590218);
  return;
}



/* Entry: 107e9b3d8; end: 107e9b3db; -[IGListReloadDataUpdater reloadCollectionView:sections:] */

void FUN_107e9b3d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronousReloadDataWithCollec_112590218);
  return;
}



/* Entry: 107e9b3dc; end: 107e9b413; -[IGListReloadDataUpdater _synchronousReloadDataWithCollectionView:] */

void FUN_107e9b3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c128b60(param_3);
  func_0x00010c08cdc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9b414; end: 107e9b41b; -[IGListReloadDataUpdater isInDataUpdateBlock] */

undefined1 FUN_107e9b414(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e9b41c; end: 107e9b433; -[IGListSectionControllerThreadContext viewController] */

void FUN_107e9b41c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9b434; end: 107e9b43f; -[IGListSectionControllerThreadContext setViewController:] */

void FUN_107e9b434(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107e9b440; end: 107e9b457; -[IGListSectionControllerThreadContext collectionContext] */

void FUN_107e9b440(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9b458; end: 107e9b463; -[IGListSectionControllerThreadContext setCollectionContext:] */

void FUN_107e9b458(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107e9b464; end: 107e9b48b; -[IGListSectionControllerThreadContext .cxx_destruct] */

void FUN_107e9b464(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107e9b48c; end: 107e9b51f;  */

void FUN_107e9b48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8160;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c222400();
  _objc_release(param_1);
  func_0x00010c17e540(puVar1);
  _objc_release(param_2);
  FUN_107e9b520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e9b520; end: 107e9b5e7;  */

void FUN_107e9b520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec20b8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0640(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110ec20b8);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e9b5e8; end: 107e9b6df; -[IGListSectionController init] */

undefined1 * FUN_107e9b5e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    FUN_107e9b520();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010c29c100(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),puVar2);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf3fd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),puVar2);
    _objc_release(puVar2);
    _objc_loadWeakRetained((undefined1 *)((long)puVar1 + 0x18));
    _objc_release();
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    uVar4 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x68) = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x78) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x70) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x20) = 0x7fffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e9b6e0; end: 107e9b6e7; -[IGListSectionController numberOfItems] */

undefined8 FUN_107e9b6e0(void)

{
  return 1;
}



/* Entry: 107e9b6e8; end: 107e9b6f7; -[IGListSectionController sizeForItemAtIndex:] */

undefined1  [16] FUN_107e9b6e8(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 107e9b6f8; end: 107e9b6ff; -[IGListSectionController cellForItemAtIndex:] */

undefined8 FUN_107e9b6f8(void)

{
  return 0;
}



/* Entry: 107e9b700; end: 107e9b703; -[IGListSectionController didUpdateToObject:] */

void FUN_107e9b700(void)

{
  return;
}



/* Entry: 107e9b704; end: 107e9b70b; -[IGListSectionController shouldSelectItemAtIndex:] */

undefined8 FUN_107e9b704(void)

{
  return 1;
}



/* Entry: 107e9b70c; end: 107e9b713; -[IGListSectionController shouldDeselectItemAtIndex:] */

undefined8 FUN_107e9b70c(void)

{
  return 1;
}



/* Entry: 107e9b714; end: 107e9b717; -[IGListSectionController didSelectItemAtIndex:] */

void FUN_107e9b714(void)

{
  return;
}



/* Entry: 107e9b718; end: 107e9b71b; -[IGListSectionController didDeselectItemAtIndex:] */

void FUN_107e9b718(void)

{
  return;
}



/* Entry: 107e9b71c; end: 107e9b71f; -[IGListSectionController didHighlightItemAtIndex:] */

void FUN_107e9b71c(void)

{
  return;
}



/* Entry: 107e9b720; end: 107e9b723; -[IGListSectionController didUnhighlightItemAtIndex:] */

void FUN_107e9b720(void)

{
  return;
}



/* Entry: 107e9b724; end: 107e9b72b; -[IGListSectionController canMoveItemAtIndex:] */

undefined8 FUN_107e9b724(void)

{
  return 0;
}



/* Entry: 107e9b72c; end: 107e9b72f; -[IGListSectionController canMoveItemAtIndex:toIndex:] */

void FUN_107e9b72c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_canMoveItemAtIndex__1125a8d50);
  return;
}



/* Entry: 107e9b730; end: 107e9b733; -[IGListSectionController moveObjectFromIndex:toIndex:] */

void FUN_107e9b730(void)

{
  return;
}



/* Entry: 107e9b734; end: 107e9b7b7; -[IGListSectionController willDisplayCell:atIndex:listAdapter:] */

void FUN_107e9b734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf855e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099d20();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9b7b8; end: 107e9b83b; -[IGListSectionController didEndDisplayingCell:atIndex:listAdapter:] */

void FUN_107e9b7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf855e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099bc0();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9b83c; end: 107e9b897; -[IGListSectionController willDisplaySectionControllerWithListAdapter:] */

void FUN_107e9b83c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf855e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099d00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9b898; end: 107e9b8f3; -[IGListSectionController didEndDisplayingSectionControllerWithListAdapter:] */

void FUN_107e9b898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf855e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099ba0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9b8f4; end: 107e9b90b; -[IGListSectionController viewController] */

void FUN_107e9b8f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9b90c; end: 107e9b917; -[IGListSectionController setViewController:] */

void FUN_107e9b90c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107e9b918; end: 107e9b92f; -[IGListSectionController collectionContext] */

void FUN_107e9b918(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9b930; end: 107e9b93b; -[IGListSectionController setCollectionContext:] */

void FUN_107e9b930(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107e9b93c; end: 107e9b943; -[IGListSectionController section] */

undefined8 FUN_107e9b93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e9b944; end: 107e9b94b; -[IGListSectionController setSection:] */

void FUN_107e9b944(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107e9b94c; end: 107e9b953; -[IGListSectionController isFirstSection] */

undefined1 FUN_107e9b94c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e9b954; end: 107e9b95b; -[IGListSectionController setIsFirstSection:] */

void FUN_107e9b954(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107e9b95c; end: 107e9b963; -[IGListSectionController isLastSection] */

undefined1 FUN_107e9b95c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107e9b964; end: 107e9b96b; -[IGListSectionController setIsLastSection:] */

void FUN_107e9b964(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107e9b96c; end: 107e9b977; -[IGListSectionController inset] */

undefined8 FUN_107e9b96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e9b978; end: 107e9b983; -[IGListSectionController setInset:] */

void FUN_107e9b978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x60) = param_1;
  *(undefined8 *)(param_5 + 0x68) = param_2;
  *(undefined8 *)(param_5 + 0x70) = param_3;
  *(undefined8 *)(param_5 + 0x78) = param_4;
  return;
}



/* Entry: 107e9b984; end: 107e9b98b; -[IGListSectionController minimumLineSpacing] */

undefined8 FUN_107e9b984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e9b98c; end: 107e9b993; -[IGListSectionController setMinimumLineSpacing:] */

void FUN_107e9b98c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 107e9b994; end: 107e9b99b; -[IGListSectionController minimumInteritemSpacing] */

undefined8 FUN_107e9b994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e9b99c; end: 107e9b9a3; -[IGListSectionController setMinimumInteritemSpacing:] */

void FUN_107e9b99c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 107e9b9a4; end: 107e9b9bb; -[IGListSectionController supplementaryViewSource] */

void FUN_107e9b9a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9b9bc; end: 107e9b9c7; -[IGListSectionController setSupplementaryViewSource:] */

void FUN_107e9b9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107e9b9c8; end: 107e9b9df; -[IGListSectionController displayDelegate] */

void FUN_107e9b9c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9b9e0; end: 107e9b9eb; -[IGListSectionController setDisplayDelegate:] */

void FUN_107e9b9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107e9b9ec; end: 107e9ba03; -[IGListSectionController workingRangeDelegate] */

void FUN_107e9b9ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9ba04; end: 107e9ba0f; -[IGListSectionController setWorkingRangeDelegate:] */

void FUN_107e9ba04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 107e9ba10; end: 107e9ba27; -[IGListSectionController scrollDelegate] */

void FUN_107e9ba10(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9ba28; end: 107e9ba33; -[IGListSectionController setScrollDelegate:] */

void FUN_107e9ba28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107e9ba34; end: 107e9ba4b; -[IGListSectionController transitionDelegate] */

void FUN_107e9ba34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9ba4c; end: 107e9ba57; -[IGListSectionController setTransitionDelegate:] */

void FUN_107e9ba4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 107e9ba58; end: 107e9baa7; -[IGListSectionController .cxx_destruct] */

void FUN_107e9ba58(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107e9baa8; end: 107e9bb87; -[IGListSingleSectionController initWithCellClass:configureBlock:sizeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e9baa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fb888;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112770d64;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d68);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d6c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d6c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e9bb88; end: 107e9bcaf; -[IGListSingleSectionController initWithNibName:bundle:configureBlock:sizeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e9bb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fb888;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d70);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d70) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112770d74;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d68);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d6c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d6c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e9bcb0; end: 107e9bda3; -[IGListSingleSectionController initWithStoryboardCellIdentifier:configureBlock:sizeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e9bcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126fb888;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d78);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d68);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770d6c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770d6c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


