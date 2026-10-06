/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c59770; end: 100c59777; -[SCUserSession lagunaId] */

undefined8 FUN_100c59770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c59778; end: 100c597d7; -[SCContentProductSnapRendererImpl registerPlugins:] */

/* WARNING: Possible PIC construction at 0x000100c597b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c597bc) */

void FUN_100c59778(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if ((*(long *)(param_1 + 0x10) == 0) && (lVar1 = param_3, func_0x000107c40808(), lVar1 != 0)) {
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c597d8; end: 100c5996f; -[SCSpectaclesProfile initWithUserId:lagunaId:authToken:userAgent:snapAdId:email:birthday:] */

undefined1 *
FUN_100c597d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126f8248;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c59970; end: 100c59a13; -[SCSpectaclesCrashManager initWithCrashLogger:usernameProvider:] */

undefined1 *
FUN_100c59970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eb690;
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



/* Entry: 100c59a14; end: 100c59de7; -[SCSpectaclesManager initWithSpectaclesProfile:usernameProvider:authorizationProvider:crashLogger:analyticsLogger:fideliusKeyProvider:networkConnectivityServices:deviceFeatureScopeExposer:deviceFeatureScopeServices:backgroundTaskWrapper:serverMetadataFetcher:announcer:centralManager:clientControllerScopeExposer:clientControllerScopeServices:workerQueue:] */

undefined8 *
FUN_100c59a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_70 = PTR_PTR_1126f7ab8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x000107c61184();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[1];
    puVar1[1] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[5];
    puVar1[5] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d2fd8;
    func_0x000107c610f4();
    uVar2 = param_3;
    func_0x000107c5d984(param_3);
    func_0x000107c61180();
    func_0x000107c491bc();
    uVar4 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d30b8;
    func_0x000107c610f4();
    uVar2 = param_3;
    func_0x000107c4a960(param_3);
    func_0x000107c61180();
    func_0x000107c456ac();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(puVar1[0xd]);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[3];
    puVar1[3] = param_18;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
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



/* Entry: 100c59de8; end: 100c59def; -[SCSpectaclesProfile userId] */

undefined8 FUN_100c59de8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c59df0; end: 100c59e6b; -[SCSpectaclesCache initWithUserId:] */

undefined1 * FUN_100c59df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8240;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c3b1e8(puVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c59e6c; end: 100c59ed7; -[SCSpectaclesCache _createCacheIfNecessary] */

/* WARNING: Possible PIC construction at 0x000100c59ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c59ec8) */

void FUN_100c59e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  func_0x000107c5d954(param_1);
  func_0x000107c61180();
  func_0x000107c409e4(puVar1,param_2,param_1,1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c59ed8; end: 100c59eeb; -[SCSpectaclesCache userDirectory] */

void FUN_100c59ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d2fd8,PTR_s__directoryForUserId__11255e070,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100c59eec; end: 100c59f87; +[SCSpectaclesCache _directoryForUserId:] */

void FUN_100c59eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d2fd8;
  func_0x000107c61174(param_3);
  func_0x000107c5b714(puVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c3abe0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar3 = puVar1;
  func_0x000107c3ac08(puVar1,param_2,puVar2,1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c59f88; end: 100c5a003; +[SCSpectaclesCache spectaclesDirectory] */

void FUN_100c59f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000100088750();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c43474(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac08();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5a004; end: 100c5a0e3; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_100c5a004(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  if (param_4 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c4e524(uVar1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c5a0e4; end: 100c5a147; -[SCThrottledFriendsResponseFetcher didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_100c5a0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100c5a148;
  puStack_28 = &UNK_11089bba0;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x000107c4c614(param_3,param_2,&puStack_40,0,0);
  return;
}



/* Entry: 100c5a148; end: 100c5a1ab;  */

void FUN_100c5a148(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_2 == 1) && (param_3 == 5)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,1,*(undefined1 *)(param_1 + 0x28));
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 100c5a1ac; end: 100c5a1b7; -[SCFeedSnapchattersRepository didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_100c5a1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceDidUpdateWithAnnouncerI_112550850)
    ;
    return;
  }
  return;
}



/* Entry: 100c5a1b8; end: 100c5a1f7; -[SCFeedSnapchattersRepository _announceDidUpdateWithAnnouncerIdentifierForSelf] */

void FUN_100c5a1b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61158();
  func_0x000107c3dd38();
  func_0x000107c61180();
  func_0x000107c41e2c(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5a1f8; end: 100c5a203; +[SCFeedSnapchattersRepository announcerIdentifier] */

undefined ** FUN_100c5a1f8(void)

{
  return &PTR____CFConstantStringClassReference_110e52678;
}



/* Entry: 100c5a204; end: 100c5a283; -[SCUpdateListenerAnnouncer didUpdateWithAnnouncerIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5a204(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lStack_40 = param_3;
  uStack_38 = param_2;
  func_0x000107c61174();
  func_0x000107c5f1ec(&lStack_40);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 100c5a284; end: 100c5a28b;  */

void FUN_100c5a284(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  lVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c5fadc(uVar3,lVar1);
    }
    func_0x000107c41e2c(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 100c5a28c; end: 100c5a317;  */

void FUN_100c5a28c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c5fadc(uVar2,lVar1);
    }
    func_0x000107c41e2c(param_2);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100c5a318; end: 100c5a35b; -[SCPersonDataCoordinator didUpdateWithAnnouncerIdentifier:] */

void FUN_100c5a318(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61158();
  func_0x000107c41228();
  func_0x000107c61180();
  func_0x000107c41224(uVar1,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5a35c; end: 100c5a367; +[SCPersonDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_100c5a35c(void)

{
  return &PTR____CFConstantStringClassReference_110e52718;
}



/* Entry: 100c5a368; end: 100c5a4cb; -[SCFriendsFeedDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_100c5a368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126be618;
  func_0x000107c41228(PTR_PTR_1126be618);
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c49d0c();
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126cb158;
    func_0x000107c41228(PTR_PTR_1126cb158);
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c49d0c();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    if ((int)uVar3 == 0) goto LAB_100c5a488;
  }
  else {
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61144(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61174(param_3);
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c4e524(uVar3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_48);
LAB_100c5a488:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c5a4cc; end: 100c5a4d7; +[SCFriendsFeedLegacyGroupUpdatesDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_100c5a4cc(void)

{
  return &PTR____CFConstantStringClassReference_110e53038;
}



/* Entry: 100c5a4d8; end: 100c5a563;  */

/* WARNING: Possible PIC construction at 0x000100c5a530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5a54c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5a534) */
/* WARNING: Removing unreachable block (ram,0x000100c5a550) */

void FUN_100c5a4d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb160;
  func_0x000107c610f4(PTR_PTR_1126cb160);
  puVar2 = puVar1;
  func_0x00010011df08();
  func_0x000107c61180();
  func_0x000107c48e50(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 0x20),0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c5a564; end: 100c5a58f;  */

void FUN_100c5a564(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b4bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5a590; end: 100c5a5c7; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver _didEndSnapchattersFetchDataRequest] */

void FUN_100c5a590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40794(uVar1);
  func_0x000107c3ccb4(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c5a5c8; end: 100c5a67b; -[SCProfileArroyoStreaksSyncedFeedEntriesUpdateEventsObserver _updateSnapchatterStreakMetadata:] */

void FUN_100c5a5c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_105500824;
    puStack_30 = &UNK_110841f20;
    func_0x000107c61174(param_3);
    lStack_28 = param_3;
    func_0x000107c59480(uVar2,param_2,param_3,0,&puStack_48);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lStack_28);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c5a67c; end: 100c5a6ab; -[SCSnapchattersFetchDataRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c5a694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5a698) */

void FUN_100c5a67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100c5a6ac; end: 100c5a6b3; -[SCSpectaclesProfile lagunaId] */

undefined8 FUN_100c5a6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c5a6b4; end: 100c5a96b; -[SCSpectaclesDeviceStore initWithAnnouncer:cache:analyticsLogger:crashLogger:lagunaId:deviceFeatureScopeExposer:deviceFeatureScopeServices:backgroundTaskWrapper:clientControllerScopeExposer:clientControllerScopeServices:] */

undefined8 *
FUN_100c5a6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126f7a78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xf,param_5);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_12);
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = 0;
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



/* Entry: 100c5a96c; end: 100c5a977; -[SCSpectaclesDeviceStore setDelegate:] */

void FUN_100c5a96c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 100c5a978; end: 100c5a9f7; -[SCSpectaclesActivateDeviceFlow initWithSpectaclesManager:] */

undefined1 * FUN_100c5a978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eb610;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c3d740(*(undefined8 *)((long)puVar1 + 8));
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5a9f8; end: 100c5aa47; -[SCSpectaclesManager addListener:] */

/* WARNING: Possible PIC construction at 0x000100c5aa34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5aa38) */

void FUN_100c5a9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3dd34(param_1);
  func_0x000107c61180();
  func_0x000107c3d740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c5aa48; end: 100c5aa4f; -[SCSpectaclesManager announcer] */

undefined8 FUN_100c5aa48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c5aa50; end: 100c5ab37; -[SCSpectaclesBaseAnnouncer addListener:] */

/* WARNING: Possible PIC construction at 0x000100c5aaa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5aacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5aaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5ab08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5aad0) */
/* WARNING: Removing unreachable block (ram,0x000100c5aaa8) */
/* WARNING: Removing unreachable block (ram,0x000100c5aafc) */
/* WARNING: Removing unreachable block (ram,0x000100c5aaac) */
/* WARNING: Removing unreachable block (ram,0x000100c5ab0c) */

void FUN_100c5aa50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c4b6a8(param_1);
  func_0x000107c61180();
  func_0x000107c40404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5ab38; end: 100c5ab43; -[SCSpectaclesBaseAnnouncer listeners] */

void FUN_100c5ab38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 100c5ab44; end: 100c5ac3b;  */

bool FUN_100c5ab44(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  uVar3 = param_1;
  func_0x000107c40808();
  if (uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = param_1;
      func_0x000107c4eaf0(param_1,param_2,uVar3);
      bVar1 = uVar2 == param_3;
      if (bVar1) break;
      uVar3 = uVar3 + 1;
      uVar2 = param_1;
      func_0x000107c40808();
    } while (uVar3 < uVar2);
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c5ac3c; end: 100c5ac3f;  */

void FUN_100c5ac3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addPointer__11259c450);
  return;
}



/* Entry: 100c5ac40; end: 100c5ac47; -[SCSpectaclesBaseAnnouncer setListeners:] */

void FUN_100c5ac40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100c5ac48; end: 100c5ac4f; -[SCLagunaModule spectaclesManagingDataFlow] */

void FUN_100c5ac48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_managerDataFlow_11260bad0);
  return;
}



/* Entry: 100c5ac50; end: 100c5ac53; -[SCSpectaclesManager managerDataFlow] */

void FUN_100c5ac50(void)

{
  return;
}



/* Entry: 100c5ac54; end: 100c5afc3; -[SCSpectaclesFirmwareManager initWithServerMetadataFetcher:featureSettingsService:spectaclesManager:deviceActivationService:analyticsLogger:managingDataFlow:networkConnectivityMonitor:networkConnectivityServices:userTrackedLogger:temporaryFileWriter:crashLogger:] */

undefined8 *
FUN_100c5ac54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126eb660;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0(puVar1 + 2,param_5);
    func_0x000107c61174(param_6);
    uVar4 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[9];
    puVar1[9] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = puVar1[10];
    puVar1[10] = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_10);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_10;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_11);
    uVar4 = puVar1[6];
    puVar1[6] = param_11;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126c1868;
    func_0x000107c610fc();
    uVar4 = puVar1[0x20];
    puVar1[0x20] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_12);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_12;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_13);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_13;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126c1870;
    func_0x000107c610f4();
    func_0x000107c485ec();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126c1878;
    func_0x000107c610fc();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c610fc();
    uVar4 = puVar1[0x1f];
    puVar1[0x1f] = puVar2;
    func_0x000107c61170();
    func_0x00010011df08();
    func_0x000107c61180();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar4;
    func_0x000107c61170(uVar5);
    *(undefined1 *)(puVar1 + 0x1b) = 1;
    puVar3 = puVar1 + 2;
    func_0x000107c61148(puVar3);
    func_0x000107c3d740();
    func_0x000107c61170(puVar3);
  }
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



/* Entry: 100c5afc4; end: 100c5b0bf; -[SCSpectaclesFirmwareDownloader initWithServerMetadataFetcher:delegate:temporaryFileWriter:] */

undefined1 *
FUN_100c5afc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126eb658;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c1860;
    func_0x000107c610f4();
    puVar3 = puVar2;
    func_0x00010011df08();
    func_0x000107c61180();
    func_0x000107c485f8();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 0x18));
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5b0c0; end: 100c5b1c7; -[SCVersionResourceDownloader initWithServerMetadataFetcher:temporaryFileWriter:fileName:] */

undefined1 *
FUN_100c5b0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eb668;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c504e8(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5b1c8; end: 100c5b21f; -[SCVersionResourceDownloader reset] */

void FUN_100c5b1c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x100c5c520;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 100c5b220; end: 100c5b22b; -[SCVersionResourceDownloader setDelegate:] */

void FUN_100c5b220(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 100c5b22c; end: 100c5b5e3; -[SCSpectaclesHomeWifiManager initWithAuthorizationProvider:spectaclesManager:spectaclesManagingDataFlow:analyticsLogger:networkConnectivityServices:applicationLifecycleEvents:] */

undefined8 *
FUN_100c5b22c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1126eb618;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 6,param_4);
    func_0x000107c611a0(puVar1 + 7,param_5);
    func_0x000107c611a0(puVar1 + 8,param_6);
    lVar2 = param_3;
    (**(code **)(param_3 + 0x10))();
    func_0x000107c61180();
    uVar8 = puVar1[1];
    puVar1[1] = lVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c53fcc(puVar1[1]);
    func_0x000107c61174(param_7);
    uVar8 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar8);
    puVar3 = PTR_PTR_1126c1500;
    func_0x000107c610fc();
    uVar8 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar8);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar8 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar8);
    puVar4 = puVar1;
    func_0x000107c3b15c(puVar1);
    func_0x000107c61180();
    func_0x000107c611a0(puVar1 + 0xc,puVar4);
    func_0x000107c61170(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar8 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar8);
    puVar4 = puVar1;
    func_0x000107c5b73c(puVar1);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar8 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar8);
    func_0x000107c61144(auStack_88,puVar1);
    uVar8 = param_7;
    func_0x000107c5b9cc(param_7);
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c41000();
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_105a30d88;
    puStack_98 = &UNK_110843540;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar7 = uVar6;
    func_0x000107c5c320(uVar6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    uVar8 = param_8;
    func_0x000107c5bc9c(param_8);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar5 = uVar8;
    func_0x000107c5c320(uVar8);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c5b5e4; end: 100c5b677;  */

void FUN_100c5b5e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c5b678; end: 100c5b7c3; -[SCSpectaclesAuthorizationServiceProvider _createAuthorizationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5b678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c18a8;
  func_0x000107c610f4(PTR_PTR_1126c18a8);
  lVar8 = (long)_DAT_11272de4c;
  lVar2 = param_1 + lVar8;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_11272de50;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c51fc8();
  func_0x000107c61180();
  func_0x000107c4923c(puVar1,param_2,lVar4,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar7 = PTR_PTR_1126c18b0;
  func_0x000107c610f4(PTR_PTR_1126c18b0);
  param_1 = param_1 + lVar8;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c49224(puVar7,param_2,lVar5,puVar1);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c5b7c4; end: 100c5b89f; -[SCSpectaclesOAuth2 initWithUserId:serverMetadataFetcher:] */

undefined1 *
FUN_100c5b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eb680;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = 0;
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5b8a0; end: 100c5b97b; -[SCSpectaclesAuthorizationManager initWithUserId:oauth2:] */

undefined1 *
FUN_100c5b8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eb678;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5b97c; end: 100c5b987; -[SCSpectaclesAuthorizationManager setDelegate:] */

void FUN_100c5b97c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 100c5b988; end: 100c5bae7; -[SCSpectaclesHomeWifiManager _connectedDevice] */

void FUN_100c5b988(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = param_1 + 0x30;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c4197c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c4080c(uVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          func_0x000107c61128(uVar2);
        }
        uVar5 = *(ulong *)(lStack_118 + uVar7 * 8);
        uVar3 = uVar5;
        func_0x000107c40220();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c40208();
        if ((int)uVar4 == 0) {
          func_0x000107c61170(uVar3);
        }
        else {
          uVar4 = uVar5;
          func_0x000107c499a8();
          func_0x000107c61170(uVar3);
          if ((uVar4 & 1) != 0) {
            func_0x000107c61174(uVar5);
            goto LAB_100c5baa4;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = uVar2;
      func_0x000107c4080c(uVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar1 != 0);
  }
  uVar5 = 0;
LAB_100c5baa4:
  func_0x000107c61170(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c41968();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4197c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 100c5bae8; end: 100c5bb2b; -[SCSpectaclesManager devices] */

void FUN_100c5bae8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c41968();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4197c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c5bb2c; end: 100c5bb33; -[SCSpectaclesManager deviceStore] */

undefined8 FUN_100c5bb2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100c5bb34; end: 100c5bb3f; -[SCSpectaclesDeviceStore devices] */

void FUN_100c5bb34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 100c5bb40; end: 100c5bb57; -[SCSpectaclesHomeWifiManager spectaclesManager] */

void FUN_100c5bb40(long param_1)

{
  func_0x000107c61148(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c5bb58; end: 100c5bb5f; -[SCSpectaclesNetworkConnectivityServices ssidScanner] */

undefined8 FUN_100c5bb58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c5bb60; end: 100c5bb9f;  */

void FUN_100c5bb60(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c8a0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c5bba0; end: 100c5bc5f; -[SCSpectaclesEntryPoint _ssidScanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5bba0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0d38;
  func_0x000107c610f4(PTR_PTR_1126c0d38);
  lVar2 = param_1 + _DAT_11272d208;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + _DAT_11272d1a4;
  func_0x000107c61148(lVar3);
  lVar4 = lVar3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11272d22c;
  func_0x000107c61148(param_1);
  func_0x000107c47a48(puVar1,param_2,lVar2,lVar4,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c5bc60; end: 100c5bfcf; -[SCSpectaclesSsidScanner initWithNetworkConnectivityMonitorServices:circumstanceEngine:systemScope:] */

undefined8 *
FUN_100c5bc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_78 = PTR_PTR_1126f81e8;
  puVar2 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar7 = puVar2[5];
    puVar2[5] = puVar3;
    func_0x000107c61170(uVar7);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar7 = puVar2[1];
    puVar2[1] = puVar3;
    func_0x000107c61170(uVar7);
    uVar7 = param_3;
    func_0x000107c4d59c();
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c3ac40(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c44f08();
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c40a98();
    func_0x000107c61180();
    uVar8 = puVar2[7];
    puVar2[7] = uVar5;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_4);
    uVar7 = puVar2[8];
    puVar2[8] = param_4;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_5);
    uVar7 = puVar2[9];
    puVar2[9] = param_5;
    func_0x000107c61170(uVar7);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar7 = puVar2[10];
    puVar2[10] = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61144(auStack_88,puVar2);
    uVar6 = puVar2[7];
    func_0x000107c4d5a4(uVar6);
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x100c5c2f4;
    puStack_98 = &UNK_110876508;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar7 = uVar6;
    func_0x000107c5c320(uVar6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    uVar7 = param_3;
    func_0x000107c4d598(param_3);
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c4d5a4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar8 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    uVar1 = (undefined1)puVar2[8];
    func_0x000107c3ebd4();
    *(undefined1 *)(puVar2 + 2) = uVar1;
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100c5bfd0; end: 100c5bfdf; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices networkConnectivityMonitorFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5bfd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080ad8));
  return;
}



/* Entry: 100c5bfe0; end: 100c5bfff;  */

void FUN_100c5bfe0(void)

{
  func_0x000107c61168(&PTR_PTR_1127dbf28);
  return;
}



/* Entry: 100c5c000; end: 100c5c02b;  */

void FUN_100c5c000(undefined8 *param_1,undefined8 param_2)

{
  FUN_100c5bfe0();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 100c5c02c; end: 100c5c067; -[_TtC27NetworkConnectivityProvider37NetworkConnectivityMonitorFactoryImpl init] */

void FUN_100c5c02c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c5c068; end: 100c5c0d7; -[_TtC27NetworkConnectivityProvider37NetworkConnectivityMonitorFactoryImpl createNetworkConnectivityMonitor:] */

void FUN_100c5c068(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c5fadc();
  }
  puVar1 = PTR_PTR_1126a7570;
  func_0x000107c610f8(PTR_PTR_1126a7570);
  func_0x000107c46470();
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c5c0d8; end: 100c5c27f; -[SCNetworkConnectivityMonitor initWithDefaultHostName:] */

undefined8 * FUN_100c5c0d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112706368;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    lVar4 = param_3;
    func_0x000107c40794();
    uVar5 = puVar1[1];
    puVar1[1] = lVar4;
    func_0x000107c61170(uVar5);
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0xffffffffffffffff;
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar5 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar5 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar5);
    uVar5 = puVar1[6];
    puVar2 = PTR_PTR_1126e0188;
    func_0x000107c610f4(PTR_PTR_1126e0188);
    func_0x000107c4629c();
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(puVar2);
    if (param_3 != 0) {
      uVar5 = puVar1[2];
      func_0x000107c61174(puVar1);
      func_0x000107c4e524(uVar5);
      func_0x000107c61170(puVar1);
    }
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c5c280; end: 100c5c2cb; -[SCNetworkConnectivityChange initWithCurrentConnectivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5c280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113080b18) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c5c2cc; end: 100c5c31f; -[SCNetworkConnectivityMonitor networkConnectivityObservable] */

void FUN_100c5c2cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c5c320; end: 100c5c3c7; -[SCSpectaclesSsidScanner forceUpdate] */

void FUN_100c5c320(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100c5c3c8;
  puStack_38 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c5c3c8; end: 100c5c4c3;  */

void FUN_100c5c3c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\x01') {
      lVar2 = *(long *)(lVar1 + 0x48);
      func_0x000107c3df5c();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c3dfc0();
      func_0x000107c61170(lVar2);
      if (lVar3 == 2) goto LAB_100c5c494;
    }
    lVar3 = lVar1;
    func_0x000107c4e600(lVar1);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_38,param_1 + 0x20);
    func_0x000107c4e524(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61120(auStack_38);
  }
LAB_100c5c494:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100c5c4c4; end: 100c5c4cb; -[SCSpectaclesSsidScanner performer] */

undefined8 FUN_100c5c4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c5c4cc; end: 100c5c4f7;  */

void FUN_100c5c4cc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c43828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5c4f8; end: 100c5c567; -[SCSpectaclesSsidScanner currentSsidObservable] */

void FUN_100c5c4f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c5c568; end: 100c5c633; -[SCSpectaclesOnboardingManager initWithSpectaclesManager:featureSettingsService:onDemandResourceFetching:] */

undefined1 *
FUN_100c5c568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eba98;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5c634; end: 100c5c687;  */

/* WARNING: Possible PIC construction at 0x000100c5c674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5c678) */

void FUN_100c5c634(long param_1,undefined8 param_2)

{
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110894560);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b6ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5c688; end: 100c5c68f; -[SCLagunaModule spectaclesManager] */

undefined8 FUN_100c5c688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c5c690; end: 100c5c6af;  */

bool FUN_100c5c690(undefined8 param_1,long param_2)

{
  func_0x000107c406e8(param_2);
  return param_2 == 1;
}



/* Entry: 100c5c6b0; end: 100c5c7b7; -[SCGroupsDataUpdater _fetchSnapchattersForConversations:] */

void FUN_100c5c6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108942a0);
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar1);
  func_0x000107c4e524(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c5c7b8; end: 100c5c8c7; -[SCSpectaclesMemoriesEntryObserveGraph initWithPlaceholderProvider:performer:dataObjectContext:] */

undefined1 *
FUN_100c5c7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126f79e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5c8c8; end: 100c5c8d7; +[SCAttributedSpectaclesTask setupLagunaDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5c8c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c5c8d8; end: 100c5ca2b; -[SCNetworkConnectivityMonitor _startMonitoringNetworkReachability] */

void FUN_100c5c8d8(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_8c [4];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c3c374();
  lVar4 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3ac4c(uVar1);
  func_0x000107c60b38(lVar4,uVar1);
  func_0x000107c56a64(param_1);
  if (lVar4 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x100c6183c;
    puStack_48 = &UNK_110850658;
    func_0x000107c6111c(auStack_40,auStack_38);
    ppuVar2 = &puStack_60;
    func_0x000107c61184();
    uStack_88 = 0;
    pcStack_78 = FUN_100c5d094;
    puStack_70 = &UNK_10b2d17d8;
    uStack_68 = 0;
    lVar3 = lVar4;
    ppuStack_80 = ppuVar2;
    func_0x000107c60b44(lVar4,FUN_100c617d0,&uStack_88);
    func_0x000107c60808();
    func_0x000107c60b40(lVar4,lVar3,*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
    func_0x000107c60b3c(lVar4,auStack_8c);
    FUN_100c617d0();
    func_0x000107c61170(ppuVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}



/* Entry: 100c5ca2c; end: 100c5ca8b; -[SCNetworkConnectivityMonitor _resetNetworkReachability] */

void FUN_100c5ca2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c4d5d0();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c60808();
    func_0x000107c60b48(lVar1,lVar2,*(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
    func_0x000107c607f0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cc4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNetworkReachability__112650b58,0);
    return;
  }
  return;
}



/* Entry: 100c5ca8c; end: 100c5cabf; -[SCNetworkConnectivityMonitor networkReachability] */

undefined8 FUN_100c5ca8c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c611f0(param_1 + 0x18);
  return uVar1;
}



/* Entry: 100c5cac0; end: 100c5cba7;  */

void FUN_100c5cac0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148(lVar1);
  func_0x000107c6111c(auStack_48,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  func_0x000107c3b6d0(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100c5cba8; end: 100c5cc77;  */

void FUN_100c5cba8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148(lVar1);
  func_0x000107c6111c(auStack_48,param_1 + 0x30);
  func_0x000107c3cd58(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c5cc78; end: 100c5ccdb;  */

/* WARNING: Possible PIC construction at 0x000100c5ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5ccc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5ccb8) */
/* WARNING: Removing unreachable block (ram,0x000100c5cccc) */

void FUN_100c5cc78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61174(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c5ccdc; end: 100c5cce7; -[SCGalleryLagunaContentDataSource setDelegate:] */

void FUN_100c5ccdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 100c5cce8; end: 100c5cd2f;  */

/* WARNING: Possible PIC construction at 0x000100c5cd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5cd20) */

void FUN_100c5cce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3ad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c5cd30; end: 100c5cd3f;  */

void FUN_100c5cd30(void)

{
  return;
}



/* Entry: 100c5cd40; end: 100c5cd8b;  */

void FUN_100c5cd40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  func_0x000107c3b24c();
  func_0x000107c61170(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c5cd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 100c5cd8c; end: 100c5ce2f; -[SCCameraDefaultFeatureActivatorImpl _createFeatures] */

void FUN_100c5cd8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x40;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c3f0b8();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x000107c4b944(*(undefined8 *)(param_1 + 8));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelFeatureActivation_1125a92a0);
  return;
}



/* Entry: 100c5ce30; end: 100c5cf37;  */

/* WARNING: Possible PIC construction at 0x000100c5cf00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5cf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5cff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5cf94) */
/* WARNING: Removing unreachable block (ram,0x000100c5cfa0) */
/* WARNING: Removing unreachable block (ram,0x000100c5cff4) */

void FUN_100c5ce30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x31) & 1) == 0) {
    param_2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x000107c3db80();
    func_0x000107c61180();
    lVar2 = param_2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar3 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_2);
        }
        func_0x000107c40aa4(*(undefined8 *)(lVar3 * 8));
        func_0x000107c611b0();
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
      lVar2 = param_2;
      func_0x000107c4080c();
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    func_0x000107c60e78();
    func_0x000107c61174(param_2);
    lVar2 = param_2;
    func_0x000107c3ebcc();
    if ((int)lVar2 != 0) {
      param_2 = param_1 + 0x20;
      func_0x000107c61148(param_2);
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c4b394();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c5cf38; end: 100c5d033;  */

/* WARNING: Possible PIC construction at 0x000100c5cf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5cff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5cf94) */
/* WARNING: Removing unreachable block (ram,0x000100c5cfa0) */
/* WARNING: Removing unreachable block (ram,0x000100c5cff4) */

void FUN_100c5cf38(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c3ebcc();
  if ((int)lVar1 != 0) {
    param_2 = param_1 + 0x20;
    func_0x000107c61148(param_2);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c4b394();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c5d034; end: 100c5d063;  */

bool FUN_100c5d034(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c5d064; end: 100c5d093; -[SCNetworkConnectivityMonitor setNetworkReachability:] */

void FUN_100c5d064(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c611ec(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 100c5d094; end: 100c5d097;  */

void FUN_100c5d094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_copy_11034bcd8)();
  return;
}



/* Entry: 100c5d098; end: 100c5d0ef;  */

void FUN_100c5d098(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3afa8(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c5d0f0; end: 100c5d24f; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _cameraBottomUIArbitrator:] */

void FUN_100c5d0f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e16c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      PTR____NSArray0__struct_11034ab48);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c426e0();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 != 0) {
    lVar4 = param_3;
    func_0x000107c4f5c0();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c3e6cc();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    if (lVar6 != 0) {
      func_0x000107c3d798(puVar1,param_2,lVar6);
    }
    func_0x000107c61170(lVar6);
  }
  lVar4 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4b158();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c3d798(puVar1,param_2,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar7 = PTR_PTR_1126b0178;
  func_0x000107c610f4(PTR_PTR_1126b0178);
  func_0x000107c46074();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


