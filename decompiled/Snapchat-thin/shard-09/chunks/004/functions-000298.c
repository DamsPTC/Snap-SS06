/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d6229c; end: 106d622cb;  */

void FUN_106d6229c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c115e60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106d622cc; end: 106d62437;  */

void FUN_106d622cc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfa11a0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 1) {
    iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    lVar1 = param_2;
    func_0x00010c115e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar3);
    _objc_release(lVar1);
    if (iVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
LAB_106d623e8:
      func_0x00010bed9fc0(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d62418;
    }
  }
  else if (lVar1 == 2) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x48);
    lVar1 = param_2;
    func_0x00010c115e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar3);
    _objc_release(lVar1);
    if ((uVar5 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_106d623e8;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106d62418:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d62438; end: 106d62647; -[SCCommerceShowcaseViewModelProvider _updateItemWithCellFavoriteState:productCellViewModel:itemIndex:] */

void FUN_106d62438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126b02c0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c25ccc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bfe8f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c07eea0();
  func_0x00010c06e7c0();
  uVar9 = param_4;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c2610e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cbe0();
  uVar12 = param_4;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c03a760(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,(char)uVar8);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c130f40(*(undefined8 *)(param_1 + 0x20),param_2,param_5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d62648; end: 106d62797; -[SCCommerceShowcaseViewModelProvider _reloadItemsAtIndicies:] */

void FUN_106d62648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010bf51e00();
    puVar2 = *(undefined **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
  }
  else {
    puVar2 = PTR_PTR_1126b02d8;
    _objc_opt_new(PTR_PTR_1126b02d8);
    func_0x00010bf09f60(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    _objc_release(uVar1);
  }
  _objc_release(puVar2);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e85778;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e856f8,param_1,puVar2)
  ;
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 106d62798; end: 106d627a3; -[SCCommerceShowcaseViewModelProvider items] */

void FUN_106d62798(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 106d627a4; end: 106d627ab; -[SCCommerceShowcaseViewModelProvider currentPage] */

undefined8 FUN_106d627a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106d627ac; end: 106d627b3; -[SCCommerceShowcaseViewModelProvider nextPage] */

undefined8 FUN_106d627ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106d627b4; end: 106d627bf; -[SCCommerceShowcaseViewModelProvider canLoadMorePages] */

byte FUN_106d627b4(long param_1)

{
  return *(byte *)(param_1 + 0x28) & 1;
}



/* Entry: 106d627c0; end: 106d627cb; -[SCCommerceShowcaseViewModelProvider errorModel] */

void FUN_106d627c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 106d627cc; end: 106d6284f; -[SCCommerceShowcaseViewModelProvider .cxx_destruct] */

void FUN_106d627cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d62850; end: 106d628ab; -[SCCommerceCatalogCollectionViewController _itemIndexForIndexPath:] */

long FUN_106d62850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be45ba0(param_1,param_2,param_3);
  func_0x00010be45fc0(param_1,param_2,param_3);
  _objc_release(param_3);
  return lVar1 + param_1 * 2;
}



/* Entry: 106d628ac; end: 106d629fb; -[SCCommerceCatalogCollectionViewController _itemRowForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d628ac(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c0840e0();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + _DAT_11275d774);
    func_0x00010c084fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d25e0;
    _objc_opt_class(PTR_PTR_1126d25e0);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    _objc_release(uVar6);
    _objc_release(uVar1);
    lVar5 = (long)_DAT_11275d778;
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b02d8;
    _objc_opt_class(PTR_PTR_1126b02d8);
    uVar6 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar6 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + lVar5);
      func_0x00010bf33b60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b02e0;
      _objc_opt_class(PTR_PTR_1126b02e0);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar6 = uVar6 & 1;
      _objc_release(uVar4);
    }
    else {
      uVar6 = 1;
    }
    _objc_release(uVar1);
    lVar5 = param_3;
    func_0x00010c0840e0(param_3);
    lVar5 = uVar6 + (uVar3 & 1) + (lVar5 - (uVar3 & 1) >> 1);
  }
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106d629fc; end: 106d62b4b; -[SCCommerceCatalogCollectionViewController _itemColumnForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106d629fc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010c0840e0();
  if (lVar9 != 0) {
    lVar9 = (long)_DAT_11275d778;
    uVar1 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b02d8;
    _objc_opt_class(PTR_PTR_1126b02d8);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b02e0;
      _objc_opt_class(PTR_PTR_1126b02e0);
      uVar3 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + _DAT_11275d774);
        func_0x00010c084fc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d25e0;
        _objc_opt_class(PTR_PTR_1126d25e0);
        uVar7 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar2);
        _objc_release(uVar6);
        _objc_release(uVar5);
        lVar9 = param_3;
        func_0x00010c0840e0(param_3);
        uVar8 = ((uint)uVar7 ^ (uint)lVar9) & 1;
        goto LAB_106d62ac0;
      }
    }
    else {
      _objc_release(uVar1);
    }
  }
  uVar8 = 0;
LAB_106d62ac0:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 106d62b4c; end: 106d62e1b; -[SCCommerceCatalogCollectionViewController initWithImageSourceProvider:imageFetchingService:actionHandler:catalogMetricType:storeCategoryId:showcaseTracker:productImpressionTracker:heroCellViewModel:resultTitle:sourcePage:eventLogger:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d62b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f6ab8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275d77c,param_3);
    lVar4 = (long)_DAT_11275d780;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275d784,param_5);
    lVar4 = (long)_DAT_11275d788;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d78c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d790;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d794;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d798;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d79c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275d7a0) = param_12;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275d7a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11275d7a4) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d7a8;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d7ac;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    func_0x00010beab960(puVar1);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 106d62e1c; end: 106d62e8f; -[SCCommerceCatalogCollectionViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d62e1c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6ab8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c116480(*(undefined8 *)(param_1 + _DAT_11275d790));
  func_0x00010c28b440(*(undefined8 *)(param_1 + _DAT_11275d794));
  return;
}



/* Entry: 106d62e90; end: 106d62ecf; -[SCCommerceCatalogCollectionViewController scrollToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d62e90(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11275d778);
  func_0x00010bf4c7c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,-param_1,uVar1,PTR_s_setContentOffset_animated__11263e2e0,param_4);
  return;
}



/* Entry: 106d62ed0; end: 106d63147; -[SCCommerceCatalogCollectionViewController showCalloutBarWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d62ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_11275d7b4;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 != 0) {
    _objc_retain(param_3);
    func_0x00010c212f20(lVar2,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d778);
  _objc_retain(param_3);
  uVar5 = 0x404a800000000000;
  func_0x00010c181f80(0x404a800000000000,0,0,0,uVar3);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0xc04a800000000000,uVar5,0x4045800000000000);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar2 = (long)_DAT_11275d7b8;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = puVar1;
  _objc_release(uVar3);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106d63148;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010bf03400(0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  return;
}



/* Entry: 106d63148; end: 106d631ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63148(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,0xc024000000000000,param_1,0x4045800000000000,
                      *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11275d7b4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d631ac; end: 106d63223; -[SCCommerceCatalogCollectionViewController setPaginationProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d631ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bfaf120(param_1);
  lVar2 = (long)_DAT_11275d774;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
  func_0x00010be92140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c09bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadNextPageIfNeeded_112604950);
  return;
}



/* Entry: 106d63224; end: 106d6326f; -[SCCommerceCatalogCollectionViewController isScrolledToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106d63224(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275d778;
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar1));
  func_0x00010befda00(*(undefined8 *)(param_3 + lVar1));
  return param_2 + param_1 <= 0.0;
}



/* Entry: 106d63270; end: 106d63463; -[SCCommerceCatalogCollectionViewController restartVisibleProductImpressions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63270(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_11275d774);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar2 != 0) {
    lVar14 = (long)_DAT_11275d778;
    lVar1 = *(long *)(param_1 + lVar14);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(undefined8 *)(lVar15 * 8);
        lVar16 = param_1;
        func_0x00010be43960();
        if ((int)lVar16 != 0) {
          uVar3 = *(undefined8 *)(param_1 + lVar14);
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + _DAT_11275d790);
          func_0x00010c0840e0(uVar12);
          func_0x00010c288cc0(uVar13);
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = param_1;
          func_0x00010be37d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (lVar16 != 0) {
            func_0x00010c251400(*(undefined8 *)(param_1 + _DAT_11275d794));
          }
          _objc_release(lVar16);
          _objc_release(uVar3);
        }
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275d774;
  lVar9 = *(long *)(lVar1 + lVar14);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  if (lVar2 != 0) {
    lVar9 = *(long *)(lVar1 + _DAT_11275d778);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar9);
        }
        lVar11 = *(long *)(lVar16 * 8);
        lVar5 = lVar1;
        func_0x00010be43960();
        if ((int)lVar5 != 0) {
          uVar6 = *(ulong *)(lVar1 + lVar14);
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf529e0();
          lVar5 = lVar11;
          func_0x00010c0840e0();
          _objc_release(uVar6);
          if (lVar5 + 1U <= uVar7) {
            uVar7 = *(ulong *)(lVar1 + lVar14);
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0840e0(lVar11);
            uVar6 = uVar7;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            puVar4 = PTR_PTR_1126b02c0;
            _objc_opt_class(PTR_PTR_1126b02c0);
            uVar8 = uVar6;
            _objc_opt_isKindOfClass(uVar6,puVar4);
            uVar7 = uVar6;
            if ((uVar8 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar6);
            if (uVar7 != 0) {
              uVar12 = *(undefined8 *)(lVar1 + _DAT_11275d794);
              func_0x00010c115e60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf95940(uVar12);
              _objc_release(uVar6);
            }
            _objc_release(uVar7);
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar9 + _DAT_11275d784;
  _objc_loadWeakRetained(lVar2);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010c29bf00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar2);
  _objc_release(lVar9);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d63464; end: 106d63693; -[SCCommerceCatalogCollectionViewController finalizeVisibleProductImpressions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63464(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11275d774;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_11275d778);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar10 = *(long *)(lVar13 * 8);
        lVar4 = param_1;
        func_0x00010be43960();
        if ((int)lVar4 != 0) {
          uVar5 = *(ulong *)(param_1 + lVar12);
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          lVar4 = lVar10;
          func_0x00010c0840e0();
          _objc_release(uVar5);
          if (lVar4 + 1U <= uVar6) {
            uVar6 = *(ulong *)(param_1 + lVar12);
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0840e0(lVar10);
            uVar5 = uVar6;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            puVar7 = PTR_PTR_1126b02c0;
            _objc_opt_class(PTR_PTR_1126b02c0);
            uVar8 = uVar5;
            _objc_opt_isKindOfClass(uVar5,puVar7);
            uVar6 = uVar5;
            if ((uVar8 & 1) == 0) {
              uVar6 = 0;
            }
            _objc_retain(uVar6);
            _objc_release(uVar5);
            if (uVar6 != 0) {
              uVar11 = *(undefined8 *)(param_1 + _DAT_11275d794);
              func_0x00010c115e60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf95940(uVar11);
              _objc_release(uVar5);
            }
            _objc_release(uVar6);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar2 + _DAT_11275d784;
  _objc_loadWeakRetained(lVar3);
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d63694; end: 106d63727; -[SCCommerceCatalogCollectionViewController _calloutBarTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63694(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11275d784;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar1,param_2,param_1,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d63728; end: 106d63757; -[SCCommerceCatalogCollectionViewController timeUntilFirstProductLoadedSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d63728(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_11275d7a4) != 0) {
    if (*(long *)(param_2 + _DAT_11275d7bc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c26f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_2 + _DAT_11275d7bc),PTR_s_timeIntervalSinceDate__112679708);
      return param_1;
    }
  }
  return 0xbf50624de0000000;
}



/* Entry: 106d63758; end: 106d6379f; -[SCCommerceCatalogCollectionViewController _reloadDataJumpingToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63758(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275d778));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c152870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToTop__112632438,0);
    return;
  }
  return;
}



/* Entry: 106d637a0; end: 106d6381f; -[SCCommerceCatalogCollectionViewController _loadNextPageWithActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d637a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d784;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar2,param_2,param_1,param_3,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d63820; end: 106d638d3; -[SCCommerceCatalogCollectionViewController _reset] */

void FUN_106d63820(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106d638a8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d638d4; end: 106d6392f; -[SCCommerceCatalogCollectionViewController _performReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d638d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be35720();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d7a4);
  *(undefined **)(param_1 + _DAT_11275d7a4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d7bc);
  *(undefined8 *)(param_1 + _DAT_11275d7bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d63930; end: 106d63987; -[SCCommerceCatalogCollectionViewController _setDateReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63930(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275d7bc;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d63988; end: 106d63a3f; -[SCCommerceCatalogCollectionViewController _sendActionForProductCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63988(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85598;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e855b8;
  }
  lVar4 = (long)_DAT_11275d784;
  _objc_retain(ppuVar1);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(ppuVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar4,param_2,param_1,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106d63a40; end: 106d63fe3; -[SCCommerceCatalogCollectionViewController _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63a40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar22 = (long)_DAT_11275d778;
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar17);
  _objc_release(puVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar22));
  lVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar19);
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(lVar18);
  _objc_release(lVar20);
  _objc_release(uVar3);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c167680(*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar22));
  _objc_release(puVar1);
  func_0x00010c181f80(0x4024000000000000,0,0,0,*(undefined8 *)(param_1 + lVar22));
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar22));
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  _objc_opt_class(PTR_PTR_1126d25f8);
  puVar1 = PTR_PTR_1126d25f8;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  _objc_opt_class(PTR_PTR_1126d25d8);
  puVar1 = PTR_PTR_1126d25d8;
  _objc_opt_class(PTR_PTR_1126d25d8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  _objc_opt_class(PTR_PTR_1126b0960);
  puVar1 = PTR_PTR_1126b0960;
  _objc_opt_class(PTR_PTR_1126b0960);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  _objc_opt_class(PTR_PTR_1126d25e0);
  puVar1 = PTR_PTR_1126d25e0;
  _objc_opt_class(PTR_PTR_1126d25e0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d25e8;
  _objc_opt_class(PTR_PTR_1126d25e8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d25f0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar17);
  _objc_release(puVar1);
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  lVar20 = (long)_DAT_11275d7c0;
  _objc_retain(uVar19);
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  *(undefined8 *)(param_1 + lVar20) = uVar19;
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc_init();
  func_0x00010c178280();
  puVar2 = puVar1;
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar22));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lVar21 = (long)_DAT_11275d7c4;
  lVar20 = *(long *)(puVar1 + lVar21);
  if (lVar20 == 0) {
    puVar12 = PTR_PTR_1126b04e8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar17 = *(undefined8 *)(puVar1 + lVar21);
    *(undefined **)(puVar1 + lVar21) = puVar12;
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar21));
    func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar21));
    lVar20 = (long)_DAT_11275d778;
    func_0x00010befbb60(*(undefined8 *)(puVar1 + lVar20));
    puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)(puVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010c274200(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar13;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + lVar20);
    func_0x00010c2a5060(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar15);
    _objc_release(uVar19);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar13);
    lVar20 = *(long *)(puVar1 + lVar21);
  }
  func_0x00010c103e20(lVar20);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar21));
  uVar17 = *(undefined8 *)(puVar1 + _DAT_11275d778);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a7f60(*(undefined8 *)(puVar2 + _DAT_11275d7c4));
                    /* WARNING: Could not recover jumptable at 0x00010be8a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__reloadDataJumpingToTop__1125803b0,0);
  return;
}



/* Entry: 106d63fe4; end: 106d6420f; -[SCCommerceCatalogCollectionViewController _showErrorOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d63fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = (long)_DAT_11275d7c4;
  lVar1 = *(long *)(param_1 + lVar11);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b04e8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar11));
    lVar1 = (long)_DAT_11275d778;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c274200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c2a5060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar11);
  }
  func_0x00010c103e20(lVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11));
  uVar10 = *(undefined8 *)(param_1 + _DAT_11275d778);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11275d7c4));
                    /* WARNING: Could not recover jumptable at 0x00010be8a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__reloadDataJumpingToTop__1125803b0,0);
  return;
}



/* Entry: 106d64210; end: 106d64247; -[SCCommerceCatalogCollectionViewController _hideErrorOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d64210(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275d7c4),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010be8a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadDataJumpingToTop__1125803b0,0);
  return;
}



/* Entry: 106d64248; end: 106d642e3; -[SCCommerceCatalogCollectionViewController errorButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d64248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be35720();
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = param_1 + _DAT_11275d784;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(lVar2,param_2,param_1,puVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d642e4; end: 106d64467; -[SCCommerceCatalogCollectionViewController favoritesHeartButtonWasTappedForProductId:productImage:currentHeartState:trackingId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d642e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b0550;
  if (param_5 - 1U < 2) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010c03a660();
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    lVar3 = param_1 + _DAT_11275d784;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(lVar3,param_2,param_1,puVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50ec0(param_1,param_2,param_5,param_6,puVar6);
    _objc_release(param_6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106d64468; end: 106d645bb; -[SCCommerceCatalogCollectionViewController loadNextPageIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d64468(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11275d774;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010bf2cd60();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b0300;
    _objc_alloc(PTR_PTR_1126b0300);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0d9c60(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032da0(puVar3);
    func_0x00010c01b460();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106d645bc;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_78);
    _objc_release(puStack_58);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106d645bc; end: 106d645ef;  */

void FUN_106d645bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d645f0; end: 106d646b3; -[SCCommerceCatalogCollectionViewController _itemIndexShouldLoadNextPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106d645f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11275d774;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  uVar4 = *(ulong *)(param_1 + lVar6);
  func_0x00010c084fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  return param_3 == lVar2 + -6 || param_3 == lVar1 + -1 && uVar5 < 6;
}



/* Entry: 106d646b4; end: 106d649a7; -[SCCommerceCatalogCollectionViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106d646b4(double param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(ulong *)(param_5 + _DAT_11275d7c4);
  if ((uVar1 == 0) || (func_0x00010c074c20(), (uVar1 & 1) != 0)) {
    lVar3 = param_5;
    func_0x00010be43940();
    if ((int)lVar3 == 0) {
      lVar7 = (long)_DAT_11275d774;
      lVar2 = *(long *)(param_5 + lVar7);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        FUN_106d5e0e4(0);
        goto LAB_106d64804;
      }
      lVar3 = *(long *)(param_5 + lVar7);
      func_0x00010bf98da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar4 = *(ulong *)(param_5 + lVar7);
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010bf529e0();
        uVar5 = param_9;
        func_0x00010c0840e0();
        _objc_release(uVar4);
        if (uVar5 <= uVar1) {
          uVar5 = *(ulong *)(param_5 + lVar7);
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0840e0(param_9);
          uVar1 = uVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar6 = PTR_PTR_1126b02c0;
          _objc_retain(uVar1);
          _objc_opt_class(puVar6);
          uVar5 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar6);
          _objc_release(uVar1);
          puVar6 = PTR_PTR_1126b02c8;
          if (((uVar5 & 1) == 0) || (uVar1 == 0)) {
            _objc_retain(uVar1);
            _objc_opt_class(puVar6);
            uVar5 = uVar1;
            _objc_opt_isKindOfClass(uVar1,puVar6);
            _objc_release(uVar1);
            puVar6 = PTR_PTR_1126b02d8;
            if (((uVar5 & 1) == 0) || (uVar1 == 0)) {
              _objc_retain(uVar1);
              _objc_opt_class(puVar6);
              uVar5 = uVar1;
              _objc_opt_isKindOfClass(uVar1,puVar6);
              _objc_release(uVar1);
              puVar6 = PTR_PTR_1126b02e0;
              if (((uVar5 & 1) == 0) || (uVar1 == 0)) {
                _objc_retain(uVar1);
                _objc_opt_class(puVar6);
                uVar5 = uVar1;
                _objc_opt_isKindOfClass(uVar1,puVar6);
                _objc_release(uVar1);
                if (((uVar5 & 1) == 0) || (uVar1 == 0)) {
                  param_1 = *(double *)PTR__CGSizeZero_110347620;
                  param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
                }
                else {
                  func_0x000106d5e1d4(uVar1);
                }
              }
              else {
                FUN_106d5e174(uVar1);
              }
            }
            else {
              FUN_106d5e150();
            }
          }
          else {
            FUN_106d5e0e4(uVar1);
          }
          _objc_release(uVar1);
          goto LAB_106d64804;
        }
      }
    }
    else if (*(long *)(param_5 + _DAT_11275d798) != 0) {
      func_0x00010bfb68e0(param_7);
      func_0x00010bf4c7c0(param_7);
      dVar8 = param_2;
      func_0x00010bf4c7c0(param_7);
      param_1 = param_3 - (param_2 + param_4);
      FUN_106d5e0b0(param_1);
      param_2 = dVar8;
      goto LAB_106d64804;
    }
  }
  param_1 = *(double *)PTR__CGSizeZero_110347620;
  param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_106d64804:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 106d649a8; end: 106d64a4f; -[SCCommerceCatalogCollectionViewController collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106d649a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be43940(param_1,param_2,puVar1);
  if ((int)lVar2 == 0) {
    _objc_release(puVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11275d79c);
    _objc_release(puVar1);
    if (lVar2 != 0) {
      FUN_106d5e000();
      goto LAB_106d64a2c;
    }
  }
  FUN_106d5e000();
  FUN_106d5e000();
LAB_106d64a2c:
  FUN_106d5e000();
  return 0;
}



/* Entry: 106d64a50; end: 106d64a53; -[SCCommerceCatalogCollectionViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

long FUN_106d64a50(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return (long)(param_3 * 0.05);
}



/* Entry: 106d64a54; end: 106d64a57; -[SCCommerceCatalogCollectionViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

long FUN_106d64a54(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return (long)(param_3 * 0.05);
}



/* Entry: 106d64a58; end: 106d64b0b; -[SCCommerceCatalogCollectionViewController collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106d64a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_4 + _DAT_11275d7c4);
  if ((((uVar1 == 0) || (func_0x00010c074c20(), (uVar1 & 1) != 0)) && (param_8 == 1)) &&
     (*(long *)(param_4 + _DAT_11275d79c) != 0)) {
    func_0x00010bf20c00(param_6);
    uVar2 = 0x4047000000000000;
  }
  else {
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 106d64b0c; end: 106d64b13; -[SCCommerceCatalogCollectionViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_106d64b0c(void)

{
  return 2;
}



/* Entry: 106d64b14; end: 106d64c53; -[SCCommerceCatalogCollectionViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106d64b14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_4 != 1) {
    if (param_4 == 0) {
      uVar4 = (ulong)(*(long *)(param_1 + _DAT_11275d798) != 0);
    }
    else {
      uVar4 = 0;
    }
    goto LAB_106d64c2c;
  }
  lVar5 = (long)_DAT_11275d774;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
LAB_106d64bb4:
    uVar4 = 6;
  }
  else {
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar4 = *(ulong *)(param_1 + lVar5);
      func_0x00010bf2cd60();
      _objc_release(lVar1);
      if ((uVar4 & 1) != 0) goto LAB_106d64bb4;
    }
    else {
      _objc_release(lVar1);
    }
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      uVar4 = *(ulong *)(param_1 + lVar5);
      func_0x00010bf2cd60();
      _objc_release(lVar2);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
        goto LAB_106d64c20;
      }
    }
    else {
      _objc_release(lVar2);
    }
    uVar3 = *(ulong *)(param_1 + lVar5);
    func_0x00010c084fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
  }
LAB_106d64c20:
  func_0x00010be9e660(param_1,param_2,uVar4);
LAB_106d64c2c:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106d64c54; end: 106d64ee3; -[SCCommerceCatalogCollectionViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d64c54(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = param_1;
  func_0x00010be43940();
  if ((int)lVar5 == 0) {
    func_0x00010c0840e0(param_4);
    lVar5 = param_1;
    func_0x00010be45da0();
    if ((int)lVar5 != 0) {
      func_0x00010c09bd00(param_1);
    }
    lVar5 = (long)_DAT_11275d774;
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    uVar3 = param_4;
    func_0x00010c0840e0();
    _objc_release(uVar1);
    if (uVar3 < uVar2) {
      uVar3 = *(ulong *)(param_1 + lVar5);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_4);
      uVar2 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126b02c0;
      _objc_retain(uVar2);
      _objc_opt_class(puVar4);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126b02c8;
      if (((uVar3 & 1) == 0) || (uVar2 == 0)) {
        _objc_retain(uVar2);
        _objc_opt_class(puVar4);
        uVar3 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar4);
        _objc_release(uVar2);
        puVar4 = PTR_PTR_1126b02d8;
        if (((uVar3 & 1) == 0) || (uVar2 == 0)) {
          _objc_retain(uVar2);
          _objc_opt_class(puVar4);
          uVar3 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar4);
          _objc_release(uVar2);
          puVar4 = PTR_PTR_1126b02e0;
          if (((uVar3 & 1) == 0) || (uVar2 == 0)) {
            _objc_retain(uVar2);
            _objc_opt_class(puVar4);
            uVar3 = uVar2;
            _objc_opt_isKindOfClass(uVar2,puVar4);
            _objc_release(uVar2);
            lVar5 = 0;
            if (((uVar3 & 1) != 0) && (uVar2 != 0)) {
              func_0x00010be6fb60(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = param_1;
            }
          }
          else {
            func_0x00010be6fb80(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_1;
          }
        }
        else {
          func_0x00010bec3e40(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
        }
      }
      else {
        func_0x00010be82ba0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
      }
      _objc_release(uVar2);
      param_1 = lVar5;
    }
    else {
      func_0x00010be82ba0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010be35140(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106d64ee4; end: 106d64fef; -[SCCommerceCatalogCollectionViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d64ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010c0720c0(param_4,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275d778);
    puVar1 = PTR_PTR_1126d25f8;
    _objc_opt_class(PTR_PTR_1126d25f8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e120(uVar4,param_2,param_4,puVar1,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar2 = param_5;
    func_0x00010c1554e0();
    if (lVar2 == 1) {
      ppuVar3 = *(undefined ***)(param_1 + _DAT_11275d79c);
      _objc_retain(ppuVar3);
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    func_0x00010c216240(uVar4,param_2,ppuVar3);
    _objc_release(ppuVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106d64ff0; end: 106d6513b; -[SCCommerceCatalogCollectionViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d64ff0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be43940(param_1,param_2,param_5);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + (long)_DAT_11275d774);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar1 = param_1;
      func_0x00010be45fc0(param_1,param_2,param_5);
      uVar5 = *(ulong *)(param_1 + (long)_DAT_11275d7b0);
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      *(ulong *)(param_1 + (long)_DAT_11275d7b0) = uVar1;
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11275d790);
      lVar3 = param_5;
      func_0x00010c0840e0(param_5);
      func_0x00010c288cc0(uVar6,param_2,lVar3 + 1);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010be37d80(param_1,param_2,param_4,param_3,param_5,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (uVar1 != 0) {
        func_0x00010c251400(*(undefined8 *)(param_1 + (long)_DAT_11275d794),param_2,uVar1);
      }
      _objc_release(uVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d6513c; end: 106d6529b; -[SCCommerceCatalogCollectionViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6513c(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long in_x4;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(in_x4);
  uVar4 = param_1;
  func_0x00010be43940();
  if ((uVar4 & 1) == 0) {
    lVar8 = (long)_DAT_11275d774;
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + lVar8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      lVar2 = in_x4;
      func_0x00010c0840e0();
      _objc_release(uVar3);
      if (lVar2 + 1U <= uVar4) {
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0(in_x4);
        uVar3 = uVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar5 = PTR_PTR_1126b02c0;
        _objc_opt_class(PTR_PTR_1126b02c0);
        uVar6 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar5);
        uVar4 = uVar3;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar3);
        if (uVar4 != 0) {
          uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11275d794);
          func_0x00010c115e60(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf95940(uVar7);
          _objc_release(uVar3);
        }
        _objc_release(uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 106d6529c; end: 106d6529f; -[SCCommerceCatalogCollectionViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_106d6529c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImpressionTracking_112594000);
  return;
}



/* Entry: 106d652a0; end: 106d65397; -[SCCommerceCatalogCollectionViewController _heroCellForViewModel:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d652a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d25d8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d778);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e0c0(uVar2,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c103ec0(uVar2,param_2,param_3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0840e0();
  _objc_release(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e855d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d65398; end: 106d654cf; -[SCCommerceCatalogCollectionViewController _productCellForViewModel:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d65398(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0960;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d778);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e0c0(uVar2,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c103f20(uVar2,param_2,param_3,*(undefined8 *)(param_1 + _DAT_11275d780),
                      *(undefined8 *)(param_1 + _DAT_11275d7ac));
  _objc_release(param_3);
  func_0x00010c18b5e0(uVar2,param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    func_0x00010c160fc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e855f8);
  }
  else {
    func_0x00010c0840e0();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110db4098);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d654d0; end: 106d655f3; -[SCCommerceCatalogCollectionViewController _storeCellForViewModel:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d654d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d25e0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d778);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e0c0(uVar2,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  param_1 = param_1 + _DAT_11275d77c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c103f40(uVar2,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0840e0();
  _objc_release(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e85618);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d655f4; end: 106d6567b; -[SCCommerceCatalogCollectionViewController _paginationLoadingCellForViewModel:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d655f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d25e8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d778);
  _objc_retain(param_4);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e0c0(uVar2,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d6567c; end: 106d65777; -[SCCommerceCatalogCollectionViewController _paginationErrorCellForViewModel:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6567c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d25f0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11275d778);
  _objc_retain(param_4);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e0c0(uVar5,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d774);
  func_0x00010c084fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  uVar4 = uVar2;
  func_0x00010c0dfd40(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c18b5e0(uVar5,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106d65778; end: 106d65797; -[SCCommerceCatalogCollectionViewController _isSectionForHero:] */

bool FUN_106d65778(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c1554e0(param_3);
  return param_3 == 0;
}



/* Entry: 106d65798; end: 106d657b7; -[SCCommerceCatalogCollectionViewController _isSectionForProducts:] */

bool FUN_106d65798(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c1554e0(param_3);
  return param_3 == 1;
}



/* Entry: 106d657b8; end: 106d65acb; -[SCCommerceCatalogCollectionViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d657b8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be43940();
  if ((uVar1 & 1) != 0) goto LAB_106d65aac;
  lVar7 = (long)_DAT_11275d774;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  uVar3 = param_4;
  func_0x00010c0840e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) goto LAB_106d65aac;
  uVar3 = *(ulong *)(param_1 + lVar7);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0(param_4);
  uVar1 = uVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b02c0;
  _objc_retain(uVar1);
  _objc_opt_class(puVar4);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar4);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b02c8;
  if (((uVar3 & 1) == 0) || (uVar1 == 0)) {
    _objc_retain(uVar1);
    _objc_opt_class(puVar4);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    _objc_release(uVar1);
    if (((uVar3 & 1) != 0) && (uVar1 != 0)) {
      uVar3 = param_1 + (long)_DAT_11275d784;
      _objc_loadWeakRetained(uVar3);
      puVar4 = PTR_PTR_1126b02c8;
      _objc_retain(uVar1);
      _objc_opt_class(puVar4);
      uVar5 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar4);
      uVar2 = uVar1;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar1);
      uVar5 = uVar2;
      func_0x00010beeecc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar3);
      _objc_release(param_1);
      _objc_release(uVar5);
      goto LAB_106d65a9c;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11275d790);
    _objc_retain(uVar1);
    func_0x00010be45fc0(param_1);
    func_0x00010be45ba0(param_1);
    func_0x00010be45d80(param_1);
    uVar3 = uVar1;
    func_0x00010c115e60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befabe0(uVar6);
    _objc_release(uVar3);
    lVar7 = param_1 + (long)_DAT_11275d784;
    _objc_loadWeakRetained(lVar7);
    uVar3 = uVar1;
    func_0x00010beeecc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(lVar7);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar7);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11275d794);
    uVar3 = uVar1;
    func_0x00010c115e60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf51020(uVar6);
LAB_106d65a9c:
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_106d65aac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d65acc; end: 106d65acf; -[SCCommerceCatalogCollectionViewController didTapRetryForSCCommerceCatalogPaginationErrorCollectionViewCell:] */

void FUN_106d65acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadNextPageIfNeeded_112604950);
  return;
}



/* Entry: 106d65ad0; end: 106d65e03; -[SCCommerceCatalogCollectionViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106d65ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_160;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x106d65e9c;
      puStack_90 = &UNK_110841fb0;
      ppuVar2 = &puStack_a8;
      _objc_copyWeak(auStack_80,auStack_48);
      _objc_retain(param_5);
      uStack_88 = param_5;
      func_0x000100162d98("APPSTORE",&puStack_a8);
      uVar1 = uStack_88;
      goto LAB_106d65c70;
    }
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x106d65f34;
      puStack_c0 = &UNK_110841fb0;
      ppuVar2 = &puStack_d8;
      _objc_copyWeak(auStack_b0,auStack_48);
      _objc_retain(param_5);
      uStack_b8 = param_5;
      func_0x000100162d98("APPSTORE",&puStack_d8);
      uVar1 = uStack_b8;
      goto LAB_106d65c70;
    }
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar1 == 0) goto LAB_106d65c7c;
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        uStack_150 = 0x106d660e4;
        puStack_148 = &UNK_1108434b0;
        _objc_copyWeak(auStack_140,auStack_48);
      }
      else {
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_106d660b4;
        puStack_120 = &UNK_1108434b0;
        ppuVar2 = &puStack_138;
        _objc_copyWeak(auStack_118,auStack_48);
      }
      func_0x000100162d98("APPSTORE",ppuVar2);
      ppuVar2 = ppuVar2 + 4;
    }
    else {
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      uStack_100 = 0x106d65fcc;
      puStack_f8 = &UNK_110848218;
      uStack_f0 = param_1;
      _objc_copyWeak(&puStack_e0,auStack_48);
      _objc_retain(param_5);
      uStack_e8 = param_5;
      func_0x000100162d98("APPSTORE",&puStack_110);
      _objc_release(uStack_e8);
      ppuVar2 = &puStack_e0;
    }
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106d65e04;
    puStack_60 = &UNK_110841fb0;
    ppuVar2 = &puStack_78;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_78);
    uVar1 = uStack_58;
LAB_106d65c70:
    _objc_release(uVar1);
    ppuVar2 = ppuVar2 + 5;
  }
  _objc_destroyWeak(ppuVar2);
LAB_106d65c7c:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d65e04; end: 106d660b3;  */

void FUN_106d65e04(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010be2d960(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d660b4; end: 106d66113;  */

void FUN_106d660b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d66114; end: 106d6633f; -[SCCommerceCatalogCollectionViewController _handlePageItemsLoadedWithAddedIndices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66114(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bea34c0(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010c067fc0(*(undefined8 *)(lVar9 * 8));
      func_0x00010bfed020(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  lVar9 = *(long *)(param_1 + _DAT_11275d774);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf529e0();
  lVar8 = (long)_DAT_11275d778;
  lVar5 = *(long *)(param_1 + lVar8);
  func_0x00010c0deec0();
  _objc_release(lVar9);
  if (lVar2 == lVar4 - lVar5) {
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0f8420(uVar7);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be8a840(param_1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c066a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11275d778),
             PTR_s_insertItemsAtIndexPaths__1125f74a0,*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106d66340; end: 106d66353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275d778),
             PTR_s_insertItemsAtIndexPaths__1125f74a0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d66354; end: 106d66577; -[SCCommerceCatalogCollectionViewController _handlePageFinalItemsLoadedWithRemovedIndices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66354(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010c067fc0(*(undefined8 *)(lVar9 * 8));
      func_0x00010bfed020(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  lVar8 = (long)_DAT_11275d778;
  lVar9 = *(long *)(param_1 + lVar8);
  func_0x00010c0deec0();
  lVar4 = *(long *)(param_1 + _DAT_11275d774);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar2 == lVar9 - lVar5) {
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0f8420(uVar7);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be8a840(param_1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11275d778),
             PTR_s_deleteItemsAtIndexPaths__1125b89e8,*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106d66578; end: 106d6658b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275d778),
             PTR_s_deleteItemsAtIndexPaths__1125b89e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d6658c; end: 106d667cb; -[SCCommerceCatalogCollectionViewController _handlePageItemsLoadingUpdatedWithChangedIndices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6658c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *unaff_x23;
  undefined8 uVar16;
  long unaff_x24;
  long lVar17;
  undefined **unaff_x25;
  long lVar18;
  long unaff_x26;
  long lVar19;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + _DAT_11275d774);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  ppuVar15 = (undefined **)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    lVar13 = param_3;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      unaff_x24 = *plStack_120;
      unaff_x25 = &PTR_PTR_1126b0000;
      do {
        unaff_x26 = 0;
        do {
          if (*plStack_120 != unaff_x24) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010c067fc0(*(undefined8 *)(lStack_128 + unaff_x26 * 8));
          func_0x00010bfed020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(unaff_x23);
          unaff_x26 = unaff_x26 + 1;
        } while (lVar13 != unaff_x26);
        lVar13 = param_3;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(param_3);
    _objc_initWeak(auStack_138,param_1);
    param_1 = *(long *)(param_1 + _DAT_11275d778);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_106d667cc;
    puStack_150 = &UNK_110841fb0;
    _objc_retain(puVar2);
    ppuVar15 = &puStack_168;
    puStack_148 = puVar2;
    _objc_copyWeak(auStack_140,auStack_138);
    func_0x00010c0f8420(param_1);
    _objc_destroyWeak(auStack_140);
    _objc_release(puStack_148);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar15 + 5);
  _objc_destroyWeak(auStack_138);
  lVar13 = param_3;
  __Unwind_Resume();
  puVar12 = &uStack_290;
  pcStack_178 = FUN_106d667cc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lVar14 = *(long *)(lVar13 + 0x20);
  lStack_1c0 = unaff_x26;
  ppuStack_1b8 = unaff_x25;
  lStack_1b0 = unaff_x24;
  puStack_1a8 = unaff_x23;
  ppuStack_1a0 = ppuVar15;
  lStack_198 = param_1;
  puStack_190 = puVar2;
  lStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(lVar14);
  lVar19 = lVar14;
  func_0x00010bf52a60();
  if (lVar19 != 0) {
    lVar17 = *plStack_280;
    do {
      lVar18 = 0;
      do {
        if (*plStack_280 != lVar17) {
          _objc_enumerationMutation(lVar14);
        }
        lVar4 = lVar13 + 0x28;
        _objc_loadWeakRetained();
        func_0x00010bed4ee0();
        _objc_release(lVar4);
        lVar18 = lVar18 + 1;
      } while (lVar19 != lVar18);
      lVar19 = lVar14;
      puVar12 = &uStack_290;
      func_0x00010bf52a60();
    } while (lVar19 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  lVar19 = (long)_DAT_11275d778;
  uVar5 = *(ulong *)(lVar14 + lVar19);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010010fab4();
  uVar1 = uVar5;
  if ((int)uVar6 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  lVar17 = (long)_DAT_11275d774;
  puVar7 = *(undefined1 **)(lVar14 + lVar17);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  puVar9 = (undefined1 *)puVar12;
  func_0x00010c0840e0();
  uVar16 = 0;
  if (puVar9 < puVar8) {
    uVar10 = *(undefined8 *)(lVar14 + lVar17);
    func_0x00010c084fc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(puVar12);
    uVar16 = uVar10;
    func_0x00010c0dfd40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
  }
  _objc_release(puVar7);
  if (uVar1 != 0) {
    uVar6 = uVar5;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar16;
    _objc_opt_class(uVar16);
    uVar11 = uVar6;
    _objc_opt_isKindOfClass(uVar6,uVar10);
    _objc_release(uVar6);
    if ((uVar11 & 1) != 0) {
      func_0x00010c2226c0(uVar5);
      goto LAB_106d66a68;
    }
  }
  uVar10 = *(undefined8 *)(lVar14 + lVar19);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar10);
  _objc_release(puVar3);
LAB_106d66a68:
  _objc_release(uVar16);
  _objc_release(uVar1);
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be2d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106d667cc; end: 106d668df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d667cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  lVar12 = lVar13;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar15 = *plStack_110;
    do {
      lVar16 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        lVar2 = param_1 + 0x28;
        _objc_loadWeakRetained();
        func_0x00010bed4ee0();
        _objc_release(lVar2);
        lVar16 = lVar16 + 1;
      } while (lVar12 != lVar16);
      lVar12 = lVar13;
      puVar11 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  lVar15 = (long)_DAT_11275d778;
  uVar3 = *(ulong *)(lVar13 + lVar15);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar16 = (long)_DAT_11275d774;
  puVar5 = *(undefined1 **)(lVar13 + lVar16);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar7 = (undefined1 *)puVar11;
  func_0x00010c0840e0();
  uVar14 = 0;
  if (puVar7 < puVar6) {
    uVar8 = *(undefined8 *)(lVar13 + lVar16);
    func_0x00010c084fc0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(puVar11);
    uVar14 = uVar8;
    func_0x00010c0dfd40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  _objc_release(puVar5);
  if (uVar1 != 0) {
    uVar4 = uVar3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    _objc_opt_class(uVar14);
    uVar9 = uVar4;
    _objc_opt_isKindOfClass(uVar4,uVar8);
    _objc_release(uVar4);
    if ((uVar9 & 1) != 0) {
      func_0x00010c2226c0(uVar3);
      goto LAB_106d66a68;
    }
  }
  uVar8 = *(undefined8 *)(lVar13 + lVar15);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar8);
  _objc_release(puVar10);
LAB_106d66a68:
  _objc_release(uVar14);
  _objc_release(uVar1);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be2d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106d668e0; end: 106d66abb; -[SCCommerceCatalogCollectionViewController _updateCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d668e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11275d778;
  uVar2 = *(ulong *)(param_1 + lVar10);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar11 = (long)_DAT_11275d774;
  uVar4 = *(ulong *)(param_1 + lVar11);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf529e0();
  uVar5 = param_3;
  func_0x00010c0840e0();
  uVar9 = 0;
  if (uVar5 < uVar3) {
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c084fc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_3);
    uVar9 = uVar6;
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar3 = uVar2;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    _objc_opt_class(uVar9);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,uVar6);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      func_0x00010c2226c0(uVar2);
      goto LAB_106d66a68;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar6);
  _objc_release(puVar7);
LAB_106d66a68:
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be2d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106d66abc; end: 106d66abf; -[SCCommerceCatalogCollectionViewController _handlePageItemsLoadingFailedWithChangedIndices:] */

void FUN_106d66abc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePageItemsLoadingUpdatedWi_112569008);
  return;
}



/* Entry: 106d66ac0; end: 106d66cc3; -[SCCommerceCatalogCollectionViewController _updateImpressionTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66ac0(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5,undefined *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11275d794;
  puVar11 = param_1;
  if (*(long *)(param_1 + lVar10) != 0) {
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_11275d778;
    lVar1 = *(long *)(param_1 + lVar14);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010bf529e0();
    if (lVar12 != 0) {
      puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(lVar1);
      param_3 = &uStack_130;
      param_5 = 0x10;
      lVar12 = lVar1;
      func_0x00010bf52a60();
      if (lVar12 != 0) {
        lVar15 = *plStack_120;
        do {
          lVar13 = 0;
          do {
            if (*plStack_120 != lVar15) {
              _objc_enumerationMutation(lVar1);
            }
            uVar3 = *(undefined8 *)(param_1 + lVar14);
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_1;
            param_6 = puVar11;
            func_0x00010be37d80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            if (puVar4 != (undefined *)0x0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(puVar4);
            lVar13 = lVar13 + 1;
          } while (lVar12 != lVar13);
          param_3 = &uStack_130;
          param_5 = 0x10;
          lVar12 = lVar1;
          func_0x00010bf52a60();
        } while (lVar12 != 0);
      }
      _objc_release(lVar1);
      puVar5 = puVar2;
      func_0x00010bf529e0();
      if (puVar5 != (undefined8 *)0x0) {
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        puVar5 = puVar2;
        func_0x00010bf51e00();
        param_3 = puVar5;
        func_0x00010c28b440(uVar3);
        _objc_release(puVar5);
      }
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR_PTR_1126b0960;
  _objc_opt_class(PTR_PTR_1126b0960);
  puVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar2 = param_3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_retain(puVar2);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c23c400();
    lVar12 = (long)_DAT_11275d774;
    uVar6 = *(ulong *)(puVar11 + lVar12);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    lVar10 = param_5;
    func_0x00010c0840e0();
    _objc_release(uVar6);
    if (lVar10 + 1U <= uVar7) {
      uVar7 = *(ulong *)(puVar11 + lVar12);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_5);
      uVar6 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar11 = PTR_PTR_1126b02c0;
      _objc_retain(uVar6);
      _objc_opt_class(puVar11);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar11);
      uVar7 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar6);
      if (uVar7 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR_PTR_1126b09b8;
        _objc_alloc();
        uVar8 = uVar6;
        func_0x00010c115e60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0();
        uVar9 = uVar6;
        func_0x00010c278ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a6e0(puVar11);
        _objc_release(uVar9);
        _objc_release(uVar8);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      goto LAB_106d66ed8;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_106d66ed8:
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106d66cc4; end: 106d66f1b; -[SCCommerceCatalogCollectionViewController _impressionViewItemForCell:collectionView:indexPath:startTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66cc4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar7 = PTR_PTR_1126b0960;
  _objc_opt_class(PTR_PTR_1126b0960);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar7);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c23c400();
    lVar8 = (long)_DAT_11275d774;
    uVar2 = *(ulong *)(param_1 + lVar8);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf529e0();
    lVar3 = param_5;
    func_0x00010c0840e0();
    _objc_release(uVar2);
    if (lVar3 + 1U <= uVar4) {
      uVar4 = *(ulong *)(param_1 + lVar8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_5);
      uVar2 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126b02c0;
      _objc_retain(uVar2);
      _objc_opt_class(puVar7);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar7);
      uVar4 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar2);
      if (uVar4 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126b09b8;
        _objc_alloc();
        uVar5 = uVar2;
        func_0x00010c115e60(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0();
        uVar6 = uVar2;
        func_0x00010c278ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a6e0(puVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar4);
      _objc_release(uVar2);
      goto LAB_106d66ed8;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106d66ed8:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d66f1c; end: 106d66fbb; -[SCCommerceCatalogCollectionViewController _logButtonTapWithCurrentHeartState:trackingId:productId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66f1c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 < 5) {
    uVar1 = *(undefined8 *)(&UNK_10ddedfc0 + param_3 * 8);
  }
  else {
    uVar1 = 0x27;
  }
  lVar3 = (long)_DAT_11275d7a8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_5);
  func_0x00010c219300(uVar2,param_2,param_4);
  func_0x00010c0a1d60(*(undefined8 *)(param_1 + lVar3),param_2,uVar1,0xffffffffffffffff,
                      *(undefined8 *)(param_1 + _DAT_11275d7a0),0,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d66fbc; end: 106d66fcb; -[SCCommerceCatalogCollectionViewController maxRowScrolled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d66fbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7b0);
}



/* Entry: 106d66fcc; end: 106d66fdb; -[SCCommerceCatalogCollectionViewController paginationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d66fcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d774);
}



/* Entry: 106d66fdc; end: 106d66feb; -[SCCommerceCatalogCollectionViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d66fdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7c0);
}



/* Entry: 106d66fec; end: 106d67133; -[SCCommerceCatalogCollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d66fec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d7c0,0);
  _objc_storeStrong(param_1 + _DAT_11275d774,0);
  _objc_storeStrong(param_1 + _DAT_11275d7ac,0);
  _objc_storeStrong(param_1 + _DAT_11275d7bc,0);
  _objc_storeStrong(param_1 + _DAT_11275d7a8,0);
  _objc_storeStrong(param_1 + _DAT_11275d7a4,0);
  _objc_storeStrong(param_1 + _DAT_11275d79c,0);
  _objc_storeStrong(param_1 + _DAT_11275d798,0);
  _objc_storeStrong(param_1 + _DAT_11275d7c4,0);
  _objc_storeStrong(param_1 + _DAT_11275d778,0);
  _objc_storeStrong(param_1 + _DAT_11275d7b8,0);
  _objc_storeStrong(param_1 + _DAT_11275d7b4,0);
  _objc_storeStrong(param_1 + _DAT_11275d794,0);
  _objc_storeStrong(param_1 + _DAT_11275d790,0);
  _objc_storeStrong(param_1 + _DAT_11275d788,0);
  _objc_storeStrong(param_1 + _DAT_11275d78c,0);
  _objc_destroyWeak(param_1 + _DAT_11275d784);
  _objc_storeStrong(param_1 + _DAT_11275d780,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d77c);
  return;
}



/* Entry: 106d67134; end: 106d671bb; -[SCCommercePagingActionDataModel initWithCoder:] */

undefined1 * FUN_106d67134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d671bc; end: 106d6722f; -[SCCommercePagingActionDataModel initWithPage:] */

undefined1 * FUN_106d671bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6ac0;
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



/* Entry: 106d67230; end: 106d67253; -[SCCommercePagingActionDataModel copyWithZone:] */

undefined8 FUN_106d67230(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d67254; end: 106d6726b; -[SCCommercePagingActionDataModel encodeWithCoder:] */

void FUN_106d67254(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e85878);
  return;
}



/* Entry: 106d6726c; end: 106d67273; -[SCCommercePagingActionDataModel page] */

undefined8 FUN_106d6726c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d67274; end: 106d6727f; -[SCCommercePagingActionDataModel .cxx_destruct] */

void FUN_106d67274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d67280; end: 106d67343; -[SCCommerceFavoritesActionDataModel initWithCoder:] */

undefined1 * FUN_106d67280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6ac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d67344; end: 106d673ef; -[SCCommerceFavoritesActionDataModel initWithProductId:productImage:trackingId:] */

undefined1 *
FUN_106d67344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6ac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106d673f0; end: 106d67413; -[SCCommerceFavoritesActionDataModel copyWithZone:] */

undefined8 FUN_106d673f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d67414; end: 106d67487; -[SCCommerceFavoritesActionDataModel encodeWithCoder:] */

void FUN_106d67414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e85898);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e858b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e858d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d67488; end: 106d6748f; -[SCCommerceFavoritesActionDataModel productId] */

undefined8 FUN_106d67488(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d67490; end: 106d67497; -[SCCommerceFavoritesActionDataModel productImage] */

undefined8 FUN_106d67490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d67498; end: 106d6749f; -[SCCommerceFavoritesActionDataModel trackingId] */

undefined8 FUN_106d67498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d674a0; end: 106d674cf; -[SCCommerceFavoritesActionDataModel .cxx_destruct] */

void FUN_106d674a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d674d0; end: 106d67573; -[SCCommerceFavoritesServices initWithFavoritesCoordinator:composerFavoritesService:] */

undefined1 *
FUN_106d674d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6ad0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d67574; end: 106d6757b; -[SCCommerceFavoritesServices favoritesCoordinator] */

undefined8 FUN_106d67574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d6757c; end: 106d67583; -[SCCommerceFavoritesServices composerFavoritesService] */

undefined8 FUN_106d6757c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d67584; end: 106d675b3; -[SCCommerceFavoritesServices .cxx_destruct] */

void FUN_106d67584(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d675b4; end: 106d675e7; -[SCCCommerceDynamicPageCommerceScreenshopPageContext init] */

void FUN_106d675b4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6ad8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106d675e8; end: 106d675fb; +[SCCCommerceDynamicPageCommerceScreenshopPageContext valdiMarshallableObjectDescriptor] */

void FUN_106d675e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109782e8;
  param_1[1] = &PTR_DAT_1109784b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106d675fc; end: 106d676a7; -[SCCCommerceDynamicPageCommerceScreenshopScanHorizontalViewContext initWithShowcaseGrpcService:blizzardLogger:nativeNavigator:favoritesService:commerceSessionService:appVersion:showcaseScanContext:commerceTweaksObservable:pageLoaded:] */

void FUN_106d675fc(void)

{
  undefined8 unaff_x27;
  
  func_0x000106d67aac();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x000106d67b20();
  func_0x000106d67b44();
  _objc_retainBlock();
  func_0x000106d67a7c(PTR_PTR_1126f6ae0);
  func_0x000106d67b38();
  _objc_release();
  _objc_release();
  func_0x000106d67b30();
  _objc_release();
  func_0x000106d67b28();
  func_0x000106d67b10();
  func_0x000106d67b18();
  _objc_release(unaff_x27);
  return;
}



/* Entry: 106d676a8; end: 106d676cb; +[SCCCommerceDynamicPageCommerceScreenshopScanHorizontalViewContext valdiMarshallableObjectDescriptor] */

void FUN_106d676a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110978550;
  param_1[1] = &PTR_DAT_110978670;
  param_1[2] = &PTR_s_ob_v_110978520;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106d676cc; end: 106d676f3;  */

undefined8 FUN_106d676cc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}


