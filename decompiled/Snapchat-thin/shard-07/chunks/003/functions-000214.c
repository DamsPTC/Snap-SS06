/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053d2cdc; end: 1053d2d23; -[SCCofBasedUserSegmentsProviderImpl .cxx_destruct] */

void FUN_1053d2cdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d2d24; end: 1053d2dc7; -[SCLensContentCacheLogger initWithGrapheneRegistry:isFromRegistration:deviceModel:] */

undefined1 *
FUN_1053d2d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053d2dc8; end: 1053d2feb; -[SCLensContentCacheLogger logLensContentReturnLatency:itemsCount:] */

void FUN_1053d2dc8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar3 = param_2;
  FUN_1053d2fec();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8078;
  if ((int)lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd8098;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcb858;
  if (*(char *)(param_2 + 0x18) == '\0') {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd80b8;
  }
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar1);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  lVar3 = param_2;
  func_0x00010c0981e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126b84e0;
  func_0x00010c08ad40(PTR_PTR_1126b84e0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110dd8018,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dd8038,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010befbfe0(lVar3,param_3,puVar5,(long)(param_1 * 1000.0));
  puVar4 = PTR_PTR_1126b84e0;
  func_0x00010bf4c160(PTR_PTR_1126b84e0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110dd8018,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dd8038,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar4);
  func_0x00010bef9180(lVar3,param_3,puVar6,param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1053d2fec; end: 1053d308f;  */

undefined1 FUN_1053d2fec(void)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053d3314;
  puStack_50 = &UNK_110847658;
  puStack_38 = puStack_48;
  if (lRam00000001136bb8f8 != -1) {
    func_0x00010002a2fc(0x1136bb8f8,&puStack_68);
  }
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1053d3090; end: 1053d32e7; -[SCLensContentCacheLogger logLensContentReturnError:] */

void FUN_1053d3090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar4;
  
  uVar4 = param_3;
  _objc_retain();
  iVar3 = (int)uVar4;
  FUN_1053d2fec();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8078;
  if (iVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd8098;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcb858;
  if (*(char *)(param_1 + 0x18) == '\0') {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd80b8;
  }
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c0981e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b84e0;
  func_0x00010bf987e0(PTR_PTR_1126b84e0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dd8018,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dd8038,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0df780(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110db0dd8,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  uVar4 = param_3;
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110dca358,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c09e560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dd8058,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar4);
  func_0x00010bfec2a0(lVar5,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1053d32e8; end: 1053d3313; -[SCLensContentCacheLogger .cxx_destruct] */

void FUN_1053d32e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1053d3314; end: 1053d3327;  */

void FUN_1053d3314(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1053d3328; end: 1053d3353; +[SCGrapheneLenscontentcachetrackerMetric latency] */

void FUN_1053d3328(void)

{
  _objc_alloc(PTR_PTR_1126b84e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d3354; end: 1053d337f; +[SCGrapheneLenscontentcachetrackerMetric contentCount] */

void FUN_1053d3354(void)

{
  _objc_alloc(PTR_PTR_1126b84e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d3380; end: 1053d33ab; +[SCGrapheneLenscontentcachetrackerMetric error] */

void FUN_1053d3380(void)

{
  _objc_alloc(PTR_PTR_1126b84e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d33ac; end: 1053d344b; -[SCGrapheneLenscontentcachetrackerMetric description] */

void FUN_1053d33ac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd80d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd80d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8020;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053d344c; end: 1053d35a3; -[SCGrapheneRegistry lenscontentcachetrackerGraphene] */

void FUN_1053d344c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053d34d4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb908 != -1) {
    func_0x00010002a2fc(0x1136bb908,&puStack_48);
  }
  uVar1 = uRam00000001136bb900;
  _objc_retain(uRam00000001136bb900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053d35a4; end: 1053d3617; -[SCUnlockableMockedDataStoreServices initWithUnlockableMockedDataStore:] */

undefined1 * FUN_1053d35a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8028;
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



/* Entry: 1053d3618; end: 1053d361f; -[SCUnlockableMockedDataStoreServices unlockableMockedDataStore] */

undefined8 FUN_1053d3618(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053d3620; end: 1053d364f; -[SCUnlockableMockedDataStoreServices setUnlockableMockedDataStore:] */

void FUN_1053d3620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053d3650; end: 1053d365b; -[SCUnlockableMockedDataStoreServices .cxx_destruct] */

void FUN_1053d3650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d365c; end: 1053d36df; -[SCUnlockableMockedDataStoreServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053d365c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b84e8;
  _objc_alloc(PTR_PTR_1126b84e8);
  lVar2 = param_1;
  func_0x00010bed1800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059240(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112722a20);
  }
  func_0x00010bf9d660(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053d36e0; end: 1053d36eb; -[SCUnlockableMockedDataStoreServicesEntryPoint _unlockableMockedDataStore] */

void FUN_1053d36e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b84f0,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 1053d36ec; end: 1053d3727; -[SCUnlockableMockedDataStoreServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053d36ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722a20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722a1c);
  return;
}



/* Entry: 1053d3728; end: 1053d391f; +[SCFriendsTurnByTurnGameActivityDatabase schema] */

void FUN_1053d3728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS FriendsTurnByTurnGameActivity (\n    conversationId TEXT NOT NULL,\n    lensId TEXT NOT NULL,\n    promptId TEXT NOT NULL,\n    isGroupConversation INTEGER NOT NULL DEFAULT 0,\n    isFromSendSide INTEGER NOT NULL DEFAULT 0,\n    senderUserId TEXT,\n    lensName TEXT,\n    viewedAtTimestamp REAL NOT NULL DEFAULT 0,\n    encryptionKey TEXT,\n    promptCreatorId TEXT,\n    promptReceiverId TEXT,\n    chatMessageId TEXT,\n    PRIMARY KEY (conversationId, promptId)\n);\nCREATE INDEX IF NOT EXISTS FriendsTurnByTurnGameActivity_viewedAtTimestamp\nON FriendsTurnByTurnGameActivity(viewedAtTimestamp);\nCREATE TABLE IF NOT EXISTS FriendsTurnByTurnGameActivityGraceState (\n    id INTEGER NOT NULL PRIMARY KEY DEFAULT 0,\n    cofOffSince REAL NOT NULL DEFAULT 0\n);\n"
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS FriendsTurnByTurnGameActivity (\n    conversationId TEXT NOT NULL,\n    lensId TEXT NOT NULL,\n    promptId TEXT NOT NULL,\n    isGroupConversation INTEGER NOT NULL DEFAULT 0,\n    isFromSendSide INTEGER NOT NULL DEFAULT 0,\n    senderUserId TEXT,\n    lensName TEXT,\n    viewedAtTimestamp REAL NOT NULL DEFAULT 0,\n    encryptionKey TEXT,\n    promptCreatorId TEXT,\n    promptReceiverId TEXT,\n    chatMessageId TEXT,\n    PRIMARY KEY (conversationId, promptId)\n);\nCREATE INDEX IF NOT EXISTS FriendsTurnByTurnGameActivity_viewedAtTimestamp\nON FriendsTurnByTurnGameActivity(viewedAtTimestamp)"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR_PTR_1126b8500;
  puStack_68 = puVar2;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS FriendsTurnByTurnGameActivityGraceState (\n    id INTEGER NOT NULL PRIMARY KEY DEFAULT 0,\n    cofOffSince REAL NOT NULL DEFAULT 0\n)"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar4,param_2,1,2,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar8,param_2,2,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar8 = *(undefined **)(puVar7 + 8);
    _objc_retain(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053d3920; end: 1053d3947; -[SCFriendsTurnByTurnGameActivityDatabase getConn] */

void FUN_1053d3920(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053d3948; end: 1053d39cf; -[SCFriendsTurnByTurnGameActivityDatabase initWithSqliteConnection:] */

undefined1 * FUN_1053d3948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8030;
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



/* Entry: 1053d39d0; end: 1053d3ae3; -[SCFriendsTurnByTurnGameActivityDatabase .cxx_destruct] */

void FUN_1053d39d0(long param_1)

{
  long *plVar1;
  
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



/* Entry: 1053d3ae4; end: 1053d3af7; -[SCFriendsTurnByTurnGameActivityDatabase .cxx_construct] */

void FUN_1053d3ae4(long param_1)

{
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



/* Entry: 1053d3af8; end: 1053d3d83;  */

void FUN_1053d3af8(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b8508;
  _objc_alloc(PTR_PTR_1126b8508);
  uVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x0001005fdab8(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010b5ef268(param_2,3);
  uVar6 = param_2;
  func_0x00010b5ef268(param_2,4);
  uVar7 = param_2;
  func_0x0001005fdab8(param_2,5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x0001005fdab8(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef2a0(param_2,7);
  uVar9 = param_2;
  func_0x0001005fdab8(param_2,8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x0001005fdab8(param_2,9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x0001005fdab8(param_2,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdab8(param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053d4a28(param_1,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,param_2
               );
  _objc_release(param_2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053d3d84; end: 1053d3eb3;  */

void FUN_1053d3d84(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dd9b5ab,0x13a);
      func_0x00010bccb848(param_1);
      func_0x0001005fcb64(lVar1,FUN_1053d3af8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d3eb4; end: 1053d404b;  */

void FUN_1053d3eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9b6e6,0x129);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x0001005fcb64(lVar1,FUN_1053d3af8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053d3f7c;
    }
  }
  lVar1 = 0;
LAB_1053d3f7c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053d404c; end: 1053d4157;  */

void FUN_1053d404c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x28,*(undefined8 *)(param_1 + 8),&UNK_10dd9b810,0x50);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d4158; end: 1053d41b3;  */

void FUN_1053d4158(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8510;
  _objc_alloc(PTR_PTR_1126b8510);
  uVar2 = param_1;
  func_0x00010b5ef268(param_1,0);
  func_0x00010b5ef2a0(param_1,1);
  FUN_1053d5014(puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d41b4; end: 1053d44c3;  */

void FUN_1053d41b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  long lVar2;
  int iStack_74;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x30;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10dd9b861,0x404);
      iStack_74 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,&iStack_74,param_4);
      func_0x0001005fcac0(lVar2,&iStack_74,param_5);
      iVar1 = iStack_74;
      func_0x0001005edcd4(lVar2,iStack_74,param_6);
      iStack_74 = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_7);
      func_0x0001005fcac0(lVar2,&iStack_74,param_8);
      func_0x0001005fcac0(lVar2,&iStack_74,param_9);
      iStack_74 = iStack_74 + 1;
      func_0x00010bccb848(param_1,lVar2);
      func_0x0001005fcac0(lVar2,&iStack_74,param_10);
      func_0x0001005fcac0(lVar2,&iStack_74,param_11);
      func_0x0001005fcac0(lVar2,&iStack_74,param_12);
      func_0x0001005fcac0(lVar2,&iStack_74,param_13);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053d44c4; end: 1053d45d7;  */

void FUN_1053d44c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2 + 0x38;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dd9bc66,0x59);
      func_0x00010bccb848(param_1);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1053d45d8; end: 1053d473b;  */

void FUN_1053d45d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9bcc0,0x69);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053d473c; end: 1053d4827;  */

void FUN_1053d473c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0001005fc990(param_1 + 0x48,*(undefined8 *)(param_1 + 8),&UNK_10dd9bd2a,0x29);
      func_0x00010b5ef0d0();
    }
  }
  return;
}



/* Entry: 1053d4828; end: 1053d493b;  */

void FUN_1053d4828(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2 + 0x50;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dd9bd54,0x9d);
      func_0x00010bccb848(param_1);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1053d493c; end: 1053d4a27;  */

void FUN_1053d493c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0001005fc990(param_1 + 0x58,*(undefined8 *)(param_1 + 8),&UNK_10dd9bdf2,0x33);
      func_0x00010b5ef0d0();
    }
  }
  return;
}



/* Entry: 1053d4a28; end: 1053d4c37;  */

long * FUN_1053d4a28(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_1126e8038;
    plVar1 = &lStack_80;
    lStack_80 = param_2;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_3;
      func_0x00010bf51e00();
      lVar3 = plVar1[1];
      plVar1[1] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_4;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_5;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      plVar1[4] = param_6;
      plVar1[5] = param_7;
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[6];
      plVar1[6] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_9;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      plVar1[8] = param_1;
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[9];
      plVar1[9] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_11;
      func_0x00010bf51e00();
      lVar3 = plVar1[10];
      plVar1[10] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xb];
      plVar1[0xb] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xc];
      plVar1[0xc] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 1053d4c38; end: 1053d4c5b; -[SCFriendsTurnByTurnGameActivity copyWithZone:] */

undefined8 FUN_1053d4c38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053d4c5c; end: 1053d4d53; -[SCFriendsTurnByTurnGameActivity hash] */

undefined8 * FUN_1053d4c5c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar5 = &uStack_88;
  uStack_30 = uVar3;
  func_0x000100505190(puVar5,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_1053d4ed0:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1053d4edc;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && ((puVar5[4] == param_3[4] && (puVar5[5] == param_3[5])))) {
      dVar11 = ABS((double)puVar5[8] - (double)param_3[8]);
      dVar10 = ABS((double)puVar5[8] + (double)param_3[8]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((((bVar1) &&
             ((lVar7 = puVar5[1], lVar7 == param_3[1] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
            && ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0))
               )) && ((((lVar7 = puVar5[3], lVar7 == param_3[3] ||
                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                       ((lVar7 = puVar5[6], lVar7 == param_3[6] ||
                        (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                      ((lVar7 = puVar5[7], lVar7 == param_3[7] ||
                       (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
          ((lVar7 = puVar5[9], lVar7 == param_3[9] || (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         (((lVar7 = puVar5[10], lVar7 == param_3[10] || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
          ((lVar7 = puVar5[0xb], lVar7 == param_3[0xb] || (func_0x00010c071ae0(), (int)lVar7 != 0)))
          ))) {
        puVar9 = (undefined8 *)puVar5[0xc];
        if (puVar9 != (undefined8 *)param_3[0xc]) {
          func_0x00010c071ae0();
          goto LAB_1053d4edc;
        }
        goto LAB_1053d4ed0;
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_1053d4edc:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 1053d4d54; end: 1053d4ef7; -[SCFriendsTurnByTurnGameActivity isEqual:] */

long FUN_1053d4d54(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053d4ed0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053d4edc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
      dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x60);
        if (lVar4 != *(long *)(param_3 + 0x60)) {
          func_0x00010c071ae0();
          goto LAB_1053d4edc;
        }
        goto LAB_1053d4ed0;
      }
    }
    lVar4 = 0;
  }
LAB_1053d4edc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1053d4ef8; end: 1053d4f8f;  */

undefined8 FUN_1053d4ef8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1053d4f90; end: 1053d5013; -[SCFriendsTurnByTurnGameActivity .cxx_destruct] */

void FUN_1053d4f90(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d5014; end: 1053d506f;  */

void FUN_1053d5014(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (param_2 != 0) {
    plVar1 = &lStack_40;
    puStack_38 = PTR_PTR_1126e8040;
    lStack_40 = param_2;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      *(undefined8 *)((long)plVar1 + 0x10) = param_1;
    }
  }
  return;
}



/* Entry: 1053d5070; end: 1053d5093; -[SCFriendsTurnByTurnGameActivityGraceState copyWithZone:] */

undefined8 FUN_1053d5070(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053d5094; end: 1053d5113; -[SCFriendsTurnByTurnGameActivityGraceState hash] */

long * FUN_1053d5094(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  double dVar6;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  plVar2 = &lStack_28;
  func_0x000100505190(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if ((((ulong)plVar3 & 1) == 0) || (plVar2[1] != param_3[1])) {
        plVar5 = (long *)0x0;
      }
      else {
        dVar6 = ABS((double)plVar2[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        plVar5 = (long *)(ulong)(ABS((double)plVar2[2] - (double)param_3[2]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1053d5114; end: 1053d51cf; -[SCFriendsTurnByTurnGameActivityGraceState isEqual:] */

bool FUN_1053d5114(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 1053d51d0; end: 1053d51e3;  */

undefined8 FUN_1053d51d0(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



/* Entry: 1053d51e4; end: 1053d5267; +[SCTurnBasedAssociatedDataDatabase schema] */

void FUN_1053d51e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS TurnBasedAssociatedData (\n    promptId TEXT NOT NULL, -- ID of prompt\n    receiverUserId TEXT NOT NULL, -- User ID of prompt receiver\n    associatedData TEXT NOT NULL, -- Associated data set by lens during turn\n    date INTEGER NOT NULL DEFAULT 0, -- Timestamp in seconds when the turn was taken\n    PRIMARY KEY (promptId, receiverUserId) -- Game session key\n);\n"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053d5268; end: 1053d528f; -[SCTurnBasedAssociatedDataDatabase getConn] */

void FUN_1053d5268(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053d5290; end: 1053d5317; -[SCTurnBasedAssociatedDataDatabase initWithSqliteConnection:] */

undefined1 * FUN_1053d5290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8048;
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



/* Entry: 1053d5318; end: 1053d539b; -[SCTurnBasedAssociatedDataDatabase .cxx_destruct] */

void FUN_1053d5318(long param_1)

{
  long *plVar1;
  
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



/* Entry: 1053d539c; end: 1053d53a7; -[SCTurnBasedAssociatedDataDatabase .cxx_construct] */

void FUN_1053d539c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1053d53a8; end: 1053d553f;  */

void FUN_1053d53a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9be26,0xa5);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x0001005fcb64(lVar1,FUN_1053d5540);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053d5470;
    }
  }
  lVar1 = 0;
LAB_1053d5470:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053d5540; end: 1053d563b;  */

void FUN_1053d5540(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8518;
  _objc_alloc(PTR_PTR_1126b8518);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,3);
  FUN_1053d5a4c(puVar1,uVar2,uVar3,uVar4,param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053d563c; end: 1053d57df;  */

void FUN_1053d563c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9becc,0x10b);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x0001005fcac0(lVar1,&uStack_44,param_4);
      func_0x0001005edcd4(lVar1,uStack_44,param_5);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053d57e0; end: 1053d5943;  */

void FUN_1053d57e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9bfd8,99);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053d5944; end: 1053d5a4b;  */

void FUN_1053d5944(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9c03c,0x46);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1053d5a4c; end: 1053d5b37;  */

undefined1 *
FUN_1053d5a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126e8050;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1053d5b38; end: 1053d5b5b; -[SCTurnBasedAssociatedData copyWithZone:] */

undefined8 FUN_1053d5b38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053d5b5c; end: 1053d5be7; -[SCTurnBasedAssociatedData hash] */

undefined8 * FUN_1053d5b5c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1053d5c90:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1053d5c9c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_1053d5c9c;
          }
          goto LAB_1053d5c90;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1053d5c9c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1053d5be8; end: 1053d5cb7; -[SCTurnBasedAssociatedData isEqual:] */

long FUN_1053d5be8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053d5c90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053d5c9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1053d5c9c;
          }
          goto LAB_1053d5c90;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053d5c9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053d5cb8; end: 1053d5ccf;  */

undefined8 FUN_1053d5cb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 1053d5cd0; end: 1053d5d0b; -[SCTurnBasedAssociatedData .cxx_destruct] */

void FUN_1053d5cd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d5d0c; end: 1053d5d37; -[SCUcoStudySettingsProviderImpl postCaptureTranscodingWaitTime] */

double FUN_1053d5d0c(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 5.0;
  func_0x00010bfb2cc0(0x40a00000,*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110dd8278,0);
  return (double)fVar1;
}



/* Entry: 1053d5d38; end: 1053d5d3f; -[SCUcoStudySettingsProviderImpl mockedLensesEnabledForAutmationTesting] */

undefined8 FUN_1053d5d38(void)

{
  return 0;
}



/* Entry: 1053d5d40; end: 1053d5d57; -[SCUcoStudySettingsProviderImpl enableUCOFiltersForMultiMediaCases] */

void FUN_1053d5d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd8258,0,0);
  return;
}



/* Entry: 1053d5d58; end: 1053d5d5f; -[SCUcoStudySettingsProviderImpl attributionFadeOutTime] */

undefined8 FUN_1053d5d58(void)

{
  return 0x3ff8000000000000;
}



/* Entry: 1053d5d60; end: 1053d5d67; -[SCUcoStudySettingsProviderImpl infiniteAttributionFadeOutTime] */

undefined8 FUN_1053d5d60(void)

{
  return 0;
}



/* Entry: 1053d5d68; end: 1053d5d6f; -[SCUcoStudySettingsProviderImpl skipNonUcoLensRepositories] */

undefined8 FUN_1053d5d68(void)

{
  return 1;
}



/* Entry: 1053d5d70; end: 1053d5d77; -[SCUcoStudySettingsProviderImpl venueLensId] */

void FUN_1053d5d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1053d5d78; end: 1053d5d8f; -[SCUcoStudySettingsProviderImpl clearStaleLensIdCaptureFixEnabled] */

void FUN_1053d5d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd82b8,0,0);
  return;
}



/* Entry: 1053d5d90; end: 1053d5dcb; -[SCUcoStudySettingsProviderImpl _positionWithTweakPosition:defaultValue:] */

undefined8 FUN_1053d5d90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 - 1U < 4) {
    param_4 = *(undefined8 *)(&UNK_10dd9c088 + (param_3 - 1U) * 8);
  }
  return param_4;
}



/* Entry: 1053d5dcc; end: 1053d5e13; -[SCUcoStudySettingsProviderImpl .cxx_destruct] */

void FUN_1053d5dcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d5e14; end: 1053d5e87; -[SCGrapheneMusicTrackLoadMetric2 init] */

undefined1 * FUN_1053d5e14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053d5e88; end: 1053d60b7;  */

char * FUN_1053d5e88(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110883918,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar8 = acStack_120;
  pcStack_a8 = FUN_1053d60b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar11 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar6 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110883968,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar7 = pcVar8;
    pcVar9 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar7 = pcVar8;
      pcVar9 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_1053d622c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar11;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108839b8,&uStack_1b8,pcVar9);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar10 = 0;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar6;
  _objc_release(pcVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  __Unwind_Resume(pcVar1);
  if (pcRam00000001136bb910 == (char *)0x0) {
    pcVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    func_0x00010c2289e0();
    pcRam00000001136bb910 = pcVar1;
  }
  return pcRam00000001136bb910;
}



/* Entry: 1053d60b8; end: 1053d622b;  */

char * FUN_1053d60b8(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110883968,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar4 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108839b8,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar5 = 0;
    do {
      if ((&cStack_c9)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  _objc_release(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar2);
  if (pcRam00000001136bb910 == (char *)0x0) {
    pcVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    func_0x00010c2289e0();
    pcRam00000001136bb910 = pcVar1;
  }
  return pcRam00000001136bb910;
}



/* Entry: 1053d622c; end: 1053d645b;  */

char * FUN_1053d622c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108839b8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  if (pcRam00000001136bb910 == (char *)0x0) {
    pcVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    func_0x00010c2289e0();
    pcRam00000001136bb910 = pcVar1;
  }
  return pcRam00000001136bb910;
}



/* Entry: 1053d645c; end: 1053d64d7; +[SCMerlinCofMerlinFFSuggestionMerlinFFSuggestionConfig descriptor] */

undefined * FUN_1053d645c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a324a0,
                        &PTR____CFConstantStringClassReference_110dd82d8,&PTR_s_merlin_cof_1130d42c8
                        ,&PTR_s_age13To17_1130d42e0,4,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bb910 = puVar1;
  }
  return puRam00000001136bb910;
}



/* Entry: 1053d64d8; end: 1053d655b; +[SCNSEPrefetchedMessageMediaDb schema] */

void FUN_1053d64d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS PrefetchedMessageMedia (\n    -- SQLite\'s rowid for this prefetched media record\n    _id INTEGER PRIMARY KEY AUTOINCREMENT,\n\n    -- The media\'s content id (last path component of the CDN URL = mediaId).\n    -- Ties this row to the bytes file at prefetchedMedia/<contentId>.\n    contentId TEXT NOT NULL UNIQUE,\n\n    -- The conversation containing the message that owns this media.\n    conversationId TEXT NOT NULL,\n\n    -- The server message id of the message that owns this media.\n    serverMessageId INTEGER NOT NULL\n);\n"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053d655c; end: 1053d6583; -[SCNSEPrefetchedMessageMediaDb getConn] */

void FUN_1053d655c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053d6584; end: 1053d660b; -[SCNSEPrefetchedMessageMediaDb initWithSqliteConnection:] */

undefined1 * FUN_1053d6584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8068;
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



/* Entry: 1053d660c; end: 1053d6677; -[SCNSEPrefetchedMessageMediaDb .cxx_destruct] */

void FUN_1053d660c(long param_1)

{
  long *plVar1;
  
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



/* Entry: 1053d6678; end: 1053d6683; -[SCNSEPrefetchedMessageMediaDb .cxx_construct] */

void FUN_1053d6678(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1053d6684; end: 1053d678f;  */

void FUN_1053d6684(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x10,*(undefined8 *)(param_1 + 8),&UNK_10dd9c0b0,0x5e);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053d6790; end: 1053d684f;  */

void FUN_1053d6790(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8528;
  _objc_alloc(PTR_PTR_1126b8528);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,2);
  FUN_1053d6ca0(puVar1,uVar2,uVar3,param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053d6850; end: 1053d69c7;  */

void FUN_1053d6850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9c10f,0x7c);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x0001005edcd4(lVar1,uStack_44,param_4);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053d69c8; end: 1053d6af7;  */

void FUN_1053d69c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dd9c18c,0x3f);
      func_0x0001005fcac0();
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053d6af8; end: 1053d6b1b; -[SCPrefetchedMessageMedia copyWithZone:] */

undefined8 FUN_1053d6af8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053d6b1c; end: 1053d6ba7; -[SCPrefetchedMessageMedia hash] */

long * FUN_1053d6b1c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  plVar3 = &lStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_1053d6c48:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1053d6c54;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && ((plVar3[1] == param_3[1] && (plVar3[4] == param_3[4])))) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        plVar6 = (long *)plVar3[3];
        if (plVar6 != (long *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_1053d6c54;
        }
        goto LAB_1053d6c48;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_1053d6c54:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 1053d6ba8; end: 1053d6c6f; -[SCPrefetchedMessageMedia isEqual:] */

long FUN_1053d6ba8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053d6c48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053d6c54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1053d6c54;
        }
        goto LAB_1053d6c48;
      }
    }
    lVar3 = 0;
  }
LAB_1053d6c54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053d6c70; end: 1053d6c9f; -[SCPrefetchedMessageMedia .cxx_destruct] */

void FUN_1053d6c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053d6ca0; end: 1053d6d57;  */

undefined1 * FUN_1053d6ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126e8078;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1053d6d58; end: 1053d6d7b; -[SCGetAllMedia copyWithZone:] */

undefined8 FUN_1053d6d58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053d6d7c; end: 1053d6dfb; -[SCGetAllMedia hash] */

undefined8 * FUN_1053d6d7c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1053d6e8c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1053d6e98;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1053d6e98;
        }
        goto LAB_1053d6e8c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1053d6e98:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053d6dfc; end: 1053d6eb3; -[SCGetAllMedia isEqual:] */

long FUN_1053d6dfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053d6e8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053d6e98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1053d6e98;
        }
        goto LAB_1053d6e8c;
      }
    }
    lVar3 = 0;
  }
LAB_1053d6e98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053d6eb4; end: 1053d6ed7;  */

undefined8 FUN_1053d6eb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1053d6ed8; end: 1053d6f07; -[SCGetAllMedia .cxx_destruct] */

void FUN_1053d6ed8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d6f08; end: 1053d6f7f; -[SCASRGrpcSendCallbackHandler initWithCompletion:] */

undefined1 * FUN_1053d6f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053d6f80; end: 1053d6f8b; -[SCASRGrpcSendCallbackHandler onSend:] */

void FUN_1053d6f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053d6f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 1053d6f8c; end: 1053d6f97; -[SCASRGrpcSendCallbackHandler .cxx_destruct] */

void FUN_1053d6f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053d6f98; end: 1053d71c7; -[SCASRSessionImpl initWithASRGRPCService:configuration:inputObservable:performerProvider:delegate:] */

undefined8 *
FUN_1053d6f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e8088;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    _objc_storeWeak(puVar1 + 4,param_7);
    uVar2 = param_6;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = uVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release();
    _dispatch_group_create();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = puVar1[5];
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar2);
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


