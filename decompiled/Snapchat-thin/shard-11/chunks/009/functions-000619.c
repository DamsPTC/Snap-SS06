/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bdae5c; end: 108bdaedb; -[SCDocObjectSnapchattersObservableRepository nonFriendSnapchatterObservableWithQueue:] */

void FUN_108bdae5c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000108bf3764(uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdaedc; end: 108bdaee3;  */

void FUN_108bdaedc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bdaee4; end: 108bdb05b; -[SCDocObjectSnapchattersObservableRepository localOrRemoteSnapchatterObservableWithUserIds:requestSource:queue:] */

void FUN_108bdaee4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_5;
    if (param_5 == 0) {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    _objc_retain(lVar1);
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c2445e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    _objc_retain(lVar1);
    lVar2 = param_1;
    func_0x00010bfb2660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_58);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108bdb05c; end: 108bdb283;  */

void FUN_108bdb05c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80();
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lVar10 * 8);
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(uVar3);
        _objc_release(uVar4);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar9 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar9);
    uVar4 = uVar3;
    func_0x00010bf51e00(uVar3);
    puVar5 = puVar9;
    func_0x00010be4f320(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    puVar6 = puVar5;
    func_0x00010c0b8600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar9 = *(undefined **)(param_2 + 0x20);
    _objc_retain(lVar7);
    func_0x00010c0d3c80(puVar9);
    func_0x00010befa160();
    _objc_release(lVar7);
    puVar6 = puVar9;
    func_0x00010bf51e00(puVar9);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108bdb284; end: 108bdb2df;  */

void FUN_108bdb284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d3c80(uVar2);
  func_0x00010befa160();
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdb2e0; end: 108bdb3db; -[SCDocObjectSnapchattersObservableRepository snapchatterObservableWithUserIds:queue:] */

void FUN_108bdb2e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_4;
  if (param_4 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(lVar2);
  _objc_retain(param_4);
  func_0x000108bf39e0(uVar3,lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar1 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdb3dc; end: 108bdb47b;  */

void FUN_108bdb3dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c31914(param_2,&PTR___NSConcreteGlobalBlock_110ab6b70,
                      &PTR___NSConcreteGlobalBlock_110ab6b90);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108bdb4ac;
  puStack_30 = &UNK_11089b0f0;
  uStack_28 = param_2;
  _objc_retain();
  func_0x000107c31908(uVar1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdb47c; end: 108bdb483;  */

void FUN_108bdb47c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bdb484; end: 108bdb4ab;  */

void FUN_108bdb484(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bdb4ac; end: 108bdb4b7;  */

void FUN_108bdb4ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108bdb4b8; end: 108bdb57b; -[SCDocObjectSnapchattersObservableRepository snapchatterObservableWithUserId:queue:] */

void FUN_108bdb4b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_4;
    if (param_4 == 0) {
      lVar2 = *(long *)(param_1 + 0x30);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(lVar2);
    func_0x00010c2448a0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0e0500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdb57c; end: 108bdb6d3; -[SCDocObjectSnapchattersObservableRepository pinnedBestFriendSnapchatterObservableWithQueue:] */

void FUN_108bdb57c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000108bf33fc(uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdb6d4; end: 108bdb7cf; -[SCDocObjectSnapchattersObservableRepository _localOrRemoteSnapchatterObservableWithUserIds:requestSource:queue:] */

void FUN_108bdb6d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108bdb7d0;
    puStack_50 = &UNK_11085c638;
    _objc_retain(puVar3);
    puStack_48 = puVar3;
    func_0x00010c244ea0(uVar2,param_2,param_3,param_4,param_5,&puStack_68);
    _objc_release(uVar2);
    _objc_release(puStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108bdb7d0; end: 108bdb80b;  */

void FUN_108bdb7d0(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 == 0 && param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108bdb80c; end: 108bdb93b; -[SCDocObjectSnapchattersObservableRepository _suggestionUserIdsObservableForSuggestionPage:queue:] */

void FUN_108bdb80c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000108bf3b80(uVar1,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000108bf3e60(uVar2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108bdb93c; end: 108bdba23;  */

void FUN_108bdb93c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar3 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010bec8e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108bdba24; end: 108bdbc5b; -[SCDocObjectSnapchattersObservableRepository _suggestionUserIdsAfterPromoteTopDisplayedSuggestion:suggestionUserIds:] */

void FUN_108bdba24(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    _objc_retain(param_4);
    puVar6 = param_4;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c292720(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    func_0x00010bf97f00(lVar2);
    _objc_release(lVar2);
    _objc_retain(puVar5);
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar5);
        }
        func_0x00010c066b00(puVar4);
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar6 = puVar4;
    func_0x00010bf09f00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_3 + 0x20));
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bdbc5c; end: 108bdbcaf;  */

void FUN_108bdbc5c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bdbcb0; end: 108bdbd33; -[SCDocObjectSnapchattersObservableRepository .cxx_destruct] */

void FUN_108bdbcb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 108bdbd34; end: 108bdbdd7; -[SCHiddenSuggestionInMemoryCache init] */

undefined1 * FUN_108bdbd34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdc20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    func_0x00010be07d40(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108bdbdd8; end: 108bdbe37; -[SCHiddenSuggestionInMemoryCache hiddenSuggestions] */

void FUN_108bdbdd8(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x108bdbe60;
  puStack_20 = &UNK_1108dbc00;
  lStack_18 = param_1;
  func_0x000107c31914(*(undefined8 *)(param_1 + 0x10),&PTR___NSConcreteGlobalBlock_110ab6c00,
                      &puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bdbe38; end: 108bdbe93;  */

void FUN_108bdbe38(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bdbe94; end: 108bdbebb; -[SCHiddenSuggestionInMemoryCache hiddenSuggestionsObservable] */

void FUN_108bdbe94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdbebc; end: 108bdbf1f; -[SCHiddenSuggestionInMemoryCache hideWithUserId:] */

void FUN_108bdbebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010be07d40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bdbf20; end: 108bdbfa3; -[SCHiddenSuggestionInMemoryCache setFeedbackIndex:forUserId:] */

void FUN_108bdbf20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be07d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitHiddenSuggestions_11255f8f0);
  return;
}



/* Entry: 108bdbfa4; end: 108bdc00b; -[SCHiddenSuggestionInMemoryCache unhideWithUserId:] */

void FUN_108bdbfa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    func_0x00010be07d40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bdc00c; end: 108bdc06f; -[SCHiddenSuggestionInMemoryCache hasSetFeedback:] */

undefined8 FUN_108bdc00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf002e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 108bdc070; end: 108bdc0eb; -[SCHiddenSuggestionInMemoryCache shouldShowFeedbackForUserId:] */

uint FUN_108bdc070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf002e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf4b900();
    uVar3 = (uint)uVar1 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108bdc0ec; end: 108bdc113; -[SCHiddenSuggestionInMemoryCache userIdOfLastHiddenSuggestionPendingFeedback] */

void FUN_108bdc0ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdc114; end: 108bdc177; -[SCHiddenSuggestionInMemoryCache clear] */

void FUN_108bdc114(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be07d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitHiddenSuggestions_11255f8f0);
  return;
}



/* Entry: 108bdc178; end: 108bdc1c3; -[SCHiddenSuggestionInMemoryCache _getFeedback:] */

long FUN_108bdc178(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c282820();
  _objc_release(lVar1);
  lVar1 = lVar2;
  if (lVar2 != 2) {
    lVar1 = 0;
  }
  if (lVar2 == 1) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 108bdc1c4; end: 108bdc1ff; -[SCHiddenSuggestionInMemoryCache _emitHiddenSuggestions] */

void FUN_108bdc1c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe1460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bdc200; end: 108bdc247; -[SCHiddenSuggestionInMemoryCache .cxx_destruct] */

void FUN_108bdc200(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bdc248; end: 108bdc3e3; -[SCNonSnapchattersDataProvider initWithDocObjectContext:] */

undefined8 * FUN_108bdc248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdc28;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = puVar1[2];
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108bdc3e4; end: 108bdc423;  */

void FUN_108bdc3e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde7200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108bdc424; end: 108bdc523; -[SCNonSnapchattersDataProvider contactNonSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108bdc424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108bdc524;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000107c2a728(uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdc524; end: 108bdc557;  */

void FUN_108bdc524(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bdc558; end: 108bdc5bf; -[SCNonSnapchattersDataProvider contactNonSnapchatters] */

void FUN_108bdc558(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108bdc5c0; end: 108bdc623; -[SCNonSnapchattersDataProvider _contactNonSnapchattersObserver] */

void FUN_108bdc5c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000108c12b64(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0ab0;
  func_0x00010bfab960(PTR_PTR_1126c0ab0,param_2,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x18),uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bdc624; end: 108bdc6eb; -[SCNonSnapchattersDataProvider _fetchAndObserveContactNonSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108bdc624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf49e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bdc6ec;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 108bdc6ec; end: 108bdc6ff;  */

void FUN_108bdc6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bdc6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bdc700; end: 108bdc747; -[SCNonSnapchattersDataProvider .cxx_destruct] */

void FUN_108bdc700(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bdc748; end: 108bdc893; -[SCNonSnapchattersObservableRepositoryImpl initWithDocObjectContext:performerProvider:] */

undefined8 *
FUN_108bdc748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fdc30;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108bdc894; end: 108bdc8db;  */

void FUN_108bdc894(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108bdc8dc; end: 108bdc96f; -[SCNonSnapchattersObservableRepositoryImpl contactNonSnapchattersObservable] */

void FUN_108bdc8dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c12a80(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdc970; end: 108bdc977;  */

void FUN_108bdc970(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bdc978; end: 108bdc9c3; -[SCNonSnapchattersObservableRepositoryImpl _createPerformerWithPerformerProvider:] */

void FUN_108bdc978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdc9c4; end: 108bdca27; -[SCNonSnapchattersObservableRepositoryImpl .cxx_destruct] */

void FUN_108bdc9c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bdca28; end: 108bdcb37; -[SCPinnedSuggestedSnapchatterDataProvider didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_108bdca28(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bf0ab00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdcb38; end: 108bdcb8b;  */

void FUN_108bdcb38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ab00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be88120(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bdcb8c; end: 108bdcb8f; -[SCPinnedSuggestedSnapchatterDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_108bdcb8c(void)

{
  return;
}



/* Entry: 108bdcb90; end: 108bdcb93; -[SCPinnedSuggestedSnapchatterDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108bdcb90(void)

{
  return;
}



/* Entry: 108bdcb94; end: 108bdccf3; -[SCPinnedSuggestedSnapchatterDataProvider _refetchPinnedSuggestedSnapchattersIfNeededWithSuggestDataRequestView:] */

void FUN_108bdcb94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  func_0x00010c262280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ab6c70);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c31908(uVar2,&PTR___NSConcreteGlobalBlock_110ab6c90);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c31908(uVar3,&PTR___NSConcreteGlobalBlock_110ab6cb0);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c069880();
    if ((((ulong)puVar7 & 1) != 0) || (puVar7 = puVar4, func_0x00010c069880(), (int)puVar7 != 0)) {
      lVar8 = param_1;
      func_0x00010be14c80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar8);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bdccf4; end: 108bdcd0b;  */

void FUN_108bdccf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bdcd0c; end: 108bdcf13; -[SCPinnedSuggestedSnapchatterDataProvider _observePinningMetadataObservablesAndRefetchSuggestionsIfNeeded] */

void FUN_108bdcd0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (*(long *)(param_1 + 0x40) == 0) {
    _objc_initWeak(auStack_78,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar2;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar10);
    uVar8 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_78);
  }
  return;
}



/* Entry: 108bdcf14; end: 108bdcf8f;  */

void FUN_108bdcf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be14c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108bdcf90; end: 108bdcf9b;  */

void FUN_108bdcf90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 108bdcf9c; end: 108bdd183; -[SCPinnedSuggestedSnapchatterDataProvider _fetchSuggestedSnapachattersFromPinnedMetadataForTopSuggestions:pinningMetadataForRecentlyJoiners:] */

void FUN_108bdcf9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bee6d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108c1be44();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar6 = *plStack_110;
    do {
      if (*plStack_110 != lVar6) {
        _objc_enumerationMutation(puVar5);
      }
      puVar4 = puVar4 + -1;
    } while ((puVar4 != (undefined *)0x0) ||
            (puVar4 = puVar5, func_0x00010bf52a60(), puVar4 != (undefined *)0x0));
  }
  _objc_release(puVar5);
  puVar4 = puVar5;
  lVar6 = lVar2;
  func_0x00010be6e380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_108bdd184;
    lStack_150 = lVar2;
    lStack_148 = param_1;
    uStack_140 = param_4;
    uStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(lVar6);
    func_0x000107c31914(puVar4,&PTR___NSConcreteGlobalBlock_110ab6cd0,
                        &PTR___NSConcreteGlobalBlock_110ab6cf0);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108bdd268;
    puStack_160 = &UNK_11089b0f0;
    puStack_158 = puVar4;
    _objc_retain();
    param_1 = lVar6;
    func_0x000107c31908(lVar6,&puStack_178);
    _objc_release(lVar6);
    _objc_release(puStack_158);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108bdd184; end: 108bdd237; -[SCPinnedSuggestedSnapchatterDataProvider _orderSnapchatters:byOrderOfUserIds:] */

void FUN_108bdd184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x000107c31914(param_3,&PTR___NSConcreteGlobalBlock_110ab6cd0,
                      &PTR___NSConcreteGlobalBlock_110ab6cf0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bdd268;
  puStack_40 = &UNK_11089b0f0;
  uStack_38 = param_3;
  _objc_retain();
  uVar1 = param_4;
  func_0x000107c31908(param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdd238; end: 108bdd23f;  */

void FUN_108bdd238(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bdd240; end: 108bdd267;  */

void FUN_108bdd240(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bdd268; end: 108bdd273;  */

void FUN_108bdd268(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108bdd274; end: 108bdd357; -[SCPinnedSuggestedSnapchatterDataProvider _userIdsFromMergedPinningMetadataForTopSuggestions:pinningMetadataForRecentlyJoiners:] */

void FUN_108bdd274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(param_3);
  func_0x00010befa160(puVar1);
  _objc_release(param_4);
  func_0x00010bebe120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bd86590(uVar2,&PTR___NSConcreteGlobalBlock_110ab6d10);
  uVar4 = uVar3;
  func_0x000107c31908();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108bdd358; end: 108bdd367;  */

void FUN_108bdd358(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bdd368; end: 108bdd3cf; -[SCPinnedSuggestedSnapchatterDataProvider _sortMergedPinningMetadataByReceiveTimestamp:] */

void FUN_108bdd368(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  else {
    puVar1 = param_3;
    func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ab6d70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bdd3d0; end: 108bdd48b;  */

long FUN_108bdd3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010c122300(param_3);
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c122300(param_4);
  _objc_release(param_4);
  func_0x00010bf655e0(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0();
  lVar4 = -(ulong)(puVar3 == (undefined *)0x1);
  if (puVar3 == (undefined *)0xffffffffffffffff) {
    lVar4 = 1;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return lVar4;
}



/* Entry: 108bdd48c; end: 108bdd503; -[SCPinnedSuggestedSnapchatterDataProvider .cxx_destruct] */

void FUN_108bdd48c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 108bdd504; end: 108bdd64f; -[SCRemoteSnapchatterPublicInfoFetcher initWithSessionRequestManager:grpcService:snapchattersSnapTokenProvider:grapheneLogger:circumstanceEngine:] */

undefined1 *
FUN_108bdd504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fdc40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bdd650; end: 108bdd737; -[SCRemoteSnapchatterPublicInfoFetcher snapchattersWithUserIds:requestSource:completionQueue:completionHandler:] */

void FUN_108bdd650(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bf529e0(param_3);
    func_0x00010c12a420(param_1);
    uVar1 = param_1;
    func_0x00010c12a420();
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (uVar2 <= uVar1) {
      uVar1 = uVar2;
    }
    uVar2 = param_3;
    func_0x00010c25e980(param_3,param_2,0,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010be13920(param_1,param_2,uVar2,param_4,param_5,param_6);
    _objc_release(param_6);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108bdd738; end: 108bdda43; -[SCRemoteSnapchatterPublicInfoFetcher _fetchRemoteSnapchattersWithUserIds:requestSource:completionQueue:completionHandler:] */

void FUN_108bdd738(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010bf529e0();
  uVar2 = uVar5;
  if (100 < uVar5) {
    uVar2 = param_1;
    func_0x00010be8f820();
  }
  _dispatch_group_create();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108bdda44;
  uStack_88 = 0x108bdda54;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_80 = puVar3;
  _objc_initWeak(auStack_b0,param_1);
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_108bdda44;
  uStack_c0 = 0x108bdda54;
  uStack_b8 = 0;
  puVar3 = PTR_PTR_1126bad10;
  _objc_opt_new();
  if (uVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = uVar5;
      if (0x7f < uVar5) {
        uVar1 = 0x80;
      }
      uVar4 = param_3;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _dispatch_group_enter(uVar2);
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_108bdda5c;
      puStack_120 = &UNK_110ab6d90;
      _objc_copyWeak(auStack_f0,auStack_b0);
      uStack_e8 = param_4;
      _objc_retain(uVar4);
      puStack_100 = &uStack_e0;
      puStack_f8 = &uStack_a8;
      uStack_118 = uVar4;
      puStack_110 = puVar3;
      _objc_retain(uVar2);
      uStack_108 = uVar2;
      func_0x00010be0fe40(param_1);
      uVar5 = uVar5 - uVar1;
      _objc_release(uStack_108);
      _objc_release(uStack_118);
      _objc_destroyWeak(auStack_f0);
      uVar6 = uVar4;
    } while (uVar5 != 0);
  }
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_108bddb54;
  puStack_158 = &UNK_110849cb0;
  puStack_148 = &uStack_a8;
  puStack_140 = &uStack_e0;
  uStack_150 = param_6;
  _objc_retain(param_6);
  func_0x000107c27d98(uVar2,param_5,&puStack_170);
  _objc_release(uStack_150);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdda44; end: 108bdda5b;  */

void FUN_108bdda44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108bdda5c; end: 108bddb53;  */

void FUN_108bdda5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retainAutorelease(uVar2);
      func_0x00010bed1e80();
      _os_unfair_lock_lock();
      func_0x00010befa160(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
      _os_unfair_lock_unlock(uVar2);
      goto LAB_108bddb04;
    }
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be53700();
  }
  else {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be902a0();
    _objc_release(lVar1);
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_3);
    lVar1 = *(long *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = param_3;
  }
  _objc_release(lVar1);
LAB_108bddb04:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bddb54; end: 108bddbab;  */

void FUN_108bddb54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))
            (lVar1,uVar2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108bddbac; end: 108bddbd3; -[SCRemoteSnapchatterPublicInfoFetcher getPendingCompletionGroupMap] */

void FUN_108bddbac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bddbd4; end: 108bddd47; -[SCRemoteSnapchatterPublicInfoFetcher _invokeAllPendingHandlersWithRequestHash:pendingCompletionGroups:block:] */

void FUN_108bddbd4(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x38);
  _objc_retain(param_4);
  lVar11 = 0x10;
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(lVar11 * 8));
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar11 = 0x10;
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  lVar2 = param_1;
  func_0x00010bfc8a80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  puVar10 = param_3;
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_1e0;
  _objc_retain(uVar9);
  _objc_retain(lVar11);
  _objc_retain(param_6);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((lVar11 != 0) && (param_6 != 0)) {
    uVar8 = uVar9;
    func_0x00010bf446e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde980();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126db080;
    _objc_alloc(PTR_PTR_1126db080);
    func_0x00010c0004e0();
    _os_unfair_lock_lock(param_3 + 0x38);
    puVar5 = param_3;
    func_0x00010bfc8a80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bfc8a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar5);
      _os_unfair_lock_unlock(param_3 + 0x38);
      _objc_initWeak(auStack_188,param_3);
      puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d8 = 0xc2000000;
      pcStack_1d0 = FUN_108bde008;
      puStack_1c8 = &UNK_110ab6df0;
      _objc_copyWeak(auStack_198,auStack_188);
      _objc_retain(puVar3);
      puStack_1c0 = puVar3;
      _objc_retain(puVar6);
      puStack_1b8 = puVar6;
      _objc_retain(uVar9);
      uStack_1b0 = uVar9;
      puStack_190 = puVar10;
      _objc_retain(lVar11);
      lStack_1a8 = lVar11;
      _objc_retain(param_6);
      lStack_1a0 = param_6;
      _objc_retainBlock(&puStack_1e0);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfca740();
      _objc_release(uVar8);
      _objc_release(ppuVar7);
      _objc_release(lStack_1a0);
      _objc_release(lStack_1a8);
      _objc_release(uStack_1b0);
      _objc_release(puStack_1b8);
      _objc_release(puStack_1c0);
      _objc_destroyWeak(auStack_198);
      _objc_destroyWeak(auStack_188);
    }
    else {
      func_0x00010befa120(puVar6);
      _os_unfair_lock_unlock(param_3 + 0x38);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  _objc_release(param_6);
  _objc_release(lVar11);
  _objc_release(uVar9);
  return;
}



/* Entry: 108bddd48; end: 108bde007; -[SCRemoteSnapchatterPublicInfoFetcher _fetchBatchedRemoteSnapchattersWithUserIds:requestSource:completionQueue:completionHandler:] */

void FUN_108bddd48(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar5 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_5 != 0) && (param_6 != 0)) {
    uVar6 = param_3;
    func_0x00010bf446e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde980();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126db080;
    _objc_alloc(PTR_PTR_1126db080);
    func_0x00010c0004e0();
    _os_unfair_lock_lock(param_1 + 0x38);
    puVar3 = param_1;
    func_0x00010bfc8a80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bfc8a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar3);
      _os_unfair_lock_unlock(param_1 + 0x38);
      _objc_initWeak(auStack_68,param_1);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_108bde008;
      puStack_a8 = &UNK_110ab6df0;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(puVar1);
      puStack_a0 = puVar1;
      _objc_retain(puVar4);
      puStack_98 = puVar4;
      _objc_retain(param_3);
      uStack_90 = param_3;
      uStack_70 = param_4;
      _objc_retain(param_5);
      lStack_88 = param_5;
      _objc_retain(param_6);
      lStack_80 = param_6;
      _objc_retainBlock(&puStack_c0);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfca740();
      _objc_release(uVar6);
      _objc_release(ppuVar5);
      _objc_release(lStack_80);
      _objc_release(lStack_88);
      _objc_release(uStack_90);
      _objc_release(puStack_98);
      _objc_release(puStack_a0);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
    else {
      func_0x00010befa120(puVar4);
      _os_unfair_lock_unlock(param_1 + 0x38);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bde008; end: 108bde1ef;  */

void FUN_108bde008(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_3 == 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c2775c0(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_78);
  }
  else {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108bde1f0;
    puStack_50 = &UNK_110ab6dc0;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010be3db60(param_1);
    _objc_release(param_1);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108bde1f0; end: 108bde2af;  */

void FUN_108bde1f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc3ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bde2b0;
  puStack_48 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 108bde2b0; end: 108bde337;  */

void FUN_108bde2b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc3e80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bde338; end: 108bde6bb; -[SCRemoteSnapchatterPublicInfoFetcher _submitBatchedRemoteAtlasGWSnapchattersRequestWithUserIds:requestSource:completionQueue:completionHandler:pendingCompletionGroups:requestHash:] */

void FUN_108bde338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_168 [16];
  long lStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_128 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126db088;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ab6e20);
  uVar2 = uVar7;
  func_0x00010c0d3c80();
  func_0x00010c21e700(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  func_0x00010c206c40(puVar1);
  _objc_initWeak(auStack_98,param_1);
  puVar3 = PTR_PTR_1126ae988;
  _objc_alloc();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108bde768;
  puStack_c8 = &UNK_110ab6e70;
  _objc_copyWeak(auStack_a8,auStack_98);
  _objc_retain(param_8);
  uStack_c0 = param_8;
  _objc_retain(param_7);
  uStack_b8 = param_7;
  _objc_retain(param_3);
  uStack_b0 = param_3;
  uStack_a0 = param_4;
  _objc_opt_class(PTR_PTR_1126db090);
  func_0x00010c0199c0();
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_108be7b38();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08fa60();
  if (puVar6 != (undefined *)0x0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  uVar7 = 0x11;
  func_0x000107c312b8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar8;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_108bdf00c;
  puStack_108 = &UNK_110850cf8;
  _objc_copyWeak(auStack_e8,auStack_98);
  puStack_100 = puVar1;
  puStack_f8 = puVar4;
  puStack_f0 = puVar3;
  _objc_retain(puVar4);
  ppuVar9 = &puStack_120;
  func_0x000107c27d8c(uVar7);
  _objc_release(uVar7);
  _objc_release(puStack_f8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uStack_128);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_3);
  puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  pcStack_138 = FUN_108bde6bc;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = ppuVar9;
  ppuStack_150 = &puStack_120;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_alloc();
  func_0x00010c057ea0();
  _objc_release(ppuVar9);
  func_0x00010bfcb980(puVar8);
  _objc_release(puVar8);
  puVar13 = auStack_168;
  puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(puVar13);
  if (puVar13 == (undefined1 *)0x0) {
    ppuVar9 = ppuVar12;
    func_0x00010c2449e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_108bdea80;
    puStack_218 = &UNK_110ab6e40;
    _objc_copyWeak(auStack_210,puVar8 + 0x38);
    ppuVar10 = ppuVar9;
    func_0x000107c31908(ppuVar9,&puStack_230);
    _objc_release(ppuVar9);
    puVar1 = puVar8 + 0x38;
    _objc_loadWeakRetained(puVar1);
    _objc_retain(ppuVar10);
    func_0x00010be3db60(puVar1);
    _objc_release(puVar1);
    ppuVar9 = ppuVar10;
    func_0x00010bf529e0();
    ppuVar11 = *(undefined ***)(puVar8 + 0x30);
    func_0x00010bf529e0();
    if (ppuVar9 != ppuVar11) {
      puVar8 = puVar8 + 0x38;
      _objc_loadWeakRetained(puVar8);
      func_0x00010be90560();
      _objc_release(puVar8);
    }
    _objc_release(ppuVar10);
    _objc_release(ppuVar10);
    _objc_destroyWeak(auStack_210);
  }
  else {
    puVar8 = puVar8 + 0x38;
    _objc_loadWeakRetained(puVar8);
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_108bde97c;
    puStack_1f0 = &UNK_110ab6dc0;
    _objc_retain(puVar13);
    puStack_1e8 = puVar13;
    func_0x00010be3db60(puVar8);
    _objc_release(puVar8);
    _objc_release(puStack_1e8);
  }
  _objc_release(puVar13);
  _objc_release(ppuVar12);
  return;
}



/* Entry: 108bde6bc; end: 108bde767;  */

void FUN_108bde6bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c057ea0();
  _objc_release(param_2);
  func_0x00010bfcb980(puVar1);
  _objc_release(puVar1);
  puVar7 = auStack_38;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  _objc_retain(puVar7);
  if (puVar7 == (undefined1 *)0x0) {
    lVar2 = lVar6;
    func_0x00010c2449e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_108bdea80;
    puStack_e8 = &UNK_110ab6e40;
    _objc_copyWeak(auStack_e0,puVar1 + 0x38);
    lVar3 = lVar2;
    func_0x000107c31908(lVar2,&puStack_100);
    _objc_release(lVar2);
    puVar4 = puVar1 + 0x38;
    _objc_loadWeakRetained(puVar4);
    _objc_retain(lVar3);
    func_0x00010be3db60(puVar4);
    _objc_release(puVar4);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    lVar5 = *(long *)(puVar1 + 0x30);
    func_0x00010bf529e0();
    if (lVar2 != lVar5) {
      puVar1 = puVar1 + 0x38;
      _objc_loadWeakRetained(puVar1);
      func_0x00010be90560();
      _objc_release(puVar1);
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_e0);
  }
  else {
    puVar1 = puVar1 + 0x38;
    _objc_loadWeakRetained(puVar1);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_108bde97c;
    puStack_c0 = &UNK_110ab6dc0;
    _objc_retain(puVar7);
    puStack_b8 = puVar7;
    func_0x00010be3db60(puVar1);
    _objc_release(puVar1);
    _objc_release(puStack_b8);
  }
  _objc_release(puVar7);
  _objc_release(lVar6);
  return;
}



/* Entry: 108bde768; end: 108bde97b;  */

void FUN_108bde768(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c2449e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_108bdea80;
    puStack_a8 = &UNK_110ab6e40;
    _objc_copyWeak(auStack_a0,param_1 + 0x38);
    lVar2 = lVar1;
    func_0x000107c31908(lVar1,&puStack_c0);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    _objc_retain(lVar2);
    func_0x00010be3db60(lVar1);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 != lVar3) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010be90560();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_a0);
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108bde97c;
    puStack_80 = &UNK_110ab6dc0;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x00010be3db60(param_1);
    _objc_release(param_1);
    _objc_release(lStack_78);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108bde97c; end: 108bdea3b;  */

void FUN_108bde97c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc3ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bdea3c;
  puStack_48 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 108bdea3c; end: 108bdea7f;  */

void FUN_108bdea3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc3e80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bdea80; end: 108bdef07;  */

void FUN_108bdea80(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long lVar22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc();
  lVar22 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c057e80();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar22;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uStack_78 = 0;
  }
  else {
    uStack_78 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar22;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uStack_80 = 0;
  }
  else {
    uStack_80 = param_2;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar22);
  lVar22 = param_2;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar22 == 0) {
    lVar22 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = param_2;
    func_0x00010c116cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b4540();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c116cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4660();
    lVar22 = param_1;
    func_0x00010be21b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c117380(param_2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108c09008();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar4 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf1bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf1bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010bf1bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1c000();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010bf1bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1af00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010bf1bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1af20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf14660();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010bf1bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf13060();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  func_0x00010c07a6a0();
  lVar20 = param_2;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x0001090207c4(puVar3,lVar4,uStack_78,lVar6,lVar8,lVar10,lVar12,lVar15,lVar18,(char)lVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
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
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c06e480(param_2);
  puVar21 = puVar1;
  func_0x000109020ae4(puVar1,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar22);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 108bdef08; end: 108bdefc7;  */

void FUN_108bdef08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc3ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bdefc8;
  puStack_48 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 108bdefc8; end: 108bdf00b;  */

void FUN_108bdefc8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc3e80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bdf00c; end: 108bdf0f7;  */

void FUN_108bdf00c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eec598,uVar4,
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bdf0f8; end: 108bdf143; -[SCRemoteSnapchatterPublicInfoFetcher _getProfileLogoIfPossibleWithProfileLogo:logoType:] */

void FUN_108bdf0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdf144; end: 108bdf147; -[SCRemoteSnapchatterPublicInfoFetcher _reportServerNetworkError:requestSource:userIds:] */

void FUN_108bdf144(void)

{
  return;
}



/* Entry: 108bdf148; end: 108bdf14b; -[SCRemoteSnapchatterPublicInfoFetcher _reportUnmatchedUserIds:serverSnapchaters:requestSource:] */

void FUN_108bdf148(void)

{
  return;
}



/* Entry: 108bdf14c; end: 108bdf14f; -[SCRemoteSnapchatterPublicInfoFetcher _reportExceedFetchLimitErrorWithUserIdsCount:requestSource:] */

void FUN_108bdf14c(void)

{
  return;
}



/* Entry: 108bdf150; end: 108bdf157; -[SCRemoteSnapchatterPublicInfoFetcher remoteSnapchatterPublicInfoFetcherRequestLimit] */

undefined8 FUN_108bdf150(void)

{
  return 0x500;
}



/* Entry: 108bdf158; end: 108bdf18b; -[SCRemoteSnapchatterPublicInfoFetcher _logFetchedSnapchatterNullError] */

void FUN_108bdf158(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bdf18c; end: 108bdf3d7; -[SCRemoteSnapchatterPublicInfoFetcher snapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108bdf18c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108bdf3d8;
    puStack_90 = &UNK_110ab6ea0;
    uStack_88 = uVar8;
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(uVar8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    ppuVar1 = &puStack_a8;
    _objc_retainBlock();
    puStack_d0 = puVar4;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_108bdf4b4;
    puStack_b8 = &UNK_1108ab6d0;
    _objc_retain(param_5);
    ppuVar2 = &puStack_d0;
    lStack_b0 = param_5;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126db098;
    _objc_opt_new(PTR_PTR_1126db098);
    func_0x00010c1ec260();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c271c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eec5b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126bbf20;
    puVar7 = PTR_PTR_1126db0a0;
    _objc_opt_class(PTR_PTR_1126db0a0);
    func_0x00010bdc2960(puVar4,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f1c0(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110eec538,puVar5,0,puVar6,
                        PTR____NSArray0__struct_11034ab48,puVar4,3,1,1);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(lStack_b0);
    _objc_release(ppuVar1);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar8);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 108bdf3d8; end: 108bdf4b3;  */

void FUN_108bdf3d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf9b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f3c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bfb91c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010bfb91c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000108c15950();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2,0);
      _objc_release(lVar2);
      goto LAB_108bdf4a0;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
LAB_108bdf4a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bdf4b4; end: 108bdf4c3;  */

void FUN_108bdf4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bdf4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bdf4c4; end: 108bdf523; -[SCRemoteSnapchatterPublicInfoFetcher .cxx_destruct] */

void FUN_108bdf4c4(long param_1)

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



/* Entry: 108bdf524; end: 108bdf5cb; -[SCSnapchatterCompletionGroup initWithCompletionHandler:completionQueue:] */

undefined1 *
FUN_108bdf524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdc48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bdf5cc; end: 108bdf5e3; -[SCSnapchatterCompletionGroup getCompletionHandler] */

void FUN_108bdf5cc(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


