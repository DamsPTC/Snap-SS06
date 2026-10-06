/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f1fa88; end: 108f1fb8b; -[SCSnapProProfilesProviderImpl handlerForBusinessProfileId:userId:isManaged:createIfNeeded:completion:] */

void FUN_108f1fa88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_5 == 0) {
    func_0x00010bfd3360(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f1fb8c;
  puStack_50 = &UNK_11092fc10;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x00010bfd3280(uVar1,param_2,param_3,param_4,param_6,&puStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_7);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f1fb8c; end: 108f1fb9f;  */

void FUN_108f1fb8c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f1fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108f1fba0; end: 108f1fc23; -[SCSnapProProfilesProviderImpl syncedHandlerForBusinessProfileId:isManaged:] */

void FUN_108f1fba0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010bfd3360(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar2;
  func_0x00010c266a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f1fc24; end: 108f1fcaf; -[SCSnapProProfilesProviderImpl didUpdateSubscribedForBusinessProfileId:hostAccountUserId:subscribed:] */

void FUN_108f1fc24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc8b8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03aee0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f1fcb0; end: 108f1fcf7; -[SCSnapProProfilesProviderImpl .cxx_destruct] */

void FUN_108f1fcb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f1fcf8; end: 108f2001f;  */

void FUN_108f1fcf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f1e114();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126dc8c8;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf25080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2c3e0();
  uVar5 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf25080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2c0();
  func_0x00010c04dfa0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126dc8d0;
  _objc_alloc(PTR_PTR_1126dc8d0);
  uVar1 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf251a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a460();
  uVar5 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf251a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c24c160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2376e0();
  func_0x00010c046580(puVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126d4dd8;
  _objc_alloc();
  func_0x00010bf2d160();
  func_0x00010bf2d140();
  func_0x00010bf2dac0();
  func_0x00010bf2d4e0();
  uVar1 = param_2;
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074e40();
  uVar5 = param_2;
  func_0x00010c1413c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2911a0();
  uVar10 = param_2;
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar11 = uVar10;
  func_0x00010bf251a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfddda0();
  func_0x00010c03ac60(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108f20020; end: 108f201a3;  */

void FUN_108f20020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x000108f27718(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf162c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c150960(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f201a4;
  puStack_60 = &UNK_110847450;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  ppuVar3 = &puStack_78;
  uStack_58 = uVar8;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126dc8d8;
  func_0x00010bfbc0e0(PTR_PTR_1126dc8d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d8300(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfbfa00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f201a4; end: 108f201ab;  */

void FUN_108f201a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126dc990;
  _objc_opt_new(PTR_PTR_1126dc990);
  puVar2 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f201ac; end: 108f201b7; -[SCSnapProUserProfileIdProviderImpl logNotificationCenterTappedWithoutId] */

void FUN_108f201ac(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110acc9d8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f201b8; end: 108f201bf; -[SCSnapProUserProfileIdProviderImpl profileId] */

void FUN_108f201b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe44b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hostAccountProfileId_1125d6ae8);
  return;
}



/* Entry: 108f201c0; end: 108f201c7; -[SCSnapProUserProfileIdProviderImpl profileIdFuture] */

void FUN_108f201c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe44d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hostAccountProfileIdFuture_1125d6af0);
  return;
}



/* Entry: 108f201c8; end: 108f20207; -[SCSnapProUserProfileIdProviderImpl hasSnapProProfile] */

bool FUN_108f201c8(long param_1)

{
  long lVar1;
  
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108f20208; end: 108f20243; -[SCSnapProUserProfileIdProviderImpl showSaveToPublicProfile] */

long FUN_108f20208(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf021a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfdc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasSnapProProfile_1125d4ae0);
  return param_1;
}



/* Entry: 108f20244; end: 108f2024b; -[SCSnapProUserProfileIdProviderImpl canCreatePublicProfile] */

void FUN_108f20244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0715b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isEligibleForProfileCreation_1125f9f78);
  return;
}



/* Entry: 108f2024c; end: 108f20253; -[SCSnapProUserProfileIdProviderImpl hasPublicProfile] */

void FUN_108f2024c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasPublicProfile_1125d44d0);
  return;
}



/* Entry: 108f20254; end: 108f2025b; -[SCSnapProUserProfileIdProviderImpl isStandardProfileEnabled] */

void FUN_108f20254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isStandardProfileEnabled_1125fd7f8);
  return;
}



/* Entry: 108f2025c; end: 108f20263; -[SCSnapProUserProfileIdProviderImpl isFriendsOnlyProfile] */

void FUN_108f2025c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isFriendsOnlyProfile_1125fa858);
  return;
}



/* Entry: 108f20264; end: 108f2026b; -[SCSnapProUserProfileIdProviderImpl isUser16or17] */

void FUN_108f20264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0824b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isUser16or17_1125fe338);
  return;
}



/* Entry: 108f2026c; end: 108f20273; -[SCSnapProUserProfileIdProviderImpl isUserOver18] */

void FUN_108f2026c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c082890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isUserOver18_1125fe430);
  return;
}



/* Entry: 108f20274; end: 108f202a3; -[SCSnapProUserProfileIdProviderImpl .cxx_destruct] */

void FUN_108f20274(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f202a4; end: 108f203bf; -[SCSubscriptionWorkflowStarter initWithCofStore:runtimeProvider:alertPresenterFactory:] */

undefined8 *
FUN_108f202a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ff400;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126c2228;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf12000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108f203c0; end: 108f2043f;  */

void FUN_108f203c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c2230;
  func_0x00010bfbc0e0(PTR_PTR_1126c2230,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfc07c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f20440; end: 108f2064b; -[SCSubscriptionWorkflowStarter startWithDisplayName:isSubscribing:sourceType:uiContainer:completion:] */

void FUN_108f20440(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108f2064c;
  puStack_80 = &UNK_110acb538;
  _objc_retain(param_7);
  ppuVar3 = &puStack_98;
  uStack_78 = param_7;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 0) {
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x108f206e4;
    puStack_f8 = &UNK_1109f2c80;
    _objc_retain(uVar2);
    uStack_f0 = uVar2;
    _objc_retain(param_3);
    uStack_e8 = param_3;
    _objc_retain(param_5);
    uStack_e0 = param_5;
    ppuStack_d8 = ppuVar3;
    _objc_retain(ppuVar3);
    func_0x00010c269fc0(uVar4,param_2,&puStack_110);
    _objc_release(ppuStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    uVar4 = uStack_f0;
  }
  else {
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_108f20660;
    puStack_b8 = &UNK_1109f2c50;
    _objc_retain(uVar2);
    uStack_b0 = uVar2;
    _objc_retain(param_5);
    uStack_a8 = param_5;
    ppuStack_a0 = ppuVar3;
    _objc_retain(ppuVar3);
    func_0x00010c269fc0(uVar4,param_2,&puStack_d0);
    _objc_release(ppuStack_a0);
    _objc_release(uStack_a8);
    uVar4 = uStack_b0;
  }
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108f2064c; end: 108f2065f;  */

void FUN_108f2064c(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108f2065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108f20660; end: 108f2076b;  */

void FUN_108f20660(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  (**(code **)(param_2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2600e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f2076c; end: 108f2079b; -[SCSubscriptionWorkflowStarter .cxx_destruct] */

void FUN_108f2076c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f2079c; end: 108f207bf; -[SCImpalaManagedBusinessesResponse copyWithZone:] */

undefined8 FUN_108f2079c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f207c0; end: 108f20837; -[SCImpalaManagedBusinessesResponse hash] */

undefined8 * FUN_108f207c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f208dc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(char *)(puVar2 + 1) != *(char *)(param_3 + 1) ||
         (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
        (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108f208dc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108f208dc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108f208dc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108f20838; end: 108f208f7; -[SCImpalaManagedBusinessesResponse isEqual:] */

long FUN_108f20838(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f208dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
        (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
      lVar3 = 0;
      goto LAB_108f208dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f208dc;
    }
  }
  lVar3 = 1;
LAB_108f208dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f208f8; end: 108f208ff; -[SCImpalaManagedBusinessesResponse isPopular] */

undefined1 FUN_108f208f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f20900; end: 108f20907; -[SCImpalaManagedBusinessesResponse isEligibleForProfileCreation] */

undefined1 FUN_108f20900(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f20908; end: 108f2090f; -[SCImpalaManagedBusinessesResponse alwaysShowSpotlightSendToProfile] */

undefined1 FUN_108f20908(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f20910; end: 108f2091b; -[SCImpalaManagedBusinessesResponse .cxx_destruct] */

void FUN_108f20910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f2091c; end: 108f209c7; -[SCImpalaManagedPublicStory initWithStoryManifest:storyCard:] */

undefined1 *
FUN_108f2091c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f209c8; end: 108f209eb; -[SCImpalaManagedPublicStory copyWithZone:] */

undefined8 FUN_108f209c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f209ec; end: 108f20a5f; -[SCImpalaManagedPublicStory hash] */

undefined8 * FUN_108f209ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f20ae0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f20aec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f20aec;
        }
        goto LAB_108f20ae0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f20aec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f20a60; end: 108f20b07; -[SCImpalaManagedPublicStory isEqual:] */

long FUN_108f20a60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f20ae0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f20aec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f20aec;
        }
        goto LAB_108f20ae0;
      }
    }
    lVar3 = 0;
  }
LAB_108f20aec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f20b08; end: 108f20b0f; -[SCImpalaManagedPublicStory storyManifest] */

undefined8 FUN_108f20b08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f20b10; end: 108f20b17; -[SCImpalaManagedPublicStory storyCard] */

undefined8 FUN_108f20b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f20b18; end: 108f20b47; -[SCImpalaManagedPublicStory .cxx_destruct] */

void FUN_108f20b18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f20b48; end: 108f20cc3; -[SCImpalaBusinessProfileManagerListenerAnnouncer description] */

void FUN_108f20b48(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_108f20cc4(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f20cc4; end: 108f20d23;  */

void FUN_108f20cc4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 108f20d24; end: 108f20f53; -[SCImpalaBusinessProfileManagerListenerAnnouncer removeListener:] */

void FUN_108f20d24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_108f20ed8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108f20d8c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000107c2aa0c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108f20ed8;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_108f20d8c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110acb578;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          func_0x000107c2aa08(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    func_0x000107c2aa0c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_108f20ed8;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_108f20ed8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f20f54; end: 108f21067; -[SCImpalaBusinessProfileManagerListenerAnnouncer didUpdateSubscribedForBusinessProfileId:hostAccountUserId:subscribed:] */

void FUN_108f20f54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_108f20cc4(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e7a0();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f21068; end: 108f2108f; -[SCImpalaBusinessProfileManagerListenerAnnouncer .cxx_destruct] */

void FUN_108f21068(long param_1)

{
  FUN_108f210a4(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108f21090; end: 108f210a3;  */

undefined * FUN_108f21090(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 108f210a4; end: 108f210fb;  */

long FUN_108f210a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 108f210fc; end: 108f2110b;  */

void FUN_108f210fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110acb578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108f2110c; end: 108f2112b;  */

void FUN_108f2110c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110acb578;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108f2112c; end: 108f21193;  */

void FUN_108f2112c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108f21194; end: 108f21197;  */

void FUN_108f21194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108f21198; end: 108f21347; -[SCWithComposerRuntimeLazyImpl targetInJSRuntimeCompletion:] */

void FUN_108f21198(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x02') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_70;
    _objc_copyWeak(puVar4,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfc69a0(uVar2);
    _objc_release(uVar2);
    lVar3 = param_3;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\0') {
        (**(code **)(param_3 + 0x10))(param_3,0);
      }
      goto LAB_108f212fc;
    }
    *(undefined1 *)(param_1 + 0x18) = 2;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108f21348;
    puStack_50 = &UNK_110883be8;
    puVar4 = auStack_40;
    _objc_copyWeak(puVar4,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010bfc69a0(uVar2);
    _objc_release(uVar2);
    lVar3 = lStack_48;
  }
  _objc_release(lVar3);
  _objc_destroyWeak(puVar4);
LAB_108f212fc:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108f21348; end: 108f213cb;  */

void FUN_108f21348(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = lVar2;
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x10));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f213cc; end: 108f2140b;  */

void FUN_108f213cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f2140c; end: 108f2153b; -[SCWithComposerRuntimeLazyImpl observable] */

void FUN_108f2140c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x18) == '\x02') {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    func_0x00010c269fc0(param_1);
    puVar2 = puVar1;
    func_0x00010c272120(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f2153c; end: 108f21597;  */

void FUN_108f2153c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f21598; end: 108f215d3; -[SCWithComposerRuntimeLazyImpl .cxx_destruct] */

void FUN_108f21598(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f215d4; end: 108f21603; -[SCComposerNetworkingBridgeServices .cxx_destruct] */

void FUN_108f215d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f21604; end: 108f2169f;  */

void FUN_108f21604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dc8e0;
  _objc_opt_class(PTR_PTR_1126dc8e0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110acb5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f216a0; end: 108f216a7;  */

void FUN_108f216a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_creatorSettingsFetcher_1125b4780);
  return;
}



/* Entry: 108f216a8; end: 108f21743;  */

void FUN_108f216a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dc8e0;
  _objc_opt_class(PTR_PTR_1126dc8e0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110acb618);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f21744; end: 108f2174b;  */

void FUN_108f21744(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_creatorSettingsTracker_1125b4798);
  return;
}



/* Entry: 108f2174c; end: 108f2178b;  */

void FUN_108f2174c(void)

{
  if (lRam000000011372f430 != -1) {
    func_0x000107c27d9c(0x11372f430,&PTR___NSConcreteGlobalBlock_110acb638);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f438,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f2178c; end: 108f217f3;  */

void FUN_108f2178c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5b40;
  _objc_opt_class(PTR_PTR_1126c5b40);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb658);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f438;
  uRam000000011372f438 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f217f4; end: 108f217fb;  */

void FUN_108f217f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lazyDiscoverFeedDataFetcher_112600f10);
  return;
}



/* Entry: 108f217fc; end: 108f2183b;  */

void FUN_108f217fc(void)

{
  if (lRam000000011372f440 != -1) {
    func_0x000107c27d9c(0x11372f440,&PTR___NSConcreteGlobalBlock_110acb678);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f448,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f2183c; end: 108f218a3;  */

void FUN_108f2183c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5b40;
  _objc_opt_class(PTR_PTR_1126c5b40);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb698);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f448;
  uRam000000011372f448 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f218a4; end: 108f218ab;  */

void FUN_108f218a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lazyDiscoverFeedDataMutator_112600f20);
  return;
}



/* Entry: 108f218ac; end: 108f21987;  */

void FUN_108f218ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam000000011372f450 != -1) {
    func_0x000107c27d9c(0x11372f450,&PTR___NSConcreteGlobalBlock_110acb6d8);
  }
  uVar1 = uRam000000011372f458;
  func_0x00010bfe63a0(uRam000000011372f458);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f21988; end: 108f2198f;  */

void FUN_108f21988(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notificationPromptHandler_112614bf8);
  return;
}



/* Entry: 108f21990; end: 108f21a6b;  */

void FUN_108f21990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam000000011372f460 != -1) {
    func_0x000107c27d9c(0x11372f460,&PTR___NSConcreteGlobalBlock_110acb718);
  }
  uVar1 = uRam000000011372f468;
  func_0x00010bfe63a0(uRam000000011372f468);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f21a6c; end: 108f21a73;  */

void FUN_108f21a6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notificationOptInRequestManager_112614b38);
  return;
}



/* Entry: 108f21a74; end: 108f21ab3;  */

void FUN_108f21a74(void)

{
  if (lRam000000011372f470 != -1) {
    func_0x000107c27d9c(0x11372f470,&PTR___NSConcreteGlobalBlock_110acb758);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f478,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f21ab4; end: 108f21b1b;  */

void FUN_108f21ab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cafe0;
  _objc_opt_class(PTR_PTR_1126cafe0);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb778);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f478;
  uRam000000011372f478 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f21b1c; end: 108f21b23;  */

void FUN_108f21b1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_legacyStoryMediaCache_1126017e8);
  return;
}



/* Entry: 108f21b24; end: 108f21b2b; -[SCLegacyStoriesServices stories] */

undefined8 FUN_108f21b24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f21b2c; end: 108f21b33; -[SCLegacyStoriesServices legacyStoryMediaCache] */

undefined8 FUN_108f21b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f21b34; end: 108f21b3b; -[SCLegacyStoriesServices ourStoryProfileDataSource] */

undefined8 FUN_108f21b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f21b3c; end: 108f21b43; -[SCLegacyStoriesServices storiesSyncNetworkRequester] */

undefined8 FUN_108f21b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f21b44; end: 108f21b4b; -[SCLegacyStoriesServices cachedSummaryInfoProvider] */

undefined8 FUN_108f21b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f21b4c; end: 108f21b9f; -[SCLegacyStoriesServices .cxx_destruct] */

void FUN_108f21b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f21ba0; end: 108f21cef; -[SCGalleryStoryData initWithCoder:] */

undefined1 * FUN_108f21ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f21cf0; end: 108f21e5b; -[SCGalleryStoryData initWithSojuOverlay:renderedOverlay:originalMedia:mediaType:servletMediaFormat:snapAssets:] */

undefined1 *
FUN_108f21cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff430;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f21e5c; end: 108f21e7f; -[SCGalleryStoryData copyWithZone:] */

undefined8 FUN_108f21e5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f21e80; end: 108f21f2f; -[SCGalleryStoryData encodeWithCoder:] */

void FUN_108f21e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f05938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f05958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f05978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f05998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f059b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f21f30; end: 108f21fd3; -[SCGalleryStoryData hash] */

undefined8 * FUN_108f21f30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f220b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f220c0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_108f220c0;
                }
                goto LAB_108f220b4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f220c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f21fd4; end: 108f220db; -[SCGalleryStoryData isEqual:] */

long FUN_108f21fd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f220b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f220c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_108f220c0;
                }
                goto LAB_108f220b4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f220c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f220dc; end: 108f220e3; -[SCGalleryStoryData sojuOverlay] */

undefined8 FUN_108f220dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f220e4; end: 108f220eb; -[SCGalleryStoryData renderedOverlay] */

undefined8 FUN_108f220e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f220ec; end: 108f220f3; -[SCGalleryStoryData originalMedia] */

undefined8 FUN_108f220ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f220f4; end: 108f220fb; -[SCGalleryStoryData mediaType] */

undefined8 FUN_108f220f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f220fc; end: 108f22103; -[SCGalleryStoryData servletMediaFormat] */

undefined8 FUN_108f220fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f22104; end: 108f2210b; -[SCGalleryStoryData snapAssets] */

undefined8 FUN_108f22104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f2210c; end: 108f2216b; -[SCGalleryStoryData .cxx_destruct] */

void FUN_108f2210c(long param_1)

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



/* Entry: 108f2216c; end: 108f22187; +[SCGalleryStoryDataBuilder galleryStoryData] */

void FUN_108f2216c(void)

{
  _objc_alloc_init(PTR_PTR_1126d5340);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f22188; end: 108f2236b; +[SCGalleryStoryDataBuilder galleryStoryDataFromExistingGalleryStoryData:] */

void FUN_108f22188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126d5340;
  _objc_retain(param_3);
  func_0x00010bfbdaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c246660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9ae0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c130540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b6d80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0ed680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b5120(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0c6c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b3b00(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c15fa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b84e0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c23f420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = puVar11;
  func_0x00010c2b91c0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108f2236c; end: 108f223a3; -[SCGalleryStoryDataBuilder build] */

void FUN_108f2236c(void)

{
  _objc_alloc(PTR_PTR_1126dc8e8);
  func_0x00010c04a3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f223a4; end: 108f223db; -[SCGalleryStoryDataBuilder withSojuOverlay:] */

long FUN_108f223a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f223dc; end: 108f22413; -[SCGalleryStoryDataBuilder withRenderedOverlay:] */

long FUN_108f223dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f22414; end: 108f2244b; -[SCGalleryStoryDataBuilder withOriginalMedia:] */

long FUN_108f22414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}


