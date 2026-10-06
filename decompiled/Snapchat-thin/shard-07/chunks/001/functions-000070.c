/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10514bf58; end: 10514bf83; -[SCSendToListsEditWorkflow listsEditMenuDidDismiss] */

void FUN_10514bf58(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09a600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514bf84; end: 10514c033; -[SCSendToListsEditWorkflow listsEditMenuCreateList] */

void FUN_10514bf84(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10514c034; end: 10514c083;  */

void FUN_10514c034(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10bce0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514c084; end: 10514c163; -[SCSendToListsEditWorkflow listsEditMenuUpdateList:] */

void FUN_10514c084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10514c164; end: 10514c1c3;  */

void FUN_10514c164(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eca0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514c1c4; end: 10514c203; -[SCSendToListsEditWorkflow pickerDidDismiss] */

void FUN_10514c1c4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    return;
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09a600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514c204; end: 10514c24b; -[SCSendToListsEditWorkflow pickerDidDeleteList:] */

void FUN_10514c204(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09a5e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514c24c; end: 10514c2b3; -[SCSendToListsEditWorkflow pickerDidUpdateListName:newListName:] */

void FUN_10514c24c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09a620();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514c2b4; end: 10514c2eb; -[SCSendToListsEditWorkflow .cxx_destruct] */

void FUN_10514c2b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514c2ec; end: 10514c333; +[SCSendToListsEditMenuActions createList] */

void FUN_10514c2ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5338;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10514c334; end: 10514c37f; +[SCSendToListsEditMenuActions dismiss] */

void FUN_10514c334(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5338;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10514c380; end: 10514c3e7; +[SCSendToListsEditMenuActions updateListWithListIdentifier:] */

void FUN_10514c380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5338;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10514c3e8; end: 10514c40b; -[SCSendToListsEditMenuActions copyWithZone:] */

undefined8 FUN_10514c3e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10514c40c; end: 10514c46b; -[SCSendToListsEditMenuActions hash] */

void FUN_10514c40c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e66c8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10514c46c; end: 10514c4af; -[SCSendToListsEditMenuActions internalInit] */

void FUN_10514c46c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e66c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10514c4b0; end: 10514c54f; -[SCSendToListsEditMenuActions isEqual:] */

long FUN_10514c4b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10514c534;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10514c534;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10514c534;
    }
  }
  lVar3 = 1;
LAB_10514c534:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10514c550; end: 10514c5fb; -[SCSendToListsEditMenuActions matchCreateList:updateList:dismiss:] */

void FUN_10514c550(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10514c5d8;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_10514c5d8;
    }
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10514c5d8;
    pcVar2 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar2)(lVar1);
LAB_10514c5d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10514c5fc; end: 10514c607; -[SCSendToListsEditMenuActions .cxx_destruct] */

void FUN_10514c5fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10514c608; end: 10514c9d3; -[SCSendToListsPrivateStoriesSectionActionHandler initWithSelectionTracker:sendToTracker:customStoriesDataMutator:customStoriesDataSyncer:listsNetworkService:uiContainer:shortcutsDataFetcher:groupsDataFetcher:circumstanceEngine:performerProvider:blizzardLogger:userId:] */

undefined8 *
FUN_10514c608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126e66d0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_13);
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_12);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 10514c9d4; end: 10514ca4b;  */

void FUN_10514c9d4(long param_1)

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



/* Entry: 10514ca4c; end: 10514cc33; -[SCSendToListsPrivateStoriesSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10514ca4c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5368;
  _objc_opt_class(PTR_PTR_1126b5368);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = uVar2;
    func_0x00010c09a080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 != 0) {
      uVar4 = uVar2;
      func_0x00010c07d660();
      *(char *)(param_1 + 0x70) = (char)uVar4;
      if ((int)uVar4 == 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar2);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(uVar1);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      else {
        func_0x00010c1fb940(*(undefined8 *)(param_1 + 8));
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = 0;
        _objc_release(uVar5);
      }
      uVar5 = 1;
      goto LAB_10514cbd0;
    }
  }
  uVar5 = 0;
LAB_10514cbd0:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10514cc34; end: 10514cc87;  */

void FUN_10514cc34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09a080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdef800(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10514cc88; end: 10514ce1f; -[SCSendToListsPrivateStoriesSectionActionHandler _createListsPrivateStoriesWithListId:] */

void FUN_10514cc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22d840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10514ce20; end: 10514ce73;  */

void FUN_10514ce20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be122c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514ce74; end: 10514d007; -[SCSendToListsPrivateStoriesSectionActionHandler _fetchListNameAndCreateListsPrivateStoriesWithListId:shortcuts:] */

void FUN_10514ce74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be122e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x000105150e4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar3);
  func_0x00010bf592e0(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10514d008; end: 10514d063;  */

void FUN_10514d008(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfd0c0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10514d064; end: 10514d1df; -[SCSendToListsPrivateStoriesSectionActionHandler _fetchListNameWithListId:shortcuts:] */

void FUN_10514d064(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar7,0x10);
  if (lVar1 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar11 = *plStack_120;
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        ppuVar10 = *(undefined ***)(lStack_128 + lVar12 * 8);
        ppuVar2 = ppuVar10;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(ppuVar2);
        if ((int)ppuVar3 != 0) {
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar10;
          goto LAB_10514d188;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar1 = param_4;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar7,0x10);
    } while (lVar1 != 0);
  }
LAB_10514d188:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    func_0x00010be30140(param_3,param_2,puVar6,uVar8,puVar7);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9980(uVar4,param_2,puVar6,uVar8,&PTR___NSConcreteGlobalBlock_11086bb30);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 10514d1e0; end: 10514d297; -[SCSendToListsPrivateStoriesSectionActionHandler _didCreateShortcutStoryWithGroupId:listId:storyName:] */

void FUN_10514d1e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010be30140(param_1,param_2,param_3,param_5,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9980(uVar1,param_2,param_3,uVar3,&PTR___NSConcreteGlobalBlock_11086bb30);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10514d298; end: 10514d29b;  */

void FUN_10514d298(void)

{
  return;
}



/* Entry: 10514d29c; end: 10514d3e3; -[SCSendToListsPrivateStoriesSectionActionHandler _handleShortcutStoryCreationSuccessWithPublicationId:displayName:listId:] */

void FUN_10514d29c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain(&PTR____CFConstantStringClassReference_110f52ed8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03d4e0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  func_0x00010c01bce0();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b3568;
  _objc_alloc();
  func_0x00010c03d400();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1fb940(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x78),1,
                      &PTR____CFConstantStringClassReference_110f12a18);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f52ed8);
  func_0x00010c0a9ae0(uVar4,param_2,param_5,0,0);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10514d3e4; end: 10514d43f; -[SCSendToListsPrivateStoriesSectionActionHandler _createPerformerWithPerformerProvider:] */

void FUN_10514d3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10514d440; end: 10514d4ff; -[SCSendToListsPrivateStoriesSectionActionHandler .cxx_destruct] */

void FUN_10514d440(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514d500; end: 10514d8b7; -[SCSendToListsPrivateStoriesSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514d500(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = param_1 + _DAT_11271d560;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar25 = (long)_DAT_11271d564;
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10514d8b8;
  puStack_80 = &UNK_11086bb50;
  puVar4 = PTR_PTR_1126ae720;
  lStack_78 = lVar2;
  lStack_70 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11271d568;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b5378;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271d56c;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271d570;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11271d574;
  lVar10 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar12 = lVar24;
  func_0x00010bf620a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271d578;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar15 = lVar25;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271d57c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271d580;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11271d584;
  lVar21 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar23 = lVar26;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045f60(puVar6,param_2,lVar7,lVar9,lVar11,lVar12,puVar4,lVar5,lVar14,lVar15,lVar17,
                      lVar20,lVar22,lVar23);
  _objc_release(lVar23);
  _objc_release(lVar26);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar25);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar24);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11271d588;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10514d8b8; end: 10514d8e7;  */

void FUN_10514d8b8(void)

{
  _objc_alloc(PTR_PTR_1126b5370);
  func_0x00010c016be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10514d8e8; end: 10514d997; -[SCSendToListsPrivateStoriesSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514d8e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d584);
  _objc_destroyWeak(param_1 + _DAT_11271d570);
  _objc_destroyWeak(param_1 + _DAT_11271d560);
  _objc_destroyWeak(param_1 + _DAT_11271d57c);
  _objc_destroyWeak(param_1 + _DAT_11271d564);
  _objc_destroyWeak(param_1 + _DAT_11271d568);
  _objc_destroyWeak(param_1 + _DAT_11271d578);
  _objc_destroyWeak(param_1 + _DAT_11271d580);
  _objc_destroyWeak(param_1 + _DAT_11271d574);
  _objc_destroyWeak(param_1 + _DAT_11271d56c);
  _objc_destroyWeak(param_1 + _DAT_11271d58c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d588);
  return;
}



/* Entry: 10514d998; end: 10514dc57; -[SCSendToListsPrivateStoriesSectionExtension initWithShortcutsDataFetcher:snapchattersDataFetcher:customStoriesDataMutator:customStoriesDataSyncer:listsNetworkService:circumstanceEngine:groupsDataFetcher:performerProvider:blizzardLogger:userId:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined8 *
FUN_10514d998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e66d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
  }
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



/* Entry: 10514dc58; end: 10514dcc7; -[SCSendToListsPrivateStoriesSectionExtension sectionIdentifiers] */

void FUN_10514dc58(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12e18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b5380);
    func_0x00010c045f60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10514dcc8; end: 10514dd1b; -[SCSendToListsPrivateStoriesSectionExtension sectionCreator] */

void FUN_10514dcc8(void)

{
  _objc_alloc(PTR_PTR_1126b5380);
  func_0x00010c045f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10514dd1c; end: 10514dd4b; -[SCSendToListsPrivateStoriesSectionExtension sectionDescriptor] */

void FUN_10514dd1c(void)

{
  _objc_alloc(PTR_PTR_1126b5388);
  func_0x00010c0443a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10514dd4c; end: 10514dd53; -[SCSendToListsPrivateStoriesSectionExtension sectionLoggingParser] */

undefined8 FUN_10514dd4c(void)

{
  return 0;
}



/* Entry: 10514dd54; end: 10514ddfb; -[SCSendToListsPrivateStoriesSectionExtension .cxx_destruct] */

void FUN_10514dd54(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514ddfc; end: 10514df63; -[SCSendToListsPrivateStoriesSectionLogger initWithBlizzardLogger:performerProvider:] */

undefined8 *
FUN_10514ddfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e66e0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10514df64; end: 10514dfab;  */

void FUN_10514df64(long param_1)

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



/* Entry: 10514dfac; end: 10514e0a3; -[SCSendToListsPrivateStoriesSectionLogger logListPrivateStoryCreateAttemptWithListId:] */

void FUN_10514dfac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10514e0a4; end: 10514e0d7;  */

void FUN_10514e0a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514e0d8; end: 10514e1e3; -[SCSendToListsPrivateStoriesSectionLogger logListPrivateStoryCreateCompleteWithListId:listSnapchatterCount:listGroupCount:] */

void FUN_10514e0d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10514e1e4; end: 10514e21b;  */

void FUN_10514e1e4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514e21c; end: 10514e34f; -[SCSendToListsPrivateStoriesSectionLogger _logListPrivateStoryCreateAttemptWithListId:] */

void FUN_10514e21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b5390;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_10514e350();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1be200(puVar1,param_2,0);
  func_0x00010c1fcc00(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c1be1e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e15338);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b2e60(uVar4,param_2,puVar1);
  _objc_release(uVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10514e350;
  puStack_70 = puVar1;
  uStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if (puVar2 == (undefined *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lStack_78 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,0,&lStack_78)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0 || lStack_78 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10514e350; end: 10514e3eb;  */

void FUN_10514e350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lStack_28;
  
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&lStack_28
                       );
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0 || lStack_28 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10514e3ec; end: 10514e627; -[SCSendToListsPrivateStoriesSectionLogger _logListPrivateStoryCreateCompleteWithListId:listSnapchatterCount:listGroupCount:] */

void FUN_10514e3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b5390;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_10514e350();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_80 = param_3;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&uStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_10514e628();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be1a0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_90 = param_3;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&uStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_10514e628();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdfe0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1be200(puVar1,param_2,0);
  func_0x00010c1fcc00(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c1be1e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e15358);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b2e60(uVar5,param_2,puVar1);
  _objc_release(uVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10514e628;
  puStack_b0 = puVar1;
  uStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (puVar2 == (undefined *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lStack_b8 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,0,&lStack_b8)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0 || lStack_b8 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 10514e628; end: 10514e6c3;  */

void FUN_10514e628(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lStack_28;
  
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&lStack_28
                       );
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0 || lStack_28 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10514e6c4; end: 10514e71f; -[SCSendToListsPrivateStoriesSectionLogger _createPerformerWithPerformerProvider:] */

void FUN_10514e6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10514e720; end: 10514e75b; -[SCSendToListsPrivateStoriesSectionLogger .cxx_destruct] */

void FUN_10514e720(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514e75c; end: 10514ea83; -[SCSendToListsPrivateStoriesSectionCreatorImpl initWithActionHandler:sendToTracker:viewModelSource:shortcutsDataFetcher:snapchattersDataFetcher:customStoriesDataMutator:customStoriesDataSyncer:listsNetworkService:circumstanceEngine:uiContainer:groupsDataFetcher:performerProvider:blizzardLogger:userId:] */

undefined8 *
FUN_10514e75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e66e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
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
  }
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



/* Entry: 10514ea84; end: 10514ebcb; -[SCSendToListsPrivateStoriesSectionCreatorImpl sectionForDescriptor:] */

void FUN_10514ea84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b5240;
    _objc_opt_class(PTR_PTR_1126b5240);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4c760(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10514ebcc; end: 10514edb3; -[SCSendToListsPrivateStoriesSectionCreatorImpl _listsSectionForIdentifier:withSectionDataModel:] */

void FUN_10514ebcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010c155ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c15a820(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b53a0;
  _objc_alloc(PTR_PTR_1126b53a0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15ab20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044080(puVar3,param_2,uVar4,*(undefined8 *)(param_1 + 0x28),uVar2,
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  puVar6 = PTR_PTR_1126b53a8;
  _objc_alloc(PTR_PTR_1126b53a8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15ab20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044040(puVar6,param_2,uVar4,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar4);
  func_0x00010c161980(puVar5,param_2,puVar6);
  puVar7 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  uVar4 = param_4;
  func_0x00010c06ef40(param_4);
  uVar8 = param_4;
  func_0x00010bfcf7e0(param_4);
  func_0x00010c01edc0(puVar7,param_2,uVar4,uVar8);
  func_0x00010c222a60(puVar5,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10514edb4; end: 10514ee73; -[SCSendToListsPrivateStoriesSectionCreatorImpl .cxx_destruct] */

void FUN_10514edb4(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514ee74; end: 10514f133; -[SCSendToListsPrivateStoriesSectionCreator initWithShortcutsDataFetcher:snapchattersDataFetcher:customStoriesDataMutator:customStoriesDataSyncer:listsNetworkService:circumstanceEngine:groupsDataFetcher:performerProvider:blizzardLogger:userId:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined8 *
FUN_10514ee74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e66f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
  }
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



/* Entry: 10514f134; end: 10514f217; -[SCSendToListsPrivateStoriesSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_10514f134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b53b0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffeba0();
  puVar2 = PTR_PTR_1126b53b8;
  _objc_alloc(PTR_PTR_1126b53b8);
  func_0x00010bff0620();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10514f218; end: 10514f2bf; -[SCSendToListsPrivateStoriesSectionCreator .cxx_destruct] */

void FUN_10514f218(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10514f2c0; end: 10514f413; -[SCSendToListsPrivateStoriesSectionDataProvider initWithSelectionTracker:snapchattersDataFetcher:listsPrivateStoriesViewModelGenerator:circumstanceEngine:shortcutsDataFetcher:] */

undefined1 *
FUN_10514f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e66f8;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined ***)((long)puVar1 + 0x30) = &PTR____CFConstantStringClassReference_110dc75b8;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined ***)((long)puVar1 + 0x50) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x5c) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10514f414; end: 10514f41f; +[SCSendToListsPrivateStoriesSectionDataProvider announcerIdentifier] */

undefined ** FUN_10514f414(void)

{
  return &PTR____CFConstantStringClassReference_110dc75d8;
}



/* Entry: 10514f420; end: 10514f427; -[SCSendToListsPrivateStoriesSectionDataProvider addListener:] */

void FUN_10514f420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10514f428; end: 10514f42f; -[SCSendToListsPrivateStoriesSectionDataProvider removeListener:] */

void FUN_10514f428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10514f430; end: 10514f45f; -[SCSendToListsPrivateStoriesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10514f430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10514f460; end: 10514f48f; -[SCSendToListsPrivateStoriesSectionDataProvider tearDown] */

void FUN_10514f460(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10514f490; end: 10514f557; -[SCSendToListsPrivateStoriesSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10514f490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10514f558;
  puStack_48 = &UNK_11085e2f8;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10514f558; end: 10514f5af;  */

void FUN_10514f558(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0840e0();
  if (param_2 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bde7800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10514f5b0; end: 10514f62b; -[SCSendToListsPrivateStoriesSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_10514f5b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b5290;
  _objc_opt_class();
  ppuVar3 = &puStack_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&uStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(ppuVar3 == (undefined **)0x0);
}



/* Entry: 10514f62c; end: 10514f637; -[SCSendToListsPrivateStoriesSectionDataProvider numberOfItemsInSection:] */

bool FUN_10514f62c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 10514f638; end: 10514f913; -[SCSendToListsPrivateStoriesSectionDataProvider setSectionDataModel:] */

void FUN_10514f638(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = uVar1;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c22d840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c22d6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10514f914;
    puStack_88 = &UNK_11086bb80;
    _objc_retain(uVar3);
    uVar6 = uVar4;
    uStack_80 = uVar3;
    func_0x00010bf41860(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar2;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10514fac4;
    puStack_b0 = &UNK_11086bbb0;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6d420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar6 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_80);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10514f914; end: 10514fac3;  */

void FUN_10514f914(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b53c0;
  _objc_alloc(PTR_PTR_1126b53c0);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar9 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar9 = *(ulong *)(lVar10 * 8);
        uVar4 = uVar9;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x00010c2711a0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10514fa44;
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar9 = 0;
  }
LAB_10514fa44:
  _objc_release(param_2);
  _objc_release(uVar8);
  func_0x00010c026360(puVar2);
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(lVar6);
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    func_0x00010bdffa20();
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10514fac4; end: 10514fb53;  */

void FUN_10514fac4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffa20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514fb54; end: 10514fdd3; -[SCSendToListsPrivateStoriesSectionDataProvider _nextSelectionItemToStateMap:] */

void FUN_10514fb54(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  long lStack_1e8;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar13 = &uStack_130;
  lStack_138 = param_3;
  func_0x00010bf52a60();
  if (lStack_138 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar17 = *(ulong *)(lStack_128 + lVar16 * 8);
        uVar1 = uVar17;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((uVar4 & 1) == 0) {
          _objc_release(uVar3);
          _objc_release(uVar2);
LAB_10514fd5c:
          _objc_release(uVar1);
        }
        else {
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar17;
          func_0x00010c0d5140();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar10 = uVar5;
          func_0x000105150e4c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          uVar7 = uVar4;
          func_0x00010c0720c0();
          _objc_release(puVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar17);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((int)uVar7 != 0) {
            lVar8 = param_3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010bf1f3c0();
            *(char *)(param_1 + 0x58) = (char)lVar9;
            _objc_release(lVar8);
            uVar1 = param_1 + 0x60;
            _objc_loadWeakRetained();
            func_0x00010c155aa0();
            goto LAB_10514fd5c;
          }
        }
        lVar16 = lVar16 + 1;
      } while (lStack_138 != lVar16);
      puVar13 = &uStack_130;
      lStack_138 = param_3;
      func_0x00010bf52a60();
    } while (lStack_138 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(puVar13);
  uVar10 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 **)(param_3 + 0x40) = puVar13;
  _objc_release(uVar10);
  lVar15 = param_3 + 0x60;
  _objc_loadWeakRetained(lVar15);
  func_0x00010c155aa0();
  _objc_release(lVar15);
  puStack_290 = &uStack_298;
  uStack_298 = 0;
  uStack_288 = 0x3032000000;
  pcStack_280 = FUN_105150114;
  uStack_278 = 0x105150124;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b0 = &uStack_2b8;
  uStack_2b8 = 0;
  uStack_2a8 = 0x2020000000;
  uStack_2a0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  puVar11 = puVar13;
  puStack_270 = puVar6;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = puVar12;
  func_0x00010bf52a60();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar11 != (undefined8 *)0x0) {
    lVar15 = *plStack_2f0;
    do {
      puVar14 = (undefined8 *)0x0;
      do {
        if (*plStack_2f0 != lVar15) {
          _objc_enumerationMutation(puVar12);
        }
        puStack_330 = puVar6;
        uStack_328 = 0xc2000000;
        uStack_320 = 0x10515012c;
        puStack_318 = &UNK_11084ae98;
        puStack_310 = &uStack_2b8;
        puStack_308 = &uStack_298;
        func_0x00010c0c0000(*(undefined8 *)(lStack_2f8 + (long)puVar14 * 8));
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (puVar11 != puVar14);
      puVar11 = puVar12;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
  }
  _objc_release(puVar12);
  _objc_initWeak(auStack_338,param_3);
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_340,auStack_338);
  func_0x00010c244e80(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_340);
  _objc_destroyWeak(auStack_338);
  __Block_object_dispose(&uStack_2b8,8);
  __Block_object_dispose(&uStack_298,8);
  _objc_release(puStack_270);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_340);
  _objc_destroyWeak(auStack_338);
  __Block_object_dispose(&uStack_2b8,8);
  lVar15 = 8;
  __Block_object_dispose(&uStack_298);
  __Unwind_Resume();
  puVar13[5] = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  return;
}



/* Entry: 10514fdd4; end: 105150113; -[SCSendToListsPrivateStoriesSectionDataProvider _didReceiveShortcutViewModel:] */

void FUN_10514fdd4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  lVar5 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c155aa0();
  _objc_release(lVar5);
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_105150114;
  uStack_118 = 0x105150124;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x2020000000;
  uStack_140 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar5 = param_3;
  puStack_110 = puVar2;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar5 != 0) {
    lVar7 = *plStack_190;
    do {
      lVar6 = 0;
      do {
        if (*plStack_190 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        puStack_1d0 = puVar2;
        uStack_1c8 = 0xc2000000;
        uStack_1c0 = 0x10515012c;
        puStack_1b8 = &UNK_11084ae98;
        puStack_1b0 = &uStack_158;
        puStack_1a8 = &uStack_138;
        func_0x00010c0c0000(*(undefined8 *)(lStack_198 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = lVar3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar3);
  _objc_initWeak(auStack_1d8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1e0,auStack_1d8);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d8);
  __Block_object_dispose(&uStack_158,8);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(puStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d8);
  __Block_object_dispose(&uStack_158,8);
  lVar5 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 105150114; end: 10515016b;  */

void FUN_105150114(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10515016c; end: 1051501c7;  */

void FUN_10515016c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee14a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051501c8; end: 1051503bf; -[SCSendToListsPrivateStoriesSectionDataProvider _updateSubtextWithSnapchatters:othersCount:] */

void FUN_1051501c8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if ((0 < param_4) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x5c);
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 1) {
      lVar1 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010901d7c4();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x50);
      *(long *)(param_1 + 0x50) = lVar3;
    }
    else {
      lVar7 = param_3;
      if ((param_4 == 2) &&
         (lVar1 = param_3, func_0x00010bf529e0(), puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         lVar1 == 2)) {
        func_0x000105150e64();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010901d7c4();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar6;
        func_0x00010901d7c4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        *(undefined **)(param_1 + 0x50) = puVar4;
        _objc_release(uVar5);
        _objc_release(lVar2);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000105150e7c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010901d7c4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(param_1 + 0x50);
        *(undefined **)(param_1 + 0x50) = puVar4;
      }
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
    _objc_release(lVar7);
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x5c);
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051503c0; end: 1051504bb; -[SCSendToListsPrivateStoriesSectionDataProvider _containerViewModel] */

void FUN_1051503c0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _os_unfair_lock_lock(param_1 + 0x5c);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x5c);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c09a080(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2711a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar1,0,1,uVar4,uVar5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar3);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051504bc; end: 1051504d3; -[SCSendToListsPrivateStoriesSectionDataProvider dataProviderDelegate] */

void FUN_1051504bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051504d4; end: 1051504df; -[SCSendToListsPrivateStoriesSectionDataProvider setDataProviderDelegate:] */

void FUN_1051504d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1051504e0; end: 1051504e7; -[SCSendToListsPrivateStoriesSectionDataProvider sectionDataModel] */

undefined8 FUN_1051504e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1051504e8; end: 1051504ef; -[SCSendToListsPrivateStoriesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1051504e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1051504f0; end: 10515059f; -[SCSendToListsPrivateStoriesSectionDataProvider .cxx_destruct] */

void FUN_1051504f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1051505a0; end: 105150643; -[SCSendToListsPrivateStoriesSectionDescriptor initWithSendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_1051505a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6700;
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



/* Entry: 105150644; end: 105150803; -[SCSendToListsPrivateStoriesSectionDescriptor sectionDescriptorForQuery:] */

void FUN_105150644(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  uVar3 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b53c8;
  _objc_opt_class(PTR_PTR_1126b53c8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = uVar3;
  _objc_release(uVar3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105150804;
  uStack_50 = 0x105150814;
  uStack_48 = 0;
  if (uVar1 != 0) {
    func_0x00010c0bea00(uVar3);
    uVar5 = uVar3;
  }
  func_0x000105150e34();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x000106c9d38c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f12e18;
  func_0x000106c9c378(&PTR____CFConstantStringClassReference_110f12e18,puStack_68[5],uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105150804; end: 10515081b;  */

void FUN_105150804(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10515081c; end: 105150853;  */

void FUN_10515081c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105150854; end: 105150883; -[SCSendToListsPrivateStoriesSectionDescriptor .cxx_destruct] */

void FUN_105150854(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105150884; end: 105150c9f;  */

void FUN_105150884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 in_x5;
  
  _objc_retain();
  _objc_retain(in_x5);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b53d0;
  func_0x00010bf8ea40(PTR_PTR_1126b53d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4034000000000000,0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(0x4043000000000000,0x4043000000000000);
    _objc_retain(puVar3);
    puVar5 = puVar4;
    func_0x00010bfe91c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b53d8;
    _objc_alloc(PTR_PTR_1126b53d8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c3c0(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b53d0;
    func_0x00010bfe98c0(PTR_PTR_1126b53d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar1 = puVar4;
  }
  puVar4 = PTR_PTR_1126b53e0;
  _objc_alloc(PTR_PTR_1126b53e0);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dc75f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc75f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c00(puVar4);
  _objc_release(in_x5);
  _objc_release(ppuVar6);
  puVar5 = PTR_PTR_1126b53e8;
  func_0x00010bf16660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b53f0;
  func_0x00010c159140(PTR_PTR_1126b53f0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b52c0;
  _objc_alloc(PTR_PTR_1126b52c0);
  _objc_retain(0);
  _objc_retain(param_2);
  puVar9 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b5368;
  _objc_retain(param_2);
  _objc_alloc(puVar3);
  func_0x00010c0262c0();
  _objc_release(param_2);
  func_0x00010c01b460();
  _objc_release(puVar3);
  _objc_release(param_2);
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,param_1,0,puVar8);
  _objc_release(puVar9);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105150ca0; end: 105150d0b;  */

void FUN_105150ca0(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x20));
  param_1 = 38.0 - param_1;
  uVar2 = 0x3fe0000000000000;
  dVar3 = param_1 * 0.5;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c23d0a0(uVar1);
  func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,dVar3,param_1,uVar2,uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105150d0c; end: 105150d77; -[SCSendToListsPrivateStoriesSectionViewModelSource initWithCircumstanceEngine:sendToUIConfiguration:] */

undefined1 *
FUN_105150d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126e6708;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000108faa718(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105150d78; end: 105150e07; -[SCSendToListsPrivateStoriesSectionViewModelSource selectionListsPrivateStoriesViewModelGeneratorForSectionIdentifier:] */

void FUN_105150d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  uStack_28 = *(undefined8 *)(param_1 + 8);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105150e08;
  puStack_38 = &UNK_11086bc70;
  uStack_30 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105150e08; end: 105150e93;  */

void FUN_105150e08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(in_x4,in_x5,*(undefined8 *)(param_1 + 0x20));
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = in_x5;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b53d0;
  func_0x00010bf8ea40(PTR_PTR_1126b53d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4034000000000000,0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(0x4043000000000000,0x4043000000000000);
    _objc_retain(puVar3);
    puVar5 = puVar4;
    func_0x00010bfe91c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b53d8;
    _objc_alloc(PTR_PTR_1126b53d8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c3c0(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b53d0;
    func_0x00010bfe98c0(PTR_PTR_1126b53d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar1 = puVar4;
  }
  puVar4 = PTR_PTR_1126b53e0;
  _objc_alloc(PTR_PTR_1126b53e0);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dc75f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc75f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c00(puVar4);
  _objc_release(in_x6);
  _objc_release(ppuVar6);
  puVar5 = PTR_PTR_1126b53e8;
  func_0x00010bf16660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b53f0;
  func_0x00010c159140(PTR_PTR_1126b53f0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b52c0;
  _objc_alloc(PTR_PTR_1126b52c0);
  _objc_retain(0);
  _objc_retain(in_x4);
  puVar9 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b5368;
  _objc_retain(in_x4);
  _objc_alloc(puVar3);
  func_0x00010c0262c0();
  _objc_release(in_x4);
  func_0x00010c01b460();
  _objc_release(puVar3);
  _objc_release(in_x4);
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,uVar10,0,puVar8);
  _objc_release(puVar9);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105150e94; end: 105150f1b; -[SCSelectionListsPrivateStoriesActionModel initWithListId:isSelected:] */

undefined1 *
FUN_105150e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e6710;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105150f1c; end: 105150f3f; -[SCSelectionListsPrivateStoriesActionModel copyWithZone:] */

undefined8 FUN_105150f1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105150f40; end: 105150fab; -[SCSelectionListsPrivateStoriesActionModel hash] */

undefined8 * FUN_105150f40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105151030;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105151030;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_105151030;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105151030:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105150fac; end: 10515104b; -[SCSelectionListsPrivateStoriesActionModel isEqual:] */

long FUN_105150fac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105151030;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_105151030;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105151030;
    }
  }
  lVar3 = 1;
LAB_105151030:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10515104c; end: 105151053; -[SCSelectionListsPrivateStoriesActionModel listId] */

undefined8 FUN_10515104c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105151054; end: 10515105b; -[SCSelectionListsPrivateStoriesActionModel isSelected] */

undefined1 FUN_105151054(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


