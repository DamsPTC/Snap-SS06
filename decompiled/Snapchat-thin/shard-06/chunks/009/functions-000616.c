/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fd8e70; end: 104fd8ee7; -[SCCPlusDreamsPresenterImpl dreamsCrossSellDidDismiss] */

void FUN_104fd8e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8a540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf8a540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104fd8ee8; end: 104fd8f17; -[SCCPlusDreamsPresenterImpl .cxx_destruct] */

void FUN_104fd8ee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd8f18; end: 104fd8fbb; -[SCCPlusMerlinPresenterImpl initWithUIContainer:bioPageScopeFactoryServices:] */

undefined1 *
FUN_104fd8f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e57f0;
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



/* Entry: 104fd8fbc; end: 104fd902f; -[SCCPlusMerlinPresenterImpl presentBioPage] */

void FUN_104fd8fbc(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104fd9030; end: 104fd90a7;  */

void FUN_104fd9030(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3548;
  _objc_alloc(PTR_PTR_1126b3548);
  func_0x00010c038a00();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf21f80(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd90a8; end: 104fd90b3; -[SCCPlusMerlinPresenterImpl merlinBioPageDidDismiss] */

void FUN_104fd90a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104fd90b4; end: 104fd90e3; -[SCCPlusMerlinPresenterImpl .cxx_destruct] */

void FUN_104fd90b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd90e4; end: 104fd9187; -[SCCPlusMyFriendsPresenterImpl initWithUIContainer:plusImmediateLauncherService:] */

undefined1 *
FUN_104fd90e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e57f8;
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



/* Entry: 104fd9188; end: 104fd91f7; -[SCCPlusMyFriendsPresenterImpl presentMyFriends] */

void FUN_104fd9188(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae620;
  _objc_alloc(PTR_PTR_1126ae620);
  func_0x00010c0575e0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d4720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd91f8; end: 104fd926f; -[SCCPlusMyFriendsPresenterImpl didDismissMyFriends] */

void FUN_104fd91f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d4720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d4720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104fd9270; end: 104fd929f; -[SCCPlusMyFriendsPresenterImpl .cxx_destruct] */

void FUN_104fd9270(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd92a0; end: 104fd9343; -[SCCPlusMyProfilePresenterImpl initWithUIContainer:myProfileScopeLauncherService:] */

undefined1 *
FUN_104fd92a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5800;
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



/* Entry: 104fd9344; end: 104fd93d7; -[SCCPlusMyProfilePresenterImpl presentBackgroundPicker] */

void FUN_104fd9344(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3550;
  _objc_alloc(PTR_PTR_1126b3550);
  func_0x00010c058440();
  func_0x00010c1e3f80();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08f240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd93d8; end: 104fd940b; -[SCCPlusMyProfilePresenterImpl myProfileDidDismiss] */

void FUN_104fd93d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08f240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd940c; end: 104fd940f; -[SCCPlusMyProfilePresenterImpl myProfileWillAppear] */

void FUN_104fd940c(void)

{
  return;
}



/* Entry: 104fd9410; end: 104fd9413; -[SCCPlusMyProfilePresenterImpl myProfileAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_104fd9410(void)

{
  return;
}



/* Entry: 104fd9414; end: 104fd9443; -[SCCPlusMyProfilePresenterImpl .cxx_destruct] */

void FUN_104fd9414(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd9444; end: 104fd94b7; -[SCCPlusNotificationPermissionProviderImpl initWithNotificationPermissionServices:] */

undefined1 * FUN_104fd9444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5808;
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



/* Entry: 104fd94b8; end: 104fd953f; -[SCCPlusNotificationPermissionProviderImpl isPermissionGranted] */

void FUN_104fd94b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new(PTR_PTR_1126b1588);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dc400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0754e0();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd9540; end: 104fd9577; -[SCCPlusNotificationPermissionProviderImpl requestPermission] */

void FUN_104fd9540(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd9578; end: 104fd9583; -[SCCPlusNotificationPermissionProviderImpl .cxx_destruct] */

void FUN_104fd9578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd9584; end: 104fd9607; -[SCCPlusReferralServiceImpl initWithSyncServices:attributedPage:] */

undefined1 *
FUN_104fd9584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5810;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd9608; end: 104fd96d3; -[SCCPlusReferralServiceImpl fetchEncodedReferralInfo] */

void FUN_104fd9608(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2665c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfaabe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd96d4; end: 104fd9727;  */

void FUN_104fd96d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_fulfillWithError__1125cc760);
    return;
  }
  func_0x00010c124fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fd9728; end: 104fd9733; -[SCCPlusReferralServiceImpl .cxx_destruct] */

void FUN_104fd9728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd9734; end: 104fd9857; -[SCCPlusSendToPresenterImpl initWithUIContainer:plusImmediateLaunchServices:sendToScopeServices:textSendingServices:conversationDestinationParsingServices:] */

undefined1 *
FUN_104fd9734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5818;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd9858; end: 104fd9923; -[SCCPlusSendToPresenterImpl presentSendToForURLWithConfig:] */

void FUN_104fd9858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fd9924;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar2,param_2,&puStack_68);
  _objc_release(puVar2);
  _objc_retain(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd9924; end: 104fd9a67;  */

void FUN_104fd9924(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc1858;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
    func_0x00010befd440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010befd440(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c10ab00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000100504554();
    func_0x00010be7e660(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (ppuVar4 != (undefined **)0x0) {
      _objc_release(uVar5);
    }
  }
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fd9a68; end: 104fd9db7; -[SCCPlusSendToPresenterImpl _presentSendToWithURL:additionalText:preSelectedItems:promise:] */

void FUN_104fd9a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar9 == 0) {
    puVar2 = PTR_PTR_1126b0810;
    _objc_alloc();
    func_0x00010c046120();
    puVar3 = PTR_PTR_1126b0800;
    _objc_alloc();
    func_0x00010c051840();
    puVar4 = PTR_PTR_1126b0808;
    _objc_alloc();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104fd9db8;
    puStack_70 = &UNK_110850038;
    puVar5 = PTR_PTR_1126ae720;
    puStack_68 = puVar3;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051820(puVar4,param_2,puVar5,0,0,0,0,0);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b0818;
    _objc_alloc();
    puVar6 = puVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0;
    func_0x00010c044540(puVar5,param_2,puVar6,0x2c,8,3,199,0,0,0,0,0,0);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c26bac0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126b07f8;
      _objc_alloc(PTR_PTR_1126b07f8);
      puVar7 = puVar3;
      func_0x00010c26bac0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b07f0;
      func_0x00010c26c4e0(PTR_PTR_1126b07f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01dde0(puVar10,param_2,puVar7,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf23ee0(uVar9,param_2,*(undefined8 *)(param_1 + 8),param_5,puVar10,0,puVar2,0,puVar4
                        ,puVar5,uVar11 & 0xffffffffffff0000,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c15d560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_6;
    _objc_release(uVar1);
    _objc_release(uVar9);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bfbb700(param_6,param_2,PTR____kCFBooleanFalse_11034ab60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fd9db8; end: 104fd9dcb;  */

void FUN_104fd9db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104fd9dcc; end: 104fd9ecf; -[SCCPlusSendToPresenterImpl _endLaunchedFeatureWithResult:] */

void FUN_104fd9dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c15d560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104fd9ed0;
  puStack_40 = &UNK_1108544b0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104fd9ee0;
  puStack_68 = &UNK_110849810;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_58,&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fd9ed0; end: 104fd9eef;  */

void FUN_104fd9ed0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
             PTR_s_fulfillWithSuccessValue__1125cc768,param_2);
  return;
}



/* Entry: 104fd9ef0; end: 104fda2d7; -[SCCPlusSendToPresenterImpl _sendURLMessageForURL:selectionState:completion:] */

void FUN_104fd9ef0(long param_1,undefined8 param_2,long param_3,long param_4,undefined **param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_4;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_130;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar15 = 0;
  ppuVar14 = param_5;
  if (lVar3 != 0) {
    ppuVar14 = (undefined **)*puStack_120;
    do {
      lVar16 = 0;
      do {
        if ((undefined **)*puStack_120 != ppuVar14) {
          _objc_enumerationMutation(lVar2);
        }
        lVar17 = *(long *)(lStack_128 + lVar16 * 8);
        lVar13 = lVar17;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = PTR_PTR_1126b01c0;
        lVar4 = lVar17;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 == 0) {
          func_0x00010c294260(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          lVar13 = 1;
        }
        else {
          func_0x00010bfcf680(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar17;
          func_0x00010bf529e0();
          lVar4 = lVar17;
        }
        _objc_release(lVar4);
        lVar15 = lVar13 + lVar15;
        lVar16 = lVar16 + 1;
      } while (lVar3 != lVar16);
      ppuVar12 = &puStack_130;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar7 = puVar1;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar11 = (undefined1 *)0x0;
    (*(code *)param_5[2])(param_5,0);
  }
  else {
    _objc_initWeak(auStack_138,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf501a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c246920();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_104fda2d8;
    puStack_168 = &UNK_110860c88;
    _objc_retain(param_5);
    ppuVar14 = &puStack_180;
    puVar11 = auStack_138;
    ppuStack_150 = param_5;
    _objc_copyWeak(auStack_148,puVar11);
    _objc_retain(param_3);
    lVar2 = param_4;
    lStack_160 = param_3;
    _objc_retain(param_4);
    lStack_158 = param_4;
    lStack_140 = lVar15;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &puStack_180;
    func_0x00010c297260(uVar10);
    _objc_release(lVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lStack_158);
    _objc_release(lStack_160);
    _objc_destroyWeak(auStack_148);
    _objc_release(ppuStack_150);
    _objc_destroyWeak(auStack_138);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar14 + 7);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar11);
  if (ppuVar12 == (undefined **)0x0) {
    lVar15 = param_3 + 0x38;
    _objc_loadWeakRetained(lVar15);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010befd440(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1000(lVar15);
    _objc_release(uVar9);
    _objc_release(lVar15);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),ppuVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 104fda2d8; end: 104fda37b;  */

void FUN_104fda2d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010befd440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1000(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fda37c; end: 104fda647; -[SCCPlusSendToPresenterImpl _sendURLMessageToConversations:url:text:numOfRecipients:completion:] */

void FUN_104fda37c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2aa660(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf026a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26c760(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf37880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26c760(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar7 = param_3;
  func_0x00010bf50b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(param_7);
  func_0x00010c15d840(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104fda648; end: 104fda723;  */

void FUN_104fda648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104fda6c0;
  puStack_38 = &UNK_110860cf8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = param_2;
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 104fda724; end: 104fda80f; -[SCCPlusSendToPresenterImpl didSendWithSelectionState:] */

void FUN_104fda724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be09ae0(param_1,param_2,puVar2);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c28f340(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104fda810;
    puStack_40 = &UNK_110849810;
    lStack_38 = param_1;
    func_0x00010bea0fe0(param_1,param_2,puVar2,param_3,&puStack_58);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104fda810; end: 104fda873;  */

void FUN_104fda810(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_2 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,0,PTR____kCFBooleanTrue_11034ab68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be09ae0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fda874; end: 104fda8bf; -[SCCPlusSendToPresenterImpl didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_104fda874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,PTR____kCFBooleanFalse_11034ab60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be09ae0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fda8c0; end: 104fda92b; -[SCCPlusSendToPresenterImpl .cxx_destruct] */

void FUN_104fda8c0(long param_1)

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



/* Entry: 104fda92c; end: 104fdaa7b;  */

void FUN_104fda92c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d4e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = param_2;
  if (lVar3 == 0) {
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  lVar2 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar5);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104fdaa7c; end: 104fdab77; -[SCCPlusStreakRemindersServiceImpl initWithCurrentUserId:conversationServices:conversationIdServices:nativeMessagingServices:] */

undefined1 *
FUN_104fdaa7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5820;
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



/* Entry: 104fdab78; end: 104fdacab; -[SCCPlusStreakRemindersServiceImpl getFriendsWithStreakReminders] */

void FUN_104fdab78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1588;
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b3570;
  _objc_alloc(PTR_PTR_1126b3570);
  func_0x00010c04f360();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d5c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a1e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fdacac; end: 104fdad2b;  */

void FUN_104fdacac(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104fdad2c;
  puStack_30 = &UNK_110860d28;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(param_2,&puStack_48);
  func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  return;
}



/* Entry: 104fdad2c; end: 104fdaeab;  */

void FUN_104fdad2c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf509a0();
  if ((lVar3 == 0) && (lVar3 = param_2, func_0x00010c25c120(), (int)lVar3 != 0)) {
    lVar4 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lVar9 * 8);
        func_0x00010c0f4a60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c0720c0();
        if (iVar2 == 0) goto LAB_104fdae54;
        _objc_release(uVar8);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
    uVar8 = 0;
LAB_104fdae54:
    _objc_release(lVar4);
  }
  else {
    uVar8 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dc1898;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb6e0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 104fdaeac; end: 104fdaeef;  */

void FUN_104fdaeac(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc1898;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb6e0(uVar2,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104fdaef0; end: 104fdb07b; -[SCCPlusStreakRemindersServiceImpl setStreakReminderForFriendWithUserId:shouldRemind:] */

void FUN_104fdaef0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b1588;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf504e0(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar9);
  }
  else {
    ppuVar5 = *(undefined ***)(lVar8 + 0x28);
    func_0x00010bf50600(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d05a0(ppuVar6);
    _objc_release(lVar8);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 104fdb07c; end: 104fdb193;  */

void FUN_104fdb07c(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar4);
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x28);
    func_0x00010bf50600(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d05a0(ppuVar3);
    _objc_release(lVar1);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 104fdb194; end: 104fdb207;  */

void FUN_104fdb194(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc18b8;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc18b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = (undefined **)PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104fdb208; end: 104fdb24f; -[SCCPlusStreakRemindersServiceImpl .cxx_destruct] */

void FUN_104fdb208(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fdb250; end: 104fdb3db; -[SCCPlusStreakRestoreServiceImpl initWithUIContainer:currentUserId:displayNameProvider:friendsFeedServices:groupsDataFetcher:streakRestorePurchaseScopeFactoryServices:streakRestoreSupportScopeFactoryServices:sourcePageType:] */

undefined1 *
FUN_104fdb250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e5828;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fdb3dc; end: 104fdb433; -[SCCPlusStreakRestoreServiceImpl presentSupportPage] */

void FUN_104fdb3dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104fdb434;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104fdb434; end: 104fdb4df;  */

void FUN_104fdb434(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b3578;
  _objc_alloc(PTR_PTR_1126b3578);
  func_0x00010c04aba0();
  puVar2 = PTR_PTR_1126b3580;
  _objc_alloc(PTR_PTR_1126b3580);
  func_0x00010c056e40();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf21f80(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = uVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fdb4e0; end: 104fdb62f; -[SCCPlusStreakRestoreServiceImpl fetchRestorableConversationStreaksWithCallback:] */

void FUN_104fdb4e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb9e20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126ae558;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104fdb630;
    puStack_60 = &UNK_110860db8;
    uVar2 = uVar3;
    lStack_58 = param_1;
    func_0x000100504554(uVar3,&puStack_78);
    func_0x00010beffb40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104fdb630; end: 104fdb63b;  */

void FUN_104fdb630(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__restorableConversationStreak__112582eb0,param_2)
  ;
  return;
}



/* Entry: 104fdb63c; end: 104fdb6e7;  */

void FUN_104fdb63c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  }
  else {
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fdb6e8; end: 104fdb8bf; -[SCCPlusStreakRestoreServiceImpl restoreConversationStreakWithConversationId:callback:] */

void FUN_104fdb6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104fdb7a8;
    puStack_50 = &UNK_11084a9e8;
    uStack_48 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fdb8c0; end: 104fdb913; -[SCCPlusStreakRestoreServiceImpl streakRestorePurchaseDismissedWithDidRestore:] */

void FUN_104fdb8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104fdb914; end: 104fdb923; -[SCCPlusStreakRestoreServiceImpl streakSupportPageDismissed] */

void FUN_104fdb914(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fdb924; end: 104fdbad7; -[SCCPlusStreakRestoreServiceImpl _restorableConversationStreak:] */

void FUN_104fdb924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf9caa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c07c800();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_104fdbad8;
    uStack_50 = 0x104fdbae8;
    uStack_48 = 0;
    uVar3 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0020();
    _objc_release(uVar3);
    uVar3 = puStack_68[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104fdbad8; end: 104fdbaef;  */

void FUN_104fdbad8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fdbaf0; end: 104fdbd63;  */

void FUN_104fdbaf0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar12 = param_2;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1440;
  _objc_alloc();
  func_0x00010c040f20();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b35a0;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004b20();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b35a8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25be80(uVar5);
  func_0x00010c005820((double)(int)uVar5);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar6;
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(lVar12 + 0x20);
  uVar5 = *(undefined8 *)(lVar9 + 0x10);
  uVar1 = *(undefined8 *)(lVar9 + 0x18);
  uVar13 = *(undefined8 *)(lVar9 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010bfa7660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  uVar10 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar8;
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar1);
  _objc_release(uVar5);
  return;
}



/* Entry: 104fdbd64; end: 104fdbee3;  */

void FUN_104fdbd64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_2);
  func_0x00010c0c7360(0x4030000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x000108ef2dc8(0x3fe199999999999a,param_2,puVar1,uVar3,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_2;
  func_0x000108ef2144(param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b35a0;
  _objc_alloc(PTR_PTR_1126b35a0);
  func_0x00010c004b20();
  puVar6 = PTR_PTR_1126b35a8;
  _objc_alloc(PTR_PTR_1126b35a8);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c25be80(uVar7);
  func_0x00010c005820((double)(int)uVar7,puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104fdbee4; end: 104fdbf2f;  */

void FUN_104fdbee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0341e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fdbf30; end: 104fdbfbf; -[SCCPlusStreakRestoreServiceImpl .cxx_destruct] */

void FUN_104fdbf30(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104fdbfc0; end: 104fdbfc7; -[SCPlusManagementActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_104fdbfc0(void)

{
  return 0;
}



/* Entry: 104fdbfc8; end: 104fde673; -[SCPlusManagementViewController initWithDidSubscribe:currentUserId:displayNameProvider:plusServices:plusInternalServices:plusSyncServices:storeKitServices:merlinServices:pinBestFriendService:customAppThemeServices:valdiRuntimeProvider:appStartServices:taskManagementServices:featureSettingsService:composerNetworkingBridgeServices:composerPeopleBridgeFriendmojiServices:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerPeopleBridgeUserInfoServices:composerPeopleBridgeUserServices:composerAnimatedImageViewServices:composerCoreUIServices:conversationServices:conversationIdServices:nativeMessagingServices:temporaryFileWriterServices:audioSessionServices:valdiBlizzardLoggingServices:circumstanceEngine:grpcClientFactory:billboardStringsServices:memoriesMonetizationServices:bitmojiServiceFactory:notificationPermissionServices:embeddedMapServices:friendsFeedServices:boltDataUploaderServices:composerMediaCameraRollServices:friendmojiServices:deeplinkHandlingServices:storyBoostService:textSendingServices:conversationDestinationParsingServices:subscribeScopeExposer:subscribeScopeServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:myProfileScopeLauncherService:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:merlinBioPageScopeFactoryServices:editAvatarBuilderScopeExposer:streakRestorePurchaseScopeFactoryServices:streakRestoreSupportScopeFactoryServices:plusImmediateLaunchServices:sendToScopeServices:chatScopeServices:snapchatterServices:groupsDataFetcher:messagingExperimentService:loggingContext:presentationType:deeplinkType:upgradeTier:pageLauncherServices:snapProServices:mapCustomizationTrayFactoryServices:delegate:bitmojiAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104fdbfc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,long param_18,long param_19,undefined8 param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                    undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                    undefined8 param_37,long param_38,undefined8 param_39,undefined8 param_40,
                    undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                    undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                    undefined8 param_49,long param_50,undefined8 param_51,undefined8 param_52,
                    long param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                    undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                    undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  long lStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  code *pcStack_680;
  undefined *puStack_678;
  undefined1 auStack_670 [8];
  undefined *puStack_668;
  undefined8 uStack_660;
  code *pcStack_658;
  undefined *puStack_650;
  undefined1 auStack_648 [8];
  undefined *puStack_640;
  undefined8 uStack_638;
  code *pcStack_630;
  undefined *puStack_628;
  undefined8 uStack_620;
  undefined *puStack_618;
  undefined8 uStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [8];
  undefined1 auStack_5e8 [8];
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
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
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(in_stack_000001d0);
  _objc_retain(in_stack_000001d8);
  _objc_retain(in_stack_000001e0);
  _objc_retain(in_stack_000001e8);
  _objc_retain(in_stack_000001f0);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  lVar29 = (long)_DAT_112718f88;
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar4;
  _objc_release(uVar28);
  lVar30 = (long)_DAT_112718f8c;
  _objc_retain(in_stack_000001d0);
  uVar28 = *(undefined8 *)(param_1 + lVar30);
  *(undefined8 *)(param_1 + lVar30) = in_stack_000001d0;
  _objc_release(uVar28);
  lVar32 = (long)_DAT_112718f90;
  _objc_retain(in_stack_000001d8);
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  *(undefined8 *)(param_1 + lVar32) = in_stack_000001d8;
  _objc_release(uVar28);
  lVar32 = (long)_DAT_112718f94;
  _objc_retain(in_stack_000001f0);
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  *(undefined8 *)(param_1 + lVar32) = in_stack_000001f0;
  _objc_release(uVar28);
  lVar32 = (long)_DAT_112718f98;
  _objc_retain(param_34);
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  *(undefined8 *)(param_1 + lVar32) = param_34;
  _objc_release(uVar28);
  lVar32 = (long)_DAT_112718f9c;
  _objc_retain(in_stack_000001e0);
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  *(undefined8 *)(param_1 + lVar32) = in_stack_000001e0;
  _objc_release(uVar28);
  puVar1 = PTR_PTR_1126b35b0;
  _objc_alloc();
  uVar28 = param_6;
  func_0x00010bfa2420(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bfa1900();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000106c6927c(uVar2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011960();
  _objc_release(uVar5);
  _objc_release(uVar31);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar28);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18dde0(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae6b8;
  uVar31 = param_41;
  func_0x00010bfb9940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar31;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010bf8e420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e2e0(puVar1);
  _objc_release(puVar25);
  _objc_release(puVar4);
  _objc_release(uVar28);
  _objc_release(uVar5);
  _objc_release(uVar31);
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar32 = (long)_DAT_112718fa0;
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  *(undefined **)(param_1 + lVar32) = puVar4;
  _objc_release(uVar28);
  uVar31 = *(undefined8 *)(param_1 + lVar32);
  uVar28 = param_16;
  func_0x00010c269d40(param_16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x00010c0caea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar31);
  _objc_release(uVar5);
  _objc_release(uVar28);
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6c80(puVar1);
  _objc_release(uVar28);
  _objc_initWeak(auStack_5e8,param_1);
  uVar28 = param_16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar21;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_618 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_610 = 0xc2000000;
  pcStack_608 = FUN_104fde674;
  puStack_600 = &UNK_110851330;
  _objc_copyWeak(auStack_5f0,auStack_5e8);
  _objc_retain(param_16);
  uStack_5f8 = param_16;
  uVar31 = uVar28;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112718fa4);
  *(undefined8 *)(param_1 + _DAT_112718fa4) = uVar31;
  _objc_release(uVar5);
  _objc_retain(uVar31);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar21);
  _objc_release(uVar28);
  uVar28 = *(undefined8 *)(param_1 + lVar29);
  puStack_640 = puVar4;
  uStack_638 = 0xc2000000;
  pcStack_630 = FUN_104fde6f8;
  puStack_628 = &UNK_110842e18;
  puVar25 = PTR_PTR_1126b0418;
  uStack_620 = uVar31;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar28);
  _objc_release(puVar25);
  puVar6 = PTR_PTR_1126b33f0;
  _objc_alloc();
  uVar28 = param_13;
  func_0x00010c142e00(param_13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80();
  _objc_release(uVar28);
  lVar7 = param_1;
  func_0x000106c733fc();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106c73440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_24;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar28;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  _objc_release(uVar5);
  uVar5 = param_24;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar28;
  func_0x00010c0b7660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  _objc_release(uVar5);
  uVar28 = param_15;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar28;
  func_0x000106c77d90();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  uVar28 = param_15;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar28;
  func_0x000100a15258();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  puVar12 = PTR_PTR_1126b34d8;
  _objc_alloc();
  func_0x00010c037880();
  puVar13 = PTR_PTR_1126b34e8;
  _objc_alloc();
  lVar29 = param_1;
  func_0x000106c733fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046960();
  _objc_release(lVar29);
  uVar28 = param_30;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  puVar15 = PTR_PTR_1126b35b8;
  _objc_alloc();
  func_0x00010c011d00();
  puVar16 = PTR_PTR_1126b35c0;
  _objc_alloc();
  uVar28 = param_15;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012060();
  _objc_release(uVar28);
  puVar17 = PTR_PTR_1126b1da8;
  _objc_alloc();
  func_0x00010c04abe0();
  puVar18 = PTR_PTR_1126b35c8;
  _objc_alloc();
  func_0x00010c057140();
  puVar19 = PTR_PTR_1126b35d0;
  _objc_alloc();
  uVar5 = param_17;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ed20();
  _objc_release(uVar28);
  _objc_release(uVar5);
  uVar5 = param_24;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar28;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  _objc_release(uVar5);
  uVar5 = param_34;
  func_0x00010c2954a0(param_34);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c120(puVar19);
  _objc_release(uVar28);
  _objc_release(uVar5);
  func_0x00010c168a80(puVar19);
  func_0x00010c161e00(puVar19);
  uVar5 = param_21;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar19);
  _objc_release(uVar28);
  _objc_release(uVar5);
  uVar28 = param_23;
  func_0x00010c29cc80(param_23);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167ec0(puVar19);
  _objc_release(uVar5);
  _objc_release(uVar28);
  puVar20 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar22 = param_19;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar22;
  (**(code **)(lVar22 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar19);
  _objc_release(lVar29);
  _objc_release(lVar32);
  _objc_release(lVar22);
  uVar5 = param_22;
  func_0x00010c293380();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f040(puVar19);
  _objc_release(uVar28);
  _objc_release(uVar5);
  uVar5 = param_20;
  func_0x00010bfcf320();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4aa0(puVar19);
  _objc_release(uVar28);
  _objc_release(uVar5);
  puVar21 = PTR_PTR_1126b1548;
  _objc_alloc();
  func_0x00010c046040();
  lVar32 = param_18;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar32;
  (**(code **)(lVar32 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0660(puVar19);
  _objc_release(lVar22);
  _objc_release(lVar29);
  _objc_release(lVar32);
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d8a0(puVar19);
  _objc_release(puVar25);
  puVar23 = PTR_PTR_1126b35d8;
  _objc_alloc();
  func_0x00010c063840();
  uVar28 = param_7;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(puVar23);
  _objc_retain(param_41);
  _objc_retain(lVar7);
  puVar24 = PTR_PTR_1126b3688;
  _objc_opt_new();
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_b0 = puVar4;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104fdedd8;
  puStack_98 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x104fdee64;
  puStack_c0 = &UNK_110860ee8;
  uStack_90 = uVar28;
  _objc_retain(uVar28);
  uStack_b8 = uVar28;
  func_0x00010c017be0(puVar25);
  func_0x00010c16eb00(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_100 = puVar4;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x104fdeed8;
  puStack_e8 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_128 = puVar4;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x104fdef64;
  puStack_110 = &UNK_110860ee8;
  uStack_e0 = uVar28;
  _objc_retain(uVar28);
  uStack_108 = uVar28;
  func_0x00010c017be0();
  func_0x00010c20d940(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_150 = puVar4;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x104fdefd8;
  puStack_138 = &UNK_110860eb8;
  _objc_retain(param_12);
  uStack_130 = param_12;
  puStack_178 = puVar4;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_104fdf074;
  puStack_160 = &UNK_110860f18;
  _objc_retain(param_12);
  uStack_158 = param_12;
  func_0x00010c017be0();
  func_0x00010c178e20(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_1a0 = puVar4;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_104fdf11c;
  puStack_188 = &UNK_110860eb8;
  _objc_retain(param_12);
  uStack_180 = param_12;
  puStack_1c8 = puVar4;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x104fdf1e8;
  puStack_1b0 = &UNK_110860f48;
  uStack_1a8 = param_12;
  _objc_retain(param_12);
  func_0x00010c017be0();
  func_0x00010c188240(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_1f0 = puVar4;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x104fdf278;
  puStack_1d8 = &UNK_110860eb8;
  _objc_retain(param_10);
  uStack_1d0 = param_10;
  puStack_218 = puVar4;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_104fdf31c;
  puStack_200 = &UNK_110860ee8;
  uStack_1f8 = param_10;
  _objc_retain(param_10);
  func_0x00010c017be0(puVar25);
  func_0x00010c1c6c60(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_240 = puVar4;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_104fdf438;
  puStack_228 = &UNK_110860eb8;
  _objc_retain(param_14);
  uStack_220 = param_14;
  puStack_270 = puVar4;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_104fdf4c8;
  puStack_258 = &UNK_110860f78;
  uStack_250 = param_14;
  lStack_248 = lVar7;
  _objc_retain(lVar7);
  _objc_retain(param_14);
  func_0x00010c017be0();
  func_0x00010c1de0e0(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_298 = puVar4;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_104fdf568;
  puStack_280 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_2c0 = puVar4;
  uStack_2b8 = 0xc2000000;
  uStack_2b0 = 0x104fdf5f4;
  puStack_2a8 = &UNK_110860ee8;
  uStack_278 = uVar28;
  _objc_retain(uVar28);
  uStack_2a0 = uVar28;
  func_0x00010c017be0();
  func_0x00010c1d9fe0(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_2e8 = puVar4;
  uStack_2e0 = 0xc2000000;
  uStack_2d8 = 0x104fdf668;
  puStack_2d0 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_310 = puVar4;
  uStack_308 = 0xc2000000;
  uStack_300 = 0x104fdf6f4;
  puStack_2f8 = &UNK_110860ee8;
  uStack_2c8 = uVar28;
  _objc_retain(uVar28);
  uStack_2f0 = uVar28;
  func_0x00010c017be0();
  func_0x00010c206480(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc(PTR_PTR_1126b3690);
  puStack_338 = puVar4;
  uStack_330 = 0xc2000000;
  uStack_328 = 0x104fdf768;
  puStack_320 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_360 = puVar4;
  uStack_358 = 0xc2000000;
  uStack_350 = 0x104fdf7f4;
  puStack_348 = &UNK_110860ee8;
  uStack_318 = uVar28;
  _objc_retain(uVar28);
  uStack_340 = uVar28;
  func_0x00010c017be0();
  func_0x00010c17d6a0(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_388 = puVar4;
  uStack_380 = 0xc2000000;
  uStack_378 = 0x104fdf868;
  puStack_370 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_3b0 = puVar4;
  uStack_3a8 = 0xc2000000;
  uStack_3a0 = 0x104fdf8f4;
  puStack_398 = &UNK_110860ee8;
  uStack_368 = uVar28;
  _objc_retain(uVar28);
  uStack_390 = uVar28;
  func_0x00010c017be0();
  func_0x00010c206440(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_3d8 = puVar4;
  uStack_3d0 = 0xc2000000;
  uStack_3c8 = 0x104fdf968;
  puStack_3c0 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_400 = puVar4;
  uStack_3f8 = 0xc2000000;
  uStack_3f0 = 0x104fdf9f4;
  puStack_3e8 = &UNK_110860ee8;
  uStack_3b8 = uVar28;
  _objc_retain(uVar28);
  uStack_3e0 = uVar28;
  func_0x00010c017be0(puVar25);
  func_0x00010c1991c0(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_428 = puVar4;
  uStack_420 = 0xc2000000;
  uStack_418 = 0x104fdfa68;
  puStack_410 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_450 = puVar4;
  uStack_448 = 0xc2000000;
  uStack_440 = 0x104fdfaf4;
  puStack_438 = &UNK_110860ee8;
  uStack_408 = uVar28;
  _objc_retain(uVar28);
  uStack_430 = uVar28;
  func_0x00010c017be0();
  func_0x00010c20dd40(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_478 = puVar4;
  uStack_470 = 0xc2000000;
  pcStack_468 = FUN_104fdfb68;
  puStack_460 = &UNK_110860eb8;
  _objc_retain(puVar23);
  puStack_4a0 = puVar4;
  uStack_498 = 0xc2000000;
  pcStack_490 = FUN_104fdfbc0;
  puStack_488 = &UNK_110860f48;
  puStack_480 = puVar23;
  puStack_458 = puVar23;
  _objc_retain(puVar23);
  func_0x00010c017be0();
  func_0x00010c20e060(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_4c8 = puVar4;
  uStack_4c0 = 0xc2000000;
  uStack_4b8 = 0x104fdfc10;
  puStack_4b0 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_4f0 = puVar4;
  uStack_4e8 = 0xc2000000;
  uStack_4e0 = 0x104fdfc9c;
  puStack_4d8 = &UNK_110860ee8;
  uStack_4a8 = uVar28;
  _objc_retain(uVar28);
  uStack_4d0 = uVar28;
  func_0x00010c017be0();
  func_0x00010c1bda20(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_518 = puVar4;
  uStack_510 = 0xc2000000;
  uStack_508 = 0x104fdfd10;
  puStack_500 = &UNK_110860eb8;
  _objc_retain(param_41);
  uStack_4f8 = param_41;
  puStack_540 = puVar4;
  uStack_538 = 0xc2000000;
  uStack_530 = 0x104fdfdac;
  puStack_528 = &UNK_110860f18;
  uStack_520 = param_41;
  _objc_retain(param_41);
  func_0x00010c017be0();
  func_0x00010c1ca8c0(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_568 = puVar4;
  uStack_560 = 0xc2000000;
  uStack_558 = 0x104fdfe48;
  puStack_550 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_590 = puVar4;
  uStack_588 = 0xc2000000;
  uStack_580 = 0x104fdfed4;
  puStack_578 = &UNK_110860ee8;
  uStack_548 = uVar28;
  _objc_retain(uVar28);
  uStack_570 = uVar28;
  func_0x00010c017be0();
  func_0x00010c1e0e80(puVar24);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3690;
  _objc_alloc();
  puStack_5b8 = puVar4;
  uStack_5b0 = 0xc2000000;
  uStack_5a8 = 0x104fdff48;
  puStack_5a0 = &UNK_110860eb8;
  _objc_retain(uVar28);
  puStack_5e0 = puVar4;
  uStack_5d8 = 0xc2000000;
  uStack_5d0 = 0x104fdffd4;
  puStack_5c8 = &UNK_110860ee8;
  uStack_5c0 = uVar28;
  uStack_598 = uVar28;
  _objc_retain(uVar28);
  func_0x00010c017be0();
  func_0x00010c1adc00(puVar24);
  _objc_release(puVar25);
  _objc_release(uStack_5c0);
  _objc_release(uStack_598);
  _objc_release(uStack_570);
  _objc_release(uStack_548);
  _objc_release(uStack_520);
  _objc_release(uStack_4f8);
  _objc_release(uStack_4d0);
  _objc_release(uStack_4a8);
  _objc_release(puStack_480);
  _objc_release(puStack_458);
  _objc_release(uStack_430);
  _objc_release(uStack_408);
  _objc_release(uStack_3e0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_390);
  _objc_release(uStack_368);
  _objc_release(uStack_340);
  _objc_release(uStack_318);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_278);
  _objc_release(lStack_248);
  _objc_release(uStack_250);
  _objc_release(uStack_220);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_180);
  _objc_release(uStack_158);
  _objc_release(uStack_130);
  _objc_release(uStack_108);
  _objc_release(uStack_e0);
  _objc_release(uStack_b8);
  _objc_release(uStack_90);
  _objc_release(uVar28);
  _objc_release(param_41);
  _objc_release(puVar23);
  _objc_release(lVar7);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_12);
  func_0x00010c19aba0(puVar19);
  _objc_release(puVar24);
  _objc_release(uVar28);
  uVar28 = param_63;
  FUN_104fd25b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0620(puVar19);
  _objc_release(uVar28);
  func_0x00010c1df500(puVar19);
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1320(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b35e0;
  _objc_alloc(PTR_PTR_1126b35e0);
  func_0x00010c035fa0();
  func_0x00010c1dba20(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b2ef8;
  _objc_alloc(PTR_PTR_1126b2ef8);
  func_0x00010bff5660();
  func_0x00010c1dda80(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b35e8;
  _objc_alloc(PTR_PTR_1126b35e8);
  uVar28 = param_15;
  func_0x00010c0f98e0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0058e0(puVar25);
  func_0x00010c188640(puVar19);
  _objc_release(puVar25);
  _objc_release(uVar28);
  func_0x00010c1ce4c0(puVar19);
  puVar25 = PTR_PTR_1126b35f0;
  _objc_alloc(PTR_PTR_1126b35f0);
  func_0x00010c0564a0();
  func_0x00010c211220(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b34e0;
  _objc_alloc(PTR_PTR_1126b34e0);
  uVar28 = param_15;
  func_0x00010c0f98e0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cd40(puVar25);
  func_0x00010c1a3b60(puVar19);
  _objc_release(puVar25);
  _objc_release(uVar28);
  puVar25 = PTR_PTR_1126b34f8;
  _objc_alloc(PTR_PTR_1126b34f8);
  func_0x00010bff7720();
  func_0x00010c170180(puVar19);
  _objc_release(puVar25);
  if (param_50 != 0) {
    puVar25 = PTR_PTR_1126b35f8;
    _objc_alloc(PTR_PTR_1126b35f8);
    func_0x00010c056fc0();
    func_0x00010c1cac00(puVar19);
    _objc_release(puVar25);
  }
  puVar25 = PTR_PTR_1126b3600;
  _objc_alloc(PTR_PTR_1126b3600);
  uVar28 = param_15;
  func_0x00010c0f98e0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056740(puVar25);
  func_0x00010c17bf60(puVar19);
  _objc_release(puVar25);
  _objc_release(uVar28);
  func_0x00010c18ab20(puVar19);
  func_0x00010c21cb00(puVar19);
  uVar28 = param_37;
  func_0x00010c28f5e0(param_37);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a240(puVar19);
  _objc_release(uVar5);
  _objc_release(uVar28);
  if (param_53 != 0) {
    puVar25 = PTR_PTR_1126b3608;
    _objc_alloc(PTR_PTR_1126b3608);
    func_0x00010c056580();
    func_0x00010c1c6d60(puVar19);
    _objc_release(puVar25);
  }
  puVar25 = PTR_PTR_1126b3610;
  _objc_alloc(PTR_PTR_1126b3610);
  func_0x00010c057120();
  func_0x00010c1cab00(puVar19);
  _objc_release(puVar25);
  if (param_38 != 0) {
    puVar25 = PTR_PTR_1126b3618;
    _objc_alloc(PTR_PTR_1126b3618);
    func_0x00010c056780();
    func_0x00010c20e4a0(puVar19);
    _objc_release(puVar25);
  }
  puVar25 = PTR_PTR_1126b3620;
  _objc_alloc(PTR_PTR_1126b3620);
  func_0x00010c0570e0();
  func_0x00010c191e40(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3628;
  _objc_alloc(PTR_PTR_1126b3628);
  func_0x00010c0075c0();
  func_0x00010c188360(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3630;
  _objc_alloc(PTR_PTR_1126b3630);
  func_0x00010c0075e0();
  func_0x00010c20e420(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3638;
  _objc_alloc(PTR_PTR_1126b3638);
  uVar28 = param_60;
  func_0x00010c244ac0(param_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007920(puVar25);
  func_0x00010c20e440(puVar19);
  _objc_release(puVar25);
  _objc_release(uVar28);
  puVar25 = PTR_PTR_1126b3640;
  _objc_opt_new();
  uVar28 = *(undefined8 *)(param_1 + _DAT_112718fa8);
  *(undefined **)(param_1 + _DAT_112718fa8) = puVar25;
  _objc_release(uVar28);
  uVar28 = param_35;
  func_0x00010c269d40(param_35);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x00010bf58c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3fe0(puVar19);
  _objc_release(uVar5);
  _objc_release(uVar28);
  puVar25 = PTR_PTR_1126b3648;
  _objc_alloc(PTR_PTR_1126b3648);
  func_0x00010c0058c0();
  func_0x00010c17bf80(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3650;
  _objc_alloc(PTR_PTR_1126b3650);
  func_0x00010c030000();
  func_0x00010c1ce460(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3510;
  _objc_alloc(PTR_PTR_1126b3510);
  uVar28 = param_15;
  func_0x00010c0f98e0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04fdc0(puVar25);
  func_0x00010c1bf160(puVar19);
  _objc_release(puVar25);
  _objc_release(uVar28);
  puVar25 = PTR_PTR_1126b3658;
  _objc_alloc(PTR_PTR_1126b3658);
  func_0x00010c04fda0();
  func_0x00010c1e9460(puVar19);
  _objc_release(puVar25);
  uVar28 = param_39;
  func_0x00010bf1ef20(param_39);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x0001068316a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172f60(puVar19);
  _objc_release(uVar26);
  _objc_release(uVar5);
  _objc_release(uVar28);
  uVar28 = param_40;
  func_0x00010bf2a9e0(param_40);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b0fb8;
  _objc_alloc(PTR_PTR_1126b0fb8);
  func_0x00010c0093c0();
  uVar26 = uVar5;
  func_0x00010c0b7000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176e80(puVar19);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar5);
  _objc_release(uVar28);
  puVar25 = PTR_PTR_1126b3418;
  _objc_alloc(PTR_PTR_1126b3418);
  func_0x00010c0616e0();
  func_0x00010c1cb280(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b34f0;
  _objc_alloc(PTR_PTR_1126b34f0);
  func_0x00010c009b60();
  func_0x00010c18abe0(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3660;
  _objc_alloc(PTR_PTR_1126b3660);
  uVar28 = param_15;
  func_0x00010c0f98e0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9280(puVar25);
  func_0x00010c20cba0(puVar19);
  _objc_release(puVar25);
  _objc_release(uVar28);
  puVar25 = PTR_PTR_1126b3668;
  _objc_alloc(PTR_PTR_1126b3668);
  func_0x00010c061a40();
  func_0x00010c17ba20(puVar19);
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b3670;
  _objc_alloc(PTR_PTR_1126b3670);
  func_0x00010c057100();
  func_0x00010c1fc640(puVar19);
  _objc_release(puVar25);
  uVar5 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c0f14e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d83e0(puVar19);
  _objc_release(uVar28);
  _objc_release(uVar5);
  lVar29 = param_1;
  func_0x00010be1fa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1744c0(puVar19);
  _objc_release(lVar29);
  puStack_668 = puVar4;
  uStack_660 = 0xc2000000;
  pcStack_658 = FUN_104fde700;
  puStack_650 = &UNK_11084d688;
  _objc_copyWeak(auStack_648,auStack_5e8);
  func_0x00010c185060(puVar19);
  puStack_690 = puVar4;
  uStack_688 = 0xc2000000;
  pcStack_680 = FUN_104fde750;
  puStack_678 = &UNK_110860e88;
  _objc_copyWeak(auStack_670,auStack_5e8);
  func_0x00010c1e0fe0(puVar19);
  puVar4 = PTR_PTR_1126b3678;
  _objc_alloc();
  uVar28 = param_13;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar28);
  puStack_698 = PTR_PTR_1126e5830;
  plVar27 = &lStack_6a0;
  lStack_6a0 = param_1;
  _objc_msgSendSuper2(plVar27,PTR_s_initWithValdiView_presentationTy_1125272a0,puVar4,param_64);
  if (plVar27 != (long *)0x0) {
    func_0x00010c1c1bc0(puVar6);
    lVar29 = (long)_DAT_112718fac;
    _objc_retain(puVar6);
    uVar28 = *(undefined8 *)((long)plVar27 + lVar29);
    *(undefined **)((long)plVar27 + lVar29) = puVar6;
    _objc_release(uVar28);
    _objc_storeWeak((long)plVar27 + (long)_DAT_112718fb0,in_stack_000001e8);
  }
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_670);
  _objc_destroyWeak(auStack_648);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar3);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(uVar31);
  _objc_release(uStack_5f8);
  _objc_destroyWeak(auStack_5f0);
  _objc_destroyWeak(auStack_5e8);
  _objc_release(puVar1);
  _objc_release(in_stack_000001f0);
  _objc_release(in_stack_000001e8);
  _objc_release(in_stack_000001e0);
  _objc_release(in_stack_000001d8);
  _objc_release(in_stack_000001d0);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
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
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar27;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_670);
  _objc_destroyWeak(auStack_648);
  _objc_destroyWeak(auStack_5f0);
  _objc_destroyWeak(auStack_5e8);
  __Unwind_Resume();
  plVar27 = (long *)(param_4 + 0x28);
  _objc_loadWeakRetained();
  if (plVar27 != (long *)0x0) {
    uVar31 = *(undefined8 *)((long)plVar27 + (long)_DAT_112718fa0);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar5;
    func_0x00010c0caea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar31);
    _objc_release(uVar28);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar27);
  return plVar27;
}



/* Entry: 104fde674; end: 104fde6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fde674(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112718fa0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0caea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fde6f8; end: 104fde6ff;  */

void FUN_104fde6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 104fde700; end: 104fde74f;  */

void FUN_104fde700(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7a3c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fde750; end: 104fde7bf;  */

void FUN_104fde750(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7c580(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fde7c0; end: 104fde7f3; -[SCPlusManagementViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fde7c0(long param_1)

{
  param_1 = param_1 + _DAT_112718fb0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1022e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fde7f4; end: 104fde9b3; -[SCPlusManagementViewController _getHostProfileData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104fde7f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112718f90);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar1 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar4 = uVar7;
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c074e40();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf25020(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar7;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          goto LAB_104fde964;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
    uVar4 = 0;
  }
LAB_104fde964:
  _objc_release(lVar3);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 104fde9b4; end: 104fde9bb; -[SCPlusManagementViewController presentEmailRequiredDialogIfNeeded] */

undefined8 FUN_104fde9b4(void)

{
  return 0;
}



/* Entry: 104fde9bc; end: 104fde9c3; -[SCPlusManagementViewController pageViewName] */

undefined8 FUN_104fde9bc(void)

{
  return 199;
}



/* Entry: 104fde9c4; end: 104fdeaa3; -[SCPlusManagementViewController _presentAvatarBuilderWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fde9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112718f94;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = param_3;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112718fb4);
  *(undefined8 *)(param_1 + _DAT_112718fb4) = uVar2;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x000106c733fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fdeaa4; end: 104fdebf3; -[SCPlusManagementViewController _presentMapCustomizationTrayWithTab:onClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fdeaa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112718fb8;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112718fbc);
  *(undefined8 *)(param_1 + _DAT_112718fbc) = param_4;
  _objc_release(uVar4);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc18d8);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x000106c733fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3680;
  _objc_alloc(PTR_PTR_1126b3680);
  func_0x00010c058520();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112718f9c);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fdebf4; end: 104fdec8b; -[SCPlusManagementViewController bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fdebf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112718f94;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar3 = (long)_DAT_112718fb4;
  if ((lVar1 != 0) && (*(long *)(param_1 + lVar3) != 0)) {
    (**(code **)(*(long *)(param_1 + lVar3) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fdec8c; end: 104fdecdb; -[SCPlusManagementViewController trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fdec8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718fb8);
  *(undefined8 *)(param_1 + _DAT_112718fb8) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112718fbc;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fdecdc; end: 104fdedd7; -[SCPlusManagementViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fdecdc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718fbc,0);
  _objc_storeStrong(param_1 + _DAT_112718fb8,0);
  _objc_storeStrong(param_1 + _DAT_112718f9c,0);
  _objc_storeStrong(param_1 + _DAT_112718f98,0);
  _objc_storeStrong(param_1 + _DAT_112718fb4,0);
  _objc_storeStrong(param_1 + _DAT_112718f94,0);
  _objc_storeStrong(param_1 + _DAT_112718fa4,0);
  _objc_storeStrong(param_1 + _DAT_112718fa0,0);
  _objc_storeStrong(param_1 + _DAT_112718f88,0);
  _objc_storeStrong(param_1 + _DAT_112718fa8,0);
  _objc_storeStrong(param_1 + _DAT_112718f90,0);
  _objc_storeStrong(param_1 + _DAT_112718f8c,0);
  _objc_destroyWeak(param_1 + _DAT_112718fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718fac,0);
  return;
}



/* Entry: 104fdedd8; end: 104fdf073;  */

void FUN_104fdedd8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15240();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fdf074; end: 104fdf11b;  */

void FUN_104fdf074(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c08fa60();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf611e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba460();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fdf11c; end: 104fdf31b;  */

void FUN_104fdf11c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_2 + 0x10))(param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    (**(code **)(param_2 + 0x10))(param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fdf31c; end: 104fdf42b;  */

void FUN_104fdf31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c064c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c1dbc00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104fdf42c; end: 104fdf437;  */

void FUN_104fdf42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fdf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104fdf438; end: 104fdf4c7;  */

void FUN_104fdf438(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c28d720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfca160();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104fdf4c8; end: 104fdf567;  */

void FUN_104fdf4c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c28d720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd000();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fdf568; end: 104fdfb67;  */

void FUN_104fdf568(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6f60();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fdfb68; end: 104fdfbbf;  */

void FUN_104fdfb68(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfca180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fdfbc0; end: 104fe0047;  */

void FUN_104fdfbc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1fd020(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fe0048; end: 104fe00b3; -[SCCPlusManagementPagePresenterImpl initWithDelegate:] */

undefined1 * FUN_104fe0048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5838;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fe00b4; end: 104fe010f; -[SCCPlusManagementPagePresenterImpl switchToManagementWithDidSubscribe:] */

void FUN_104fe00b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104fe0110;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 104fe0110; end: 104fe014b;  */

void FUN_104fe0110(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b8280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fe014c; end: 104fe0153; -[SCCPlusManagementPagePresenterImpl .cxx_destruct] */

void FUN_104fe014c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104fe0154; end: 104fe1157; -[SCPlusSubscribeViewController initWithPlusServices:plusSyncServices:storeKitServices:valdiRuntimeProvider:taskManagementServices:featureSettingsService:userInfoServices:grpcClientFactory:composerNetworkingBridgeServices:deepLinkHandlingServices:composerPeopleBridgeFriendServices:composerCoreUIServices:composerAnimatedImageViewServices:composerPeopleBridgeUserServices:circumstanceEngine:billboardStringsServices:memoriesMonetizationServices:lensPlusExclusiveLensesServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:emailSettingsScopeExposer:userTrackedBlizzardLogger:loggingContext:context:presentationType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104fe0154(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_28);
  uVar1 = param_1;
  func_0x000106c733fc();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3698;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bfa2420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfa1900(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x000106c6927c(uVar4,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011960();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar8 = PTR_PTR_1126b33f0;
  _objc_alloc();
  uVar26 = param_6;
  func_0x00010c142e00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80();
  _objc_release(uVar26);
  uVar26 = param_14;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar26);
  uVar26 = param_14;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar26);
  uVar26 = param_7;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar26;
  func_0x000106c77d90();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar26);
  uVar26 = param_7;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar26;
  func_0x000100a15258();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar26);
  puVar13 = PTR_PTR_1126b3510;
  _objc_alloc();
  uVar26 = param_7;
  func_0x00010c0f98e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04fdc0();
  _objc_release(uVar26);
  puVar14 = PTR_PTR_1126b34d8;
  _objc_alloc();
  func_0x00010c037880();
  puVar15 = PTR_PTR_1126b34e8;
  _objc_alloc();
  func_0x00010c046960();
  puVar16 = PTR_PTR_1126b3508;
  _objc_alloc();
  func_0x00010c00a2c0();
  puVar17 = PTR_PTR_1126b36a0;
  _objc_alloc(PTR_PTR_1126b36a0);
  uVar26 = param_11;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ed00();
  _objc_release(uVar18);
  _objc_release(uVar26);
  puVar24 = PTR_PTR_1126b34f8;
  _objc_alloc();
  func_0x00010bff7720();
  func_0x00010c170180(puVar17);
  _objc_release(puVar24);
  uVar26 = param_15;
  func_0x00010c29cc80(param_15);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167ec0(puVar17);
  _objc_release(uVar18);
  _objc_release(uVar26);
  uVar26 = param_25;
  FUN_104fd25b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0620(puVar17);
  _objc_release(uVar26);
  puVar24 = PTR_PTR_1126b36a8;
  _objc_alloc(PTR_PTR_1126b36a8);
  func_0x00010c0616e0();
  func_0x00010c20a380(puVar17);
  _objc_release(puVar24);
  puVar24 = PTR_PTR_1126b35b8;
  _objc_alloc();
  func_0x00010c011d00();
  func_0x00010c168a80(puVar17);
  _objc_release(puVar24);
  uVar18 = param_16;
  func_0x00010c293380();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f040(puVar17);
  _objc_release(uVar26);
  _objc_release(uVar18);
  puVar19 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar20 = param_13;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  (**(code **)(lVar20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar17);
  _objc_release(lVar27);
  _objc_release(lVar21);
  _objc_release(lVar20);
  uVar22 = param_14;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar18;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4c0(puVar17);
  _objc_release(uVar26);
  _objc_release(uVar18);
  _objc_release(uVar22);
  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d8a0(puVar17);
  _objc_release(puVar24);
  _objc_retain(param_26);
  puVar24 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_198 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_a0 = (undefined **)0xc2000000;
  uStack_98 = 0x104fe1450;
  pcStack_90 = (code *)&UNK_110847658;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = (code *)0x104fe1464;
  puStack_b8 = &UNK_110847658;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x104fe1478;
  puStack_100 = &UNK_110847180;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x104fe148c;
  puStack_128 = &UNK_1108610e8;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x104fe14a0;
  puStack_150 = &UNK_110847658;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x104fe14b4;
  puStack_178 = &UNK_110847658;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x104fe14c8;
  puStack_1a0 = &UNK_110842b58;
  puStack_170 = puStack_198;
  puStack_148 = puStack_198;
  puStack_120 = puStack_198;
  puStack_f8 = puStack_198;
  puStack_e8 = puStack_198;
  ppuStack_b0 = (undefined **)puStack_198;
  puStack_88 = puStack_198;
  func_0x00010c0bf840(param_26);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(param_26);
  _objc_retain(param_17);
  uVar3 = param_3;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c080120();
  if ((((uVar3 & 1) == 0) && (uVar3 = uVar4, func_0x00010bfd6d20(), (int)uVar3 != 0)) &&
     (uVar26 = param_17, func_0x00010bf1f440(), (int)uVar26 != 0)) {
    _objc_release(uVar4);
    _objc_release(param_17);
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a040(puVar17);
    _objc_release(puVar23);
    param_27 = 4;
  }
  else {
    _objc_release(uVar4);
    _objc_release(param_17);
  }
  puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1320(puVar17);
  _objc_release(puVar23);
  _objc_retain(param_26);
  ppuStack_b0 = &puStack_a8;
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104fe13e0;
  puStack_88 = (undefined8 *)0x104fe13f0;
  uStack_80 = 0;
  puStack_d0 = puVar24;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104fe13f8;
  puStack_b8 = &UNK_110842b58;
  ppuStack_a0 = ppuStack_b0;
  func_0x00010c0bf840(param_26);
  puVar23 = ppuStack_a0[5];
  func_0x00010c08fa60();
  if (puVar23 == (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = ppuStack_a0[5];
  }
  _objc_retain(puVar23);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_26);
  func_0x00010c1e9440(puVar17);
  _objc_release(puVar23);
  puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf0e0(puVar17);
  _objc_release(puVar23);
  _objc_retain(param_26);
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104fe13e0;
  puStack_88 = (undefined8 *)0x104fe13f0;
  uStack_80 = 0;
  puStack_d0 = puVar24;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104fe14ec;
  puStack_b8 = &UNK_1108610e8;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf840(param_26);
  puVar23 = ppuStack_a0[5];
  _objc_retain(puVar23);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_26);
  func_0x00010c174160(puVar17);
  _objc_release(puVar23);
  _objc_retain(param_26);
  puStack_a8 = (undefined *)0x0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104fe13e0;
  puStack_88 = (undefined8 *)0x104fe13f0;
  uStack_80 = 0;
  puStack_d0 = puVar24;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104fe163c;
  puStack_b8 = &UNK_110842b58;
  ppuStack_b0 = &puStack_a8;
  ppuStack_a0 = &puStack_a8;
  func_0x00010c0bf840(param_26);
  puVar24 = ppuStack_a0[5];
  func_0x00010c08fa60();
  if (puVar24 == (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar24 = ppuStack_a0[5];
  }
  _objc_retain(puVar24);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_26);
  func_0x00010c204fc0(puVar17);
  _objc_release(puVar24);
  uVar26 = param_19;
  func_0x00010c2954a0(param_19);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c120(puVar17);
  _objc_release(uVar18);
  _objc_release(uVar26);
  uVar26 = param_20;
  func_0x00010bf9ae20(param_20);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc5a0(puVar17);
  _objc_release(uVar18);
  _objc_release(uVar26);
  puVar24 = PTR_PTR_1126b34f0;
  _objc_alloc(PTR_PTR_1126b34f0);
  uVar26 = param_25;
  func_0x00010c0b39c0(param_25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247d20();
  func_0x00010c009b60(puVar24);
  func_0x00010c18abe0(puVar17);
  _objc_release(puVar24);
  _objc_release(uVar26);
  puVar24 = PTR_PTR_1126b0ff0;
  _objc_opt_new(PTR_PTR_1126b0ff0);
  func_0x00010c20c420(puVar17);
  _objc_release(puVar24);
  puVar24 = PTR_PTR_1126b36b0;
  _objc_alloc(PTR_PTR_1126b36b0);
  uVar26 = param_6;
  func_0x00010c142e00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar24);
  _objc_release(uVar26);
  puStack_1c0 = PTR_PTR_1126e5840;
  puVar25 = &uStack_1c8;
  uStack_1c8 = param_1;
  _objc_msgSendSuper2(puVar25,PTR_s_initWithValdiView_presentationTy_1125272a0,puVar24,param_27);
  if (puVar25 != (undefined8 *)0x0) {
    func_0x00010c1c1bc0(puVar8);
    lVar27 = (long)_DAT_112718fc4;
    _objc_retain(puVar8);
    uVar26 = *(undefined8 *)((long)puVar25 + lVar27);
    *(undefined **)((long)puVar25 + lVar27) = puVar8;
    _objc_release(uVar26);
    lVar27 = (long)_DAT_112718fc8;
    _objc_retain(param_9);
    uVar26 = *(undefined8 *)((long)puVar25 + lVar27);
    *(undefined8 *)((long)puVar25 + lVar27) = param_9;
    _objc_release(uVar26);
    _objc_storeWeak((long)puVar25 + (long)_DAT_112718fcc,param_28);
    puVar23 = PTR_PTR_1126b36b8;
    _objc_alloc();
    func_0x00010c00f4a0();
    uVar26 = *(undefined8 *)((long)puVar25 + (long)_DAT_112718fd0);
    *(undefined **)((long)puVar25 + (long)_DAT_112718fd0) = puVar23;
    _objc_release(uVar26);
  }
  _objc_release(puVar24);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_28);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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
  return puVar25;
}



/* Entry: 104fe1158; end: 104fe11f7; -[SCPlusSubscribeViewController presentViewController:animated:completion:] */

void FUN_104fe1158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c0f05a0();
  if (lVar1 != 0) {
    func_0x00010c0f05a0(param_1);
    func_0x00010c1d79e0(param_3);
  }
  puStack_38 = PTR_PTR_1126e5840;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_presentViewController_animated_c_112621588,param_3,param_4,
                      param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104fe11f8; end: 104fe1233; -[SCPlusSubscribeViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe11f8(long param_1)

{
  param_1 = param_1 + _DAT_112718fcc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2603a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe1234; end: 104fe132f; -[SCPlusSubscribeViewController presentEmailRequiredDialogIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fe1234(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_112718fc8);
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = lVar3;
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      func_0x00010c10f1a0(*(undefined8 *)(param_1 + _DAT_112718fd0),param_2,param_1);
      uVar5 = 1;
      goto LAB_104fe12f4;
    }
  }
  else {
    _objc_release(lVar2);
  }
  uVar5 = 0;
LAB_104fe12f4:
  _objc_release(lVar3);
  return uVar5;
}



/* Entry: 104fe1330; end: 104fe137b; -[SCPlusSubscribeViewController managementPagePresenter:wantsSwitchToManagementPageWithDidSubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe1330(long param_1)

{
  param_1 = param_1 + _DAT_112718fcc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c260380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe137c; end: 104fe1383; -[SCPlusSubscribeViewController pageViewName] */

undefined8 FUN_104fe137c(void)

{
  return 0xcb;
}


