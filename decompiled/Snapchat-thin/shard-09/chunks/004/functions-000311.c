/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106da797c; end: 106da7983; -[SCMemoriesEmptyStateHeaderView _primaryButtonTapped] */

void FUN_106da797c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd73f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__buttonTapped__112553698,0);
  return;
}



/* Entry: 106da7984; end: 106da798b; -[SCMemoriesEmptyStateHeaderView _urlButtonTapped] */

void FUN_106da7984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd73f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__buttonTapped__112553698,1);
  return;
}



/* Entry: 106da798c; end: 106da7a63; -[SCMemoriesEmptyStateHeaderView _buttonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da798c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d2880;
  _objc_alloc(PTR_PTR_1126d2880);
  lVar5 = (long)_DAT_11275e238;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28f9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0aa0(puVar1,param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275e240);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29e660();
  func_0x00010bfd0000(uVar4,param_2,uVar3,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106da7a64; end: 106da7b0f; -[SCMemoriesEmptyStateHeaderView _accessibilityIdWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da7a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275e238);
  _objc_retain(param_3);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c29e660();
  FUN_106da4350();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106da7b10; end: 106da7b9b; -[SCMemoriesEmptyStateHeaderView setDataProvider:actionHander:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da7b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275e238);
  *(undefined8 *)(param_1 + _DAT_11275e238) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275e240);
  *(undefined8 *)(param_1 + _DAT_11275e240) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010be15ce0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bead170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupImageObserver_112588e00);
  return;
}



/* Entry: 106da7b9c; end: 106da7bbf; -[SCMemoriesEmptyStateHeaderView totalHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106da7b9c(long param_1)

{
  undefined8 in_d3;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11275e214));
  return in_d3;
}



/* Entry: 106da7bc0; end: 106da7c9f; -[SCMemoriesEmptyStateHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106da7bc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275e23c,0);
  _objc_storeStrong(param_1 + _DAT_11275e234,0);
  _objc_storeStrong(param_1 + _DAT_11275e230,0);
  _objc_storeStrong(param_1 + _DAT_11275e22c,0);
  _objc_storeStrong(param_1 + _DAT_11275e21c,0);
  _objc_storeStrong(param_1 + _DAT_11275e228,0);
  _objc_storeStrong(param_1 + _DAT_11275e224,0);
  _objc_storeStrong(param_1 + _DAT_11275e220,0);
  _objc_storeStrong(param_1 + _DAT_11275e218,0);
  _objc_storeStrong(param_1 + _DAT_11275e214,0);
  _objc_storeStrong(param_1 + _DAT_11275e240,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275e238,0);
  return;
}



/* Entry: 106da7ca0; end: 106da7eaf;  */

void FUN_106da7ca0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e86398;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e86398,
                      &PTR____CFConstantStringClassReference_110e863b8,0);
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



/* Entry: 106da7eb0; end: 106da8033; -[SCMemoriesEmptyStateViewModel initWithViewType:bitmojiId:title:descString:buttonTitle:urlButtonTitle:urlString:isLoading:] */

undefined1 *
FUN_106da7eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f6df0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106da8034; end: 106da803b; -[SCMemoriesEmptyStateViewModel viewType] */

undefined8 FUN_106da8034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106da803c; end: 106da8043; -[SCMemoriesEmptyStateViewModel bitmojiId] */

undefined8 FUN_106da803c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106da8044; end: 106da804b; -[SCMemoriesEmptyStateViewModel title] */

undefined8 FUN_106da8044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106da804c; end: 106da8053; -[SCMemoriesEmptyStateViewModel descString] */

undefined8 FUN_106da804c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106da8054; end: 106da805b; -[SCMemoriesEmptyStateViewModel buttonTitle] */

undefined8 FUN_106da8054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106da805c; end: 106da8063; -[SCMemoriesEmptyStateViewModel urlButtonTitle] */

undefined8 FUN_106da805c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106da8064; end: 106da806b; -[SCMemoriesEmptyStateViewModel urlString] */

undefined8 FUN_106da8064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106da806c; end: 106da8073; -[SCMemoriesEmptyStateViewModel isLoading] */

undefined1 FUN_106da806c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106da8074; end: 106da80d3; -[SCMemoriesEmptyStateViewModel .cxx_destruct] */

void FUN_106da8074(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106da80d4; end: 106da815b; -[SCMemoriesEmptyStateViewActionModel initWithActionType:urlString:] */

undefined1 *
FUN_106da80d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6df8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106da815c; end: 106da8163; -[SCMemoriesEmptyStateViewActionModel actionType] */

undefined8 FUN_106da815c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106da8164; end: 106da816b; -[SCMemoriesEmptyStateViewActionModel urlString] */

undefined8 FUN_106da8164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106da816c; end: 106da8177; -[SCMemoriesEmptyStateViewActionModel .cxx_destruct] */

void FUN_106da816c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106da8178; end: 106da82e7; -[SCMemoriesInlineSearchDataSource initWithGallerySearch:memoriesMergedDataSource:experimentService:facetSearch:semanticSearchResolver:] */

undefined1 *
FUN_106da8178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6e00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2888;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2890;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106da82e8; end: 106da82eb; -[SCMemoriesInlineSearchDataSource currentSemanticSearchGeneration] */

void FUN_106da82e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_semanticSearchGeneration_1126346a8);
  return;
}



/* Entry: 106da82ec; end: 106da832b; -[SCMemoriesInlineSearchDataSource isSearching] */

bool FUN_106da82ec(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010bf529e0(lVar2);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106da832c; end: 106da8353; -[SCMemoriesInlineSearchDataSource currentQuery] */

void FUN_106da832c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106da8354; end: 106da836b; -[SCMemoriesInlineSearchDataSource selectedFacetKeys] */

void FUN_106da8354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_11097b310);
  return;
}



/* Entry: 106da836c; end: 106da8393; -[SCMemoriesInlineSearchDataSource setSemanticSearchLoading:] */

void FUN_106da836c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((uint)*(byte *)(param_1 + 0x98) != (uint)param_3) {
    *(char *)(param_1 + 0x98) = (char)param_3;
    lVar1 = *(long *)(param_1 + 0xa8);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106da838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
      return;
    }
  }
  return;
}



/* Entry: 106da8394; end: 106da851f; -[SCMemoriesInlineSearchDataSource updateQueryString:didSelectResultTitle:] */

void FUN_106da8394(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar4 = uVar3;
  func_0x00010c08fa60();
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar3;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if ((uVar1 != 0 || *(long *)(param_1 + 8) != 0) &&
     (uVar3 = uVar1, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
    _objc_retain(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = uVar1;
    _objc_release(uVar5);
    func_0x00010bea36e0(param_1,param_2,param_4);
    uVar3 = param_1;
    func_0x00010beb7460();
    if ((uVar3 & 1) == 0) {
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _objc_release(uVar5);
      func_0x00010be56f20(param_1);
      uVar3 = uVar1;
      func_0x00010c08fa60();
      if (uVar3 != 0) {
        func_0x00010be908a0(param_1,param_2,0);
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9980();
        _objc_release(uVar5);
        goto LAB_106da8508;
      }
    }
    else {
      uVar3 = param_1;
      func_0x00010c15b220(param_1);
      func_0x00010c1fbe20(param_1,param_2,uVar3 + 1);
      uVar3 = param_1;
      func_0x00010c07d540();
      if ((uVar3 & 1) != 0) goto LAB_106da8508;
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release(uVar5);
      func_0x00010be52940(param_1);
    }
    func_0x00010bedea00(param_1,param_2,0,0);
  }
LAB_106da8508:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106da8520; end: 106da8577; -[SCMemoriesInlineSearchDataSource updateSearchResults] */

void FUN_106da8520(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106da8578;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106da8578; end: 106da857f;  */

void FUN_106da8578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSearchResults_1125955e0);
  return;
}



/* Entry: 106da8580; end: 106da85e7; -[SCMemoriesInlineSearchDataSource _updateSearchResults] */

void FUN_106da8580(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c07d540();
  if ((int)lVar1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010beb7460();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be889f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshSemanticSearchResultsFro_11257fc18)
    ;
    return;
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be908b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestAndUpdateSearchResultsFr_112581bc8,1)
  ;
  return;
}



/* Entry: 106da85e8; end: 106da8647; -[SCMemoriesInlineSearchDataSource searchSuggestions] */

void FUN_106da85e8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010beb7460();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf00840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106da8648; end: 106da86f7; -[SCMemoriesInlineSearchDataSource facetSuggestionsForQuery:] */

void FUN_106da8648(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar3 = *(undefined **)(param_1 + 0x50);
    func_0x00010c2627c0(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106da86f8; end: 106da8887; -[SCMemoriesInlineSearchDataSource submitSemanticSearchQuery:] */

void FUN_106da86f8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c25d0a0(ppuVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010bf9f480();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c08fa60();
  if (((ppuVar4 != (undefined **)0x0) ||
      (ppuVar4 = ppuVar2, func_0x00010bf529e0(), ppuVar4 != (undefined **)0x0)) &&
     (uVar7 = *(ulong *)(param_1 + 0x88), uVar7 != 0)) {
    lVar5 = param_1;
    func_0x00010c15b220(param_1);
    func_0x00010c0c1bc0(uVar7,param_2,ppuVar1,ppuVar2,lVar5);
    if ((uVar7 & 1) != 0) goto LAB_106da8860;
  }
  ppuVar4 = param_3;
  func_0x00010bf9f480();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  *(undefined ***)(param_1 + 0x60) = ppuVar4;
  _objc_release(uVar6);
  ppuVar4 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289060(param_1,param_2,ppuVar4,0);
  _objc_release(ppuVar4);
  lVar5 = param_1;
  func_0x00010c07d540();
  if ((int)lVar5 == 0) {
    func_0x00010bf3c080(param_1);
  }
  else {
    func_0x00010c1fbe40(param_1,param_2,1);
    func_0x00010be908a0(param_1,param_2,0);
  }
LAB_106da8860:
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da8888; end: 106da892b; -[SCMemoriesInlineSearchDataSource clearSemanticSearchState] */

void FUN_106da8888(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15b220();
  func_0x00010c1fbe20(param_1);
  func_0x00010c1fbe40(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  func_0x00010bea36e0(param_1);
  func_0x00010be52940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateResults_refetch__112595428,0,0);
  return;
}



/* Entry: 106da892c; end: 106da896b; -[SCMemoriesInlineSearchDataSource cancelInFlightSemanticSearch] */

void FUN_106da892c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c15b220();
  func_0x00010c1fbe20(param_1,param_2,lVar1 + 1);
  func_0x00010c1fbe40(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106da896c; end: 106da8b0f; -[SCMemoriesInlineSearchDataSource _requestAndUpdateSearchResultsFromRefetch:] */

void FUN_106da896c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010beb7460();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be908d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__requestAndUpdateSemanticSearchR_112581bd0,param_3);
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = (undefined1)param_3;
    uVar5 = uVar2;
    func_0x00010c1549c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    _objc_release(uVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106da8b10; end: 106da8d13;  */

void FUN_106da8b10(long param_1,ulong param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar4 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar2 != 0) && (param_2 == *(ulong *)(lVar2 + 0x28))) &&
     (uVar3 = param_2, func_0x00010c06e0e0(), (uVar3 & 1) == 0)) {
    cVar1 = *(char *)(lVar2 + 0x10);
    func_0x00010bedea00(lVar2);
    puVar5 = param_3;
    if (cVar1 == '\x01') {
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      _objc_retain(param_3);
      puVar6 = &uStack_1a0;
      puVar4 = param_3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        lVar8 = *plStack_190;
        do {
          do {
            if (*plStack_190 != lVar8) {
              _objc_enumerationMutation(param_3);
            }
            puVar4 = (undefined8 *)((long)puVar4 + -1);
          } while (puVar4 != (undefined8 *)0x0);
          puVar6 = &uStack_1a0;
          puVar4 = param_3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined8 *)0x0);
      }
      _objc_release(param_3);
      if ((*(byte *)(param_1 + 0x28) & 1) != 0) goto LAB_106da8cc4;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010be58540(lVar2);
    }
    else {
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      plStack_1d0 = (long *)0x0;
      _objc_retain(param_3);
      puVar6 = param_3;
      func_0x00010bf52a60();
      if (puVar6 != (undefined8 *)0x0) {
        lVar8 = *plStack_1d0;
        do {
          if (*plStack_1d0 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          puVar6 = (undefined8 *)((long)puVar6 + -1);
        } while ((puVar6 != (undefined8 *)0x0) ||
                (puVar6 = param_3, puVar4 = &uStack_1e0, func_0x00010bf52a60(),
                puVar6 != (undefined8 *)0x0));
      }
    }
    _objc_release(puVar5);
    puVar6 = puVar4;
  }
LAB_106da8cc4:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(puVar6);
    func_0x00010bef9980(uVar7);
    func_0x00010c0c8c00(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 106da8d14; end: 106da8d67; -[SCMemoriesInlineSearchDataSource addListener:] */

void FUN_106da8d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bef9980(uVar1,param_2,param_3);
  func_0x00010c0c8c00(param_3,param_2,param_1,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da8d68; end: 106da8d6f; -[SCMemoriesInlineSearchDataSource removeListener:] */

void FUN_106da8d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106da8d70; end: 106da8db7; -[SCMemoriesInlineSearchDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106da8d70(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d540();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010beb7460(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c289070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_updateQueryString_didSelectResul_11267fe40,*(undefined8 *)(param_1 + 8)
               ,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 106da8db8; end: 106da8e0b; -[SCMemoriesInlineSearchDataSource setSearchSessionLoggingCoordinatorIfNeeded:] */

void FUN_106da8db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    _objc_storeWeak(param_1 + 0x38,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da8e0c; end: 106da8e43; -[SCMemoriesInlineSearchDataSource _setDidSelectResultTitle:] */

void FUN_106da8e0c(long param_1,undefined8 param_2,byte param_3)

{
  if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    func_0x00010be523c0(param_1);
  }
  *(byte *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106da8e44; end: 106da8ef3; -[SCMemoriesInlineSearchDataSource beginSearchSession:] */

void FUN_106da8e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bea7060(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d640();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010beb7460();
  if (((int)lVar2 != 0) && ((*(byte *)(param_1 + 0x68) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    func_0x00010c1250e0(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x00010c1f8a60(param_1,param_2,param_3);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf17a80();
  _objc_release(lVar2);
  func_0x00010c0ac200(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da8ef4; end: 106da8f57; -[SCMemoriesInlineSearchDataSource endSearchSession] */

void FUN_106da8ef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf940a0();
  _objc_release(lVar1);
  func_0x00010c1fbe40(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be93a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSearchSession_112582828);
  return;
}



/* Entry: 106da8f58; end: 106da8ff3; -[SCMemoriesInlineSearchDataSource logSelectSearchResultWithSearchResultEntry:] */

void FUN_106da8f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      func_0x00010bea36e0(param_1,param_2,1);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58540(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7aec0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da8ff4; end: 106da908f; -[SCMemoriesInlineSearchDataSource logSelectSearchResultWithSearchResultSnap:] */

void FUN_106da8ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      func_0x00010bea36e0(param_1,param_2,1);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58540(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7af00();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da9090; end: 106da90db; -[SCMemoriesInlineSearchDataSource logPerformQueryAndUpdateSearchResultsInSession] */

void FUN_106da9090(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010beb7460();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010be3fee0(), (int)uVar1 != 0)) {
    func_0x00010be56f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be5a250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logUpdateSearchResultsInSession_112574230,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 106da90dc; end: 106da9173; -[SCMemoriesInlineSearchDataSource _updateResults:refetch:] */

void FUN_106da90dc(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  if ((param_4 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010beb7460();
    if ((uVar2 & 1) == 0) {
      func_0x00010be5a240(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
    }
    func_0x00010c0c8c00(*(undefined8 *)(param_1 + 0x20),param_2,param_1,
                        *(undefined8 *)(param_1 + 0x30));
    func_0x00010c1fbe40(param_1,param_2,0);
  }
  else {
    func_0x00010c0c8c00(*(undefined8 *)(param_1 + 0x20),param_2,param_1,
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106da9174; end: 106da91b3; -[SCMemoriesInlineSearchDataSource _shouldUseSemanticSearch] */

undefined8 FUN_106da9174(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d780();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106da91b4; end: 106da94ff; -[SCMemoriesInlineSearchDataSource _requestAndUpdateSemanticSearchResultsFromRefetch:] */

void FUN_106da91b4(undefined8 param_1,long param_2,undefined8 param_3,byte param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  ppuVar10 = *(undefined ***)(param_2 + 8);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar10);
  _objc_release(puVar2);
  ppuVar10 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar10 == (undefined **)0x0) {
    lVar3 = *(long *)(param_2 + 0x60);
    func_0x00010bf529e0();
    if (lVar3 == 0) goto LAB_106da94b4;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010bf51e00();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  ppuVar10 = ppuVar1;
  func_0x00010c08fa60();
  func_0x00010c15b220(param_2);
  func_0x00010c1fbe20(param_2);
  lVar3 = param_2;
  func_0x00010c15b220();
  if ((param_4 & 1) == 0) {
    func_0x00010c123a40(*(undefined8 *)(param_2 + 0x80));
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x90) = param_1;
    puVar2 = PTR_PTR_1126d2898;
    _objc_alloc();
    func_0x00010c03c500();
    uVar9 = *(undefined8 *)(param_2 + 0x88);
    *(undefined **)(param_2 + 0x88) = puVar2;
    _objc_release(uVar9);
  }
  uVar9 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar7 = *(long *)(param_2 + 8);
  func_0x00010c08fa60();
  uVar9 = uVar6;
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar9);
  puVar2 = PTR_PTR_1126ae790;
  lVar7 = param_2;
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_initWeak(auStack_68,param_2);
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar11);
  uVar8 = uVar11;
  func_0x00010c13a420(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(uVar4);
  _objc_retain(ppuVar1);
  lStack_80 = lVar3;
  _objc_retain(uVar11);
  _objc_retain(uVar9);
  uStack_78 = uVar5;
  bStack_70 = param_4;
  uStack_6f = ppuVar10 != (undefined **)0x0;
  func_0x00010c297260(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(ppuVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
LAB_106da94b4:
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106da9500; end: 106da950b;  */

void FUN_106da9500(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0876b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_labelForLanguageIdentifier__1125ff7b8,0);
  return;
}



/* Entry: 106da950c; end: 106da97df;  */

void FUN_106da950c(long param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  uint uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **unaff_x27;
  ulong uVar19;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar11 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar11 != 0) {
    if (param_3 == (undefined **)0x0) {
      lVar15 = *(long *)(param_1 + 0x48);
      lVar1 = lVar11;
      func_0x00010c15b220();
      if (lVar15 != lVar1) {
        param_4 = *(undefined ***)(param_1 + 0x20);
        param_5 = *(undefined **)(param_1 + 0x28);
        ppuVar9 = &PTR____CFConstantStringClassReference_110e86678;
        func_0x00010be585c0(lVar11);
        goto LAB_106da9768;
      }
      puVar14 = *(undefined **)(param_1 + 0x30);
      param_4 = *(undefined ***)(param_1 + 0x38);
      ppuVar9 = param_2;
      func_0x00010c11af60();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR____NSArray0__struct_11034ab48;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
        func_0x00010c154000();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = &puStack_70;
        param_4 = (undefined **)0x1;
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar2;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      uVar19 = (ulong)(puVar14 == (undefined *)0x0);
    }
    else {
      puVar14 = (undefined *)0x0;
      uVar19 = 2;
      puVar13 = PTR____NSArray0__struct_11034ab48;
    }
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      puVar2 = puVar14;
      func_0x00010c154000();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0c1c20();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      puVar16 = (undefined *)0x0;
    }
    _objc_initWeak(auStack_78,lVar11);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_106da97e0;
    puStack_d8 = &UNK_11097b3a0;
    _objc_copyWeak(auStack_a8,auStack_78);
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(param_3);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    ppuStack_d0 = param_3;
    _objc_retain(uVar17);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    uStack_c8 = uVar17;
    _objc_retain(uVar18);
    uStack_c0 = uVar18;
    _objc_retain(puVar14);
    uStack_80 = *(undefined2 *)(param_1 + 0x58);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    puStack_b8 = puVar14;
    uStack_90 = uVar19;
    puStack_88 = puVar16;
    _objc_retain(puVar13);
    puStack_b0 = puVar13;
    func_0x0001000d76cc("APPSTORE",&puStack_f0);
    _objc_release(puStack_b0);
    _objc_release(puStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(ppuStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar14);
    _objc_release(puVar13);
    unaff_x27 = &puStack_f0;
  }
LAB_106da9768:
  _objc_release(lVar11);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x48));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2 + 9;
  _objc_loadWeakRetained();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar12 = (undefined **)param_2[10];
    ppuVar5 = ppuVar4;
    func_0x00010c15b220();
    if (ppuVar12 == ppuVar5) {
      puVar13 = param_2[7];
      _objc_retain(puVar13);
      puVar14 = ppuVar4[0xe];
      ppuVar4[0xe] = puVar13;
      _objc_release(puVar14);
      if (((ulong)param_2[0xe] & 1) == 0) {
        func_0x00010c1239a0(ppuVar4[0x10]);
        if (0.0 < (double)ppuVar4[0x12]) {
          _CACurrentMediaTime();
          func_0x00010c123a20(ppuVar4[0x10]);
          ppuVar4[0x12] = (undefined *)0x0;
        }
        puVar14 = param_2[5];
        puVar13 = param_2[6];
        _objc_retain(puVar13);
        _objc_retain(puVar14);
        puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar13;
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar16;
        func_0x00010c08fa60();
        _objc_release(puVar16);
        _objc_release(puVar3);
        if (puVar6 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
        }
        _objc_retain(puVar14);
        param_5 = (undefined *)0x10;
        puVar3 = puVar14;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar14);
            }
            lVar7 = *(long *)((long)puVar16 * 8);
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar7;
            func_0x00010c09f000();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar15;
            func_0x00010c08fa60();
            _objc_release(lVar15);
            if (lVar8 == 0) {
              lVar15 = lVar7;
              func_0x00010c2bedc0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar15 != 0) {
                lVar8 = lVar7;
                func_0x00010c0d0e40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar15);
                if (lVar8 != 0) goto LAB_106da9a2c;
              }
              lVar15 = lVar7;
              func_0x00010c2bedc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar15 != 0) goto LAB_106da9a2c;
              lVar15 = lVar7;
              func_0x00010c0d0e40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar15 != 0) goto LAB_106da9a2c;
            }
            else {
LAB_106da9a2c:
              func_0x00010befa120(puVar2);
            }
            _objc_release(lVar7);
            puVar16 = puVar16 + 1;
          } while (puVar3 != puVar16);
          param_5 = (undefined *)0x10;
          puVar3 = puVar14;
          func_0x00010bf52a60();
        }
        _objc_release(puVar14);
        puVar3 = puVar2;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar14);
        _objc_release(puVar13);
        ppuVar9 = ppuVar4;
        func_0x00010be3fee0();
        if ((int)ppuVar9 != 0) {
          ppuVar9 = ppuVar4 + 7;
          _objc_loadWeakRetained();
          param_5 = param_2[0xd];
          func_0x00010bf783c0();
          _objc_release(ppuVar9);
        }
        if (param_2[0xc] == (undefined *)0x2) {
          puVar14 = ppuVar4[0x11];
          ppuVar4[0x11] = (undefined *)0x0;
          _objc_release(puVar14);
        }
        _objc_release(puVar3);
        uVar10 = (uint)*(byte *)(param_2 + 0xe);
      }
      else {
        uVar10 = 1;
      }
      ppuVar9 = (undefined **)param_2[8];
      param_4 = (undefined **)(ulong)(uVar10 & 1);
      func_0x00010bedea00(ppuVar4);
    }
    else if (param_2[4] == (undefined *)0x0) {
      param_4 = (undefined **)param_2[5];
      param_5 = param_2[6];
      ppuVar9 = &PTR____CFConstantStringClassReference_110e86698;
      func_0x00010be585c0(ppuVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ppuVar4 = param_4;
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    _objc_retain(param_5);
    _objc_retain(ppuVar9);
    puVar14 = param_5;
    func_0x00010c08fa60();
    if ((puVar14 == (undefined *)0x0) ||
       (ppuVar5 = ppuVar4, func_0x00010bf529e0(), ppuVar5 == (undefined **)0x0)) {
      func_0x00010c08fa60();
    }
    puVar14 = PTR_PTR_1126d28a0;
    _objc_opt_new(PTR_PTR_1126d28a0);
    FUN_106db3498();
    _objc_release(ppuVar9);
    _objc_release(puVar14);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 106da97e0; end: 106da9bcb;  */

void FUN_106da97e0(long param_1,undefined8 param_2,undefined **param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar15 = *(ulong *)(param_1 + 0x50);
    uVar3 = uVar2;
    func_0x00010c15b220();
    if (uVar15 == uVar3) {
      uVar17 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar17);
      uVar4 = *(undefined8 *)(uVar2 + 0x70);
      *(undefined8 *)(uVar2 + 0x70) = uVar17;
      _objc_release(uVar4);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        func_0x00010c1239a0(*(undefined8 *)(uVar2 + 0x80));
        if (0.0 < *(double *)(uVar2 + 0x90)) {
          _CACurrentMediaTime();
          func_0x00010c123a20(*(undefined8 *)(uVar2 + 0x80));
          *(undefined8 *)(uVar2 + 0x90) = 0;
        }
        lVar12 = *(long *)(param_1 + 0x28);
        lVar1 = *(long *)(param_1 + 0x30);
        _objc_retain(lVar1);
        _objc_retain(lVar12);
        puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar1;
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08fa60();
        _objc_release(lVar7);
        _objc_release(puVar6);
        if (lVar8 != 0) {
          func_0x00010befa120(puVar5);
        }
        _objc_retain(lVar12);
        param_5 = 0x10;
        lVar7 = lVar12;
        func_0x00010bf52a60();
        lVar8 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar16 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar12);
            }
            lVar9 = *(long *)(lVar16 * 8);
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010c09f000();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010c08fa60();
            _objc_release(lVar10);
            if (lVar11 == 0) {
              lVar10 = lVar9;
              func_0x00010c2bedc0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar10 != 0) {
                lVar11 = lVar9;
                func_0x00010c0d0e40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar10);
                if (lVar11 != 0) goto LAB_106da9a2c;
              }
              lVar10 = lVar9;
              func_0x00010c2bedc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar10 != 0) goto LAB_106da9a2c;
              lVar10 = lVar9;
              func_0x00010c0d0e40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar10 != 0) goto LAB_106da9a2c;
            }
            else {
LAB_106da9a2c:
              func_0x00010befa120(puVar5);
            }
            _objc_release(lVar9);
            lVar16 = lVar16 + 1;
          } while (lVar7 != lVar16);
          param_5 = 0x10;
          lVar7 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        puVar6 = puVar5;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(lVar12);
        _objc_release(lVar1);
        uVar3 = uVar2;
        func_0x00010be3fee0();
        if ((int)uVar3 != 0) {
          lVar12 = uVar2 + 0x38;
          _objc_loadWeakRetained();
          param_5 = *(long *)(param_1 + 0x68);
          func_0x00010bf783c0();
          _objc_release(lVar12);
        }
        if (*(long *)(param_1 + 0x60) == 2) {
          uVar4 = *(undefined8 *)(uVar2 + 0x88);
          *(undefined8 *)(uVar2 + 0x88) = 0;
          _objc_release(uVar4);
        }
        _objc_release(puVar6);
        uVar13 = (uint)*(byte *)(param_1 + 0x70);
      }
      else {
        uVar13 = 1;
      }
      param_3 = *(undefined ***)(param_1 + 0x40);
      param_4 = (ulong)(uVar13 & 1);
      func_0x00010bedea00(uVar2);
    }
    else if (*(long *)(param_1 + 0x20) == 0) {
      param_4 = *(ulong *)(param_1 + 0x28);
      param_5 = *(long *)(param_1 + 0x30);
      param_3 = &PTR____CFConstantStringClassReference_110e86698;
      func_0x00010be585c0(uVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    uVar2 = param_4;
    ___stack_chk_fail();
    _objc_retain(uVar2);
    _objc_retain(param_5);
    _objc_retain(param_3);
    lVar14 = param_5;
    func_0x00010c08fa60();
    if ((lVar14 == 0) || (uVar3 = uVar2, func_0x00010bf529e0(), uVar3 == 0)) {
      func_0x00010c08fa60();
    }
    puVar5 = PTR_PTR_1126d28a0;
    _objc_opt_new(PTR_PTR_1126d28a0);
    FUN_106db3498();
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106da9bcc; end: 106da9c97; -[SCMemoriesInlineSearchDataSource _logSemanticSearchSupersededAtStage:facets:text:] */

void FUN_106da9bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x00010c08fa60();
  }
  puVar2 = PTR_PTR_1126d28a0;
  _objc_opt_new(PTR_PTR_1126d28a0);
  FUN_106db3498();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106da9c98; end: 106da9e07; -[SCMemoriesInlineSearchDataSource _refreshSemanticSearchResultsFromCachedResult] */

void FUN_106da9c98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar5);
  if (lVar5 != 0) {
    lVar2 = param_1;
    func_0x00010c15b220();
    lVar1 = *(long *)(param_1 + 0x78) + 1;
    *(long *)(param_1 + 0x78) = lVar1;
    puVar4 = PTR_PTR_1126ae790;
    lVar3 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar6);
    _objc_retain(uVar6);
    _objc_retain(lVar5);
    _objc_copyWeak(auStack_60,auStack_48);
    lStack_58 = lVar2;
    lStack_50 = lVar1;
    func_0x00010c0f7fc0(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar5);
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar4);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 106da9e08; end: 106da9f8f;  */

void FUN_106da9e08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c09e9c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c154000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106da9f90;
  puStack_78 = &UNK_110849da0;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uStack_70 = uVar5;
  _objc_retain(lVar1);
  lStack_68 = lVar1;
  _objc_retain(puVar3);
  puStack_60 = puVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(puStack_60);
  _objc_release(lStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_58);
    __Unwind_Resume();
    lVar2 = lVar1 + 0x38;
    _objc_loadWeakRetained();
    if ((((lVar2 != 0) &&
         (lVar6 = *(long *)(lVar1 + 0x40), lVar4 = lVar2, func_0x00010c15b220(), lVar6 == lVar4)) &&
        (*(long *)(lVar1 + 0x48) == *(long *)(lVar2 + 0x78))) &&
       (*(long *)(lVar2 + 0x70) == *(long *)(lVar1 + 0x20))) {
      if (*(long *)(lVar1 + 0x28) == 0) {
        *(undefined8 *)(lVar2 + 0x70) = 0;
        _objc_release();
      }
      func_0x00010bedea00(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106da9f90; end: 106daa01b;  */

void FUN_106da9f90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((((lVar1 != 0) &&
       (lVar3 = *(long *)(param_1 + 0x40), lVar2 = lVar1, func_0x00010c15b220(), lVar3 == lVar2)) &&
      (*(long *)(param_1 + 0x48) == *(long *)(lVar1 + 0x78))) &&
     (*(long *)(lVar1 + 0x70) == *(long *)(param_1 + 0x20))) {
    if (*(long *)(param_1 + 0x28) == 0) {
      *(undefined8 *)(lVar1 + 0x70) = 0;
      _objc_release();
    }
    func_0x00010bedea00(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106daa01c; end: 106daa047; -[SCMemoriesInlineSearchDataSource _resetSearchSession] */

void FUN_106daa01c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 106daa048; end: 106daa09b; -[SCMemoriesInlineSearchDataSource _setSearchSessionIdIfNeeded] */

void FUN_106daa048(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010be93a20();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106daa09c; end: 106daa0e3; -[SCMemoriesInlineSearchDataSource _isEligibleForSearchLogging] */

bool FUN_106daa09c(long param_1)

{
  bool bVar1;
  
  func_0x00010bea7060();
  if (*(long *)(param_1 + 0xa0) == 0) {
    bVar1 = false;
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    bVar1 = param_1 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 106daa0e4; end: 106daa143; -[SCMemoriesInlineSearchDataSource _logSelectSearchResultInSession:] */

void FUN_106daa0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7aee0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106daa144; end: 106daa1db; -[SCMemoriesInlineSearchDataSource _logUpdateSearchResultsInSession:] */

void FUN_106daa144(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c154420(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      lVar1 = param_3;
    }
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7e600();
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106daa1dc; end: 106daa223; -[SCMemoriesInlineSearchDataSource _logDeselectSearchResultInSession] */

void FUN_106daa1dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106daa224; end: 106daa26f; -[SCMemoriesInlineSearchDataSource _logPerformQueryInSession] */

void FUN_106daa224(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf783e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106daa270; end: 106daa2c3; -[SCMemoriesInlineSearchDataSource _logEmbeddingQueryClearedInSession] */

void FUN_106daa270(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3fee0();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf783c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106daa2c4; end: 106daa2cb; -[SCMemoriesInlineSearchDataSource sessionId] */

undefined8 FUN_106daa2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106daa2cc; end: 106daa2d3; -[SCMemoriesInlineSearchDataSource semanticSearchLoading] */

undefined1 FUN_106daa2cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 106daa2d4; end: 106daa2db; -[SCMemoriesInlineSearchDataSource semanticSearchLoadingDidChangeHandler] */

undefined8 FUN_106daa2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106daa2dc; end: 106daa2e3; -[SCMemoriesInlineSearchDataSource setSemanticSearchLoadingDidChangeHandler:] */

void FUN_106daa2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106daa2e4; end: 106daa2eb; -[SCMemoriesInlineSearchDataSource semanticSearchGeneration] */

undefined8 FUN_106daa2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106daa2ec; end: 106daa2f3; -[SCMemoriesInlineSearchDataSource setSemanticSearchGeneration:] */

void FUN_106daa2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 106daa2f4; end: 106daa3c7; -[SCMemoriesInlineSearchDataSource .cxx_destruct] */

void FUN_106daa2f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106daa3c8; end: 106daa4ab; -[SCMemoriesSemanticSearchDispatchIdentity initWithQueryText:facets:generation:] */

undefined1 *
FUN_106daa3c8(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6e08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    ppuVar3 = param_3;
    func_0x00010bf51e00();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    _objc_retain(ppuVar1);
    uVar4 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined ***)((long)puVar2 + 8) = ppuVar1;
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    uVar4 = param_4;
    FUN_106daa4ac();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = uVar4;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 106daa4ac; end: 106daa5fb;  */

undefined * FUN_106daa4ac(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar5 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar2 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0(puVar8,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  puVar6 = auStack_d8;
  lVar7 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8,param_2,uVar3);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar6 = auStack_d8;
      lVar7 = 0x10;
      lVar2 = param_1;
      ppuVar5 = &puStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  if (*(long *)(param_1 + 0x18) == lVar7) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    func_0x00010c0720c0(uVar3,param_2,ppuVar1);
    if ((int)uVar3 != 0) {
      puVar8 = *(undefined **)(param_1 + 0x10);
      puVar4 = puVar6;
      FUN_106daa4ac(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c072060(puVar8,param_2,puVar4);
      _objc_release(puVar4);
      goto LAB_106daa684;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_106daa684:
  _objc_release(puVar6);
  return puVar8;
}



/* Entry: 106daa5fc; end: 106daa69f; -[SCMemoriesSemanticSearchDispatchIdentity matchesQueryText:facets:generation:] */

undefined8
FUN_106daa5fc(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x18) == param_5) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    func_0x00010c0720c0(uVar2,param_2,ppuVar1);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = param_4;
      FUN_106daa4ac(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c072060(uVar2,param_2,uVar3);
      _objc_release(uVar3);
      goto LAB_106daa684;
    }
  }
  uVar2 = 0;
LAB_106daa684:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106daa6a0; end: 106daa6cf; -[SCMemoriesSemanticSearchDispatchIdentity .cxx_destruct] */

void FUN_106daa6a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106daa6d0; end: 106daa793;  */

void FUN_106daa6d0(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar2 = param_1;
      func_0x00010bf529e0();
      uVar2 = uVar2 + lVar5;
      if (499 < uVar2) {
        uVar2 = 500;
      }
      uVar3 = param_1;
      func_0x00010c25e980(param_1,param_2,uVar4,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
      uVar4 = uVar4 + 500;
      uVar2 = param_1;
      func_0x00010bf529e0();
      lVar5 = lVar5 + -500;
    } while (uVar4 < uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106daa794; end: 106daa807; -[SCMemoriesSemanticSearchCoreDataEntryLookup initWithDataObjectContext:] */

undefined1 * FUN_106daa794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6e10;
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



/* Entry: 106daa808; end: 106daab07; -[SCMemoriesSemanticSearchCoreDataEntryLookup entriesBySnapIDForSnapIDs:] */

void FUN_106daa808(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *puStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_200 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puVar4 = param_3;
    FUN_106daa6d0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar13 = *plStack_1a0;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_1a0 != lVar13) {
            _objc_enumerationMutation(puVar4);
          }
          puVar6 = PTR_PTR_1126af4d0;
          uVar5 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7580();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar3);
          _objc_release(puVar6);
          _objc_release(uVar5);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar2 != puVar10);
        puVar2 = puVar4;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    puVar7 = puVar3;
    FUN_106daa6d0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = &uStack_1f0;
    puVar8 = puVar7;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      lVar13 = *plStack_1e0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar13) {
            _objc_enumerationMutation(puVar7);
          }
          puVar9 = PTR_PTR_1126af4c0;
          uVar5 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa6e80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar6);
          _objc_release(puVar9);
          _objc_release(uVar5);
          puVar11 = puVar11 + 1;
        } while (puVar8 != puVar11);
        puVar4 = &uStack_1f0;
        puVar8 = puVar7;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    puStack_200 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar2 = puVar4;
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_200 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x00010bf529e0(puVar4);
      func_0x00010bf0a0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      FUN_106daa6d0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar10);
          }
          puVar6 = PTR_PTR_1126af4c0;
          uVar5 = param_3[1];
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa6ee0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar3);
          _objc_release(puVar6);
          _objc_release(uVar5);
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar2 != puVar12);
        puVar2 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puStack_200 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 1,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_200);
  return;
}



/* Entry: 106daab08; end: 106daacd3; -[SCMemoriesSemanticSearchCoreDataEntryLookup entriesForEntryIDs:] */

void FUN_106daab08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    FUN_106daa6d0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        puVar6 = PTR_PTR_1126af4c0;
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa6ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        _objc_release(puVar6);
        _objc_release(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106daacd4; end: 106daacdf; -[SCMemoriesSemanticSearchCoreDataEntryLookup .cxx_destruct] */

void FUN_106daacd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106daace0; end: 106daad87; -[SCMemoriesPublishedSemanticSearchResult initWithSearchResult:snapIDsForFacetOnlyRefresh:] */

undefined1 *
FUN_106daace0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6e18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 106daad88; end: 106daad8f; -[SCMemoriesPublishedSemanticSearchResult searchResult] */

undefined8 FUN_106daad88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106daad90; end: 106daad97; -[SCMemoriesPublishedSemanticSearchResult facetSnapIDs] */

undefined8 FUN_106daad90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106daad98; end: 106daadc7; -[SCMemoriesPublishedSemanticSearchResult .cxx_destruct] */

void FUN_106daad98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106daadc8; end: 106daaeaf; -[SCMemoriesSemanticSearchResolver initWithSemanticSearchManager:facetSnapIDResolver:entryLookup:] */

undefined1 *
FUN_106daadc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f6e20;
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
    puVar3 = PTR_PTR_1126d2890;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106daaeb0; end: 106dab127; -[SCMemoriesSemanticSearchResolver _allowedSnapIDsForSelectedFacets:] */

void FUN_106daaeb0(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **unaff_x23;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
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
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          uVar3 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c086560(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241500(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar6);
          _objc_release(uVar3);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    _objc_initWeak(auStack_138,param_1);
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_106dab128;
    puStack_148 = &UNK_11084de30;
    param_2 = auStack_138;
    _objc_copyWeak(auStack_140,param_2);
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_140);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar2);
    unaff_x23 = &puStack_160;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
    _objc_destroyWeak(auStack_138);
    __Unwind_Resume(param_3);
    _objc_retain(param_2);
    puVar2 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar2);
    puVar5 = puVar2;
    func_0x00010be3d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dab128; end: 106dab18b;  */

void FUN_106dab128(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106dab18c; end: 106dab2b7; -[SCMemoriesSemanticSearchResolver _intersectSnapIDLists:] */

void FUN_106dab18c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (uVar4 != 0) {
    uVar4 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf529e0();
    if (1 < uVar4) {
      uVar4 = 1;
      do {
        puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
        uVar2 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20(puVar3,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c069840(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(uVar2);
        uVar4 = uVar4 + 1;
        uVar2 = param_3;
        func_0x00010bf529e0();
      } while (uVar4 < uVar2);
    }
    puVar3 = puVar1;
    func_0x00010bf00560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dab2b8; end: 106dab40f; -[SCMemoriesSemanticSearchResolver resolutionForSelectedFacets:freeformText:semanticSearchGeneration:generationProvider:] */

void FUN_106dab2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bdca3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dab410; end: 106dab5b3;  */

void FUN_106dab410(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf5ffc0();
    if (lVar6 == lVar2) {
      puVar5 = *(undefined **)(param_1 + 0x28);
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (param_2 == 0) {
LAB_106dab4b0:
        puVar3 = *(undefined **)(lVar1 + 8);
        func_0x00010bfa6800(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = param_2;
        func_0x00010bf529e0();
        puVar4 = PTR_PTR_1126ae558;
        if (lVar2 == 0) {
          puVar3 = PTR_PTR_1126d28a8;
          func_0x00010bf8eb20(PTR_PTR_1126d28a8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = puVar5;
          func_0x00010c08fa60();
          puVar4 = PTR_PTR_1126ae558;
          if (puVar3 != (undefined *)0x0) goto LAB_106dab4b0;
          puVar3 = PTR_PTR_1126d28a8;
          func_0x00010bf9f440(PTR_PTR_1126d28a8);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bfe9ca0(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      goto LAB_106dab584;
    }
  }
  puVar4 = PTR_PTR_1126ae558;
  puVar5 = PTR_PTR_1126d28a8;
  func_0x00010bf8eb20(PTR_PTR_1126d28a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_106dab584:
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dab5b4; end: 106dab5c3;  */

void FUN_106dab5b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d28a8,PTR_s_backendEntryIDsWithEntryIDs__1125a2868,param_2);
  return;
}



/* Entry: 106dab5c4; end: 106dab663; -[SCMemoriesSemanticSearchResolver _resultForEntries:title:] */

void FUN_106dab5c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c3bb8;
    _objc_alloc(PTR_PTR_1126c3bb8);
    func_0x00010c03fe00(0x3f800000);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dab664; end: 106dab6f3; -[SCMemoriesSemanticSearchResolver _publishedResultForEntries:title:facetSnapIDs:] */

void FUN_106dab664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  func_0x00010be95960(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d28b0;
    _objc_alloc(PTR_PTR_1126d28b0);
    func_0x00010c042a80();
  }
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dab6f4; end: 106dab98f; -[SCMemoriesSemanticSearchResolver _orderedDedupedEntriesForSnapIDs:] */

void FUN_106dab6f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_138;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  _objc_retain(param_3);
  lVar13 = param_3;
  func_0x00010bf529e0();
  if (lVar13 == 0) {
    puStack_138 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf97020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010bf529e0(puVar3);
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    if (lVar7 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          puVar1 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar1 == (undefined *)0x0) {
            lVar11 = lVar11 + 1;
          }
          else {
            puVar9 = puVar1;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            func_0x00010bf4b900();
            _objc_release(puVar9);
            if (((ulong)puVar4 & 1) == 0) {
              func_0x00010befa120(puStack_138);
              puVar9 = puVar1;
              func_0x00010bf97200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(puVar9);
            }
          }
          _objc_release(puVar1);
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
        lVar7 = param_3;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(param_3);
    param_4 = 1;
    func_0x00010c123b60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = lVar11;
    uVar12 = param_4;
    _objc_retain(lVar11);
    lVar6 = lVar11;
    func_0x00010bf529e0();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    puStack_138 = PTR____NSArray0__struct_11034ab48;
    if (lVar6 != 0) {
      puVar1 = *(undefined **)(param_3 + 0x18);
      func_0x00010bf97040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      _objc_retain(puVar2);
      _objc_release(puVar1);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar2);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (puVar1 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(puVar2);
          }
          uVar12 = *(undefined8 *)((long)puVar9 * 8);
          func_0x00010bf97200(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar12);
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
      puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(lVar11);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010bf529e0(lVar11);
      func_0x00010c225ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar11);
      lVar10 = lVar11;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      if (lVar10 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        do {
          lVar8 = 0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(lVar11);
            }
            puVar9 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 == (undefined *)0x0) {
              lVar13 = lVar13 + 1;
            }
            else {
              puVar4 = puVar9;
              func_0x00010bf97200();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar1;
              func_0x00010bf4b900();
              _objc_release(puVar4);
              if (((ulong)puVar5 & 1) == 0) {
                func_0x00010befa120(puStack_138);
                puVar4 = puVar9;
                func_0x00010bf97200();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar1);
                _objc_release(puVar4);
              }
            }
            _objc_release(puVar9);
            lVar8 = lVar8 + 1;
          } while (lVar10 != lVar8);
          lVar10 = lVar11;
          func_0x00010bf52a60();
        } while (lVar10 != 0);
      }
      _objc_release(lVar11);
      func_0x00010c123b60(*(undefined8 *)(param_3 + 0x20));
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar12 = param_4;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      _objc_retain(lVar13);
      _objc_retain(uVar12);
      puStack_3c8 = &uStack_3d0;
      uStack_3d0 = 0;
      uStack_3c0 = 0x3032000000;
      pcStack_3b8 = FUN_106dabe54;
      uStack_3b0 = 0x106dabe64;
      uStack_3a8 = 0;
      _objc_retain(uVar12);
      _objc_retain(uVar12);
      func_0x00010c0bdaa0(lVar13);
      puStack_138 = (undefined *)puStack_3c8[5];
      _objc_retain(puStack_138);
      _objc_release(uVar12);
      _objc_release(uVar12);
      __Block_object_dispose(&uStack_3d0,8);
      _objc_release(uStack_3a8);
      _objc_release(uVar12);
      _objc_release(lVar13);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
  return;
}



/* Entry: 106dab990; end: 106dabcf3; -[SCMemoriesSemanticSearchResolver _orderedDedupedEntriesForEntryIDs:path:] */

void FUN_106dab990(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_3;
  uVar12 = param_4;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar3 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf97040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar1);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar1);
        }
        uVar12 = *(undefined8 *)((long)puVar11 * 8);
        func_0x00010bf97200(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar12);
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = puVar1;
      func_0x00010bf52a60();
    }
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010bf529e0(param_3);
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar5 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_3);
          }
          puVar6 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            lVar13 = lVar13 + 1;
          }
          else {
            puVar7 = puVar6;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar11;
            func_0x00010bf4b900();
            _objc_release(puVar7);
            if (((ulong)puVar8 & 1) == 0) {
              func_0x00010befa120(puVar3);
              puVar7 = puVar6;
              func_0x00010bf97200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar11);
              _objc_release(puVar7);
            }
          }
          _objc_release(puVar6);
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = param_3;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(param_3);
    func_0x00010c123b60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar11);
    _objc_release(puVar4);
    _objc_release(puVar1);
    uVar12 = param_4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(lVar13);
    _objc_retain(uVar12);
    puStack_288 = &uStack_290;
    uStack_290 = 0;
    uStack_280 = 0x3032000000;
    pcStack_278 = FUN_106dabe54;
    uStack_270 = 0x106dabe64;
    uStack_268 = 0;
    _objc_retain(uVar12);
    _objc_retain(uVar12);
    func_0x00010c0bdaa0(lVar13);
    puVar3 = (undefined *)puStack_288[5];
    _objc_retain(puVar3);
    _objc_release(uVar12);
    _objc_release(uVar12);
    __Block_object_dispose(&uStack_290,8);
    _objc_release(uStack_268);
    _objc_release(uVar12);
    _objc_release(lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dabcf4; end: 106dabe53; -[SCMemoriesSemanticSearchResolver publishedResultForResolution:title:] */

void FUN_106dabcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106dabe54;
  uStack_60 = 0x106dabe64;
  uStack_58 = 0;
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010c0bdaa0(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dabe54; end: 106dabe6f;  */

void FUN_106dabe54(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


