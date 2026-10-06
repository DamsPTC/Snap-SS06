/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005c3e54; end: 1005c3e6b; -[SCBlizzardDLLNode prev] */

void FUN_1005c3e54(long param_1)

{
  func_0x000107c61148(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005c3e6c; end: 1005c3eb3; -[SCBlizzardPrioritizedQueue isOverTTL:currentTime:] */

bool FUN_1005c3e6c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  func_0x000107c40c6c(param_3);
  func_0x000107c43460(param_1);
  return param_3 < (ulong)(param_4 - param_1);
}



/* Entry: 1005c3eb4; end: 1005c3ebb; -[SCBlizzardPrioritizedQueue fileTTLInMs] */

undefined8 FUN_1005c3eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005c3ebc; end: 1005c3efb;  */

void FUN_1005c3ebc(void)

{
  func_0x000107c61168(&PTR_PTR_112edaa28);
  return;
}



/* Entry: 1005c3efc; end: 1005c3f73; -[SCBlizzardAllTiersFileQueue _removeFilesAndLogStatus:isSpectrum:] */

/* WARNING: Possible PIC construction at 0x0001005c3f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005c3f50) */

void FUN_1005c3efc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    func_0x000107c4ff1c(param_1,param_2,param_3);
  }
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1005c3f74; end: 1005c43f3; -[SCBlizzardAllTiersFileQueue _logEventsEvictionMetrics:isSpectrum:reason:] */

void FUN_1005c3f74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar3 = param_3;
  func_0x000107c40808();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    func_0x000107c61174(param_3);
    lVar3 = param_3;
    func_0x000107c4080c();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          func_0x000107c61128(param_3);
        }
        ppuVar13 = *(undefined ***)(lVar12 * 8);
        func_0x000107c42aa4(ppuVar13);
        func_0x000107c43400(ppuVar13);
        ppuVar7 = ppuVar13;
        func_0x000107c4be04();
        func_0x000107c61180();
        ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar1 = ppuVar7;
        }
        func_0x000107c61174(ppuVar1);
        func_0x000107c61170(ppuVar7);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar8 = puVar4;
        func_0x000107c4d9e8(puVar4);
        func_0x000107c61180();
        func_0x000107c5d388();
        func_0x000107c43400(ppuVar13);
        func_0x000107c4d974(puVar9);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar4);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar8 = puVar5;
        func_0x000107c4d9e8(puVar5);
        func_0x000107c61180();
        func_0x000107c5d388();
        func_0x000107c42aa4(ppuVar13);
        func_0x000107c4d974(puVar9);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar8 = puVar6;
        func_0x000107c4d9e8(puVar6);
        func_0x000107c61180();
        func_0x000107c5d388();
        func_0x000107c4d974(puVar9);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar6);
        func_0x000107c61170(ppuVar1);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_3);
    uVar10 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    func_0x000106ac339c();
    func_0x000107c61170(uVar10);
    uVar10 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    func_0x000106ac316c();
    func_0x000107c61170(uVar10);
    uVar10 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    func_0x000106ac279c();
    func_0x000107c61170(uVar10);
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    func_0x000106ac256c();
    func_0x000107c61170(param_1);
    func_0x000107c61174(param_5);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar5);
    func_0x000107c429c4(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61168(&PTR_PTR_1129a3858);
  return;
}



/* Entry: 1005c43f4; end: 1005c4433;  */

void FUN_1005c43f4(void)

{
  func_0x000107c61168(&PTR_PTR_1129a3858);
  return;
}



/* Entry: 1005c4434; end: 1005c4897; -[SCBlizzardAllTiersFileQueue addEvents:eventCounts:highestPriority:region:isFrame:isSpectrum:eventNames:eagerUploadId:] */

void FUN_1005c4434(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8,undefined *param_9,
                  undefined8 param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  lVar3 = param_1;
  func_0x000107c3b86c();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c43450();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c516c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
    if (param_9 == (undefined *)0x0) goto LAB_1005c4750;
    func_0x000107c61174(param_9);
    param_4 = (undefined *)0x0;
    puVar8 = param_9;
    func_0x000107c4080c();
    lVar4 = lRam0000000000000000;
    while (puVar12 = param_9, puVar8 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          func_0x000107c61128(param_9);
        }
        lVar9 = param_1;
        func_0x000107c44490(param_1);
        func_0x000107c61180();
        func_0x000106ac4138();
        func_0x000107c61170(lVar9);
        puVar12 = puVar12 + 1;
      } while (puVar8 != puVar12);
      param_4 = (undefined *)0x0;
      puVar8 = param_9;
      func_0x000107c4080c();
    }
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d698(param_1);
    func_0x000107c61170(puVar8);
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c44e6c();
    func_0x000107c51804();
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126d0348;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
    if (param_7 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8118;
    if (param_8 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db8138;
    }
    func_0x000107c61174(ppuVar2);
    func_0x000107c61174(ppuVar1);
    func_0x000107c3ab18(puVar8);
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    puVar7 = puVar8;
    func_0x000107c4d9c0(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    lVar4 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    lVar9 = lVar5;
    func_0x000107c43400(lVar5);
    FUN_10077f008(lVar4,ppuVar1,ppuVar2,puVar12,puVar7,lVar9);
    func_0x000107c61170(lVar4);
    lVar4 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    lVar9 = lVar5;
    func_0x000107c43400(lVar5);
    FUN_10077f35c(lVar4,ppuVar1,ppuVar2,puVar12,puVar7,lVar9);
    func_0x000107c61170(lVar4);
    lVar4 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    lVar9 = lVar5;
    func_0x000107c42aa4(lVar5);
    FUN_10077f6b4(lVar4,ppuVar1,ppuVar2,puVar12,puVar7,lVar9);
    func_0x000107c61170(lVar4);
    lVar4 = param_1;
    func_0x000107c44490(param_1);
    func_0x000107c61180();
    FUN_10077fa10();
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(lVar4);
    param_4 = param_9;
    func_0x000107c3b5e4(param_1);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(ppuVar1);
  }
  func_0x000107c61170(puVar12);
LAB_1005c4750:
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    func_0x000107c60e78();
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar10 = param_3;
    if (((ulong)param_4 & 1) == 0) {
      func_0x000107c4f7e0();
      func_0x000107c61180();
    }
    else {
      func_0x000107c4f7e4();
      func_0x000107c61180();
    }
    func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  return;
}



/* Entry: 1005c4898; end: 1005c4903; -[SCBlizzardAllTiersFileQueue _getLogQueueNameWithPriority:isSpectrum:] */

void FUN_1005c4898(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar1 = param_1;
  if ((param_4 & 1) == 0) {
    func_0x000107c4f7e0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c4f7e4();
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005c4904; end: 1005c499f; -[SCBlizzardConfigAdapter queueNameForBlizzardPriority:] */

void FUN_1005c4904(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x000107c4f258();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  ppuVar3 = param_1;
  func_0x000107c4d9e8(param_1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6ca58;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x000107c61174(ppuVar1);
  func_0x000107c61170(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1005c49a0; end: 1005c49a7; -[SCBlizzardConfigAdapter priorityQueueNameMap] */

undefined8 FUN_1005c49a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005c49a8; end: 1005c4dab; -[SCBlizzardFileRepository saveToDisk:eventCounts:highestPriority:logQueueName:region:isFrame:isSpectrum:eagerUploadId:] */

void FUN_1005c49a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,char param_9,
                  undefined4 param_10,undefined8 param_11)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_11);
  lVar8 = param_1;
  func_0x000107c43458();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c3c4d0(param_1);
  func_0x000107c61180();
  lVar7 = lVar8;
  func_0x000107c409dc();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar8);
  if ((int)lVar7 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar8 = param_1;
    func_0x000107c5c9f8(param_1);
    func_0x000107c61180();
    lVar6 = lVar8;
    func_0x000107c40ef8();
    func_0x000107c61180();
    func_0x000107c3b19c();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar8);
    piVar1 = (int *)(param_1 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x000107c40058();
    func_0x000107c61180();
    if (lVar8 != 0) {
      func_0x000107c61174(lVar8);
      func_0x000107c61170(param_3);
      param_3 = lVar8;
    }
    lVar6 = param_1;
    func_0x000107c3b7d8();
    func_0x000107c61180();
    lVar7 = param_1;
    func_0x000107c3b7e4();
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126d0390;
    func_0x000107c610f4(PTR_PTR_1126d0390);
    func_0x000107c4adac(param_3);
    func_0x000107c467cc(puVar9);
    lVar10 = param_1;
    func_0x000107c43458();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c51684();
    func_0x000107c61170(lVar10);
    puVar14 = PTR_PTR_1126d0348;
    func_0x000107c3ab18(PTR_PTR_1126d0348);
    func_0x000107c61180();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    puVar13 = puVar14;
    func_0x000107c4d9c0(puVar14);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8118;
    if (param_8 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db8138;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110db8118;
    if (param_9 == '\0') {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db8138;
    }
    if ((int)lVar11 == 0) {
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
      func_0x000106ac4368(uVar15,ppuVar2,ppuVar3,puVar14,puVar13,param_4);
      func_0x000107c61170(puVar14);
      puVar14 = (undefined *)0x0;
    }
    else {
      FUN_10077e04c(uVar15,&PTR____CFConstantStringClassReference_110e6dab8,ppuVar2,ppuVar3,param_6,
                    puVar13,1);
      FUN_10077e420(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e6dab8
                    ,ppuVar2,ppuVar3,param_6,puVar13,param_4);
      func_0x000107c61174(puVar9);
      puVar14 = puVar9;
    }
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar8);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1005c4dac; end: 1005c4eb3; -[SCBlizzardFileSystem createDirectoryAtPath:] */

ulong FUN_1005c4dac(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_3);
  uVar4 = 1;
  uVar1 = param_1;
  func_0x000107c43434();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4341c();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c43474(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c43434();
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000107c409e4();
    func_0x000107c61170(uVar1);
    if ((uVar4 & 1) == 0) {
      func_0x000107c44490(param_1);
      func_0x000107c61180();
      func_0x000106ac49fc();
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 1005c4eb4; end: 1005c4f13;  */

void FUN_1005c4eb4(void)

{
  func_0x000107c61168(&PTR_PTR_11296b9f8);
  return;
}



/* Entry: 1005c4f14; end: 1005c4f93;  */

void FUN_1005c4f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee3930,&UNK_10db0e9b0);
  puVar1 = &UNK_11058a278;
  func_0x000107c613fc(&UNK_11058a278,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100689c94,puVar1);
  return;
}



/* Entry: 1005c4f94; end: 1005c4fb3;  */

void FUN_1005c4f94(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4828);
  return;
}



/* Entry: 1005c4fb4; end: 1005c4fd3;  */

void FUN_1005c4fb4(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4730);
  return;
}



/* Entry: 1005c4fd4; end: 1005c5193;  */

void FUN_1005c4fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112edb4e8,&UNK_10db09490);
  puVar1 = &UNK_110586528;
  func_0x000107c613fc(&UNK_110586528,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_100760d10,puVar1);
  return;
}



/* Entry: 1005c5194; end: 1005c51b3;  */

void FUN_1005c5194(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005c51b4; end: 1005c5203;  */

void FUN_1005c51b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005c5204; end: 1005c536f;  */

void FUN_1005c5204(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10075c890,param_1);
  return;
}



/* Entry: 1005c5370; end: 1005c53af;  */

void FUN_1005c5370(void)

{
  func_0x000107c61168(&PTR_PTR_112edaf60);
  return;
}



/* Entry: 1005c53b0; end: 1005c53fb;  */

void FUN_1005c53b0(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005db1d8,param_1);
  return;
}



/* Entry: 1005c53fc; end: 1005c5417;  */

void FUN_1005c53fc(undefined8 param_1)

{
  FUN_1000285a8(0x112ef46e0,&UNK_10db23578);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100689c20,param_1);
  return;
}



/* Entry: 1005c5418; end: 1005c5467;  */

void FUN_1005c5418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005c5468; end: 1005c5487;  */

void FUN_1005c5468(void)

{
  func_0x000107c61168(&PTR_PTR_11288bd58);
  return;
}



/* Entry: 1005c5488; end: 1005c54d3;  */

void FUN_1005c5488(undefined8 param_1)

{
  FUN_1000285a8(0x112ef40b8,&UNK_10db22c58);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007591ec,param_1);
  return;
}



/* Entry: 1005c54d4; end: 1005c54ef;  */

void FUN_1005c54d4(undefined8 param_1)

{
  FUN_1000285a8(0x112d6aec8,&UNK_10d92e380);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10075c874,param_1);
  return;
}



/* Entry: 1005c54f0; end: 1005c553f;  */

void FUN_1005c54f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005c5540; end: 1005c555f;  */

void FUN_1005c5540(void)

{
  func_0x000107c61168(&PTR_PTR_112ed73a0);
  return;
}



/* Entry: 1005c5560; end: 1005c55b3;  */

void FUN_1005c5560(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10075c210,param_1);
  return;
}



/* Entry: 1005c55b4; end: 1005c55ff;  */

void FUN_1005c55b4(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100689854,param_1);
  return;
}



/* Entry: 1005c5600; end: 1005c561b;  */

void FUN_1005c5600(undefined8 param_1)

{
  FUN_1000285a8(0x112ee2a30,&UNK_10db0dab0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102a32444,param_1);
  return;
}



/* Entry: 1005c561c; end: 1005c56fb;  */

void FUN_1005c561c(void)

{
  func_0x000107c61168(&PTR_PTR_1129beb80);
  return;
}



/* Entry: 1005c56fc; end: 1005c5747;  */

void FUN_1005c56fc(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100759228,param_1);
  return;
}



/* Entry: 1005c5748; end: 1005c5767;  */

void FUN_1005c5748(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7d60);
  return;
}



/* Entry: 1005c5768; end: 1005c576f; -[SCBlizzardFileRepository timeProvider] */

undefined8 FUN_1005c5768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1005c5770; end: 1005c5797; -[SCBlizzardFileRepository _convertToMillisFromDate:] */

long FUN_1005c5770(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5c9e4(param_4);
  return (long)(param_1 * 1000.0);
}



/* Entry: 1005c5798; end: 1005c583b; -[SCBlizzardFileCompressor compressData:] */

void FUN_1005c5798(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000107c4005c();
    lVar2 = param_1;
    func_0x000107c3b0dc(param_1,param_2,uVar1);
    if (((int)lVar2 != 0) && (uVar3 = param_3, func_0x000107c4adac(), uVar1 <= uVar3)) {
      func_0x000107c3b0d4(param_1,param_2,param_3);
      func_0x000107c61180();
      goto LAB_1005c5804;
    }
    func_0x000107c3c31c(param_1,param_2,&PTR____CFConstantStringClassReference_110e6d998,
                        &PTR____CFConstantStringClassReference_110de9cd8);
  }
  param_1 = 0;
LAB_1005c5804:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005c583c; end: 1005c58c7; -[SCBlizzardExperimentProvider compressFileThresholdBytes] */

long FUN_1005c583c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa0;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c4980c();
    func_0x000107c61170(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(int)lVar2);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    func_0x000107c61170(uVar4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  func_0x000107c49804(lVar1);
  return (long)(int)lVar1;
}



/* Entry: 1005c58c8; end: 1005c591b;  */

void FUN_1005c58c8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005d9664,param_1);
  return;
}



/* Entry: 1005c591c; end: 1005c595b;  */

void FUN_1005c591c(void)

{
  func_0x000107c61168(&PTR_PTR_112883140);
  return;
}



/* Entry: 1005c595c; end: 1005c5967; -[SCBlizzardFileCompressor _compressionStudyEnabled:] */

bool FUN_1005c595c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 1005c5968; end: 1005c597b; -[SCBlizzardFileCompressor _reportGrapheneCompressorOperationStatusWithOperation:status:] */

void FUN_1005c5968(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + 8);
    func_0x000107c61174(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_78,puVar2);
    func_0x000107c61174(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      func_0x000107c61178(param_4);
      puVar2 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    FUN_10002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095b840,&uStack_98,1);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  func_0x000107c61170(param_4);
  puVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974();
  func_0x000107c61180();
  func_0x000107c47b54(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c3ff50(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5c170();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  if (cStack_a0 != '\0') {
    func_0x000107c5c170(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1005c597c; end: 1005c5bab;  */

void FUN_1005c597c(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_78,puVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      func_0x000107c61178(param_3);
      puVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095b840,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  func_0x000107c61170(param_3);
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974();
  func_0x000107c61180();
  func_0x000107c47b54(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c3ff50(puVar1);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c170();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  if (cStack_a0 != '\0') {
    func_0x000107c5c170(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005c5bac; end: 1005c5d47; -[SCBlizzardFileRepository _generateFileNameWithEventCount:creationTime:highestPriority:dedupeId:isFrame:isSpectrum:isCompressed:] */

void FUN_1005c5bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  func_0x000107c61180();
  func_0x000107c47b54(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c3ff50(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c170();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  if (param_9 != '\0') {
    func_0x000107c5c170(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6da98);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005c5d48; end: 1005c5da7;  */

void FUN_1005c5d48(void)

{
  func_0x000107c61168(&PTR_PTR_11296bba0);
  return;
}



/* Entry: 1005c5da8; end: 1005c5df3;  */

void FUN_1005c5da8(undefined8 param_1)

{
  FUN_1000285a8(0x112eef9a8,&UNK_10db1f510);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100760ca8,param_1);
  return;
}



/* Entry: 1005c5df4; end: 1005c5e13;  */

void FUN_1005c5df4(void)

{
  func_0x000107c61168(&PTR_PTR_112888b58);
  return;
}



/* Entry: 1005c5e14; end: 1005c5e5f;  */

void FUN_1005c5e14(undefined8 param_1)

{
  FUN_1000285a8(0x112ef6620,&UNK_10db24c20);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102b5275c,param_1);
  return;
}



/* Entry: 1005c5e60; end: 1005c5e7f;  */

void FUN_1005c5e60(void)

{
  func_0x000107c61168(&PTR_PTR_11288d580);
  return;
}



/* Entry: 1005c5e80; end: 1005c5eff; -[SCBlizzardFileSystem saveJsonData:toPath:] */

undefined8
FUN_1005c5e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c51678(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1005c5f00; end: 1005c60db; -[SCBlizzardFileSystem saveData:toFileAtPath:] */

/* WARNING: Removing unreachable block (ram,0x0001005c5f94) */

undefined8 FUN_1005c5f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5e910();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61174(0);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(0);
  return uVar1;
}



/* Entry: 1005c60dc; end: 1005c6117;  */

void FUN_1005c60dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005c6118; end: 1005c6147;  */

void FUN_1005c6118(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adc30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1005c6148; end: 1005c6167;  */

void FUN_1005c6148(void)

{
  func_0x000107c61168(&PTR_PTR_112edada0);
  return;
}



/* Entry: 1005c6168; end: 1005c61f7; -[SCNSDataWriterImpl writeData:path:options:context:error:] */

undefined8
FUN_1005c6168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c61174(param_3);
  func_0x000107c43478(puVar1);
  func_0x000107c61180();
  uVar2 = param_3;
  FUN_1005c61f8(param_3,puVar1,param_5,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return uVar2;
}



/* Entry: 1005c61f8; end: 1005c64ff;  */

undefined8 * FUN_1005c61f8(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  int iVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if ((param_3 & 1) == 0) {
    func_0x000107c61174();
    param_4 = param_1;
    func_0x000107c5e9b8();
    puVar5 = param_1;
    goto LAB_1005c649c;
  }
  puVar3 = param_1;
  func_0x000107c61174(param_1);
  FUN_1005c6500();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lRam00000001137fdef0 != -1) {
    FUN_10002a2fc(0x1137fdef0,&PTR___NSConcreteGlobalBlock_110d987e8);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1137fdee0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam00000001137fdee0 = lRam00000001137fdee0 + 1;
    }
  } while (cVar1 != '\0');
  func_0x000107c51804(puVar4);
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c5c168(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c43478();
  func_0x000107c61180();
  puVar3 = param_1;
  func_0x000107c5e9b8();
  func_0x000107c61170(param_1);
  if (((ulong)puVar3 & 1) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      iVar12 = (int)*(undefined8 *)PTR__NSPOSIXErrorDomain_110345598;
      puVar10 = (undefined *)*param_4;
      func_0x000107c42210(puVar10);
      func_0x000107c61180();
      func_0x000107c49d0c();
      if (iVar12 != 0) {
        func_0x000107c3fcb0(*param_4);
      }
LAB_1005c647c:
      func_0x000107c61170(puVar10);
      param_4 = (undefined8 *)0x0;
    }
  }
  else {
    puVar10 = puVar4;
    func_0x000107c4e430();
    func_0x000107c61180();
    puVar6 = puVar10;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    func_0x000107c61170(puVar10);
    uVar7 = param_2;
    func_0x000107c4e430(param_2);
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    func_0x000107c61170(uVar7);
    func_0x000107c612d4(puVar6,uVar8);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar6 == 0) {
      param_4 = (undefined8 *)0x1;
    }
    else if (param_4 != (undefined8 *)0x0) {
      func_0x000107c60e5c();
      func_0x000107c51804();
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f4();
      func_0x000107c60e5c();
      func_0x000107c466bc();
      func_0x000107c61104();
      *param_4 = puVar9;
      func_0x000107c61170(puVar6);
      goto LAB_1005c647c;
    }
  }
  func_0x000107c61170(puVar4);
LAB_1005c649c:
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    func_0x000107c60e78();
    if (lRam00000001137fdf30 != -1) {
      FUN_10002a2fc(0x1137fdf30,&PTR___NSConcreteGlobalBlock_110d98868);
    }
    puVar5 = puRam00000001137fdf28;
    func_0x000107c61174(puRam00000001137fdf28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  return param_4;
}



/* Entry: 1005c6500; end: 1005c6553;  */

void FUN_1005c6500(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf30 != -1) {
    FUN_10002a2fc(0x1137fdf30,&PTR___NSConcreteGlobalBlock_110d98868);
  }
  uVar1 = uRam00000001137fdf28;
  func_0x000107c61174(uRam00000001137fdf28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005c6554; end: 1005c67eb;  */

void FUN_1005c6554(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_51;
  
  FUN_1000f73a0();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5c168();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5c168();
  func_0x000107c61180();
  cStack_51 = '\0';
  puVar6 = PTR_PTR_1126b24e8;
  func_0x000107c409e8();
  if (((int)puVar6 != 0) && (puVar6 = puVar4, func_0x000107c4341c(), (int)puVar6 != 0)) {
    if (cStack_51 == '\x01') {
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c43474();
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c60ec8();
      func_0x000107c51804(puVar6);
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c3ac04(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c43474(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x000107c61180();
      func_0x000107c4d13c(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
    }
    else {
      func_0x000107c4ff4c(puVar4);
    }
  }
  uStack_60 = 0;
  puVar6 = puVar4;
  func_0x000107c409e0();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar9 = 0x11;
  FUN_1000819a8(0x11,0);
  func_0x000107c61180();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10061ab74;
  puStack_70 = &UNK_110842e18;
  func_0x000107c61174(uVar5);
  uStack_68 = uVar5;
  FUN_10007380c(uVar9,&puStack_88);
  func_0x000107c61170();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000107c60b1c();
    func_0x000107c61180();
  }
  else {
    uVar9 = uVar3;
    func_0x000107c5c170();
    func_0x000107c61180();
  }
  uVar1 = uRam00000001137fdf28;
  uRam00000001137fdf28 = uVar9;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1005c67ec; end: 1005c688f;  */

void FUN_1005c67ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eecf30,&UNK_10db1af50);
  puVar1 = &UNK_110598838;
  func_0x000107c613fc(&UNK_110598838,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102aed688,puVar1);
  return;
}



/* Entry: 1005c6890; end: 1005c68eb;  */

void FUN_1005c6890(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005c68ec; end: 1005c6937;  */

void FUN_1005c68ec(undefined8 param_1)

{
  FUN_1000285a8(0x112ef3ee0,&UNK_10db22a10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005d9508,param_1);
  return;
}



/* Entry: 1005c6938; end: 1005c69cf;  */

void FUN_1005c6938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ef3ee8,&UNK_10dbb6950);
  puVar1 = &UNK_11059e618;
  func_0x000107c613fc(&UNK_11059e618,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1005d8b80,puVar1);
  return;
}



/* Entry: 1005c69d0; end: 1005c6ae3;  */

void FUN_1005c69d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ef40c0,&UNK_10db22cd8);
  puVar1 = &UNK_11059e800;
  func_0x000107c613fc(&UNK_11059e800,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_1006892e4,puVar1);
  return;
}



/* Entry: 1005c6ae4; end: 1005c6aff;  */

void FUN_1005c6ae4(undefined8 param_1)

{
  FUN_1000285a8(0x112ee2a38,&UNK_10db0dab8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102a323b4,param_1);
  return;
}



/* Entry: 1005c6b00; end: 1005c6c3f;  */

void FUN_1005c6b00(void)

{
  func_0x000107c61168(&PTR_PTR_1129268b0);
  return;
}



/* Entry: 1005c6c40; end: 1005c6c5b;  */

void FUN_1005c6c40(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cbe8,&UNK_10dbb69b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10075bcbc,param_1);
  return;
}



/* Entry: 1005c6c5c; end: 1005c6cab;  */

void FUN_1005c6c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005c6cac; end: 1005c6cc7;  */

void FUN_1005c6cac(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cd10,&UNK_10dbb75a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006e2a40,param_1);
  return;
}



/* Entry: 1005c6cc8; end: 1005c6d17;  */

void FUN_1005c6cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005c6d18; end: 1005c6d4f;  */

void FUN_1005c6d18(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cd38,&UNK_10dbb75a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10336a464,param_1);
  return;
}



/* Entry: 1005c6d50; end: 1005c6d6f;  */

void FUN_1005c6d50(void)

{
  func_0x000107c61168(&PTR_PTR_11296cbe8);
  return;
}



/* Entry: 1005c6d70; end: 1005c6da7;  */

void FUN_1005c6d70(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cd30,&UNK_10dbb7598);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100731a4c,param_1);
  return;
}



/* Entry: 1005c6da8; end: 1005c6dc7;  */

void FUN_1005c6da8(void)

{
  func_0x000107c61168(&PTR_PTR_11295ee58);
  return;
}



/* Entry: 1005c6dc8; end: 1005c6de3;  */

void FUN_1005c6dc8(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cbe0,&UNK_10dbb69b0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103369380,param_1);
  return;
}



/* Entry: 1005c6de4; end: 1005c6e03;  */

void FUN_1005c6de4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8ff0);
  return;
}



/* Entry: 1005c6e04; end: 1005c6e1f;  */

void FUN_1005c6e04(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cbd0,&UNK_10dbb6940);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007e730c,param_1);
  return;
}



/* Entry: 1005c6e20; end: 1005c6fdf;  */

void FUN_1005c6e20(void)

{
  func_0x000107c61168(&PTR_PTR_1129ad298);
  return;
}



/* Entry: 1005c6fe0; end: 1005c705f;  */

void FUN_1005c6fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee4048,&UNK_10db0f0b0);
  puVar1 = &UNK_11058b338;
  func_0x000107c613fc(&UNK_11058b338,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10076122c,puVar1);
  return;
}



/* Entry: 1005c7060; end: 1005c719f;  */

void FUN_1005c7060(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0d58);
  return;
}



/* Entry: 1005c71a0; end: 1005c7267;  */

void FUN_1005c71a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee40a0,&UNK_10db0f130);
  puVar1 = &UNK_11058b480;
  func_0x000107c613fc(&UNK_11058b480,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_100774ec8,puVar1);
  return;
}



/* Entry: 1005c7268; end: 1005c7287;  */

void FUN_1005c7268(void)

{
  func_0x000107c61168(&PTR_PTR_112f66ba8);
  return;
}



/* Entry: 1005c7288; end: 1005c72a7;  */

void FUN_1005c7288(void)

{
  func_0x000107c61168(&PTR_PTR_112ed7d58);
  return;
}



/* Entry: 1005c72a8; end: 1005c734b;  */

void FUN_1005c72a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f871d8,&UNK_10dbfb2c0);
  puVar1 = &UNK_110680800;
  func_0x000107c613fc(&UNK_110680800,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100770b0c,puVar1);
  return;
}



/* Entry: 1005c734c; end: 1005c740b;  */

void FUN_1005c734c(void)

{
  func_0x000107c61168(&PTR_PTR_11296d300);
  return;
}



/* Entry: 1005c740c; end: 1005c751f;  */

void FUN_1005c740c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee42b8,&UNK_10db0f350);
  puVar1 = &UNK_11058b818;
  func_0x000107c613fc(&UNK_11058b818,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_1005cef40,puVar1);
  return;
}



/* Entry: 1005c7520; end: 1005c753f;  */

void FUN_1005c7520(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4b60);
  return;
}



/* Entry: 1005c7540; end: 1005c755f;  */

void FUN_1005c7540(void)

{
  func_0x000107c61168(&PTR_PTR_112ef49e8);
  return;
}



/* Entry: 1005c7560; end: 1005c757b;  */

void FUN_1005c7560(undefined8 param_1)

{
  FUN_1000285a8(0x112ef4998,&UNK_10db23918);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005ceeec,param_1);
  return;
}



/* Entry: 1005c757c; end: 1005c75cb;  */

void FUN_1005c757c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005c75cc; end: 1005c76eb;  */

void FUN_1005c75cc(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4a88);
  return;
}



/* Entry: 1005c76ec; end: 1005c7873;  */

void FUN_1005c76ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f558d0,&UNK_10dbacc30);
  puVar1 = &UNK_110638058;
  func_0x000107c613fc(&UNK_110638058,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_15;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_16;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_17;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_7;
  *(undefined8 *)(puVar1 + 0x78) = param_12;
  *(undefined8 *)(puVar1 + 0x80) = param_13;
  *(undefined8 *)(puVar1 + 0x88) = param_14;
  *(undefined8 *)(puVar1 + 0x90) = param_3;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100767d28,puVar1);
  return;
}



/* Entry: 1005c7874; end: 1005c7893;  */

void FUN_1005c7874(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb448);
  return;
}



/* Entry: 1005c7894; end: 1005c7a43;  */

void FUN_1005c7894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f5cbf0,&UNK_10dbb6ab0);
  puVar1 = &UNK_110644af8;
  func_0x000107c613fc(&UNK_110644af8,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  FUN_1000823a8(FUN_100777b84,puVar1);
  return;
}



/* Entry: 1005c7a44; end: 1005c7aa3;  */

void FUN_1005c7a44(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8700);
  return;
}



/* Entry: 1005c7aa4; end: 1005c7b8f;  */

void FUN_1005c7aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f6ed50,&UNK_10dbcbd50);
  puVar1 = &UNK_110659740;
  func_0x000107c613fc(&UNK_110659740,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_100775778,puVar1);
  return;
}



/* Entry: 1005c7b90; end: 1005c7bcf;  */

void FUN_1005c7b90(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc7a8);
  return;
}



/* Entry: 1005c7bd0; end: 1005c7bf3;  */

void FUN_1005c7bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11067a400;
  FUN_1000285a8(0x112f845b0,&UNK_10dbf8750);
  func_0x000107c613fc(&UNK_11067a400,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100b5e4b4,puVar1);
  return;
}



/* Entry: 1005c7bf4; end: 1005c7c97;  */

void FUN_1005c7bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  FUN_1000285a8(param_5,param_6);
  func_0x000107c613fc(param_7,0x30,7);
  *(undefined8 *)(param_7 + 0x10) = param_3;
  *(undefined8 *)(param_7 + 0x18) = param_1;
  *(undefined8 *)(param_7 + 0x20) = param_2;
  *(undefined8 *)(param_7 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(param_8,param_7);
  return;
}


