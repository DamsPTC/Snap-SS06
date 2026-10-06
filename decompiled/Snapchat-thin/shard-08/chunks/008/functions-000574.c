/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066ecc90; end: 1066ecc97; +[SCLensExplorerMockedFavoritesQueryCoordinator isAvailable] */

undefined8 FUN_1066ecc90(void)

{
  return 0;
}



/* Entry: 1066ecc98; end: 1066ecc9b; -[SCLensExplorerMockedFavoritesQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066ecc98(void)

{
  return;
}



/* Entry: 1066ecc9c; end: 1066eccab; -[SCLensExplorerMockedFavoritesQueryCoordinator currentQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ecc9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e5b8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066eccac; end: 1066eccbb; -[SCLensExplorerMockedFavoritesQueryCoordinator canPerformQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066eccac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e5b8),PTR_s_canPerformQuery__1125a8dc0);
  return;
}



/* Entry: 1066eccbc; end: 1066ecccb; -[SCLensExplorerMockedFavoritesQueryCoordinator isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066eccbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e5bc),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066ecccc; end: 1066eccdb; -[SCLensExplorerMockedFavoritesQueryCoordinator reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ecccc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274e5c0) = 0;
  return;
}



/* Entry: 1066eccdc; end: 1066ecdff; -[SCLensExplorerMockedFavoritesQueryCoordinator _handleQuery:updatingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066eccdc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2d060();
  if (((uVar1 & 1) != 0) || ((*(byte *)(param_1 + (long)_DAT_11274e5c0) & 1) == 0)) {
    lVar5 = (long)_DAT_11274e5b8;
    func_0x00010beef7a0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bed6b60(param_1);
    func_0x00010bfaf9e0(*(undefined8 *)(param_1 + lVar5));
    *(undefined1 *)(param_1 + (long)_DAT_11274e5c0) = 1;
    if (param_4 != 0) {
      puVar2 = PTR_PTR_1126ccfd8;
      _objc_alloc(PTR_PTR_1126ccfd8);
      func_0x00010c003b80();
      puVar3 = PTR_PTR_1126ccfe0;
      _objc_alloc(PTR_PTR_1126ccfe0);
      func_0x00010c03c280();
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ece00; end: 1066ecf27; -[SCLensExplorerMockedFavoritesQueryCoordinator _setupFavoritesObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ece00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274e5c8);
  *(undefined8 *)(param_1 + _DAT_11274e5c8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ecf28; end: 1066ecfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ecf28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274e5c4);
    *(undefined8 *)(param_1 + _DAT_11274e5c4) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066ecfc4; end: 1066ed3a7;  */

void FUN_1066ecfc4(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  
  puVar1 = PTR_PTR_1126ccd30;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0ea80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c291440();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2936e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078fa0();
  uVar15 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c2427a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c242800();
  func_0x00010c05c6e0();
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar20 = PTR_PTR_1126ccd40;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d7e0();
  _objc_release(uVar2);
  puVar21 = PTR_PTR_1126ccc38;
  _objc_alloc(PTR_PTR_1126ccc38);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar4 = param_2;
  func_0x00010bfe5b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07eda0();
  _objc_release(param_2);
  func_0x00010c0591c0(puVar21);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar20);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1066ed3a8; end: 1066ed3b7;  */

void FUN_1066ed3a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_lensItemWithLensItem__112602d28,param_2);
  return;
}



/* Entry: 1066ed3b8; end: 1066ed41b; -[SCLensExplorerMockedFavoritesQueryCoordinator _updateDataStoreWithRegularLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ed3b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccc80;
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
  func_0x00010c286c40(*(undefined8 *)(param_1 + _DAT_11274e5bc),param_2,
                      *(undefined8 *)(param_1 + _DAT_11274e5c4),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066ed41c; end: 1066ed427; -[SCLensExplorerMockedFavoritesQueryCoordinator setCurrentQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ed41c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066ed428; end: 1066ed437; -[SCLensExplorerMockedFavoritesQueryCoordinator isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1066ed428(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274e5b4);
}



/* Entry: 1066ed438; end: 1066ed4a7; -[SCLensExplorerMockedFavoritesQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ed438(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e5cc,0);
  _objc_storeStrong(param_1 + _DAT_11274e5c4,0);
  _objc_storeStrong(param_1 + _DAT_11274e5c8,0);
  _objc_storeStrong(param_1 + _DAT_11274e5bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e5b8,0);
  return;
}



/* Entry: 1066ed4a8; end: 1066ed657; -[SCLensExplorerMockedQueryCoordinator initWithRealQueryCoordinator:queryStatusChecker:dataStore:dynamicUpdateHandler:corrdinatorSectionIdentifier:] */

undefined8 *
FUN_1066ed4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f2900;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 6) = 0;
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = puVar1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066ed658; end: 1066ed73b; -[SCLensExplorerMockedQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066ed658(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cc908;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c155f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080260(puVar3,param_2,lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010be0e580();
      _objc_release(lVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010be60d40(param_1,param_2,param_3,param_4);
        goto LAB_1066ed714;
      }
    }
    else {
      _objc_release(lVar2);
    }
    func_0x00010be86880(param_1,param_2,param_3,param_4);
  }
LAB_1066ed714:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ed73c; end: 1066ed743; +[SCLensExplorerMockedQueryCoordinator isAvailable] */

undefined8 FUN_1066ed73c(void)

{
  return 0;
}



/* Entry: 1066ed744; end: 1066ed81f; -[SCLensExplorerMockedQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066ed744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be0e580();
  if ((int)lVar1 == 0) {
    uVar2 = param_5;
    func_0x00010c11d080(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    lVar1 = param_1;
    func_0x00010beb4b20(param_1,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)lVar1 == 0) {
      func_0x00010c286c40(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
    }
    else {
      func_0x00010be8ab20(param_1);
    }
  }
  else {
    func_0x00010bfd1220(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
    _objc_release(param_5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ed820; end: 1066ed85f; -[SCLensExplorerMockedQueryCoordinator currentQuery] */

void FUN_1066ed820(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be0e580();
  lVar1 = 8;
  if ((int)lVar2 == 0) {
    lVar1 = 0x28;
  }
  func_0x00010bf5fc60(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ed860; end: 1066ed997; -[SCLensExplorerMockedQueryCoordinator canPerformQuery:] */

uint FUN_1066ed860(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0720c0();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_1;
      func_0x00010be0e580();
      _objc_release(uVar3);
      if ((uVar6 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf2d060(uVar7,param_2,param_3);
        uVar1 = (uint)uVar7;
        if ((int)uVar5 != 0) {
          uVar1 = (*(byte *)(param_1 + 0x30) ^ 1) & uVar1;
        }
        goto LAB_1066ed94c;
      }
    }
    else {
      _objc_release(uVar3);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2d060(uVar7,param_2,param_3);
    uVar1 = (uint)uVar7;
  }
LAB_1066ed94c:
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1 & 1;
}



/* Entry: 1066ed998; end: 1066ed9d7; -[SCLensExplorerMockedQueryCoordinator isEmpty] */

void FUN_1066ed998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be0e580();
  lVar1 = 8;
  if ((int)lVar2 == 0) {
    lVar1 = 0x10;
  }
  func_0x00010c071780(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ed9d8; end: 1066eda07; -[SCLensExplorerMockedQueryCoordinator reset] */

void FUN_1066ed9d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be0e580();
  if ((int)lVar1 != 0) {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1066eda08; end: 1066edb43; -[SCLensExplorerMockedQueryCoordinator _updateDataStoreWithRegularLensesForQuery:] */

void FUN_1066eda08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ccc80;
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
  uVar5 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126ccfd0;
    func_0x00010c0cf780(PTR_PTR_1126ccfd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286c40(uVar5,param_2,puVar4,puVar2);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c286c40(uVar5,param_2,PTR____NSArray0__struct_11034ab48,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066edb44; end: 1066edbc3; -[SCLensExplorerMockedQueryCoordinator _updateDataStoreWithCreatorItems] */

void FUN_1066edb44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ccc80;
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126ccfd0;
  func_0x00010c0cf760(PTR_PTR_1126ccfd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286c40(uVar3,param_2,puVar2,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066edbc4; end: 1066edbcb; -[SCLensExplorerMockedQueryCoordinator _realResultsForQuery:updatingBlock:] */

void FUN_1066edbc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_resultsForQuery_updatingBlock__11262ce18);
  return;
}



/* Entry: 1066edbcc; end: 1066ede17; -[SCLensExplorerMockedQueryCoordinator _mockedResultsForQuery:updatingBlock:] */

void FUN_1066edbcc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2d060();
  if (((uVar1 & 1) != 0) || ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    func_0x00010beef7a0(*(undefined8 *)(param_1 + 0x28));
    uVar2 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      func_0x00010bed6b80(param_1);
    }
    else if (*(long *)(param_1 + 0x38) == 0) {
      func_0x00010bed6b20(param_1);
    }
    else {
      uVar2 = param_3;
      func_0x00010c11d680(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11daa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cd100;
      func_0x00010c0e8e20(PTR_PTR_1126cd100);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar3);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar5 = PTR_PTR_1126ccfd0;
      func_0x00010c0cf6c0(PTR_PTR_1126ccfd0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ccfd8;
      _objc_alloc(PTR_PTR_1126ccfd8);
      func_0x00010c003b80();
      puVar7 = PTR_PTR_1126ccfe0;
      _objc_alloc(PTR_PTR_1126ccfe0);
      func_0x00010c03c280();
      func_0x00010bfd1240(*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    func_0x00010bfaf9e0(*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (param_4 != 0) {
      puVar5 = PTR_PTR_1126ccfd8;
      _objc_alloc(PTR_PTR_1126ccfd8);
      func_0x00010c003b80();
      puVar6 = PTR_PTR_1126ccfe0;
      _objc_alloc(PTR_PTR_1126ccfe0);
      func_0x00010c03c280();
      puVar7 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ede18; end: 1066edf1f; -[SCLensExplorerMockedQueryCoordinator _shouldOverrideResultsForQuery:] */

uint FUN_1066ede18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c11daa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126cc908;
  func_0x00010c080260(PTR_PTR_1126cc908,param_2,*(undefined8 *)(param_1 + 0x40));
  return (uint)uVar3 & (uint)uVar5 & (uint)puVar4;
}



/* Entry: 1066edf20; end: 1066edf33; -[SCLensExplorerMockedQueryCoordinator _fallbackToRealCoordinator] */

void FUN_1066edf20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cc908,PTR_s_isFavoritesSectionIdentifier__1125fa4d8,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1066edf34; end: 1066ee05b; -[SCLensExplorerMockedQueryCoordinator _reloadRealSubscription] */

void FUN_1066edf34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cd1e8;
  _objc_alloc(PTR_PTR_1126cd1e8);
  puVar2 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ee15d8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c520(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110ee15d8,0,
                      puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cd1f0;
  _objc_alloc(PTR_PTR_1126cd1f0);
  func_0x00010c03c460();
  func_0x00010be86880(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066ee05c; end: 1066ee063; -[SCLensExplorerMockedQueryCoordinator setCurrentQuery:] */

void FUN_1066ee05c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066ee064; end: 1066ee06b; -[SCLensExplorerMockedQueryCoordinator isLoading] */

undefined1 FUN_1066ee064(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1066ee06c; end: 1066ee0e3; -[SCLensExplorerMockedQueryCoordinator .cxx_destruct] */

void FUN_1066ee06c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066ee0e4; end: 1066ee0eb; +[SCStoriesThumbnailCoordinatorMock isAvailable] */

undefined8 FUN_1066ee0e4(void)

{
  return 0;
}



/* Entry: 1066ee0ec; end: 1066ee0f3; -[SCStoriesThumbnailCoordinatorMock addListener:] */

undefined8 FUN_1066ee0ec(void)

{
  return 0;
}



/* Entry: 1066ee0f4; end: 1066ee107; -[SCStoriesThumbnailCoordinatorMock addThumbnail:thumbnailMedia:expirationDate:completionBlock:] */

void FUN_1066ee0f4(void)

{
  long in_x5;
  
  if (in_x5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066ee100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x5 + 0x10))(in_x5);
    return;
  }
  return;
}



/* Entry: 1066ee108; end: 1066ee11b; -[SCStoriesThumbnailCoordinatorMock addThumbnailFromImage:thumbnailInfo:expirationDate:completionBlock:] */

void FUN_1066ee108(void)

{
  long in_x5;
  
  if (in_x5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066ee114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x5 + 0x10))(in_x5);
    return;
  }
  return;
}



/* Entry: 1066ee11c; end: 1066ee1d7; -[SCStoriesThumbnailCoordinatorMock queryThumbnailForThumbnailInfo:completionQueue:completion:] */

void FUN_1066ee11c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_x4;
  
  _objc_retain(in_x4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cfe0(0x4059000000000000,0x4059000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (in_x4 != 0) {
    puVar1 = puVar2;
    _UIImagePNGRepresentation(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x4 + 0x10))(in_x4,puVar1,0);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1066ee1d8; end: 1066ee1eb; -[SCStoriesThumbnailCoordinatorMock removeAllThumbnailsWithCompletion:] */

void FUN_1066ee1d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066ee1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 1066ee1ec; end: 1066ee1ef; -[SCStoriesThumbnailCoordinatorMock removeListener:] */

void FUN_1066ee1ec(void)

{
  return;
}



/* Entry: 1066ee1f0; end: 1066ee1f3; -[SCStoriesThumbnailCoordinatorMock removeThumbnailsForSnapMediaCacheKey:] */

void FUN_1066ee1f0(void)

{
  return;
}



/* Entry: 1066ee1f4; end: 1066ee21f; -[SCStoriesThumbnailCoordinatorMock retrieveThumbnailFromContentDelivery:completion:] */

undefined8 FUN_1066ee1f4(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    (**(code **)(in_x3 + 0x10))(in_x3,0,0);
  }
  return 0;
}



/* Entry: 1066ee220; end: 1066ee223; -[SCStoriesThumbnailCoordinatorMock updateWithMediaProvider:] */

void FUN_1066ee220(void)

{
  return;
}



/* Entry: 1066ee224; end: 1066ee337; -[SCLensExplorerFavoritesQueryCoordinator initWithBaseQueryCoordinator:lensDataStore:lensFavoritesUpdater:favoritesUpdatePerformer:] */

long FUN_1066ee224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar1);
    func_0x00010be66120(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1066ee338; end: 1066ee33f; -[SCLensExplorerFavoritesQueryCoordinator isEmpty] */

void FUN_1066ee338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066ee340; end: 1066ee347; -[SCLensExplorerFavoritesQueryCoordinator isLoading] */

void FUN_1066ee340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isLoading_1125fb508);
  return;
}



/* Entry: 1066ee348; end: 1066ee34f; -[SCLensExplorerFavoritesQueryCoordinator currentQuery] */

void FUN_1066ee348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066ee350; end: 1066ee357; -[SCLensExplorerFavoritesQueryCoordinator setCurrentQuery:] */

void FUN_1066ee350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1879b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCurrentQuery__11263f888);
  return;
}



/* Entry: 1066ee358; end: 1066ee35f; -[SCLensExplorerFavoritesQueryCoordinator canPerformQuery:] */

void FUN_1066ee358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canPerformQuery__1125a8dc0);
  return;
}



/* Entry: 1066ee360; end: 1066ee367; -[SCLensExplorerFavoritesQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066ee360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_resultsForQuery_updatingBlock__11262ce18);
  return;
}



/* Entry: 1066ee368; end: 1066ee43f; -[SCLensExplorerFavoritesQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066ee368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c0cc0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4d6a0();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar1);
  func_0x00010bfd1220(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ee440; end: 1066ee447; -[SCLensExplorerFavoritesQueryCoordinator reset] */

void FUN_1066ee440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066ee448; end: 1066ee61f; -[SCLensExplorerFavoritesQueryCoordinator _observeFavoritesDataStores] */

void FUN_1066ee448(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066ee620;
  puStack_70 = &UNK_1108ec030;
  uVar2 = uVar1;
  uStack_68 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2519e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_90,param_1);
  uVar1 = uVar3;
  func_0x00010c2b2440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_90);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  return;
}



/* Entry: 1066ee620; end: 1066ee6b3;  */

void FUN_1066ee620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b60f8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c12a440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2b40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066ee6b4; end: 1066ee723;  */

void FUN_1066ee6b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010c067fc0();
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066ee724; end: 1066ee7ff;  */

void FUN_1066ee724(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010c0bf0a0(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1066ee800; end: 1066ee88f;  */

void FUN_1066ee800(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beca0c0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066ee890; end: 1066ee93b; -[SCLensExplorerFavoritesQueryCoordinator _synchronizeFavoritesData:requestId:] */

void FUN_1066ee890(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (uVar1 = *(ulong *)(param_1 + 0x30), uVar1 == 0)) {
    if (param_4 != 0) goto LAB_1066ee8dc;
  }
  else {
    func_0x00010c0720c0(uVar1,param_2,param_4);
    if ((uVar1 & 1) != 0) goto LAB_1066ee920;
LAB_1066ee8dc:
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_4;
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bfb2660(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2886c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  _objc_release(uVar2);
LAB_1066ee920:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ee93c; end: 1066eea27;  */

void FUN_1066ee93c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066eea28;
  uStack_30 = 0x1066eea38;
  uStack_28 = 0;
  func_0x00010c0be960(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066eea28; end: 1066eea3f;  */

void FUN_1066eea28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066eea40; end: 1066eea8f;  */

void FUN_1066eea40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066eea90; end: 1066eeafb; -[SCLensExplorerFavoritesQueryCoordinator .cxx_destruct] */

void FUN_1066eea90(long param_1)

{
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



/* Entry: 1066eeafc; end: 1066eebd7; -[SCLensExplorerLocalQueryCoordinator initWithQueryCoordinator:feedModelsStorage:dynamicUpdateHandler:sectionId:] */

long FUN_1066eeafc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1066eebd8; end: 1066eedbf; -[SCLensExplorerLocalQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066eebd8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c11daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (((int)uVar4 == 0) || (uVar5 = param_1, func_0x00010c072ce0(), (uVar5 & 1) != 0)) {
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    uVar5 = param_1;
    func_0x00010bf2d060();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    if ((int)uVar5 == 0) goto LAB_1066eec90;
    puStack_88 = puVar1;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1066eedc0;
    puStack_70 = &UNK_110935d20;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010beab480(param_1);
    uVar6 = uStack_68;
  }
  _objc_release(uVar6);
LAB_1066eec90:
  _objc_initWeak(auStack_90,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_4);
  func_0x00010c13cfe0(uVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066eedc0; end: 1066eee9f;  */

void FUN_1066eedc0(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_2 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066eeea0; end: 1066eeea7; -[SCLensExplorerLocalQueryCoordinator isEmpty] */

void FUN_1066eeea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066eeea8; end: 1066eeeaf; -[SCLensExplorerLocalQueryCoordinator isLoading] */

void FUN_1066eeea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isLoading_1125fb508);
  return;
}



/* Entry: 1066eeeb0; end: 1066eeeb7; -[SCLensExplorerLocalQueryCoordinator canPerformQuery:] */

void FUN_1066eeeb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canPerformQuery__1125a8dc0);
  return;
}



/* Entry: 1066eeeb8; end: 1066eeebf; -[SCLensExplorerLocalQueryCoordinator currentQuery] */

void FUN_1066eeeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066eeec0; end: 1066eeec7; -[SCLensExplorerLocalQueryCoordinator setCurrentQuery:] */

void FUN_1066eeec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1879b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCurrentQuery__11263f888);
  return;
}



/* Entry: 1066eeec8; end: 1066eeecf; -[SCLensExplorerLocalQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066eeec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleFeedItems_remoteState_forQ_1125d1e30);
  return;
}



/* Entry: 1066eeed0; end: 1066eef07; -[SCLensExplorerLocalQueryCoordinator reset] */

void FUN_1066eeed0(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
  func_0x00010c1b0ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea2770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCachedItemsObserver__112586380,0);
  return;
}



/* Entry: 1066eef08; end: 1066ef063; -[SCLensExplorerLocalQueryCoordinator _setupCachedItemsObserverForQuery:completionHandler:] */

void FUN_1066eef08(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be425a0();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfa3fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bea2760(param_1);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ef064; end: 1066ef14b;  */

void FUN_1066ef064(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126ccfd8;
    _objc_alloc(PTR_PTR_1126ccfd8);
    func_0x00010c003b80();
    puVar3 = PTR_PTR_1126ccfe0;
    _objc_alloc(PTR_PTR_1126ccfe0);
    func_0x00010c03c280();
    uVar4 = uVar1;
    func_0x00010be3e880();
    if (((int)uVar4 != 0) && (uVar5 = uVar1, func_0x00010c072ce0(), (uVar5 & 1) == 0)) {
      func_0x00010bfd1240(*(undefined8 *)(uVar1 + 0x18));
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,uVar4,puVar3);
    }
    func_0x00010bdda5c0(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066ef14c; end: 1066ef187; -[SCLensExplorerLocalQueryCoordinator _isObservingCachedItems] */

bool FUN_1066ef14c(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  _os_unfair_lock_unlock(param_1 + 0x28);
  return lVar1 != 0;
}



/* Entry: 1066ef188; end: 1066ef1e7; -[SCLensExplorerLocalQueryCoordinator _setCachedItemsObserver:] */

void FUN_1066ef188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bf86d40();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 1066ef1e8; end: 1066ef233; -[SCLensExplorerLocalQueryCoordinator _cancelCachedItemsObservation] */

void FUN_1066ef1e8(long param_1,undefined8 param_2)

{
  func_0x00010c1b0ec0(param_1,param_2,1);
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 1066ef234; end: 1066ef2cf; -[SCLensExplorerLocalQueryCoordinator _isCacheDataValidWithFeedModels:] */

long FUN_1066ef234(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf04920(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935d50);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1066ef2d0; end: 1066ef2db; -[SCLensExplorerLocalQueryCoordinator isFeedsDataHandled] */

byte FUN_1066ef2d0(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 1066ef2dc; end: 1066ef2e3; -[SCLensExplorerLocalQueryCoordinator setIsFeedsDataHandled:] */

void FUN_1066ef2dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1066ef2e4; end: 1066ef337; -[SCLensExplorerLocalQueryCoordinator .cxx_destruct] */

void FUN_1066ef2e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066ef338; end: 1066ef3fb; -[SCLensExplorerRankingLensesQueryCoordinator initWithRequestManager:dataStore:remoteStateProvider:queryStatusChecker:requestProvider:responseParser:dynamicUpdateHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066ef338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f2908;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithRequestManager_requestPr_112531820,param_3,param_7,
                      param_8,param_9,param_4,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274e630;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1066ef3fc; end: 1066ef4bb; -[SCLensExplorerRankingLensesQueryCoordinator requestForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ef3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e630);
  _objc_retain(param_3);
  func_0x00010c12a440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c25c6c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c098760(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1066ef4bc; end: 1066ef56f; -[SCLensExplorerRankingLensesQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066ef4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_handleFeedItems_remoteState_forQ_1125d1e30;
  puStack_48 = PTR_PTR_1126f2908;
  uStack_50 = param_1;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_3,param_4,param_5);
  lVar2 = param_5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar3 = lVar2;
  func_0x00010bf4d6a0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010c1acc60(param_1);
  }
  return;
}



/* Entry: 1066ef570; end: 1066ef663; -[SCLensExplorerRankingLensesQueryCoordinator canPerformQuery:] */

uint FUN_1066ef570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  iVar1 = (int)&uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f2908;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_canPerformQuery__1125a8dc0,param_3);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar3);
    if ((int)uVar5 == 0) {
      uVar6 = 1;
    }
    else {
      func_0x00010c064320(param_1);
      uVar6 = (uint)param_1 ^ 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1066ef664; end: 1066ef6af; -[SCLensExplorerRankingLensesQueryCoordinator reset] */

void FUN_1066ef664(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_reset_11262ba18);
  func_0x00010c1acc60(param_1);
  return;
}



/* Entry: 1066ef6b0; end: 1066ef6c3; -[SCLensExplorerRankingLensesQueryCoordinator initialRequestCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1066ef6b0(long param_1)

{
  return *(byte *)(param_1 + _DAT_11274e634) & 1;
}



/* Entry: 1066ef6c4; end: 1066ef6d3; -[SCLensExplorerRankingLensesQueryCoordinator setInitialRequestCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ef6c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274e634) = param_3;
  return;
}



/* Entry: 1066ef6d4; end: 1066ef6e7; -[SCLensExplorerRankingLensesQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ef6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e630,0);
  return;
}



/* Entry: 1066ef6e8; end: 1066ef8ef; -[SCMixerBaseQueryCoordinator initWithMixerNamespaceServices:dataMapper:dynamicUpdateHandler:dataStore:queryStatusChecker:mixerNamespaceCacheOptimizationEnabled:] */

undefined8 *
FUN_1066ef6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f2910;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066ef8f0; end: 1066ef8f7; -[SCMixerBaseQueryCoordinator isEmpty] */

void FUN_1066ef8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 1066ef8f8; end: 1066ef8fb; -[SCMixerBaseQueryCoordinator handleError:forQueryResult:] */

void FUN_1066ef8f8(void)

{
  return;
}



/* Entry: 1066ef8fc; end: 1066efa03; -[SCMixerBaseQueryCoordinator handleReceivedMixerNamespaceData:forQueryResult:] */

void FUN_1066ef8fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b94c0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c14ffc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010c0cf080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b9500(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd1540(*(undefined8 *)(param_1 + 0x20),param_2,uVar3,uVar2,uVar4,param_4);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066efa04; end: 1066efacb; -[SCMixerBaseQueryCoordinator handleReceivedMixerFeeds:namespaceData:forQueryResult:] */

void FUN_1066efa04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0cf080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9500(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0b94a0(uVar1,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 0x20),param_2,uVar1,param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066efacc; end: 1066efcdb; -[SCMixerBaseQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066efacc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_1066efcb0;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010c11daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar1;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cd100;
    func_0x00010c125040(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,puVar5);
    if ((uVar6 & 1) != 0) {
      _objc_release(puVar5);
      _objc_release(uVar4);
      goto LAB_1066efbc4;
    }
    uVar6 = uVar1;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cd100;
    func_0x00010c151d20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0720c0(uVar6,param_2,puVar7);
    if ((uVar8 & 1) == 0) {
      lVar9 = param_3;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      if (lVar9 != 0) goto LAB_1066efc98;
      goto LAB_1066efbd4;
    }
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
LAB_1066efc98:
    func_0x00010bf06ca0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
  }
  else {
LAB_1066efbc4:
    _objc_release(puVar3);
    _objc_release(uVar2);
LAB_1066efbd4:
    func_0x00010c286c40(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
  }
  _objc_release(uVar1);
LAB_1066efcb0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066efcdc; end: 1066efd83; -[SCMixerBaseQueryCoordinator reset] */

void FUN_1066efcdc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1066efd84; end: 1066efda3;  */

void FUN_1066efd84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1066efda4; end: 1066efdab; -[SCMixerBaseQueryCoordinator canPerformQuery:] */

void FUN_1066efda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_canPerformQuery__1125a8dc0);
  return;
}



/* Entry: 1066efdac; end: 1066efdb3; -[SCMixerBaseQueryCoordinator currentQuery] */

void FUN_1066efdac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066efdb4; end: 1066efdbb; -[SCMixerBaseQueryCoordinator setCurrentQuery:] */

void FUN_1066efdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resultsForQuery_updatingBlock__11262ce18,param_3,0);
  return;
}


