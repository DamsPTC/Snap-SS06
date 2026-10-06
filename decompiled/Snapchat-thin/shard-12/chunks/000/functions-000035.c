/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c7e500; end: 108c7e50b;  */

bool FUN_108c7e500(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108c7e50c; end: 108c7e587;  */

undefined * FUN_108c7e50c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e368 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0778,
                        &UNK_10df9f430,&UNK_10df9f448,3,FUN_108c7e588,0);
    do {
      if (puRam000000011372e368 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e368;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e368,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e368 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e368;
}



/* Entry: 108c7e588; end: 108c7e593;  */

bool FUN_108c7e588(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108c7e594; end: 108c7e5fb; +[PBUFFriendmoji descriptor] */

void FUN_108c7e594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbab60,
                        &PTR____CFConstantStringClassReference_110dc5a18,0x113293e10,
                        &PTR_s_categoryName_113293e88,2,0x18,0x1c);
    puRam000000011372e370 = puVar1;
  }
  return;
}



/* Entry: 108c7e5fc; end: 108c7e663; +[PBUFEmojiInfo descriptor] */

void FUN_108c7e5fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbabb0,
                        &PTR____CFConstantStringClassReference_110ef0798,0x113293e10,
                        &PTR_DAT_113293fa8,8,0x38,0x1c);
    puRam000000011372e378 = puVar1;
  }
  return;
}



/* Entry: 108c7e664; end: 108c7e6cb; +[PBUFFriend descriptor] */

void FUN_108c7e664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbac00,
                        &PTR____CFConstantStringClassReference_110e08998,0x113293e10,
                        &PTR_DAT_1132940a8,0x20,0xa0,0x1c);
    puRam000000011372e380 = puVar1;
  }
  return;
}



/* Entry: 108c7e6cc; end: 108c7e733; +[PBUFFriendsRequest descriptor] */

void FUN_108c7e6cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbac50,
                        &PTR____CFConstantStringClassReference_110ef07b8,0x113293e10,
                        &PTR_DAT_113293e28,1,0x10,0x1c);
    puRam000000011372e388 = puVar1;
  }
  return;
}



/* Entry: 108c7e734; end: 108c7e79b; +[PBUFFriendsResponse descriptor] */

void FUN_108c7e734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbaca0,
                        &PTR____CFConstantStringClassReference_110ef07d8,0x113293e10,
                        &PTR_DAT_113293ec8,7,0x38,0x1c);
    puRam000000011372e390 = puVar1;
  }
  return;
}



/* Entry: 108c7e79c; end: 108c7e803; +[PBUFFriendsScoreRequest descriptor] */

void FUN_108c7e79c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbacf0,
                        &PTR____CFConstantStringClassReference_110ef07f8,0x113293e10,
                        &PTR_s_userIdsArray_113293e48,1,0x10,0x1c);
    puRam000000011372e398 = puVar1;
  }
  return;
}



/* Entry: 108c7e804; end: 108c7e86b; +[PBUFFriendsScoreResponse descriptor] */

void FUN_108c7e804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e3a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbad40,
                        &PTR____CFConstantStringClassReference_110ef0818,0x113293e10,
                        &PTR_DAT_113293e68,1,0x10,0x1c);
    puRam000000011372e3a0 = puVar1;
  }
  return;
}



/* Entry: 108c7e86c; end: 108c7e883; -[SCDocObject observableForDocObjectContext:observationQueue:] */

void FUN_108c7e86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e04d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db3f8,PTR_s_observableFor_docObjectContext_q_112615b48,param_1,param_3,
             param_4);
  return;
}



/* Entry: 108c7e884; end: 108c7e89b; -[SCDocObjectFetchedResultObserver observableForDocObjectContext:observationQueue:] */

void FUN_108c7e884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db400,PTR_s_observableForFetchedResultObserv_112615b68,param_1,param_3,
             param_4);
  return;
}



/* Entry: 108c7e89c; end: 108c7e91b; +[SCDocObjectObservable observableFor:docObjectContext:queue:] */

void FUN_108c7e89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00d7e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7e91c; end: 108c7eab7; -[SCDocObjectObservable initWithDocObject:docObjectContext:queue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108c7e91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fdf28;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779318);
    *(undefined **)((long)puVar1 + (long)_DAT_112779318) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277931c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112779320;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = param_4;
    func_0x00010c0e06e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779324);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779324) = uVar3;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c7eab8; end: 108c7eb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7eab8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1c9080(param_1);
    lVar1 = (long)_DAT_112779318;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar1));
    if (param_2 == 0) {
      func_0x00010bf436e0(*(undefined8 *)(param_1 + lVar1));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c7eb30; end: 108c7ec67; -[SCDocObjectObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7eb30(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_initWeak(auStack_40,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779320);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108c7ec68;
  puStack_60 = &UNK_11086afa0;
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_copyWeak(auStack_48,auStack_40);
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x000107c27d8c(uVar2,&puStack_78);
  puVar1 = PTR_PTR_1126db408;
  _objc_alloc(PTR_PTR_1126db408);
  func_0x00010c030ae0();
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c7ec68; end: 108c7ecf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7ec68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar3 = lVar1;
    func_0x00010c0d1000();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c0d9840(lVar2,param_2,lVar3);
    }
    func_0x00010befa200(*(undefined8 *)(lVar1 + _DAT_112779318),param_2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108c7ecf8; end: 108c7ed07; -[SCDocObjectObservable unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7ecf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112779318),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 108c7ed08; end: 108c7ed17; -[SCDocObjectObservable mostRecentDocObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7ed08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11277931c,1);
  return;
}



/* Entry: 108c7ed18; end: 108c7ed23; -[SCDocObjectObservable setMostRecentDocObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7ed18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c7ed24; end: 108c7ed83; -[SCDocObjectObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7ed24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277931c,0);
  _objc_storeStrong(param_1 + _DAT_112779318,0);
  _objc_storeStrong(param_1 + _DAT_112779324,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779320,0);
  return;
}



/* Entry: 108c7ed84; end: 108c7edd3; -[SCDocObjectObserverUnsubscriber dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7ed84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = (long)_DAT_112779328;
  lVar2 = (long)_DAT_11277932c;
  func_0x00010c282a00(*(undefined8 *)(param_1 + lVar1),param_2,*(undefined8 *)(param_1 + lVar2));
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108c7edd4; end: 108c7ee13; -[SCDocObjectObserverUnsubscriber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7edd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277932c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779328,0);
  return;
}



/* Entry: 108c7ee14; end: 108c7ee5b; -[SCDocObjectContext fetchObservableForClass:observationQueue:] */

void FUN_108c7ee14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_2);
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_2;
  return;
}



/* Entry: 108c7ee5c; end: 108c7eeff; +[SCDocObjectFetchedResultObservable observableForFetchedResultObserver:docObjectContext:queue:] */

void FUN_108c7ee5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_alloc(param_1);
  func_0x00010c012960();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7ef00; end: 108c7efb3; +[SCDocObjectFetchedResultObservable observableForQuery:klass:orderBy:limit:docObjectContext:queue:] */

void FUN_108c7ef00(undefined8 param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_alloc(param_1);
  func_0x00010c03c260();
  _objc_release(in_x7);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7efb4; end: 108c7f14f; -[SCDocObjectFetchedResultObservable initWithFetchedResultObserver:docObjectContext:queue:] */

long FUN_108c7efb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c00e060();
    if (param_1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_108c7f150;
      puStack_68 = &UNK_110896ac8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      lStack_60 = param_3;
      _objc_retain(param_1);
      lStack_58 = param_1;
      func_0x000107c27d8c(param_5,&puStack_80);
      _objc_release(lStack_58);
      _objc_release(lStack_60);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    func_0x00010c012940(param_1);
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 108c7f150; end: 108c7f1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7f150(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c24f780(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfab8e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c90a0(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + _DAT_112779330),param_2,uVar2);
    func_0x00010beae780(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108c7f200; end: 108c7f3d3; -[SCDocObjectFetchedResultObservable initWithQuery:klass:orderBy:limit:docObjectContext:queue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c7f200(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5,
                  undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c00e060();
  if (param_1 != 0) {
    plVar1 = (long *)0x28;
    __Znwm();
    plVar1[4] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    lVar4 = (long)_DAT_112779340;
    lVar2 = *(long *)(param_1 + lVar4);
    *(long **)(param_1 + lVar4) = plVar1;
    if (lVar2 != 0) {
      func_0x000108c7f630(lVar2);
      plVar1 = *(long **)(param_1 + lVar4);
    }
    lVar2 = *param_3;
    *param_3 = 0;
    plVar3 = (long *)*plVar1;
    *plVar1 = lVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar1 = *(long **)(param_1 + lVar4);
    }
    if (plVar1 + 1 != param_5) {
      func_0x000107c2a968(plVar1 + 1,*param_5,param_5[1],param_5[1] - *param_5 >> 5);
      plVar1 = *(long **)(param_1 + lVar4);
    }
    *(undefined4 *)(plVar1 + 4) = *param_6;
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108c7f3d4;
    puStack_88 = &UNK_110abf328;
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_4;
    _objc_retain(param_1);
    lStack_80 = param_1;
    func_0x000107c27d8c(param_8,&puStack_a0);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return param_1;
}



/* Entry: 108c7f3d4; end: 108c7f4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7f3d4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = &uStack_80;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112779334) == 0) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_80);
    }
    lVar5 = (long)_DAT_112779340;
    puVar4 = *(undefined8 **)(lVar1 + lVar5);
    func_0x000107c310cc(&uStack_80,*puVar4,puVar4 + 1,puVar4 + 4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27da8(&uStack_58);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    lVar3 = *(long *)(lVar1 + lVar5);
    *(undefined8 *)(lVar1 + lVar5) = 0;
    if (lVar3 != 0) {
      func_0x000108c7f630();
    }
    func_0x00010c1c90a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + _DAT_112779330));
    func_0x00010beae780(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108c7f500; end: 108c7f50f; -[SCDocObjectFetchedResultObservable unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7f500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112779330),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 108c7f510; end: 108c7f597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7f510(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1c90a0(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112779330));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c7f598; end: 108c7f5a3; -[SCDocObjectFetchedResultObservable setMostRecentFetchedResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7f598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c7f5a4; end: 108c7f677; -[SCDocObjectFetchedResultObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7f5a4(long param_1)

{
  long lVar1;
  
  _objc_storeStrong(param_1 + _DAT_11277933c,0);
  lVar1 = *(long *)(param_1 + _DAT_112779340);
  *(undefined8 *)(param_1 + _DAT_112779340) = 0;
  if (lVar1 != 0) {
    func_0x000108c7f630();
  }
  _objc_storeStrong(param_1 + _DAT_112779334,0);
  _objc_storeStrong(param_1 + _DAT_112779330,0);
  _objc_storeStrong(param_1 + _DAT_112779344,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779338,0);
  return;
}



/* Entry: 108c7f678; end: 108c7f713;  */

void FUN_108c7f678(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db400;
  (**(code **)(*param_2 + 0x30))();
  func_0x00010c0e0580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c7f714; end: 108c7f7cf;  */

void FUN_108c7f714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined **ppuStack_90;
  undefined4 uStack_88;
  undefined4 uStack_78;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  uStack_88 = 0x10;
  uStack_78 = 0x100;
  uStack_60 = 1;
  ppuStack_90 = &PTR_SUB_1108629c8;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  lStack_48 = 0;
  plStack_30 = (long *)0x0;
  uStack_38 = 0;
  plStack_28 = (long *)0x0;
  FUN_108c7f678(param_1,&ppuStack_90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  ppuStack_90 = &PTR_SUB_1108629c8;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_48 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7f7d0; end: 108c7f8eb; -[SCDocObjectFetchedResultObserver withMappers:] */

void FUN_108c7f7d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0e1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126c0ab0;
  lVar2 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c08d580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab940(puVar3,param_2,lVar2,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010c0e1320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08d580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab980(puVar3,param_2,lVar2,lVar1,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = param_1;
    param_1 = lVar1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c7f8ec; end: 108c7f96f; +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:lazyFetchedResult:mappers:] */

void FUN_108c7f8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00dda0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7f970; end: 108c7f9f3; +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:fetchedResult:mappers:] */

void FUN_108c7f970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00dd60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7f9f4; end: 108c7fa93; +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:observationQueue:fetchedResult:mappers:] */

void FUN_108c7f9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00dd60();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7fa94; end: 108c7fbab; -[SCDocObjectFetchedResultObserver initWithDocObjectContext:observationQueue:fetchedResult:mappers:] */

long FUN_108c7fa94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108c7fbac;
  puStack_50 = &UNK_110ab7510;
  _objc_retain(param_5);
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dda0(param_1,param_2,param_3,param_4,puVar1,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (param_1 != 0) {
    func_0x00010c24f780(param_1);
  }
  _objc_release(uStack_48);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108c7fbac; end: 108c7fc63;  */

void FUN_108c7fbac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c7fc64; end: 108c7fc6b; -[SCDocObjectFetchedResultObserver docObjectContext] */

undefined8 FUN_108c7fc64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108c7fc6c; end: 108c7fc73; -[SCDocObjectFetchedResultObserver observerCallBackQueue] */

undefined8 FUN_108c7fc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c7fc74; end: 108c7fc7b; -[SCDocObjectFetchedResultObserver mappers] */

undefined8 FUN_108c7fc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108c7fc7c; end: 108c7fc83; -[SCDocObjectFetchedResultObserver lazyFetchedResult] */

undefined8 FUN_108c7fc7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108c7fc84; end: 108c7fcfb; -[SCDocObjectFetchedResultObserver .cxx_destruct] */

void FUN_108c7fc84(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c7fcfc; end: 108c7fd63; +[SCDocObjectObserver observerForDocObjectContext:fetchBlock:] */

void FUN_108c7fcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00dac0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c7fd64; end: 108c7fe0f; -[SCDocObjectObserver initWithDocObjectContext:fetchBlock:] */

undefined1 *
FUN_108c7fd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdf48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c7fe10; end: 108c7fe57;  */

void FUN_108c7fe10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c7fe58; end: 108c7fe63; -[SCLensPlatformLoggersServices .cxx_destruct] */

void FUN_108c7fe58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c7fe64; end: 108c7ffbf; -[SCLensProcessingCarouselAggregator initWithEffectApplicator:effectFeatureProvider:systemScope:] */

undefined1 *
FUN_108c7fe64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126fdf58;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef7f00(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c7ffc0; end: 108c802c3; -[SCLensProcessingCarouselAggregator applyLens:completion:] */

void FUN_108c7ffc0(ulong param_1,undefined *param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    uVar3 = param_1;
    ppuVar10 = param_3;
    func_0x00010beb2480();
    if ((uVar3 & 1) == 0) {
      if (param_4 == 0) goto LAB_108c80278;
      ppuVar1 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110f31678;
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      param_2 = puVar6;
      (**(code **)(param_4 + 0x10))(param_4);
      _objc_release(puVar6);
    }
    else {
      puVar9 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b60();
      _objc_release(puVar9);
      uVar3 = param_1;
      func_0x00010bf60e20();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) {
        ppuVar1 = param_3;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010bf60e20(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(ppuVar1);
        _objc_release(uVar3);
        if (((ulong)ppuVar2 & 1) == 0) {
          func_0x00010bdda680(param_1);
        }
      }
      func_0x00010c188120(param_1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
      ppuVar1 = (undefined **)PTR_PTR_1126db410;
      _objc_alloc();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00f100();
      _objc_release(puVar9);
      uVar12 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_3);
      _objc_retain(param_4);
      ppuVar10 = ppuVar1;
      func_0x00010bf083c0(uVar12);
      _objc_release(param_4);
      _objc_release(param_3);
    }
    _objc_release(ppuVar1);
  }
LAB_108c80278:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  puVar9 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar9);
  if (param_2 < (undefined *)0x2) {
    func_0x00010c169a80(param_3[4]);
    func_0x00010c0d9840(*(undefined8 *)(param_3[4] + 0x38));
    func_0x00010c0d9840(*(undefined8 *)(param_3[4] + 0x28));
  }
  else if (param_2 == (undefined *)0x2) {
    puVar7 = param_3[5];
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3[4];
    func_0x00010bf60e20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if ((int)puVar6 != 0) {
      func_0x00010c188120(param_3[4]);
    }
  }
  puVar9 = param_3[6];
  if (puVar9 != (undefined *)0x0) {
    (**(code **)(puVar9 + 0x10))(puVar9,ppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 108c802c4; end: 108c803df;  */

void FUN_108c802c4(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  if (param_2 < 2) {
    func_0x00010c169a80(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  }
  else if (param_2 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf60e20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar5 != 0) {
      func_0x00010c188120(*(undefined8 *)(param_1 + 0x20));
    }
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c803e0; end: 108c804c7; -[SCLensProcessingCarouselAggregator clearLens] */

void FUN_108c803e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010bf07e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda680(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108c804c8;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = uVar2;
  lStack_48 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  func_0x00010bf3b280(uVar3,param_2,&PTR____CFConstantStringClassReference_110f771b8,&puStack_78);
  func_0x00010c188120(param_1,param_2,0);
  _objc_release(lStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 108c804c8; end: 108c8055b;  */

void FUN_108c804c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c169a80(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  func_0x00010bf07e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108c8055c; end: 108c80717; -[SCLensProcessingCarouselAggregator requestImagePickerForEffectId:photoPickerOptions:selectionLimit:useLensCoreTinselTracking:interfaceAction:completion:] */

void FUN_108c8055c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined1 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_108c806e8;
  lVar1 = param_1;
  func_0x00010bdcd980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_7 - 2U < 2) {
      func_0x00010c0fb520(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_108c80718;
      puStack_70 = &UNK_110849530;
      _objc_retain(param_8);
      uStack_68 = param_8;
      func_0x00010c239120(param_1,param_2,lVar1,(uint)param_4 & 1,param_4 >> 1 & 1,param_4 >> 2 & 1,
                          param_4 >> 3 & 1,param_5,param_6);
      _objc_release(param_1);
      uVar2 = uStack_68;
    }
    else {
      if (param_7 != 4) goto LAB_108c806e0;
      func_0x00010c0fb520(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x108c80730;
      puStack_98 = &UNK_110849530;
      _objc_retain(param_8);
      uStack_90 = param_8;
      func_0x00010bfe2560(param_1,param_2,&puStack_b0);
      _objc_release(param_1);
      uVar2 = uStack_90;
    }
    _objc_release(uVar2);
  }
LAB_108c806e0:
  _objc_release(lVar1);
LAB_108c806e8:
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 108c80718; end: 108c80747;  */

void FUN_108c80718(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c80728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108c80748; end: 108c80827; -[SCLensProcessingCarouselAggregator requestPlayButtonForEffectId:interfaceAction:] */

void FUN_108c80748(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_108c80814;
  lVar1 = param_1;
  func_0x00010bdcd980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_4 == 4) {
      func_0x00010c0fe3c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe25a0();
    }
    else if (param_4 == 3) {
      func_0x00010c0fe3c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2392a0();
    }
    else {
      if (param_4 != 2) goto LAB_108c8080c;
      func_0x00010c0fe3c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c269240();
    }
    _objc_release(param_1);
  }
LAB_108c8080c:
  _objc_release(lVar1);
LAB_108c80814:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c80828; end: 108c8099b; -[SCLensProcessingCarouselAggregator requestSnapButtonForEffectId:interfaceAction:completion:] */

void FUN_108c80828(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_108c80974;
  lVar1 = param_1;
  func_0x00010bdcd980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_4 == 4) {
      func_0x00010c23f640(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x108c809b4;
      puStack_78 = &UNK_110849530;
      _objc_retain(param_5);
      uStack_70 = param_5;
      func_0x00010bfe2840(param_1,param_2,&puStack_90);
      _objc_release(param_1);
      uVar2 = uStack_70;
    }
    else {
      if (param_4 != 3) goto LAB_108c8096c;
      func_0x00010c23f640(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_108c8099c;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      uStack_48 = param_5;
      func_0x00010c23a000(param_1,param_2,lVar1,&puStack_68);
      _objc_release(param_1);
      uVar2 = uStack_48;
    }
    _objc_release(uVar2);
  }
LAB_108c8096c:
  _objc_release(lVar1);
LAB_108c80974:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108c8099c; end: 108c809cb;  */

void FUN_108c8099c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c809ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108c809cc; end: 108c80aab; -[SCLensProcessingCarouselAggregator requestAttachmentButtonForEffectId:interfaceAction:] */

void FUN_108c809cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_108c80a98;
  lVar1 = param_1;
  func_0x00010bdcd980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_4 == 4) {
      func_0x00010bf0cbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe18e0();
    }
    else if (param_4 == 3) {
      func_0x00010bf0cbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235ea0();
    }
    else {
      if (param_4 != 2) goto LAB_108c80a90;
      func_0x00010bf0cbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268d40();
    }
    _objc_release(param_1);
  }
LAB_108c80a90:
  _objc_release(lVar1);
LAB_108c80a98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c80aac; end: 108c80c6b; -[SCLensProcessingCarouselAggregator requestModalCardForEffectId:headerId:descriptionId:interfaceAction:completion:] */

void FUN_108c80aac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  ulong param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) ||
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) goto LAB_108c80c30;
  lVar1 = param_1;
  func_0x00010bdcd980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_6 < 4) {
      func_0x00010c0cf940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108c80c6c;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_7);
      uStack_58 = param_7;
      func_0x00010c2388a0(param_1,param_2,lVar1,param_4,param_5,&puStack_78);
      _objc_release(param_1);
      uVar2 = uStack_58;
    }
    else {
      if (param_6 != 4) goto LAB_108c80c28;
      func_0x00010c0cf940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x108c80c84;
      puStack_88 = &UNK_110849530;
      _objc_retain(param_7);
      uStack_80 = param_7;
      func_0x00010bfe23c0(param_1,param_2,&puStack_a0);
      _objc_release(param_1);
      uVar2 = uStack_80;
    }
    _objc_release(uVar2);
  }
LAB_108c80c28:
  _objc_release(lVar1);
LAB_108c80c30:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c80c6c; end: 108c80c9b;  */

void FUN_108c80c6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c80c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108c80c9c; end: 108c80d57; -[SCLensProcessingCarouselAggregator requestHideIntefaceElementsForEffectId:interfaceAction:] */

void FUN_108c80c9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_108c80d44;
  lVar1 = param_1;
  func_0x00010bdcd980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_4 == 4) {
      func_0x00010c0690c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe1760();
    }
    else {
      if (param_4 != 3) goto LAB_108c80d3c;
      func_0x00010c0690c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235cc0();
    }
    _objc_release(param_1);
  }
LAB_108c80d3c:
  _objc_release(lVar1);
LAB_108c80d44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c80d58; end: 108c80d5f; -[SCLensProcessingCarouselAggregator didLoadEffectObservable] */

void FUN_108c80d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf778f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didLoadEffectObservable_1125bb7e0);
  return;
}



/* Entry: 108c80d60; end: 108c80ebb; -[SCLensProcessingCarouselAggregator _shouldActivateLens:] */

uint FUN_108c80d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c06c3c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c230800(param_3);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf5e060(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x108c80e4c;
    puStack_40 = &UNK_110857a38;
    _objc_retain(param_3);
    lVar4 = lVar3;
    uStack_38 = param_3;
    func_0x00010bfb2040(lVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar5 = (uint)(lVar4 == 0) | (uint)uVar2;
    _objc_release(lVar4);
    _objc_release(uStack_38);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 108c80ebc; end: 108c80fab; -[SCLensProcessingCarouselAggregator _appliedEffectFromId:] */

void FUN_108c80ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf07e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    func_0x00010bf60e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      _objc_retain(param_1);
      uVar3 = param_1;
    }
    _objc_release(param_1);
  }
  else {
    _objc_retain(uVar1);
    uVar3 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108c80fac; end: 108c81063; -[SCLensProcessingCarouselAggregator _cancelCurrentLens] */

void FUN_108c80fac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bf60e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = uVar1;
  func_0x00010c07f200();
  if (((uVar4 & 1) == 0) && (lVar3 == 0 && uVar1 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = uVar1;
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e320(uVar5,param_2,uVar4);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c81064; end: 108c8106b;  */

void FUN_108c81064(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSponsored_1125fd690);
  return;
}



/* Entry: 108c8106c; end: 108c81077; -[SCLensProcessingCarouselAggregator appliedLens] */

void FUN_108c8106c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 108c81078; end: 108c8107f; -[SCLensProcessingCarouselAggregator setAppliedLens:] */

void FUN_108c81078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c81080; end: 108c8108b; -[SCLensProcessingCarouselAggregator currentlyApplingLens] */

void FUN_108c81080(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 108c8108c; end: 108c81093; -[SCLensProcessingCarouselAggregator setCurrentlyApplingLens:] */

void FUN_108c8108c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c81094; end: 108c8109b; -[SCLensProcessingCarouselAggregator appliedLensObservable] */

undefined8 FUN_108c81094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c8109c; end: 108c810a3; -[SCLensProcessingCarouselAggregator didTurnOffLensObservable] */

undefined8 FUN_108c8109c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108c810a4; end: 108c810ab; -[SCLensProcessingCarouselAggregator didTurnOnLensObservable] */

undefined8 FUN_108c810a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c810ac; end: 108c810b3; -[SCLensProcessingCarouselAggregator willTurnOnLensObservable] */

undefined8 FUN_108c810ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c810b4; end: 108c810bb; -[SCLensProcessingCarouselAggregator clearEffectObservable] */

undefined8 FUN_108c810b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108c810bc; end: 108c810d3; -[SCLensProcessingCarouselAggregator attachmentButtonDelegate] */

void FUN_108c810bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c810d4; end: 108c810df; -[SCLensProcessingCarouselAggregator setAttachmentButtonDelegate:] */

void FUN_108c810d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 108c810e0; end: 108c810f7; -[SCLensProcessingCarouselAggregator interfaceElementsDelegate] */

void FUN_108c810e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c810f8; end: 108c81103; -[SCLensProcessingCarouselAggregator setInterfaceElementsDelegate:] */

void FUN_108c810f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 108c81104; end: 108c8111b; -[SCLensProcessingCarouselAggregator modalCardDelegate] */

void FUN_108c81104(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c8111c; end: 108c81127; -[SCLensProcessingCarouselAggregator setModalCardDelegate:] */

void FUN_108c8111c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 108c81128; end: 108c8113f; -[SCLensProcessingCarouselAggregator photoPickerDelegate] */

void FUN_108c81128(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c81140; end: 108c8114b; -[SCLensProcessingCarouselAggregator setPhotoPickerDelegate:] */

void FUN_108c81140(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 108c8114c; end: 108c81163; -[SCLensProcessingCarouselAggregator playButtonDelegate] */

void FUN_108c8114c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c81164; end: 108c8116f; -[SCLensProcessingCarouselAggregator setPlayButtonDelegate:] */

void FUN_108c81164(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 108c81170; end: 108c81187; -[SCLensProcessingCarouselAggregator snapButtonDelegate] */

void FUN_108c81170(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c81188; end: 108c81193; -[SCLensProcessingCarouselAggregator setSnapButtonDelegate:] */

void FUN_108c81188(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 108c81194; end: 108c81253; -[SCLensProcessingCarouselAggregator .cxx_destruct] */

void FUN_108c81194(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 108c81254; end: 108c812db;  */

void FUN_108c81254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126db418;
  _objc_alloc(PTR_PTR_1126db418);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00eee0(puVar1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c812dc; end: 108c81323;  */

void FUN_108c812dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beada80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c81324; end: 108c8137b; -[SCLensProcessingCarouselEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c81324(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_1127793d0));
  puStack_28 = PTR_PTR_1126fdf60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c8137c; end: 108c814fb; -[SCLensProcessingCarouselEntryPoint _setupLensProcessingActivator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8137c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127793d4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_50,*(undefined8 *)(param_1 + _DAT_1127793cc));
  uVar3 = param_3;
  func_0x00010bef0300();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127793d0);
  *(undefined8 *)(param_1 + _DAT_1127793d0) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108c814fc; end: 108c815bf;  */

void FUN_108c814fc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf3b2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229ae0(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 108c815c0; end: 108c8163f; -[SCLensProcessingCarouselEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c815c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127793e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127793d4);
  _objc_destroyWeak(param_1 + _DAT_1127793e0);
  _objc_destroyWeak(param_1 + _DAT_1127793dc);
  _objc_destroyWeak(param_1 + _DAT_1127793d8);
  _objc_storeStrong(param_1 + _DAT_1127793d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127793cc,0);
  return;
}



/* Entry: 108c81640; end: 108c81727; -[LegacyOnlyLensProcessingURIPluginProvider provideURIPluginsWithScopeExposer:effectActionUpdater:appliedEffectsObservable:apiServicePluginProvider:completion:] */

void FUN_108c81640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108c81728;
  puStack_60 = &UNK_110abf468;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf9d5c0(param_3,param_2,&puStack_78,param_7);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108c81728; end: 108c8178f;  */

void FUN_108c81728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db428;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0577e0();
  _objc_release(param_2);
  func_0x00010c168680(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


