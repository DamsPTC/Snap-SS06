/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ed0e20; end: 105ed0f03; -[SCMapDropsLogging initWithUserBlizzardServices:mapSession:mapViewport:] */

undefined1 *
FUN_105ed0e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126edce0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c15ffa0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ed0f04; end: 105ed1003; -[SCMapDropsLogging logDropWithDropScope:] */

void FUN_105ed0f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0e9800(param_3);
  lVar1 = param_1;
  func_0x00010beb45a0(param_1,param_2,uVar4);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126c59c8;
    _objc_alloc_init(PTR_PTR_1126c59c8);
    func_0x00010c1c25a0();
    uVar4 = param_3;
    func_0x00010bf8a9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf8aa20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c23e0(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010c2bf200(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1c29c0(puVar2);
    lVar1 = param_1;
    func_0x00010bdd4d60(param_1,param_2,param_3);
    func_0x00010c206c40(puVar2,param_2,lVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed1004; end: 105ed10e7; -[SCMapDropsLogging logDropTrayFromDropScope:] */

void FUN_105ed1004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c59d0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar4 = param_3;
  func_0x00010bf8a9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c23e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010c1c25a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  lVar3 = param_1;
  func_0x00010bdd4d60(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c206c40(puVar1,param_2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed10e8; end: 105ed121b; -[SCMapDropsLogging logDropTrayAction:dropScope:placeId:] */

void FUN_105ed10e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c59d8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar4 = param_4;
  func_0x00010bf8a9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c23e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010c1c25a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  lVar3 = param_1;
  func_0x00010bdd4d60(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c206c40(puVar1,param_2,lVar3);
  lVar3 = param_1;
  func_0x00010bdd4c40(param_1,param_2,param_3);
  func_0x00010c161620(puVar1,param_2,lVar3);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1dc3a0(puVar1,param_2,param_5);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ed121c; end: 105ed133b; -[SCMapDropsLogging getVenueStoryAnalyticsForDropId:] */

void FUN_105ed121c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1eb0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = 0x22;
  func_0x00010baf2e2c(0x22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0620a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c25a0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0bac20(uVar2);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2900(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar2 = 0x11;
  func_0x00010bb01b4c(0x11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c26e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1dbac0(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ed133c; end: 105ed134b; -[SCMapDropsLogging _shouldLogDropPinFromSource:] */

bool FUN_105ed133c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 3U < 0xfffffffffffffffe;
}



/* Entry: 105ed134c; end: 105ed1383; -[SCMapDropsLogging _blizzardSourceFromDropsScope:] */

undefined8 FUN_105ed134c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e9800();
  if (param_3 - 1U < 4) {
    uVar1 = *(undefined8 *)(&UNK_10ddd1400 + (param_3 - 1U) * 8);
  }
  else {
    uVar1 = 0x22;
  }
  return uVar1;
}



/* Entry: 105ed1384; end: 105ed13a3; -[SCMapDropsLogging _blizzardActionFromDropsAction:] */

undefined8 FUN_105ed1384(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 9) {
    return *(undefined8 *)(&UNK_10ddd1420 + param_3 * 8);
  }
  return 1;
}



/* Entry: 105ed13a4; end: 105ed13ab; -[SCMapDropsLogging mapSessionId] */

undefined8 FUN_105ed13a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105ed13ac; end: 105ed13e7; -[SCMapDropsLogging .cxx_destruct] */

void FUN_105ed13ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ed13e8; end: 105ed179b; -[SCMapDropsTrayRouter initWithMultiTrayManager:mapView:valdiRuntimeProvider:composerPlaceStoryPlayerVendor:trayServiceFactory:notificationPool:mainQueue:directionsSheetScopeServices:directionsSheetScopeExposer:placeShareScopeExposer:venueEditorScopeExposer:circumstanceEngine:actionSheetPresenterFactory:alertPresenterFactory:deckHierarchyFactory:mapPlaceProfileFactoryServices:dropsShareFactoryServices:] */

undefined8 *
FUN_105ed13e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126edce8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 105ed179c; end: 105ed1b67; -[SCMapDropsTrayRouter presentTrayWithDropScope:userLocation:trayActionHandler:nearbyPlacesDataObservable:nearbyPlaceActionHandlerHandler:iconUpdateObservable:isPinSavedObservable:] */

void FUN_105ed179c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  uVar4 = param_1;
  uVar5 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (*(long *)(param_3 + 0x78) == 0) {
    puVar1 = PTR_PTR_1126c59e0;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010be5c560(param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c061ee0();
    uVar5 = *(undefined8 *)(param_3 + 0x78);
    *(undefined **)(param_3 + 0x78) = puVar1;
    _objc_release(uVar5);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar5 = *(undefined8 *)(param_3 + 0x80);
    *(undefined **)(param_3 + 0x80) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_2;
  }
  uVar3 = 0x1a;
  func_0x000109203bc0(0x1a);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1f18;
  _objc_alloc(PTR_PTR_1126b1f18);
  func_0x00010bfdf380(PTR_PTR_1126b1f10);
  func_0x00010c0fd340(PTR_PTR_1126b1f10);
  func_0x00010c01ed80(puVar1);
  lVar2 = param_5;
  func_0x00010bf8a9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  *(undefined8 *)(param_3 + 0x60) = uVar4;
  *(undefined8 *)(param_3 + 0x68) = uVar5;
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0e9800();
  if (lVar2 != 3) {
    uVar4 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b140();
    _objc_release(uVar4);
  }
  _objc_initWeak(auStack_80,param_3);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105ed1b68;
  puStack_90 = &UNK_1108f3680;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar4 = uVar5;
  func_0x00010bf59b80(0x405e000000000000,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(param_3 + 0x70) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_initWeak(auStack_b0,param_3);
  uVar5 = *(undefined8 *)(param_3 + 0x70);
  func_0x00010c0ba2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_b0);
  uVar4 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(param_3 + 0x88) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105ed1b68; end: 105ed1c13;  */

void FUN_105ed1b68(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else if (param_2 < 2) {
    lVar3 = param_1;
    func_0x00010bdd9220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105ed1c14; end: 105ed1c5b;  */

void FUN_105ed1c14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed1c5c; end: 105ed1ca7; -[SCMapDropsTrayRouter updateTrayWithDropCoordinate:] */

void FUN_105ed1c5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_3 + 0x60) = param_1;
  *(undefined8 *)(param_3 + 0x68) = param_2;
  func_0x00010c28b520(*(undefined8 *)(param_3 + 0x78));
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed1ca8; end: 105ed1cff; -[SCMapDropsTrayRouter removeTray] */

void FUN_105ed1ca8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed20();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ed1d00; end: 105ed1dbf; -[SCMapDropsTrayRouter setTrayPositionForFocusedTextField:] */

void FUN_105ed1d00(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    func_0x00010bf5fb20();
    if (param_3 == 0) {
      if (lVar1 == 8) {
        return;
      }
      uVar2 = 8;
    }
    else {
      if (lVar1 == 0x10) {
        return;
      }
      uVar2 = 0x10;
    }
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105ed1dc0;
    puStack_40 = &UNK_110846540;
    _objc_copyWeak(auStack_38,auStack_28);
    uStack_30 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105ed1dc0; end: 105ed1e23;  */

void FUN_105ed1dc0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219f40();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed1e24; end: 105ed1ed7; -[SCMapDropsTrayRouter presentDirectionsSheetForCoordinate:address:travelMode:] */

void FUN_105ed1e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010bf22dc0(param_1,param_2,uVar2,param_4,param_5,param_6,*(undefined8 *)(param_3 + 0x80),
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x48),param_4,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ed1ed8; end: 105ed2063; -[SCMapDropsTrayRouter sendDropToChat:] */

void FUN_105ed1ed8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c59e8;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  uVar2 = param_5;
  func_0x00010bf8aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bf5b460(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c0d4f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_5);
  uVar3 = param_5;
  func_0x00010c0fc060(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c00e780(param_1,param_2,puVar1,param_4,uVar2,uVar5,uVar6,1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (*(long *)(param_3 + 200) == 0) {
    puVar4 = PTR_PTR_1126c59f0;
    _objc_alloc(PTR_PTR_1126c59f0);
    func_0x00010c00e7e0();
    uVar5 = *(undefined8 *)(param_3 + 0xc0);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 200);
    *(undefined8 *)(param_3 + 200) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c15bba0(*(undefined8 *)(param_3 + 200));
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed2064; end: 105ed206f; -[SCMapDropsTrayRouter presentActionSheet:] */

void FUN_105ed2064(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_presentActionSheet_completion__112620600,param_3,
             0);
  return;
}



/* Entry: 105ed2070; end: 105ed22fb; -[SCMapDropsTrayRouter presentNotificationBannerWithType:closeTray:] */

void FUN_105ed2070(undefined **param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126afde0;
  puVar3 = (undefined *)0x0;
  ppuVar1 = param_1;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110db9c98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105ed21c8;
      }
      if (param_3 != 1) goto LAB_105ed21f0;
      func_0x000105ed60a8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 == 2) {
        func_0x000105ed60c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105ed21c8;
      }
      if (param_3 != 3) goto LAB_105ed21f0;
      func_0x000105ed60d8();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_105ed2118:
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 < 6) {
      if (param_3 != 4) {
        if (param_3 != 5) goto LAB_105ed21f0;
        func_0x000105ed6108();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105ed2118;
      }
      func_0x000105ed60f0();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 6) {
      func_0x000105ed6120();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 7) goto LAB_105ed21f0;
      func_0x000105ed6138();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_105ed21c8:
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  puVar3 = puVar2;
LAB_105ed21f0:
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105ed228c;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(puVar3);
  puStack_50 = puVar3;
  uStack_40 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(puStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  return;
}



/* Entry: 105ed22fc; end: 105ed23f3; -[SCMapDropsTrayRouter sendPlaceToChatWithPlaceId:url:webUrl:] */

void FUN_105ed22fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b1e60;
  _objc_alloc(PTR_PTR_1126b1e60);
  func_0x00010c057500();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed23f4; end: 105ed24bb; -[SCMapDropsTrayRouter presentSuggestAPlaceWithCoordinate:mapSessionId:] */

void FUN_105ed23f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_3 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b20a0;
  _objc_alloc(PTR_PTR_1126b20a0);
  func_0x00010c028640();
  puVar3 = PTR_PTR_1126b20a8;
  _objc_alloc(PTR_PTR_1126b20a8);
  func_0x00010c0393c0(param_1,param_2);
  func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x58),param_4,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ed24bc; end: 105ed25af; -[SCMapDropsTrayRouter presentPlaceProfileWithPlaceId:placeCoordinate:pinId:] */

void FUN_105ed24bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1e78;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c031b60();
  func_0x00010c207140();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b1e80;
  _objc_alloc(PTR_PTR_1126b1e80);
  func_0x00010c0364a0();
  _objc_release(param_5);
  func_0x00010c1dc320(param_1,param_2,puVar2);
  func_0x00010c0b9800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d8c0();
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed25b0; end: 105ed285b; -[SCMapDropsTrayRouter _makeTrayViewModelWithDropScope:userLocation:] */

void FUN_105ed25b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = param_1;
  dVar10 = param_2;
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf8a9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c59f8;
  _objc_alloc(PTR_PTR_1126c59f8);
  lVar4 = lVar2;
  func_0x00010c0d4f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(lVar2);
  func_0x00010bf51c80(lVar2);
  lVar5 = lVar2;
  func_0x00010c06f8e0(lVar2);
  lVar6 = lVar2;
  func_0x00010bf5b460(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c252440(lVar2);
  func_0x00010c01dcc0(dVar9,dVar10,puVar3,param_4,lVar4,lVar5,lVar6,lVar7 == 3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bf8aa20(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbac0(puVar3,param_4,lVar4);
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010c0e9800(param_5);
  _objc_release(param_5);
  func_0x00010bdd4d80(param_3,param_4,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d50a0(puVar3,param_4,param_3);
  _objc_release(param_3);
  lVar4 = lVar2;
  func_0x00010befd6e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165c80(puVar3,param_4,lVar4);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bf1b9c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar3,param_4,lVar4);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010c15adc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar3,param_4,lVar4);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010c0fc060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9680(puVar3,param_4,lVar4);
  _objc_release();
  iVar1 = (int)lVar4;
  if (((1.1920928955078125e-07 < ABS(param_2)) && (1.1920928955078125e-07 < ABS(param_1))) &&
     (_CLLocationCoordinate2DIsValid(param_1,param_2), iVar1 != 0)) {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ea60(puVar3,param_4,puVar8);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21eac0(puVar3,param_4,puVar8);
    _objc_release(puVar8);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ed285c; end: 105ed28f7; -[SCMapDropsTrayRouter _handleTrayEvent:] */

void FUN_105ed285c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ed28f8;
  puStack_20 = &UNK_1108592e0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ed2974;
  puStack_48 = &UNK_1108484c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ed2990;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c1800(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 105ed28f8; end: 105ed2973;  */

void FUN_105ed28f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 2) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
    func_0x00010bf5fb20();
    if (lVar1 == 2) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf218e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192140();
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 105ed2974; end: 105ed298f;  */

void FUN_105ed2974(long param_1,long param_2)

{
  if (param_2 == 2) {
    if (*(long *)(*(long *)(param_1 + 0x20) + 0xb8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s_removeTray_112629560);
      return;
    }
  }
  return;
}



/* Entry: 105ed2990; end: 105ed29bf;  */

void FUN_105ed2990(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xd0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf73b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ed29c0; end: 105ed29ef; -[SCMapDropsTrayRouter _blizzardStringFromDropsSource:] */

void FUN_105ed29c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    func_0x000100c6f294(*(undefined8 *)(&UNK_10ddd1468 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed29f0; end: 105ed2b07; -[SCMapDropsTrayRouter _cameraForTrayCreationOrRestoration] */

void FUN_105ed29f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8920();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c5a00;
  _objc_alloc(PTR_PTR_1126c5a00);
  func_0x00010bfe0320(uVar2);
  uVar3 = param_1;
  func_0x00010c0fc7c0(uVar2);
  uVar1 = uVar3;
  func_0x00010bf01f00(uVar2);
  func_0x00010bffd4e0(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),param_1,uVar3,
                      uVar1,puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ed2b08; end: 105ed2bdb; -[SCMapDropsTrayRouter mapPlaceProfilePresenter] */

void FUN_105ed2b08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      lVar6 = 0;
      goto LAB_105ed2bc0;
    }
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126b1e70;
    _objc_alloc(PTR_PTR_1126b1e70);
    func_0x00010c00ae60();
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + 0xb8);
  }
  _objc_retain(lVar6);
LAB_105ed2bc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105ed2bdc; end: 105ed2bdf; -[SCMapDropsTrayRouter onPlaceProfileHidden] */

void FUN_105ed2bdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeTray_112629560);
  return;
}



/* Entry: 105ed2be0; end: 105ed2bef; -[SCMapDropsTrayRouter onPlaceProfileRemoved] */

void FUN_105ed2be0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed2bf0; end: 105ed2c37; -[SCMapDropsTrayRouter didCloseDirectionsSheetWithAction:] */

void FUN_105ed2bf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ed2c38; end: 105ed2c77; -[SCMapDropsTrayRouter didEndSendToWorkflowForDropIdentifier:withSuccess:] */

void FUN_105ed2c38(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    lVar1 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7b460();
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ed2c78; end: 105ed2cbf; -[SCMapDropsTrayRouter mapPlaceShareEnded] */

void FUN_105ed2c78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ed2cc0; end: 105ed2d07; -[SCMapDropsTrayRouter venueEditorScreenDidDismiss] */

void FUN_105ed2cc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ed2d08; end: 105ed2d1f; -[SCMapDropsTrayRouter delegate] */

void FUN_105ed2d08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed2d20; end: 105ed2d2b; -[SCMapDropsTrayRouter setDelegate:] */

void FUN_105ed2d20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 105ed2d2c; end: 105ed2e5f; -[SCMapDropsTrayRouter .cxx_destruct] */

void FUN_105ed2d2c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 105ed2e60; end: 105ed2f37; -[SCMapDropsTrayServicesFactory initWithGRPCServiceFactory:performerProvider:valdiBlizzardLoggingServices:] */

undefined1 *
FUN_105ed2e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126edcf0;
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
    uVar2 = param_5;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ed2f38; end: 105ed3017; -[SCMapDropsTrayServicesFactory makePeliasGrpcService] */

void FUN_105ed2f38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ed3018; end: 105ed30f7; -[SCMapDropsTrayServicesFactory makeNavigationGrpcService] */

void FUN_105ed3018(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ed30f8; end: 105ed30ff; -[SCMapDropsTrayServicesFactory makeComposerBlizzardLogger] */

void FUN_105ed30f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 105ed3100; end: 105ed313b; -[SCMapDropsTrayServicesFactory .cxx_destruct] */

void FUN_105ed3100(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ed313c; end: 105ed343b; -[SCMapDropsTrayViewController initWithViewModel:valdiRuntimeProvider:composerPlaceStoryPlayerVendor:trayServiceFactory:trayActionHandler:nearbyPlacesDataObservable:nearbyPlaceActionHandler:iconUpdateObservable:isPinSavedObservable:actionSheetPresenterFactory:alertPresenterFactory:deckHierarchyFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ed313c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  puStack_68 = PTR_PTR_1126edcf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    lVar8 = (long)_DAT_112739978;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273997c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739980;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739984;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112739988;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c5a08;
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010be5c540(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273998c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273998c) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739990);
    *(undefined **)((long)puVar1 + (long)_DAT_112739990) = puVar3;
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



/* Entry: 105ed343c; end: 105ed36d3; -[SCMapDropsTrayViewController updateTrayWithCoordinate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed343c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c59f8;
  _objc_alloc(PTR_PTR_1126c59f8);
  lVar8 = (long)_DAT_11273998c;
  uVar2 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0640e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c071220();
  func_0x00010c01dcc0(param_1,param_2,puVar1,param_4,uVar3,1,uVar7,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c292bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ea60(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c292ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21eac0(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c0fc080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbac0(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9680(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  func_0x00010c2226c0(*(undefined8 *)(param_3 + lVar8),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed36d4; end: 105ed36e3; -[SCMapDropsTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed36d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112739990));
  return;
}



/* Entry: 105ed36e4; end: 105ed372f; -[SCMapDropsTrayViewController viewDidLoad] */

void FUN_105ed36e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126edcf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 105ed3730; end: 105ed373b; -[SCMapDropsTrayViewController trayFeatureName] */

undefined ** FUN_105ed3730(void)

{
  return &PTR____CFConstantStringClassReference_110e30398;
}



/* Entry: 105ed373c; end: 105ed374b; -[SCMapDropsTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed373c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112739990),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 105ed374c; end: 105ed3797; -[SCMapDropsTrayViewController handleGripperAreaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed374c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739990);
  func_0x00010c065580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed3798; end: 105ed379f; -[SCMapDropsTrayViewController autoSizingEnabled] */

undefined8 FUN_105ed3798(void)

{
  return 1;
}



/* Entry: 105ed37a0; end: 105ed3b5b; -[SCMapDropsTrayViewController _makeTrayContextWithActionHandler:storyPlayerVendor:nearbyPlacesDataObservable:nearbyPlaceActionHandler:iconUpdateObservable:isPinSavedObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed37a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0b75c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126c5a10;
  _objc_alloc(PTR_PTR_1126c5a10);
  func_0x00010c02e460();
  func_0x00010c1c1fc0();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da140(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar10 = (long)_DAT_11273997c;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0b7560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0b74e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da120(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb980(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0b6fe0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112739980);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161e00(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112739984);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar9);
  func_0x00010bdecc00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a1e0(puVar2,param_2,param_1);
  _objc_release(param_1);
  uVar8 = param_8;
  func_0x00010c272120(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c1b3480(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  if (param_5 != 0) {
    lVar10 = param_5;
    func_0x00010c272120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbbe0(puVar2,param_2,lVar10);
    _objc_release(lVar10);
    func_0x00010c1cbbc0(puVar2,param_2,param_6);
  }
  uVar8 = param_7;
  func_0x00010c272120(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9860(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ed3b5c; end: 105ed3c23; -[SCMapDropsTrayViewController _createDeckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed3b5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112739988);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c141520(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf55380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf668c0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ed3c24; end: 105ed3cb3; -[SCMapDropsTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed3c24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273997c,0);
  _objc_storeStrong(param_1 + _DAT_112739988,0);
  _objc_storeStrong(param_1 + _DAT_112739984,0);
  _objc_storeStrong(param_1 + _DAT_112739980,0);
  _objc_storeStrong(param_1 + _DAT_112739978,0);
  _objc_storeStrong(param_1 + _DAT_11273998c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739990,0);
  return;
}



/* Entry: 105ed3cb4; end: 105ed3f83; -[SCMapDropsWorkflow initWithDropsScope:trayRouter:annotationController:persistenceProvider:logger:locationProvider:circumstanceEngine:trayDataProvider:emojiPickerFactoryServices:] */

undefined8 *
FUN_105ed3cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126edd00;
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
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf8a9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[2]);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 105ed3f84; end: 105ed3fcb;  */

void FUN_105ed3f84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ba20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed3fcc; end: 105ed4123; -[SCMapDropsWorkflow startWorkflow] */

void FUN_105ed3fcc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8a9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d080();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060400();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8a9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  func_0x00010be12d00(param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010be1e420(param_1);
  func_0x00010c10eac0(uVar3);
  func_0x00010c0a5480(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8a9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fd020(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c0a54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logDropWithDropScope__112606f38,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 105ed4124; end: 105ed414b; -[SCMapDropsWorkflow endWorkflow] */

void FUN_105ed4124(long param_1)

{
  func_0x00010c12c020(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c12ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_removeTray_112629560)
  ;
  return;
}



/* Entry: 105ed414c; end: 105ed41d7; -[SCMapDropsWorkflow _handleLocationUpdate:] */

void FUN_105ed414c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bdc1c40(param_5);
  func_0x00010be12d00(param_3);
  func_0x00010c28b540(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  func_0x00010c285500(param_1,param_2,*(undefined8 *)(param_3 + 0x18));
  uVar1 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010c2ab1e0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_3 + 0x68) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0a54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_logDropWithDropScope__112606f38,
             *(undefined8 *)(param_3 + 8));
  return;
}



/* Entry: 105ed41d8; end: 105ed4267; -[SCMapDropsWorkflow _getCurrentLocation] */

undefined1  [16] FUN_105ed41d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_3 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = 0x4072c00000000000;
  uVar1 = uVar2;
  func_0x000107f492b0(0x4072c00000000000);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
    param_2 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  }
  else {
    func_0x00010bf51c80(uVar2);
  }
  _objc_release(uVar2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 105ed4268; end: 105ed4273; -[SCMapDropsWorkflow _fetchNearbyPlacesFromDropCoordinate:] */

void FUN_105ed4268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_fetchNearbyPlacesForPinCoordinat_1125c7d20,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 105ed4274; end: 105ed43bb; -[SCMapDropsWorkflow _updateFocusedDropWithTitle:icon:sendToChat:] */

void FUN_105ed4274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c2bb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  if (param_5 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c14a400(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010c15bbc0(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ed43bc; end: 105ed43ef;  */

void FUN_105ed43bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed43f0; end: 105ed44bb; -[SCMapDropsWorkflow _updateFocusedDropWithResultType:] */

void FUN_105ed43f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  func_0x00010c10d340(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c252440(uVar3);
  func_0x00010c2b9fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c2854f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateDrop__11267ef60,
             *(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 105ed44bc; end: 105ed44cb; -[SCMapDropsWorkflow _notifyPinTitleNotPermissible] */

void FUN_105ed44bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_presentNotificationBannerWithTyp_112620ef0,0,0);
  return;
}



/* Entry: 105ed44cc; end: 105ed4567; -[SCMapDropsWorkflow getDirectionsWithLat:lng:travelMode:openSource:pinId:address:] */

void FUN_105ed44cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(param_8);
  _CLLocationCoordinate2DMake(param_1,param_2);
  uVar1 = 0;
  if (param_5 != 0) {
    uVar1 = 2;
  }
  if (param_5 == 1) {
    uVar1 = 1;
  }
  func_0x00010c10be80(uVar2);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010c0a5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_logDropTrayAction_dropScope_plac_112606f28,uVar1,
             *(undefined8 *)(param_3 + 8),0);
  return;
}



/* Entry: 105ed4568; end: 105ed456f; -[SCMapDropsWorkflow onClose] */

void FUN_105ed4568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_removeTray_112629560)
  ;
  return;
}



/* Entry: 105ed4570; end: 105ed4603; -[SCMapDropsWorkflow sendPinToChatWithInitialTitle:lat:lng:editedTitle:icon:] */

void FUN_105ed4570(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bed8340(param_1,param_2,param_3,param_5,1);
  }
  else {
    func_0x00010bee85c0(param_1,param_2,param_4,param_5,1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed4604; end: 105ed469b; -[SCMapDropsWorkflow launchEmojiPicker] */

void FUN_105ed4604(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c5a18;
  _objc_alloc(PTR_PTR_1126c5a18);
  func_0x00010c00a840();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c10ea40(*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed469c; end: 105ed46a3; -[SCMapDropsWorkflow onTextFieldFocusChangeWithIsFocused:] */

void FUN_105ed469c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setTrayPositionForFocusedTextFie_112664208);
  return;
}



/* Entry: 105ed46a4; end: 105ed48fb; -[SCMapDropsWorkflow onMoreButtonTap] */

void FUN_105ed46a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  FUN_105ed6090();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8a9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar3;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar6 = PTR_PTR_1126b10a0;
  func_0x00010c0ec260();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105ed48fc;
  puStack_78 = &UNK_110852cd0;
  puVar9 = auStack_68;
  _objc_copyWeak(auStack_70,puVar9);
  puVar7 = puVar6;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar6);
  _objc_release(puVar8);
  func_0x00010c10af60(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  puVar6 = puVar4;
  __Unwind_Resume(puVar4);
  pcStack_a8 = FUN_105ed48fc;
  puStack_d0 = puVar7;
  puStack_c8 = puVar5;
  lStack_c0 = param_1;
  puStack_b8 = puVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_d8,puVar6 + 0x20);
  func_0x00010bf83000(puVar9);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar9);
  return;
}



/* Entry: 105ed48fc; end: 105ed499f;  */

void FUN_105ed48fc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ed49a0; end: 105ed49cb;  */

void FUN_105ed49a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed49cc; end: 105ed4a6b; -[SCMapDropsWorkflow onSavePinTapWithTitle:icon:] */

void FUN_105ed49cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    func_0x00010bee85c0(param_1,param_2,param_3,param_4,0);
  }
  else {
    func_0x00010bed8340();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed4a6c; end: 105ed4b7b; -[SCMapDropsWorkflow onDeletePinWithDeleteForEveryone:] */

void FUN_105ed4a6c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf8a9c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6bb80(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hidePin_11256b060);
  return;
}



/* Entry: 105ed4b7c; end: 105ed4bcf;  */

void FUN_105ed4b7c(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (func_0x00010c10d340(*(undefined8 *)(param_1 + 0x10)), param_2 != 0)) {
    func_0x00010be8bee0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed4bd0; end: 105ed4cc3; -[SCMapDropsWorkflow _hidePin] */

void FUN_105ed4bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8a9c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6bb80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ed4cc4; end: 105ed4d17;  */

void FUN_105ed4cc4(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (func_0x00010c10d340(*(undefined8 *)(param_1 + 0x10)), param_2 != 0)) {
    func_0x00010be8bee0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed4d18; end: 105ed4dbb; -[SCMapDropsWorkflow _removeDropFromMap] */

void FUN_105ed4d18(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf8abe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf8abe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf8a9c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c200(uVar3);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105ed4dbc; end: 105ed4eef; -[SCMapDropsWorkflow _verifyEditedPinTitle:icon:sendToChat:] */

void FUN_105ed4dbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c298840(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ed4ef0; end: 105ed4f47;  */

void FUN_105ed4ef0(long param_1,int param_2)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be64e80(param_1);
  }
  else {
    func_0x00010bed8340(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ed4f48; end: 105ed5087; -[SCMapDropsWorkflow onNearbyPlaceTapWithPlaceData:] */

void FUN_105ed4f48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c08aca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar3 = param_4;
  uVar5 = param_1;
  func_0x00010c09abe0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _CLLocationCoordinate2DMake(param_1,uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf8a9c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d8e0(param_1,uVar5,uVar4,param_3,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0a5460(uVar5,param_3,6,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed5088; end: 105ed5297; -[SCMapDropsWorkflow onNearbyPlaceSendWithPlaceData:] */

void FUN_105ed5088(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf20ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c264480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar6 = param_1;
  func_0x00010c09abe0(uVar4);
  _CLLocationCoordinate2DMake(param_1,uVar6);
  uVar5 = uVar1;
  uVar7 = param_1;
  func_0x00010c0d6e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar8 = uVar7;
  func_0x00010c09abe0(uVar5);
  _CLLocationCoordinate2DMake(uVar7,uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b1e58;
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba3a0(uVar7,uVar8,param_1,uVar6,puVar2,param_3,uVar1,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f70,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1e58;
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0d4f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0baca0(puVar3,param_3,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c400(uVar4,param_3,uVar1,puVar2,puVar3);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0a5460(uVar5,param_3,5,uVar4,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ed5298; end: 105ed52fb; -[SCMapDropsWorkflow onSuggestAPlaceTap] */

void FUN_105ed5298(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x68));
  func_0x00010c0b9ce0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c10e6c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_logDropTrayAction_dropScope_plac_112606f28,3,
             *(undefined8 *)(param_3 + 8),0);
  return;
}



/* Entry: 105ed52fc; end: 105ed5377; -[SCMapDropsWorkflow getNearbyPlacePreviewThumbnailObservableWithPlaceId:] */

void FUN_105ed52fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010bfa8dc0(*(undefined8 *)(param_1 + 0x40),param_2,param_3,puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ed5378; end: 105ed538f; -[SCMapDropsWorkflow onNearbyPlaceStoryTapWithPlaceId:] */

void FUN_105ed5378(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logDropTrayAction_dropScope_plac_112606f28,4,
             *(undefined8 *)(param_1 + 8),param_3);
  return;
}



/* Entry: 105ed5390; end: 105ed5403; -[SCMapDropsWorkflow getVenueStoryAnalytics] */

void FUN_105ed5390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8a9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcc040(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ed5404; end: 105ed5423; -[SCMapDropsWorkflow onViewMoreOrLessTapWithIsViewMore:] */

void FUN_105ed5404(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 7;
  if (param_3 == 0) {
    uVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logDropTrayAction_dropScope_plac_112606f28,uVar1,
             *(undefined8 *)(param_1 + 8),0);
  return;
}



/* Entry: 105ed5424; end: 105ed542b; -[SCMapDropsWorkflow shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105ed5424(void)

{
  return 0;
}



/* Entry: 105ed542c; end: 105ed545f; -[SCMapDropsWorkflow didCloseTray] */

void FUN_105ed542c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8abe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed5460; end: 105ed54cf; -[SCMapDropsWorkflow didSendDropSuccessfully] */

void FUN_105ed5460(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x68);
  func_0x00010c07d080();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a400();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8abe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ed54d0; end: 105ed5513; -[SCMapDropsWorkflow emojiPickerScopeDidCompleteWith:] */

void FUN_105ed54d0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed5514; end: 105ed5523; -[SCMapDropsWorkflow emojiPickerScopeWillDismiss:] */

void FUN_105ed5514(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ed5524; end: 105ed55ef; -[SCMapDropsWorkflow .cxx_destruct] */

void FUN_105ed5524(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 105ed55f0; end: 105ed5e5f; -[SCMapFocusedDropEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed55f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  puVar1 = PTR_PTR_1126c5a20;
  _objc_alloc();
  lVar2 = param_5 + _DAT_1127399d0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5 + _DAT_1127399d4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + _DAT_1127399d8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c016cc0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5 + _DAT_1127399dc;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c5a28;
  _objc_alloc();
  lVar2 = param_5 + _DAT_1127399e0;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c0fd400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5 + _DAT_1127399e4;
  _objc_loadWeakRetained(lVar4);
  lVar3 = lVar4;
  func_0x00010c110e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036720();
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126c5a30;
  _objc_alloc();
  lVar30 = (long)_DAT_1127399e8;
  lVar2 = param_5 + lVar30;
  _objc_loadWeakRetained();
  lVar10 = lVar2;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_1127399ec;
  lVar4 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + _DAT_1127399f0;
  _objc_loadWeakRetained();
  lVar12 = lVar6;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + _DAT_1127399f4;
  _objc_loadWeakRetained();
  lVar13 = lVar3;
  func_0x00010bf44e60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5 + _DAT_1127399f8;
  _objc_loadWeakRetained();
  lVar14 = lVar5;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5 + _DAT_1127399fc;
  _objc_loadWeakRetained();
  lVar29 = (long)_DAT_112739a0c;
  lVar16 = param_5 + lVar29;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112739a10;
  lVar18 = param_5 + lVar33;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_5 + lVar33;
  _objc_loadWeakRetained();
  lVar20 = lVar33;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_5 + _DAT_112739a14;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_5 + _DAT_112739a18;
  _objc_loadWeakRetained();
  lVar25 = param_5 + _DAT_112739a1c;
  _objc_loadWeakRetained();
  func_0x00010c02cbc0();
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar33);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar2);
  lVar30 = param_5 + lVar30;
  _objc_loadWeakRetained(lVar30);
  lVar2 = lVar30;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8920();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar30);
  lVar2 = param_5 + _DAT_112739a20;
  _objc_loadWeakRetained();
  lVar18 = lVar2;
  func_0x00010c0b6f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar26 = PTR_PTR_1126c5a38;
  _objc_alloc();
  lVar2 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar16 = lVar2;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar15 = lVar4;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e800(param_1,param_2,param_3,param_4);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar2);
  puVar27 = PTR_PTR_1126c5a40;
  _objc_alloc();
  lVar2 = param_5 + _DAT_112739a24;
  _objc_loadWeakRetained();
  lVar4 = param_5 + _DAT_112739a28;
  _objc_loadWeakRetained();
  lVar16 = lVar4;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_5 + lVar31;
  _objc_loadWeakRetained();
  lVar5 = lVar31;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05aa20();
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar31);
  _objc_release(lVar15);
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar28 = PTR_PTR_1126c5a48;
  _objc_alloc();
  lVar2 = param_5 + _DAT_112739a2c;
  _objc_loadWeakRetained(lVar2);
  lVar4 = param_5 + _DAT_112739a30;
  _objc_loadWeakRetained();
  lVar16 = lVar4;
  func_0x00010bf8ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + _DAT_112739a34;
  _objc_loadWeakRetained();
  lVar15 = lVar6;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_5 + lVar29;
  _objc_loadWeakRetained();
  lVar5 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + _DAT_112739a38;
  _objc_loadWeakRetained();
  func_0x00010c00e840();
  uVar32 = *(undefined8 *)(param_5 + _DAT_112739a3c);
  *(undefined **)(param_5 + _DAT_112739a3c) = puVar28;
  _objc_release(uVar32);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar29);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105ed5e60;
  puStack_98 = &UNK_110842e18;
  lStack_90 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_b0);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(lVar18);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar1);
  return;
}



/* Entry: 105ed5e60; end: 105ed5e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ed5e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112739a3c),
             PTR_s_startWorkflow_112672168);
  return;
}


