/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10542a078; end: 10542a1b7; -[SCWebviewUserEventBlizzardLogger initWithBlizzardLogger:eventRepository:webviewConfigRepository:adConfigProviderV2:performer:] */

undefined1 *
FUN_10542a078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8490;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10542a1b8; end: 10542a2c7; -[SCWebviewUserEventBlizzardLogger begin] */

void FUN_10542a1b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bef6680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10542a2c8; end: 10542a30f;  */

void FUN_10542a2c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10542a310; end: 10542a76f; -[SCWebviewUserEventBlizzardLogger _logWebviewUserEventsV2:] */

void FUN_10542a310(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *unaff_x24;
  long unaff_x25;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010beb6a40();
  _objc_release(lVar1);
  if ((int)lVar5 == 0) goto LAB_10542a724;
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    _objc_retain();
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    _objc_retain(uVar6);
  }
  func_0x00010c2a49e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar1 == 0) {
    unaff_x24 = (undefined *)0x0;
  }
  else {
    unaff_x24 = *(undefined **)(lVar1 + 0x10);
  }
  _objc_retain(unaff_x24);
  puVar2 = unaff_x24;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x25 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) goto LAB_10542a768;
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    while( true ) {
      _objc_retain(uVar6);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = unaff_x25;
      func_0x00010bef64e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(puVar2);
      _objc_release(uVar6);
      _objc_release(unaff_x25);
LAB_10542a484:
      _objc_release(unaff_x24);
      unaff_x24 = PTR_PTR_1126b8f60;
      _objc_opt_new();
      if (lVar1 == 0) {
        _objc_retain(0);
        func_0x00010c163720(unaff_x24);
        _objc_release(0);
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
        _objc_retain(uVar6);
        func_0x00010c163720(unaff_x24);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(lVar1 + 0x18);
      }
      _objc_retain(uVar6);
      func_0x00010c1fd160(unaff_x24);
      _objc_release(uVar6);
      if (lVar1 == 0) {
        func_0x0001084baa08(0);
        func_0x00010c164dc0(unaff_x24);
        uVar6 = 0;
      }
      else {
        func_0x0001084baa08(*(undefined8 *)(lVar1 + 0x58));
        func_0x00010c164dc0(unaff_x24);
        uVar6 = *(undefined8 *)(lVar1 + 0x70);
      }
      func_0x0001084b952c(uVar6);
      func_0x00010c163f80(unaff_x24);
      if (lVar1 == 0) {
        func_0x00010c219120(unaff_x24);
        func_0x00010c222b20(unaff_x24);
        uVar6 = 0;
      }
      else {
        func_0x00010c219120(unaff_x24);
        func_0x00010c222b20(unaff_x24);
        uVar6 = *(undefined8 *)(lVar1 + 0x60);
      }
      func_0x0001084b94a8(uVar6);
      func_0x00010c1dfe40(unaff_x24);
      if (lVar1 == 0) {
        _objc_retain(0);
        func_0x00010c282760(0);
        func_0x00010c17e600(unaff_x24);
        _objc_release(0);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x48);
        _objc_retain(uVar6);
        func_0x00010c282760(uVar6);
        func_0x00010c17e600(unaff_x24);
        _objc_release(uVar6);
      }
      func_0x00010c2047e0(unaff_x24);
      if (lVar7 == 0) {
        _objc_retain(0);
        func_0x00010c193e40(unaff_x24);
        _objc_release(0);
        func_0x00010c1af0a0(unaff_x24);
        func_0x00010c1b3d20(unaff_x24);
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x90);
        _objc_retain(uVar6);
        func_0x00010c193e40(unaff_x24);
        _objc_release(uVar6);
        func_0x00010c1af0a0(unaff_x24);
        func_0x00010c1b3d20(unaff_x24);
      }
      func_0x00010c206c40(unaff_x24);
      unaff_x25 = lVar5;
      func_0x000100504554(lVar5,&PTR___NSConcreteGlobalBlock_1108888b0);
      func_0x00010c225180(unaff_x24);
      param_1 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(param_1);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar1);
LAB_10542a724:
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) break;
      ___stack_chk_fail();
LAB_10542a768:
      uVar6 = 0;
    }
    return;
  }
  lVar7 = 0;
  goto LAB_10542a484;
}



/* Entry: 10542a770; end: 10542a98f;  */

void FUN_10542a770(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8f68;
  _objc_opt_new(PTR_PTR_1126b8f68);
  if (lVar1 == 0) {
    func_0x00010c21acc0(puVar2);
    func_0x00010c173e20(puVar2);
  }
  else {
    func_0x00010c21acc0(puVar2);
    func_0x00010c173e20(puVar2);
  }
  func_0x00010c1bde40(puVar2);
  lVar4 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c215e20(puVar2);
  _objc_release(lVar4);
  if (lVar1 == 0) {
    func_0x00010c196260(puVar2);
    func_0x00010c1def80(0,puVar2);
    func_0x00010c1defa0(0,puVar2);
    func_0x00010c196080(0,puVar2);
    func_0x00010c1960a0(0,puVar2);
    uVar3 = 0;
  }
  else {
    func_0x00010c196260(puVar2);
    func_0x00010c1def80(*(undefined8 *)(lVar1 + 0x28),puVar2);
    func_0x00010c1defa0(*(undefined8 *)(lVar1 + 0x30),puVar2);
    func_0x00010c196080(*(undefined8 *)(lVar1 + 0x38),puVar2);
    func_0x00010c1960a0(*(undefined8 *)(lVar1 + 0x40),puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
  }
  _objc_retain(uVar3);
  func_0x00010c18c420(puVar2);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x58);
  }
  _objc_retain(lVar4);
  _objc_release(lVar4);
  if (lVar4 != 0) {
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x58);
    }
    _objc_retain(uVar3);
    func_0x00010bf1f3c0(uVar3);
    func_0x00010c1e3440(puVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10542a990; end: 10542a9af; -[SCWebviewUserEventBlizzardLogger _shouldStartBlizzardLogging:] */

bool FUN_10542a990(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_3 + 0x10) - 3U < 5;
  }
  return false;
}



/* Entry: 10542a9b0; end: 10542aa0f; -[SCWebviewUserEventBlizzardLogger .cxx_destruct] */

void FUN_10542a9b0(long param_1)

{
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



/* Entry: 10542aa10; end: 10542aa93; +[SQLAdTrackEventDatabase schema] */

void FUN_10542aa10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS AdTrackLifecycle (\n  -- unique key for individual Ad Track Event, composed by client identifier, type and timestamp.\n  eventId TEXT NOT NULL PRIMARY KEY,\n  -- Client end unique identifier\n  identifier TEXT NOT NULL,\n  -- Ad serve item id\n  serveItemId TEXT,\n  -- Ad id\n  adId TEXT,\n  -- Client end track sequence number for the same Ad\n  trackSeqNum INTEGER NOT NULL DEFAULT 0,\n  -- Client end terminal track sequence number for the same Ad\n  viewSeqNum INTEGER NOT NULL DEFAULT 0,\n  -- The index number for collection ads\n  collectionItemIndex INTEGER DEFAULT NULL,\n  -- The index number for story ads\n  snapIndex INTEGER NOT NULL DEFAULT 0,\n  -- Ad type enum from ad response, equivalent to ad_type.proto\n  adType INTEGER NOT NULL DEFAULT 0,\n  -- preferred attachment type\n  preferredAttachmentType INTEGER NOT NULL DEFAULT 0,\n  -- actual attachment type\n  actualAttachmentType INTEGER NOT NULL DEFAULT 0,\n  -- Specific ad product source for this snap (e.g. STORY_USER, STORY_USER, DISCOVER).\n  adProductType INTEGER NOT NULL DEFAULT 0,\n  -- Absolute timestamp in milli seconds\n  timestamp REAL NOT NULL DEFAULT 0,\n  -- enum type of Ad lifecycle events\n  type INTEGER NOT NULL DEFAULT 0,\n  -- enum type of Ad lifecycle webview events\n  webviewEventType INTEGER NOT NULL DEFAULT 0,\n  -- enum type of Ad lifecycle deeplink events\n  deeplinkEventType INTEGER NOT NULL DEFAULT 0,\n  -- deeplink url\n  deepLinkUrl TEXT,\n  -- Whether or not deeplink fallback to app install is enabled custom product page\n  customProductPageEnabled INTEGER NOT NULL DEFAULT 0,\n  -- enum type of Ad lifecycle appInstall events\n  appInstallEventType INTEGER NOT NULL DEFAULT 0,\n  -- the time interval of app install page visible load time in sec\n  pageVisibleLoadTimeSec REAL NOT NULL DEFAULT 0,\n  -- whether or not the app install page is loaded on exit\n  pageLoadedOnExit INTEGER NOT NULL DEFAULT 0,\n  -- whether or not the app install page is loaded on entry\n  pageLoadedOnEntry INTEGER NOT NULL DEFAULT 0,\n  -- whether or not the event is o..." /* TRUNCATED STRING LITERAL */
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10542aa94; end: 10542aabb; -[SQLAdTrackEventDatabase getConn] */

void FUN_10542aa94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10542aabc; end: 10542ab43; -[SQLAdTrackEventDatabase initWithSqliteConnection:] */

undefined1 * FUN_10542aabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8498;
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



/* Entry: 10542ab44; end: 10542ac6f; -[SQLAdTrackEventDatabase .cxx_destruct] */

void FUN_10542ab44(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10542ac70; end: 10542ac87; -[SQLAdTrackEventDatabase .cxx_construct] */

void FUN_10542ac70(long param_1)

{
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10542ac88; end: 10542b2d7;  */

void FUN_10542ac88(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  puVar1 = PTR_PTR_1126b8f70;
  _objc_alloc();
  lVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x0001005fdab8(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x0001005fdab8(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010b5ef268(param_2,4);
  lVar7 = param_2;
  func_0x00010b5ef268(param_2,5);
  lVar8 = param_2;
  func_0x0001005ff748(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010b5ef268(param_2,7);
  lVar10 = param_2;
  func_0x00010b5ef268(param_2,8);
  lVar11 = param_2;
  func_0x00010b5ef268(param_2,9);
  lVar12 = param_2;
  func_0x00010b5ef268(param_2,10);
  lVar13 = param_2;
  func_0x00010b5ef268(param_2,0xb);
  func_0x00010b5ef2a0(param_2,0xc);
  lVar14 = param_2;
  uVar24 = param_1;
  func_0x00010b5ef268(param_2,0xd);
  lVar15 = param_2;
  func_0x00010b5ef268(param_2,0xe);
  lVar16 = param_2;
  func_0x00010b5ef268(param_2,0xf);
  lVar17 = param_2;
  func_0x0001005fdab8(param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x00010b5ef268(param_2,0x11);
  func_0x00010b5ef268(param_2,0x12);
  func_0x00010b5ef2a0(param_2,0x13);
  uVar25 = uVar24;
  func_0x00010b5ef268(param_2,0x14);
  func_0x00010b5ef268(param_2,0x15);
  func_0x00010b5ef268(param_2,0x16);
  func_0x00010b5ef268(param_2,0x17);
  func_0x00010b5ef268(param_2,0x18);
  func_0x00010b5ef268(param_2,0x19);
  lVar19 = param_2;
  func_0x0001005fdab8(param_2,0x1a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_2,0x1b);
  func_0x00010b5ef2a0(param_2,0x1c);
  uVar26 = uVar25;
  func_0x00010b5ef2a0(param_2,0x1d);
  uVar27 = uVar26;
  func_0x00010b5ef2a0(param_2,0x1e);
  uVar28 = uVar27;
  func_0x00010b5ef2a0(param_2,0x1f);
  lVar20 = param_2;
  uVar29 = uVar28;
  func_0x0001005ff748(param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  func_0x0001005ff748(param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x0001005ff748(param_2,0x22);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x0001005ff748(param_2,0x23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef2a0(param_2,0x24);
  uVar30 = uVar29;
  func_0x00010b5ef268(param_2,0x25);
  func_0x00010b5ef2a0(param_2,0x26);
  func_0x00010b5ef268(param_2,0x27);
  func_0x00010b5ef268(param_2,0x28);
  func_0x00010b5ef268(param_2,0x29);
  func_0x00010b5ef2a0(param_2,0x2a);
  func_0x00010b5ef2a0(param_2,0x2b);
  func_0x00010b5ef2a0(param_2,0x2c);
  func_0x00010b5ef2a0(param_2,0x2d);
  func_0x00010b5ef268(param_2,0x2e);
  func_0x0001005fdab8(param_2,0x2f);
  _objc_retainAutoreleasedReturnValue();
  FUN_10543036c(param_1,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30,puVar1,lVar2,lVar3,lVar4,
                lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,lVar16,
                lVar17,lVar18 != 0);
  _objc_release(param_2);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10542b2d8; end: 10542b44f;  */

void FUN_10542b2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddaadd0,0x6d);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_10542ac88);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b394;
    }
  }
  lVar1 = 0;
LAB_10542b394:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10542b450; end: 10542b5e7;  */

void FUN_10542b450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddaae3e,0x88);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005edcd4(lVar1,2,param_4);
      func_0x0001005fcb64(lVar1,FUN_10542ac88);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b528;
    }
  }
  lVar1 = 0;
LAB_10542b528:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10542b5e8; end: 10542b75f;  */

void FUN_10542b5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddaaec7,0x6b);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_10542ac88);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b6a4;
    }
  }
  lVar1 = 0;
LAB_10542b6a4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10542b760; end: 10542b8d7;  */

void FUN_10542b760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x30;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddaaf33,0x6f);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_10542b8d8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b81c;
    }
  }
  lVar1 = 0;
LAB_10542b81c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10542b8d8; end: 10542c047;  */

void FUN_10542b8d8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  
  puVar1 = PTR_PTR_1126b8ea0;
  _objc_alloc();
  lVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x0001005fdab8(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x0001005fdab8(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010b5ef268(param_2,4);
  lVar7 = param_2;
  func_0x00010b5ef268(param_2,5);
  lVar8 = param_2;
  func_0x0001005ff748(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010b5ef268(param_2,7);
  lVar10 = param_2;
  func_0x00010b5ef268(param_2,8);
  lVar11 = param_2;
  func_0x00010b5ef268(param_2,9);
  lVar12 = param_2;
  func_0x00010b5ef268(param_2,10);
  lVar13 = param_2;
  func_0x00010b5ef268(param_2,0xb);
  lVar14 = param_2;
  func_0x00010b5ef268(param_2,0xc);
  func_0x00010b5ef2a0(param_2,0xd);
  lVar15 = param_2;
  func_0x0001005ff748(param_2,0xe);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x0001005ff748(param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x0001005ff748(param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x0001005ff748(param_2,0x11);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  func_0x0001005ff748(param_2,0x12);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010b5ef268(param_2,0x13);
  lVar21 = param_2;
  func_0x0001005fdab8(param_2,0x14);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x0001005fdab8(param_2,0x15);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x0001005fdab8(param_2,0x16);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  func_0x0001005fdab8(param_2,0x17);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x0001005ff748(param_2,0x18);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  func_0x0001005ff748(param_2,0x19);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_2;
  func_0x0001005ff748(param_2,0x1a);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_2;
  func_0x0001005ff748(param_2,0x1b);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_2;
  func_0x0001005ff748(param_2,0x1c);
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2;
  func_0x0001005fdab8(param_2,0x1d);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_2;
  func_0x0001005ff748(param_2,0x1e);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2;
  func_0x0001005ff748(param_2,0x1f);
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2;
  func_0x0001005fdab8(param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2;
  func_0x0001005fdab8(param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_2;
  func_0x0001005ff748(param_2,0x22);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_2;
  func_0x0001005ff748(param_2,0x23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_2,0x24);
  func_0x00010b5ef268(param_2,0x25);
  lVar37 = param_2;
  func_0x0001005fdab8(param_2,0x26);
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_2;
  func_0x0001005fdab8(param_2,0x27);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_2,0x28);
  FUN_10542eee0(param_1,puVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20 != 0);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10542c048; end: 10542c1bf;  */

void FUN_10542c048(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x38;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddaafa3,0x6d);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_10542b8d8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542c104;
    }
  }
  lVar1 = 0;
LAB_10542c104:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10542c1c0; end: 10542c357;  */

void FUN_10542c1c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddab011,0x89);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005edcd4(lVar1,2,param_4);
      func_0x0001005fcb64(lVar1,FUN_10542c358);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542c298;
    }
  }
  lVar1 = 0;
LAB_10542c298:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10542c358; end: 10542c67f;  */

void FUN_10542c358(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  puVar1 = PTR_PTR_1126b8ea8;
  _objc_alloc();
  lVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x0001005fdab8(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x0001005fdab8(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010b5ef268(param_2,4);
  lVar7 = param_2;
  func_0x00010b5ef268(param_2,5);
  lVar8 = param_2;
  func_0x0001005ff748(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010b5ef268(param_2,7);
  func_0x00010b5ef2a0(param_2,8);
  lVar10 = param_2;
  func_0x00010b5ef268(param_2,9);
  lVar11 = param_2;
  func_0x00010b5ef268(param_2,10);
  lVar12 = param_2;
  func_0x00010b5ef268(param_2,0xb);
  lVar13 = param_2;
  func_0x00010b5ef268(param_2,0xc);
  lVar14 = param_2;
  func_0x00010b5ef268(param_2,0xd);
  lVar15 = param_2;
  func_0x00010b5ef268(param_2,0xe);
  func_0x00010b5ef268(param_2,0xf);
  func_0x00010b5ef268(param_2,0x10);
  func_0x00010b5ef268(param_2,0x11);
  func_0x00010b5ef268(param_2,0x12);
  lVar16 = param_2;
  func_0x0001005fdab8(param_2,0x13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_2,0x14);
  func_0x0001005fdab8(param_2,0x15);
  _objc_retainAutoreleasedReturnValue();
  FUN_10542fd08(param_1,puVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                lVar13,lVar14,lVar15 != 0);
  _objc_release(param_2);
  _objc_release(lVar16);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10542c680; end: 10542cd0b;  */

void FUN_10542c680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
                  undefined4 param_29,undefined1 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  int iVar1;
  long lVar2;
  int aiStack_ac [3];
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_25);
  _objc_retain(param_32);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  if (param_9 != 0) {
    lVar2 = *(long *)(param_9 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_9 + 0x48;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_9 + 8),&UNK_10ddab09b,0x635);
      aiStack_ac[0] = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,aiStack_ac,param_11);
      func_0x0001005fcac0(lVar2,aiStack_ac,param_12);
      func_0x0001005fcac0(lVar2,aiStack_ac,param_13);
      iVar1 = aiStack_ac[0];
      func_0x0001005edcd4(lVar2,aiStack_ac[0],param_14);
      aiStack_ac[0] = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_15);
      func_0x00010b5eeb94(lVar2,aiStack_ac,param_16);
      iVar1 = aiStack_ac[0];
      func_0x0001005edcd4(lVar2,aiStack_ac[0],param_17);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_18);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_19);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_20);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_21);
      func_0x00010bccb848(param_1,lVar2,iVar1 + 5);
      func_0x0001005edcd4(lVar2,iVar1 + 6,param_22);
      func_0x0001005edcd4(lVar2,iVar1 + 7,param_23);
      aiStack_ac[0] = iVar1 + 9;
      func_0x0001005edcd4(lVar2,iVar1 + 8,param_24);
      func_0x0001005fcac0(lVar2,aiStack_ac,param_25);
      iVar1 = aiStack_ac[0];
      func_0x0001005edcd4(lVar2,aiStack_ac[0],param_26);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_28);
      func_0x00010bccb848(param_2,lVar2,iVar1 + 2);
      func_0x0001005edcd4(lVar2,iVar1 + 3,(undefined1)param_29);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_29._1_1_);
      func_0x0001005edcd4(lVar2,iVar1 + 5,param_29._2_1_);
      func_0x0001005edcd4(lVar2,iVar1 + 6,param_29._3_1_);
      func_0x0001005edcd4(lVar2,iVar1 + 7,param_30);
      aiStack_ac[0] = iVar1 + 9;
      func_0x0001005edcd4(lVar2,iVar1 + 8,param_31);
      func_0x0001005fcac0(lVar2,aiStack_ac,param_32);
      iVar1 = aiStack_ac[0];
      aiStack_ac[0] = aiStack_ac[0] + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_33);
      func_0x0001005fcac0(lVar2,aiStack_ac,param_34);
      iVar1 = aiStack_ac[0];
      func_0x00010bccb848(param_3,lVar2,aiStack_ac[0]);
      func_0x00010bccb848(param_4,lVar2,iVar1 + 1);
      func_0x00010bccb848(param_5,lVar2,iVar1 + 2);
      aiStack_ac[0] = iVar1 + 4;
      func_0x00010bccb848(param_6,lVar2,iVar1 + 3);
      func_0x00010b5eeb94(lVar2,aiStack_ac,param_35);
      func_0x00010b5eeb94(lVar2,aiStack_ac,param_36);
      func_0x00010b5eeb94(lVar2,aiStack_ac,param_37);
      func_0x00010b5eeb94(lVar2,aiStack_ac,param_38);
      iVar1 = aiStack_ac[0];
      func_0x00010bccb848(param_7,lVar2,aiStack_ac[0]);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_39);
      func_0x00010bccb848(param_8,lVar2,iVar1 + 2);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_40);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_25);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 10542cd0c; end: 10542d0bf;  */

void FUN_10542cd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  int iVar1;
  long lVar2;
  int aiStack_9c [3];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_22);
  if (param_6 != 0) {
    lVar2 = *(long *)(param_6 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_6 + 0x50;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_6 + 8),&UNK_10ddab6d1,0x2a7);
      aiStack_9c[0] = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,aiStack_9c,param_8);
      func_0x0001005fcac0(lVar2,aiStack_9c,param_9);
      func_0x0001005fcac0(lVar2,aiStack_9c,param_10);
      iVar1 = aiStack_9c[0];
      func_0x0001005edcd4(lVar2,aiStack_9c[0],param_11);
      aiStack_9c[0] = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_12);
      func_0x00010b5eeb94(lVar2,aiStack_9c,param_13);
      iVar1 = aiStack_9c[0];
      func_0x0001005edcd4(lVar2,aiStack_9c[0],param_14);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_15);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_16);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_17);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_18);
      func_0x00010bccb848(param_1,lVar2,iVar1 + 5);
      func_0x0001005edcd4(lVar2,iVar1 + 6,param_19);
      func_0x0001005edcd4(lVar2,iVar1 + 7,param_20);
      func_0x00010bccb848(param_2,lVar2,iVar1 + 8);
      func_0x00010bccb848(param_3,lVar2,iVar1 + 9);
      func_0x00010bccb848(param_4,lVar2,iVar1 + 10);
      func_0x00010bccb848(param_5,lVar2,iVar1 + 0xb);
      aiStack_9c[0] = iVar1 + 0xd;
      func_0x0001005edcd4(lVar2,iVar1 + 0xc,param_21);
      func_0x0001005fcac0(lVar2,aiStack_9c,param_22);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_22);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10542d0c0; end: 10542d83f;  */

void FUN_10542d0c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined4 param_39,undefined4 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  int iVar1;
  long lVar2;
  int aiStack_7c [3];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_41);
  _objc_retain(param_42);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x58;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddab979,0x63a);
      aiStack_7c[0] = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,aiStack_7c,param_4);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_5);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_6);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_7);
      aiStack_7c[0] = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_8);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_9);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_10);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_11);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_12);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_13);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_14);
      func_0x0001005edcd4(lVar2,iVar1 + 5,param_15);
      aiStack_7c[0] = iVar1 + 7;
      func_0x00010bccb848(param_1,lVar2,iVar1 + 6);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_16);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_17);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_18);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_19);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_20);
      iVar1 = aiStack_7c[0];
      aiStack_7c[0] = aiStack_7c[0] + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_21);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_23);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_24);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_25);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_26);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_27);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_28);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_29);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_30);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_31);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_32);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_33);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_34);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_35);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_36);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_37);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_38);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],(undefined1)param_39);
      aiStack_7c[0] = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_39._1_1_);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_41);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_42);
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_43);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10542d840; end: 10542dbb3;  */

void FUN_10542d840(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  int iVar1;
  long lVar2;
  int aiStack_7c [3];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_18);
  _objc_retain(param_21);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x60;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddabfb4,699);
      aiStack_7c[0] = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,aiStack_7c,param_4);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_5);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_6);
      aiStack_7c[0] = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_7);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_8);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_9);
      func_0x00010bccb848(param_1,lVar2,iVar1 + 1);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_10);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_11);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_12);
      func_0x0001005edcd4(lVar2,iVar1 + 5,param_14);
      func_0x0001005edcd4(lVar2,iVar1 + 6,param_15);
      func_0x0001005edcd4(lVar2,iVar1 + 7,(undefined1)param_16);
      aiStack_7c[0] = iVar1 + 9;
      func_0x0001005edcd4(lVar2,iVar1 + 8,param_16._1_1_);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_18);
      iVar1 = aiStack_7c[0];
      aiStack_7c[0] = aiStack_7c[0] + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_19);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_21);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10542dbb4; end: 10542dff3;  */

long * FUN_10542dbb4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18,long param_19,long param_20,long param_21,long param_22,
                    long param_23,long param_24,long param_25,undefined1 param_26,
                    undefined4 param_27,long param_28,undefined4 param_29,undefined1 param_30,
                    long param_31,long param_32,long param_33,long param_34,long param_35,
                    long param_36,long param_37,long param_38,long param_39,long param_40)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_25);
  _objc_retain(param_32);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  plVar1 = (long *)0x0;
  if (param_9 != 0) {
    puStack_b0 = PTR_PTR_1126e84a0;
    plVar1 = &lStack_b8;
    lStack_b8 = param_9;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_11;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      plVar1[6] = param_14;
      plVar1[7] = param_15;
      lVar2 = param_16;
      func_0x00010bf51e00();
      lVar3 = plVar1[8];
      plVar1[8] = lVar2;
      _objc_release(lVar3);
      plVar1[9] = param_17;
      plVar1[10] = param_18;
      plVar1[0xb] = param_19;
      plVar1[0xc] = param_20;
      plVar1[0xd] = param_21;
      plVar1[0xe] = param_1;
      plVar1[0xf] = param_22;
      plVar1[0x10] = param_23;
      plVar1[0x11] = param_24;
      lVar2 = param_25;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x12];
      plVar1[0x12] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)(plVar1 + 1) = param_26;
      plVar1[0x13] = param_28;
      plVar1[0x14] = param_2;
      *(undefined1 *)((long)plVar1 + 9) = (undefined1)param_29;
      *(undefined1 *)((long)plVar1 + 10) = param_29._1_1_;
      *(undefined1 *)((long)plVar1 + 0xb) = param_29._2_1_;
      *(undefined1 *)((long)plVar1 + 0xc) = param_29._3_1_;
      *(undefined1 *)((long)plVar1 + 0xd) = param_30;
      plVar1[0x15] = param_31;
      lVar2 = param_32;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x16];
      plVar1[0x16] = lVar2;
      _objc_release(lVar3);
      plVar1[0x17] = param_33;
      lVar2 = param_34;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x18];
      plVar1[0x18] = lVar2;
      _objc_release(lVar3);
      plVar1[0x19] = param_3;
      plVar1[0x1a] = param_4;
      plVar1[0x1b] = param_5;
      plVar1[0x1c] = param_6;
      lVar2 = param_35;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1d];
      plVar1[0x1d] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_36;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1e];
      plVar1[0x1e] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_37;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1f];
      plVar1[0x1f] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_38;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x20];
      plVar1[0x20] = lVar2;
      _objc_release(lVar3);
      plVar1[0x21] = param_7;
      plVar1[0x22] = param_39;
      plVar1[0x23] = param_8;
      plVar1[0x24] = param_40;
    }
  }
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_25);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return plVar1;
}



/* Entry: 10542dff4; end: 10542e017; -[SQLAdTrackLifecycle copyWithZone:] */

undefined8 FUN_10542dff4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10542e018; end: 10542e2af; -[SQLAdTrackLifecycle hash] */

undefined8 * FUN_10542e018(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = &uStack_180;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_180 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_178 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_170 = uVar2;
  func_0x00010bfde980();
  uStack_160 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_158 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_168 = uVar3;
  func_0x00010bfde980();
  uStack_128 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_120 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_120 = uStack_120 ^ uStack_120 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x90);
  lStack_108 = -lVar6;
  if (-1 < lVar6) {
    lStack_108 = lVar6;
  }
  uStack_148 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_140 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  uStack_138 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_110 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uStack_f8 = (ulong)*(byte *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x98);
  lStack_f0 = -lVar6;
  if (-1 < lVar6) {
    lStack_f0 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_e8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_e8 = uStack_e8 ^ uStack_e8 >> 0x16;
  uVar10 = *(undefined4 *)(param_1 + 9);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_e0 = (ulong)uVar1 & 0xff;
  uStack_d8 = uVar7 >> 0x10 & 0xff;
  uStack_d0 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_c8 = (ulong)uVar9;
  uStack_c0 = (ulong)*(byte *)(param_1 + 0xd);
  lVar6 = *(long *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  lStack_b8 = -lVar6;
  if (-1 < lVar6) {
    lStack_b8 = lVar6;
  }
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0xb8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
  lStack_a8 = -lVar6;
  if (-1 < lVar6) {
    lStack_a8 = lVar6;
  }
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 200) + *(ulong *)(param_1 + 200) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_98 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xd0) + *(ulong *)(param_1 + 0xd0) * 0x40000;
  uVar11 = ~*(ulong *)(param_1 + 0xd8) + *(ulong *)(param_1 + 0xd8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xe0) + *(ulong *)(param_1 + 0xe0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x110);
  uVar7 = ~*(ulong *)(param_1 + 0x108) + *(ulong *)(param_1 + 0x108) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_40 = *(undefined8 *)(param_1 + 0x120);
  uVar7 = ~*(ulong *)(param_1 + 0x118) + *(ulong *)(param_1 + 0x118) * 0x40000;
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_60 = uVar3;
  func_0x000100505190(&uStack_180,0x29);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10542e730:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10542e73c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         (((((*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30) &&
             (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))) &&
            (*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48))) &&
           ((*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50) &&
            (*(long *)((long)puVar4 + 0x58) == *(long *)(param_3 + 0x58))))) &&
          (*(long *)((long)puVar4 + 0x60) == *(long *)(param_3 + 0x60))))) &&
        (((((*(long *)((long)puVar4 + 0x68) == *(long *)(param_3 + 0x68) &&
            (*(long *)((long)puVar4 + 0x78) == *(long *)(param_3 + 0x78))) &&
           (*(long *)((long)puVar4 + 0x80) == *(long *)(param_3 + 0x80))) &&
          ((((*(long *)((long)puVar4 + 0x88) == *(long *)(param_3 + 0x88) &&
             (*(char *)((long)puVar4 + 8) == param_3[8])) &&
            (*(long *)((long)puVar4 + 0x98) == *(long *)(param_3 + 0x98))) &&
           ((*(char *)((long)puVar4 + 9) == param_3[9] &&
            (*(char *)((long)puVar4 + 10) == param_3[10])))))) &&
         (((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           ((*(char *)((long)puVar4 + 0xc) == param_3[0xc] &&
            (*(char *)((long)puVar4 + 0xd) == param_3[0xd])))) &&
          (*(long *)((long)puVar4 + 0xa8) == *(long *)(param_3 + 0xa8))))))) &&
       (((*(long *)((long)puVar4 + 0xb8) == *(long *)(param_3 + 0xb8) &&
         (*(long *)((long)puVar4 + 0x110) == *(long *)(param_3 + 0x110))) &&
        (*(long *)((long)puVar4 + 0x120) == *(long *)(param_3 + 0x120))))) {
      dVar12 = ABS(*(double *)((long)puVar4 + 0x70) - *(double *)(param_3 + 0x70));
      if ((dVar12 < 2.2250738585072014e-308) ||
         (dVar12 < ABS(*(double *)((long)puVar4 + 0x70) + *(double *)(param_3 + 0x70)) *
                   2.220446049250313e-16)) {
        dVar12 = ABS(*(double *)((long)puVar4 + 0xa0) - *(double *)(param_3 + 0xa0));
        if ((dVar12 < 2.2250738585072014e-308) ||
           (dVar12 < ABS(*(double *)((long)puVar4 + 0xa0) + *(double *)(param_3 + 0xa0)) *
                     2.220446049250313e-16)) {
          dVar12 = ABS(*(double *)((long)puVar4 + 200) - *(double *)(param_3 + 200));
          if ((dVar12 < 2.2250738585072014e-308) ||
             (dVar12 < ABS(*(double *)((long)puVar4 + 200) + *(double *)(param_3 + 200)) *
                       2.220446049250313e-16)) {
            dVar12 = ABS(*(double *)((long)puVar4 + 0xd0) - *(double *)(param_3 + 0xd0));
            if ((dVar12 < 2.2250738585072014e-308) ||
               (dVar12 < ABS(*(double *)((long)puVar4 + 0xd0) + *(double *)(param_3 + 0xd0)) *
                         2.220446049250313e-16)) {
              dVar12 = ABS(*(double *)((long)puVar4 + 0xd8) - *(double *)(param_3 + 0xd8));
              if ((dVar12 < 2.2250738585072014e-308) ||
                 (dVar12 < ABS(*(double *)((long)puVar4 + 0xd8) + *(double *)(param_3 + 0xd8)) *
                           2.220446049250313e-16)) {
                dVar12 = ABS(*(double *)((long)puVar4 + 0xe0) - *(double *)(param_3 + 0xe0));
                if ((dVar12 < 2.2250738585072014e-308) ||
                   (dVar12 < ABS(*(double *)((long)puVar4 + 0xe0) + *(double *)(param_3 + 0xe0)) *
                             2.220446049250313e-16)) {
                  dVar12 = ABS(*(double *)((long)puVar4 + 0x108) - *(double *)(param_3 + 0x108));
                  if ((dVar12 < 2.2250738585072014e-308) ||
                     (dVar12 < ABS(*(double *)((long)puVar4 + 0x108) + *(double *)(param_3 + 0x108))
                               * 2.220446049250313e-16)) {
                    dVar12 = ABS(*(double *)((long)puVar4 + 0x118) - *(double *)(param_3 + 0x118));
                    if ((((dVar12 < 2.2250738585072014e-308) ||
                         (dVar12 < ABS(*(double *)((long)puVar4 + 0x118) +
                                       *(double *)(param_3 + 0x118)) * 2.220446049250313e-16)) &&
                        (((((lVar6 = *(long *)((long)puVar4 + 0x10),
                            lVar6 == *(long *)(param_3 + 0x10) ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                           ((lVar6 = *(long *)((long)puVar4 + 0x18),
                            lVar6 == *(long *)(param_3 + 0x18) ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                          (((lVar6 = *(long *)((long)puVar4 + 0x20),
                            lVar6 == *(long *)(param_3 + 0x20) ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                           ((lVar6 = *(long *)((long)puVar4 + 0x28),
                            lVar6 == *(long *)(param_3 + 0x28) ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
                         ((((lVar6 = *(long *)((long)puVar4 + 0x40),
                            lVar6 == *(long *)(param_3 + 0x40) ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                           ((lVar6 = *(long *)((long)puVar4 + 0x90),
                            lVar6 == *(long *)(param_3 + 0x90) ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                          ((lVar6 = *(long *)((long)puVar4 + 0xb0),
                           lVar6 == *(long *)(param_3 + 0xb0) ||
                           (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
                       (((lVar6 = *(long *)((long)puVar4 + 0xc0), lVar6 == *(long *)(param_3 + 0xc0)
                         || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                        ((((lVar6 = *(long *)((long)puVar4 + 0xe8),
                           lVar6 == *(long *)(param_3 + 0xe8) ||
                           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                          ((lVar6 = *(long *)((long)puVar4 + 0xf0),
                           lVar6 == *(long *)(param_3 + 0xf0) ||
                           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                         ((lVar6 = *(long *)((long)puVar4 + 0xf8),
                          lVar6 == *(long *)(param_3 + 0xf8) ||
                          (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) {
                      puVar8 = *(undefined1 **)((long)puVar4 + 0x100);
                      if (puVar8 != *(undefined1 **)(param_3 + 0x100)) {
                        func_0x00010c071ae0();
                        goto LAB_10542e73c;
                      }
                      goto LAB_10542e730;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10542e73c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10542e2b0; end: 10542e757; -[SQLAdTrackLifecycle isEqual:] */

long FUN_10542e2b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10542e730:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10542e73c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         (((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
             (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
            (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
           ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
            (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))) &&
          (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))) &&
        (((((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
            (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
           (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))) &&
          ((((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
             (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
            (*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98))) &&
           ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
         (((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           ((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
            (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))) &&
          (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))))) &&
       (((*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8) &&
         (*(long *)(param_1 + 0x110) == *(long *)(param_3 + 0x110))) &&
        (*(long *)(param_1 + 0x120) == *(long *)(param_3 + 0x120))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0xa0) - *(double *)(param_3 + 0xa0));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0xa0) + *(double *)(param_3 + 0xa0)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 200) - *(double *)(param_3 + 200));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 200) + *(double *)(param_3 + 200)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0xd0) - *(double *)(param_3 + 0xd0));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0xd0) + *(double *)(param_3 + 0xd0)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0xd8) - *(double *)(param_3 + 0xd8));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0xd8) + *(double *)(param_3 + 0xd8)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0xe0) - *(double *)(param_3 + 0xe0));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0xe0) + *(double *)(param_3 + 0xe0)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x108) - *(double *)(param_3 + 0x108));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x108) + *(double *)(param_3 + 0x108)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x118) - *(double *)(param_3 + 0x118));
                    if ((((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x118) + *(double *)(param_3 + 0x118)) *
                                  2.220446049250313e-16)) &&
                        (((((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                           ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                          (((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                           ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                         ((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                           ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                          ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
                       (((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                        ((((lVar3 = *(long *)(param_1 + 0xe8), lVar3 == *(long *)(param_3 + 0xe8) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                          ((lVar3 = *(long *)(param_1 + 0xf0), lVar3 == *(long *)(param_3 + 0xf0) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                         ((lVar3 = *(long *)(param_1 + 0xf8), lVar3 == *(long *)(param_3 + 0xf8) ||
                          (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
                      lVar3 = *(long *)(param_1 + 0x100);
                      if (lVar3 != *(long *)(param_3 + 0x100)) {
                        func_0x00010c071ae0();
                        goto LAB_10542e73c;
                      }
                      goto LAB_10542e730;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10542e73c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10542e758; end: 10542e7ff; -[SQLAdTrackLifecycle .cxx_destruct] */

void FUN_10542e758(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10542e800; end: 10542ea1b;  */

long * FUN_10542e800(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18,long param_19,long param_20,long param_21,long param_22)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_22);
  plVar1 = (long *)0x0;
  if (param_6 != 0) {
    puStack_a0 = PTR_PTR_1126e84a8;
    plVar1 = &lStack_a8;
    lStack_a8 = param_6;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_7;
      func_0x00010bf51e00();
      lVar3 = plVar1[1];
      plVar1[1] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_9;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      plVar1[5] = param_11;
      plVar1[6] = param_12;
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      plVar1[8] = param_14;
      plVar1[9] = param_15;
      plVar1[10] = param_16;
      plVar1[0xb] = param_17;
      plVar1[0xc] = param_18;
      plVar1[0xd] = param_1;
      plVar1[0xe] = param_19;
      plVar1[0xf] = param_20;
      plVar1[0x10] = param_2;
      plVar1[0x11] = param_3;
      plVar1[0x12] = param_4;
      plVar1[0x13] = param_5;
      plVar1[0x14] = param_21;
      lVar2 = param_22;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x15];
      plVar1[0x15] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_22);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return plVar1;
}



/* Entry: 10542ea1c; end: 10542ea3f; -[SQLAdTrackInteraction copyWithZone:] */

undefined8 FUN_10542ea1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10542ea40; end: 10542ebbf; -[SQLAdTrackInteraction hash] */

undefined8 * FUN_10542ea40(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uStack_d0;
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
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_d0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uStack_80 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = *(undefined8 *)(param_1 + 0x50);
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_78 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  lVar6 = *(long *)(param_1 + 0xa0);
  uStack_30 = *(undefined8 *)(param_1 + 0xa8);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_d0,0x15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10542ee58:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10542ee64;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))) &&
           (*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
        (*(long *)((long)puVar4 + 0x58) == *(long *)(param_3 + 0x58))) &&
       (((*(long *)((long)puVar4 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)((long)puVar4 + 0x70) == *(long *)(param_3 + 0x70))) &&
        ((*(long *)((long)puVar4 + 0x78) == *(long *)(param_3 + 0x78) &&
         (*(long *)((long)puVar4 + 0xa0) == *(long *)(param_3 + 0xa0))))))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x68) - *(double *)(param_3 + 0x68));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar4 + 0x68) + *(double *)(param_3 + 0x68)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x80) - *(double *)(param_3 + 0x80));
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS(*(double *)((long)puVar4 + 0x80) + *(double *)(param_3 + 0x80)) *
                    2.220446049250313e-16)) {
          dVar9 = ABS(*(double *)((long)puVar4 + 0x88) - *(double *)(param_3 + 0x88));
          if ((dVar9 < 2.2250738585072014e-308) ||
             (dVar9 < ABS(*(double *)((long)puVar4 + 0x88) + *(double *)(param_3 + 0x88)) *
                      2.220446049250313e-16)) {
            dVar9 = ABS(*(double *)((long)puVar4 + 0x90) - *(double *)(param_3 + 0x90));
            if ((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS(*(double *)((long)puVar4 + 0x90) + *(double *)(param_3 + 0x90)) *
                        2.220446049250313e-16)) {
              dVar9 = ABS(*(double *)((long)puVar4 + 0x98) - *(double *)(param_3 + 0x98));
              if ((((dVar9 < 2.2250738585072014e-308) ||
                   (dVar9 < ABS(*(double *)((long)puVar4 + 0x98) + *(double *)(param_3 + 0x98)) *
                            2.220446049250313e-16)) &&
                  ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 (((((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                    ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                   ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                  ((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
                puVar8 = *(undefined1 **)((long)puVar4 + 0xa8);
                if (puVar8 != *(undefined1 **)(param_3 + 0xa8)) {
                  func_0x00010c071ae0();
                  goto LAB_10542ee64;
                }
                goto LAB_10542ee58;
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10542ee64:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10542ebc0; end: 10542ee7f; -[SQLAdTrackInteraction isEqual:] */

long FUN_10542ebc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10542ee58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10542ee64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
       (((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
        ((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
         (*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x88) - *(double *)(param_3 + 0x88));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x88) + *(double *)(param_3 + 0x88)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x90) - *(double *)(param_3 + 0x90));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x90) + *(double *)(param_3 + 0x90)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x98) - *(double *)(param_3 + 0x98));
              if ((((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x98) + *(double *)(param_3 + 0x98)) *
                            2.220446049250313e-16)) &&
                  ((lVar3 = *(long *)(param_1 + 8), lVar3 == *(long *)(param_3 + 8) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 (((((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                    ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
                lVar3 = *(long *)(param_1 + 0xa8);
                if (lVar3 != *(long *)(param_3 + 0xa8)) {
                  func_0x00010c071ae0();
                  goto LAB_10542ee64;
                }
                goto LAB_10542ee58;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10542ee64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10542ee80; end: 10542eedf; -[SQLAdTrackInteraction .cxx_destruct] */

void FUN_10542ee80(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10542eee0; end: 10542f54f;  */

long * FUN_10542eee0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18,long param_19,long param_20,undefined1 param_21,
                    undefined4 param_22,long param_23,long param_24,long param_25,long param_26,
                    long param_27,long param_28,long param_29,long param_30,long param_31,
                    long param_32,long param_33,long param_34,long param_35,long param_36,
                    long param_37,long param_38,undefined4 param_39,undefined4 param_40,
                    long param_41,long param_42,long param_43)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_41);
  _objc_retain(param_42);
  if (param_2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    puStack_80 = PTR_PTR_1126e84b0;
    plVar3 = &lStack_88;
    lStack_88 = param_2;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    if (plVar3 != (long *)0x0) {
      lVar1 = param_3;
      func_0x00010bf51e00();
      lVar2 = plVar3[2];
      plVar3[2] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_4;
      func_0x00010bf51e00();
      lVar2 = plVar3[3];
      plVar3[3] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_5;
      func_0x00010bf51e00();
      lVar2 = plVar3[4];
      plVar3[4] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_6;
      func_0x00010bf51e00();
      lVar2 = plVar3[5];
      plVar3[5] = lVar1;
      _objc_release(lVar2);
      plVar3[6] = param_7;
      plVar3[7] = param_8;
      lVar1 = param_9;
      func_0x00010bf51e00();
      lVar2 = plVar3[8];
      plVar3[8] = lVar1;
      _objc_release(lVar2);
      plVar3[9] = param_10;
      plVar3[10] = param_11;
      plVar3[0xb] = param_12;
      plVar3[0xc] = param_13;
      plVar3[0xd] = param_14;
      plVar3[0xe] = param_15;
      plVar3[0xf] = param_1;
      lVar1 = param_16;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x10];
      plVar3[0x10] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_17;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x11];
      plVar3[0x11] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_18;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x12];
      plVar3[0x12] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_19;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x13];
      plVar3[0x13] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_20;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x14];
      plVar3[0x14] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)(plVar3 + 1) = param_21;
      lVar1 = param_23;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x15];
      plVar3[0x15] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_24;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x16];
      plVar3[0x16] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_25;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x17];
      plVar3[0x17] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_26;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x18];
      plVar3[0x18] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_27;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x19];
      plVar3[0x19] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_28;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1a];
      plVar3[0x1a] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_29;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1b];
      plVar3[0x1b] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_30;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1c];
      plVar3[0x1c] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_31;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1d];
      plVar3[0x1d] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_32;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1e];
      plVar3[0x1e] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_33;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1f];
      plVar3[0x1f] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_34;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x20];
      plVar3[0x20] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_35;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x21];
      plVar3[0x21] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_36;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x22];
      plVar3[0x22] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_37;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x23];
      plVar3[0x23] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_38;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x24];
      plVar3[0x24] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar3 + 9) = (undefined1)param_39;
      *(undefined1 *)((long)plVar3 + 10) = param_39._1_1_;
      lVar1 = param_41;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x25];
      plVar3[0x25] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_42;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x26];
      plVar3[0x26] = lVar1;
      _objc_release(lVar2);
      plVar3[0x27] = param_43;
    }
  }
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar3;
}



/* Entry: 10542f550; end: 10542f573; -[SQLAdTrackWebView copyWithZone:] */

undefined8 FUN_10542f550(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10542f574; end: 10542f78f; -[SQLAdTrackWebView hash] */

undefined8 * FUN_10542f574(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_170;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_170 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_168 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_160 = uVar1;
  func_0x00010bfde980();
  uStack_150 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_148 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_158 = uVar2;
  func_0x00010bfde980();
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  lVar6 = *(long *)(param_1 + 0x70);
  lStack_110 = -lVar6;
  if (-1 < lVar6) {
    lStack_110 = lVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_138 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_130 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  uStack_128 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_108 = uStack_108 ^ uStack_108 >> 0x16;
  uStack_140 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uStack_d8 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x138);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_170,0x29);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10542fb78:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10542fb84;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) &&
          (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))) &&
         ((*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50) &&
          (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))))))) &&
       ((*(long *)((long)puVar3 + 0x60) == *(long *)(param_3 + 0x60) &&
        (((*(long *)((long)puVar3 + 0x68) == *(long *)(param_3 + 0x68) &&
          (*(long *)((long)puVar3 + 0x70) == *(long *)(param_3 + 0x70))) &&
         ((*(char *)((long)puVar3 + 8) == param_3[8] &&
          (((*(char *)((long)puVar3 + 9) == param_3[9] &&
            (*(char *)((long)puVar3 + 10) == param_3[10])) &&
           (*(long *)((long)puVar3 + 0x138) == *(long *)(param_3 + 0x138))))))))))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x78) - *(double *)(param_3 + 0x78));
      if (((((((dVar8 < 2.2250738585072014e-308) ||
              (dVar8 < ABS(*(double *)((long)puVar3 + 0x78) + *(double *)(param_3 + 0x78)) *
                       2.220446049250313e-16)) &&
             ((lVar6 = *(long *)((long)puVar3 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            (((((lVar6 = *(long *)((long)puVar3 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
               ((lVar6 = *(long *)((long)puVar3 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              ((lVar6 = *(long *)((long)puVar3 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             (((lVar6 = *(long *)((long)puVar3 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              (((lVar6 = *(long *)((long)puVar3 + 0x80), lVar6 == *(long *)(param_3 + 0x80) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
               ((lVar6 = *(long *)((long)puVar3 + 0x88), lVar6 == *(long *)(param_3 + 0x88) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) &&
           ((((lVar6 = *(long *)((long)puVar3 + 0x90), lVar6 == *(long *)(param_3 + 0x90) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar3 + 0x98), lVar6 == *(long *)(param_3 + 0x98) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((((((lVar6 = *(long *)((long)puVar3 + 0xa0), lVar6 == *(long *)(param_3 + 0xa0) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                ((lVar6 = *(long *)((long)puVar3 + 0xa8), lVar6 == *(long *)(param_3 + 0xa8) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
               (((lVar6 = *(long *)((long)puVar3 + 0xb0), lVar6 == *(long *)(param_3 + 0xb0) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                ((lVar6 = *(long *)((long)puVar3 + 0xb8), lVar6 == *(long *)(param_3 + 0xb8) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
              ((((lVar6 = *(long *)((long)puVar3 + 0xc0), lVar6 == *(long *)(param_3 + 0xc0) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                ((lVar6 = *(long *)((long)puVar3 + 200), lVar6 == *(long *)(param_3 + 200) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
               ((lVar6 = *(long *)((long)puVar3 + 0xd0), lVar6 == *(long *)(param_3 + 0xd0) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
             ((lVar6 = *(long *)((long)puVar3 + 0xd8), lVar6 == *(long *)(param_3 + 0xd8) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
          (((((lVar6 = *(long *)((long)puVar3 + 0xe0), lVar6 == *(long *)(param_3 + 0xe0) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar3 + 0xe8), lVar6 == *(long *)(param_3 + 0xe8) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((((lVar6 = *(long *)((long)puVar3 + 0xf0), lVar6 == *(long *)(param_3 + 0xf0) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar3 + 0xf8), lVar6 == *(long *)(param_3 + 0xf8) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((((lVar6 = *(long *)((long)puVar3 + 0x100), lVar6 == *(long *)(param_3 + 0x100) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
               ((lVar6 = *(long *)((long)puVar3 + 0x108), lVar6 == *(long *)(param_3 + 0x108) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              ((lVar6 = *(long *)((long)puVar3 + 0x110), lVar6 == *(long *)(param_3 + 0x110) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
           ((lVar6 = *(long *)((long)puVar3 + 0x118), lVar6 == *(long *)(param_3 + 0x118) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
         (((lVar6 = *(long *)((long)puVar3 + 0x120), lVar6 == *(long *)(param_3 + 0x120) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar3 + 0x128), lVar6 == *(long *)(param_3 + 0x128) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x130);
        if (puVar7 != *(undefined1 **)(param_3 + 0x130)) {
          func_0x00010c071ae0();
          goto LAB_10542fb84;
        }
        goto LAB_10542fb78;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10542fb84:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10542f790; end: 10542fb9f; -[SQLAdTrackWebView isEqual:] */

long FUN_10542f790(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10542fb78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10542fb84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
         ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
          (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))))) &&
       ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
        (((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
          (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
           (*(long *)(param_1 + 0x138) == *(long *)(param_3 + 0x138))))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78));
      if (((((((dVar4 < 2.2250738585072014e-308) ||
              (dVar4 < ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                       2.220446049250313e-16)) &&
             ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            (((((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              (((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) &&
           ((((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0xa8), lVar3 == *(long *)(param_3 + 0xa8) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               (((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0xb8), lVar3 == *(long *)(param_3 + 0xb8) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
              ((((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 200), lVar3 == *(long *)(param_3 + 200) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0xd0), lVar3 == *(long *)(param_3 + 0xd0) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
             ((lVar3 = *(long *)(param_1 + 0xd8), lVar3 == *(long *)(param_3 + 0xd8) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
          (((((lVar3 = *(long *)(param_1 + 0xe0), lVar3 == *(long *)(param_3 + 0xe0) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0xe8), lVar3 == *(long *)(param_3 + 0xe8) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((lVar3 = *(long *)(param_1 + 0xf0), lVar3 == *(long *)(param_3 + 0xf0) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0xf8), lVar3 == *(long *)(param_3 + 0xf8) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((lVar3 = *(long *)(param_1 + 0x100), lVar3 == *(long *)(param_3 + 0x100) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x108), lVar3 == *(long *)(param_3 + 0x108) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x110), lVar3 == *(long *)(param_3 + 0x110) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
           ((lVar3 = *(long *)(param_1 + 0x118), lVar3 == *(long *)(param_3 + 0x118) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
         (((lVar3 = *(long *)(param_1 + 0x120), lVar3 == *(long *)(param_3 + 0x120) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x128), lVar3 == *(long *)(param_3 + 0x128) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x130);
        if (lVar3 != *(long *)(param_3 + 0x130)) {
          func_0x00010c071ae0();
          goto LAB_10542fb84;
        }
        goto LAB_10542fb78;
      }
    }
    lVar3 = 0;
  }
LAB_10542fb84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10542fba0; end: 10542fd07; -[SQLAdTrackWebView .cxx_destruct] */

void FUN_10542fba0(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10542fd08; end: 10542ff6f;  */

long * FUN_10542fd08(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,undefined1 param_16,
                    undefined4 param_17,long param_18,long param_19,undefined4 param_20,
                    undefined4 param_21,long param_22,undefined1 param_23,undefined4 param_24,
                    long param_25)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_22);
  _objc_retain(param_25);
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    puStack_80 = PTR_PTR_1126e84b8;
    plVar1 = &lStack_88;
    lStack_88 = param_2;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_3;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_4;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_5;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_6;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      plVar1[6] = param_7;
      plVar1[7] = param_8;
      lVar2 = param_9;
      func_0x00010bf51e00();
      lVar3 = plVar1[8];
      plVar1[8] = lVar2;
      _objc_release(lVar3);
      plVar1[9] = param_10;
      plVar1[10] = param_1;
      plVar1[0xb] = param_11;
      plVar1[0xc] = param_12;
      plVar1[0xd] = param_13;
      plVar1[0xe] = param_14;
      *(undefined1 *)(plVar1 + 1) = param_16;
      plVar1[0xf] = param_15;
      plVar1[0x10] = param_18;
      plVar1[0x11] = param_19;
      *(undefined1 *)((long)plVar1 + 9) = (undefined1)param_20;
      *(undefined1 *)((long)plVar1 + 10) = param_20._1_1_;
      lVar2 = param_22;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x12];
      plVar1[0x12] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)((long)plVar1 + 0xb) = param_23;
      lVar2 = param_25;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x13];
      plVar1[0x13] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 10542ff70; end: 10542ff93; -[SQLAdTrackDeeplink copyWithZone:] */

undefined8 FUN_10542ff70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10542ff94; end: 1054300c7; -[SQLAdTrackDeeplink hash] */

undefined8 * FUN_10542ff94(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uStack_b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x48);
  lStack_a0 = -lVar6;
  if (-1 < lVar6) {
    lStack_a0 = lVar6;
  }
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  lVar6 = *(long *)(param_1 + 0x58);
  uStack_98 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  lStack_90 = -lVar6;
  if (-1 < lVar6) {
    lStack_90 = lVar6;
  }
  uStack_80 = *(undefined8 *)(param_1 + 0x68);
  uStack_88 = *(undefined8 *)(param_1 + 0x60);
  uStack_78 = *(undefined8 *)(param_1 + 0x70);
  lVar6 = *(long *)(param_1 + 0x78);
  lStack_70 = -lVar6;
  if (-1 < lVar6) {
    lStack_70 = lVar6;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_d8;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,0x16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1054302d8:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1054302e4;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])) && (puVar3[9] == param_3[9])) &&
         ((puVar3[0xb] == param_3[0xb] && (puVar3[0xc] == param_3[0xc])))))) &&
       ((puVar3[0xd] == param_3[0xd] &&
        ((((puVar3[0xe] == param_3[0xe] && (puVar3[0xf] == param_3[0xf])) &&
          ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
           (((puVar3[0x10] == param_3[0x10] && (puVar3[0x11] == param_3[0x11])) &&
            (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))))) &&
         ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
          (*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb))))))))) {
      dVar8 = ABS((double)puVar3[10] - (double)param_3[10]);
      if (((dVar8 < 2.2250738585072014e-308) ||
          (dVar8 < ABS((double)puVar3[10] + (double)param_3[10]) * 2.220446049250313e-16)) &&
         (((((lVar6 = puVar3[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = puVar3[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
           && (((lVar6 = puVar3[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))
               && ((lVar6 = puVar3[5], lVar6 == param_3[5] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
          (((lVar6 = puVar3[8], lVar6 == param_3[8] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = puVar3[0x12], lVar6 == param_3[0x12] ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) {
        puVar7 = (undefined8 *)puVar3[0x13];
        if (puVar7 != (undefined8 *)param_3[0x13]) {
          func_0x00010c071ae0();
          goto LAB_1054302e4;
        }
        goto LAB_1054302d8;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_1054302e4:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 1054300c8; end: 1054302ff; -[SQLAdTrackDeeplink isEqual:] */

long FUN_1054300c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1054302d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1054302e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
         ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
          (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))) &&
       ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
        ((((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
           (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
             (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
      if (((dVar4 < 2.2250738585072014e-308) ||
          (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                   2.220446049250313e-16)) &&
         (((((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           (((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
          (((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
        lVar3 = *(long *)(param_1 + 0x98);
        if (lVar3 != *(long *)(param_3 + 0x98)) {
          func_0x00010c071ae0();
          goto LAB_1054302e4;
        }
        goto LAB_1054302d8;
      }
    }
    lVar3 = 0;
  }
LAB_1054302e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105430300; end: 10543036b; -[SQLAdTrackDeeplink .cxx_destruct] */

void FUN_105430300(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10543036c; end: 1054307d7;  */

long * FUN_10543036c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18,long param_19,long param_20,long param_21,long param_22,
                    long param_23,long param_24,long param_25,undefined1 param_26,
                    undefined4 param_27,long param_28,undefined4 param_29,undefined1 param_30,
                    long param_31,long param_32,long param_33,long param_34,long param_35,
                    long param_36,long param_37,long param_38,long param_39,long param_40,
                    long param_41,long param_42,long param_43,long param_44,long param_45,
                    long param_46,long param_47)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_25);
  _objc_retain(param_32);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_47);
  plVar1 = (long *)0x0;
  if (param_9 != 0) {
    puStack_b0 = PTR_PTR_1126e84c0;
    plVar1 = &lStack_b8;
    lStack_b8 = param_9;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_11;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      plVar1[6] = param_14;
      plVar1[7] = param_15;
      lVar2 = param_16;
      func_0x00010bf51e00();
      lVar3 = plVar1[8];
      plVar1[8] = lVar2;
      _objc_release(lVar3);
      plVar1[9] = param_17;
      plVar1[10] = param_18;
      plVar1[0xb] = param_19;
      plVar1[0xc] = param_20;
      plVar1[0xd] = param_21;
      plVar1[0xe] = param_1;
      plVar1[0xf] = param_22;
      plVar1[0x10] = param_23;
      plVar1[0x11] = param_24;
      lVar2 = param_25;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x12];
      plVar1[0x12] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)(plVar1 + 1) = param_26;
      plVar1[0x13] = param_28;
      plVar1[0x14] = param_2;
      *(undefined1 *)((long)plVar1 + 9) = (undefined1)param_29;
      *(undefined1 *)((long)plVar1 + 10) = param_29._1_1_;
      *(undefined1 *)((long)plVar1 + 0xb) = param_29._2_1_;
      *(undefined1 *)((long)plVar1 + 0xc) = param_29._3_1_;
      *(undefined1 *)((long)plVar1 + 0xd) = param_30;
      plVar1[0x15] = param_31;
      lVar2 = param_32;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x16];
      plVar1[0x16] = lVar2;
      _objc_release(lVar3);
      plVar1[0x17] = param_33;
      plVar1[0x18] = param_3;
      plVar1[0x19] = param_4;
      plVar1[0x1a] = param_5;
      plVar1[0x1b] = param_6;
      lVar2 = param_34;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1c];
      plVar1[0x1c] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_35;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1d];
      plVar1[0x1d] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_36;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1e];
      plVar1[0x1e] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_37;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x1f];
      plVar1[0x1f] = lVar2;
      _objc_release(lVar3);
      plVar1[0x20] = param_7;
      plVar1[0x21] = param_38;
      plVar1[0x22] = param_8;
      plVar1[0x23] = param_39;
      plVar1[0x24] = param_40;
      plVar1[0x25] = param_41;
      plVar1[0x26] = param_42;
      plVar1[0x27] = param_43;
      plVar1[0x28] = param_44;
      plVar1[0x29] = param_45;
      plVar1[0x2a] = param_46;
      lVar2 = param_47;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x2b];
      plVar1[0x2b] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_47);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_25);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return plVar1;
}



/* Entry: 1054307d8; end: 1054307fb; -[SQLAdTrackEvent copyWithZone:] */

undefined8 FUN_1054307d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1054307fc; end: 105430ac7; -[SQLAdTrackEvent hash] */

undefined8 * FUN_1054307fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_1b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_1b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_1a8 = uVar2;
  func_0x00010bfde980();
  uStack_198 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_190 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a0 = uVar3;
  func_0x00010bfde980();
  uStack_160 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_158 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_158 = uStack_158 ^ uStack_158 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x88);
  uStack_138 = *(undefined8 *)(param_1 + 0x90);
  lStack_140 = -lVar6;
  if (-1 < lVar6) {
    lStack_140 = lVar6;
  }
  uStack_180 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_178 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_168 = *(undefined8 *)(param_1 + 0x60);
  uStack_170 = *(undefined8 *)(param_1 + 0x58);
  uStack_150 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_148 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_188 = uVar2;
  func_0x00010bfde980();
  uStack_130 = (ulong)*(byte *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x98);
  lStack_128 = -lVar6;
  if (-1 < lVar6) {
    lStack_128 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_120 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_120 = uStack_120 ^ uStack_120 >> 0x16;
  uVar10 = *(undefined4 *)(param_1 + 9);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_118 = (ulong)uVar1 & 0xff;
  uStack_110 = uVar7 >> 0x10 & 0xff;
  uStack_108 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_100 = (ulong)uVar9;
  uStack_f8 = (ulong)*(byte *)(param_1 + 0xd);
  lVar6 = *(long *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  lStack_f0 = -lVar6;
  if (-1 < lVar6) {
    lStack_f0 = lVar6;
  }
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0xb8);
  lStack_e0 = -lVar6;
  if (-1 < lVar6) {
    lStack_e0 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0xc0) + *(ulong *)(param_1 + 0xc0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_d8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 200) + *(ulong *)(param_1 + 200) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_d0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_d0 = uStack_d0 ^ uStack_d0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xd0) + *(ulong *)(param_1 + 0xd0) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar11 = ~*(ulong *)(param_1 + 0xd8) + *(ulong *)(param_1 + 0xd8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_c8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar7 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_c0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x108);
  uVar7 = ~*(ulong *)(param_1 + 0x100) + *(ulong *)(param_1 + 0x100) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_98 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uStack_80 = *(undefined8 *)(param_1 + 0x118);
  uVar7 = ~*(ulong *)(param_1 + 0x110) + *(ulong *)(param_1 + 0x110) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  lStack_90 = -lVar6;
  if (-1 < lVar6) {
    lStack_90 = lVar6;
  }
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x120));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x128));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x130));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x138));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x140));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x148));
  lVar6 = *(long *)(param_1 + 0x150);
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  lStack_48 = -lVar6;
  if (-1 < lVar6) {
    lStack_48 = lVar6;
  }
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_1b8;
  uStack_40 = uVar3;
  func_0x000100505190(puVar4,0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_105430fb8:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105430fc4;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        (((((puVar4[6] == param_3[6] && (puVar4[7] == param_3[7])) && (puVar4[9] == param_3[9])) &&
          ((puVar4[10] == param_3[10] && (puVar4[0xb] == param_3[0xb])))) &&
         (puVar4[0xc] == param_3[0xc])))) &&
       (((((((puVar4[0xd] == param_3[0xd] && (puVar4[0xf] == param_3[0xf])) &&
            (puVar4[0x10] == param_3[0x10])) &&
           ((((puVar4[0x11] == param_3[0x11] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1)))
             && (puVar4[0x13] == param_3[0x13])) &&
            ((*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9) &&
             (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))))) &&
          (((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
            ((*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc) &&
             (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))))) &&
           (puVar4[0x15] == param_3[0x15])))) &&
         ((((puVar4[0x17] == param_3[0x17] && (puVar4[0x21] == param_3[0x21])) &&
           (puVar4[0x23] == param_3[0x23])) &&
          (((puVar4[0x24] == param_3[0x24] && (puVar4[0x25] == param_3[0x25])) &&
           ((puVar4[0x26] == param_3[0x26] &&
            ((puVar4[0x27] == param_3[0x27] && (puVar4[0x28] == param_3[0x28])))))))))) &&
        ((puVar4[0x29] == param_3[0x29] && (puVar4[0x2a] == param_3[0x2a])))))) {
      dVar12 = ABS((double)puVar4[0xe] - (double)param_3[0xe]);
      if ((dVar12 < 2.2250738585072014e-308) ||
         (dVar12 < ABS((double)puVar4[0xe] + (double)param_3[0xe]) * 2.220446049250313e-16)) {
        dVar12 = ABS((double)puVar4[0x14] - (double)param_3[0x14]);
        if ((dVar12 < 2.2250738585072014e-308) ||
           (dVar12 < ABS((double)puVar4[0x14] + (double)param_3[0x14]) * 2.220446049250313e-16)) {
          dVar12 = ABS((double)puVar4[0x18] - (double)param_3[0x18]);
          if ((dVar12 < 2.2250738585072014e-308) ||
             (dVar12 < ABS((double)puVar4[0x18] + (double)param_3[0x18]) * 2.220446049250313e-16)) {
            dVar12 = ABS((double)puVar4[0x19] - (double)param_3[0x19]);
            if ((dVar12 < 2.2250738585072014e-308) ||
               (dVar12 < ABS((double)puVar4[0x19] + (double)param_3[0x19]) * 2.220446049250313e-16))
            {
              dVar12 = ABS((double)puVar4[0x1a] - (double)param_3[0x1a]);
              if ((dVar12 < 2.2250738585072014e-308) ||
                 (dVar12 < ABS((double)puVar4[0x1a] + (double)param_3[0x1a]) * 2.220446049250313e-16
                 )) {
                dVar12 = ABS((double)puVar4[0x1b] - (double)param_3[0x1b]);
                if ((dVar12 < 2.2250738585072014e-308) ||
                   (dVar12 < ABS((double)puVar4[0x1b] + (double)param_3[0x1b]) *
                             2.220446049250313e-16)) {
                  dVar12 = ABS((double)puVar4[0x20] - (double)param_3[0x20]);
                  if ((dVar12 < 2.2250738585072014e-308) ||
                     (dVar12 < ABS((double)puVar4[0x20] + (double)param_3[0x20]) *
                               2.220446049250313e-16)) {
                    dVar12 = ABS((double)puVar4[0x22] - (double)param_3[0x22]);
                    if (((((dVar12 < 2.2250738585072014e-308) ||
                          (dVar12 < ABS((double)puVar4[0x22] + (double)param_3[0x22]) *
                                    2.220446049250313e-16)) &&
                         ((((lVar6 = puVar4[2], lVar6 == param_3[2] ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                           ((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                          ((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
                        (((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                          (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                         (((((lVar6 = puVar4[8], lVar6 == param_3[8] ||
                             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                            ((lVar6 = puVar4[0x12], lVar6 == param_3[0x12] ||
                             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                           ((lVar6 = puVar4[0x16], lVar6 == param_3[0x16] ||
                            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                          ((lVar6 = puVar4[0x1c], lVar6 == param_3[0x1c] ||
                           (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
                       ((((lVar6 = puVar4[0x1d], lVar6 == param_3[0x1d] ||
                          (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                         ((lVar6 = puVar4[0x1e], lVar6 == param_3[0x1e] ||
                          (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                        ((lVar6 = puVar4[0x1f], lVar6 == param_3[0x1f] ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
                      puVar8 = (undefined8 *)puVar4[0x2b];
                      if (puVar8 != (undefined8 *)param_3[0x2b]) {
                        func_0x00010c071ae0();
                        goto LAB_105430fc4;
                      }
                      goto LAB_105430fb8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_105430fc4:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 105430ac8; end: 105430fdf; -[SQLAdTrackEvent isEqual:] */

long FUN_105430ac8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105430fb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105430fc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
          ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
           (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))) &&
       (((((((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
             (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
            (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))) &&
           ((((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
              (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
             (*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98))) &&
            ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
             (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
          (((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
            ((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
             (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))) &&
           (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))) &&
         ((((*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8) &&
            (*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108))) &&
           (*(long *)(param_1 + 0x118) == *(long *)(param_3 + 0x118))) &&
          (((*(long *)(param_1 + 0x120) == *(long *)(param_3 + 0x120) &&
            (*(long *)(param_1 + 0x128) == *(long *)(param_3 + 0x128))) &&
           ((*(long *)(param_1 + 0x130) == *(long *)(param_3 + 0x130) &&
            ((*(long *)(param_1 + 0x138) == *(long *)(param_3 + 0x138) &&
             (*(long *)(param_1 + 0x140) == *(long *)(param_3 + 0x140))))))))))) &&
        ((*(long *)(param_1 + 0x148) == *(long *)(param_3 + 0x148) &&
         (*(long *)(param_1 + 0x150) == *(long *)(param_3 + 0x150))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0xa0) - *(double *)(param_3 + 0xa0));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0xa0) + *(double *)(param_3 + 0xa0)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0xc0) - *(double *)(param_3 + 0xc0));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0xc0) + *(double *)(param_3 + 0xc0)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 200) - *(double *)(param_3 + 200));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 200) + *(double *)(param_3 + 200)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0xd0) - *(double *)(param_3 + 0xd0));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0xd0) + *(double *)(param_3 + 0xd0)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0xd8) - *(double *)(param_3 + 0xd8));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0xd8) + *(double *)(param_3 + 0xd8)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x100) - *(double *)(param_3 + 0x100));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x100) + *(double *)(param_3 + 0x100)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x110) - *(double *)(param_3 + 0x110));
                    if (((((dVar4 < 2.2250738585072014e-308) ||
                          (dVar4 < ABS(*(double *)(param_1 + 0x110) + *(double *)(param_3 + 0x110))
                                   * 2.220446049250313e-16)) &&
                         ((((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                           ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                          ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                        (((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                          (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                         (((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40)
                             || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                            ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90)
                             || (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                           ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0)
                            || (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                          ((lVar3 = *(long *)(param_1 + 0xe0), lVar3 == *(long *)(param_3 + 0xe0) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
                       ((((lVar3 = *(long *)(param_1 + 0xe8), lVar3 == *(long *)(param_3 + 0xe8) ||
                          (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                         ((lVar3 = *(long *)(param_1 + 0xf0), lVar3 == *(long *)(param_3 + 0xf0) ||
                          (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                        ((lVar3 = *(long *)(param_1 + 0xf8), lVar3 == *(long *)(param_3 + 0xf8) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
                      lVar3 = *(long *)(param_1 + 0x158);
                      if (lVar3 != *(long *)(param_3 + 0x158)) {
                        func_0x00010c071ae0();
                        goto LAB_105430fc4;
                      }
                      goto LAB_105430fb8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105430fc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105430fe0; end: 105431087; -[SQLAdTrackEvent .cxx_destruct] */

void FUN_105430fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105431088; end: 1054312b3;  */

void FUN_105431088(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b8f78;
    _objc_opt_new(PTR_PTR_1126b8f78);
    if (param_1 == 0) {
      _objc_retain(0);
      func_0x00010c1fd160(puVar6,param_2,0);
      _objc_release(0);
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(uVar7);
      func_0x00010c1fd160(puVar6,param_2,uVar7);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    _objc_retain(uVar7);
    func_0x00010c163720(puVar6,param_2,uVar7);
    _objc_release(uVar7);
    if (param_1 == 0) {
      func_0x00010c164dc0(puVar6,param_2,1);
      func_0x00010c219120(puVar6,param_2,0);
      func_0x00010c222b20(puVar6,param_2,0);
      func_0x00010c163f80(puVar6,param_2,0);
      uVar7 = 0;
    }
    else {
      if (*(ulong *)(param_1 + 0x58) < 0x17) {
        uVar3 = *(undefined4 *)(&UNK_10ddac270 + *(ulong *)(param_1 + 0x58) * 4);
      }
      else {
        uVar3 = 0;
      }
      func_0x00010c164dc0(puVar6,param_2,uVar3);
      func_0x00010c219120(puVar6,param_2,*(undefined4 *)(param_1 + 0x30));
      func_0x00010c222b20(puVar6,param_2,*(undefined4 *)(param_1 + 0x38));
      uVar4 = *(long *)(param_1 + 0x70) - 2;
      if (uVar4 < 0x14) {
        uVar3 = *(undefined4 *)(&UNK_10ddac2cc + uVar4 * 4);
      }
      else {
        uVar3 = 0;
      }
      func_0x00010c163f80(puVar6,param_2,uVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_1054312b4(uVar7);
    func_0x00010c1dfe40(puVar6,param_2,uVar7);
    if (param_1 == 0) {
      uVar7 = 0;
      FUN_1054312b4(0);
      func_0x00010c162ea0(puVar6,param_2,uVar7);
      func_0x00010c20d280(puVar6,param_2,0);
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      FUN_1054312b4(uVar7);
      func_0x00010c162ea0(puVar6,param_2,uVar7);
      func_0x00010c20d280(puVar6,param_2,*(undefined4 *)(param_1 + 0x50));
      uVar7 = *(undefined8 *)(param_1 + 0x48);
    }
    _objc_retain(uVar7);
    uVar2 = uVar7;
    func_0x00010c067ec0(uVar7);
    func_0x00010c17e5c0(puVar6,param_2,uVar2);
    _objc_release(uVar7);
    func_0x00010c278ce0(PTR__OBJC_CLASS___ATTrackingManager_1126b8f80);
    func_0x00010c17c720(puVar6,param_2,1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054312b4; end: 1054312d7;  */

undefined4 FUN_1054312b4(long param_1)

{
  if (param_1 - 1U < 0xf) {
    return *(undefined4 *)(&UNK_10ddac31c + (param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 1054312d8; end: 10543150b;  */

void FUN_1054312d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10543150c; end: 1054315af; -[SCAdInstantPageOperationalEventLogger initWithBlizzardLogger:performer:] */

undefined1 *
FUN_10543150c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e84c8;
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



/* Entry: 1054315b0; end: 105431687; -[SCAdInstantPageOperationalEventLogger logInstantPageOperationalEvent:] */

void FUN_1054315b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105431688; end: 1054316bb;  */

void FUN_105431688(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054316bc; end: 105431793; -[SCAdInstantPageOperationalEventLogger logInstantPageEvent:] */

void FUN_1054316bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105431794; end: 1054317c7;  */

void FUN_105431794(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054317c8; end: 105431b77; -[SCAdInstantPageOperationalEventLogger _logInstantPageOperationalEvent:] */

void FUN_1054317c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = *(undefined **)(lVar1 + 0x18);
  }
  _objc_retain(puVar6);
  puVar3 = puVar6;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar1 + 0x10);
    }
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(puVar6);
    if (lVar4 == 0) goto LAB_105431a60;
    puVar6 = PTR_PTR_1126b8f90;
    _objc_opt_new(PTR_PTR_1126b8f90);
    if (lVar1 == 0) {
      _objc_retain(0);
      func_0x00010c163720(puVar6,param_2,0);
      _objc_release(0);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      _objc_retain(uVar8);
      func_0x00010c163720(puVar6,param_2,uVar8);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(lVar1 + 0x18);
    }
    _objc_retain(uVar8);
    func_0x00010c1fd160(puVar6,param_2,uVar8);
    _objc_release(uVar8);
    if (lVar1 == 0) {
      uVar8 = 0;
      func_0x0001084baa08(0);
      func_0x00010c164dc0(puVar6,param_2,uVar8);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x58);
      func_0x0001084baa08(uVar8);
      func_0x00010c164dc0(puVar6,param_2,uVar8);
      uVar8 = *(undefined8 *)(lVar1 + 0x70);
    }
    func_0x0001084b952c(uVar8);
    func_0x00010c163f80(puVar6,param_2,uVar8);
    if (lVar1 == 0) {
      func_0x00010c219120(puVar6,param_2,0);
      func_0x00010c222b20(puVar6,param_2,0);
      uVar9 = 0;
    }
    else {
      func_0x00010c219120(puVar6,param_2,*(undefined8 *)(lVar1 + 0x30));
      func_0x00010c222b20(puVar6,param_2,*(undefined8 *)(lVar1 + 0x38));
      uVar9 = *(ulong *)(lVar1 + 0x48);
    }
    _objc_retain(uVar9);
    uVar5 = uVar9;
    func_0x00010c282760(uVar9);
    func_0x00010c17e600(puVar6,param_2,uVar5 & 0xffffffff);
    _objc_release(uVar9);
    if (lVar1 == 0) {
      func_0x00010c2047e0(puVar6,param_2,0);
      lVar7 = 0;
    }
    else {
      func_0x00010c2047e0(puVar6,param_2,*(undefined8 *)(lVar1 + 0x50));
      lVar7 = (long)*(double *)(lVar1 + 0x78);
    }
    func_0x00010c215e20(puVar6,param_2,lVar7);
    if (lVar2 == 0) {
      func_0x00010c163f60(puVar6,param_2,0);
      uVar8 = 0;
    }
    else {
      func_0x00010c163f60(puVar6,param_2,*(undefined8 *)(lVar2 + 0x18));
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
    }
    _objc_retain(uVar8);
    func_0x00010c164e60(puVar6,param_2,uVar8);
    _objc_release(uVar8);
    if (lVar2 == 0) {
      _objc_retain(0);
      func_0x00010c1e3e20(puVar6,param_2,0);
      _objc_release(0);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x28);
      _objc_retain(uVar8);
      func_0x00010c1e3e20(puVar6,param_2,uVar8);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
    }
    FUN_105431b78(uVar8);
    func_0x00010c197d00(puVar6,param_2,uVar8);
    if (lVar2 == 0) {
      uVar8 = 0;
      func_0x000105431bcc(0);
      func_0x00010c207200(puVar6,param_2,uVar8);
      func_0x00010c1ec220(puVar6,param_2,0xffffffffffffffff);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x30);
      func_0x000105431bcc(uVar8);
      func_0x00010c207200(puVar6,param_2,uVar8);
      lVar7 = *(long *)(lVar2 + 0x38);
      if (3 < lVar7 - 1U) {
        lVar7 = -1;
      }
      func_0x00010c1ec220(puVar6,param_2,lVar7);
      uVar8 = *(undefined8 *)(lVar2 + 0x40);
    }
    _objc_retain(uVar8);
    func_0x00010c1aabc0(puVar6,param_2,uVar8);
    _objc_release(uVar8);
    if (lVar2 == 0) {
      func_0x00010c1aa400(puVar6,param_2,0);
      uVar8 = 0;
    }
    else {
      func_0x00010c1aa400(puVar6,param_2,*(undefined8 *)(lVar2 + 0x48));
      uVar8 = *(undefined8 *)(lVar2 + 0x50);
    }
    _objc_retain(uVar8);
    func_0x00010c197200(puVar6,param_2,uVar8);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
  }
  _objc_release(puVar6);
LAB_105431a60:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105431b78; end: 105431bef;  */

undefined8 FUN_105431b78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 5;
  if (param_1 != 0x13) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = 4;
  if (param_1 != 0x12) {
    uVar2 = uVar1;
  }
  uVar1 = 3;
  if (param_1 != 0x11) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (param_1 != 0x10) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar3 = 0;
  if (param_1 != 3) {
    uVar3 = uVar2;
  }
  uVar2 = 1;
  if (param_1 != 1) {
    uVar2 = uVar3;
  }
  if (param_1 < 0x11) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105431bf0; end: 105431f3f; -[SCAdInstantPageOperationalEventLogger _logInstantPageEvent:] */

void FUN_105431bf0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = *(undefined **)(lVar1 + 0x18);
  }
  _objc_retain(puVar6);
  puVar3 = puVar6;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar1 + 0x10);
    }
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(puVar6);
    if (lVar4 == 0) goto LAB_105431e48;
    puVar6 = PTR_PTR_1126b8f90;
    _objc_opt_new(PTR_PTR_1126b8f90);
    if (lVar1 == 0) {
      _objc_retain(0);
      func_0x00010c163720(puVar6,param_2,0);
      _objc_release(0);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      _objc_retain(uVar8);
      func_0x00010c163720(puVar6,param_2,uVar8);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(lVar1 + 0x18);
    }
    _objc_retain(uVar8);
    func_0x00010c1fd160(puVar6,param_2,uVar8);
    _objc_release(uVar8);
    if (lVar1 == 0) {
      uVar8 = 0;
      func_0x0001084baa08(0);
      func_0x00010c164dc0(puVar6,param_2,uVar8);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x58);
      func_0x0001084baa08(uVar8);
      func_0x00010c164dc0(puVar6,param_2,uVar8);
      uVar8 = *(undefined8 *)(lVar1 + 0x70);
    }
    func_0x0001084b952c(uVar8);
    func_0x00010c163f80(puVar6,param_2,uVar8);
    if (lVar1 == 0) {
      func_0x00010c219120(puVar6,param_2,0);
      func_0x00010c222b20(puVar6,param_2,0);
      uVar9 = 0;
    }
    else {
      func_0x00010c219120(puVar6,param_2,*(undefined8 *)(lVar1 + 0x30));
      func_0x00010c222b20(puVar6,param_2,*(undefined8 *)(lVar1 + 0x38));
      uVar9 = *(ulong *)(lVar1 + 0x48);
    }
    _objc_retain(uVar9);
    uVar5 = uVar9;
    func_0x00010c282760(uVar9);
    func_0x00010c17e600(puVar6,param_2,uVar5 & 0xffffffff);
    _objc_release(uVar9);
    if (lVar1 == 0) {
      func_0x00010c2047e0(puVar6,param_2,0);
      lVar7 = 0;
    }
    else {
      func_0x00010c2047e0(puVar6,param_2,*(undefined8 *)(lVar1 + 0x50));
      lVar7 = (long)*(double *)(lVar1 + 0x78);
    }
    func_0x00010c215e20(puVar6,param_2,lVar7);
    if (lVar2 == 0) {
      func_0x00010c163f60(puVar6,param_2,0);
      uVar8 = 0;
    }
    else {
      func_0x00010c163f60(puVar6,param_2,*(undefined8 *)(lVar2 + 0x18));
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
    }
    _objc_retain(uVar8);
    func_0x00010c164e60(puVar6,param_2,uVar8);
    _objc_release(uVar8);
    if (lVar2 == 0) {
      _objc_retain(0);
      func_0x00010c1e3e20(puVar6,param_2,0);
      _objc_release(0);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      _objc_retain(uVar8);
      func_0x00010c1e3e20(puVar6,param_2,uVar8);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
    }
    FUN_105431b78(uVar8);
    func_0x00010c197d00(puVar6,param_2,uVar8);
    if (lVar2 == 0) {
      uVar8 = 0;
      func_0x000105431bcc(0);
      func_0x00010c207200(puVar6,param_2,uVar8);
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x40);
      func_0x000105431bcc(uVar8);
      func_0x00010c207200(puVar6,param_2,uVar8);
      uVar8 = *(undefined8 *)(lVar2 + 0x50);
    }
    func_0x00010c1aa400(puVar6,param_2,uVar8);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
  }
  _objc_release(puVar6);
LAB_105431e48:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105431f40; end: 105431f6f; -[SCAdInstantPageOperationalEventLogger .cxx_destruct] */

void FUN_105431f40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105431f70; end: 105432017; -[SCAdInstantPagePaymentEventLogger initWithPerformer:spectrum:] */

undefined1 *
FUN_105431f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e84d0;
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
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105432018; end: 1054320ef; -[SCAdInstantPagePaymentEventLogger logPaymentEventWithInstantPageEvent:] */

void FUN_105432018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054320f0; end: 105432123;  */

void FUN_1054320f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105432124; end: 1054321fb; -[SCAdInstantPagePaymentEventLogger logPaymentEventWithAsmEvent:] */

void FUN_105432124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054321fc; end: 10543222f;  */

void FUN_1054321fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105432230; end: 105432723; -[SCAdInstantPagePaymentEventLogger _logPaymentEventWithInstantPageEvent:] */

void FUN_105432230(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_130;
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
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_105431088();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8f98;
  _objc_opt_new();
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (long)*(double *)(lVar3 + 0x78);
  }
  func_0x00010c197c20(puVar5,param_2,lVar11);
  lVar11 = param_3;
  FUN_1054312d8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (uVar12 = param_1, func_0x00010be6f840(), (int)uVar12 == 0)) {
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x00010c0f1ce0(lVar6,param_2,uVar12);
      uVar1 = (int)lVar7 - 1;
      if (uVar1 < 8) {
        uVar12 = (ulong)*(uint *)(&UNK_10ddac3b0 + (ulong)uVar1 * 4);
        goto LAB_105432320;
      }
    }
    uVar12 = 0;
  }
LAB_105432320:
  func_0x00010c187720(puVar5,param_2,uVar12);
  func_0x00010c1a5fc0(puVar5,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1d8840(puVar5,param_2,*(undefined8 *)(param_1 + 0x38));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar7;
  func_0x00010bf52a60();
  if (lVar13 == 0) {
    lVar19 = 0;
    lVar20 = 0;
    lVar18 = 0;
    iVar17 = 0;
  }
  else {
    lVar19 = 0;
    lVar20 = 0;
    lVar18 = 0;
    iVar17 = 0;
    lVar14 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar7);
        }
        lVar15 = *(long *)(lStack_128 + lVar16 * 8);
        if (lVar18 == 0) {
          if (lVar15 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = *(long *)(lVar15 + 0x60);
          }
          _objc_retain(lVar18);
          if (iVar17 == 0) goto LAB_1054323ec;
joined_r0x000105432420:
          if (lVar19 == 0) {
            if (lVar15 == 0) {
              lVar19 = 0;
            }
            else {
              lVar19 = *(long *)(lVar15 + 0x80);
            }
LAB_105432410:
            _objc_retain(lVar19);
          }
          if (lVar15 == 0) goto LAB_10543246c;
          dVar21 = *(double *)(lVar15 + 0x58);
          dVar22 = (double)*(long *)(lVar15 + 0x30);
        }
        else {
          if (iVar17 != 0) goto joined_r0x000105432420;
LAB_1054323ec:
          if (lVar15 != 0) {
            uVar12 = *(long *)(lVar15 + 0x10) - 3;
            if (uVar12 < 0x13) {
              iVar17 = *(int *)(&UNK_10ddac3d0 + uVar12 * 4);
            }
            else {
              iVar17 = 0;
            }
            goto joined_r0x000105432420;
          }
          iVar17 = 0;
          if (lVar19 == 0) goto LAB_105432410;
LAB_10543246c:
          dVar21 = 0.0;
          dVar22 = 0.0;
        }
        lVar20 = (long)((double)lVar20 + dVar22 * dVar21);
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar13 != 0);
  }
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  _objc_release();
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(lVar14 + 0x40) == 8;
  }
  _objc_release();
  _objc_release(lVar7);
  if (lVar13 == 0x14) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar8);
  }
  else {
    if (lVar13 - 0xdU < 2) {
      if (lVar3 == 0) goto LAB_10543271c;
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      goto LAB_10543256c;
    }
    if ((bool)(lVar13 == 4 & bVar2)) {
      *(undefined1 *)(param_1 + 0x48) = 0;
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      _objc_release(uVar8);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_105432688;
      if (iVar17 == 0) goto LAB_105432688;
    }
  }
  while( true ) {
    func_0x00010c197d00(puVar5,param_2,iVar17);
    func_0x00010c1adbe0(puVar5,param_2,lVar11);
    func_0x00010c1e28c0(puVar5,param_2,lVar18);
    func_0x00010c218700(puVar5,param_2,lVar20);
    func_0x00010c21dea0(puVar5,param_2,lVar19);
    func_0x00010c1adba0(lVar4,param_2,puVar5);
    puVar10 = PTR_PTR_1126b86e8;
    _objc_opt_new(PTR_PTR_1126b86e8);
    func_0x00010c16a6c0();
    param_1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c500();
    _objc_release(param_1);
    _objc_release(puVar10);
LAB_105432688:
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_10543271c:
    uVar8 = 0;
LAB_10543256c:
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    _objc_release(uVar9);
    _objc_retain(lVar11);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar11;
    _objc_release(uVar8);
    _objc_retain(lVar18);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar18;
    _objc_release(uVar8);
    *(long *)(param_1 + 0x30) = lVar20;
  }
  return;
}



/* Entry: 105432724; end: 105432f63; -[SCAdInstantPagePaymentEventLogger _logPaymentEventWithAsmEvent:] */

void FUN_105432724(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *unaff_x19;
  ulong uVar11;
  undefined *unaff_x20;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *unaff_x24;
  undefined *puVar15;
  long lVar16;
  undefined *unaff_x26;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined4 uStack_14c;
  undefined4 uStack_134;
  undefined8 uStack_130;
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
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_105432ee8;
  unaff_x26 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = unaff_x26;
  FUN_105431088();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8f98;
  _objc_opt_new();
  puVar3 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = param_1;
  if (puVar3 == (undefined *)0x0) {
    _objc_release();
  }
  else {
    unaff_x19 = *(undefined **)(puVar3 + 0x10);
    _objc_release();
    unaff_x20 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if (unaff_x19 == (undefined *)0x3) {
      unaff_x19 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = puVar2;
      if (unaff_x19 == (undefined *)0x0) goto LAB_105432f2c;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x18);
      goto LAB_1054327ec;
    }
  }
  puVar3 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release();
  }
  else {
    unaff_x19 = *(undefined **)(puVar3 + 0x10);
    _objc_release();
    if (unaff_x19 == (undefined *)0x4) {
      puVar3 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = *(undefined **)(puVar3 + 0x28);
      }
      _objc_retain(puVar13);
      _objc_release(puVar3);
      puVar3 = param_1;
      func_0x00010be6f840(param_1,param_2,puVar13);
      uStack_14c = SUB84(puVar3,0);
      uStack_134 = 0;
      param_1[0x48] = 0;
      param_1 = (undefined *)0xb;
      goto LAB_105432d80;
    }
  }
  puVar13 = (undefined *)0x0;
  do {
    while( true ) {
      _objc_release(puVar13);
      _objc_release(puVar2);
      _objc_release(unaff_x24);
      _objc_release(unaff_x26);
      unaff_x20 = puVar13;
LAB_105432ee8:
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
LAB_105432f2c:
      uVar14 = 0;
      puStack_160 = param_1;
LAB_1054327ec:
      _objc_retain(uVar14);
      uVar4 = uVar14;
      func_0x00010bf64920(uVar14,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1900(unaff_x20,param_2,uVar4,1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar14);
      _objc_release(unaff_x19);
      puVar13 = unaff_x20;
      func_0x00010c0e00e0(unaff_x20,param_2,&PTR____CFConstantStringClassReference_110ddd938);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puStack_160;
      func_0x00010be6f840();
      uStack_14c = SUB84(puVar2,0);
      puVar2 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(puVar2 + 0x20);
      }
      _objc_retain(uVar14);
      uVar4 = uVar14;
      func_0x00010c0720c0(uVar14,param_2,&PTR____CFConstantStringClassReference_110ddd958);
      _objc_release(uVar14);
      _objc_release(puVar2);
      puVar2 = puStack_168;
      if ((int)uVar4 == 0) break;
      puVar3 = puStack_160;
      func_0x00010be1ee00(puStack_160,param_2,unaff_x20,
                          &PTR____CFConstantStringClassReference_110ddd958);
      _objc_retainAutoreleasedReturnValue();
      unaff_x19 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(unaff_x19);
      puVar3 = unaff_x19;
      func_0x00010bf52a60(unaff_x19,param_2,&uStack_130,auStack_f0,0x10);
      if (puVar3 == (undefined *)0x0) {
        uStack_134 = 0;
        param_1 = (undefined *)0x0;
      }
      else {
        uStack_134 = 0;
        param_1 = (undefined *)0x0;
        lVar16 = *plStack_120;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar16) {
              _objc_enumerationMutation(unaff_x19);
            }
            uVar11 = *(ulong *)(lStack_128 + (long)puVar15 * 8);
            uVar12 = uVar11;
            func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar12;
            func_0x00010c0720c0();
            if ((uVar6 & 1) == 0) {
              _objc_release(uVar12);
LAB_1054329f8:
              uVar12 = uVar11;
              func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar12;
              func_0x00010c0720c0();
              if ((uVar6 & 1) == 0) {
                _objc_release(uVar12);
              }
              else {
                func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998)
                ;
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar11;
                func_0x00010c0720c0();
                _objc_release(uVar11);
                _objc_release(uVar12);
                bVar1 = (uVar6 & 1) != 0;
                if (bVar1) {
                  uStack_134 = 1;
                }
                uVar10 = 5;
                if (!bVar1) {
                  uVar10 = (uint)param_1;
                }
                param_1 = (undefined *)(ulong)uVar10;
              }
            }
            else {
              uVar6 = uVar11;
              func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar6;
              func_0x00010c0720c0();
              _objc_release(uVar6);
              _objc_release(uVar12);
              if ((uVar5 & 1) == 0) goto LAB_1054329f8;
              param_1 = (undefined *)0x4;
            }
            puVar15 = puVar15 + 1;
          } while (puVar3 != puVar15);
          puVar3 = unaff_x19;
          func_0x00010bf52a60(unaff_x19,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(unaff_x19);
      _objc_release(unaff_x19);
      _objc_release(unaff_x20);
      if ((int)param_1 != 0) {
LAB_105432d80:
        puVar3 = param_3;
        func_0x00010bf99b20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(puVar3 + 0x30);
        }
        _objc_retain(uVar14);
        func_0x00010c21dea0(puVar2,param_2,uVar14);
        _objc_release(uVar14);
        _objc_release(puVar3);
        func_0x00010c187720(puVar2,param_2,uStack_14c);
        func_0x00010c197d00(puVar2,param_2,param_1);
        puVar3 = param_3;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (long)*(double *)(puVar3 + 0x78);
        }
        func_0x00010c197c20(puVar2,param_2,lVar16);
        _objc_release(puVar3);
        func_0x00010c1d8840(puVar2,param_2,puVar13);
        func_0x00010c1adbe0(puVar2,param_2,*(undefined8 *)(puStack_160 + 0x20));
        func_0x00010c1e28c0(puVar2,param_2,*(undefined8 *)(puStack_160 + 0x28));
        func_0x00010c218700(puVar2,param_2,*(undefined8 *)(puStack_160 + 0x30));
        if ((int)param_1 == 5) {
          func_0x00010c1990c0(puVar2,param_2,uStack_134);
        }
        func_0x00010c1a5fc0(puVar2,param_2,puStack_160[0x48]);
        func_0x00010c1adba0(unaff_x24,param_2,puVar2);
        unaff_x19 = PTR_PTR_1126b86e8;
        _objc_opt_new();
        func_0x00010c16a6c0();
        uVar14 = *(undefined8 *)(puStack_160 + 0x10);
        func_0x00010c269d40(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25c500();
        _objc_release(uVar14);
        _objc_release(unaff_x19);
      }
    }
    puVar3 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(ulong *)(puVar3 + 0x20);
    }
    _objc_retain(uVar12);
    uVar6 = uVar12;
    func_0x00010c0720c0(uVar12,param_2,&PTR____CFConstantStringClassReference_110ddd9f8);
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar12);
      _objc_release(puVar3);
LAB_105432b84:
      unaff_x19 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x19 == (undefined *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
      }
      _objc_retain(uVar14);
      uVar4 = uVar14;
      func_0x00010c0720c0(uVar14,param_2,&PTR____CFConstantStringClassReference_110ddda58);
      _objc_release(uVar14);
      _objc_release(unaff_x19);
      if ((int)uVar4 != 0) {
        unaff_x19 = puStack_160;
        func_0x00010be1ee00(puStack_160,param_2,unaff_x20,
                            &PTR____CFConstantStringClassReference_110ddda58);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0720c0();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar15);
        _objc_release(puVar3);
        _objc_release(unaff_x19);
        if (((ulong)puVar9 & 1) != 0) {
          _objc_release(unaff_x20);
          uStack_134 = 2;
          param_1 = (undefined *)0x5;
          goto LAB_105432d80;
        }
      }
    }
    else {
      puVar15 = puStack_160;
      func_0x00010be1ee00(puStack_160,param_2,unaff_x20,
                          &PTR____CFConstantStringClassReference_110ddd9f8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      _objc_release(puVar15);
      _objc_release(uVar12);
      _objc_release(puVar3);
      if ((int)puVar8 == 0) goto LAB_105432b84;
      _objc_retain(puVar13);
      uVar14 = *(undefined8 *)(puStack_160 + 0x38);
      *(undefined **)(puStack_160 + 0x38) = puVar13;
      _objc_release(uVar14);
      puStack_160[0x48] = 0;
      unaff_x19 = puVar13;
    }
    _objc_release(unaff_x20);
    param_1 = puStack_160;
  } while( true );
}



/* Entry: 105432f64; end: 105433017; -[SCAdInstantPagePaymentEventLogger _pageSourceFromUrl:] */

undefined4 FUN_105432f64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dddad8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dddaf8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dddb18);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dddb38);
        uVar2 = 4;
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dddb58);
          uVar2 = 4;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 7;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 5;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105433018; end: 10543308b; -[SCAdInstantPagePaymentEventLogger _getEventDataWithPayload:event:] */

void FUN_105433018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dddb78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543308c; end: 1054330eb; -[SCAdInstantPagePaymentEventLogger .cxx_destruct] */

void FUN_10543308c(long param_1)

{
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



/* Entry: 1054330ec; end: 105433467; -[SCAdTrackEventRepositoryImpl initWithTransactorProvider:adCrashLogger:asmLogger:instantPageOperationalLogger:instantPagePaymentEventLogger:webBrowsingConfigProvider:performer:] */

undefined8 *
FUN_1054330ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e84d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105433468; end: 1054334db;  */

void FUN_105433468(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8fa0;
  _objc_opt_class(PTR_PTR_1126b8fa0);
  uVar3 = uVar1;
  func_0x00010c279940(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110ddd558,0,0,1,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054334dc; end: 105433f9f; -[SCAdTrackEventRepositoryImpl beginObservationWithAdUnifiedEventStreams:] */

void FUN_1054334dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_318 [8];
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105433fa0;
  puStack_78 = &UNK_110887e20;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adDeepLinkEventObservableV2_11259a370);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef2720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x105433fe8;
    puStack_a0 = &UNK_110887e50;
    _objc_copyWeak(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adAppInstallEventObservableV2_11259a0a0);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef1be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105434030;
    puStack_c8 = &UNK_110888910;
    _objc_copyWeak(auStack_c0,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adAdToMessageEventObservableV2_11259a088);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef1b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105434078;
    puStack_f0 = &UNK_110888940;
    _objc_copyWeak(auStack_e8,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e8);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adReportEventObservableV2_11259aac8);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef4480(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x1054340c0;
    puStack_118 = &UNK_110888970;
    _objc_copyWeak(auStack_110,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_110);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adReminderEventObservableV2_11259aa78);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef4340(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x105434108;
    puStack_140 = &UNK_1108889a0;
    _objc_copyWeak(auStack_138,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_138);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adStickersEventObservableV2_11259af68);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef5700(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar1;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x105434150;
    puStack_168 = &UNK_1108889d0;
    _objc_copyWeak(auStack_160,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_160);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adSubscribeEventObservableV2_11259af78);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef5740(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x105434198;
    puStack_190 = &UNK_110888a00;
    _objc_copyWeak(auStack_188,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_188);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adWebviewNavigationEventObservab_11259b318);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef65c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar1;
    uStack_1c8 = 0xc2000000;
    uStack_1c0 = 0x1054341e0;
    puStack_1b8 = &UNK_110887e80;
    _objc_copyWeak(auStack_1b0,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_1b0);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adPlayableEventObservable_11259a8a8);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef3c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = puVar1;
    uStack_1f0 = 0xc2000000;
    uStack_1e8 = 0x105434228;
    puStack_1e0 = &UNK_110888a30;
    _objc_copyWeak(auStack_1d8,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_1d8);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_tooltipImpressionEventObservable_11267a9c0);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010c273e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x105434270;
    puStack_208 = &UNK_110888a60;
    _objc_copyWeak(auStack_200,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_200);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adEndCardEventObservable_11259a3c8);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef2880(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_248 = puVar1;
    uStack_240 = 0xc2000000;
    uStack_238 = 0x1054342b8;
    puStack_230 = &UNK_110888a90;
    _objc_copyWeak(auStack_228,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_228);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adLiveReviewEventObservable_11259a6d0);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef34a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_270 = puVar1;
    uStack_268 = 0xc2000000;
    uStack_260 = 0x105434300;
    puStack_258 = &UNK_110888ac0;
    _objc_copyWeak(auStack_250,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_250);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adLeadGenerationEventObservable_11259a620);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef31e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = puVar1;
    uStack_290 = 0xc2000000;
    uStack_288 = 0x105434348;
    puStack_280 = &UNK_110888af0;
    _objc_copyWeak(auStack_278,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_278);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_dpaImpressionEventObservable_1125bfed0);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bf894a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_2c0 = puVar1;
    uStack_2b8 = 0xc2000000;
    uStack_2b0 = 0x105434390;
    puStack_2a8 = &UNK_110888b20;
    _objc_copyWeak(auStack_2a0,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_2a0);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adModularLensEventObservable_11259a7b0);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef3820(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = puVar1;
    uStack_2e0 = 0xc2000000;
    uStack_2d8 = 0x1054343d8;
    puStack_2d0 = &UNK_110888b50;
    _objc_copyWeak(auStack_2c8,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_2c8);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adCaptionCtaImpressionEventObser_11259a240);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef2260(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_310 = puVar1;
    uStack_308 = 0xc2000000;
    uStack_300 = 0x105434420;
    puStack_2f8 = &UNK_110888b80;
    _objc_copyWeak(auStack_2f0,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_2f0);
  }
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adSKOverlayEventObservable_11259acd0);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef4ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_318,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_318);
  }
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105433fa0; end: 1054344af;  */

void FUN_105433fa0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be676c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054344b0; end: 1054347ff; -[SCAdTrackEventRepositoryImpl beginObservationWithAdWebviewEventStreams:] */

void FUN_1054344b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = param_3;
  func_0x00010bef6680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105434800;
  puStack_88 = &UNK_110888860;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef6560(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105434848;
  puStack_b0 = &UNK_110888be0;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105434890;
  puStack_d8 = &UNK_110887e80;
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef6520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1054348d8;
  puStack_100 = &UNK_110888c10;
  _objc_copyWeak(auStack_f8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef6480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_120,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 105434800; end: 105434967;  */

void FUN_105434800(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105434968; end: 105434bab; -[SCAdTrackEventRepositoryImpl beginObservationWithAdInstantPageEventStreams:] */

void FUN_105434968(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_3;
  func_0x00010bef30a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105434bac;
  puStack_78 = &UNK_110888c70;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf0ac60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105434bf4;
  puStack_a0 = &UNK_110888c40;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adInstantPageOperationalEventObs_11259a5d8);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010bef30c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
  }
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105434bac; end: 105434c83;  */

void FUN_105434bac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69a00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105434c84; end: 105434cab; -[SCAdTrackEventRepositoryImpl loggingEventObservable] */

void FUN_105434c84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105434cac; end: 105434db3; -[SCAdTrackEventRepositoryImpl beginObservationWithSponsoredSnapEventStreams:] */

void FUN_105434cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c24a8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105434db4; end: 105434dfb;  */

void FUN_105434db4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105434dfc; end: 105434e23; -[SCAdTrackEventRepositoryImpl sponsoredSnapEventObservable] */

void FUN_105434dfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105434e24; end: 105434f2b; -[SCAdTrackEventRepositoryImpl beginObservationWithSponsoredSnapBannerEventStreams:] */

void FUN_105434e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c24a760(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105434f2c; end: 105434f73;  */

void FUN_105434f2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105434f74; end: 105434f9b; -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventObservable] */

void FUN_105434f74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105434f9c; end: 1054350a3; -[SCAdTrackEventRepositoryImpl beginObservationWithAdReportEventStreams:] */

void FUN_105434f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef4480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1054350a4; end: 1054350eb;  */

void FUN_1054350a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be678a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054350ec; end: 105435113; -[SCAdTrackEventRepositoryImpl adReportEventObservableV2] */

void FUN_1054350ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105435114; end: 10543511b; -[SCAdTrackEventRepositoryImpl streamsType] */

undefined8 FUN_105435114(void)

{
  return 0;
}



/* Entry: 10543511c; end: 105435123; -[SCAdTrackEventRepositoryImpl adLifecycleEventObservable] */

undefined8 FUN_10543511c(void)

{
  return 0;
}



/* Entry: 105435124; end: 10543512b; -[SCAdTrackEventRepositoryImpl adInteractionEventObservable] */

undefined8 FUN_105435124(void)

{
  return 0;
}



/* Entry: 10543512c; end: 105435153; -[SCAdTrackEventRepositoryImpl adLifecycleEventObservableV2] */

void FUN_10543512c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105435154; end: 10543517b; -[SCAdTrackEventRepositoryImpl adWebviewNavigationEventObservable] */

void FUN_105435154(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543517c; end: 1054351a3; -[SCAdTrackEventRepositoryImpl adWebviewUserEventObservableV2] */

void FUN_10543517c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054351a4; end: 1054351cb; -[SCAdTrackEventRepositoryImpl adDeepLinkEventObservableV2] */

void FUN_1054351a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054351cc; end: 1054351f3; -[SCAdTrackEventRepositoryImpl adAppInstallEventObservableV2] */

void FUN_1054351cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054351f4; end: 10543521b; -[SCAdTrackEventRepositoryImpl adLeadGenerationEventObservable] */

void FUN_1054351f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543521c; end: 105435243; -[SCAdTrackEventRepositoryImpl adAdToMessageEventObservableV2] */

void FUN_10543521c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


