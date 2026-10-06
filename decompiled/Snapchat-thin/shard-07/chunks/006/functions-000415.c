/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10579a59c; end: 10579a603; +[SCCognacUserAppSessionsTerminateUserAppSessionRequest descriptor] */

void FUN_10579a59c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66660,
                        &PTR____CFConstantStringClassReference_110e00cd8,&PTR_DAT_1130fda80,
                        &PTR_DAT_1130fdab8,1,0x10,0x1c);
    puRam00000001136c0410 = puVar1;
  }
  return;
}



/* Entry: 10579a604; end: 10579a67f; +[SCCognacUpdateNotificationPayload descriptor] */

undefined * FUN_10579a604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66700,
                        &PTR____CFConstantStringClassReference_110e00cf8,&PTR_DAT_1130fdbd8,
                        &PTR_DAT_1130fdbf0,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0418 = puVar1;
  }
  return puRam00000001136c0418;
}



/* Entry: 10579a680; end: 10579a6e7; +[SCCognacSendChatStatusInfo descriptor] */

void FUN_10579a680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a667a0,
                        &PTR____CFConstantStringClassReference_110e00d18,&PTR_DAT_1130fdc70,
                        &PTR_s_path_1130fdc88,2,0x18,0x1c);
    puRam00000001136c0420 = puVar1;
  }
  return;
}



/* Entry: 10579a6e8; end: 10579a74f; +[SCCognacSendChatStatusMessageRequest descriptor] */

void FUN_10579a6e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a667f0,
                        &PTR____CFConstantStringClassReference_110e00d38,&PTR_DAT_1130fdc70,
                        &PTR_s_appId_1130fdcc8,7,0x40,0x1c);
    puRam00000001136c0428 = puVar1;
  }
  return;
}



/* Entry: 10579a750; end: 10579a7b7; +[SCCognacSendChatStatusMessageResponse descriptor] */

void FUN_10579a750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66840,
                        &PTR____CFConstantStringClassReference_110e00d58,&PTR_DAT_1130fdc70,0,0,4,
                        0x1c);
    puRam00000001136c0430 = puVar1;
  }
  return;
}



/* Entry: 10579a7b8; end: 10579a843; +[SCCognacConversationContext descriptor] */

undefined * FUN_10579a7b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a668e0,
                        &PTR____CFConstantStringClassReference_110e00d78,&PTR_DAT_1130fddb0,
                        &PTR_DAT_1130fddc8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0438 = puVar1;
  }
  return puRam00000001136c0438;
}



/* Entry: 10579a844; end: 10579a8bf; +[SCCognacSendNotificationRequest descriptor] */

undefined * FUN_10579a844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66930,
                        &PTR____CFConstantStringClassReference_110e00d98,&PTR_DAT_1130fddb0,
                        &PTR_s_appId_1130fde08,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0440 = puVar1;
  }
  return puRam00000001136c0440;
}



/* Entry: 10579a8c0; end: 10579a927; +[SCCognacSendNotificationResponse descriptor] */

void FUN_10579a8c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66980,
                        &PTR____CFConstantStringClassReference_110e00db8,&PTR_DAT_1130fddb0,0,0,4,
                        0x1c);
    puRam00000001136c0448 = puVar1;
  }
  return;
}



/* Entry: 10579a928; end: 10579a98f; +[SCGamesAuthGetOIDCTokenRequest descriptor] */

void FUN_10579a928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66a20,
                        &PTR____CFConstantStringClassReference_110e00dd8,&PTR_DAT_1130fdf10,
                        &PTR_DAT_1130fdfe8,5,0x30,0x1c);
    puRam00000001136c0450 = puVar1;
  }
  return;
}



/* Entry: 10579a990; end: 10579a9f7; +[SCGamesAuthGetOIDCTokenResponse descriptor] */

void FUN_10579a990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66a70,
                        &PTR____CFConstantStringClassReference_110e00df8,&PTR_DAT_1130fdf10,
                        &PTR_s_token_1130fdf28,2,0x18,0x1c);
    puRam00000001136c0458 = puVar1;
  }
  return;
}



/* Entry: 10579a9f8; end: 10579aa83; +[SCGamesAuthGetCanvasTokenRequest descriptor] */

undefined * FUN_10579a9f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66ac0,
                        &PTR____CFConstantStringClassReference_110e00e18,&PTR_DAT_1130fdf10,
                        &PTR_DAT_1130fe088,6,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c0460 = puVar1;
  }
  return puRam00000001136c0460;
}



/* Entry: 10579aa84; end: 10579aaeb; +[SCGamesAuthGetCanvasTokenResponse descriptor] */

void FUN_10579aa84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66b10,
                        &PTR____CFConstantStringClassReference_110e00e38,&PTR_DAT_1130fdf10,
                        &PTR_s_token_1130fdf68,4,0x28,0x1c);
    puRam00000001136c0468 = puVar1;
  }
  return;
}



/* Entry: 10579aaec; end: 10579ab5f; -[UNISCGamesLeaderboardsClientLeaderboards initWithUnifiedGrpcService:] */

undefined1 * FUN_10579aaec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea350;
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



/* Entry: 10579ab60; end: 10579ac43; -[UNISCGamesLeaderboardsClientLeaderboards clientSubmitScoreWithRequest:callOptionsBuilder:handler:] */

void FUN_10579ab60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be180;
  _objc_opt_class(PTR_PTR_1126be180);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00e58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579ac44; end: 10579ad27; -[UNISCGamesLeaderboardsClientLeaderboards getClientLeaderboardWithRequest:callOptionsBuilder:handler:] */

void FUN_10579ac44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be188;
  _objc_opt_class(PTR_PTR_1126be188);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00e78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579ad28; end: 10579ae0b; -[UNISCGamesLeaderboardsClientLeaderboards listFriendLeaderboardEntriesWithRequest:callOptionsBuilder:handler:] */

void FUN_10579ad28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be190;
  _objc_opt_class(PTR_PTR_1126be190);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00e98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579ae0c; end: 10579aeef; -[UNISCGamesLeaderboardsClientLeaderboards setScoreVisibilityWithRequest:callOptionsBuilder:handler:] */

void FUN_10579ae0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be198;
  _objc_opt_class(PTR_PTR_1126be198);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00eb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579aef0; end: 10579afd3; -[UNISCGamesLeaderboardsClientLeaderboards getScoreVisibilitiesWithRequest:callOptionsBuilder:handler:] */

void FUN_10579aef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1a0;
  _objc_opt_class(PTR_PTR_1126be1a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00ed8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579afd4; end: 10579b0b7; -[UNISCGamesLeaderboardsClientLeaderboards getOptInStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_10579afd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1a8;
  _objc_opt_class(PTR_PTR_1126be1a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00ef8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b0b8; end: 10579b19b; -[UNISCGamesLeaderboardsClientLeaderboards setOptInStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b0b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1b0;
  _objc_opt_class(PTR_PTR_1126be1b0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00f18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b19c; end: 10579b27f; -[UNISCGamesLeaderboardsClientLeaderboards batchGetLeaderboardEntriesWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1b8;
  _objc_opt_class(PTR_PTR_1126be1b8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00f38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b280; end: 10579b363; -[UNISCGamesLeaderboardsClientLeaderboards getLeaderboardTopScoresWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1c0;
  _objc_opt_class(PTR_PTR_1126be1c0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00f58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b364; end: 10579b447; -[UNISCGamesLeaderboardsClientLeaderboards getEligibleLeaderboardNotificationsWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1c8;
  _objc_opt_class(PTR_PTR_1126be1c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00f78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b448; end: 10579b52b; -[UNISCGamesLeaderboardsClientLeaderboards deleteScoreWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1d0;
  _objc_opt_class(PTR_PTR_1126be1d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00f98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b52c; end: 10579b60f; -[UNISCGamesLeaderboardsClientLeaderboards deleteUserLensDataWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1d8;
  _objc_opt_class(PTR_PTR_1126be1d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00fb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b610; end: 10579b6f3; -[UNISCGamesLeaderboardsClientLeaderboards deleteAllUserDataWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1e0;
  _objc_opt_class(PTR_PTR_1126be1e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00fd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b6f4; end: 10579b7d7; -[UNISCGamesLeaderboardsClientLeaderboards sendLeaderboardNotificationsWithRequest:callOptionsBuilder:handler:] */

void FUN_10579b6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be1e8;
  _objc_opt_class(PTR_PTR_1126be1e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e00ff8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579b7d8; end: 10579b7e3; -[UNISCGamesLeaderboardsClientLeaderboards .cxx_destruct] */

void FUN_10579b7d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10579b7e4; end: 10579b857; -[SCCognacIAPTokenLoggingImpl initWithUserBlizzardLogger:] */

undefined1 * FUN_10579b7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea358;
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



/* Entry: 10579b858; end: 10579b987; -[SCCognacIAPTokenLoggingImpl logTokenShopImpressionWithEntryPoint:hasBadged:] */

void FUN_10579b858(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR_PTR_11098bd80;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e9db58;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e9db78;
  puStack_48 = puVar1;
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else if (param_3 < 6) {
    ppuVar2 = *(undefined ***)(&UNK_10ddbd7f8 + param_3 * 8);
    func_0x00010bb174f0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar8 = &ppuStack_58;
  puVar9 = (undefined *)0x2;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x0001070adbc8();
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(pppuVar8);
  _objc_retain(puVar9);
  ppuVar2 = &PTR_PTR_11098bd80;
  puVar5 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar3 == (undefined *)0x0) {
    ppuVar2 = (undefined **)0x0;
  }
  else if (param_6 < 4) {
    ppuVar2 = *(undefined ***)(&UNK_10ddbd828 + param_6 * 8);
    func_0x00010bb11d08();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  uVar4 = *(undefined8 *)(puVar3 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(pppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10579b988; end: 10579bb53; -[SCCognacIAPTokenLoggingImpl logUnconsumedGrantWithTokenCount:tokenPackId:transactionId:transactionStatus:] */

void FUN_10579b988(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar3 = &PTR_PTR_11098bd80;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else if (param_6 < 4) {
    ppuVar3 = *(undefined ***)(&UNK_10ddbd828 + param_6 * 8);
    func_0x00010bb11d08();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10579bb54; end: 10579bb9b; -[SCCognacIAPTokenLoggingImpl logGiftShopImpression] */

void FUN_10579bb54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10579bb9c; end: 10579bba7; -[SCCognacIAPTokenLoggingImpl .cxx_destruct] */

void FUN_10579bb9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10579bba8; end: 10579bc8b; -[SCCognacIAPTokenLoggingServiceProvider provide] */

void FUN_10579bba8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be1f0;
  _objc_alloc(PTR_PTR_1126be1f0);
  func_0x00010c053f20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10579bc8c; end: 10579bd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579bc8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112729670;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126be1f8;
    _objc_alloc(PTR_PTR_1126be1f8);
    func_0x00010c05a940();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10579bd1c; end: 10579bd53; -[SCCognacIAPTokenLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579bd1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729674);
  return;
}



/* Entry: 10579bd54; end: 10579be4f; -[SCCommerceCompositeImageFetcher initWithContentFetcher:bitmojiImageFetcher:imageRenderer:queue:] */

undefined1 *
FUN_10579bd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea360;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10579be50; end: 10579bf3f; -[SCCommerceCompositeImageFetcher fetchCompositeNetworkImage:] */

void FUN_10579be50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10579bf40; end: 10579c03b;  */

void FUN_10579bf40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10579c03c;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100a0df38(uVar3,&puStack_68);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10579c03c; end: 10579c06f;  */

void FUN_10579c03c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa5c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10579c070; end: 10579c24f; -[SCCommerceCompositeImageFetcher fetchCompositeNetworkImage:observer:] */

void FUN_10579c070(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0d7b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126ae558;
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c0d7b60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000100504554();
      func_0x00010beffb40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c297260(puVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar4);
      goto LAB_10579c220;
    }
  }
  puVar4 = PTR_PTR_1126af5d0;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf436e0(param_4);
LAB_10579c220:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10579c250; end: 10579c25b;  */

void FUN_10579c250(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadImageForLayer__112570ff0,param_2);
  return;
}



/* Entry: 10579c25c; end: 10579c33b;  */

void FUN_10579c25c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  puVar2 = puVar1;
  func_0x00010bfb2660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10579c33c; end: 10579c34b;  */

void FUN_10579c33c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde40b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__compositeImages_images__1125569c8,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10579c34c; end: 10579c4a7; -[SCCommerceCompositeImageFetcher _compositeImages:images:] */

void FUN_10579c34c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0d7b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  lVar3 = param_3;
  func_0x00010c0d7b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126af5d0;
  if (lVar1 == lVar4) {
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72060(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x18);
    func_0x00010c12f880(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10579c4a8; end: 10579c4af;  */

void FUN_10579c4a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10579c4b0; end: 10579c5f3; -[SCCommerceCompositeImageFetcher _loadImageForLayer:] */

void FUN_10579c4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10579c5f4;
  uStack_40 = 0x10579c604;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010c0d7b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf3c0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10579c5f4; end: 10579c60b;  */

void FUN_10579c5f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10579c60c; end: 10579c64f;  */

void FUN_10579c60c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4e120(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10579c650; end: 10579c757;  */

void FUN_10579c650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b58e0;
  _objc_opt_new(PTR_PTR_1126b58e0);
  func_0x00010c2bae20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae6c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10579c758; end: 10579c80b;  */

void FUN_10579c758(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae558;
  if (param_2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                        &PTR____CFConstantStringClassReference_110e01018,
                        &PTR____CFConstantStringClassReference_110e01078,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = puVar1;
    _objc_release(uVar3);
  }
  else {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    puVar4 = *(undefined **)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10579c80c; end: 10579c9b3; -[SCCommerceCompositeImageFetcher _loadNetworkImage:] */

void FUN_10579c80c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126b08b0;
  puVar5 = puVar1;
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e01018,
                        &PTR____CFConstantStringClassReference_110e01098,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10579c9b4;
    puStack_50 = &UNK_110855f30;
    puStack_48 = puVar1;
    func_0x00010c13e600(*(undefined8 *)(param_1 + 8),param_2,puVar3,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10579c9b4; end: 10579ca6b;  */

void FUN_10579c9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010b7f5374(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe93c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf43d60(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10579ca6c; end: 10579cb53; -[SCCommerceCompositeImageFetcher _loadBitmojiImage:] */

void FUN_10579ca6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10579cb54;
  puStack_40 = &UNK_1108b1818;
  puStack_38 = puVar1;
  func_0x00010bfa5420(uVar4,param_2,param_3,PTR____NSArray0__struct_11034ab48,0x1a,uVar2,&puStack_58
                     );
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10579cb54; end: 10579cbc3;  */

void FUN_10579cb54(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                      &PTR____CFConstantStringClassReference_110e01018,
                      &PTR____CFConstantStringClassReference_110e010d8,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10579cbc4; end: 10579cc0b; -[SCCommerceCompositeImageFetcher .cxx_destruct] */

void FUN_10579cbc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10579cc0c; end: 10579d617; -[SCCommerceCompositeImageRenderer renderCompositeImage:loadedImages:] */

void FUN_10579cc0c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined *param_6,undefined *param_7,undefined *param_8)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar4 = param_8;
  func_0x00010bf529e0();
  puVar12 = PTR_PTR_1126af5d0;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10579d5b4;
  }
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar12 = param_7;
  func_0x00010c0d7b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar12;
  func_0x00010bf529e0();
  _objc_release(puVar12);
  dVar16 = param_1;
  dVar19 = param_2;
  if (puVar4 == (undefined *)0x0) {
LAB_10579cd40:
    func_0x00010c0c28a0(param_7);
    param_2 = dVar19;
    param_1 = dVar16;
  }
  else {
    puVar12 = param_7;
    func_0x00010c0d7b60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar16 = param_1;
    dVar19 = param_2;
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar12);
    func_0x00010c0c28a0(param_7);
    if ((dVar16 <= param_1) || (func_0x00010c0c28a0(param_7), dVar19 <= param_2))
    goto LAB_10579cd40;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  puVar12 = param_8;
  func_0x00010bf529e0();
  if (puVar12 < (undefined *)0x2) {
    puVar4 = param_8;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_7;
    param_6 = puVar5;
    FUN_10579d618(param_7,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    _objc_retain(param_7);
    puVar12 = param_7;
    func_0x00010c0d7b60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    dVar16 = 0.0;
    puVar6 = param_7;
    func_0x00010c0d7b60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar12 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar14 = *(undefined8 *)((long)puVar15 * 8);
        uVar7 = uVar14;
        func_0x00010c071ae0();
        if ((int)uVar7 == 0) {
          func_0x00010c0ed920(param_7);
          dVar20 = param_1 / dVar16;
          dVar22 = param_2 / dVar19;
          func_0x00010bfb68e0(uVar14);
          dVar16 = dVar20 * dVar16;
          dVar19 = dVar22 * dVar19;
          param_3 = dVar20 * param_3;
          param_4 = dVar22 * param_4;
        }
        else {
          dVar16 = 0.0;
          dVar19 = 0.0;
          param_3 = param_1;
          param_4 = param_2;
        }
        puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971a0(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5ec0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar14);
        _objc_release(puVar13);
        puVar15 = puVar15 + 1;
      } while (puVar12 != puVar15);
      puVar12 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_7);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar12 = param_7;
    func_0x00010c0d7b60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar5;
    func_0x00010bfe5ec0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar22 = dVar19;
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    dVar20 = 0.0;
    puVar6 = param_7;
    func_0x00010c0d7b60();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar15 != (undefined *)0x0) {
      do {
        puVar13 = (undefined *)0x0;
        do {
          param_3 = dVar20;
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar6);
            param_3 = dVar20;
          }
          uVar14 = *(undefined8 *)((long)puVar13 * 8);
          uVar7 = uVar14;
          func_0x00010bfe5ec0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = param_8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar14;
          func_0x00010c071ae0();
          if ((int)uVar7 == 0) {
            func_0x00010c0ed920(param_7);
            dVar20 = param_1 / param_3;
            dVar23 = param_2 / dVar22;
            func_0x00010c23d0a0(puVar8);
            dVar20 = param_3 * dVar20;
            func_0x00010c23d0a0(puVar8);
            dVar22 = dVar23 * dVar22;
          }
          else {
            func_0x00010c23d0a0(puVar8);
            dVar20 = (param_1 / dVar16) * param_3;
            func_0x00010c23d0a0(puVar8);
            dVar22 = (param_2 / dVar19) * dVar22;
          }
          puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          puVar10 = puVar8;
          func_0x00010c14e6c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          if (puVar10 != (undefined *)0x0) {
            func_0x00010bfe5ec0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar12);
            _objc_release(uVar14);
          }
          _objc_release(puVar10);
          _objc_release(puVar8);
          puVar13 = puVar13 + 1;
        } while (puVar15 != puVar13);
        puVar15 = puVar6;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(param_7);
    puVar12 = PTR_PTR_1126af5d0;
    if ((param_8 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar12 = param_7;
      func_0x00010c0d7b60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar5;
      func_0x00010bfe5ec0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0e00e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      _objc_release(puVar6);
      _objc_release(puVar12);
      _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
      puVar12 = param_7;
      func_0x00010c270f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = param_7;
        func_0x00010c270f20(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1607a0();
        _objc_release(puVar12);
      }
      dVar19 = dVar22;
      dVar16 = param_3;
      dVar23 = param_4;
      _UIRectFill(dVar20,dVar22,param_3,param_4);
      puVar6 = param_7;
      func_0x00010c0d7b60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010bf529e0();
      _objc_release();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        dVar17 = 180.0;
        do {
          puVar6 = param_7;
          func_0x00010c0d7b60();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = puVar15;
          func_0x00010c071ae0();
          puVar13 = puVar15;
          func_0x00010bfe5ec0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          dVar21 = param_3;
          dVar24 = param_4;
          dVar18 = dVar20;
          dVar2 = dVar22;
          if (((ulong)puVar6 & 1) == 0) {
            puVar6 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc1080();
            dVar21 = dVar17;
            _objc_release(puVar6);
            _objc_release(puVar13);
            puVar6 = puVar15;
            func_0x00010c141ac0(puVar15);
            if (dVar21 != 0.0) {
              _UIGraphicsGetCurrentContext();
              dVar21 = dVar17;
              _CGRectGetMinX(dVar17,dVar19,dVar16,dVar23);
              dVar24 = dVar17;
              _CGRectGetWidth(dVar17,dVar19,dVar16,dVar23);
              dVar21 = dVar21 + dVar24 * 0.5;
              dVar24 = dVar17;
              _CGRectGetMinY(dVar17,dVar19,dVar16,dVar23);
              dVar18 = dVar17;
              _CGRectGetHeight(dVar17,dVar19,dVar16,dVar23);
              dVar24 = dVar24 + dVar18 * 0.5;
              dVar18 = dVar21;
              _CGContextTranslateCTM(dVar21,dVar24,puVar6);
              func_0x00010c141ac0(puVar15);
              _CGContextRotateCTM((dVar18 * 3.141592653589793) / 180.0,puVar6);
              _CGContextTranslateCTM(-dVar21,-dVar24,puVar6);
            }
            puVar13 = puVar15;
            func_0x00010bfe5ec0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            dVar21 = dVar16;
            dVar24 = dVar23;
            dVar18 = dVar17;
            dVar2 = dVar19;
          }
          dVar19 = dVar2;
          dVar17 = dVar18;
          dVar23 = dVar24;
          dVar16 = dVar21;
          puVar6 = param_8;
          func_0x00010c0e00e0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf89920();
          _objc_release(puVar6);
          _objc_release(puVar13);
          _objc_release(puVar15);
          puVar12 = puVar12 + 1;
          puVar6 = param_7;
          func_0x00010c0d7b60();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar6;
          func_0x00010bf529e0();
          _objc_release();
        } while (puVar12 < puVar15);
      }
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      puVar12 = param_7;
      param_6 = puVar6;
      FUN_10579d618(param_7,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      dVar20 = param_1;
      dVar22 = param_2;
    }
    _objc_release(puVar5);
    _objc_release(param_8);
    param_1 = dVar20;
    param_2 = dVar22;
  }
LAB_10579d5b4:
  _objc_release(puVar4);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    dVar19 = param_1;
    dVar16 = param_2;
    _objc_retain();
    _objc_retain(param_6);
    _objc_retain(param_6);
    func_0x00010c23d0a0(param_6);
    bVar3 = false;
    if ((param_1 == dVar19) && (bVar3 = false, !NAN(param_2) && !NAN(dVar16))) {
      bVar3 = param_2 == dVar16;
    }
    puVar12 = param_6;
    if (!bVar3) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c14e6c0(param_1,param_2,dVar19,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      _objc_release(puVar4);
    }
    puVar4 = param_7;
    func_0x00010c130c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = puVar12;
    if (puVar4 != (undefined *)0x0) {
      puVar4 = param_7;
      func_0x00010c130c80(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe6ec0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar4);
    }
    puVar12 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_6);
    _objc_release(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10579d618; end: 10579d763;  */

void FUN_10579d618(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = param_1;
  dVar7 = param_2;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010c23d0a0(param_4);
  bVar1 = false;
  if ((param_1 == dVar6) && (bVar1 = false, !NAN(param_2) && !NAN(dVar7))) {
    bVar1 = param_2 == dVar7;
  }
  uVar3 = param_4;
  if (!bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c14e6c0(param_1,param_2,dVar6,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  lVar4 = param_3;
  func_0x00010c130c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = uVar3;
  if (lVar4 != 0) {
    lVar4 = param_3;
    func_0x00010c130c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe6ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10579d764; end: 10579d847; -[SCCommerceCompositeImageServiceProvider provide] */

void FUN_10579d764(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be200;
  _objc_alloc(PTR_PTR_1126be200);
  func_0x00010c000ae0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10579d848; end: 10579d887;  */

void FUN_10579d848(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10579d888; end: 10579da37; -[SCCommerceCompositeImageServiceProvider _createCompositeImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579d888(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272968c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar1 = lVar9;
  func_0x00010bf0c120(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  puVar4 = PTR_PTR_1126be208;
  _objc_alloc(PTR_PTR_1126be208);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112729690;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c23c760(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112729694;
    _objc_loadWeakRetained(lVar1);
  }
  lVar6 = lVar1;
  func_0x00010bfe7720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126be210;
  _objc_opt_new(PTR_PTR_1126be210);
  func_0x00010c0034e0(puVar4,param_2,lVar5,lVar7,puVar8,lVar3);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10579da38; end: 10579db47; -[SCCommerceCompositeImageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579da38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729694);
  _objc_destroyWeak(param_1 + _DAT_112729690);
  _objc_destroyWeak(param_1 + _DAT_11272968c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729688);
  return;
}



/* Entry: 10579db48; end: 10579dc0f; -[SCCommerceShowcaseServiceProvider _vendComposerShowcaseGrpcService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579db48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_1127296a0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126be220;
  func_0x00010bee80e0(PTR_PTR_1126be220);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0b7020(lVar3,param_2,&PTR____CFConstantStringClassReference_110e01158,puVar4,
                      *(undefined8 *)(param_1 + _DAT_112729698));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10579dc10; end: 10579dcc7; +[SCCommerceShowcaseServiceProvider _vendGrpcParamsBuilder] */

void FUN_10579dc10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,4000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dec0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10579dcc8; end: 10579de1b; -[SCCommerceShowcaseServiceProvider _vendLegacyShowcaseFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579dcc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126be228;
  _objc_alloc(PTR_PTR_1126be228);
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127296a4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127296a8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127296ac;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f260(puVar1,param_2,puVar2,lVar5,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10579de1c; end: 10579dfd3; -[SCCommerceShowcaseServiceProvider _vendShowcaseFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579de1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar8 = *(undefined8 *)(param_1 + _DAT_112729698);
  lVar9 = (long)_DAT_1127296b0;
  _objc_retain(uVar8);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar1 = lVar9;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar9);
  puVar3 = PTR_PTR_1126be238;
  _objc_alloc(PTR_PTR_1126be238);
  lVar9 = param_1 + _DAT_1127296a4;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_1127296b4;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127296a8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018780(puVar3,param_2,lVar5,lVar2,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10579dfd4; end: 10579e077;  */

void FUN_10579dfd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126be220;
  _objc_retain(param_2);
  func_0x00010bee80e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf56360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126be230;
  _objc_alloc(PTR_PTR_1126be230);
  func_0x00010c058f80();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10579e078; end: 10579e107; -[SCCommerceShowcaseServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579e078(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127296ac);
  _objc_destroyWeak(param_1 + _DAT_1127296a0);
  _objc_destroyWeak(param_1 + _DAT_11272969c);
  _objc_destroyWeak(param_1 + _DAT_1127296b4);
  _objc_destroyWeak(param_1 + _DAT_1127296a8);
  _objc_destroyWeak(param_1 + _DAT_1127296b0);
  _objc_destroyWeak(param_1 + _DAT_1127296a4);
  _objc_destroyWeak(param_1 + _DAT_1127296b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729698,0);
  return;
}



/* Entry: 10579e108; end: 10579e213; -[SCCommerceShowcaseFetcher initWithGrapheneRegistry:showcaseGrpcService:countryCodeProvider:configProvider:] */

undefined1 *
FUN_10579e108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea368;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10579e214; end: 10579e4bb; -[SCCommerceShowcaseFetcher getCatalogWithQuery:limit:cursor:filter:completionBlock:] */

void FUN_10579e214(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 != 0) {
    puVar1 = PTR_PTR_1126be240;
    _objc_opt_new();
    func_0x00010c1bda80();
    lVar2 = param_6;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126be248;
      _objc_opt_new(PTR_PTR_1126be248);
      func_0x00010c2022c0(puVar1);
      _objc_release(puVar3);
      lVar2 = param_2;
      func_0x00010bee8080(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c880(puVar1);
      _objc_release(lVar2);
      puVar3 = PTR_PTR_1126be250;
      func_0x00010c23afe0(PTR_PTR_1126be250);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19be60(puVar1);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126be250;
      func_0x00010c23af40(PTR_PTR_1126be250);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2022c0(puVar1);
      _objc_release(puVar3);
      func_0x00010c0b20e0(PTR_PTR_1126be250);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    else {
      func_0x00010c1d8b40(puVar1);
    }
    _CACurrentMediaTime();
    _objc_initWeak(auStack_68,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee80c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(puVar1);
    uStack_70 = param_1;
    _objc_retain(param_8);
    func_0x00010bfca4c0(uVar4);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_release(param_8);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10579e4bc; end: 10579e5c7;  */

void FUN_10579e4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be250;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0b20e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57c40(uVar4,lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe520();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10579e5c8; end: 10579e813; -[SCCommerceShowcaseFetcher getProductDetails:source:completionBlock:] */

void FUN_10579e5c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126be258;
  _objc_opt_new();
  lVar2 = param_2;
  func_0x00010bebbda0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befe180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 != 0) {
    lVar3 = lVar2;
    func_0x00010befe180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100();
    _objc_release(lVar3);
  }
  func_0x00010c2022c0(puVar1);
  lVar3 = param_2;
  func_0x00010bee8080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c880(puVar1);
  _objc_release(lVar3);
  func_0x00010c204900(puVar1);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_78,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee80c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(puVar1);
  uStack_80 = param_1;
  _objc_retain(param_6);
  func_0x00010bfc68e0(uVar6);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10579e814; end: 10579e8eb;  */

void FUN_10579e814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57c40(uVar3,lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe4a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10579e8ec; end: 10579ebb7; -[SCCommerceShowcaseFetcher getWidgetProductsWithWidgetContext:source:limit:cursor:completionBlock:] */

void FUN_10579e8ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126be260;
  _objc_opt_new();
  lVar2 = param_2;
  func_0x00010bebbda0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befe180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 != 0) {
    lVar3 = lVar2;
    func_0x00010befe180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100();
    _objc_release(lVar3);
  }
  func_0x00010c2022c0(puVar1);
  if (param_7 == 0) {
    lVar3 = param_2;
    func_0x00010bee8080(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c880(puVar1);
    _objc_release(lVar3);
  }
  puVar6 = PTR_PTR_1126be268;
  _objc_opt_new(PTR_PTR_1126be268);
  func_0x00010c1e8c20(puVar1);
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010c123200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6380();
  _objc_release(puVar6);
  func_0x00010c1bda80(puVar1);
  func_0x00010c1d8b40(puVar1);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_78,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee80c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(puVar1);
  uStack_80 = param_1;
  _objc_retain(param_8);
  func_0x00010bfc6900(uVar7);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(param_8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10579ebb8; end: 10579ec8f;  */

void FUN_10579ebb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57c40(uVar3,lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe4c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10579ec90; end: 10579ee43; -[SCCommerceShowcaseFetcher getItemVariantData:completionBlock:] */

void FUN_10579ec90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126be270;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bee8080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c880(puVar1);
  _objc_release(lVar2);
  func_0x00010c220480(puVar1);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee80c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar1);
  uStack_60 = param_1;
  _objc_retain(param_5);
  func_0x00010bfc6940(uVar3);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10579ee44; end: 10579eeb3;  */

void FUN_10579ee44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfe5a0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10579eeb4; end: 10579f017; -[SCCommerceShowcaseFetcher getStoresForUser:] */

void FUN_10579eeb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126be278;
  _objc_opt_new();
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee80c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar1);
  uStack_60 = param_1;
  _objc_retain(param_4);
  func_0x00010bfcac00(uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10579f018; end: 10579f0ef;  */

void FUN_10579f018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57c40(uVar3,lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe560();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10579f0f0; end: 10579f26f; -[SCCommerceShowcaseFetcher getStoreWithId:completionBlock:] */

void FUN_10579f0f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126be280;
  _objc_opt_new();
  func_0x00010c20c240();
  _objc_initWeak(auStack_58,param_2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee80c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar1);
  uStack_60 = param_1;
  _objc_retain(param_5);
  func_0x00010bfcab80(uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10579f270; end: 10579f347;  */

void FUN_10579f270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57c40(uVar3,lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe580();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10579f348; end: 10579f54f; -[SCCommerceShowcaseFetcher _didGetShowcaseResponse:error:completion:] */

void FUN_10579f348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010c13ba40();
  if ((int)uVar5 == 2) {
    uVar5 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = 0;
  }
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  if (param_1 == 0) {
    uVar1 = param_3;
    func_0x00010bf64c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10579f550;
    puStack_60 = &UNK_1108b19f8;
    _objc_retain(param_3);
    uVar3 = uVar2;
    uStack_58 = param_3;
    func_0x000100504554(uVar2,&puStack_78);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126be288;
    _objc_alloc(PTR_PTR_1126be288);
    func_0x00010c03a9c0();
    uVar1 = param_3;
    func_0x00010bf64c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f2740();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar4,uVar2,0);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uStack_58);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10579f550; end: 10579f5e7;  */

void FUN_10579f550(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126be250;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf64c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d0b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c115f80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10579f5e8; end: 10579f82f; -[SCCommerceShowcaseFetcher _didGetProductDetailsResponse:error:completion:] */

void FUN_10579f5e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar6 = param_3;
  func_0x00010c13ba40();
  if ((int)uVar6 == 2) {
    uVar6 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = 0;
  }
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126be250;
  if (param_1 == 0) {
    uVar1 = param_3;
    func_0x00010bf6f860(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf6f860(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf283c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c115f80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf6f860(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a5000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100504554();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf6f860(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f1dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    (**(code **)(param_5 + 0x10))(param_5,puVar5,uVar3,uVar2,0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0,0,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10579f830; end: 10579f83f;  */

void FUN_10579f830(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126be250,PTR_s_pdpWidgetInfoFromItemPageWidget__11261b5c8,param_2);
  return;
}



/* Entry: 10579f840; end: 10579fa47; -[SCCommerceShowcaseFetcher _didGetRecommendationsResponse:error:completion:] */

void FUN_10579f840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010c13ba40();
  if ((int)uVar5 == 2) {
    uVar5 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = 0;
  }
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  if (param_1 == 0) {
    uVar1 = param_3;
    func_0x00010c123260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10579fa48;
    puStack_60 = &UNK_1108b19f8;
    _objc_retain(param_3);
    uVar3 = uVar2;
    uStack_58 = param_3;
    func_0x000100504554(uVar2,&puStack_78);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c123260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f2740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126be288;
    _objc_alloc(PTR_PTR_1126be288);
    func_0x00010c03a9c0();
    (**(code **)(param_5 + 0x10))(param_5,puVar4,uVar2,0);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uStack_58);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10579fa48; end: 10579fadf;  */

void FUN_10579fa48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126be250;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c123260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d0b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c115f80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10579fae0; end: 10579fc43; -[SCCommerceShowcaseFetcher _didGetStoresForUserResponse:error:completion:] */

void FUN_10579fae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar4 = param_3;
  func_0x00010c13ba40();
  if ((int)uVar4 == 2) {
    uVar4 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = 0;
  }
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  if (param_1 == 0) {
    uVar1 = param_3;
    func_0x00010bf64c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c258000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100504554();
    _objc_release(uVar2);
    _objc_release(uVar1);
    (**(code **)(param_5 + 0x10))(param_5,uVar3,0);
    _objc_release(uVar3);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10579fc44; end: 10579fc53;  */

void FUN_10579fc44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c257a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126be250,PTR_s_storeMetadataFromShowcaseStoreMe_1126738a8,param_2);
  return;
}



/* Entry: 10579fc54; end: 10579fda7; -[SCCommerceShowcaseFetcher _didGetStoresWithIdResponse:error:completion:] */

void FUN_10579fc54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c13ba40();
  if ((int)uVar3 == 2) {
    uVar3 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  uVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126be250;
  if (param_1 == 0) {
    uVar1 = param_3;
    func_0x00010c2579e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257a00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    (**(code **)(param_5 + 0x10))(param_5,puVar2,0);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10579fda8; end: 10579ffdb; -[SCCommerceShowcaseFetcher _didGetVariantDataResponse:error:request:startTimestamp:completion:] */

void FUN_10579fda8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bf987e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57c40(param_1,param_2);
  _objc_release(param_6);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c13ba40();
  uVar6 = 0;
  if ((int)uVar1 == 2) {
    uVar6 = param_4;
    func_0x00010bf987e0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_4;
  func_0x00010c135700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddd820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_2 == 0) {
    uVar1 = param_4;
    func_0x00010c084d00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c084d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c084d00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c084da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126be250;
    func_0x00010c297580(PTR_PTR_1126be250);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126be250;
    func_0x00010c084dc0(PTR_PTR_1126be250);
    _objc_retainAutoreleasedReturnValue();
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,puVar4,puVar5,0);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0,0,param_2);
  }
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10579ffdc; end: 1057a00e3; -[SCCommerceShowcaseFetcher _showcaseContextForSource:] */

void FUN_10579ffdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1057a00e4;
  uStack_30 = 0x1057a00f4;
  puVar1 = PTR_PTR_1126be248;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0bcf00(param_3);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057a00e4; end: 1057a00fb;  */

void FUN_1057a00e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057a00fc; end: 1057a0143;  */

void FUN_1057a00fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126be250;
  func_0x00010c23af40(PTR_PTR_1126be250,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057a0144; end: 1057a01bf;  */

void FUN_1057a0144(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126be290;
  _objc_opt_new(PTR_PTR_1126be290);
  func_0x00010c1ba5a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c08f000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057a01c0; end: 1057a034b; -[SCCommerceShowcaseFetcher _checkForErrorWithResponse:grpcError:responseError:requestId:] */

void FUN_1057a01c0(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined *param_5,undefined *param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  double dVar12;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_4;
  puVar8 = param_5;
  puVar9 = param_6;
  lVar10 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_6 == (undefined *)0x0) {
      if (param_4 == (undefined **)0x0) {
        _objc_alloc();
        ppuVar7 = &PTR____CFConstantStringClassReference_110e011b8;
        puVar8 = (undefined *)0xffffffffffffffff;
        puVar9 = (undefined *)0x0;
        func_0x00010c00e2e0();
      }
      else {
        puVar11 = (undefined *)0x0;
      }
    }
    else {
      _objc_alloc();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar1 = param_6;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_60,&uStack_68,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e011b8;
      puVar8 = (undefined *)0xffffffffffffffff;
      puVar9 = puVar2;
      func_0x00010c00e2e0();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  else {
    _objc_retain(param_5);
    puVar11 = param_5;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR_PTR_1126be250;
  dVar12 = param_1;
  _objc_retain(lVar10);
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  func_0x00010c0ccd20(puVar11,param_3,param_8,param_9,lVar10 == 0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_4;
  func_0x00010bfcdf40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf534e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puVar1 = puVar9;
  func_0x00010c15ebe0(puVar9);
  _objc_release(puVar9);
  lVar6 = lVar10;
  func_0x00010c15ebe0(lVar10);
  _objc_release(lVar10);
  func_0x00010c0a7120(ppuVar3,param_3,ppuVar7,puVar8,ppuVar5,(long)((dVar12 - param_1) * 1000.0),
                      puVar1,lVar6,puVar11);
  _objc_release(puVar8);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(param_4);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 1057a034c; end: 1057a04d3; -[SCCommerceShowcaseFetcher _logRequestMetricForService:additionalContext:request:response:startTimestamp:responseError:grpcError:] */

void FUN_1057a034c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126be250;
  dVar7 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0ccd20(puVar1,param_3,param_8,param_9,param_7 == 0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfcdf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf534e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar5 = param_6;
  func_0x00010c15ebe0(param_6);
  _objc_release(param_6);
  lVar6 = param_7;
  func_0x00010c15ebe0(param_7);
  _objc_release(param_7);
  func_0x00010c0a7120(uVar2,param_3,param_4,param_5,uVar4,(long)((dVar7 - param_1) * 1000.0),uVar5,
                      lVar6,puVar1);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057a04d4; end: 1057a0677; -[SCCommerceShowcaseFetcher _vendGRPCCallBuilder] */

void FUN_1057a04d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_1;
  func_0x00010bebbdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,lVar3,&PTR____CFConstantStringClassReference_110dadcb8);
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110deb478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar7,&PTR____CFConstantStringClassReference_110dbeff8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c23b000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,uVar9,&PTR____CFConstantStringClassReference_110e01198);
  _objc_release(uVar9);
  _objc_release(uVar8);
  func_0x00010bef9140(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a0678; end: 1057a06d7; -[SCCommerceShowcaseFetcher _vendDeviceContext] */

void FUN_1057a0678(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126be298;
  _objc_opt_new(PTR_PTR_1126be298);
  func_0x00010c18cf80();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010bf066e0(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169460(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a06d8; end: 1057a0737; -[SCCommerceShowcaseFetcher _showcaseRoutingHeader] */

undefined ** FUN_1057a06d8(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23b080();
  _objc_release(uVar2);
  uVar1 = (int)uVar3 - 1;
  if (uVar1 < 4) {
    ppuVar4 = (undefined **)(&PTR_PTR_1108b1aa8)[uVar1];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e011d8;
  }
  return ppuVar4;
}


