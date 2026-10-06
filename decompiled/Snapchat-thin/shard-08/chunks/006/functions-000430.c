/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063edbf4; end: 1063edbfb; -[SCAdPublisherAdRuleTracker resetSessionAdTimer] */

void FUN_1063edbf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1063edbfc; end: 1063edc03; -[SCAdPublisherAdRuleTracker stopSessionAdTimer] */

void FUN_1063edbfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_stop_112673008);
  return;
}



/* Entry: 1063edc04; end: 1063edc0b; -[SCAdPublisherAdRuleTracker snapsViewed] */

undefined8 FUN_1063edc04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1063edc0c; end: 1063edc13; -[SCAdPublisherAdRuleTracker storiesViewed] */

undefined8 FUN_1063edc0c(void)

{
  return 0x8000000000000000;
}



/* Entry: 1063edc14; end: 1063edc3f; -[SCAdPublisherAdRuleTracker timeViewedSeconds] */

void FUN_1063edc14(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bfc1ec0(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063edc40; end: 1063edca3; -[SCAdPublisherAdRuleTracker setAdSlotIndexes:priorityAdSlotIndexes:] */

void FUN_1063edc40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063edca4; end: 1063edcbb; -[SCAdPublisherAdRuleTracker setLastViewedPlaylistIdx:] */

void FUN_1063edca4(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 0x18) = param_3;
  if (*(long *)(param_1 + 0x20) < param_3) {
    *(long *)(param_1 + 0x20) = param_3;
  }
  return;
}



/* Entry: 1063edcbc; end: 1063edccb; -[SCAdPublisherAdRuleTracker afterFarthestViewedSnap] */

bool FUN_1063edcbc(long param_1)

{
  return *(long *)(param_1 + 0x20) <= *(long *)(param_1 + 0x18);
}



/* Entry: 1063edccc; end: 1063edd23; -[SCAdPublisherAdRuleTracker setLastViewedItemId:] */

void FUN_1063edccc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x28)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063edd24; end: 1063edd47; -[SCAdPublisherAdRuleTracker isLastItemViewedUnique] */

uint FUN_1063edd24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf4b900(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  return (uint)uVar1 ^ 1;
}



/* Entry: 1063edd48; end: 1063edddb; -[SCAdPublisherAdRuleTracker insertionRulesSatisfied] */

byte FUN_1063edd48(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  lVar4 = param_2;
  func_0x00010be42d20();
  if (((int)lVar4 != 0) && (lVar4 = param_2, func_0x00010befe740(), (int)lVar4 != 0)) {
    cVar3 = *(char *)(param_2 + 0x68);
    lVar8 = *(long *)(param_2 + 0x60);
    lVar4 = param_2;
    func_0x00010c245cc0(param_2);
    func_0x00010c26fc20(param_2);
    lVar7 = *(long *)(param_2 + 0x38);
    if (cVar3 == '\x01') {
      dVar9 = param_1;
      _objc_retain();
      lVar5 = lVar8;
      func_0x00010c0cdae0(lVar8);
      func_0x00010c0cdcc0(lVar8);
      lVar6 = lVar8;
      dVar10 = dVar9;
      func_0x00010bf48240();
      bVar1 = dVar9 <= param_1 || lVar5 <= lVar4;
      if ((int)lVar6 != 0) {
        bVar1 = dVar9 <= param_1 && lVar5 <= lVar4;
      }
      lVar4 = lVar8;
      func_0x00010c0cda80(lVar8);
      func_0x00010c0cdc60(lVar8);
      lVar5 = lVar8;
      func_0x00010bf481e0();
      bVar2 = dVar10 <= 1.79769313486232e+308 || lVar4 <= lVar7;
      if ((int)lVar5 != 0) {
        bVar2 = dVar10 <= 1.79769313486232e+308 && lVar4 <= lVar7;
      }
      _objc_release(lVar8);
      return bVar1 & bVar2;
    }
    dVar9 = param_1;
    _objc_retain();
    lVar5 = lVar8;
    func_0x00010c0cdaa0(lVar8);
    func_0x00010c0cdca0(lVar8);
    lVar6 = lVar8;
    dVar10 = dVar9;
    func_0x00010bf48200();
    bVar1 = dVar9 <= param_1 || lVar5 <= lVar4;
    if ((int)lVar6 != 0) {
      bVar1 = dVar9 <= param_1 && lVar5 <= lVar4;
    }
    lVar4 = lVar8;
    func_0x00010c0cda80(lVar8);
    func_0x00010c0cdc60(lVar8);
    lVar5 = lVar8;
    func_0x00010bf481e0();
    bVar2 = dVar10 <= 1.79769313486232e+308 || lVar4 <= lVar7;
    if ((int)lVar5 != 0) {
      bVar2 = dVar10 <= 1.79769313486232e+308 && lVar4 <= lVar7;
    }
    _objc_release(lVar8);
    return bVar1 & bVar2;
  }
  return 0;
}



/* Entry: 1063edddc; end: 1063eddff; -[SCAdPublisherAdRuleTracker resetRulesAfterInsertion] */

void FUN_1063edddc(undefined8 param_1)

{
  func_0x00010c139600();
                    /* WARNING: Could not recover jumptable at 0x00010c1396f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetSnapsViewed_11262bfd8);
  return;
}



/* Entry: 1063ede00; end: 1063ede9b; -[SCAdPublisherAdRuleTracker _isPotentialInsertionSpot] */

undefined8 FUN_1063ede00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4,param_2,puVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1063ede9c; end: 1063edefb; -[SCAdPublisherAdRuleTracker .cxx_destruct] */

void FUN_1063ede9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1063edefc; end: 1063edf5b; -[SCAdPublisherAdRuleTrackerFactory createMidRollInsertionRuleTracker] */

void FUN_1063edefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ca558;
  _objc_alloc(PTR_PTR_1126ca558);
  puVar2 = PTR_PTR_1126ca510;
  _objc_alloc(PTR_PTR_1126ca510);
  func_0x00010c0293c0(0x7fefffffffffffff);
  func_0x00010c01e780(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063edf5c; end: 1063ee1d3; -[SCAdPublisherDynamicAdDataSource initWithDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1063edf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f1200;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDependencies__1125e0750,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274709c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274709c) = puVar2;
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470a0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470a0) = puVar2;
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470a4) = puVar2;
    _objc_release(uVar14);
    puVar2 = PTR_PTR_1126ca528;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010bef3680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c4e40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf6d940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0c5940();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf6d940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029980();
    lVar15 = (long)_DAT_1127470a8;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar15));
    uVar14 = param_3;
    func_0x00010c0cd2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c260160();
    _objc_release(uVar14);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063ee1d4; end: 1063ee487; -[SCAdPublisherDynamicAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ee1d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_1127470ac;
  uVar6 = *(ulong *)(param_1 + lVar7);
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar2;
    _objc_release(uVar5);
    lVar7 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = (long)_DAT_1127470b0;
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar1;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11274709c;
    lVar7 = *(long *)(param_1 + lVar8);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      lVar7 = param_1;
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10643e4c8(lVar1,param_5,lVar7);
      _objc_release(lVar7);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar8));
      _objc_release(puVar3);
    }
    lVar7 = lVar1;
    func_0x00010643ee4c(lVar1,&PTR___NSConcreteGlobalBlock_1109223d0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127470b4);
    *(long *)(param_1 + _DAT_1127470b4) = lVar7;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127470a0;
    lVar7 = *(long *)(param_1 + lVar8);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar8));
    }
    func_0x00010c163ca0(param_1);
    puVar4 = PTR_PTR_1126ca560;
    _objc_alloc(PTR_PTR_1126ca560);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    lVar7 = lVar1;
    func_0x00010643ee4c(lVar1,&PTR___NSConcreteGlobalBlock_110922350,
                        PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010643ee4c(lVar1,&PTR___NSConcreteGlobalBlock_110922370,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0372e0(puVar4);
    func_0x00010bf213e0(param_1);
    _objc_release(puVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
    func_0x00010be5b960(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ee488; end: 1063ee753; -[SCAdPublisherDynamicAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ee488(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf63e80(lVar9,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_1127470b0;
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar2;
  _objc_release(uVar3);
  lVar9 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = (long)_DAT_1127470b8;
  _objc_retain(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar1;
  _objc_release(uVar3);
  lVar9 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010c0720c0(lVar9,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar9);
  if ((int)lVar5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127470a4);
    lVar9 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,lVar9);
    _objc_release(lVar9);
  }
  lVar9 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  lVar8 = param_1;
  func_0x00010c241620(param_1,param_2,param_3);
  _objc_release(lVar6);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_1127470bc;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = param_3;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b2340;
  uVar3 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c076c60(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR_PTR_1126ca568;
    _objc_alloc(PTR_PTR_1126ca568);
    lVar9 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c241620(param_1,param_2,param_3);
    func_0x00010c01ec40(puVar4,param_2,lVar5,lVar9,lVar7 - lVar8,lVar6);
    func_0x00010bf21400(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar9);
  }
  func_0x00010c251900(*(undefined8 *)(param_1 + _DAT_1127470a8),param_2,param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ee754; end: 1063ee843; -[SCAdPublisherDynamicAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

void FUN_1063ee754(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c075a00(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010be5b960(param_1,param_2,2);
  }
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      func_0x00010c0a0740(param_1,param_2,uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063ee844; end: 1063ee88b; -[SCAdPublisherDynamicAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ee844(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127470ac);
  *(undefined8 *)(param_1 + _DAT_1127470ac) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127470b0);
  *(undefined8 *)(param_1 + _DAT_1127470b0) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1391f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetPendingAd_11262be98);
  return;
}



/* Entry: 1063ee88c; end: 1063ee88f; -[SCAdPublisherDynamicAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063ee88c(void)

{
  return;
}



/* Entry: 1063ee890; end: 1063ee893; -[SCAdPublisherDynamicAdDataSource startViewingPlaylistChapterId:currentItem:] */

void FUN_1063ee890(void)

{
  return;
}



/* Entry: 1063ee894; end: 1063ee943; -[SCAdPublisherDynamicAdDataSource isNofillUnskippableAdItemId:] */

undefined8 FUN_1063ee894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bef52c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c082160();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1063ee944; end: 1063ee9ab; -[SCAdPublisherDynamicAdDataSource adProductTypeForItem:] */

undefined8 FUN_1063ee944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010bef4240(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063ee9ac; end: 1063eea57; -[SCAdPublisherDynamicAdDataSource adSnapViewLogParametersForSkippedAdItemId:aroundItem:pageLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ee9ac(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126f1200;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_adSnapViewLogParametersForSkippe_11259aef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10643ed50(*(undefined8 *)(param_1 + _DAT_1127470b0),puVar2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063eea58; end: 1063eebfb; -[SCAdPublisherDynamicAdDataSource extraPagePropertiesForDataModel:] */

void FUN_1063eea58(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
  }
  else {
    _objc_retain(param_3);
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c280580(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar4 = param_1;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
    uVar5 = uVar4;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x0001080724a4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &uStack_58;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_58 = uVar6;
    uStack_50 = uVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_s_adViewContextForItem__11259b238;
    ppuVar7 = &puStack_c0;
    puStack_b8 = PTR_PTR_1126f1200;
    puStack_c0 = param_3;
    _objc_retain(puVar3);
    _objc_msgSendSuper2(&puStack_c0,puVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined *)ppuVar7;
    func_0x00010c0d3c80();
    _objc_release(ppuVar7);
    puVar8 = PTR_PTR_1126b92c8;
    func_0x00010c0794e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar8);
    puVar2 = puVar3;
    func_0x00010be36bc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bef4b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bef4840(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b92c8;
    func_0x00010bf66720(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063eebfc; end: 1063eed7b; -[SCAdPublisherDynamicAdDataSource adViewContextForItem:] */

void FUN_1063eebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = PTR_s_adViewContextForItem__11259b238;
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f1200;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126b92c8;
  func_0x00010c0794e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010bef4b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bef4840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfe5ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063eed7c; end: 1063eef43; -[SCAdPublisherDynamicAdDataSource adViewContextForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063eed7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR_s_adViewContextForGroupId__11259b230;
  plVar1 = &lStack_60;
  puStack_58 = PTR_PTR_1126f1200;
  lStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)plVar1;
  func_0x00010c0d3c80();
  _objc_release(plVar1);
  puVar3 = PTR_PTR_1126ca500;
  func_0x00010c0cd2a0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c1305a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca500;
  func_0x00010c0cd2a0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c0680c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar8 = *(long *)(param_1 + _DAT_1127470b0);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c075a20();
  _objc_release(param_3);
  FUN_10643e708(lVar8,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  lVar5 = lVar8;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010bef7f60(puVar2);
  }
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063eef44; end: 1063eefcf; -[SCAdPublisherDynamicAdDataSource editionEntrySnapIndexForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063eef44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274709c);
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1063eefd0; end: 1063ef10f; -[SCAdPublisherDynamicAdDataSource hideAdWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063eefd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf4b900();
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(uVar3);
    func_0x00010befa120(uVar3);
  }
  func_0x00010bf97e80(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063ef110; end: 1063ef213;  */

void FUN_1063ef110(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1013e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c280580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c101420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063ef214; end: 1063ef2e7; -[SCAdPublisherDynamicAdDataSource isAdContentLoopingForDataModel:] */

bool FUN_1063ef214(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010bef4240(lVar4);
  _objc_release(lVar4);
  _objc_release(param_3);
  return lVar5 == 7;
}



/* Entry: 1063ef2e8; end: 1063ef3a3; -[SCAdPublisherDynamicAdDataSource mediaLoadContexts] */

undefined * FUN_1063ef2e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1063ef3a4; end: 1063ef3ab; -[SCAdPublisherDynamicAdDataSource storyAdMediaLoadStatusSnapCount] */

undefined8 FUN_1063ef3a4(void)

{
  return 1;
}



/* Entry: 1063ef3ac; end: 1063ef3d7; -[SCAdPublisherDynamicAdDataSource adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063ef3ac(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127470b0);
  func_0x00010643e29c();
  uVar1 = 7;
  if (iVar2 != 0) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 1063ef3d8; end: 1063ef6fb; -[SCAdPublisherDynamicAdDataSource targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ef3d8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  
  lVar22 = (long)_DAT_1127470b0;
  uVar1 = *(undefined8 *)(param_1 + lVar22);
  FUN_10643e240();
  uVar2 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010643e37c();
  uVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  FUN_106449d0c();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127470b4);
  func_0x00010c0d3c80();
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_1127470a0);
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c067ec0();
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar6);
  _objc_release(puVar9);
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  FUN_1064415c4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29d360();
  uVar5 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(uVar4,uVar11);
  uVar12 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010bef4240();
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c263080();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar21 & 0xffffffff;
  FUN_1063f8270(uVar21,(long)((int)uVar8 + 1),0,0,uVar2,uVar1,uVar7,uVar6,uVar4,uVar14,uVar16,uVar17
                ,0x101);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(param_1);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar21);
  return;
}



/* Entry: 1063ef6fc; end: 1063ef86b; -[SCAdPublisherDynamicAdDataSource adOrganicSignals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ef6fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127470b0;
  puVar4 = *(undefined **)(param_1 + lVar7);
  puVar6 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = PTR_PTR_1126bdd28;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar5 = *(undefined **)(param_1 + lVar7);
    _objc_retain(puVar5);
    _objc_opt_class(puVar6);
    puVar1 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar6);
    puVar4 = puVar5;
    if (((ulong)puVar1 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar5);
    puVar6 = puVar4;
    func_0x00010bef3720();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bef3aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    _objc_release(puVar6);
    if (puVar5 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar4;
      func_0x00010bef3720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bef3aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    _objc_release(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    puVar1 = puVar4;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d940(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    FUN_10640d6b8(puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1063ef86c; end: 1063ef917; -[SCAdPublisherDynamicAdDataSource upcomingStoriesContext] */

void FUN_1063ef86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_10640d6b8(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063ef918; end: 1063ef977; -[SCAdPublisherDynamicAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ef918(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1200;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_resetInsertionData_11262bd80);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274709c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127470a4));
  return;
}



/* Entry: 1063ef978; end: 1063ef97f; -[SCAdPublisherDynamicAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063ef978(void)

{
  return 1;
}



/* Entry: 1063ef980; end: 1063efa3b; -[SCAdPublisherDynamicAdDataSource playlistItemsInsertCount:] */

undefined1 * FUN_1063ef980(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef60a0();
  if (lVar1 == 5) {
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf9be80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined1 **)puVar2;
    func_0x00010c0646a0();
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  else {
    puStack_38 = PTR_PTR_1126f1200;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_playlistItemsInsertCount__11261dfc0,param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1063efa3c; end: 1063efa43; -[SCAdPublisherDynamicAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063efa3c(void)

{
  return 0;
}



/* Entry: 1063efa44; end: 1063efa4b; -[SCAdPublisherDynamicAdDataSource isDynamicInsertionEligibleForItem:] */

undefined8 FUN_1063efa44(void)

{
  return 1;
}



/* Entry: 1063efa4c; end: 1063efbc7; -[SCAdPublisherDynamicAdDataSource unviewedAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1063efa4c(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined8 unaff_x23;
  ulong unaff_x24;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar9 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
        unaff_x24 = *(ulong *)(param_1 + _DAT_1127470a4);
        uVar4 = unaff_x23;
        func_0x00010bfe5ec0(unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar4);
        if ((unaff_x24 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = puVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      puVar9 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_180;
  pcStack_138 = FUN_1063efbc8;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = puVar9;
  puStack_158 = puVar2;
  puStack_150 = param_1;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar9 = puVar3;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar7;
  func_0x00010be36bc0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(puVar9);
  if (puVar5 == (undefined1 *)0x0) {
    puStack_178 = PTR_PTR_1126f1200;
    puStack_180 = puVar3;
    _objc_msgSendSuper2(&puStack_180,PTR_s_adSnapIndexForItem__11259ae98,puVar7);
  }
  else {
    puVar9 = puVar3;
    func_0x00010c067280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar7;
    func_0x00010be36bc0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010c0e00e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar9);
    func_0x00010bef4820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bfe5ec0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar3);
    puVar9 = puVar2;
    func_0x00010bef52c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined1 **)puVar9;
    func_0x00010bfecde0();
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  _objc_release(puVar7);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1063efbc8; end: 1063efd6b; -[SCAdPublisherDynamicAdDataSource adSnapIndexForItem:] */

undefined1 * FUN_1063efbc8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126f1200;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_adSnapIndexForItem__11259ae98,param_3);
  }
  else {
    puVar1 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010bef4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar1 = puVar4;
    func_0x00010bef52c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined1 **)puVar1;
    func_0x00010bfecde0();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar5;
}



/* Entry: 1063efd6c; end: 1063efe2f; -[SCAdPublisherDynamicAdDataSource insertAdAfterCurrentItem:] */

void FUN_1063efd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1063efdfc;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1063efe30; end: 1063eff47; -[SCAdPublisherDynamicAdDataSource createAdOpportunity:isInsertionRuleReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063efe30(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_1);
  lVar1 = lVar2;
  func_0x00010bf5f900(lVar2);
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + _DAT_1127470ac);
  if ((param_4 & 1) == 0) {
    FUN_10641701c(lVar3,lVar1,0,2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_1);
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_106416eb4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = 0;
    }
    FUN_10641701c(lVar3,lVar1,lVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_1);
    _objc_release(lVar3);
    lVar3 = lVar2;
    if ((param_3 & 1) != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1063eff48; end: 1063effeb; -[SCAdPublisherDynamicAdDataSource pendingAdInsertionRuleReadyToEvaluate] */

bool FUN_1063eff48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar4 != 0;
}



/* Entry: 1063effec; end: 1063f08a7; -[SCAdPublisherDynamicAdDataSource pendingAdIsBrandSafe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *** FUN_1063effec(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined1 auStack_208 [8];
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined ***pppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined ***pppuStack_198;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar19 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_1);
  pppuVar20 = pppuVar19;
  func_0x00010bf5f900();
  _objc_release(pppuVar19);
  pppuVar19 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = pppuVar19;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar19);
  pppuVar19 = pppuVar1;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar19;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar5 = pppuVar2;
  func_0x00010bfecde0();
  _objc_release(pppuVar2);
  _objc_release(pppuVar19);
  if (pppuVar5 == (undefined ***)0x7fffffffffffffff) {
LAB_1063f019c:
    pppuVar19 = (undefined ***)0x0;
  }
  else {
    pppuVar19 = pppuVar1;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar19;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar2;
    func_0x00010bf529e0();
    _objc_release(pppuVar2);
    _objc_release(pppuVar19);
    if (pppuVar3 <= (undefined ***)((long)pppuVar5 + 1U)) goto LAB_1063f019c;
    pppuVar19 = pppuVar1;
    func_0x00010bf5ee40(pppuVar1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar19;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    _objc_release(pppuVar19);
    pppuVar2 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar2;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    _objc_release(pppuVar5);
  }
  pppuVar14 = (undefined ***)(long)_DAT_1127470b8;
  pppuVar16 = *(undefined ****)((long)param_1 + (long)pppuVar14);
  pppuVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar5;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  pppuVar17 = pppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar19;
  FUN_1063fd368(pppuVar16,pppuVar19,pppuVar17);
  _objc_release(pppuVar17);
  _objc_release(pppuVar3);
  _objc_release(pppuVar5);
  pppuVar5 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar5;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  pppuVar17 = pppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar17;
  FUN_1063fc8d0();
  _objc_release(pppuVar17);
  _objc_release(pppuVar3);
  _objc_release(pppuVar5);
  if ((int)pppuVar4 == 0) {
LAB_1063f02d8:
    pppuVar2 = param_1;
    pppuStack_168 = pppuVar20;
    pppuStack_140 = pppuVar1;
    pppuStack_138 = pppuVar19;
    func_0x00010bef4240();
    ppuVar18 = (undefined **)param_1;
    pppuStack_160 = pppuVar2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_148 = (undefined ***)ppuVar18;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_150 = (undefined ***)ppuVar18;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_158 = (undefined ***)ppuVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)param_1 + (long)pppuVar14);
    pppuVar19 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar19;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = pppuVar20;
    pppuStack_170 = pppuVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar2;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuStack_160;
    func_0x0001063fcf48(pppuStack_160,ppuVar18,uVar11,0,pppuVar1,0,pppuVar17);
    _objc_release(pppuVar17);
    _objc_release(pppuVar3);
    _objc_release(pppuVar2);
    _objc_release(pppuVar1);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(ppuVar18);
    _objc_release(pppuStack_158);
    _objc_release(pppuStack_150);
    _objc_release(pppuStack_148);
    pppuVar19 = pppuStack_170;
    if (((ulong)pppuVar5 & 1) == 0) {
      uVar12 = *(undefined8 *)((long)param_1 + (long)_DAT_1127470ac);
      pppuVar16 = *(undefined ****)((long)param_1 + (long)pppuStack_170);
      FUN_10640a74c();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_1127470b0;
      uVar11 = *(undefined8 *)((long)param_1 + lVar15);
      FUN_10640b8b8(uVar11);
      pppuVar4 = *(undefined ****)((long)param_1 + lVar15);
      FUN_10640b8b8();
      pppuVar5 = *(undefined ****)((long)param_1 + (long)pppuVar19);
      FUN_1063fc8dc();
      pppuVar19 = pppuStack_138;
      pppuVar20 = pppuStack_138;
      FUN_1063fc8dc(pppuStack_138);
      pppuVar14 = (undefined ***)0x1;
    }
    else {
      pppuVar17 = param_1;
      func_0x00010bef4240();
      ppuVar18 = (undefined **)param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      pppuStack_148 = (undefined ***)ppuVar18;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      pppuStack_150 = (undefined ***)ppuVar18;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      pppuStack_158 = (undefined ***)ppuVar18;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      pppuVar19 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar20 = pppuVar19;
      func_0x00010bef2fc0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = pppuVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      pppuVar4 = pppuVar5;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = (undefined ***)ppuVar18;
      func_0x0001063fcf48(pppuVar17,ppuVar18,pppuStack_138,0,pppuVar1,1,pppuVar3);
      _objc_release(pppuVar3);
      _objc_release(pppuVar4);
      _objc_release(pppuVar5);
      _objc_release(pppuVar1);
      _objc_release(pppuVar20);
      _objc_release(pppuVar19);
      _objc_release(ppuVar18);
      _objc_release(pppuStack_158);
      _objc_release(pppuStack_150);
      _objc_release(pppuStack_148);
      pppuVar19 = pppuStack_170;
      if (((ulong)pppuVar17 & 1) != 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        puStack_120 = (undefined8 *)0x0;
        pppuVar19 = param_1;
        func_0x00010bef4120();
        _objc_retainAutoreleasedReturnValue();
        pppuVar14 = pppuVar19;
        func_0x00010c0f7700();
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar14;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar14);
        _objc_release(pppuVar19);
        pppuVar20 = appuStack_f0;
        pppuVar19 = pppuVar4;
        func_0x00010bf52a60();
        if (pppuVar19 != (undefined ***)0x0) {
          pppuVar17 = (undefined ***)*puStack_120;
          ppuVar18 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          do {
            pppuVar20 = (undefined ***)0x0;
            do {
              if ((undefined ***)*puStack_120 != pppuVar17) {
                _objc_enumerationMutation(pppuVar4);
              }
              uVar11 = *(undefined8 *)(lStack_128 + (long)pppuVar20 * 8);
              pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780();
              _objc_retainAutoreleasedReturnValue();
              pppuVar3 = param_1;
              func_0x00010bef4840();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe5ec0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(pppuVar3);
              _objc_release(uVar11);
              _objc_release(pppuVar3);
              _objc_release(pppuVar14);
              pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
            } while (pppuVar19 != pppuVar20);
            pppuVar20 = appuStack_f0;
            pppuVar19 = pppuVar4;
            func_0x00010bf52a60();
            pppuVar5 = (undefined ***)0x0;
          } while (pppuVar19 != (undefined ***)0x0);
        }
        _objc_release(pppuVar4);
        ppuVar13 = (undefined **)0x1;
        pppuVar1 = pppuStack_140;
        pppuVar19 = pppuStack_138;
        goto LAB_1063f0858;
      }
      uVar12 = *(undefined8 *)((long)param_1 + (long)_DAT_1127470ac);
      pppuVar16 = *(undefined ****)((long)param_1 + (long)pppuStack_170);
      FUN_10640a74c();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_1127470b0;
      uVar11 = *(undefined8 *)((long)param_1 + lVar15);
      FUN_10640b8b8(uVar11);
      pppuVar4 = *(undefined ****)((long)param_1 + lVar15);
      FUN_10640b8b8();
      pppuVar5 = *(undefined ****)((long)param_1 + (long)pppuVar19);
      FUN_1063fc8dc();
      pppuVar19 = pppuStack_138;
      pppuVar20 = pppuStack_138;
      FUN_1063fc8dc(pppuStack_138);
      pppuVar14 = (undefined ***)0x0;
    }
    FUN_106416d68(pppuVar14,pppuVar16,uVar11,pppuVar4,pppuVar5,pppuVar20);
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = (undefined ***)0x0;
    pppuVar2 = pppuStack_168;
    FUN_10641701c(uVar12,pppuStack_168,pppuVar14,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_1);
    _objc_release(uVar12);
    _objc_release(pppuVar14);
    _objc_release(pppuVar16);
    ppuVar13 = (undefined **)0x0;
    pppuVar1 = pppuStack_140;
  }
  else {
    pppuVar5 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar3;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    ppuVar18 = (undefined **)pppuVar5;
    func_0x00010c131000();
    _objc_release(pppuVar17);
    _objc_release(pppuVar3);
    _objc_release(pppuVar5);
    if (((ulong)ppuVar18 & 1) != 0) goto LAB_1063f02d8;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = param_1;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = (undefined ***)PTR_PTR_1126b3e90;
    func_0x00010befde80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar5;
    func_0x00010bf0ad80(pppuVar16);
    _objc_release(pppuVar5);
    _objc_release(pppuVar16);
    _objc_release(pppuVar4);
    _objc_release(param_1);
    ppuVar13 = (undefined **)0x0;
  }
LAB_1063f0858:
  _objc_release(pppuVar19);
  pppuVar6 = pppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined ***)ppuVar13;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_1063f08a8;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = pppuVar6;
  pppuStack_1d0 = pppuVar19;
  pppuStack_1c8 = (undefined ***)ppuVar18;
  pppuStack_1c0 = pppuVar17;
  pppuStack_1b8 = pppuVar3;
  pppuStack_1b0 = pppuVar5;
  pppuStack_1a8 = pppuVar16;
  pppuStack_1a0 = pppuVar4;
  pppuStack_198 = pppuVar14;
  pppuStack_190 = (undefined ***)ppuVar13;
  pppuStack_188 = pppuVar1;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar19 = pppuVar7;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar7);
  pppuVar1 = pppuVar19;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar5 = pppuVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar5;
  func_0x00010bfecde0();
  _objc_release(pppuVar5);
  _objc_release(pppuVar1);
  if (pppuVar3 != (undefined ***)0x7fffffffffffffff) {
    pppuVar1 = pppuVar19;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar5;
    func_0x00010bf529e0();
    _objc_release(pppuVar5);
    _objc_release(pppuVar1);
    if ((undefined ***)((long)pppuVar3 + 1U) < pppuVar17) {
      pppuVar1 = pppuVar19;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar1;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar5;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar5);
      _objc_release(pppuVar1);
      pppuVar1 = pppuVar3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126c9a78;
      func_0x00010c1015e0(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar1;
      func_0x00010c0720c0();
      _objc_release(puVar8);
      _objc_release(pppuVar1);
      _objc_release(pppuVar3);
      if (((ulong)pppuVar5 & 1) != 0) goto LAB_1063f0dfc;
    }
  }
  func_0x00010bf546c0(pppuVar6);
  pppuVar20 = pppuVar6;
  func_0x00010c066b80();
  if ((int)pppuVar20 != 0) {
    pppuVar20 = pppuVar6;
    func_0x00010bef4840();
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = pppuVar6;
    func_0x00010bef4120(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar2;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(pppuVar4);
    _objc_release(pppuVar17);
    _objc_release(pppuVar3);
    _objc_release(pppuVar5);
    _objc_release(pppuVar2);
    _objc_release(pppuVar1);
    _objc_release(pppuVar20);
    pppuVar20 = pppuVar6;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = pppuVar20;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar6;
    func_0x00010bef4120(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar5;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar17;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar6;
    func_0x00010bef4120(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar16;
    func_0x00010bf21040();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar6;
    func_0x00010bef4120(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar7;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a04c0(pppuVar2);
    _objc_release(pppuVar9);
    _objc_release(pppuVar7);
    _objc_release(pppuVar14);
    _objc_release(pppuVar16);
    _objc_release(pppuVar4);
    _objc_release(pppuVar17);
    _objc_release(pppuVar3);
    _objc_release(pppuVar5);
    _objc_release(pppuVar2);
    _objc_release(pppuVar1);
    _objc_release(pppuVar20);
    func_0x00010c163ca0(pppuVar6);
    _objc_initWeak(&ppuStack_200,pppuVar6);
    pppuVar20 = pppuVar6;
    func_0x00010bf6d940(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = pppuVar20;
    func_0x00010bf9be80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar6;
    func_0x00010bef4120(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar5;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = &ppuStack_200;
    _objc_copyWeak(auStack_208,pppuVar2);
    func_0x00010c125bc0(pppuVar1);
    _objc_release(pppuVar3);
    _objc_release(pppuVar5);
    _objc_release(pppuVar1);
    _objc_release(pppuVar20);
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(&ppuStack_200);
  }
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dab0d8;
  ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e4d958;
  puStack_1e8 = puVar10;
  func_0x00010c241620(pppuVar6);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  pppuVar20 = &ppuStack_1f8;
  puStack_1e0 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar8);
  _objc_release(puVar10);
  func_0x00010c1391e0(pppuVar6);
LAB_1063f0dfc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return pppuVar19;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar13 + 4);
  _objc_destroyWeak(&ppuStack_200);
  __Unwind_Resume(pppuVar19);
  _objc_retain(pppuVar20);
  _objc_retain(pppuVar2);
  pppuVar19 = pppuVar19 + 4;
  _objc_loadWeakRetained(pppuVar19);
  func_0x00010be0c380();
  _objc_release(pppuVar20);
  _objc_release(pppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar19);
  return pppuVar19;
}



/* Entry: 1063f08a8; end: 1063f0e6b; -[SCAdPublisherDynamicAdDataSource _safeThreadedInsertAdAfterCurrentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f08a8(ulong param_1,undefined1 *param_2,undefined8 param_3,undefined ***param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined **unaff_x20;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfecde0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (uVar4 != 0x7fffffffffffffff) {
    uVar1 = uVar2;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (uVar4 + 1 < uVar5) {
      uVar1 = uVar2;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar1);
      uVar1 = uVar4;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c9a78;
      func_0x00010c1015e0(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(uVar1);
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_1063f0dfc;
    }
  }
  func_0x00010bf546c0(param_1);
  uVar1 = param_1;
  func_0x00010c066b80();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bef4840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf21040();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a04c0(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c163ca0(param_1);
    _objc_initWeak(auStack_90,param_1);
    uVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf9be80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_90;
    _objc_copyWeak(auStack_98,param_2);
    func_0x00010c125bc0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dab0d8;
  unaff_x20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e4d958;
  puStack_78 = puVar14;
  func_0x00010c241620(param_1);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  param_4 = &ppuStack_88;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar6);
  _objc_release(puVar14);
  func_0x00010c1391e0(param_1);
LAB_1063f0dfc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(uVar2);
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar15 = uVar2 + 0x20;
  _objc_loadWeakRetained(lVar15);
  func_0x00010be0c380();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 1063f0e6c; end: 1063f0ed3;  */

void FUN_1063f0e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c380();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063f0ed4; end: 1063f0edb;  */

void FUN_1063f0ed4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1063f0edc; end: 1063f120b; -[SCAdPublisherDynamicAdDataSource _makeDynamicAdRequestIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f0edc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  puVar1 = PTR_PTR_1126b8cd8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar11 = (long)_DAT_1127470ac;
  if (*(long *)(param_1 + lVar11) != 0) {
    func_0x00010bef4240();
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf17b60();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf17be0();
    _objc_release(puVar1);
    if (param_3 - 1U < 4) {
      ppuStack_88 = (undefined **)(&PTR_PTR_110921018)[param_3 - 1U];
    }
    else {
      ppuStack_88 = &PTR____CFConstantStringClassReference_110db54d8;
    }
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1063f256c;
    puStack_98 = &UNK_1108951c0;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e4dcf8;
    ppuVar5 = &puStack_b0;
    puStack_80 = puVar4;
    func_0x00010bf51e00();
    _objc_release(ppuStack_88);
    _objc_release(ppuStack_90);
    _objc_initWeak(&puStack_b0,param_1);
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf51e00();
    lVar11 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c26a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010befe100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    lVar9 = param_1;
    func_0x00010bef4d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bef3aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21060();
    puStack_b8 = puVar3;
    _objc_copyWeak(auStack_c0,&puStack_b0);
    _objc_retain(uVar6);
    func_0x00010c134800(lVar11);
    _objc_release(param_1);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar11);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uVar6);
    _objc_destroyWeak(&puStack_b0);
    _objc_release(ppuVar5);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1063f120c; end: 1063f1373;  */

void FUN_1063f120c(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf17b60();
    _objc_release(puVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1063f1374;
    puStack_50 = &UNK_110842a68;
    _objc_copyWeak(auStack_40,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_48 = uVar4;
    puStack_38 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1063f1374; end: 1063f13ab;  */

void FUN_1063f1374(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be986a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063f13ac; end: 1063f1467; -[SCAdPublisherDynamicAdDataSource _safeThreadedHandleAdRequestResponse:metadataToMediaTransitionCookie:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f13ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bdce9c0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = (long)_DAT_1127470a0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be12690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchMediaForPendingAdWithMetad_112562340,param_4);
  return;
}



/* Entry: 1063f1468; end: 1063f16b7; -[SCAdPublisherDynamicAdDataSource _fetchMediaForPendingAdWithMetadataToMediaTransitionCookie:] */

void FUN_1063f1468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b8cd8;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 != 0) {
    func_0x00010bef4240(param_1);
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf17b60();
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1063f16b8;
    puStack_78 = &UNK_110920fc8;
    lVar2 = param_1;
    lStack_70 = param_1;
    func_0x00010c0c5660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bef3c60();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar3;
    uStack_b0 = 0xc0000000;
    pcStack_a8 = FUN_1063f1798;
    puStack_a0 = &UNK_110848088;
    puStack_c0 = puVar5;
    uStack_98 = param_3;
    _objc_copyWeak(auStack_c8,auStack_68);
    func_0x00010bfa85e0(lVar1);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 1063f16b8; end: 1063f1797;  */

ulong FUN_1063f16b8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef60a0();
  if (uVar1 == 5) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf9be80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0646a0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar1 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
  }
  else {
    uVar1 = param_2;
    func_0x00010bef52c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1063f1798; end: 1063f182f;  */

void FUN_1063f1798(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063f1830; end: 1063f18b3; -[SCAdPublisherDynamicAdDataSource _handleFetchMediaForPendingInsertAdCompletion] */

void FUN_1063f1830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ca570;
  _objc_alloc(PTR_PTR_1126ca570);
  uVar2 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c258fe0(param_1);
  uVar4 = uVar2;
  func_0x00010bf5f900(uVar2,param_2,uVar3);
  func_0x00010c026640(puVar1,param_2,uVar4);
  _objc_release(uVar2);
  func_0x00010bf213a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063f18b4; end: 1063f1b33; -[SCAdPublisherDynamicAdDataSource _applyServerAdInsertionConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f18b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  FUN_1063ed66c(lVar4,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cd2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127470a0);
  func_0x00010c0e00e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c067ec0(uVar9);
  func_0x00010bef4240(param_1);
  func_0x00010c284be0(lVar2);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1063f1b34; end: 1063f1cf3; -[SCAdPublisherDynamicAdDataSource _expandStoryAd:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f1b34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_1127470bc) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1063f1c50;
    puStack_58 = &UNK_110920768;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uVar2 = uVar1;
    uStack_48 = param_3;
    func_0x00010bd86420(uVar1,&puStack_70);
    _objc_release(uVar1);
    func_0x00010be89060(param_1);
    func_0x00010be3c2a0(param_1);
    _objc_release(uVar2);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063f1cf4; end: 1063f1e1f; -[SCAdPublisherDynamicAdDataSource _registerAdSnaps:adResponse:] */

void FUN_1063f1cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1063f1d80;
  puStack_48 = &UNK_110920798;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063f1e20; end: 1063f20bb; -[SCAdPublisherDynamicAdDataSource _insertAdSnapsAfterCurrentItem:forAdResponse:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f1e20(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar8 = (long)_DAT_1127470bc;
  if (*(long *)(param_1 + lVar8) != 0) {
    uVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110920ff8);
    uVar2 = param_1;
    func_0x00010bfceb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfce400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010be36bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfecde0();
    _objc_release(uVar7);
    if (uVar4 != 0x7fffffffffffffff) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x1063f215c;
      puStack_78 = &UNK_110920808;
      _objc_retain(uVar2);
      uStack_70 = uVar2;
      uStack_68 = uVar4;
      func_0x00010bf97e80(uVar1);
      _objc_release(uStack_70);
    }
    _objc_initWeak(auStack_98,param_1);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c066c20(param_1);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063f20bc; end: 1063f222b;  */

void FUN_1063f20bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b23d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c280580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0558c0(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063f222c; end: 1063f222f; -[SCAdPublisherDynamicAdDataSource operaPlaylistItemController] */

void FUN_1063f222c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_playlistItemController_11261df18);
  return;
}



/* Entry: 1063f2230; end: 1063f231b; -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloaderConfig] */

void FUN_1063f2230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ca540;
  _objc_alloc(PTR_PTR_1126ca540);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067f60();
  uVar6 = param_1;
  func_0x00010c0c5660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  func_0x00010c0305e0(puVar1,param_2,uVar5,uVar6,0,0,param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063f231c; end: 1063f235f; -[SCAdPublisherDynamicAdDataSource lastInteractionStateProvider] */

void FUN_1063f231c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063f2360; end: 1063f23bf; -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloader:adSnapFor:] */

void FUN_1063f2360(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf63e00(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063f23c0; end: 1063f24b3; -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloader:adSnapAfter:] */

void FUN_1063f23c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010bef4ac0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfecde0();
  _objc_release(param_4);
  _objc_release(uVar3);
  if (uVar1 != 0x7fffffffffffffff) {
    uVar3 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar1 + 1 < uVar2) {
      uVar1 = param_1;
      func_0x00010bef52c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_1063f2498;
    }
  }
  uVar3 = 0;
LAB_1063f2498:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063f24b4; end: 1063f24bb; -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloader:adResponseFor:] */

void FUN_1063f24b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef4ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adResponseForDataModel__11259ac58,param_4);
  return;
}



/* Entry: 1063f24bc; end: 1063f256b; -[SCAdPublisherDynamicAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f24bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127470a0,0);
  _objc_storeStrong(param_1 + _DAT_11274709c,0);
  _objc_storeStrong(param_1 + _DAT_1127470a4,0);
  _objc_storeStrong(param_1 + _DAT_1127470a8,0);
  _objc_storeStrong(param_1 + _DAT_1127470b4,0);
  _objc_storeStrong(param_1 + _DAT_1127470bc,0);
  _objc_storeStrong(param_1 + _DAT_1127470b8,0);
  _objc_storeStrong(param_1 + _DAT_1127470b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127470ac,0);
  return;
}



/* Entry: 1063f256c; end: 1063f2613;  */

void FUN_1063f256c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063f2614; end: 1063f267b; +[SCAdPublisherRequestManager requestManagerWithPublisherDataSource:config:] */

void FUN_1063f2614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c03c060();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063f267c; end: 1063f2733; -[SCAdPublisherRequestManager initWithPublisherDataSource:config:] */

undefined1 *
FUN_1063f267c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063f2734; end: 1063f28a7; -[SCAdPublisherRequestManager queueAdRequests:] */

/* WARNING: Possible PIC construction at 0x0001063f2860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063f2864) */
/* WARNING: Removing unreachable block (ram,0x0001063f28a4) */
/* WARNING: Removing unreachable block (ram,0x0001063f2884) */

void FUN_1063f2734(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(undefined8 *)(lVar6 * 8);
      puVar3 = PTR_PTR_1126ca578;
      _objc_alloc(PTR_PTR_1126ca578);
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c03ecc0(puVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bef47c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__balanceBuffers_1125523d0);
  return;
}



/* Entry: 1063f28a8; end: 1063f28d3; -[SCAdPublisherRequestManager registerAdRequestResponse:] */

void FUN_1063f28a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bed2ae0(param_1,param_2,2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdd28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__balanceBuffers_1125523d0);
  return;
}



/* Entry: 1063f28d4; end: 1063f28ff; -[SCAdPublisherRequestManager registerViewedAd:] */

void FUN_1063f28d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bed2b00(param_1,param_2,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdd28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__balanceBuffers_1125523d0);
  return;
}



/* Entry: 1063f2900; end: 1063f292b; -[SCAdPublisherRequestManager registerRemovedAd:] */

void FUN_1063f2900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bed2b00(param_1,param_2,2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdd28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__balanceBuffers_1125523d0);
  return;
}



/* Entry: 1063f292c; end: 1063f2a0b; -[SCAdPublisherRequestManager _updateAdSlotRequestStatus:adRequestClientId:] */

void FUN_1063f292c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ca578;
    _objc_alloc(PTR_PTR_1126ca578);
    lVar3 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c29e300(lVar1);
    lVar5 = lVar1;
    func_0x00010bef51e0(lVar1);
    func_0x00010c03ecc0(puVar2,param_2,lVar3,param_3,lVar4,lVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_4);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063f2a0c; end: 1063f2aeb; -[SCAdPublisherRequestManager _updateAdSlotViewStatus:adRequestClientId:] */

void FUN_1063f2a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ca578;
    _objc_alloc(PTR_PTR_1126ca578);
    lVar3 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c136860(lVar1);
    lVar5 = lVar1;
    func_0x00010bef51e0(lVar1);
    func_0x00010c03ecc0(puVar2,param_2,lVar3,lVar4,param_3,lVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_4);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063f2aec; end: 1063f2bcf; -[SCAdPublisherRequestManager _sortedAdSlots] */

void FUN_1063f2aec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  uVar4 = uVar1;
  func_0x00010bebe280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001006372a4();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bebe280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x0001006372a4();
  _objc_release(uVar4);
  func_0x00010be03ec0(uVar1);
  func_0x00010be03ce0(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1063f2bd0; end: 1063f2c6b; -[SCAdPublisherRequestManager _balanceBuffers] */

void FUN_1063f2bd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bebe280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bebe280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
  func_0x00010be03ec0(param_1);
  func_0x00010be03ce0(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063f2c6c; end: 1063f2d17;  */

bool FUN_1063f2c6c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c136860();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c29e300(param_2);
    bVar1 = lVar2 != 2;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1063f2d18; end: 1063f2d77; -[SCAdPublisherRequestManager _lastUserViewedAdSlotIdx] */

undefined8 FUN_1063f2d18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bebe280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bd86870();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c2827c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063f2d78; end: 1063f2e0b;  */

void FUN_1063f2d78(undefined8 param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c29e300();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 1) {
    func_0x00010bef51e0(param_2);
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063f2e0c; end: 1063f302f; -[SCAdPublisherRequestManager _dispatchMediaRequests:] */

ulong FUN_1063f2e0c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be47200();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0c4200();
  lStack_f8 = lVar1 + lVar2 + 1;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc0000000;
  pcStack_108 = FUN_1063f3030;
  puStack_100 = &UNK_1109210f8;
  ppuVar7 = &puStack_118;
  uVar3 = param_3;
  func_0x0001006372a4(param_3,ppuVar7);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if ((uVar4 != 0) && (uVar4 = uVar3, func_0x00010bf529e0(), uVar4 != 0)) {
    _objc_retain(uVar3);
    uVar4 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        uVar8 = *(undefined8 *)(uVar9 * 8);
        lVar2 = param_1 + 8;
        _objc_loadWeakRetained(lVar2);
        uVar5 = uVar8;
        func_0x00010c134680(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bef47c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b73c0(lVar2);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(lVar2);
        func_0x00010c134680(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar8;
        func_0x00010bef47c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed2ae0(param_1);
        _objc_release(uVar5);
        _objc_release(uVar8);
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
      uVar4 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bef51e0(ppuVar7);
  return (ulong)(ppuVar7 < *(undefined ***)(param_3 + 0x20));
}



/* Entry: 1063f3030; end: 1063f305f;  */

bool FUN_1063f3030(long param_1,ulong param_2)

{
  func_0x00010bef51e0(param_2);
  return param_2 < *(ulong *)(param_1 + 0x20);
}



/* Entry: 1063f3060; end: 1063f3283; -[SCAdPublisherRequestManager _dispatchAdRequests:] */

ulong FUN_1063f3060(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be47200();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c134c00();
  lStack_f0 = lVar1 + lVar2 + 1;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc0000000;
  pcStack_100 = FUN_1063f3284;
  puStack_f8 = &UNK_1109210f8;
  ppuVar8 = &puStack_110;
  uVar3 = param_3;
  func_0x0001006372a4(param_3,ppuVar8);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if ((uVar4 != 0) && (uVar4 = uVar3, func_0x00010bf529e0(), uVar4 != 0)) {
    func_0x00010c0d2760();
    func_0x00010bf529e0();
    uVar5 = param_3;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR___NSConcreteGlobalBlock_110921138;
    uVar6 = uVar5;
    func_0x000100504554();
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0b6f40();
    _objc_release(lVar1);
    _objc_retain(uVar6);
    uVar4 = uVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar6);
        }
        uVar7 = *(undefined8 *)(uVar9 * 8);
        func_0x00010bef47c0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed2ae0(param_1);
        _objc_release(uVar7);
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
      uVar4 = uVar6;
      func_0x00010bf52a60();
    }
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bef51e0(ppuVar8);
  return (ulong)(ppuVar8 < *(undefined ***)(param_3 + 0x20));
}



/* Entry: 1063f3284; end: 1063f32b3;  */

bool FUN_1063f3284(long param_1,ulong param_2)

{
  func_0x00010bef51e0(param_2);
  return param_2 < *(ulong *)(param_1 + 0x20);
}



/* Entry: 1063f32b4; end: 1063f32bb;  */

void FUN_1063f32b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_request_11262abc0);
  return;
}



/* Entry: 1063f32bc; end: 1063f32d3; -[SCAdPublisherRequestManager dataSourceTarget] */

void FUN_1063f32bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063f32d4; end: 1063f32db; -[SCAdPublisherRequestManager config] */

undefined8 FUN_1063f32d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1063f32dc; end: 1063f32e7; -[SCAdPublisherRequestManager adRequestClientIdToAdSlot] */

void FUN_1063f32dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 1063f32e8; end: 1063f331f; -[SCAdPublisherRequestManager .cxx_destruct] */

void FUN_1063f32e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1063f3320; end: 1063f332b; +[SCPublisherAdDataSource announcerIdentifier] */

undefined ** FUN_1063f3320(void)

{
  return &PTR____CFConstantStringClassReference_110e4dd78;
}



/* Entry: 1063f332c; end: 1063f333b; -[SCPublisherAdDataSource addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f332c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127470cc),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1063f333c; end: 1063f334b; -[SCPublisherAdDataSource removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f333c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127470cc),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1063f334c; end: 1063f335b; -[SCPublisherAdDataSource didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063f334c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127470cc),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 1063f335c; end: 1063f34bb; -[SCPublisherAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1063f335c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithDependencies_pendingDisp_1125e0770);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470d0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470d0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470d4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470d8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470d8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470dc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470e0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470cc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470e4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470e8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470e8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127470ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127470ec) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}


