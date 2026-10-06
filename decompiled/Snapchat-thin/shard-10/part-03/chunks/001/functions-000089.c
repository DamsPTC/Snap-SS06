/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e9bda4; end: 107e9bdab; -[IGListSingleSectionController numberOfItems] */

undefined8 FUN_107e9bda4(void)

{
  return 1;
}



/* Entry: 107e9bdac; end: 107e9be4b; -[IGListSingleSectionController sizeForItemAtIndex:] */

undefined1  [16] FUN_107e9bdac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_3;
  func_0x00010c23d0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2,param_3);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107e9be4c; end: 107e9bfeb; -[IGListSingleSectionController cellForItemAtIndex:] */

void FUN_107e9be4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0da380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  lVar2 = lVar1;
  lVar5 = param_1;
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      func_0x00010bf33960(param_1);
      func_0x00010bf6e020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107e9bf58;
    }
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e000(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da380();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf24980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar5);
LAB_107e9bf58:
  lVar3 = param_1;
  func_0x00010bf46b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,param_1,lVar2);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107e9bfec; end: 107e9bfef; -[IGListSingleSectionController didUpdateToObject:] */

void FUN_107e9bfec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b5d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setItem__11264b178);
  return;
}



/* Entry: 107e9bff0; end: 107e9c053; -[IGListSingleSectionController didSelectItemAtIndex:] */

void FUN_107e9bff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c15a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0840e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7af20(uVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9c054; end: 107e9c0f7; -[IGListSingleSectionController didDeselectItemAtIndex:] */

void FUN_107e9c054(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c15a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c15a5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74880(uVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107e9c0f8; end: 107e9c117; -[IGListSingleSectionController selectionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9c0f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770d7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9c118; end: 107e9c12b; -[IGListSingleSectionController setSelectionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9c118(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770d7c,param_3);
  return;
}



/* Entry: 107e9c12c; end: 107e9c13b; -[IGListSingleSectionController nibName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c12c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d70);
}



/* Entry: 107e9c13c; end: 107e9c14b; -[IGListSingleSectionController bundle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c13c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d74);
}



/* Entry: 107e9c14c; end: 107e9c15b; -[IGListSingleSectionController identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c14c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d78);
}



/* Entry: 107e9c15c; end: 107e9c16b; -[IGListSingleSectionController cellClass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c15c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d64);
}



/* Entry: 107e9c16c; end: 107e9c17b; -[IGListSingleSectionController configureBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c16c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d68);
}



/* Entry: 107e9c17c; end: 107e9c18b; -[IGListSingleSectionController sizeBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c17c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d6c);
}



/* Entry: 107e9c18c; end: 107e9c19b; -[IGListSingleSectionController item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9c18c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d80);
}



/* Entry: 107e9c19c; end: 107e9c1db; -[IGListSingleSectionController setItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9c19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770d80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9c1dc; end: 107e9c277; -[IGListSingleSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9c1dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770d80,0);
  _objc_storeStrong(param_1 + _DAT_112770d6c,0);
  _objc_storeStrong(param_1 + _DAT_112770d68,0);
  _objc_storeStrong(param_1 + _DAT_112770d64,0);
  _objc_storeStrong(param_1 + _DAT_112770d78,0);
  _objc_storeStrong(param_1 + _DAT_112770d74,0);
  _objc_storeStrong(param_1 + _DAT_112770d70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770d7c);
  return;
}



/* Entry: 107e9c278; end: 107e9c34f; -[IGListTransitionData initFromObjects:toObjects:toSectionControllers:] */

undefined1 *
FUN_107e9c278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fb890;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e9c350; end: 107e9c357; -[IGListTransitionData fromObjects] */

undefined8 FUN_107e9c350(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e9c358; end: 107e9c35f; -[IGListTransitionData toObjects] */

undefined8 FUN_107e9c358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e9c360; end: 107e9c367; -[IGListTransitionData toSectionControllers] */

undefined8 FUN_107e9c360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e9c368; end: 107e9c3a3; -[IGListTransitionData .cxx_destruct] */

void FUN_107e9c368(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e9c3a4; end: 107e9c483; -[IGListAdapter debugDescription] */

void FUN_107e9c3a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ec20d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf660c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_107ea0a1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  puVar1 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e9c484; end: 107e9c49f; -[IGListAdapter debugDescriptionLines] */

void FUN_107e9c484(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9c4a0; end: 107e9c507; -[IGListAdapter numberOfSectionsInCollectionView:] */

undefined8 FUN_107e9c4a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c075520();
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e0300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107e9c508; end: 107e9c557; -[IGListAdapter collectionView:numberOfItemsInSection:] */

undefined8
FUN_107e9c508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010c075520();
  func_0x00010c155820(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0deea0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e9c558; end: 107e9c647; -[IGListAdapter collectionView:cellForItemAtIndexPath:] */

void FUN_107e9c558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f96e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099ee0();
  uVar2 = param_4;
  func_0x00010c1554e0(param_4);
  lVar3 = param_1;
  func_0x00010c155820(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar2 = param_4;
  func_0x00010c0840e0(param_4);
  lVar4 = lVar3;
  func_0x00010bf33b00(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x10) = 0;
  func_0x00010c0ba600(param_1,param_2,lVar4,lVar3);
  uVar2 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c099ac0(lVar1,param_2,param_1,lVar4,lVar3,uVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107e9c648; end: 107e9c723; -[IGListAdapter collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_107e9c648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c1554e0(param_5);
  lVar2 = param_1;
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c262ea0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x11) = 1;
  uVar1 = param_5;
  func_0x00010c0840e0(param_5);
  _objc_release(param_5);
  lVar4 = lVar3;
  func_0x00010c29cf40(lVar3,param_2,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  *(undefined1 *)(param_1 + 0x11) = 0;
  func_0x00010c0ba600(param_1,param_2,lVar4,lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107e9c724; end: 107e9c7a3; -[IGListAdapter collectionView:canMoveItemAtIndexPath:] */

undefined8
FUN_107e9c724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2cea0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e9c7a4; end: 107e9c8ef; -[IGListAdapter collectionView:moveItemAtIndexPath:toIndexPath:] */

void FUN_107e9c7a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  uVar2 = param_5;
  func_0x00010c1554e0(param_5);
  uVar3 = param_4;
  func_0x00010c0840e0(param_4);
  uVar4 = param_5;
  func_0x00010c0840e0(param_5);
  lVar5 = param_1;
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c155820(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == lVar6) {
    lVar7 = lVar5;
    func_0x00010bf2cec0(lVar5,param_2,uVar3,uVar4);
    if ((int)lVar7 != 0) {
      func_0x00010c0d1500(param_1,param_2,lVar5,uVar3,uVar4);
      goto LAB_107e9c8b8;
    }
  }
  else {
    lVar7 = lVar5;
    func_0x00010c0deea0();
    if ((lVar7 == 1) && (lVar7 = lVar6, func_0x00010c0deea0(), lVar7 == 1)) {
      func_0x00010c0d1700(param_1,param_2,lVar5,uVar1,uVar2);
      goto LAB_107e9c8b8;
    }
  }
  func_0x00010c1402a0(param_1,param_2,param_4,param_5);
LAB_107e9c8b8:
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e9c8f0; end: 107e9c96f; -[IGListAdapter collectionView:shouldSelectItemAtIndexPath:] */

undefined8
FUN_107e9c8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x00010c232fc0(param_1,param_2,uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107e9c970; end: 107e9c9ef; -[IGListAdapter collectionView:shouldDeselectItemAtIndexPath:] */

undefined8
FUN_107e9c970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x00010c22ec80(param_1,param_2,uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107e9c9f0; end: 107e9caaf; -[IGListAdapter collectionView:didSelectItemAtIndexPath:] */

void FUN_107e9c9f0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf40200(uVar1);
  }
  func_0x00010c1554e0(param_4);
  func_0x00010c155820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0(param_4);
  func_0x00010bf7aa60(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9cab0; end: 107e9cb6f; -[IGListAdapter collectionView:didDeselectItemAtIndexPath:] */

void FUN_107e9cab0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf40180(uVar1);
  }
  func_0x00010c1554e0(param_4);
  func_0x00010c155820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0(param_4);
  func_0x00010bf74820(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9cb70; end: 107e9cd97; -[IGListAdapter collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_107e9cb70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0f96e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099f00();
  uVar2 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    func_0x00010bf405c0(uVar2);
  }
  uVar3 = param_1;
  func_0x00010bf9c660();
  uVar4 = param_1;
  if (((uint)uVar3 >> 4 & 1) == 0) {
    func_0x00010c155840();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      func_0x00010c1554e0(param_5);
      uVar4 = param_1;
      func_0x00010c155820(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba600(param_1);
    }
  }
  else {
    func_0x00010c1554e0(param_5);
    func_0x00010c155820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_5);
  uVar5 = uVar3;
  func_0x00010c0e0100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf857c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6000();
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x12) = 1;
  uVar3 = param_1;
  func_0x00010c2bd560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6140();
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x12) = 0;
  func_0x00010c0840e0(param_5);
  func_0x00010c099ae0(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9cd98; end: 107e9cf37; -[IGListAdapter collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_107e9cd98(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0f96e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099f20();
  uVar2 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    func_0x00010bf401a0(uVar2);
  }
  uVar3 = param_1;
  func_0x00010bf9c660();
  uVar4 = param_1;
  if (((uint)uVar3 >> 4 & 1) == 0) {
    func_0x00010c155840(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1554e0(param_5);
    func_0x00010c155820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  func_0x00010bf857c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf758a0();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c2bd560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75900();
  _objc_release(uVar3);
  func_0x00010c12d0a0(param_1);
  func_0x00010c0840e0(param_5);
  func_0x00010c099b00(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9cf38; end: 107e9d0ff; -[IGListAdapter collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:] */

void FUN_107e9cf38(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf405e0(uVar1);
  }
  uVar2 = param_1;
  func_0x00010bf9c660();
  uVar3 = param_1;
  if (((uint)uVar2 >> 4 & 1) == 0) {
    func_0x00010c155840();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      func_0x00010c1554e0(param_6);
      uVar3 = param_1;
      func_0x00010c155820(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba600(param_1);
    }
  }
  else {
    func_0x00010c1554e0(param_6);
    func_0x00010c155820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010c156300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_6);
  uVar4 = uVar2;
  func_0x00010c0e0100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf857c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6280();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9d100; end: 107e9d24b; -[IGListAdapter collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:] */

void FUN_107e9d100(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf401c0(uVar1);
  }
  uVar2 = param_1;
  func_0x00010bf9c660();
  uVar3 = param_1;
  if (((uint)uVar2 >> 4 & 1) == 0) {
    func_0x00010c155840(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1554e0(param_6);
    func_0x00010c155820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bf857c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75980();
  _objc_release(uVar2);
  func_0x00010c12d0a0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9d24c; end: 107e9d30b; -[IGListAdapter collectionView:didHighlightItemAtIndexPath:] */

void FUN_107e9d24c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf401e0(uVar1);
  }
  func_0x00010c1554e0(param_4);
  func_0x00010c155820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0(param_4);
  func_0x00010bf77440(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9d30c; end: 107e9d3cb; -[IGListAdapter collectionView:didUnhighlightItemAtIndexPath:] */

void FUN_107e9d30c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf407c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf40220(uVar1);
  }
  func_0x00010c1554e0(param_4);
  func_0x00010c155820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0(param_4);
  func_0x00010bf7dea0(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9d3cc; end: 107e9d3d3; -[IGListAdapter collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_107e9d3cc(undefined8 param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010c23d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sizeForItemAtIndexPath__11266cec8,in_x4);
  return;
}



/* Entry: 107e9d3d4; end: 107e9d43b; -[IGListAdapter collectionView:layout:insetForSectionAtIndex:] */

undefined8
FUN_107e9d3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x00010c155820(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067500();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e9d43c; end: 107e9d483; -[IGListAdapter collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8
FUN_107e9d43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x00010c155820(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce4a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e9d484; end: 107e9d4cb; -[IGListAdapter collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8
FUN_107e9d484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x00010c155820(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce460();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e9d4cc; end: 107e9d53f; -[IGListAdapter collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_107e9d4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d3a0(param_3,param_4,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,puVar1);
  _objc_release(puVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107e9d540; end: 107e9d5b3; -[IGListAdapter collectionView:layout:referenceSizeForFooterInSection:] */

undefined1  [16]
FUN_107e9d540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d3a0(param_3,param_4,
                      *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8,puVar1);
  _objc_release(puVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107e9d5b4; end: 107e9d6a3; -[IGListAdapter collectionView:layout:customizedInitialLayoutAttributes:atIndexPath:] */

void FUN_107e9d5b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c1554e0(param_6);
  lVar2 = param_1;
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    _objc_retain(param_5);
    lVar3 = param_5;
  }
  else {
    lVar4 = lVar2;
    func_0x00010c27a8e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_6;
    func_0x00010c0840e0(param_6);
    lVar3 = lVar4;
    func_0x00010c099aa0(lVar4,param_2,param_1,param_5,lVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107e9d6a4; end: 107e9d793; -[IGListAdapter collectionView:layout:customizedFinalLayoutAttributes:atIndexPath:] */

void FUN_107e9d6a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c1554e0(param_6);
  lVar2 = param_1;
  func_0x00010c155820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    _objc_retain(param_5);
    lVar3 = param_5;
  }
  else {
    lVar4 = lVar2;
    func_0x00010c27a8e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_6;
    func_0x00010c0840e0(param_6);
    lVar3 = lVar4;
    func_0x00010c099a80(lVar4,param_2,param_1,param_5,lVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107e9d794; end: 107e9d82b; -[IGListAdapterProxy initWithCollectionViewTarget:scrollViewTarget:interceptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107e9d794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = (long)_DAT_112770d90;
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_storeWeak(param_1 + lVar1,param_3);
    _objc_storeWeak(param_1 + _DAT_112770d94,param_4);
    _objc_release(param_4);
    _objc_storeWeak(param_1 + _DAT_112770d98,param_5);
    _objc_release(param_5);
  }
  return param_1;
}



/* Entry: 107e9d82c; end: 107e9d8c3; -[IGListAdapterProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107e9d82c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  FUN_107e9d8c4();
  if ((param_3 & 1) == 0) {
    uVar1 = param_1 + _DAT_112770d90;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + _DAT_112770d94;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      _objc_opt_respondsToSelector();
      uVar4 = (uint)lVar3;
      _objc_release(param_1);
    }
    else {
      uVar4 = 1;
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 1;
  }
  return uVar4 & 1;
}



/* Entry: 107e9d8c4; end: 107e9da0f;  */

bool FUN_107e9d8c4(undefined *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((((((param_1 != PTR_s_scrollViewDidScroll__1126324e8) &&
          (param_1 != PTR_s_scrollViewWillBeginDragging__112632548)) &&
         (param_1 != PTR_s_scrollViewDidEndDragging_willDec_1126324c8)) &&
        ((param_1 != PTR_s_scrollViewDidEndDecelerating__1126324c0 &&
         (param_1 != PTR_s_collectionView_willDisplayCell_f_1125adb18)))) &&
       ((param_1 != PTR_s_collectionView_didEndDisplayingC_1125ada10 &&
        ((param_1 != PTR_s_collectionView_shouldSelectItemA_112525e98 &&
         (param_1 != PTR_s_collectionView_didSelectItemAtIn_1125ada28)))))) &&
      (param_1 != PTR_s_collectionView_shouldDeselectIte_112525ea0)) &&
     (((((param_1 != PTR_s_collectionView_didDeselectItemAt_1125ada08 &&
         (param_1 != PTR_s_collectionView_didHighlightItemA_1125ada20)) &&
        (param_1 != PTR_s_collectionView_didUnhighlightIte_1125ada30)) &&
       (((param_1 != PTR_s_collectionView_layout_sizeForIte_1125adac8 &&
         (param_1 != PTR_s_collectionView_layout_insetForSe_1125ada48)) &&
        ((param_1 != PTR_s_collectionView_layout_minimumInt_1125ada58 &&
         ((param_1 != PTR_s_collectionView_layout_minimumLin_1125ada60 &&
          (param_1 != PTR_s_collectionView_layout_referenceS_1125ada78)))))))) &&
      ((param_1 != PTR_s_collectionView_layout_referenceS_1125ada80 &&
       (param_1 != PTR_s_collectionView_layout_customized_1125ada40)))))) {
    bVar1 = param_1 == PTR_s_collectionView_layout_customized_1125ada38;
  }
  return bVar1;
}



/* Entry: 107e9da10; end: 107e9daa3; -[IGListAdapterProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9da10(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_107e9d8c4();
  if (param_3 == 0) {
    uVar3 = param_1 + _DAT_112770d94;
    uVar1 = uVar3;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    if ((uVar2 & 1) == 0) {
      uVar3 = param_1 + _DAT_112770d90;
    }
    _objc_loadWeakRetained(uVar3);
    _objc_release(uVar1);
  }
  else {
    uVar3 = param_1 + _DAT_112770d98;
    _objc_loadWeakRetained(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e9daa4; end: 107e9dacb; -[IGListAdapterProxy forwardInvocation:] */

void FUN_107e9daa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010c1edc60(param_3,param_2,&uStack_18);
  return;
}



/* Entry: 107e9dacc; end: 107e9dadf; -[IGListAdapterProxy methodSignatureForSelector:] */

void FUN_107e9dacc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_instanceMethodSignatureForSelect_1125f78f8,
             PTR_s_init_1125d9248);
  return;
}



/* Entry: 107e9dae0; end: 107e9db23; -[IGListAdapterProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9dae0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770d98);
  _objc_destroyWeak(param_1 + _DAT_112770d94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770d90);
  return;
}



/* Entry: 107e9db24; end: 107e9db3f; -[IGListAdapterUpdater debugDescriptionLines] */

void FUN_107e9db24(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9db40; end: 107e9dc8f;  */

void FUN_107e9db40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf529e0();
  uVar1 = param_1;
  func_0x00010bf51e00(param_1);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf97bc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107e9dc90; end: 107e9dd73;  */

void FUN_107e9dc90(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar1,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf7ecc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c0e1e80();
      if (*(char *)(param_1 + 0x48) == '\x01') {
        param_2 = *(long *)(param_1 + 0x28);
        func_0x00010c0d8b00();
      }
    }
  }
  else {
    uVar3 = 0;
  }
  func_0x00010c12cb40(*(undefined8 *)(param_1 + 0x30));
  if ((lVar2 != 0x7fffffffffffffff) && (param_2 != 0x7fffffffffffffff)) {
    func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107e9dd74; end: 107e9e377;  */

void FUN_107e9dd74(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  uVar8 = param_2;
  func_0x00010c0d19c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0d3c80();
  _objc_release(uVar8);
  func_0x00010bef92e0(uVar9);
  uVar8 = param_2;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c0d3c80();
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0d3c80();
  _objc_release(uVar8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = puVar1;
  if ((char)param_9 != '\0') {
    _objc_retain(puVar1);
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        uVar15 = *(undefined8 *)((long)puVar17 * 8);
        func_0x00010bfba9a0(uVar15);
        func_0x00010bef92c0(uVar3);
        func_0x00010c2719c0(uVar15);
        func_0x00010bef92c0(uVar2);
        puVar17 = puVar17 + 1;
      } while (puVar5 != puVar17);
      puVar5 = puVar1;
      func_0x00010bf52a60();
    }
    _objc_release(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    _objc_release(puVar1);
  }
  if ((((param_9._1_1_ == '\0') ||
       (puVar1 = puVar5, func_0x00010bf529e0(), puVar1 != (undefined *)0x0)) ||
      (uVar8 = uVar2, func_0x00010bf529e0(), uVar8 != 0)) ||
     ((uVar8 = uVar3, func_0x00010bf529e0(), uVar8 != 0 ||
      (uVar8 = uVar9, func_0x00010bf529e0(), uVar8 == 0)))) {
    uVar12 = uVar3;
    FUN_107e9db40(uVar9,uVar3,uVar2,param_2,param_8);
  }
  else {
    _objc_retain(param_1);
    _objc_retain(puVar4);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    _objc_retain(param_8);
    func_0x00010bf97bc0(uVar9);
    _objc_release(param_8);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retain(param_6);
  lVar10 = param_6;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(param_6);
      }
      uVar16 = *(undefined8 *)(lVar14 * 8);
      uVar15 = uVar16;
      func_0x00010bfbac40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf4b900();
      _objc_release(uVar15);
      if (((ulong)puVar7 & 1) == 0) {
        uVar15 = uVar16;
        func_0x00010bfbac40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar17);
        _objc_release(uVar15);
        func_0x00010c271e40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(uVar16);
      }
      lVar14 = lVar14 + 1;
    } while (lVar10 != lVar14);
    lVar10 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_6);
  puVar7 = puVar17;
  func_0x00010bf00560(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_5);
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bf00560(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_4);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126d8168;
  _objc_alloc();
  func_0x00010c01e2a0();
  func_0x00010bfe64a0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar17);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0df2e0();
  if (uVar12 < uVar8) {
    uVar9 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c0df300();
    if (uVar12 < uVar8) {
      lVar10 = *(long *)(param_1 + 0x20);
      func_0x00010c0deec0();
      lVar11 = *(long *)(param_1 + 0x20);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf404e0();
      _objc_release(lVar11);
      _objc_release(uVar9);
      if (lVar10 == lVar13) {
        uVar15 = *(undefined8 *)(param_1 + 0x20);
        uVar16 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar15);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_retain(puVar1);
        _objc_opt_new();
        _objc_retain(uVar15);
        _objc_retain(puVar4);
        func_0x00010bf97bc0(puVar1);
        _objc_release(puVar1);
        puVar5 = puVar4;
        func_0x00010bf51e00(puVar4);
        _objc_release(puVar4);
        _objc_release(uVar15);
        _objc_release(puVar4);
        _objc_release(uVar15);
        func_0x00010befa160(uVar16);
        _objc_release(puVar5);
        goto LAB_107e9e50c;
      }
    }
    else {
      _objc_release(uVar9);
    }
  }
  FUN_107e9db40(puVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
LAB_107e9e50c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e9e378; end: 107e9e643;  */

void FUN_107e9e378(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0df2e0();
  if (param_2 < uVar4) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0df300();
    if (param_2 < uVar4) {
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x00010c0deec0();
      lVar7 = *(long *)(param_1 + 0x20);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf404e0();
      _objc_release(lVar7);
      _objc_release(uVar5);
      if (lVar6 == lVar8) {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar1);
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_retain(puVar3);
        _objc_opt_new();
        _objc_retain(uVar1);
        _objc_retain(puVar9);
        func_0x00010bf97bc0(puVar3);
        _objc_release(puVar3);
        puVar10 = puVar9;
        func_0x00010bf51e00(puVar9);
        _objc_release(puVar9);
        _objc_release(uVar1);
        _objc_release(puVar9);
        _objc_release(uVar1);
        func_0x00010befa160(uVar2);
        _objc_release(puVar10);
        goto LAB_107e9e50c;
      }
    }
    else {
      _objc_release(uVar5);
    }
  }
  FUN_107e9db40(puVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
LAB_107e9e50c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e9e644; end: 107e9e6d7;  */

void FUN_107e9e644(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0deec0(lVar1,param_2,param_2);
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar2);
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 107e9e6d8; end: 107e9e6f3; -[IGListBatchUpdateData debugDescriptionLines] */

void FUN_107e9e6d8(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9e6f4; end: 107e9e8db; -[IGListBatchUpdateTransaction initWithCollectionViewBlock:updater:delegate:config:animated:sectionDataBlock:applySectionDataBlock:itemUpdateBlocks:completionBlocks:] */

undefined8 *
FUN_107e9e6f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fb898;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_3;
      (**(code **)(param_3 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = puVar1[2];
    puVar1[2] = lVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_storeWeak(puVar1 + 4,param_5);
    puVar1[0xe] = param_6;
    puVar1[0xf] = param_7;
    *(undefined1 *)(puVar1 + 1) = param_8;
    if (param_9 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_9;
      (**(code **)(param_9 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = puVar1[5];
    puVar1[5] = lVar2;
    _objc_release(uVar4);
    uVar4 = param_10;
    func_0x00010bf51e00();
    uVar5 = puVar1[6];
    puVar1[6] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_11;
    func_0x00010bf51e00();
    uVar5 = puVar1[7];
    puVar1[7] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_12;
    func_0x00010bf51e00();
    uVar5 = puVar1[8];
    puVar1[8] = uVar4;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d8170;
    _objc_opt_new();
    uVar4 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar4);
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107e9e8dc; end: 107e9e92f; -[IGListBatchUpdateTransaction begin] */

void FUN_107e9e8dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c209fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be01a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__diff_11255e020);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bail_1125523c0);
  return;
}



/* Entry: 107e9e930; end: 107e9eb1b; -[IGListBatchUpdateTransaction _diff] */

void FUN_107e9e930(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010c155980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfbad40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c271fc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099e00(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf45e20();
  if ((uVar2 >> 0x20 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bfbad40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c271fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_107ea50c8(uVar2,uVar3,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bdfd360(param_1);
    _objc_release(uVar4);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar6 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107e9eb1c;
    puStack_68 = &UNK_1108488f8;
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = 1;
    func_0x00010007380c(uVar6,&puStack_80);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_58);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107e9eb1c; end: 107e9ec13;  */

void FUN_107e9eb1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbad40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_107ea50c8(uVar1,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107e9ec14;
  puStack_50 = &UNK_1108488f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined1 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 107e9ec14; end: 107e9ec4b;  */

void FUN_107e9ec14(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9ec4c; end: 107e9ef2b; -[IGListBatchUpdateTransaction _didDiff:onBackground:] */

void FUN_107e9ec4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0cfd40();
  if (lVar1 == 2) goto LAB_107e9ede4;
  func_0x00010c1c8c60(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099d60(lVar1,param_2,lVar2,param_3,param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bdd2880(param_1);
    goto LAB_107e9ede4;
  }
  lVar1 = param_3;
  func_0x00010bf34de0();
  if ((lVar1 < 0x65) || (lVar1 = param_1, func_0x00010bf45e20(), ((uint)lVar1 >> 0x18 & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010c155980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0df2e0();
      lVar4 = param_1;
      func_0x00010c155980();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfbad40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf529e0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != lVar6) goto LAB_107e9eddc;
    }
    func_0x00010bdce040(param_1,param_2,param_3);
  }
  else {
LAB_107e9eddc:
    func_0x00010be8a680(param_1);
  }
LAB_107e9ede4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9ef2c; end: 107e9f383; -[IGListBatchUpdateTransaction _applyDiff:] */

void FUN_107e9ef2c(undefined **param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  ppuVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  func_0x00010c155980(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bfbad40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010c155980(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c271fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf034a0(param_1);
  func_0x00010c099e60(ppuVar2);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010bf45e20(param_1);
  if (((uint)param_2 >> 3 & 1) != 0) {
    ppuVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(ppuVar2);
    func_0x00010bdcdfe0(param_1);
    uVar9 = param_3;
    func_0x00010bfd5320();
    if ((uVar9 & 1) == 0) {
      ppuVar2 = param_1;
      func_0x00010bfeb860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bfd5320();
      _objc_release(ppuVar2);
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x00010be17560(param_1);
        goto LAB_107e9f1d8;
      }
    }
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107e9f384;
  puStack_98 = &UNK_11084d5f8;
  uStack_80 = (undefined1)((param_2 & 8) >> 3);
  ppuStack_90 = param_1;
  _objc_retain(param_3);
  ppuVar2 = &puStack_b0;
  uStack_88 = param_3;
  _objc_retainBlock();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107e9f3b4;
  puStack_c0 = &UNK_110841f20;
  ppuVar3 = &puStack_d8;
  ppuStack_b8 = param_1;
  _objc_retainBlock();
  ppuVar4 = param_1;
  func_0x00010bf034a0();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)ppuVar4 == 0) {
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar3);
    func_0x00010c0f9680(puVar1);
    _objc_release(ppuVar3);
    param_1 = ppuVar2;
  }
  else {
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8420();
  }
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
LAB_107e9f1d8:
  _objc_release(param_3);
  return;
}



/* Entry: 107e9f384; end: 107e9f3b3;  */

void FUN_107e9f384(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010bdcdfe0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyCollectioViewUpdates__1125510f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e9f3b4; end: 107e9f3bf;  */

void FUN_107e9f3b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didPerformBatchUpdate__11255d488,param_2);
  return;
}



/* Entry: 107e9f3c0; end: 107e9f3fb;  */

void FUN_107e9f3c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9f3fc; end: 107e9f58f; -[IGListBatchUpdateTransaction _applyDataUpdates] */

void FUN_107e9f3fc(undefined *param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 in_stack_fffffffffffffd70;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c209fc0(param_1,param_2,2);
  puVar17 = param_1;
  func_0x00010bf08840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c155980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar17);
    if (puVar2 != (undefined *)0x0) {
      puVar17 = param_1;
      func_0x00010bf08840();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010c155980();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puVar17 + 0x10))(puVar17,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar17);
    }
  }
  puVar2 = param_1;
  func_0x00010c084cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar17 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      (**(code **)(*(long *)((long)puVar19 * 8) + 0x10))();
      puVar19 = puVar19 + 1;
    } while (puVar17 != puVar19);
    puVar17 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar17 = (undefined *)0x3;
  func_0x00010c209fc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  puVar2 = param_1;
  func_0x00010bf45e20();
  puVar19 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (((uint)puVar2 >> 8 & 1) == 0) {
    puVar21 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar21;
    func_0x00010c156480();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010c0846c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c084260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c084a40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c084840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c155980();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfbad40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar11 != (undefined *)0x0) {
      puVar2 = puVar11;
    }
    puVar12 = param_1;
    func_0x00010bf45e20();
    puVar13 = param_1;
    func_0x00010bf45e20();
    puVar14 = puVar19;
    FUN_107e9dd74(puVar19,puVar17,puVar15,puVar3,puVar5,puVar7,puVar9,puVar2,
                  CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffffd70 >> 0x10),
                                    (char)((ulong)puVar13 >> 0x10)),(char)puVar12) &
                  0xffffffffffff0101);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010c162ee0(param_1);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar21);
  }
  else {
    puVar2 = puVar17;
    func_0x00010bf6d000(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c740(puVar19);
    _objc_release(puVar2);
    _objc_release(puVar19);
    puVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010c0674e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066dc0(puVar2);
    _objc_release(puVar19);
    _objc_release(puVar2);
    puVar19 = puVar17;
    func_0x00010c0d19c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar19;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar19);
        }
        uVar20 = *(undefined8 *)((long)puVar21 * 8);
        puVar15 = param_1;
        func_0x00010bf40120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfba9a0(uVar20);
        func_0x00010c2719c0(uVar20);
        func_0x00010c0d16e0(puVar15);
        _objc_release(puVar15);
        puVar21 = puVar21 + 1;
      } while (puVar2 != puVar21);
      puVar2 = puVar19;
      func_0x00010bf52a60();
    }
    _objc_release(puVar19);
    puVar21 = PTR_PTR_1126d8168;
    _objc_alloc();
    puVar19 = puVar17;
    func_0x00010c0674e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar17;
    func_0x00010bf6d000();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar16 = puVar17;
    func_0x00010c0d19c0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e2a0();
    puVar12 = puVar21;
    func_0x00010c162ee0(param_1);
    _objc_release(puVar21);
    _objc_release(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar15);
  }
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar17;
  func_0x00010bef1a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar17;
    func_0x00010bf6b020(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010c28d720(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar17;
    func_0x00010bef1a00(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar17;
    func_0x00010bf40120(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099da0(puVar2);
    _objc_release(puVar15);
    _objc_release(puVar21);
    _objc_release(puVar19);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar17,PTR_s__executeCompletionAsFinished__1125607e8,puVar12);
  return;
}



/* Entry: 107e9f590; end: 107e9fa1b; -[IGListBatchUpdateTransaction _applyCollectioViewUpdates:] */

void FUN_107e9f590(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
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
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 in_stack_fffffffffffffe80;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bf45e20();
  puVar3 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (((uint)puVar2 >> 8 & 1) == 0) {
    puVar20 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar20;
    func_0x00010c156480();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar17;
    func_0x00010c0846c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c084260();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c084a40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bfeb860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c084840();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c155980();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfbad40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar12 != (undefined *)0x0) {
      puVar2 = puVar12;
    }
    puVar13 = param_1;
    func_0x00010bf45e20();
    puVar14 = param_1;
    func_0x00010bf45e20();
    puVar15 = puVar3;
    FUN_107e9dd74(puVar3,param_3,puVar16,puVar4,puVar6,puVar8,puVar10,puVar2,
                  CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffffe80 >> 0x10),
                                    (char)((ulong)puVar14 >> 0x10)),(char)puVar13) &
                  0xffffffffffff0101);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c162ee0(param_1);
    _objc_release(puVar15);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar20);
  }
  else {
    puVar2 = param_3;
    func_0x00010bf6d000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c740(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c0674e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066dc0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = param_3;
    func_0x00010c0d19c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar19 = *(undefined8 *)((long)puVar20 * 8);
        puVar16 = param_1;
        func_0x00010bf40120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfba9a0(uVar19);
        func_0x00010c2719c0(uVar19);
        func_0x00010c0d16e0(puVar16);
        _objc_release(puVar16);
        puVar20 = puVar20 + 1;
      } while (puVar2 != puVar20);
      puVar2 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar20 = PTR_PTR_1126d8168;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c0674e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010bf6d000();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar17 = param_3;
    func_0x00010c0d19c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e2a0();
    puVar13 = puVar20;
    func_0x00010c162ee0(param_1);
    _objc_release(puVar20);
    _objc_release(puVar2);
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = param_3;
  func_0x00010bef1a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c28d720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_3;
    func_0x00010bef1a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099da0(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar20);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__executeCompletionAsFinished__1125607e8,puVar13);
  return;
}



/* Entry: 107e9fa1c; end: 107e9faef; -[IGListBatchUpdateTransaction _didPerformBatchUpdate:] */

void FUN_107e9fa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bef1a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bef1a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099da0(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__executeCompletionAsFinished__1125607e8,param_3);
  return;
}



/* Entry: 107e9faf0; end: 107e9fcab; -[IGListBatchUpdateTransaction _executeCompletionAsFinished:] */

void FUN_107e9faf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
    lVar1 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010bf51e00();
  _objc_retain();
  lVar1 = lVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
    lVar1 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c209fc0(param_1);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28d720(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf40120(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099e80(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010bdcdfe0(lVar2);
  lVar1 = lVar2;
  func_0x00010bf40120(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf40120(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf6b020(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28d720(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf40120(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099dc0(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__executeCompletionAsFinished__1125607e8,1);
  return;
}



/* Entry: 107e9fcac; end: 107e9fdeb; -[IGListBatchUpdateTransaction _reload] */

void FUN_107e9fcac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099e80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bdcdfe0(param_1);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099dc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionAsFinished__1125607e8,1);
  return;
}



/* Entry: 107e9fdec; end: 107e9fe77; -[IGListBatchUpdateTransaction _bail] */

void FUN_107e9fdec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099d80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionAsFinished__1125607e8,0);
  return;
}



/* Entry: 107e9fe78; end: 107e9ff03; -[IGListBatchUpdateTransaction _finishWithoutUpdate] */

void FUN_107e9fe78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c28d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099d80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionAsFinished__1125607e8,1);
  return;
}



/* Entry: 107e9ff04; end: 107e9ff1f; -[IGListBatchUpdateTransaction cancel] */

bool FUN_107e9ff04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x60) = 2;
  }
  return lVar1 == 0;
}



/* Entry: 107e9ff20; end: 107e9ff8f; -[IGListBatchUpdateTransaction insertItemsAtIndexPaths:] */

void FUN_107e9ff20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfeb860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0846c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e9ff90; end: 107e9ffff; -[IGListBatchUpdateTransaction deleteItemsAtIndexPaths:] */

void FUN_107e9ff90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfeb860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c084260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ea0000; end: 107ea00ab; -[IGListBatchUpdateTransaction moveItemFromIndexPath:toIndexPath:] */

void FUN_107ea0000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8108;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016720();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfeb860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c084840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ea00ac; end: 107ea0157; -[IGListBatchUpdateTransaction reloadItemFromIndexPath:toIndexPath:] */

void FUN_107ea00ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8178;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016760();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfeb860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c084a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ea0158; end: 107ea01c7; -[IGListBatchUpdateTransaction reloadSections:] */

void FUN_107ea0158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfeb860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c156480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef92e0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ea01c8; end: 107ea0243; -[IGListBatchUpdateTransaction addCompletionBlock:] */

void FUN_107ea01c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  uVar2 = param_3;
  _objc_retainBlock(param_3);
  func_0x00010befa120(lVar3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea0244; end: 107ea024b; -[IGListBatchUpdateTransaction collectionView] */

undefined8 FUN_107ea0244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea024c; end: 107ea0263; -[IGListBatchUpdateTransaction updater] */

void FUN_107ea024c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea0264; end: 107ea027b; -[IGListBatchUpdateTransaction delegate] */

void FUN_107ea0264(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea027c; end: 107ea0287; -[IGListBatchUpdateTransaction config] */

undefined1  [16] FUN_107ea027c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 107ea0288; end: 107ea028f; -[IGListBatchUpdateTransaction animated] */

undefined1 FUN_107ea0288(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ea0290; end: 107ea0297; -[IGListBatchUpdateTransaction sectionData] */

undefined8 FUN_107ea0290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ea0298; end: 107ea029f; -[IGListBatchUpdateTransaction applySectionDataBlock] */

undefined8 FUN_107ea0298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ea02a0; end: 107ea02a7; -[IGListBatchUpdateTransaction itemUpdateBlocks] */

undefined8 FUN_107ea02a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ea02a8; end: 107ea02af; -[IGListBatchUpdateTransaction completionBlocks] */

undefined8 FUN_107ea02a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ea02b0; end: 107ea02b7; -[IGListBatchUpdateTransaction inUpdateItemCollector] */

undefined8 FUN_107ea02b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107ea02b8; end: 107ea02bf; -[IGListBatchUpdateTransaction inUpdateCompletionBlocks] */

undefined8 FUN_107ea02b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107ea02c0; end: 107ea02c7; -[IGListBatchUpdateTransaction state] */

undefined8 FUN_107ea02c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ea02c8; end: 107ea02cf; -[IGListBatchUpdateTransaction setState:] */

void FUN_107ea02c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107ea02d0; end: 107ea02d7; -[IGListBatchUpdateTransaction mode] */

undefined8 FUN_107ea02d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


