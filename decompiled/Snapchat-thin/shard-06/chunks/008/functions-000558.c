/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104eabdf0; end: 104eabdf7;  */

void FUN_104eabdf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 104eabdf8; end: 104eabfe3; -[SCLensUnlockLensCollectionCardEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eabdf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104eabfe4;
  puStack_88 = &UNK_1108570a8;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1ae0;
  _objc_alloc(PTR_PTR_1126b1ae0);
  lVar4 = param_1 + _DAT_112715a24;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112715a30;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c278c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056da0(puVar3);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104eabfe4; end: 104eac063;  */

void FUN_104eabfe4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf30c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eac064; end: 104eac223; -[SCLensUnlockLensCollectionCardEntryPoint _createLensUnlockCardPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac064(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112715a48;
    _objc_loadWeakRetained(lVar9);
  }
  lVar1 = lVar9;
  func_0x00010c0c4b20(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar9);
  puVar3 = PTR_PTR_1126b1ae8;
  _objc_alloc(PTR_PTR_1126b1ae8);
  lVar10 = (long)_DAT_112715a24;
  lVar9 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112715a34;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c091500();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112715a38;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023340(puVar3,param_2,lVar4,lVar5,lVar2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar9);
  puVar8 = PTR_PTR_1126b1af0;
  _objc_alloc(PTR_PTR_1126b1af0);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0567a0(puVar8,param_2,lVar9,puVar3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104eac224; end: 104eac233;  */

void FUN_104eac224(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf570b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_createMediaDownloaderForMediaTyp_1125b35d0,1,7);
  return;
}



/* Entry: 104eac234; end: 104eac2eb; -[SCLensUnlockLensCollectionCardEntryPoint _createLensCollectionCarouselPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1a90;
  _objc_alloc(PTR_PTR_1126b1a90);
  param_1 = param_1 + _DAT_112715a3c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c091780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023420(puVar1,param_2,lVar4,1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eac2ec; end: 104eac433; -[SCLensUnlockLensCollectionCardEntryPoint _createLensCollectionCarouselActivator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac2ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1af8;
  _objc_alloc(PTR_PTR_1126b1af8);
  param_1 = param_1 + _DAT_112715a40;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022f60(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104eac434; end: 104eac473;  */

void FUN_104eac434(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eac474; end: 104eac4ab; -[SCLensUnlockLensCollectionCardEntryPoint _createSendToPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac474(void)

{
  _objc_alloc(PTR_PTR_1126b1b00);
  func_0x00010c0444e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eac4ac; end: 104eac58f; -[SCLensUnlockLensCollectionCardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac4ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715a44,0);
  _objc_destroyWeak(param_1 + _DAT_112715a3c);
  _objc_destroyWeak(param_1 + _DAT_112715a40);
  _objc_destroyWeak(param_1 + _DAT_112715a30);
  _objc_destroyWeak(param_1 + _DAT_112715a38);
  _objc_destroyWeak(param_1 + _DAT_112715a48);
  _objc_destroyWeak(param_1 + _DAT_112715a34);
  _objc_destroyWeak(param_1 + _DAT_112715a24);
  _objc_storeStrong(param_1 + _DAT_112715a2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715a28,0);
  return;
}



/* Entry: 104eac590; end: 104eac5c7; -[SCLensUnlockLensCollectionCardScopePresenterEntryPoint _scopePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac590(void)

{
  _objc_alloc(PTR_PTR_1126b1b10);
  func_0x00010c025ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eac5c8; end: 104eac62b; -[SCLensUnlockLensCollectionCardScopePresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eac5c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715a4c,0);
  _objc_storeStrong(param_1 + _DAT_112715a5c,0);
  _objc_destroyWeak(param_1 + _DAT_112715a58);
  _objc_destroyWeak(param_1 + _DAT_112715a54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715a50);
  return;
}



/* Entry: 104eac62c; end: 104eac6eb; -[SCLensUnlockCardPresenter initWithUIContainer:dataProvider:] */

undefined1 *
FUN_104eac62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4bf8;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eac6ec; end: 104eac6f7; -[SCLensUnlockCardPresenter setDelegate:] */

void FUN_104eac6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104eac6f8; end: 104eac833; -[SCLensUnlockCardPresenter initiatePresentation] */

void FUN_104eac6f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf63f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c09c580(*(undefined8 *)(param_1 + 0x10));
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104eac834; end: 104eac91f;  */

void FUN_104eac834(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104eac920;
  puStack_50 = &UNK_110857178;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 104eac920; end: 104eac9bb;  */

void FUN_104eac920(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eac9bc; end: 104eaca3f; -[SCLensUnlockCardPresenter dismissUnlockCardWithCompletion:] */

void FUN_104eac9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104eaca40;
  puStack_30 = &UNK_1108571a8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be029c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104eaca40; end: 104eaca67;  */

void FUN_104eaca40(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b1ad0,PTR_s_null_112615110);
  return;
}



/* Entry: 104eaca68; end: 104eacaab; -[SCLensUnlockCardPresenter dialogDidDismiss:] */

void FUN_104eaca68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1ad0;
  func_0x00010c0ddbe0(PTR_PTR_1126b1ad0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfc0c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eacaac; end: 104eacae3; -[SCLensUnlockCardPresenter isPresenting] */

bool FUN_104eacaac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c10fd00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 104eacae4; end: 104eacccf; -[SCLensUnlockCardPresenter _displayContent:] */

void FUN_104eacae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010beef480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = param_3;
  func_0x00010bfe8f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280bc0(0x4059000000000000,0x4059000000000000,uVar7,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b0648;
  _objc_alloc(PTR_PTR_1126b0648);
  func_0x00010c01cb60();
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  uVar5 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfefe80(puVar3,param_2,puVar2,uVar5,uVar4,0,uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar5);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  return;
}



/* Entry: 104eaccd0; end: 104eaccdb;  */

void FUN_104eaccd0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dialogActionFromUnlockCardActio_11255c9c0,
             param_2);
  return;
}



/* Entry: 104eaccdc; end: 104eace17; -[SCLensUnlockCardPresenter _dialogActionFromUnlockCardAction:] */

void FUN_104eaccdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126aed70;
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010beecec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010beff480(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104eace18; end: 104eaceeb;  */

void FUN_104eace18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104eacea0;
  puStack_30 = &UNK_110857208;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010be029c0(lVar1,param_2,&puStack_48);
  _objc_release(lVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 104eaceec; end: 104ead033; -[SCLensUnlockCardPresenter _dismissDialogWithCompletion:] */

void FUN_104eaceec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ead034;
  puStack_50 = &UNK_1108571a8;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock();
  uVar2 = param_1;
  func_0x00010c07ab40();
  if ((uVar2 & 1) == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(ppuVar1);
    func_0x00010bf6f440(uVar3);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104ead034; end: 104ead073;  */

void FUN_104ead034(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c0ddbe0(PTR_PTR_1126b1ad0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ead074; end: 104ead0cf;  */

void FUN_104ead074(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfc0c0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ead0d0; end: 104ead12b; -[SCLensUnlockCardPresenter _dialogDidDismissWithActionType:] */

void FUN_104ead0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0979a0();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ead12c; end: 104ead17b; -[SCLensUnlockCardPresenter .cxx_destruct] */

void FUN_104ead12c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ead17c; end: 104ead1ef; -[SCLensUnlockLensCollectionCardScopePresenter initWithLensUnlockCardScopeExposer:] */

undefined1 * FUN_104ead17c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4c00;
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



/* Entry: 104ead1f0; end: 104ead26f; -[SCLensUnlockLensCollectionCardScopePresenter presentLensUnlockCardWithCollectionId:withUIContainer:] */

void FUN_104ead1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1b18;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056600();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ead270; end: 104ead28f; -[SCLensUnlockLensCollectionCardScopePresenter lensUnlockCardWorkflowDidEnd] */

void FUN_104ead270(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ead290; end: 104ead29b; -[SCLensUnlockLensCollectionCardScopePresenter .cxx_destruct] */

void FUN_104ead290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ead29c; end: 104ead35f; -[SCLensUnlockCardWorkflow initWithPresenter:scopeDelegate:actionHandler:] */

undefined1 *
FUN_104ead29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4c08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ead360; end: 104ead367; -[SCLensUnlockCardWorkflow begin] */

void FUN_104ead360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_initiatePresentation_1125f6d78);
  return;
}



/* Entry: 104ead368; end: 104ead36f; -[SCLensUnlockCardWorkflow endWithCompletion:] */

void FUN_104ead368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissUnlockCardWithCompletion__1125bec30);
  return;
}



/* Entry: 104ead370; end: 104ead437; -[SCLensUnlockCardWorkflow lensUnlockCardDidDismissWithActionType:] */

void FUN_104ead370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfd3000(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ead438; end: 104ead463;  */

void FUN_104ead438(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ead464; end: 104ead48f; -[SCLensUnlockCardWorkflow _handleActionCompletion] */

void FUN_104ead464(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0979c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ead490; end: 104ead4c7; -[SCLensUnlockCardWorkflow .cxx_destruct] */

void FUN_104ead490(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ead4c8; end: 104ead50f;  */

void FUN_104ead4c8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db90d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db90d8,
                      &PTR____CFConstantStringClassReference_110db90f8,0);
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



/* Entry: 104ead510; end: 104ead5e7; -[SCLensUnlockCardAction initWithTitle:accessibilityIdentifier:activationHandler:] */

undefined1 *
FUN_104ead510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4c10;
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
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ead5e8; end: 104ead60b; -[SCLensUnlockCardAction copyWithZone:] */

undefined8 FUN_104ead5e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ead60c; end: 104ead613; -[SCLensUnlockCardAction title] */

undefined8 FUN_104ead60c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ead614; end: 104ead61b; -[SCLensUnlockCardAction accessibilityIdentifier] */

undefined8 FUN_104ead614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ead61c; end: 104ead623; -[SCLensUnlockCardAction activationHandler] */

undefined8 FUN_104ead61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104ead624; end: 104ead65f; -[SCLensUnlockCardAction .cxx_destruct] */

void FUN_104ead624(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ead660; end: 104ead76b; -[SCLensUnlockCardContent initWithTitle:body:imageURL:actions:] */

undefined1 *
FUN_104ead660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e4c18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ead76c; end: 104ead78f; -[SCLensUnlockCardContent copyWithZone:] */

undefined8 FUN_104ead76c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ead790; end: 104ead797; -[SCLensUnlockCardContent title] */

undefined8 FUN_104ead790(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ead798; end: 104ead79f; -[SCLensUnlockCardContent body] */

undefined8 FUN_104ead798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ead7a0; end: 104ead7a7; -[SCLensUnlockCardContent imageURL] */

undefined8 FUN_104ead7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104ead7a8; end: 104ead7af; -[SCLensUnlockCardContent actions] */

undefined8 FUN_104ead7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104ead7b0; end: 104ead7f7; -[SCLensUnlockCardContent .cxx_destruct] */

void FUN_104ead7b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ead7f8; end: 104ead88f; +[SCLensUnlockCardActionType collectionUnlockActionWithLensId:collectionId:] */

void FUN_104ead7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1ad0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ead890; end: 104ead8fb; +[SCLensUnlockCardActionType lensUnlockActionWithLensId:] */

void FUN_104ead890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1ad0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ead8fc; end: 104ead943; +[SCLensUnlockCardActionType null] */

void FUN_104ead8fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1ad0;
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



/* Entry: 104ead944; end: 104ead9d7; +[SCLensUnlockCardActionType sendToActionWithCollectionId:attachedImageFuture:] */

void FUN_104ead944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1ad0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ead9d8; end: 104ead9fb; -[SCLensUnlockCardActionType copyWithZone:] */

undefined8 FUN_104ead9d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ead9fc; end: 104eada97; -[SCLensUnlockCardActionType hash] */

void FUN_104ead9fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126e4c20;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eada98; end: 104eadadb; -[SCLensUnlockCardActionType internalInit] */

void FUN_104eada98(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4c20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eadadc; end: 104eadbdb; -[SCLensUnlockCardActionType isEqual:] */

long FUN_104eadadc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104eadbb4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104eadbc0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104eadbc0;
              }
              goto LAB_104eadbb4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104eadbc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104eadbdc; end: 104eadccf; -[SCLensUnlockCardActionType matchNull:sendToAction:lensUnlockAction:collectionUnlockAction:] */

void FUN_104eadbdc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_104eadca0;
    }
    if ((lVar3 != 1) || (param_4 == 0)) goto LAB_104eadca0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  else {
    if (lVar3 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_104eadca0;
    }
    if ((lVar3 != 3) || (param_6 == 0)) goto LAB_104eadca0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_104eadca0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eadcd0; end: 104eadd23; -[SCLensUnlockCardActionType .cxx_destruct] */

void FUN_104eadcd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104eadd24; end: 104eadde7; -[SCLensUnlockLensCollectionCardScope initWithUIContainer:collectionId:delegate:] */

undefined1 *
FUN_104eadd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4c28;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eadde8; end: 104eaddef; -[SCLensUnlockLensCollectionCardScope uiContainer] */

undefined8 FUN_104eadde8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104eaddf0; end: 104eaddf7; -[SCLensUnlockLensCollectionCardScope collectionId] */

undefined8 FUN_104eaddf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104eaddf8; end: 104eade0f; -[SCLensUnlockLensCollectionCardScope delegate] */

void FUN_104eaddf8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eade10; end: 104eade47; -[SCLensUnlockLensCollectionCardScope .cxx_destruct] */

void FUN_104eade10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eade48; end: 104eade4f; -[SCLensUnlockLensCollectionCardNavigationServices lensUnlockCardPresenter] */

undefined8 FUN_104eade48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104eade50; end: 104eade5b; -[SCLensUnlockLensCollectionCardNavigationServices .cxx_destruct] */

void FUN_104eade50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eade5c; end: 104eae047; -[SCScanResultsLensCollectionsViewModelProvider initWithLensUnlocker:lensCollectionsPresenter:lensCollectionSendToPresenter:lensCollectionMetadataMapper:lensMediaDownloader:] */

undefined8 *
FUN_104eade5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e4c38;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar3 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104eae048; end: 104eae09f;  */

void FUN_104eae048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eae0a0; end: 104eae0c7; -[SCScanResultsLensCollectionsViewModelProvider scanResultViewModels] */

void FUN_104eae0a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104eae0c8; end: 104eae27b; -[SCScanResultsLensCollectionsViewModelProvider configureWithContext:] */

void FUN_104eae0c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010beeee20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0cfc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    lVar3 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0e0ea0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar1);
    _objc_retain(lVar2);
    lVar6 = lVar5;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104eae27c; end: 104eae2cf;  */

void FUN_104eae27c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eae2d0; end: 104eae413; -[SCScanResultsLensCollectionsViewModelProvider _handleSnapcodeMetadata:actionRouter:uiContainer:] */

void FUN_104eae2d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 0xd) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c091620(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(uVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104eae414;
    puStack_70 = &UNK_1108572b8;
    lStack_68 = param_1;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c0c0800(uVar3,param_2,&puStack_88,0);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eae414; end: 104eae427;  */

void FUN_104eae414(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__provideViewModelWithLensCollect_11257e840,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104eae428; end: 104eae873; -[SCScanResultsLensCollectionsViewModelProvider _provideViewModelWithLensCollection:actionRouter:uiContainer:] */

void FUN_104eae428(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c26ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c26ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfe79c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126aef38;
  _objc_alloc();
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be258;
  puVar6 = puVar5;
  func_0x000104eaf6a4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar9 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar10 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0048e0(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104eaf68c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  lVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar6);
  _objc_release(puVar8);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126aef48;
  func_0x00010c0916e0(PTR_PTR_1126aef48);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aef58;
  _objc_alloc(PTR_PTR_1126aef58);
  puVar10 = puVar9;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b920(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdc4a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eae874; end: 104eae8a7;  */

void FUN_104eae874(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eae8a8; end: 104eae9d7; -[SCScanResultsLensCollectionsViewModelProvider _activateCarouselWithLensCollection:actionRouter:] */

void FUN_104eae8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104eae9d8;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_80,auStack_48);
  func_0x00010bf6ad20(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eae9d8; end: 104eaea7b;  */

void FUN_104eae9d8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104eaea7c;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104eaea7c; end: 104eaeaaf;  */

void FUN_104eaea7c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be047e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaeab0; end: 104eaeb3f;  */

void FUN_104eaeab0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104eaeb40;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104eaeb40; end: 104eaeb6b;  */

void FUN_104eaeb40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaeb6c; end: 104eaec0f; -[SCScanResultsLensCollectionsViewModelProvider _displayLensCollection:] */

void FUN_104eaeb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    _objc_retain(param_3);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf3fe40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ca40(lVar2,param_2,uVar1,0,0);
    _objc_release(uVar1);
    _objc_release(lVar2);
    func_0x00010bed1560(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 104eaec10; end: 104eaec4b; -[SCScanResultsLensCollectionsViewModelProvider _selectDefaultLens] */

void FUN_104eaec10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104eaec4c; end: 104eaedbf; -[SCScanResultsLensCollectionsViewModelProvider _unlockLensFromLensCollection:] */

void FUN_104eaec4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b1ab0;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b1ab8;
    _objc_alloc(PTR_PTR_1126b1ab8);
    lVar1 = param_3;
    func_0x00010c098240(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf3fe40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024960(puVar3,param_2,lVar4,0,lVar5,0,1,0,0xb);
    func_0x00010c094620(puVar6,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8040();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eaedc0; end: 104eaee73; -[SCScanResultsLensCollectionsViewModelProvider _presentSendToForLensCollection:uiContainer:imageFuture:] */

void FUN_104eaedc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10e120(uVar2,param_2,param_4,uVar1,param_5,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104eaee74; end: 104eaeeeb; -[SCScanResultsLensCollectionsViewModelProvider .cxx_destruct] */

void FUN_104eaee74(long param_1)

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



/* Entry: 104eaeeec; end: 104eaf24f; -[SCScanResultsLensCollectionsViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eaeeec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112715af8;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar10;
  func_0x00010c0c4b20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_initWeak(auStack_78,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104eaf260;
  puStack_88 = &UNK_1108570a8;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112715afc;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c0b6a20(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c090c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar10);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112715b00;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c0917e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0917a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar6 = lVar4;
  func_0x00010bf41860(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b1b20;
  _objc_alloc(PTR_PTR_1126b1b20);
  lVar10 = param_1 + _DAT_112715ae8;
  _objc_loadWeakRetained(lVar10);
  lVar8 = lVar10;
  func_0x00010c278c20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112715aec;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c091640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025b80(puVar7);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar10);
  param_1 = param_1 + _DAT_112715af0;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  return;
}



/* Entry: 104eaf250; end: 104eaf25f;  */

void FUN_104eaf250(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf570b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_createMediaDownloaderForMediaTyp_1125b35d0,1,7);
  return;
}



/* Entry: 104eaf260; end: 104eaf29f;  */

void FUN_104eaf260(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf30c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eaf2a0; end: 104eaf39f;  */

void FUN_104eaf2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eaf3a0; end: 104eaf3e7;  */

void FUN_104eaf3a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eaf3e8; end: 104eaf517; -[SCScanResultsLensCollectionsViewModelProviderEntryPoint _createCollectionsActivatorWithCarouselManager:carouselFeature:] */

void FUN_104eaf3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1af8;
  _objc_alloc(PTR_PTR_1126b1af8);
  func_0x00010c022f60();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104eaf518; end: 104eaf55f;  */

void FUN_104eaf518(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eaf560; end: 104eaf5db; -[SCScanResultsLensCollectionsViewModelProviderEntryPoint _createCollectionsPresenterWithCarouselFeature:] */

void FUN_104eaf560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1a90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c023420(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eaf5dc; end: 104eaf613; -[SCScanResultsLensCollectionsViewModelProviderEntryPoint _createSendToPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eaf5dc(void)

{
  _objc_alloc(PTR_PTR_1126b1b00);
  func_0x00010c0444e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


