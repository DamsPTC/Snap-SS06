/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004e60c0; end: 1004e610b;  */

void FUN_1004e60c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de890;
  func_0x000107c5bcc8(PTR_PTR_1126de890,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  func_0x000107c61180();
  func_0x000107c3c384(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1004e610c; end: 1004e61db; +[SCUnlockableDataStoreMemento stateFromDiskUsingArchiveUtils:] */

void FUN_1004e610c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c61158(param_1);
  func_0x000107c60b14();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c3c0c4(param_1,param_2,param_3);
  func_0x000107c61180();
  puVar3 = param_3;
  func_0x000107c4b754(param_3,param_2,uVar1,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c4ffdc(param_1,param_2,param_3);
    puVar3 = PTR_PTR_1126de890;
    func_0x000107c610f4(PTR_PTR_1126de890);
    func_0x000107c490c4();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1004e61dc; end: 1004e61eb; +[SCUnlockableDataStoreMemento _pathWithArchiveUtils:] */

void FUN_1004e61dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_pathWithFileName__11261b0b0,
             &PTR____CFConstantStringClassReference_110f2f7b8);
  return;
}



/* Entry: 1004e61ec; end: 1004e6243; +[SCUnlockableDataStoreMemento removeSavedStateUsingArchiveUtils:] */

/* WARNING: Possible PIC construction at 0x0001004e6230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e6234) */

void FUN_1004e61ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3c0c4(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4ff18(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1004e6244; end: 1004e62eb; -[SCArchiveUtils removeFileAtPath:] */

undefined * FUN_1004e6244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar1 = puVar2;
  func_0x000107c43418();
  func_0x000107c61170(puVar2);
  if ((int)puVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4ff4c();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1004e62ec; end: 1004e6397; -[SCUnlockableDataStoreMemento initWithUnlockedLenses:fetcherPreviousUpdateTimestamp:] */

undefined1 *
FUN_1004e62ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127017a0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e6398; end: 1004e63fb; -[SCUnlockableDataStore _resetStateWithLoadedState:] */

void FUN_1004e6398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c3b5f8(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c284030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateCache_11267ea30);
  return;
}



/* Entry: 1004e63fc; end: 1004e646f; -[SCLensMetadataFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004e6414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e642c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e6444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e6458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e6448) */
/* WARNING: Removing unreachable block (ram,0x0001004e6430) */
/* WARNING: Removing unreachable block (ram,0x0001004e6418) */
/* WARNING: Removing unreachable block (ram,0x0001004e645c) */

void FUN_1004e63fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 1004e6470; end: 1004e64b7; -[SCQueuePerformer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004e6488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e64a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e648c) */
/* WARNING: Removing unreachable block (ram,0x0001004e64a4) */

void FUN_1004e6470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 1004e64b8; end: 1004e64c3; -[SCLensMetadataFetchingActiveUserInfoProvider .cxx_destruct] */

void FUN_1004e64b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1004e64c4; end: 1004e6513; -[SCUnlockLensController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004e64dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e64f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e64e0) */
/* WARNING: Removing unreachable block (ram,0x0001004e64f8) */

void FUN_1004e64c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1004e6514; end: 1004e651b; -[SCUnlockableDataStoreMemento unlockedLenses] */

undefined8 FUN_1004e6514(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004e651c; end: 1004e6523; -[SCUnlockableDataStoreMemento fetcherPreviousUpdateTimestamp] */

undefined8 FUN_1004e651c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004e6524; end: 1004e657b; -[SCUnlockLensController updateCache] */

void FUN_1004e6524(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  uStack_30 = 0x1004e65ac;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 1004e657c; end: 1004e663b; -[SCUnlockableDataStoreMemento .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004e6594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e6598) */

void FUN_1004e657c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1004e663c; end: 1004e66e3; -[SCUnlockLensController scanUnlockedLenses] */

void FUN_1004e663c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5d308();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40794();
  func_0x000107c61170(param_1);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x000107c4ec60(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2f758);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4351c(uVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1004e66e4; end: 1004e66eb; -[SCUnlockLensController unlockedLenses] */

undefined8 FUN_1004e66e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1004e66ec; end: 1004e6757;  */

void FUN_1004e66ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x000107c4d9e8(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1004e6758; end: 1004e675f;  */

void FUN_1004e6758(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1053f5648;
  puStack_30 = &UNK_1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_2);
  lVar1 = puStack_48[5];
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_48[5];
  }
  func_0x000107c61174(uVar2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004e6760; end: 1004e67fb; -[SCObservableDeferred subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e6760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(param_1 + _DAT_1127967c4);
  pcVar4 = *(code **)(lVar3 + 0x10);
  func_0x000107c61174(param_3);
  (*pcVar4)(lVar3);
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c310();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar2 = PTR_PTR_1126e2fd8;
  func_0x000107c610f4(PTR_PTR_1126e2fd8);
  func_0x000107c48b38();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004e67fc; end: 1004e68cb;  */

void FUN_1004e67fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  lVar2 = param_1;
  func_0x000107c4dff4();
  func_0x000107c61180();
  uVar4 = uVar1;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c4d73c(PTR_PTR_1126ae750);
    func_0x000107c61180();
    func_0x000107c5bc40(uVar1,param_2,puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c5bc40(uVar1,param_2,lVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1004e68cc; end: 1004e69f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e68cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  func_0x000107c61148();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x000107c42538(PTR_PTR_1126ae6b8);
    func_0x000107c61180();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c3b70c(puVar1);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(puVar1 + _DAT_112722e7c);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(puVar1 + _DAT_112722e88);
    func_0x000107c4f7c0(uVar4);
    func_0x000107c61180();
    puVar5 = puVar2;
    func_0x000107c4da10(puVar2,param_2,uVar3,uVar4);
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c4c280();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1004e69f4; end: 1004e6a0b; -[SCDocObjectFetchedResult observableForDocObjectContext:observationQueue:] */

void FUN_1004e69f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db400,PTR_s_observableForFetchedResult_docOb_112615b60,param_1,param_3,
             param_4);
  return;
}



/* Entry: 1004e6a0c; end: 1004e6aaf; +[SCDocObjectFetchedResultObservable observableForFetchedResult:docObjectContext:queue:] */

void FUN_1004e6a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c610f4(param_1);
  func_0x000107c468d8();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004e6ab0; end: 1004e6abf; -[SCDocObjectFetchedResultObservable .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e6ab0(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112779340) = 0;
  return;
}



/* Entry: 1004e6ac0; end: 1004e6b9f; -[SCDocObjectFetchedResultObservable initWithFetchedResult:docObjectContext:queue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1004e6ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c466a4(param_1,param_2,param_4,param_5);
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11277933c;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    func_0x000107c61170(uVar1);
    func_0x000107c3c6a0(param_1,param_2,param_3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1004e6ba0; end: 1004e6ca7; -[SCDocObjectFetchedResultObservable initWithDocObjectContext:queue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1004e6ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fdf38;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779330);
    *(undefined **)((long)puVar1 + (long)_DAT_112779330) = puVar2;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_112779334;
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_112779338;
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e6ca8; end: 1004e6db3; -[SCDocObjectFetchedResultObservable _setupObservationWithFetchedResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e6ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779334);
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c4da54();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779344);
  *(undefined8 *)(param_1 + _DAT_112779344) = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004e6db4; end: 1004e6f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e6db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    plVar1 = (long *)(param_1 + _DAT_11278eb38);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = param_2;
    func_0x000107c4d9a8();
    uVar5 = param_2;
    func_0x000107c43334();
    func_0x000107c5c688();
    puVar7 = PTR_PTR_1126e03b8;
    func_0x000107c610f4(PTR_PTR_1126e03b8);
    FUN_1004e6fe4();
    func_0x000107c61144(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11278eb04);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1004e7128;
    puStack_a8 = &UNK_110d25958;
    func_0x000107c6111c(auStack_88,auStack_68);
    func_0x000107c61174(param_2);
    uStack_a0 = param_2;
    uStack_80 = uVar5;
    uStack_78 = uVar4;
    lStack_70 = lVar6;
    func_0x000107c61174(param_3);
    uStack_98 = param_3;
    func_0x000107c61174(param_4);
    uStack_90 = param_4;
    FUN_10007380c(uVar8,&puStack_c0);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1004e6f8c; end: 1004e6fb3; -[SCSQLiteDocObjectContext observeFetchedResult:callbackQueue:changeHandler:] */

void FUN_1004e6f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1004e6db4(param_1,param_3,param_4,param_5);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004e6fb4; end: 1004e6fdb; -[SCDocObjectFetchedResult objectClass] */

void FUN_1004e6fb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e6fdc; end: 1004e6fe3; -[SCDocObjectFetchedResult fetchedResultId] */

undefined8 FUN_1004e6fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1004e6fe4; end: 1004e708b;  */

undefined1 *
FUN_1004e6fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  func_0x000107c61174(param_5);
  puVar2 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1127065e0;
    lStack_50 = param_1;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar2 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      func_0x000107c611a0((undefined1 *)((long)plVar1 + 0x20),param_5);
    }
  }
  func_0x000107c61170(param_5);
  return puVar2;
}



/* Entry: 1004e708c; end: 1004e70d3;  */

void FUN_1004e708c(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1004e70d4; end: 1004e7127; -[SCUserInfoDeltaSyncRepository optionalCurrentValue] */

void FUN_1004e70d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c4e01c(puVar1,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004e7128; end: 1004e7b8f;  */

/* WARNING: Possible PIC construction at 0x0001004e730c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e76d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e7a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e7a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e7a2c) */
/* WARNING: Removing unreachable block (ram,0x0001004e76d4) */
/* WARNING: Removing unreachable block (ram,0x0001004e76e0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7708) */
/* WARNING: Removing unreachable block (ram,0x0001004e7734) */
/* WARNING: Removing unreachable block (ram,0x0001004e7710) */
/* WARNING: Removing unreachable block (ram,0x0001004e7738) */
/* WARNING: Removing unreachable block (ram,0x0001004e771c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7728) */
/* WARNING: Removing unreachable block (ram,0x0001004e773c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7748) */
/* WARNING: Removing unreachable block (ram,0x0001004e7750) */
/* WARNING: Removing unreachable block (ram,0x0001004e776c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7788) */
/* WARNING: Removing unreachable block (ram,0x0001004e7774) */
/* WARNING: Removing unreachable block (ram,0x0001004e777c) */
/* WARNING: Removing unreachable block (ram,0x0001004e778c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7794) */
/* WARNING: Removing unreachable block (ram,0x0001004e77d8) */
/* WARNING: Removing unreachable block (ram,0x0001004e77e0) */
/* WARNING: Removing unreachable block (ram,0x0001004e77e4) */
/* WARNING: Removing unreachable block (ram,0x0001004e77e8) */
/* WARNING: Removing unreachable block (ram,0x0001004e7800) */
/* WARNING: Removing unreachable block (ram,0x0001004e7814) */
/* WARNING: Removing unreachable block (ram,0x0001004e7828) */
/* WARNING: Removing unreachable block (ram,0x0001004e7830) */
/* WARNING: Removing unreachable block (ram,0x0001004e7820) */
/* WARNING: Removing unreachable block (ram,0x0001004e7840) */
/* WARNING: Removing unreachable block (ram,0x0001004e78b0) */
/* WARNING: Removing unreachable block (ram,0x0001004e78b4) */
/* WARNING: Removing unreachable block (ram,0x0001004e78d0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7a9c) */
/* WARNING: Removing unreachable block (ram,0x0001004e78dc) */
/* WARNING: Removing unreachable block (ram,0x0001004e78f4) */
/* WARNING: Removing unreachable block (ram,0x0001004e7aa0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7aa4) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ad0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ab0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ab4) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ac0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ac4) */
/* WARNING: Removing unreachable block (ram,0x0001004e7848) */
/* WARNING: Removing unreachable block (ram,0x0001004e7ae8) */
/* WARNING: Removing unreachable block (ram,0x0001004e7850) */
/* WARNING: Removing unreachable block (ram,0x0001004e786c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7874) */
/* WARNING: Removing unreachable block (ram,0x0001004e788c) */
/* WARNING: Removing unreachable block (ram,0x0001004e78fc) */
/* WARNING: Removing unreachable block (ram,0x0001004e789c) */
/* WARNING: Removing unreachable block (ram,0x0001004e78a4) */
/* WARNING: Removing unreachable block (ram,0x0001004e7900) */
/* WARNING: Removing unreachable block (ram,0x0001004e790c) */
/* WARNING: Removing unreachable block (ram,0x0001004e792c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7918) */
/* WARNING: Removing unreachable block (ram,0x0001004e7920) */
/* WARNING: Removing unreachable block (ram,0x0001004e7930) */
/* WARNING: Removing unreachable block (ram,0x0001004e7938) */
/* WARNING: Removing unreachable block (ram,0x0001004e7978) */
/* WARNING: Removing unreachable block (ram,0x0001004e7940) */
/* WARNING: Removing unreachable block (ram,0x0001004e7960) */
/* WARNING: Removing unreachable block (ram,0x0001004e7964) */
/* WARNING: Removing unreachable block (ram,0x0001004e7974) */
/* WARNING: Removing unreachable block (ram,0x0001004e7980) */
/* WARNING: Removing unreachable block (ram,0x0001004e7984) */
/* WARNING: Removing unreachable block (ram,0x0001004e79a0) */
/* WARNING: Removing unreachable block (ram,0x0001004e7990) */
/* WARNING: Removing unreachable block (ram,0x0001004e79a8) */
/* WARNING: Removing unreachable block (ram,0x0001004e7998) */
/* WARNING: Removing unreachable block (ram,0x0001004e79b0) */
/* WARNING: Removing unreachable block (ram,0x0001004e79cc) */
/* WARNING: Removing unreachable block (ram,0x0001004e79e4) */
/* WARNING: Removing unreachable block (ram,0x0001004e7a08) */
/* WARNING: Removing unreachable block (ram,0x0001004e79f4) */
/* WARNING: Removing unreachable block (ram,0x0001004e79fc) */
/* WARNING: Removing unreachable block (ram,0x0001004e7a0c) */
/* WARNING: Removing unreachable block (ram,0x0001004e79bc) */
/* WARNING: Removing unreachable block (ram,0x0001004e7a10) */
/* WARNING: Removing unreachable block (ram,0x0001004e775c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7768) */
/* WARNING: Removing unreachable block (ram,0x0001004e7a1c) */
/* WARNING: Removing unreachable block (ram,0x0001004e76e8) */
/* WARNING: Removing unreachable block (ram,0x0001004e7310) */
/* WARNING: Removing unreachable block (ram,0x0001004e7314) */
/* WARNING: Removing unreachable block (ram,0x0001004e7324) */
/* WARNING: Removing unreachable block (ram,0x0001004e732c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7334) */
/* WARNING: Removing unreachable block (ram,0x0001004e733c) */
/* WARNING: Removing unreachable block (ram,0x0001004e7344) */
/* WARNING: Removing unreachable block (ram,0x0001004e7a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e7128(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined4 uStack_f4;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  long alStack_70 [2];
  
  lVar22 = param_1 + 0x38;
  func_0x000107c61148();
  lVar10 = *(long *)(param_1 + 0x40);
  uVar14 = *(ulong *)(param_1 + 0x48);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  uVar20 = *(ulong *)(param_1 + 0x28);
  puVar17 = *(undefined8 **)(param_1 + 0x30);
  func_0x000107c61174(puVar3);
  alStack_70[0] = lVar10;
  func_0x000107c61174(uVar20);
  func_0x000107c61174(puVar17);
  if (lVar22 == 0) goto code_r0x000107c61170;
  func_0x000107c61174(uVar20);
  uStack_80 = uVar20;
  func_0x000107c61184();
  lVar10 = lVar22 + _DAT_11278eb4c;
  puStack_78 = puVar17;
  FUN_1004e7b90(lVar10,uVar14);
  if (lVar10 == 0) {
    puVar17 = (undefined8 *)0x1;
  }
  else {
    puVar17 = *(undefined8 **)(lVar10 + 0x18);
  }
  puVar6 = puVar3;
  func_0x000107c3f7dc();
  if (puVar6 < puVar17) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a8 = *(undefined8 *)(lVar22 + _DAT_11278eb14);
    uStack_a0 = 0;
    plStack_f0 = (long *)0x0;
    plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffff00000000);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    puVar6 = puVar3;
    func_0x000107c4d9a8(puVar3);
    uVar21 = *(undefined8 *)(lVar22 + _DAT_11278eb18);
    puVar7 = puVar3;
    func_0x000107c42c54();
    uVar23 = *puVar7;
    puVar7 = puVar3;
    func_0x000107c4e034(puVar3);
    puVar8 = puVar3;
    func_0x000107c4b624();
    uStack_f4 = 0;
    FUN_1000e7990(puVar6,lVar22,uVar21,&uStack_a8,puVar17,0,uVar23,puVar7,puVar8,&uStack_f4,
                  &plStack_f0,&uStack_98);
    func_0x000107c3e15c(puVar3);
    func_0x000107c310c8();
    puVar9 = PTR_PTR_1126c0ab8;
    func_0x000107c610f4(PTR_PTR_1126c0ab8);
    func_0x000107c4d9a8(puVar3);
    func_0x000107c43334(puVar3);
    func_0x000107c42c54(puVar3);
    func_0x000107c4e034();
    func_0x000107c4b624();
    func_0x000107c4578c(puVar9);
    puVar17 = puVar3;
    goto code_r0x000107c61170;
  }
  plVar2 = (long *)(lVar22 + _DAT_11278eb54);
  uVar18 = plVar2[1];
  if (uVar18 != 0) {
    uVar11 = uVar18 - 1;
    if ((uVar18 & uVar11) == 0) {
      uVar20 = uVar11 & uVar14;
    }
    else {
      uVar20 = uVar14;
      if (uVar18 <= uVar14) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar14 / uVar18;
        }
        uVar20 = uVar14 - uVar20 * uVar18;
      }
    }
    puVar17 = *(undefined8 **)(*plVar2 + uVar20 * 8);
    if (puVar17 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar17; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar12 = plVar19[1];
        if (uVar12 == uVar14) {
          if (plVar19[2] == uVar14) goto LAB_1004e7698;
        }
        else {
          if ((uVar18 & uVar11) == 0) {
            uVar12 = uVar12 & uVar11;
          }
          else if (uVar18 <= uVar12) {
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar12 / uVar18;
            }
            uVar12 = uVar12 - uVar4 * uVar18;
          }
          if (uVar12 != uVar20) break;
        }
      }
    }
  }
  plVar19 = (long *)0x40;
  func_0x000107c60e20();
  plVar1 = plVar2 + 2;
  uStack_e0 = 1;
  *plVar19 = 0;
  plVar19[1] = uVar14;
  plVar19[2] = uVar14;
  plVar19[4] = 0;
  plVar19[3] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  *(undefined4 *)(plVar19 + 7) = 0x3f800000;
  plStack_e8 = plVar1;
  if ((uVar18 == 0) || (*(float *)(plVar2 + 4) * (float)uVar18 < (float)(plVar2[3] + 1))) {
    uVar20 = 1;
    if (2 < uVar18) {
      uVar20 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar20 = uVar20 | uVar18 << 1;
    uVar11 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
    if (uVar20 <= uVar11) {
      uVar20 = uVar11;
    }
    plStack_f0 = plVar19;
    if (uVar20 - 1 == 0) {
      uVar20 = 2;
    }
    else if ((uVar20 & uVar20 - 1) != 0) {
      func_0x000107c60c44();
      uVar18 = plVar2[1];
    }
    if (uVar18 < uVar20) {
LAB_1004e74c4:
      uVar18 = uVar20;
      if (uVar18 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1004e7af0);
        (*pcVar5)();
      }
      lVar22 = uVar18 << 3;
      func_0x000107c60e20();
      lVar10 = *plVar2;
      *plVar2 = lVar22;
      if (lVar10 != 0) {
        func_0x000107c60e14();
        lVar22 = *plVar2;
      }
      plVar2[1] = uVar18;
      func_0x000107c60ee4(lVar22,uVar18 << 3);
      plVar13 = (long *)plVar2[2];
      if (plVar13 != (long *)0x0) {
        uVar20 = plVar13[1];
        uVar11 = uVar18 - 1;
        if ((uVar18 & uVar11) == 0) {
          uVar20 = uVar20 & uVar11;
        }
        else if (uVar18 <= uVar20) {
          uVar12 = 0;
          if (uVar18 != 0) {
            uVar12 = uVar20 / uVar18;
          }
          uVar20 = uVar20 - uVar12 * uVar18;
        }
        *(long **)(lVar22 + uVar20 * 8) = plVar1;
        plVar15 = (long *)*plVar13;
        while (plVar15 != (long *)0x0) {
          uVar12 = plVar15[1];
          if ((uVar18 & uVar11) == 0) {
            uVar12 = uVar12 & uVar11;
          }
          else if (uVar18 <= uVar12) {
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar12 / uVar18;
            }
            uVar12 = uVar12 - uVar4 * uVar18;
          }
          plVar16 = plVar15;
          if (uVar12 != uVar20) {
            if (*(long *)(lVar22 + uVar12 * 8) == 0) {
              *(long **)(lVar22 + uVar12 * 8) = plVar13;
              uVar20 = uVar12;
            }
            else {
              *plVar13 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar22 + uVar12 * 8);
              **(long **)(lVar22 + uVar12 * 8) = (long)plVar15;
              plVar16 = plVar13;
            }
          }
          plVar13 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (uVar20 < uVar18) {
      uVar11 = (ulong)((float)(ulong)plVar2[3] / *(float *)(plVar2 + 4));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar20 <= uVar11) {
        uVar20 = uVar11;
      }
      if (uVar20 < uVar18) {
        if (uVar20 != 0) goto LAB_1004e74c4;
        lVar22 = *plVar2;
        *plVar2 = 0;
        if (lVar22 != 0) {
          func_0x000107c60e14();
        }
        uVar18 = 0;
        plVar2[1] = 0;
      }
      else {
        uVar18 = plVar2[1];
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar20 = uVar18 - 1 & uVar14;
    }
    else {
      uVar20 = uVar14;
      if (uVar18 <= uVar14) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar14 / uVar18;
        }
        uVar20 = uVar14 - uVar20 * uVar18;
      }
    }
  }
  lVar22 = *plVar2;
  plVar13 = *(long **)(lVar22 + uVar20 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar19 = *plVar1;
    *plVar1 = (long)plVar19;
    *(long **)(lVar22 + uVar20 * 8) = plVar1;
    if (*plVar19 != 0) {
      uVar14 = *(ulong *)(*plVar19 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar14 = uVar14 & uVar18 - 1;
      }
      else if (uVar18 <= uVar14) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar14 / uVar18;
        }
        uVar14 = uVar14 - uVar20 * uVar18;
      }
      *(long **)(lVar22 + uVar14 * 8) = plVar19;
    }
  }
  else {
    *plVar19 = *plVar13;
    *plVar13 = (long)plVar19;
  }
  plVar2[3] = plVar2[3] + 1;
LAB_1004e7698:
  plStack_f0 = alStack_70;
  plVar19 = plVar19 + 3;
  FUN_1004e7c3c(plVar19,alStack_70,&UNK_10dd5b8f9,&plStack_f0,&uStack_98);
  func_0x000107c61174(puVar3);
  puVar17 = (undefined8 *)plVar19[8];
  plVar19[8] = (long)puVar3;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return;
}



/* Entry: 1004e7b90; end: 1004e7c33;  */

long * FUN_1004e7b90(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1004e7c34; end: 1004e7c3b; -[SCDocObjectFetchedResult changesTimestamp] */

undefined8 FUN_1004e7c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1004e7c3c; end: 1004e7e8b;  */

undefined1  [16] FUN_1004e7c3c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar7 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar11) {
          if (plVar9[2] == uVar11) {
            uVar3 = 0;
            goto LAB_1004e7e4c;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar10 <= uVar7) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar2 * uVar10;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar9 = (long *)0x70;
  func_0x000107c60e20();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  plVar9[2] = *(long *)*param_4;
  plVar9[8] = 0;
  plVar9[7] = 0;
  plVar9[10] = 0;
  plVar9[9] = 0;
  plVar9[0xc] = 0;
  plVar9[0xb] = 0;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[3] = 0;
  *(undefined4 *)(plVar9 + 7) = 0x3f800000;
  plVar9[9] = 0;
  plVar9[8] = 0;
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  *(undefined4 *)(plVar9 + 0xd) = 0x3f800000;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_1004e7e8c(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar4 * uVar10;
      }
      *(long **)(lVar5 + uVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_1004e7e4c:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 1004e7e8c; end: 1004e808f;  */

long * FUN_1004e7e8c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 < param_2) {
LAB_1004e7ed4:
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104bd35f4();
        return param_1 + 1;
      }
      plVar10 = (long *)((long)param_2 << 3);
      func_0x000107c60e20();
      lVar2 = *param_1;
      *param_1 = (long)plVar10;
      if (lVar2 != 0) {
        func_0x000107c60e14();
        plVar10 = (long *)*param_1;
      }
      param_1[1] = (long)param_2;
      plVar3 = plVar10;
      func_0x000107c60ee4(plVar10,(long *)((long)param_2 << 3));
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        plVar6 = (long *)plVar5[1];
        uVar4 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        plVar10[(long)plVar6] = (long)(param_1 + 2);
        plVar7 = (long *)*plVar5;
        while (plVar7 != (long *)0x0) {
          plVar9 = (long *)plVar7[1];
          if (((ulong)param_2 & uVar4) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar4);
          }
          else if (param_2 <= plVar9) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar9 / (ulong)param_2;
            }
            plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
          }
          plVar8 = plVar7;
          if (plVar9 != plVar6) {
            if (plVar10[(long)plVar9] == 0) {
              plVar10[(long)plVar9] = (long)plVar5;
              plVar6 = plVar9;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = *(undefined8 *)plVar10[(long)plVar9];
              *(long **)plVar10[(long)plVar9] = plVar7;
              plVar8 = plVar5;
            }
          }
          plVar5 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return plVar3;
  }
  if (param_2 < plVar10) {
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (param_2 < plVar10) goto LAB_1004e7ed4;
  }
  return plVar3;
}



/* Entry: 1004e8090; end: 1004e8097; -[SCDocObjectFetchedResult array] */

long FUN_1004e8090(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1004e8098; end: 1004e820b;  */

undefined1  [16] FUN_1004e8098(float param_1,float param_2,long *param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  ulong uVar5;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar6;
  long *unaff_x21;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  undefined1 auStack_58 [24];
  
  uVar6 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    func_0x0001004e84b8();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar3 = extraout_x8;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar7;
          if (unaff_x21 == (long *)0x0) goto LAB_1004e813c;
          uVar5 = unaff_x21[1];
          plVar7 = unaff_x21;
          if (uVar5 != uVar6) break;
          if (unaff_x21[2] == uVar6) {
            uVar2 = 0;
            goto LAB_1004e81f8;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          FUN_100bd8310();
          uVar3 = extraout_x8_00;
          uVar5 = extraout_x9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_1004e813c:
  FUN_1004e820c(auStack_58);
  FUN_1004e8230();
  func_0x0001004e8278();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x0001004e828c();
    uVar1 = uVar8 == 3;
    func_0x0001004e82a4();
    FUN_1004e82bc(param_3);
    uVar8 = param_3[1];
    func_0x0001004e84b8();
    if ((bool)uVar1) {
      unaff_x23 = extraout_x8_01 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001004e84c4();
    if (extraout_x9_00 != 0) {
      uVar6 = *(ulong *)(extraout_x9_00 + 8);
      lVar4 = extraout_x8_02;
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        FUN_100bd8310();
        lVar4 = extraout_x8_03;
        uVar6 = extraout_x9_01;
      }
      *(long **)(lVar4 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    FUN_100ab3630();
  }
  func_0x0001004e84e4();
  uVar2 = 1;
LAB_1004e81f8:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 1004e820c; end: 1004e822f;  */

void FUN_1004e820c(void)

{
  return;
}



/* Entry: 1004e8230; end: 1004e824f;  */

void FUN_1004e8230(void)

{
  func_0x0001004e8218();
  FUN_1004e8250();
  return;
}



/* Entry: 1004e8250; end: 1004e82bb;  */

void FUN_1004e8250(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  
  *unaff_x21 = param_1;
  unaff_x21[1] = unaff_x22;
  unaff_x21[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  param_1[2] = *unaff_x19;
  return;
}



/* Entry: 1004e82bc; end: 1004e837f;  */

void FUN_1004e82bc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1004e8304;
    }
    return;
  }
LAB_1004e8304:
  FUN_1004e820c();
  if (plVar3 == (long *)0x0) {
    FUN_1004e8498(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1004e8380(plVar8);
    FUN_1004e8498(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar6 * 8);
            **(long **)(lVar4 + (long)plVar6 * 8) = (long)plVar8;
            plVar8 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1004e8380; end: 1004e839b;  */

void FUN_1004e8380(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_1004e8498(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1004e8380(plVar3);
      FUN_1004e8498(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1004e839c; end: 1004e8497;  */

void FUN_1004e839c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1004e8498(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1004e8380(plVar3);
    FUN_1004e8498(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1004e8498; end: 1004e8513;  */

void FUN_1004e8498(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1004e8514; end: 1004e8537;  */

undefined8 FUN_1004e8514(undefined8 param_1)

{
  func_0x0001004e84fc(param_1,0);
  return param_1;
}



/* Entry: 1004e8538; end: 1004e8553;  */

void FUN_1004e8538(void)

{
  return;
}



/* Entry: 1004e8554; end: 1004e85d3;  */

long * FUN_1004e8554(long *param_1)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*param_1 != 0) {
    lStack_28 = param_1[1];
    param_1[1] = 0;
    puStack_48 = puVar1;
    uStack_40 = 0xc0000000;
    puStack_38 = &UNK_10b5e9d78;
    puStack_30 = &UNK_110848088;
    FUN_10007380c(*param_1,&puStack_48);
  }
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(*param_1);
  return param_1;
}



/* Entry: 1004e85d4; end: 1004e862f; -[SCObservable startWith:] */

void FUN_1004e85d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f50;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d78();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004e8630; end: 1004e86bb; -[SCStartWithObservable initWithParentObservable:initialValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1004e8630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e508;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112796724;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e86bc; end: 1004e8757; -[SCStartWithObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e86bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2f58;
  func_0x000107c610f4(PTR_PTR_1126e2f58);
  func_0x000107c47ba8();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004e8758; end: 1004e87f3; -[SCStartWithObserver initWithObserver:initialValue:] */

undefined1 *
FUN_1004e8758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e510;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 8));
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e87f4; end: 1004e891b; -[SCDistinctUntilChangedObserver next:] */

/* WARNING: Possible PIC construction at 0x0001004e8878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e88a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e887c) */
/* WARNING: Removing unreachable block (ram,0x0001004e8888) */
/* WARNING: Removing unreachable block (ram,0x0001004e88a8) */
/* WARNING: Removing unreachable block (ram,0x0001004e88bc) */

void FUN_1004e87f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x000107c61174(param_3);
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar2 + 0x10))();
    func_0x000107c61180();
    lVar3 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar3 + 0x10))(lVar3,param_3);
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))(lVar1,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1004e891c; end: 1004e898b;  */

/* WARNING: Possible PIC construction at 0x0001004e8960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004e8974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e8964) */
/* WARNING: Removing unreachable block (ram,0x0001004e8978) */

void FUN_1004e891c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4dfe8(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1004e898c; end: 1004e8abb; -[SCBitmojiAvatarProvider _publishAvatarId:] */

void FUN_1004e898c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3e544();
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar1);
  if (param_3 == uVar1) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_3);
  }
  else {
    if (uVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = param_3;
      func_0x000107c49cec();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_1004e8aa0;
    }
    uVar1 = param_3;
    func_0x000107c40794(param_3);
    func_0x000107c52ae0(param_1);
    func_0x000107c61170(uVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_1053c2078;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    func_0x000107c61174(param_3);
    uStack_38 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_60);
    uVar1 = uStack_38;
  }
  func_0x000107c61170(uVar1);
LAB_1004e8aa0:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004e8abc; end: 1004e8ac7; -[SCBitmojiAvatarProvider avatarId] */

void FUN_1004e8abc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1004e8ac8; end: 1004e8c0f; -[SCDocObjectFetchedResultObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e8ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c61144(auStack_40,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779338);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1004e8f1c;
  puStack_60 = &UNK_110abf358;
  func_0x000107c6111c(auStack_50,auStack_38);
  func_0x000107c6111c(auStack_48,auStack_40);
  func_0x000107c61174(param_3);
  uStack_58 = param_3;
  FUN_10007380c(uVar2,&puStack_78);
  puVar1 = PTR_PTR_1126db408;
  func_0x000107c610f4(PTR_PTR_1126db408);
  func_0x000107c47b64();
  func_0x000107c61170(uStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004e8c10; end: 1004e8c4b;  */

/* WARNING: Possible PIC construction at 0x0001004e8c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004e8c38) */

void FUN_1004e8c10(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1004e8c4c; end: 1004e8d07; -[SCDocObjectObserverUnsubscriber initWithObservable:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1004e8c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fdf30;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112779328;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11277932c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e8d08; end: 1004e8dc3; -[SCDisposableDeferred initWithSubscription:observable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1004e8d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e560;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11279678c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112796790;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e8dc4; end: 1004e8deb; -[SCBitmojiAvatarProvider avatarIdObserver] */

void FUN_1004e8dc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e8dec; end: 1004e8f1b; -[SCChatMediaPrefetcher initWithPrefetchableMessagesFetcher:messageActionHandler:graphene:currentUserId:messagingExperimentService:] */

undefined1 *
FUN_1004e8dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126f1d90;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cbab8;
    func_0x000107c610f4();
    func_0x000107c454f4();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 0x10));
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e8f1c; end: 1004e8fd7;  */

/* WARNING: Possible PIC construction at 0x0001004e8f8c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e8f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  lVar2 = param_1 + 0x30;
  func_0x000107c61148();
  if ((lVar1 == 0) || (lVar2 == 0)) {
    func_0x000107c61170(lVar2);
  }
  else {
    lVar3 = lVar1;
    func_0x000107c4d120();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4d664(lVar2,param_2,lVar3);
    }
    func_0x000107c3d7b4(*(undefined8 *)(lVar1 + _DAT_112779330),param_2,
                        *(undefined8 *)(param_1 + 0x20));
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1004e8fd8; end: 1004e8fe7; -[SCDocObjectFetchedResultObservable mostRecentFetchedResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e8fd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11277933c,1);
  return;
}



/* Entry: 1004e8fe8; end: 1004e902b; -[SCMappedObserver next:] */

void FUN_1004e8fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1004e902c; end: 1004e90cf; -[SCChatMessageLoader initWithActionHandler:messagingExperimentService:] */

undefined1 *
FUN_1004e902c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f3bf8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e90d0; end: 1004e90eb; -[SCChatMessageLoader setDelegate:] */

void FUN_1004e90d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1004e90ec; end: 1004e9113; -[SCChatConversationManager mediaPrefetcher] */

void FUN_1004e90ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e9114; end: 1004e911b; -[SCStartWithObserver next:] */

void FUN_1004e9114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 1004e911c; end: 1004e9143;  */

void FUN_1004e911c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1004e9144; end: 1004e914b;  */

void FUN_1004e9144(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isEqual__1125fa0c8);
  return;
}



/* Entry: 1004e914c; end: 1004e9403; -[SCConversationServices initWithConversationManager:clearConversationActionHandler:snapViewEventObservable:conversationLifecycleEventObservable:sendAttemptEventObservable:userClearConversationEventObservable:conversationInteractionEventObservable:mediaPrefetcher:messageLoaderFactory:communityGroupChatActionHandler:conversationUpdatesPublisher:messageSaveActionEventObservable:] */

undefined8 *
FUN_1004e914c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126fd158;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[2];
    puVar1[2] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004e9404; end: 1004e94a3; -[SCOptional isEqual:] */

long FUN_1004e9404(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1004e9488;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1004e9488;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x000107c49cec();
      goto LAB_1004e9488;
    }
  }
  lVar3 = 1;
LAB_1004e9488:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 1004e94a4; end: 1004e94af; -[SCOptional .cxx_destruct] */

void FUN_1004e94a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1004e94b0; end: 1004e94df;  */

void FUN_1004e94b0(long param_1)

{
  func_0x000107c61120(param_1 + 0x30);
  func_0x000107c61120(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1004e94e0; end: 1004e9507; -[SCChatConversationManager internalActionHandler] */

void FUN_1004e94e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e9508; end: 1004e952f; -[SCChatConversationManager animationDataCoordinator] */

void FUN_1004e9508(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e9530; end: 1004e9557; -[SCChatConversationManager mediaStateManager] */

void FUN_1004e9530(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e9558; end: 1004e957f; -[SCChatConversationManager conversationUpdatePublisher] */

void FUN_1004e9558(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004e9580; end: 1004e97bf; -[SCInternalConversationServices initWithInternalConversationManager:internalActionHandler:typingNotificationSender:animationDataController:mediaStateManager:conversationUpdatePublisher:reactionHandler:conversationLifecycleEventPublisher:conversationInteractionEventPublisher:conversationParticipantProvider:] */

undefined8 *
FUN_1004e9580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126f8960;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004e97c0; end: 1004e9903;  */

void FUN_1004e97c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004e9904; end: 1004e990b;  */

void FUN_1004e9904(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e990c; end: 1004e995f;  */

void FUN_1004e990c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e9960; end: 1004e9967;  */

void FUN_1004e9960(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100292338();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1004e9a00();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1004e9a6c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1004e9968; end: 1004e99ff;  */

void FUN_1004e9968(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100292338();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1004e9a00();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1004e9a6c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1004e9a00; end: 1004e9a6b;  */

void FUN_1004e9a00(undefined8 param_1)

{
  if (lRam0000000112e39520 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e69811c);
  return;
}



/* Entry: 1004e9a6c; end: 1004e9b23;  */

undefined * FUN_1004e9a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_30 = &UNK_101ec8060;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_101ec807c;
  puStack_38 = &UNK_110497568;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126a97d8;
  func_0x000107c610f8(PTR_PTR_1126a97d8);
  func_0x000107c47afc();
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1004e9b24; end: 1004e9b37;  */

void FUN_1004e9b24(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1004e9b38; end: 1004e9bab; -[SCNotificationPayloadDecryptionServices initWithNotificationPayloadDecryptor:] */

undefined1 * FUN_1004e9b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd1a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004e9bac; end: 1004e9bb3;  */

void FUN_1004e9bac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e9bb4; end: 1004e9c07;  */

void FUN_1004e9bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e9c08; end: 1004e9c1b;  */

void FUN_1004e9c08(long *param_1)

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
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002b6940();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  func_0x0001004eb8bc(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  FUN_1004eb954();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_1004ebad0();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004e9c1c; end: 1004e9e37;  */

void FUN_1004e9c1c(long *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002b6940();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  func_0x0001004eb8bc(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1004eb954();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_1004ebad0();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1004e9e38; end: 1004e9e3f;  */

void FUN_1004e9e38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e9e40; end: 1004e9e93;  */

void FUN_1004e9e40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004e9e94; end: 1004ea64f;  */

void FUN_1004e9e94(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_1002a1868();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar13 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9738;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar15 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbb450);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f007250);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f017e10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(puVar2);
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f017e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  lVar17 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar15 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f017e50);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar16);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    *(long *)(param_2 + 0x78) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ea650);
  (*pcVar1)();
}


