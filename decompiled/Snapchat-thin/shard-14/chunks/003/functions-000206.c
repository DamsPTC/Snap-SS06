/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0d1648; end: 10b0d1677; -[SCLensDataPrefetcher setLensDataFetcher:] */

void FUN_10b0d1648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d1678; end: 10b0d167f; -[SCLensDataPrefetcher performer] */

undefined8 FUN_10b0d1678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0d1680; end: 10b0d16af; -[SCLensDataPrefetcher setPerformer:] */

void FUN_10b0d1680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d16b0; end: 10b0d1703; -[SCLensDataPrefetcher .cxx_destruct] */

void FUN_10b0d16b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d1704; end: 10b0d17eb; -[SCLensDataFetchRanker setLensesContextWithLens:parentContext:] */

void FUN_10b0d1704(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (lVar2 == 0) {
    func_0x00010be4a880(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183600(uVar3,param_2,param_1,2);
  }
  else {
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4a8a0(param_1,param_2,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183600(uVar3,param_2,param_1,2);
    _objc_release(param_1);
    param_1 = lVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d17ec; end: 10b0d1833; -[SCLensDataFetchRanker removeLensesContext] */

void FUN_10b0d17ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c08fb40(PTR_PTR_1126b19f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f2c0(uVar2,param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0d1834; end: 10b0d18b3; -[SCLensDataFetchRanker lensesContextForFetchingWithLensId:parentContext:] */

void FUN_10b0d1834(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be4a880(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be4a8a0(param_1,param_2,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0d18b4; end: 10b0d1953; -[SCLensDataFetchRanker _lensContextsWithParentContext:lensId:] */

void FUN_10b0d18b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010be4a880(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010befa120(puVar1,param_2,param_4);
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0d1954; end: 10b0d1a5b; -[SCLensDataFetchRanker _lensContextsWithParentContext:] */

void FUN_10b0d1954(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 1) {
    param_1 = PTR_PTR_1126b19f8;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) goto LAB_10b0d1a28;
    param_1 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
LAB_10b0d1a28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d1a5c; end: 10b0d1a67; -[SCLensDataFetchRanker .cxx_destruct] */

void FUN_10b0d1a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d1a68; end: 10b0d1adb; -[SCLensAssetsDataFetchingAdapter initWithLensDataFetcher:] */

undefined1 * FUN_10b0d1a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705a18;
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



/* Entry: 10b0d1adc; end: 10b0d1d57; -[SCLensAssetsDataFetchingAdapter fetchLensAssets:lensMetadata:fetchSourceType:] */

void FUN_10b0d1adc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar3 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar4 = uVar9;
      func_0x00010c0f98a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(puVar2);
      func_0x00010bfa4f00(uVar9);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release(puVar2);
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae558;
  puVar3 = puVar1;
  func_0x00010bf51e00();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c08fa60();
  lVar7 = *(long *)(param_3 + 0x20);
  if (param_2 == 0) {
    lVar5 = *(long *)(param_3 + 0x28);
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf43ca0(lVar7);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(lVar7);
    lVar5 = lVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5 + 8,0);
  return;
}



/* Entry: 10b0d1d58; end: 10b0d1eff;  */

void FUN_10b0d1d58(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c08fa60();
  lVar7 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf43ca0(lVar7);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(lVar7);
    lVar1 = lVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 10b0d1f00; end: 10b0d1f0b; -[SCLensAssetsDataFetchingAdapter .cxx_destruct] */

void FUN_10b0d1f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d1f0c; end: 10b0d1fd7; -[SCLensBitmojiIconFetcher initWithLensDownloadOperationFactory:loadingQueue:performer:] */

undefined1 *
FUN_10b0d1f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112705a20;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0d1fd8; end: 10b0d20ef; -[SCLensBitmojiIconFetcher fetchBitmojiIconFor:] */

void FUN_10b0d1fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1ba00(uVar1,param_2,param_3,6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = uVar1;
  func_0x00010c13ccc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b0d20f0;
  puStack_50 = &UNK_110cb8e18;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c297260(uVar4,param_2,&puStack_68,uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010befa340(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  puVar5 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0d20f0; end: 10b0d21b3;  */

void FUN_10b0d20f0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_2;
    func_0x00010c13cc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_2;
    if (lVar1 == 0) {
      func_0x00010bf987e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar3);
    }
    else {
      func_0x00010c13cc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d21b4; end: 10b0d21ef; -[SCLensBitmojiIconFetcher .cxx_destruct] */

void FUN_10b0d21b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d21f0; end: 10b0d226b; -[SCLensContentFetcherAdapter initWithLegacyLensDataFetcher:] */

undefined1 * FUN_10b0d21f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705a28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010be3bc60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0d226c; end: 10b0d23af; -[SCLensContentFetcherAdapter _initializeSubjects] */

void FUN_10b0d226c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010be15760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be15760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be15760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be15760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b0d23b0; end: 10b0d241f;  */

void FUN_10b0d23b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010befac00(param_2);
  }
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0d2420; end: 10b0d24d7; -[SCLensContentFetcherAdapter _fetcherEventsSubject] */

void FUN_10b0d2420(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0d24d8; end: 10b0d2547;  */

void FUN_10b0d24d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bef9980(param_2);
  }
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new(PTR_PTR_1126ae568);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0d2548; end: 10b0d254f; -[SCLensContentFetcherAdapter assetFetchingObservable] */

void FUN_10b0d2548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0d2550; end: 10b0d2557; -[SCLensContentFetcherAdapter contentFetchingObservable] */

void FUN_10b0d2550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0d2558; end: 10b0d255f; -[SCLensContentFetcherAdapter externalDataFetchingObservable] */

void FUN_10b0d2558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0d2560; end: 10b0d2567; -[SCLensContentFetcherAdapter imageFetchingObservable] */

void FUN_10b0d2560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0d2568; end: 10b0d256f; -[SCLensContentFetcherAdapter progressObservable] */

void FUN_10b0d2568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0d2570; end: 10b0d25e3; -[SCLensContentFetcherAdapter fetchLenses:fetchSourceType:] */

void FUN_10b0d2570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfa7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0d25e4; end: 10b0d265f; -[SCLensContentFetcherAdapter fetchLenses:requestTiming:fetchSourceType:] */

void FUN_10b0d25e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfa7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0d2660; end: 10b0d270f; -[SCLensContentFetcherAdapter fetchAsset:lens:fetchSourceType:completionPerformer:completion:] */

void FUN_10b0d2660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4f00();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d2710; end: 10b0d276f; -[SCLensContentFetcherAdapter fetchCachedLenses:fetchSourceType:] */

void FUN_10b0d2710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa56e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d2770; end: 10b0d27d7; -[SCLensContentFetcherAdapter fetchIconsForLenses:requestTiming:fetchSourceType:] */

void FUN_10b0d2770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa77c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d27d8; end: 10b0d280b; -[SCLensContentFetcherAdapter cancelDownloads] */

void FUN_10b0d27d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d280c; end: 10b0d283f; -[SCLensContentFetcherAdapter pauseDownloads] */

void FUN_10b0d280c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d2840; end: 10b0d2873; -[SCLensContentFetcherAdapter resumeDownloads] */

void FUN_10b0d2840(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d2874; end: 10b0d28c3; -[SCLensContentFetcherAdapter clearCacheWithCompletionBlock:] */

void FUN_10b0d2874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ac80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d28c4; end: 10b0d29db; -[SCLensContentFetcherAdapter didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_10b0d28c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126af5d0;
    if (param_6 == 0) {
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126dfa70;
    func_0x00010bf769e0(PTR_PTR_1126dfa70,param_2,param_3,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d29dc; end: 10b0d2ad3; -[SCLensContentFetcherAdapter didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0d29dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126af5d0;
    if (param_5 == 0) {
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126dfa78;
    func_0x00010bf76b00(PTR_PTR_1126dfa78,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2ad4; end: 10b0d2b73; -[SCLensContentFetcherAdapter didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_10b0d2ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126dfa80;
    func_0x00010bf76a80(PTR_PTR_1126dfa80,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2b74; end: 10b0d2c6b; -[SCLensContentFetcherAdapter didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0d2b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126af5d0;
    if (param_5 == 0) {
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126dfa88;
    func_0x00010bf76ae0(PTR_PTR_1126dfa88,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2c6c; end: 10b0d2d0b; -[SCLensContentFetcherAdapter willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_10b0d2c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126dfa70;
    func_0x00010c2a6d20(PTR_PTR_1126dfa70,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2d0c; end: 10b0d2d93; -[SCLensContentFetcherAdapter willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0d2d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126dfa78;
    func_0x00010c2a6e00(PTR_PTR_1126dfa78,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2d94; end: 10b0d2e1b; -[SCLensContentFetcherAdapter willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_10b0d2d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126dfa80;
    func_0x00010c2a6d80(PTR_PTR_1126dfa80,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2e1c; end: 10b0d2ea3; -[SCLensContentFetcherAdapter willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0d2e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126dfa88;
    func_0x00010c2a6dc0(PTR_PTR_1126dfa88,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2ea4; end: 10b0d2f4b; -[SCLensContentFetcherAdapter willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_10b0d2ea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126dfa78;
    func_0x00010c2a6e40(PTR_PTR_1126dfa78,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d2f4c; end: 10b0d2fa7; -[SCLensContentFetcherAdapter asset:forLens:didUpdateProgress:lensDataFetcher:] */

void FUN_10b0d2f4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dfa90;
  func_0x00010c08ff60(PTR_PTR_1126dfa90);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0d2fa8; end: 10b0d3003; -[SCLensContentFetcherAdapter contentForLens:didUpdateProgress:lensDataFetcher:] */

void FUN_10b0d2fa8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dfa90;
  func_0x00010c091dc0(PTR_PTR_1126dfa90);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0d3004; end: 10b0d305f; -[SCLensContentFetcherAdapter externalDataForLens:didUpdateProgress:lensDataFetcher:] */

void FUN_10b0d3004(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dfa90;
  func_0x00010bf9e040(PTR_PTR_1126dfa90);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0d3060; end: 10b0d30bf; -[SCLensContentFetcherAdapter .cxx_destruct] */

void FUN_10b0d3060(long param_1)

{
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



/* Entry: 10b0d30c0; end: 10b0d33ef;  */

void FUN_10b0d30c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c136600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9580();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = param_2;
    func_0x00010bf88e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6d40(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d33f0; end: 10b0d349f;  */

void FUN_10b0d33f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c19c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d34a0; end: 10b0d34bb;  */

void FUN_10b0d34a0(void)

{
  return;
}



/* Entry: 10b0d34bc; end: 10b0d358f;  */

void FUN_10b0d34bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0800(param_3);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d3590; end: 10b0d35c7;  */

void FUN_10b0d3590(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf76a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),
             PTR_s_didFinishLoadingContentForLens_c_1125bb430,*(undefined8 *)(param_1 + 0x28),
             param_2,0,1,1);
  return;
}



/* Entry: 10b0d35c8; end: 10b0d366f;  */

void FUN_10b0d35c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c1960(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d3670; end: 10b0d3687;  */

void FUN_10b0d3670(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),
             PTR_s_willStartLoadingAsset_lens_fromA_112687568,param_2,param_3,1);
  return;
}



/* Entry: 10b0d3688; end: 10b0d379f;  */

void FUN_10b0d3688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0c0800(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d37a0; end: 10b0d37df;  */

void FUN_10b0d37a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf76a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),
             PTR_s_didFinishLoadingContentForAsset__1125bb428,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),param_2,0,1);
  return;
}



/* Entry: 10b0d37e0; end: 10b0d37e7; -[SCLensDataFetcher removeEventsListener:] */

void FUN_10b0d37e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10b0d37e8; end: 10b0d37f3; -[SCLensDataFetcher fetchLenses:requestTiming:fetchSourceType:] */

void FUN_10b0d37e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be12230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchLenses_requestTiming_fetch_112562228);
  return;
}



/* Entry: 10b0d37f4; end: 10b0d381f; -[SCLensDataFetcher fetchCachedLenses:fetchSourceType:] */

void FUN_10b0d37f4(void)

{
  func_0x00010be12220();
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b0d3820; end: 10b0d39a3; -[SCLensDataFetcher _fetchLenses:requestTiming:fetchSourceType:cacheOnly:performer:] */

void FUN_10b0d3820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010be11a60(param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  _objc_retain(param_7);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(param_7);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0d39a4; end: 10b0d3f6b;  */

ulong FUN_10b0d39a4(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lStack_300;
  ulong uStack_2f0;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lVar11 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar11);
    lStack_300 = lVar11;
    func_0x00010bf52a60();
    if (lStack_300 != 0) {
      lVar9 = *plStack_1c0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1c0 != lVar9) {
            _objc_enumerationMutation(lVar11);
          }
          lVar15 = *(long *)(lStack_1c8 + lVar10 * 8);
          lVar3 = lVar15;
          func_0x00010c0b8380();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bfaea20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          uVar5 = uVar1;
          func_0x00010bf04760(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a6de0();
          _objc_release(uVar5);
          lVar3 = lVar15;
          func_0x00010c13b280();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar3;
          func_0x00010bf5fe00();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010bdc3360();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar13;
          func_0x00010c08fa60();
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar3);
          if (lVar6 == 0) {
LAB_10b0d3bc8:
            uStack_2f0 = 0;
          }
          else {
            lVar3 = lVar15;
            func_0x00010bf4cf00();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar3;
            func_0x00010c08fa60();
            _objc_release(lVar3);
            if (lVar12 != 0) {
              uVar5 = uVar1;
              func_0x00010bf04760(uVar1);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar15;
              func_0x00010bf4cf00(lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf76a20(uVar5);
              _objc_release(lVar3);
              _objc_release(uVar5);
              goto LAB_10b0d3bc8;
            }
            uStack_2f0 = uVar1;
            func_0x00010be9aee0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
          }
          uVar5 = uVar1;
          func_0x00010be9afa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1f8 = 0xc2000000;
          pcStack_1f0 = FUN_10b0d3f8c;
          puStack_1e8 = &UNK_110cb90d8;
          _objc_copyWeak(auStack_1d8,param_1 + 0x38);
          lStack_1e0 = lVar15;
          func_0x00010c297260(uVar5);
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          lStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          plStack_230 = (long *)0x0;
          _objc_retain(lVar4);
          lVar3 = lVar4;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar12 = *plStack_230;
            do {
              lVar13 = 0;
              do {
                if (*plStack_230 != lVar12) {
                  _objc_enumerationMutation(lVar4);
                }
                uVar14 = *(undefined8 *)(lStack_238 + lVar13 * 8);
                puVar7 = PTR_PTR_1126ae560;
                _objc_opt_new();
                puVar8 = puVar7;
                func_0x00010bfbc3e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2);
                _objc_release(puVar8);
                puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_268 = 0xc2000000;
                pcStack_260 = FUN_10b0d4038;
                puStack_258 = &UNK_110866ee0;
                _objc_retain(puVar7);
                puStack_250 = puVar7;
                uStack_248 = uVar14;
                func_0x00010be0f9e0(uVar1);
                _objc_release(puStack_250);
                _objc_release(puVar7);
                lVar13 = lVar13 + 1;
              } while (lVar3 != lVar13);
              lVar3 = lVar4;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
          }
          _objc_release(lVar4);
          param_2 = param_1 + 0x38;
          _objc_copyWeak(auStack_278,param_2);
          func_0x00010c297260(uStack_2f0);
          _objc_destroyWeak(auStack_278);
          _objc_destroyWeak(auStack_1d8);
          _objc_release(uVar5);
          _objc_release(lVar4);
          _objc_release(uStack_2f0);
          lVar10 = lVar10 + 1;
        } while (lVar10 != lStack_300);
        lStack_300 = lVar11;
        func_0x00010bf52a60();
      } while (lStack_300 != 0);
    }
    _objc_release(lVar11);
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar14);
    func_0x00010c297260(puVar7);
    _objc_release(puVar7);
    _objc_release(uVar14);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_278);
  _objc_destroyWeak(auStack_1d8);
  __Unwind_Resume(uVar1);
  func_0x00010c136b80(param_2);
  return (ulong)(param_2 == 6);
}



/* Entry: 10b0d3f6c; end: 10b0d3f8b;  */

bool FUN_10b0d3f6c(undefined8 param_1,long param_2)

{
  func_0x00010c136b80(param_2);
  return param_2 == 6;
}



/* Entry: 10b0d3f8c; end: 10b0d4037;  */

void FUN_10b0d3f8c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf987e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76a60(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d4038; end: 10b0d404f;  */

void FUN_10b0d4038(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0d4050; end: 10b0d42a7;  */

void FUN_10b0d4050(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != (undefined *)0x0) && (param_1 != 0)) {
    puVar1 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar1;
    }
    _objc_retain(puVar3);
    _objc_release(puVar1);
    puVar2 = param_2;
    func_0x00010c13cc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar2 == (undefined *)0x0 && puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar1;
    }
    puVar1 = param_2;
    func_0x00010c136600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9580();
    _objc_release(puVar1);
    lVar4 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c13cc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76a20(lVar4);
    _objc_release(puVar1);
    _objc_release(lVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x00010c27dd80(lVar4);
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010c136600();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfa9580();
  _objc_release(lVar5);
  if (lVar6 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c092390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),
             PTR_s_lensDataFetcher_didFinishLoading_1126022f0,*(long *)(param_2 + 0x28),
             *(undefined8 *)(param_2 + 0x30),lVar4 == 0);
  return;
}



/* Entry: 10b0d42a8; end: 10b0d4323;  */

void FUN_10b0d42a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c27dd80(lVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c136600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa9580();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c092390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),
             PTR_s_lensDataFetcher_didFinishLoading_1126022f0,*(long *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),lVar1 == 0);
  return;
}



/* Entry: 10b0d4324; end: 10b0d433b;  */

void FUN_10b0d4324(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 10b0d433c; end: 10b0d448f; -[SCLensDataFetcher fetchContentForLens:requestTiming:fetchSourceType:] */

void FUN_10b0d433c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0d4490; end: 10b0d45f3;  */

void FUN_10b0d4490(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be9aee0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10b0d4568;
    puStack_48 = &UNK_110cb9108;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar4;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c297260(lVar2,param_2,&puStack_60,*(undefined8 *)(lVar1 + 0x30));
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b0d45f4; end: 10b0d4623; -[SCLensDataFetcher fetchAsset:lens:fetchSourceType:completionPerformer:completion:] */

void FUN_10b0d45f4(void)

{
  func_0x00010be0f9e0();
  return;
}



/* Entry: 10b0d4624; end: 10b0d47a3; -[SCLensDataFetcher _fetchAsset:lens:fetchSourceType:cacheOnly:performer:completionPerformer:completion:] */

void FUN_10b0d4624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_6;
  _objc_retain(param_9);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d47a4; end: 10b0d4a33;  */

void FUN_10b0d47a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10b0d4a34;
    puStack_a0 = &UNK_110cb9168;
    _objc_copyWeak(auStack_80,param_1 + 0x40);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = uVar7;
    _objc_retain(uVar8);
    uStack_90 = uVar8;
    _objc_retain(puVar3);
    lVar4 = lVar2;
    puStack_88 = puVar3;
    func_0x00010bf0bbc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010be9b460(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10b0d4c14;
    puStack_d8 = &UNK_110cb9198;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uStack_d0 = uVar7;
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uStack_c8 = uVar8;
    _objc_retain(uVar7);
    uStack_c0 = uVar7;
    func_0x00010c297260(lVar6);
    _objc_copyWeak(auStack_f8,param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    _objc_retain(puVar3);
    func_0x00010c297260(lVar6);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_f8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(lVar6);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b0d4a34; end: 10b0d4bb3;  */

void FUN_10b0d4a34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x00010bdfbac0(lVar1);
    lVar2 = lVar1;
    func_0x00010c0ebc20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136b80(*(undefined8 *)(param_1 + 0x20));
    lVar4 = lVar2;
    func_0x00010bf0b160(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010c1178e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b0d4bb4; end: 10b0d4c13;  */

void FUN_10b0d4bb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf0af20(*(undefined8 *)(param_1 + 0x60));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d4c14; end: 10b0d4cd3;  */

void FUN_10b0d4c14(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar1 = param_2;
    func_0x00010c13cc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uVar2 = param_2;
      func_0x00010bf987e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
      _objc_release(uVar2);
    }
    else {
      (**(code **)(lVar3 + 0x10))(lVar3,uVar1,param_3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d4cd4; end: 10b0d4ecf;  */

void FUN_10b0d4cd4(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    if (puVar2 != (undefined *)0x0) {
      puVar4 = puVar2;
    }
    _objc_retain(puVar4);
    _objc_release(puVar2);
    puVar3 = param_2;
    func_0x00010c13cc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar3 == (undefined *)0x0 && puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar2;
    }
    lVar5 = lVar1;
    func_0x00010bf04760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c13cc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76a00(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar5);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b0d4ed0; end: 10b0d4edb; -[SCLensDataFetcher fetchLenses:fetchSourceType:] */

void FUN_10b0d4ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchLenses_requestTiming_fetchS_1125c7990,param_3,5,param_4);
  return;
}



/* Entry: 10b0d4edc; end: 10b0d4ee7; -[SCLensDataFetcher fetchIconsForLenses:requestTiming:fetchSourceType:] */

void FUN_10b0d4edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchIconsForLenses_requestTimi_112562038);
  return;
}



/* Entry: 10b0d4ee8; end: 10b0d4fe7; -[SCLensDataFetcher _fetchIconsForLenses:requestTiming:fetchSourceType:cacheOnly:performer:] */

void FUN_10b0d4ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_6;
  func_0x00010c0f7fc0(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d4fe8; end: 10b0d526b;  */

void FUN_10b0d4fe8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **unaff_x27;
  long lVar9;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
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
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_130;
      unaff_x27 = &puStack_170;
      do {
        lVar6 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = *(long *)(lStack_138 + lVar6 * 8);
          lVar8 = lVar7;
          func_0x00010bfe5b40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar8;
          func_0x00010c08fa60();
          _objc_release(lVar8);
          lVar8 = 0;
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar1 + 0x40);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010bf4c6e0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar4;
            func_0x00010c094380();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            _objc_release(lVar4);
            if (lVar3 == 0) {
              lVar8 = lVar1;
              func_0x00010be9b100();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lVar8 = lVar1;
              func_0x00010bf04760(lVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf76ac0();
              _objc_release(lVar8);
              lVar8 = 0;
            }
            _objc_release(lVar3);
          }
          puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_168 = 0xc2000000;
          pcStack_160 = FUN_10b0d526c;
          puStack_158 = &UNK_110cb90d8;
          param_2 = param_1 + 0x28;
          _objc_copyWeak(auStack_148);
          lStack_150 = lVar7;
          func_0x00010c297260(lVar8);
          _objc_destroyWeak(auStack_148);
          _objc_release(lVar8);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 5);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = param_2;
    func_0x00010c136600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9580();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf04760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c13cc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010bf987e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76ac0(lVar2);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d526c; end: 10b0d536b;  */

void FUN_10b0d526c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c136600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9580();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c13cc60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf987e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76ac0(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0d536c; end: 10b0d53a3; -[SCLensDataFetcher cancelDownloads] */

void FUN_10b0d536c(undefined8 param_1)

{
  func_0x00010bf00720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d53a4; end: 10b0d53db; -[SCLensDataFetcher pauseDownloads] */

void FUN_10b0d53a4(undefined8 param_1)

{
  func_0x00010bf00720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d53dc; end: 10b0d5413; -[SCLensDataFetcher resumeDownloads] */

void FUN_10b0d53dc(undefined8 param_1)

{
  func_0x00010bf00720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d5414; end: 10b0d5617; -[SCLensDataFetcher removeExpiredData:completion:] */

void FUN_10b0d5414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar2 = param_4;
  _objc_retain();
  _dispatch_group_create();
  _objc_initWeak(auStack_68,param_1);
  _dispatch_group_enter(uVar2);
  lVar3 = param_1;
  func_0x00010c28f440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b0d5618;
  puStack_80 = &UNK_11085c6a8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar2);
  uStack_78 = uVar2;
  func_0x00010c12c280(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _dispatch_group_enter(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10b0d5680;
  puStack_a8 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_a0 = uVar2;
  func_0x00010c0f7fc0(uVar6);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10b0d56ac;
  puStack_d0 = &UNK_110849530;
  uStack_c8 = param_4;
  _objc_retain(param_4);
  func_0x000107c27d98(uVar2,uVar5,&puStack_e8);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_c8);
  _objc_release(uStack_a0);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0d5618; end: 10b0d567f;  */

void FUN_10b0d5618(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  if (lVar2 != 0) {
    func_0x00010bf3b560(lVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d5680; end: 10b0d56ab;  */

void FUN_10b0d5680(long param_1)

{
  func_0x00010c12c2c0(PTR_PTR_1126c3458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0d56ac; end: 10b0d56bf;  */

void FUN_10b0d56ac(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0d56b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b0d56c0; end: 10b0d570b; -[SCLensDataFetcher clearInMemoryCache] */

void FUN_10b0d56c0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1385a0(PTR_PTR_1126ae6a8);
  func_0x00010c138960(PTR_PTR_1126ae6a8);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0d570c; end: 10b0d57b3; -[SCLensDataFetcher clearCacheFromTweaks] */

void FUN_10b0d570c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf3ac80(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10b0d57b4; end: 10b0d5853;  */

void FUN_10b0d57b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  func_0x00010bf3b560(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b0d5854; end: 10b0d5887;  */

void FUN_10b0d5854(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010bf73940(*(undefined8 *)(param_1 + 8),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0d5888; end: 10b0d5ac7; -[SCLensDataFetcher clearCacheWithCompletionBlock:] */

void FUN_10b0d5888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  func_0x00010bf2e2c0(param_1);
  lVar2 = param_1;
  func_0x00010bf3b560();
  _dispatch_group_create();
  _dispatch_group_enter();
  lVar3 = param_1;
  func_0x00010c28f440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b0d5ac8;
  puStack_70 = &UNK_110842e18;
  _objc_retain(lVar2);
  lStack_68 = lVar2;
  func_0x00010c138380(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _dispatch_group_enter(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10b0d5ad0;
  puStack_98 = &UNK_110842e18;
  _objc_retain(lVar2);
  lStack_90 = lVar2;
  func_0x00010c0f7fc0(uVar6);
  _dispatch_group_enter(lVar2);
  _objc_initWeak(auStack_b8,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10b0d5afc;
  puStack_d0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_retain(lVar2);
  lStack_c8 = lVar2;
  func_0x00010c0f7fc0(uVar5);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10b0d5b40;
  puStack_f8 = &UNK_110849530;
  uStack_f0 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d98(lVar2,uVar6,&puStack_110);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_f0);
  _objc_release(lStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(lStack_90);
  _objc_release(lStack_68);
  _objc_release(param_3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10b0d5ac8; end: 10b0d5acf;  */

void FUN_10b0d5ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0d5ad0; end: 10b0d5b3f;  */

void FUN_10b0d5ad0(long param_1)

{
  func_0x00010c138360(PTR_PTR_1126c3458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0d5b40; end: 10b0d5b53;  */

void FUN_10b0d5b40(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0d5b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b0d5b54; end: 10b0d5b7b; -[SCLensDataFetcher lensUIStateListener] */

void FUN_10b0d5b54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


