/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a19de8; end: 104a19e2b; -[GTLRServiceTicket resumeUpload] */

void FUN_104a19de8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0dfe40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13b700();
  if ((int)uVar1 != 0) {
    func_0x00010c13d4a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a19e2c; end: 104a19e6b; -[GTLRServiceTicket isUploadPaused] */

void FUN_104a19e2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c13b700(uVar1,param_2,PTR_s_isPaused_1125fc0f8);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c079bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_isPaused_1125fc0f8)
    ;
    return;
  }
  return;
}



/* Entry: 104a19e6c; end: 104a19ea7; -[GTLRServiceTicket isCancelled] */

undefined1 FUN_104a19e6c(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a19ea8; end: 104a19f9b; -[GTLRServiceTicket cancelTicket] */

void FUN_104a19ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x22) = 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c255f60(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c1d06e0(param_1,param_2,0);
  func_0x00010c19b4a0(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  func_0x00010c128700(param_1);
  func_0x00010bf94240(param_1);
  lVar2 = param_1;
  func_0x00010bf9b200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a140();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0ed880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198100(param_1,param_2,lVar2);
  func_0x00010c06a140(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104a19f9c; end: 104a1a00b; +[GTLRServiceTicket fetcherUIApplication] */

void FUN_104a19f9c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae190;
  func_0x00010c260be0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (lRam00000001136a0588 != -1) {
      FUN_104a1cef8();
    }
    puVar1 = puRam00000001136a0580;
    if (puRam00000001136a0580 != (undefined *)0x0) {
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_retain();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a1a00c; end: 104a1a0af;  */

void FUN_104a1a00c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf24b20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdcf80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110da7118;
    _NSClassFromString();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110da7138;
      _NSSelectorFromString(&PTR____CFConstantStringClassReference_110da7138);
      ppuVar6 = ppuVar4;
      func_0x00010c13b700(ppuVar4,param_2,ppuVar5);
      if ((int)ppuVar6 != 0) {
        ppuRam00000001136a0580 = ppuVar4;
      }
    }
  }
  return;
}



/* Entry: 104a1a0b0; end: 104a1a20f; -[GTLRServiceTicket startBackgroundTask] */

void FUN_104a1a0b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010bf9b200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf39c40();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bfabb80();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  _objc_retain();
  uVar3 = uVar1;
  func_0x00010bf17d20();
  _objc_retain(param_1);
  _objc_sync_enter();
  puStack_48[3] = uVar3;
  func_0x00010c16e940(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104a1a210; end: 104a1a2db;  */

void FUN_104a1a210(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  if (lVar3 == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf14580();
  if (lVar3 == lVar2) {
    func_0x00010c16e940(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endBackgroundTask__1125c2a40,lVar3);
  return;
}



/* Entry: 104a1a2dc; end: 104a1a34b;  */

void FUN_104a1a2dc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 104a1a34c; end: 104a1a3fb; -[GTLRServiceTicket endBackgroundTask] */

void FUN_104a1a34c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_1;
  func_0x00010bf14580();
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  func_0x00010c16e940(param_1,param_2,lVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == lVar2) {
    return;
  }
  func_0x00010bf39c40(param_1);
  func_0x00010bfabb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a1a3fc; end: 104a1a427; -[GTLRServiceTicket releaseTicketCallbacks] */

void FUN_104a1a3fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c21cec0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1ed8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRetryBlock__112659060,0);
  return;
}



/* Entry: 104a1a428; end: 104a1a48b; -[GTLRServiceTicket notifyStarting:] */

void FUN_104a1a428(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  uVar2 = param_3;
  FUN_104a1cc18(param_3,*(undefined1 *)(param_1 + 0x20));
  if ((uVar2 & 1) != 0) {
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110da6c78;
  if ((int)param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110da6c98;
  }
  *(char *)(param_1 + 0x20) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1049d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_postNotificationOnMainThreadWith_11261ec90,ppuVar1,param_1,0);
  return;
}



/* Entry: 104a1a48c; end: 104a1a493; -[GTLRServiceTicket service] */

void FUN_104a1a48c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a1a494; end: 104a1a4eb; -[GTLRServiceTicket setObjectFetcher:] */

void FUN_104a1a494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2880b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateObjectFetcherProgressCallb_11267fa50);
  return;
}



/* Entry: 104a1a4ec; end: 104a1a52f; -[GTLRServiceTicket objectFetcher] */

void FUN_104a1a4ec(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a1a530; end: 104a1a547; -[GTLRServiceTicket ticketProperties] */

void FUN_104a1a530(long param_1)

{
  _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104a1a548; end: 104a1a55f; -[GTLRServiceTicket uploadProgressBlock] */

void FUN_104a1a548(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1a560; end: 104a1a5a7; -[GTLRServiceTicket setUploadProgressBlock:] */

void FUN_104a1a560(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != param_3) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2880b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateObjectFetcherProgressCallb_11267fa50)
    ;
    return;
  }
  return;
}



/* Entry: 104a1a5a8; end: 104a1a64b; -[GTLRServiceTicket updateObjectFetcherProgressCallbacks] */

void FUN_104a1a5a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c0dfe40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010c1fc300(lVar1,param_2,0);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104a1a64c;
    puStack_30 = &UNK_1107be7d0;
    ppuVar2 = &puStack_48;
    lStack_28 = param_1;
    _objc_retainBlock(ppuVar2);
    func_0x00010c1fc300(lVar1,param_2,ppuVar2);
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104a1a64c; end: 104a1a65f;  */

void FUN_104a1a64c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_invokeProgressCallbackForTicket__1125f8578,*(long *)(param_1 + 0x20),param_3,
             param_4);
  return;
}



/* Entry: 104a1a660; end: 104a1a667; -[GTLRServiceTicket statusCode] */

void FUN_104a1a660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_statusCode_1126725e0)
  ;
  return;
}



/* Entry: 104a1a668; end: 104a1a6e7; -[GTLRServiceTicket queryForRequestID:] */

void FUN_104a1a668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf9b200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06d0e0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c11d480(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a1a6e8; end: 104a1a6f3; -[GTLRServiceTicket APIKey] */

void FUN_104a1a6e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 104a1a6f4; end: 104a1a6ff; -[GTLRServiceTicket APIKeyRestrictionBundleID] */

void FUN_104a1a6f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 104a1a700; end: 104a1a707; -[GTLRServiceTicket allowInsecureQueries] */

undefined1 FUN_104a1a700(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 104a1a708; end: 104a1a70f; -[GTLRServiceTicket setAllowInsecureQueries:] */

void FUN_104a1a708(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 104a1a710; end: 104a1a717; -[GTLRServiceTicket authorizer] */

undefined8 FUN_104a1a710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a1a718; end: 104a1a723; -[GTLRServiceTicket setAuthorizer:] */

void FUN_104a1a718(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104a1a724; end: 104a1a72b; -[GTLRServiceTicket callbackGroup] */

undefined8 FUN_104a1a724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104a1a72c; end: 104a1a737; -[GTLRServiceTicket callbackQueue] */

void FUN_104a1a72c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 104a1a738; end: 104a1a743; -[GTLRServiceTicket creationDate] */

void FUN_104a1a738(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 104a1a744; end: 104a1a74f; -[GTLRServiceTicket executingQuery] */

void FUN_104a1a744(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 104a1a750; end: 104a1a757; -[GTLRServiceTicket setExecutingQuery:] */

void FUN_104a1a750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1a758; end: 104a1a75f; -[GTLRServiceTicket fetchedObject] */

undefined8 FUN_104a1a758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104a1a760; end: 104a1a76b; -[GTLRServiceTicket setFetchedObject:] */

void FUN_104a1a760(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104a1a76c; end: 104a1a773; -[GTLRServiceTicket fetchError] */

undefined8 FUN_104a1a76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104a1a774; end: 104a1a77f; -[GTLRServiceTicket setFetchError:] */

void FUN_104a1a774(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 104a1a780; end: 104a1a787; -[GTLRServiceTicket fetchRequest] */

undefined8 FUN_104a1a780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104a1a788; end: 104a1a793; -[GTLRServiceTicket setFetchRequest:] */

void FUN_104a1a788(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104a1a794; end: 104a1a79b; -[GTLRServiceTicket fetcherService] */

undefined8 FUN_104a1a794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104a1a79c; end: 104a1a7a7; -[GTLRServiceTicket setFetcherService:] */

void FUN_104a1a79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 104a1a7a8; end: 104a1a7af; -[GTLRServiceTicket hasCalledCallback] */

undefined1 FUN_104a1a7a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



/* Entry: 104a1a7b0; end: 104a1a7b7; -[GTLRServiceTicket setHasCalledCallback:] */

void FUN_104a1a7b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 104a1a7b8; end: 104a1a7bf; -[GTLRServiceTicket maxRetryInterval] */

undefined8 FUN_104a1a7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104a1a7c0; end: 104a1a7c7; -[GTLRServiceTicket setMaxRetryInterval:] */

void FUN_104a1a7c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 104a1a7c8; end: 104a1a7d3; -[GTLRServiceTicket originalQuery] */

void FUN_104a1a7c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 104a1a7d4; end: 104a1a7db; -[GTLRServiceTicket setOriginalQuery:] */

void FUN_104a1a7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1a7dc; end: 104a1a7e3; -[GTLRServiceTicket pagesFetchedCounter] */

undefined8 FUN_104a1a7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104a1a7e4; end: 104a1a7eb; -[GTLRServiceTicket setPagesFetchedCounter:] */

void FUN_104a1a7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 104a1a7ec; end: 104a1a7f3; -[GTLRServiceTicket postedObject] */

undefined8 FUN_104a1a7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 104a1a7f4; end: 104a1a7ff; -[GTLRServiceTicket setPostedObject:] */

void FUN_104a1a7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 104a1a800; end: 104a1a807; -[GTLRServiceTicket retryBlock] */

undefined8 FUN_104a1a800(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 104a1a808; end: 104a1a80f; -[GTLRServiceTicket setRetryBlock:] */

void FUN_104a1a808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a1a810; end: 104a1a817; -[GTLRServiceTicket isRetryEnabled] */

undefined1 FUN_104a1a810(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 104a1a818; end: 104a1a81f; -[GTLRServiceTicket setRetryEnabled:] */

void FUN_104a1a818(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 104a1a820; end: 104a1a827; -[GTLRServiceTicket shouldFetchNextPages] */

undefined1 FUN_104a1a820(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 104a1a828; end: 104a1a82f; -[GTLRServiceTicket setShouldFetchNextPages:] */

void FUN_104a1a828(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 104a1a830; end: 104a1a83b; -[GTLRServiceTicket objectClassResolver] */

void FUN_104a1a830(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb0,1);
  return;
}



/* Entry: 104a1a83c; end: 104a1a843; -[GTLRServiceTicket setObjectClassResolver:] */

void FUN_104a1a83c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1a844; end: 104a1a84b; -[GTLRServiceTicket testBlock] */

undefined8 FUN_104a1a844(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 104a1a84c; end: 104a1a853; -[GTLRServiceTicket setTestBlock:] */

void FUN_104a1a84c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a1a854; end: 104a1a85b; -[GTLRServiceTicket backgroundTaskIdentifier] */

undefined8 FUN_104a1a854(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 104a1a85c; end: 104a1a863; -[GTLRServiceTicket setBackgroundTaskIdentifier:] */

void FUN_104a1a85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 104a1a864; end: 104a1a96b; -[GTLRServiceTicket .cxx_destruct] */

void FUN_104a1a864(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a1a96c; end: 104a1ab0f; -[GTLRServiceExecutionParameters copyWithZone:] */

undefined8 FUN_104a1a96c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00e40();
  uVar2 = param_1;
  func_0x00010c0c2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c35e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c07c960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eda00(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13f400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed8e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c230500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200520(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0dfde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d06c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c26b620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212ee0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c26e780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214600(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c28e4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21cec0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bf28660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175be0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a1ab10; end: 104a1ac2f; -[GTLRServiceExecutionParameters hasParameters] */

bool FUN_104a1ab10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0c2bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c07c960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c13f400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010c230500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          lVar1 = param_1;
          func_0x00010c0dfde0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar1 == 0) {
            lVar1 = param_1;
            func_0x00010c26b620();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar1 == 0) {
              lVar1 = param_1;
              func_0x00010c26e780();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar1 == 0) {
                lVar1 = param_1;
                func_0x00010c28e4c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar1 == 0) {
                  func_0x00010bf28660(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  return param_1 != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}



/* Entry: 104a1ac30; end: 104a1ac3b; -[GTLRServiceExecutionParameters maxRetryInterval] */

void FUN_104a1ac30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 104a1ac3c; end: 104a1ac43; -[GTLRServiceExecutionParameters setMaxRetryInterval:] */

void FUN_104a1ac3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1ac44; end: 104a1ac4f; -[GTLRServiceExecutionParameters isRetryEnabled] */

void FUN_104a1ac44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 104a1ac50; end: 104a1ac57; -[GTLRServiceExecutionParameters setRetryEnabled:] */

void FUN_104a1ac50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1ac58; end: 104a1ac63; -[GTLRServiceExecutionParameters retryBlock] */

void FUN_104a1ac58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 104a1ac64; end: 104a1ac6b; -[GTLRServiceExecutionParameters setRetryBlock:] */

void FUN_104a1ac64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a1ac6c; end: 104a1ac77; -[GTLRServiceExecutionParameters shouldFetchNextPages] */

void FUN_104a1ac6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 104a1ac78; end: 104a1ac7f; -[GTLRServiceExecutionParameters setShouldFetchNextPages:] */

void FUN_104a1ac78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1ac80; end: 104a1ac8b; -[GTLRServiceExecutionParameters objectClassResolver] */

void FUN_104a1ac80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 104a1ac8c; end: 104a1ac93; -[GTLRServiceExecutionParameters setObjectClassResolver:] */

void FUN_104a1ac8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1ac94; end: 104a1ac9f; -[GTLRServiceExecutionParameters testBlock] */

void FUN_104a1ac94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 104a1aca0; end: 104a1aca7; -[GTLRServiceExecutionParameters setTestBlock:] */

void FUN_104a1aca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a1aca8; end: 104a1acb3; -[GTLRServiceExecutionParameters ticketProperties] */

void FUN_104a1aca8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 104a1acb4; end: 104a1acbb; -[GTLRServiceExecutionParameters setTicketProperties:] */

void FUN_104a1acb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a1acbc; end: 104a1acc7; -[GTLRServiceExecutionParameters uploadProgressBlock] */

void FUN_104a1acbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 104a1acc8; end: 104a1accf; -[GTLRServiceExecutionParameters setUploadProgressBlock:] */

void FUN_104a1acc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a1acd0; end: 104a1acdb; -[GTLRServiceExecutionParameters callbackQueue] */

void FUN_104a1acd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 104a1acdc; end: 104a1ace3; -[GTLRServiceExecutionParameters setCallbackQueue:] */

void FUN_104a1acdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1ace4; end: 104a1ad67; -[GTLRServiceExecutionParameters .cxx_destruct] */

void FUN_104a1ace4(long param_1)

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



/* Entry: 104a1ad68; end: 104a1addb; +[GTLRResourceURLQuery queryWithResourceURL:objectClass:] */

void FUN_104a1ad68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c0346e0();
  func_0x00010c198940();
  func_0x00010c1ecd80(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1addc; end: 104a1ae37; -[GTLRResourceURLQuery copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a1addc(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126e34f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_copyWithZone__1125b2238);
  _objc_storeStrong((undefined1 *)((long)plVar1 + (long)_DAT_11270f348),
                    *(undefined8 *)(param_1 + _DAT_11270f348));
  return (undefined1 *)plVar1;
}



/* Entry: 104a1ae38; end: 104a1ae47; -[GTLRResourceURLQuery resourceURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a1ae38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f348);
}



/* Entry: 104a1ae48; end: 104a1ae5b; -[GTLRResourceURLQuery setResourceURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a1ae48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f348,param_3);
  return;
}



/* Entry: 104a1ae5c; end: 104a1ae6f; -[GTLRResourceURLQuery .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a1ae5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f348,0);
  return;
}



/* Entry: 104a1ae70; end: 104a1b36b; +[GTLRURITemplate parseExpression:expressionOperator:variables:defaultValues:] */

ulong FUN_104a1ae70(undefined8 param_1,undefined8 param_2,long param_3,undefined2 *param_4,
                   undefined8 *param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uStack_144;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (lRam00000001136a05a8 != -1) {
    func_0x000104a1cf0c();
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar3 = param_3;
  if (lVar1 != 0) {
    *param_4 = 0;
    lVar1 = param_3;
    func_0x00010bf35920();
    uVar2 = puRam00000001136a0590;
    func_0x00010bf359c0();
    if ((int)uVar2 != 0) {
      *param_4 = (short)lVar1;
      func_0x00010c260c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar4 = lVar3;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar5;
      _objc_retain();
      lVar6 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar6 == 0) {
        uStack_144 = 0;
      }
      else {
        uStack_144 = 0;
        do {
          lVar15 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar4);
            }
            lVar7 = *(long *)(lVar15 * 8);
            _objc_retain();
            lVar8 = lVar7;
            func_0x00010c08fa60();
            lVar9 = lVar7;
            if (lVar8 != 0) {
              puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c11f420();
              if (lVar8 == 0x7fffffffffffffff) {
                lVar16 = 0;
LAB_104a1b090:
                func_0x00010c08fa60();
                uVar2 = puRam00000001136a0598;
                func_0x00010bf35920(lVar9);
                func_0x00010bf359c0();
                if ((int)uVar2 == 0) {
                  lVar8 = lVar9;
                  func_0x00010c11f340();
                  lVar7 = lVar9;
                  if (lVar8 != 0x7fffffffffffffff) {
                    lVar8 = lVar9;
                    func_0x00010c260c80(lVar9);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c260c00();
                    _objc_retainAutoreleasedReturnValue();
                    lVar10 = lVar7;
                    func_0x00010c08fa60();
                    if (lVar10 != 0) {
                      func_0x00010c1d0560(puVar5);
                      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c067fc0(lVar7);
                      func_0x00010c0df780(puVar11);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0560(puVar5);
                      _objc_release(puVar11);
                    }
                    lVar10 = lVar9;
                    func_0x00010c260c20();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar9);
                    lVar12 = lVar10;
                    func_0x00010c08fa60();
                    _objc_release(lVar7);
                    _objc_release(lVar8);
                    lVar9 = lVar10;
                    goto joined_r0x000104a1b21c;
                  }
                }
                else {
                  lVar8 = lVar9;
                  func_0x00010c260c00(lVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0560(puVar5);
                  _objc_release(lVar8);
                  lVar8 = lVar9;
                  func_0x00010c260c20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                  lVar12 = lVar8;
                  func_0x00010c08fa60();
                  lVar9 = lVar8;
joined_r0x000104a1b21c:
                  lVar7 = lVar9;
                  if (lVar12 == 0) goto LAB_104a1b2b0;
                }
                lVar9 = lVar7;
                func_0x00010c25cf40(lVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar7);
                func_0x00010c1d0560(puVar5);
                func_0x00010befa120(*param_5);
                if (lVar16 != 0) {
                  if (*param_6 == 0) {
                    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                    func_0x00010bf71e20();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_autorelease();
                    *param_6 = (long)puVar11;
                  }
                  func_0x00010c1d0560();
                }
                uStack_144 = 1;
              }
              else {
                lVar8 = lVar7;
                func_0x00010c260c00();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar8;
                func_0x00010c25cf40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar8);
                func_0x00010c260c20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar7);
                lVar8 = lVar9;
                func_0x00010c08fa60();
                if (lVar8 != 0) goto LAB_104a1b090;
              }
LAB_104a1b2b0:
              _objc_release(puVar5);
              _objc_release(lVar16);
            }
            _objc_release(lVar9);
            lVar15 = lVar15 + 1;
          } while (lVar6 != lVar15);
          lVar6 = lVar4;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar4);
      _objc_release(lVar4);
      goto LAB_104a1b31c;
    }
  }
  uStack_144 = 0;
LAB_104a1b31c:
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return (ulong)uStack_144;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001136a0590;
  puRam00000001136a0590 = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001136a0598;
  puRam00000001136a0598 = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = (ulong)puRam00000001136a05a0;
  puRam00000001136a05a0 = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return uVar13;
}



/* Entry: 104a1b36c; end: 104a1b407;  */

void FUN_104a1b36c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110da71d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0590;
  puRam00000001136a0590 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110da71f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0598;
  puRam00000001136a0598 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110da7218);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a05a0;
  puRam00000001136a05a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a1b408; end: 104a1b97f; +[GTLRURITemplate expandVariables:expressionOperator:values:defaultValues:] */

void FUN_104a1b408(ulong param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined **ppuStack_170;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  ppuStack_108 = (undefined **)0x0;
  lStack_f8 = 0;
  uStack_100 = 0;
  iVar13 = (int)param_4;
  uStack_110 = param_4 & 0xffff;
  if (iVar13 < 0x2f) {
    if (iVar13 != 0) {
      if (iVar13 != 0x2b) {
        if (iVar13 == 0x2e) {
          ppuStack_170 = &PTR____CFConstantStringClassReference_110dad1f8;
          ppuStack_108 = ppuStack_170;
          goto LAB_104a1b548;
        }
        goto LAB_104a1b4ec;
      }
      uStack_100 = 1;
    }
    ppuStack_108 = &PTR____CFConstantStringClassReference_110db3ed8;
    ppuStack_170 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    if (iVar13 == 0x2f) {
      ppuStack_170 = &PTR____CFConstantStringClassReference_110dacf38;
      ppuStack_108 = ppuStack_170;
      goto LAB_104a1b548;
    }
    if (iVar13 == 0x3b) {
      ppuStack_170 = &PTR____CFConstantStringClassReference_110db97b8;
      ppuStack_108 = ppuStack_170;
      goto LAB_104a1b548;
    }
    if (iVar13 == 0x3f) {
      ppuStack_108 = &PTR____CFConstantStringClassReference_110df6378;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110dbff78;
      goto LAB_104a1b548;
    }
LAB_104a1b4ec:
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da7238,
                        &PTR____CFConstantStringClassReference_110da7258);
    ppuStack_170 = (undefined **)0x0;
  }
LAB_104a1b548:
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar10 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar1,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain();
  lStack_158 = param_3;
  func_0x00010bf52a60();
  if (lStack_158 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar12 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_148 + lVar12 * 8);
        lVar2 = lVar11;
        func_0x00010c0dff20(lVar11,param_2,&PTR____CFConstantStringClassReference_110da7178);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar11;
        func_0x00010c0dff20(lVar11,param_2,&PTR____CFConstantStringClassReference_110da7198);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = param_5;
        lStack_f8 = lVar3;
        func_0x00010c0dff20(param_5,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
        uVar6 = uVar4;
        func_0x00010c075f00(uVar4,param_2,puVar5);
        if ((uVar6 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          uVar6 = uVar4;
          func_0x00010c075f00(uVar4,param_2,puVar5);
          if ((int)uVar6 != 0) goto LAB_104a1b660;
LAB_104a1b66c:
          if (uVar4 == 0) goto LAB_104a1b67c;
LAB_104a1b698:
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar7 = uVar4;
          func_0x00010c075f00(uVar4,param_2,puVar5);
          uVar6 = param_1;
          if ((int)uVar7 == 0) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar7 = uVar4;
            func_0x00010c075f00(uVar4,param_2,puVar5);
            if ((int)uVar7 != 0) {
              uVar7 = uVar4;
              FUN_104a1b980(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9bf00(param_1,param_2,uVar7,lVar2,&uStack_110);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              goto joined_r0x000104a1b6d4;
            }
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
            uVar7 = uVar4;
            func_0x00010c075f00(uVar4,param_2,puVar5);
            if ((int)uVar7 != 0) {
              func_0x00010bf9bc80(param_1,param_2,uVar4,lVar2,&uStack_110);
              _objc_retainAutoreleasedReturnValue();
              goto joined_r0x000104a1b6d4;
            }
            puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            uVar7 = uVar4;
            func_0x00010c075f00(uVar4,param_2,puVar5);
            puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
            if ((int)uVar7 != 0) {
              func_0x00010bf9bd80(param_1,param_2,uVar4,lVar2,&uStack_110);
              _objc_retainAutoreleasedReturnValue();
              goto joined_r0x000104a1b6d4;
            }
            uVar6 = uVar4;
            func_0x00010bf39c40();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11f020(puVar5,param_2,&PTR____CFConstantStringClassReference_110da7238,
                                &PTR____CFConstantStringClassReference_110da7278);
LAB_104a1b7b8:
            _objc_release(uVar6);
          }
          else {
            func_0x00010bf9bf00(param_1,param_2,uVar4,lVar2,&uStack_110);
            _objc_retainAutoreleasedReturnValue();
joined_r0x000104a1b6d4:
            if (uVar6 != 0) {
              func_0x00010c0dff20(lVar11,param_2,&PTR____CFConstantStringClassReference_110df2538);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar11;
              func_0x00010c08fa60();
              if (lVar3 != 0) {
                func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                    &PTR____CFConstantStringClassReference_110da7238,
                                    &PTR____CFConstantStringClassReference_110da7298);
              }
              func_0x00010befa120(puVar1,param_2,uVar6);
              _objc_release(lVar11);
              goto LAB_104a1b7b8;
            }
          }
          _objc_release(uVar4);
        }
        else {
LAB_104a1b660:
          uVar6 = uVar4;
          func_0x00010bf529e0();
          if (uVar6 != 0) goto LAB_104a1b66c;
          _objc_release(uVar4);
LAB_104a1b67c:
          uVar4 = param_6;
          func_0x00010c0dff20(param_6,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 != 0) goto LAB_104a1b698;
        }
        _objc_release(lVar2);
        lVar12 = lVar12 + 1;
      } while (lStack_158 != lVar12);
      lStack_158 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_150,auStack_f0,0x10);
    } while (lStack_158 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,ppuStack_108);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuStack_170;
  func_0x00010c08fa60();
  if ((ppuVar8 == (undefined **)0x0) ||
     (puVar9 = puVar5, func_0x00010c08fa60(), puVar9 == (undefined *)0x0)) {
    _objc_retain(puVar5);
  }
  else {
    func_0x00010c25ce40(ppuStack_170,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (*(long *)PTR__kCFBooleanTrue_11034ab90 == param_3 ||
        *(long *)PTR__kCFBooleanFalse_11034ab88 == param_3) {
      func_0x00010bf1f3c0();
      ppuVar8 = &PTR____CFConstantStringClassReference_110dad378;
      if ((int)param_3 == 0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110dad398;
      }
      _objc_retain(ppuVar8);
    }
    else {
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1b980; end: 104a1b9e3;  */

void FUN_104a1b980(long param_1)

{
  undefined **ppuVar1;
  
  if (*(long *)PTR__kCFBooleanTrue_11034ab90 == param_1 ||
      *(long *)PTR__kCFBooleanFalse_11034ab88 == param_1) {
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)param_1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    _objc_retain(ppuVar1);
  }
  else {
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1b9e4; end: 104a1bb53; +[GTLRURITemplate expandString:variableName:expansionInfo:] */

void FUN_104a1b9e4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ushort *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain();
  puVar1 = param_3;
  func_0x000104a1bab4(param_3,(char)param_5[8]);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (((*param_5 | 4) == 0x3f) &&
     (puVar2 = param_3, func_0x00010c08fa60(), puVar3 = param_4, puVar2 != (undefined *)0x0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a1bb54; end: 104a1bea7; +[GTLRURITemplate expandArray:variableName:expansionInfo:] */

void FUN_104a1bb54(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  ushort *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ushort *puVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined **unaff_x23;
  undefined *puVar21;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  long lVar22;
  undefined **ppuStack_2a0;
  undefined *puStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [128];
  long lStack_1d0;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  uint uStack_144;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar3 = param_4;
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_138 = ppuVar3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_144 = (uint)*param_5;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uVar19 = 0x3d;
  if ((uStack_144 - 0x3b & 0xfffb) != 0) {
    uVar19 = 0x2e;
  }
  puStack_140 = (undefined *)(ulong)uVar19;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  ppuVar3 = &puStack_130;
  puVar6 = auStack_f0;
  puVar18 = (ushort *)0x10;
  puVar21 = param_3;
  func_0x00010bf52a60();
  if (puVar21 != (undefined *)0x0) {
    unaff_x23 = &PTR____CFConstantStringClassReference_110dae918;
    unaff_x27 = *plStack_120;
    param_4 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x26 = *(undefined **)(lStack_128 + (long)unaff_x25 * 8);
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar9 = unaff_x26;
        func_0x00010c075f00();
        if ((int)puVar9 == 0) {
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar5 = unaff_x26;
          func_0x00010c075f00();
          puVar9 = PTR__OBJC_CLASS___NSException_1126af520;
          if ((int)puVar5 == 0) {
            func_0x00010bf39c40();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_160 = ppuStack_138;
            puStack_158 = unaff_x26;
            puStack_150 = param_3;
            func_0x00010c11f020(puVar9);
            _objc_release(unaff_x26);
            unaff_x26 = (undefined *)0x0;
          }
          else {
            _objc_retain();
          }
        }
        else {
          FUN_104a1b980();
          _objc_retainAutoreleasedReturnValue();
        }
        unaff_x28 = unaff_x26;
        func_0x000104a1bab4(unaff_x26,(char)param_5[8]);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        iVar2 = (int)*(undefined8 *)(param_5 + 0xc);
        func_0x00010c071ae0();
        if (iVar2 != 0) {
          puStack_158 = puStack_140;
          ppuStack_160 = ppuStack_138;
          unaff_x26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_150 = unaff_x28;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          unaff_x28 = unaff_x26;
        }
        func_0x00010befa120(puVar4);
        _objc_release(unaff_x28);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar21 != unaff_x25);
      ppuVar3 = &puStack_130;
      puVar6 = auStack_f0;
      puVar18 = (ushort *)0x10;
      puVar21 = param_3;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (puVar21 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar21 = puVar4;
  func_0x00010bf529e0();
  if (puVar21 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    unaff_x23 = *(undefined ***)(param_5 + 4);
    _objc_retain();
    if (*(long *)(param_5 + 0xc) == 0) {
      _objc_release(unaff_x23);
      unaff_x23 = &PTR____CFConstantStringClassReference_110db3ed8;
    }
    unaff_x24 = puVar4;
    ppuVar3 = unaff_x23;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uStack_144 == 0x3f) && (*(long *)(param_5 + 0xc) == 0)) {
      ppuStack_160 = ppuStack_138;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e02538;
      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_158 = unaff_x24;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar21 = unaff_x24;
      _objc_retain();
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(puVar4);
  _objc_release(ppuStack_138);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_168 = FUN_104a1bea8;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = unaff_x28;
  lStack_1b8 = unaff_x27;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  ppuStack_198 = unaff_x23;
  puStack_190 = puVar21;
  puStack_188 = param_3;
  puStack_180 = puVar4;
  ppuStack_178 = param_4;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(ppuVar3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = *(undefined ***)(puVar18 + 4);
  _objc_retain();
  uVar1 = *puVar18;
  if (*(long *)(puVar18 + 0xc) == 0) {
    ppuStack_2a0 = &PTR____CFConstantStringClassReference_110db3ed8;
LAB_104a1bf60:
    _objc_release(ppuVar7);
  }
  else {
    ppuStack_2a0 = ppuVar7;
    if ((uVar1 & 0xfffb) == 0x3b) {
      ppuStack_2a0 = &PTR____CFConstantStringClassReference_110db9ab8;
      goto LAB_104a1bf60;
    }
  }
  ppuVar7 = ppuVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  puStack_290 = (undefined *)0x0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  _objc_retain();
  ppuVar7 = &puStack_290;
  puVar13 = auStack_250;
  ppuVar12 = ppuVar8;
  func_0x00010bf52a60();
  if (ppuVar12 != (undefined **)0x0) {
    lVar22 = *plStack_280;
    do {
      ppuVar7 = (undefined **)0x0;
      do {
        if (*plStack_280 != lVar22) {
          _objc_enumerationMutation(ppuVar8);
        }
        puVar9 = *(undefined **)(lStack_288 + (long)ppuVar7 * 8);
        _objc_retain();
        ppuVar10 = ppuVar3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar9;
        func_0x000104a1bab4(puVar9,(char)puVar18[8]);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        ppuVar11 = ppuVar10;
        func_0x000104a1bab4(ppuVar10,(char)puVar18[8]);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        iVar2 = (int)*(undefined8 *)(puVar18 + 0xc);
        func_0x00010c071ae0();
        puVar9 = puVar21;
        if (iVar2 != 0) {
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar21);
        }
        if (((uVar1 & 0xfffb) == 0x3b) &&
           (ppuVar10 = ppuVar11, func_0x00010c08fa60(), ppuVar10 == (undefined **)0x0)) {
          func_0x00010befa120(puVar4);
        }
        else {
          puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar21);
        }
        _objc_release(ppuVar11);
        _objc_release(puVar9);
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar12 != ppuVar7);
      ppuVar7 = &puStack_290;
      puVar13 = auStack_250;
      ppuVar12 = ppuVar8;
      func_0x00010bf52a60();
    } while (ppuVar12 != (undefined **)0x0);
  }
  _objc_release(ppuVar8);
  puVar21 = puVar4;
  func_0x00010bf529e0();
  if (puVar21 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    ppuVar12 = *(undefined ***)(puVar18 + 4);
    _objc_retain();
    if (*(long *)(puVar18 + 0xc) == 0) {
      _objc_release(ppuVar12);
      ppuVar12 = &PTR____CFConstantStringClassReference_110db3ed8;
    }
    puVar9 = puVar4;
    ppuVar7 = ppuVar12;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 == 0x3f) && (*(long *)(puVar18 + 0xc) == 0)) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e02538;
      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar21 = puVar9;
      _objc_retain();
    }
    _objc_release(puVar9);
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuStack_2a0);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain();
    puVar21 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c08fa60(ppuVar7);
    func_0x00010c25d900(puVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ace0();
    puVar9 = puVar4;
    func_0x00010c06c740();
    uVar20 = 0;
    if (((ulong)puVar9 & 1) == 0) {
      uVar20 = 0;
      do {
        puVar9 = puVar4;
        func_0x00010c14f600();
        uVar14 = 0;
        _objc_retain(0);
        if ((int)puVar9 != 0) {
          func_0x00010bf070e0(puVar21);
        }
        func_0x00010c14f4e0(puVar4);
        puVar9 = puVar4;
        func_0x00010c14f600();
        uVar15 = 0;
        _objc_retain();
        if ((int)puVar9 == 0) {
          puVar9 = puVar4;
          func_0x00010c06c740();
          if (((ulong)puVar9 & 1) == 0) {
            func_0x00010bf070e0(puVar21);
          }
        }
        else {
          func_0x00010c14f4e0();
          ppuVar8 = ppuVar3;
          func_0x00010c0f4080();
          uVar16 = 0;
          _objc_retain(0);
          uVar17 = uVar20;
          _objc_retain();
          _objc_release(uVar20);
          if ((int)ppuVar8 == 0) {
            func_0x00010bf06ba0(puVar21);
          }
          else {
            ppuVar8 = ppuVar3;
            func_0x00010bf9bfa0();
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar8 != (undefined **)0x0) {
              func_0x00010bf070e0(puVar21);
            }
            _objc_release(ppuVar8);
          }
          _objc_release(uVar16);
          uVar20 = uVar17;
        }
        _objc_release(uVar15);
        _objc_release(uVar14);
        puVar9 = puVar4;
        func_0x00010c06c740();
      } while ((int)puVar9 == 0);
    }
    _objc_release(uVar20);
    _objc_release(puVar4);
    _objc_release(puVar13);
    _objc_release(ppuVar7);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 104a1bea8; end: 104a1c25f; +[GTLRURITemplate expandDictionary:variableName:expansionInfo:] */

void FUN_104a1bea8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ushort *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined **ppuStack_140;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = *(undefined ***)(param_5 + 4);
  _objc_retain();
  uVar1 = *param_5;
  if (*(long *)(param_5 + 0xc) == 0) {
    ppuStack_140 = &PTR____CFConstantStringClassReference_110db3ed8;
  }
  else {
    ppuStack_140 = ppuVar4;
    if ((uVar1 & 0xfffb) != 0x3b) goto LAB_104a1bf6c;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110db9ab8;
  }
  _objc_release(ppuVar4);
LAB_104a1bf6c:
  lVar5 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain();
  ppuVar4 = &puStack_130;
  puVar11 = auStack_f0;
  lVar5 = lVar6;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar19 = *plStack_120;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(lVar6);
        }
        puVar7 = *(undefined **)(lStack_128 + lVar18 * 8);
        _objc_retain();
        lVar8 = param_3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar7;
        func_0x000104a1bab4(puVar7,(char)param_5[8]);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        lVar9 = lVar8;
        func_0x000104a1bab4(lVar8,(char)param_5[8]);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        iVar2 = (int)*(undefined8 *)(param_5 + 0xc);
        func_0x00010c071ae0();
        puVar7 = puVar17;
        if (iVar2 != 0) {
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
        }
        if (((uVar1 & 0xfffb) == 0x3b) && (lVar8 = lVar9, func_0x00010c08fa60(), lVar8 == 0)) {
          func_0x00010befa120(puVar3);
        }
        else {
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar17);
        }
        _objc_release(lVar9);
        _objc_release(puVar7);
        lVar18 = lVar18 + 1;
      } while (lVar5 != lVar18);
      ppuVar4 = &puStack_130;
      puVar11 = auStack_f0;
      lVar5 = lVar6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  puVar17 = puVar3;
  func_0x00010bf529e0();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    ppuVar10 = *(undefined ***)(param_5 + 4);
    _objc_retain();
    if (*(long *)(param_5 + 0xc) == 0) {
      _objc_release(ppuVar10);
      ppuVar10 = &PTR____CFConstantStringClassReference_110db3ed8;
    }
    puVar7 = puVar3;
    ppuVar4 = ppuVar10;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 == 0x3f) && (*(long *)(param_5 + 0xc) == 0)) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e02538;
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar17 = puVar7;
      _objc_retain();
    }
    _objc_release(puVar7);
    _objc_release(ppuVar10);
  }
  _objc_release(lVar6);
  _objc_release(ppuStack_140);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain();
    puVar17 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c08fa60(ppuVar4);
    func_0x00010c25d900(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ace0();
    puVar7 = puVar3;
    func_0x00010c06c740();
    uVar16 = 0;
    if (((ulong)puVar7 & 1) == 0) {
      uVar16 = 0;
      do {
        puVar7 = puVar3;
        func_0x00010c14f600();
        uVar12 = 0;
        _objc_retain(0);
        if ((int)puVar7 != 0) {
          func_0x00010bf070e0(puVar17);
        }
        func_0x00010c14f4e0(puVar3);
        puVar7 = puVar3;
        func_0x00010c14f600();
        uVar13 = 0;
        _objc_retain();
        if ((int)puVar7 == 0) {
          puVar7 = puVar3;
          func_0x00010c06c740();
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010bf070e0(puVar17);
          }
        }
        else {
          func_0x00010c14f4e0();
          lVar5 = param_3;
          func_0x00010c0f4080();
          uVar14 = 0;
          _objc_retain(0);
          uVar15 = uVar16;
          _objc_retain();
          _objc_release(uVar16);
          if ((int)lVar5 == 0) {
            func_0x00010bf06ba0(puVar17);
          }
          else {
            lVar5 = param_3;
            func_0x00010bf9bfa0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 != 0) {
              func_0x00010bf070e0(puVar17);
            }
            _objc_release(lVar5);
          }
          _objc_release(uVar14);
          uVar16 = uVar15;
        }
        _objc_release(uVar13);
        _objc_release(uVar12);
        puVar7 = puVar3;
        func_0x00010c06c740();
      } while ((int)puVar7 == 0);
    }
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(puVar11);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 104a1c260; end: 104a1c4eb; +[GTLRURITemplate expandTemplate:values:] */

void FUN_104a1c260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_72;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  uVar10 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c25d900(puVar1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ace0();
  puVar3 = puVar2;
  func_0x00010c06c740();
  uVar10 = 0;
  if (((ulong)puVar3 & 1) == 0) {
    uVar10 = 0;
    do {
      uStack_68 = 0;
      puVar3 = puVar2;
      func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110def438,&uStack_68
                         );
      uVar4 = uStack_68;
      _objc_retain(uStack_68);
      if ((int)puVar3 != 0) {
        func_0x00010bf070e0(puVar1,param_2,uVar4);
      }
      func_0x00010c14f4e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110def438,0);
      uStack_70 = 0;
      puVar3 = puVar2;
      func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110def478,&uStack_70
                         );
      uVar5 = uStack_70;
      _objc_retain();
      if ((int)puVar3 == 0) {
        puVar3 = puVar2;
        func_0x00010c06c740();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110def438);
        }
      }
      else {
        puVar3 = puVar2;
        func_0x00010c14f4e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110def478,0);
        uStack_72 = 0;
        uStack_80 = 0;
        lVar6 = param_1;
        uStack_88 = uVar10;
        func_0x00010c0f4080(param_1,param_2,uVar5,&uStack_72,&uStack_80,&uStack_88);
        uVar7 = uStack_80;
        _objc_retain(uStack_80);
        uVar8 = uStack_88;
        _objc_retain();
        _objc_release(uVar10);
        if ((int)lVar6 == 0) {
          if ((int)puVar3 == 0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110da72d8;
          }
          else {
            ppuVar9 = &PTR____CFConstantStringClassReference_110ecb178;
          }
          func_0x00010bf06ba0(puVar1,param_2,ppuVar9);
        }
        else {
          lVar6 = param_1;
          func_0x00010bf9bfa0(param_1,param_2,uVar7,uStack_72,param_4,uVar8);
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            func_0x00010bf070e0(puVar1,param_2,lVar6);
          }
          _objc_release(lVar6);
        }
        _objc_release(uVar7);
        uVar10 = uVar8;
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar3 = puVar2;
      func_0x00010c06c740();
    } while ((int)puVar3 == 0);
  }
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a1c4ec; end: 104a1c563; +[GTLRUploadParameters uploadParametersWithData:MIMEType:] */

void FUN_104a1c4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010bfee200();
  func_0x00010c189480();
  _objc_release(param_3);
  func_0x00010c1c12c0(param_1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1c564; end: 104a1c5db; +[GTLRUploadParameters uploadParametersWithFileHandle:MIMEType:] */

void FUN_104a1c564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010bfee200();
  func_0x00010c19bac0();
  _objc_release(param_3);
  func_0x00010c1c12c0(param_1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


