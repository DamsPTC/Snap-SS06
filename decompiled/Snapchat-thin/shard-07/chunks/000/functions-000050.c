/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050f2930; end: 1050f294f;  */

void FUN_1050f2930(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (*(long *)(param_1 + 0x28) <= param_2) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,puVar1);
  return;
}



/* Entry: 1050f2950; end: 1050f2997; -[SCCommunitiesAddFriendsBillboardEligibilityProvider .cxx_destruct] */

void FUN_1050f2950(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050f2998; end: 1050f2b3b; -[SCCommunitiesAddFriendsBillboardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f2998(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11271c284;
    _objc_loadWeakRetained(lVar8);
  }
  lVar1 = lVar8;
  func_0x00010c293740(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar8);
  puVar3 = PTR_PTR_1126b4c38;
  _objc_alloc(PTR_PTR_1126b4c38);
  lVar8 = param_1 + _DAT_11271c274;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11271c278;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271c27c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe460(puVar3,param_2,lVar4,lVar5,lVar7,lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar8);
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11271c280;
    _objc_loadWeakRetained(lVar8);
  }
  lVar1 = lVar8;
  func_0x00010c1018e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1050f2b3c; end: 1050f2ba3; -[SCCommunitiesAddFriendsBillboardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f2b3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c278);
  _objc_destroyWeak(param_1 + _DAT_11271c274);
  _objc_destroyWeak(param_1 + _DAT_11271c27c);
  _objc_destroyWeak(param_1 + _DAT_11271c288);
  _objc_destroyWeak(param_1 + _DAT_11271c284);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c280);
  return;
}



/* Entry: 1050f2ba4; end: 1050f2d33;  */

void FUN_1050f2ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5e98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050f2d34; end: 1050f2d5b;  */

void FUN_1050f2d34(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050f2d5c; end: 1050f2ed7; -[SCCommunitiesDeeplinkProcessor initWithCircumstanceEngine:navigationDelegate:customStoriesDataFetcher:performer:notificationPool:deepLinkHandling:communitiesAttributionProviding:] */

undefined1 *
FUN_1050f2d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6230;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
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



/* Entry: 1050f2ed8; end: 1050f2f07; -[SCCommunitiesDeeplinkProcessor identifier] */

void FUN_1050f2ed8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e99a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e99a78);
  return;
}



/* Entry: 1050f2f08; end: 1050f2f0f; -[SCCommunitiesDeeplinkProcessor priority] */

undefined8 FUN_1050f2f08(void)

{
  return 0;
}



/* Entry: 1050f2f10; end: 1050f2f23; -[SCCommunitiesDeeplinkProcessor canProvideProcessorForFeature:] */

void FUN_1050f2f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e99a78);
  return;
}



/* Entry: 1050f2f24; end: 1050f2f6f; -[SCCommunitiesDeeplinkProcessor isValidDeepLink:] */

undefined8 FUN_1050f2f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1050f2f70; end: 1050f2f73; -[SCCommunitiesDeeplinkProcessor makeDeepLinkProcessor] */

void FUN_1050f2f70(void)

{
  return;
}



/* Entry: 1050f2f74; end: 1050f2f77; -[SCCommunitiesDeeplinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1050f2f74(void)

{
  return;
}



/* Entry: 1050f2f78; end: 1050f30b7; -[SCCommunitiesDeeplinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1050f2f78(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x30,param_5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000108060890();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb9460(param_1);
  }
  else {
    puVar3 = param_3;
    func_0x00010c0f5840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c071ae0();
    if ((int)puVar2 == 0) {
      puVar2 = puVar3;
      func_0x00010c071ae0();
      if ((int)puVar2 == 0) {
        puVar2 = puVar3;
        func_0x00010c071ae0();
        if ((int)puVar2 != 0) {
          func_0x00010be81b40(param_1);
        }
      }
      else {
        func_0x00010be81b20(param_1);
      }
    }
    else {
      func_0x00010be81ac0(param_1);
    }
  }
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050f30b8; end: 1050f30bb; -[SCCommunitiesDeeplinkProcessor _processOnboardingWithDeepLinkURL:additionalInfo:] */

void FUN_1050f30b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processDeeplinkOnMainThreadWith_11257dcb0);
  return;
}



/* Entry: 1050f30bc; end: 1050f30bf; -[SCCommunitiesDeeplinkProcessor _processOpenReplyCameraWithDeepLinkURL:additionalInfo:] */

void FUN_1050f30bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processDeeplinkOnMainThreadWith_11257dcb0);
  return;
}



/* Entry: 1050f30c0; end: 1050f320b; -[SCCommunitiesDeeplinkProcessor _processOpenProfileWithDeepLinkURL:additionalInfo:] */

void FUN_1050f30c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf625a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f320c; end: 1050f334b;  */

void FUN_1050f320c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf42ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be47d00();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0f5820(uVar3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar2;
    func_0x00010c0dfd40(lVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    if ((int)uVar4 == 0) {
      func_0x0001050f2ba4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001050f2c54();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be80c40(lVar1,param_2,lVar7,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1050f334c; end: 1050f3433; -[SCCommunitiesDeeplinkProcessor _launchMyProfileOnMainThreadWithAdditionalInfo:] */

void FUN_1050f334c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1050f3400;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f3434; end: 1050f3557; -[SCCommunitiesDeeplinkProcessor _launchMyProfileWithAdditionalInfo:] */

void FUN_1050f3434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a5fe0();
  _objc_release(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1050f2d34();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfd1bc0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f3558; end: 1050f369b;  */

void FUN_1050f3558(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1050f369c;
  uStack_40 = 0x1050f36ac;
  uStack_38 = 0;
  func_0x00010c0be280(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050f369c; end: 1050f36bb;  */

void FUN_1050f369c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050f36bc; end: 1050f374b;  */

void FUN_1050f36bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050f374c; end: 1050f382f; -[SCCommunitiesDeeplinkProcessor _processDeeplinkOnMainThreadWithUrl:additionalInfo:] */

void FUN_1050f374c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1050f3830;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f3830; end: 1050f3863;  */

void FUN_1050f3830(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f3864; end: 1050f3983; -[SCCommunitiesDeeplinkProcessor _processDeeplinkWithUrl:additionalInfo:] */

void FUN_1050f3864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a5fe0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c10d420(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f3984; end: 1050f39af;  */

void FUN_1050f3984(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be572a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f39b0; end: 1050f3a0b; -[SCCommunitiesDeeplinkProcessor _showGenericErrorAlertWithError:] */

void FUN_1050f39b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108061cf0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb98e0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050f3a0c; end: 1050f3b03; -[SCCommunitiesDeeplinkProcessor _showLinkErrorAlertWithError:errorMessage:] */

void FUN_1050f3a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a5fe0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf94720();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050f3b04;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1050f3b04; end: 1050f3b53;  */

void FUN_1050f3b04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110dc5f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050f3b54; end: 1050f3ba3; -[SCCommunitiesDeeplinkProcessor _logPresentationComplete] */

void FUN_1050f3b54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f3ba4; end: 1050f3bab; -[SCCommunitiesDeeplinkProcessor shouldForceNavigation] */

undefined8 FUN_1050f3ba4(void)

{
  return 0;
}



/* Entry: 1050f3bac; end: 1050f3c1f; -[SCCommunitiesDeeplinkProcessor .cxx_destruct] */

void FUN_1050f3bac(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050f3c20; end: 1050f3e83; -[SCCommunitiesDeeplinkProcessorPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f3c20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar1 = param_1 + _DAT_11271c2ac;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b4c40;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271c2b0;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271c2b4;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271c2b8;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271c2bc;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271c2c0;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271c2c4;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffea20(puVar5,param_2,lVar6,lVar7,lVar8,lVar4,lVar10,lVar12,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11271c2c8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1050f3e84; end: 1050f3f0f; -[SCCommunitiesDeeplinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f3e84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c2c4);
  _objc_destroyWeak(param_1 + _DAT_11271c2c0);
  _objc_destroyWeak(param_1 + _DAT_11271c2bc);
  _objc_destroyWeak(param_1 + _DAT_11271c2ac);
  _objc_destroyWeak(param_1 + _DAT_11271c2b8);
  _objc_destroyWeak(param_1 + _DAT_11271c2b0);
  _objc_destroyWeak(param_1 + _DAT_11271c2b4);
  _objc_destroyWeak(param_1 + _DAT_11271c2cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c2c8);
  return;
}



/* Entry: 1050f3f10; end: 1050f41a7; -[SCCommunitiesNewChatComposerViewController initWithCommunitiesMembersDataProvider:newChatScope:communitiesGroupChatNetworkRequester:composerRuntime:messagingExperimentService:friendmojiProviderFactory:groupDataCreator:userInfoProvider:application:networkingClient:friendStoreFactory:notificationPool:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1050f3f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e6238;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11271c2d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11271c2d4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11271c2d8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11271c2dc;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271c2e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271c2e0) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11271c2e4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdec2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271c2e8);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11271c2e8) = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 1050f41a8; end: 1050f4643; -[SCCommunitiesNewChatComposerViewController _createCommunitiesNewChatViewValdiRuntime:membersDataProvider:friendStoryFactory:userInfoProvider:application:networkingClient:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f41a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar13 = param_5;
  (**(code **)(param_5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = PTR_PTR_1126b4c48;
  _objc_alloc_init(PTR_PTR_1126b4c48);
  func_0x00010c1a0100();
  uVar7 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar3);
  _objc_release(uVar7);
  uVar7 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar3);
  _objc_release(uVar7);
  uVar7 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar3);
  _objc_release(uVar7);
  uVar7 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f7c0(puVar3);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  lVar5 = *(long *)(param_1 + _DAT_11271c2e0);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0660(puVar3);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c1d38e0(puVar3);
  puVar6 = PTR_PTR_1126b4c50;
  _objc_alloc(PTR_PTR_1126b4c50);
  lVar13 = (long)_DAT_11271c2d0;
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf43000(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x28;
  func_0x00010bb1577c(0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 6;
  func_0x00010bb15538(6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c0f1e60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8a80(puVar6);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010c1c06c0(puVar3);
  puVar11 = PTR_PTR_1126b4c58;
  _objc_alloc_init(PTR_PTR_1126b4c58);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271c2d4);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2900();
  func_0x00010c0df840(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c32c0(puVar11);
  _objc_release(puVar12);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf43000(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f780(puVar11);
  _objc_release(uVar7);
  func_0x00010c1953a0(puVar11);
  puVar12 = PTR_PTR_1126b4c60;
  _objc_alloc(PTR_PTR_1126b4c60);
  func_0x00010c061d40();
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1050f4644; end: 1050f4713;  */

void FUN_1050f4644(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c159ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050f4714;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1050f4714; end: 1050f4747;  */

void FUN_1050f4714(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f4748; end: 1050f4757; -[SCCommunitiesNewChatComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f4748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11271c2e8));
  return;
}



/* Entry: 1050f4758; end: 1050f47bf; -[SCCommunitiesNewChatComposerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f4758(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6238;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271c2d0);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf552e0();
  _objc_release(uVar1);
  return;
}



/* Entry: 1050f47c0; end: 1050f4a2f; -[SCCommunitiesNewChatComposerViewController _handleRequestForNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f47c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c159ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar4 = uVar7;
        func_0x00010c122de0();
        if ((int)uVar4 == 1) {
          func_0x00010bfe5ec0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_138,param_1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271c2d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271c2d0);
  func_0x00010bf43000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_138;
  _objc_copyWeak(auStack_140,puVar6);
  uVar4 = uVar5;
  func_0x00010bf55320(uVar7);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  _objc_retain(uVar4);
  _objc_retain(puVar6);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2cd40();
  _objc_release(uVar4);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050f4a30; end: 1050f4a97;  */

void FUN_1050f4a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cd40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f4a98; end: 1050f4bbb; -[SCCommunitiesNewChatComposerViewController _handleNewChatForCommunityGroupWithResponse:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f4a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271c2d0);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1050f4bbc;
  puStack_60 = &UNK_110850cf8;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f4bbc; end: 1050f4c63;  */

void FUN_1050f4bbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b01c0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f579f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcf680(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf55300(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
  }
  else {
    puVar3 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar3);
    func_0x00010beb8fa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1050f4c64; end: 1050f4d37; -[SCCommunitiesNewChatComposerViewController _showErrorToastWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f4c64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3ec40();
  if (lVar1 == 8) {
    func_0x000108061e88();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    if (lVar1 != 9) goto LAB_1050f4d24;
    func_0x000108061e70();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,lVar1,
                      &PTR____CFConstantStringClassReference_110dc5f58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271c2dc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
LAB_1050f4d24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050f4d38; end: 1050f4dc7; -[SCCommunitiesNewChatComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f4d38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c2e0,0);
  _objc_storeStrong(param_1 + _DAT_11271c2e4,0);
  _objc_storeStrong(param_1 + _DAT_11271c2e8,0);
  _objc_storeStrong(param_1 + _DAT_11271c2dc,0);
  _objc_storeStrong(param_1 + _DAT_11271c2d4,0);
  _objc_storeStrong(param_1 + _DAT_11271c2d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c2d8,0);
  return;
}



/* Entry: 1050f4dc8; end: 1050f5143; -[SCCommunitiesNewChatEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f4dc8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b4c68;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271c2ec;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0c79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_11271c2f0;
  lVar4 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_11271c2f4;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf42d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271c2f8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271c2fc;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271c300;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271c304;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11271c308;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271c30c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271c310;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271c314;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11271c318;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271c31c;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000200(puVar1,param_2,lVar3,lVar4,lVar6,lVar10,lVar12,lVar14,lVar16,lVar18,lVar20,
                      lVar22,lVar24,lVar26,lVar29);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050f5144; end: 1050f51ff; -[SCCommunitiesNewChatEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f5144(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c31c);
  _objc_destroyWeak(param_1 + _DAT_11271c300);
  _objc_destroyWeak(param_1 + _DAT_11271c2fc);
  _objc_destroyWeak(param_1 + _DAT_11271c318);
  _objc_destroyWeak(param_1 + _DAT_11271c310);
  _objc_destroyWeak(param_1 + _DAT_11271c30c);
  _objc_destroyWeak(param_1 + _DAT_11271c314);
  _objc_destroyWeak(param_1 + _DAT_11271c2f4);
  _objc_destroyWeak(param_1 + _DAT_11271c308);
  _objc_destroyWeak(param_1 + _DAT_11271c2f8);
  _objc_destroyWeak(param_1 + _DAT_11271c304);
  _objc_destroyWeak(param_1 + _DAT_11271c2ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c2f0);
  return;
}



/* Entry: 1050f5200; end: 1050f5287;  */

void FUN_1050f5200(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010c0f73a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_2);
  ppuVar1 = &PTR_PTR_1133ba4b0;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR_PTR_1133ba4a8;
  }
  puVar3 = *ppuVar1;
  _objc_retain(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050f5288; end: 1050f54a7;  */

void FUN_1050f5288(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  lVar5 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = param_2;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    puVar8 = param_2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        lVar9 = *(long *)((long)puVar10 * 8);
        lVar1 = lVar9;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c08fa60();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          func_0x00010c15f2e0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c29ea60();
          _objc_release(lVar1);
          _objc_release(lVar9);
          if ((int)lVar2 == 0) goto LAB_1050f53e8;
        }
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar10);
      puVar8 = param_2;
      func_0x00010bf52a60();
    }
LAB_1050f53e8:
    _objc_release(param_2);
    puVar10 = param_2;
    func_0x00010c089820(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b4c70;
    _objc_alloc();
    puVar3 = puVar10;
    func_0x00010bf3cf60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c04dc80();
    _objc_release(puVar3);
    _objc_release(puVar10);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(lVar5);
  puVar8 = puVar4;
  if (param_1 == 1) {
    func_0x00010c280840();
joined_r0x0001050f5514:
    if (puVar8 == (undefined *)0x0) {
      ppuVar7 = &PTR_PTR_1133ba4b8;
      goto LAB_1050f552c;
    }
    puVar8 = puVar4;
    FUN_1050f5200(puVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_1 == 2) {
      func_0x00010bf42d40();
      goto joined_r0x0001050f5514;
    }
    ppuVar7 = &PTR_PTR_1133ba4a8;
LAB_1050f552c:
    puVar8 = *ppuVar7;
    _objc_retain(puVar8);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1050f54a8; end: 1050f555b;  */

void FUN_1050f54a8(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_2;
  if (param_1 == 1) {
    func_0x00010c280840();
joined_r0x0001050f5514:
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_2;
      FUN_1050f5200(param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1050f5538;
    }
    ppuVar1 = &PTR_PTR_1133ba4b8;
  }
  else {
    if (param_1 == 2) {
      func_0x00010bf42d40();
      goto joined_r0x0001050f5514;
    }
    ppuVar1 = &PTR_PTR_1133ba4a8;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
LAB_1050f5538:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050f555c; end: 1050f56d7;  */

undefined8 FUN_1050f555c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c23b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = *(ulong *)(lVar8 * 8);
        func_0x00010bf624a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar5 & 1) != 0) {
          uVar7 = 1;
          goto LAB_1050f5680;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar7 = 0;
  }
LAB_1050f5680:
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return param_3;
  }
  return uVar7;
}



/* Entry: 1050f56d8; end: 1050f56e3; -[SCFeatureSettingsService hasUserInteracted] */

void FUN_1050f56d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc5f78);
  return;
}



/* Entry: 1050f56e4; end: 1050f56ef; -[SCFeatureSettingsService userInteractedServerParam] */

undefined ** FUN_1050f56e4(void)

{
  return &PTR____CFConstantStringClassReference_110dc5f78;
}



/* Entry: 1050f56f0; end: 1050f56ff; -[SCFeatureSettingsService setUserInteracted:] */

void FUN_1050f56f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc5f78,param_3);
  return;
}



/* Entry: 1050f5700; end: 1050f5707; -[SCFeatureSettingsService COMMUNITIES_BITMOJI_FASHION_BANNER_HAS_INTERACTED_client_value:] */

undefined * FUN_1050f5700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1050f5708; end: 1050f570f; -[SCFeatureSettingsService COMMUNITIES_BITMOJI_FASHION_BANNER_HAS_INTERACTED_server_value:] */

void FUN_1050f5708(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1050f5710; end: 1050f571f; -[SCFeatureSettingsService userInteracted] */

void FUN_1050f5710(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc5f78,0);
  return;
}



/* Entry: 1050f5720; end: 1050f57c3; -[SCCommunitiesMembersPageContainerViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050f5720(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c189400();
    func_0x00010b83741c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271c320;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b20(puVar1);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050f57c4; end: 1050f5897; -[SCCommunitiesMembersPageContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f57c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1126e6240;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271c320);
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1050f5898; end: 1050f589b; -[SCCommunitiesMembersPageContainerViewController cardToExpandTransition] */

void FUN_1050f5898(void)

{
  return;
}



/* Entry: 1050f589c; end: 1050f5957; -[SCCommunitiesMembersPageContainerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1050f589c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + (long)_DAT_11271c324) & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c2954c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_5 == uVar1) {
      func_0x00010c2954c0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf2d520(param_1,param_2);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_1050f58d8;
    }
    uVar2 = 1;
  }
  else {
LAB_1050f58d8:
    uVar2 = 0;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 1050f5958; end: 1050f5963; -[SCCommunitiesMembersPageContainerViewController cardTransitionWillBeginWithView:] */

void FUN_1050f5958(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050f5964; end: 1050f5967; -[SCCommunitiesMembersPageContainerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_1050f5964(void)

{
  return;
}



/* Entry: 1050f5968; end: 1050f59c3; -[SCCommunitiesMembersPageContainerViewController forceDisableDismissalGesture:] */

void FUN_1050f5968(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1050f59c4;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1050f59c4; end: 1050f59db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f59c4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271c324) =
       *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 1050f59dc; end: 1050f59e7; -[SCCommunitiesMembersPageContainerViewController defaultProjectNameV2] */

undefined ** FUN_1050f59dc(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 1050f59e8; end: 1050f59f3; -[SCCommunitiesMembersPageContainerViewController defaultSubProjectName] */

undefined ** FUN_1050f59e8(void)

{
  return &PTR____CFConstantStringClassReference_110dc5f98;
}



/* Entry: 1050f59f4; end: 1050f5a07; -[SCCommunitiesMembersPageContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f59f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c320,0);
  return;
}



/* Entry: 1050f5a08; end: 1050f5b83; -[SCCommunitiesProfileMembersActionHandler initWithNavigationDelegate:snapchatterDataMutator:snapchattersDataFetcher:snapchattersPublicInfoFetcher:friendProfileScopeExposer:friendActionSheetScopeExposer:communitySharingScopeExposer:] */

undefined1 *
FUN_1050f5a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6248;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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



/* Entry: 1050f5b84; end: 1050f5c47; -[SCCommunitiesProfileMembersActionHandler launchInviteFriendsFlowWithGroupId:] */

void FUN_1050f5b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050f5c48;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050f5c48; end: 1050f5c73;  */

void FUN_1050f5c48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be477e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f5c74; end: 1050f5d07; -[SCCommunitiesProfileMembersActionHandler _launchCommunitySharingFlow] */

void FUN_1050f5c74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3e58;
  _objc_alloc(PTR_PTR_1126b3e58);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b1a0(puVar1,param_2,param_1,uVar3,0x36);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050f5d08; end: 1050f5e03; -[SCCommunitiesProfileMembersActionHandler addFriendWithRequest:completion:] */

void FUN_1050f5d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010c040e20(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bef8a80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1050f5e04; end: 1050f5e0f;  */

void FUN_1050f5e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001050f5e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1050f5e10; end: 1050f5f27; -[SCCommunitiesProfileMembersActionHandler unblockUserWithUser:completion:] */

void FUN_1050f5e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010be14180(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f5f28; end: 1050f60f3;  */

void FUN_1050f5f28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x1050f600c;
      puStack_50 = &UNK_11084a9e8;
      lStack_48 = lVar1;
      _objc_retain(param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uStack_40 = param_2;
      _objc_retain(uVar3);
      uStack_38 = uVar3;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      _objc_release(uStack_38);
      _objc_release(uStack_40);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,0);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1050f60f4; end: 1050f6107;  */

void FUN_1050f60f4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001050f6100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1050f6108; end: 1050f6207; -[SCCommunitiesProfileMembersActionHandler launchFriendActionMenuWithUser:source:] */

void FUN_1050f6108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1050f6208;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f6208; end: 1050f623b;  */

void FUN_1050f6208(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be478e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f623c; end: 1050f632b; -[SCCommunitiesProfileMembersActionHandler _launchFriendActionMenuWithUser:source:] */

void FUN_1050f623c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2860;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c058a60(puVar1,param_2,uVar3,uVar4,0x36,0,1,0xffffffffaf01eee0,0x13,param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050f632c; end: 1050f640f; -[SCCommunitiesProfileMembersActionHandler launchFriendProfileWithUser:source:] */

void FUN_1050f632c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1050f6410;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f6410; end: 1050f6443;  */

void FUN_1050f6410(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050f6444; end: 1050f656f; -[SCCommunitiesProfileMembersActionHandler _launchFriendProfileWithUser:source:] */

void FUN_1050f6444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_a0 = 0x36;
  uStack_98 = 1;
  uStack_88 = 0x22;
  uStack_90 = 0xffffffffaf01eee0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c015a00(puVar1,param_2,&uStack_a0,uVar3,uVar4,param_1);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f6570; end: 1050f6573; -[SCCommunitiesProfileMembersActionHandler friendActionSheetOpenProfile:] */

void FUN_1050f6570(void)

{
  return;
}



/* Entry: 1050f6574; end: 1050f6577; -[SCCommunitiesProfileMembersActionHandler friendActionSheetShowCameraForSnap:] */

void FUN_1050f6574(void)

{
  return;
}



/* Entry: 1050f6578; end: 1050f65bf; -[SCCommunitiesProfileMembersActionHandler friendActionSheetDidDismiss:] */

void FUN_1050f6578(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050f65c0; end: 1050f6607; -[SCCommunitiesProfileMembersActionHandler friendProfileDidDismiss:] */

void FUN_1050f65c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050f6608; end: 1050f664f; -[SCCommunitiesProfileMembersActionHandler didDismissCommunitySharingFlow] */

void FUN_1050f6608(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050f6650; end: 1050f665b; -[SCCommunitiesProfileMembersActionHandler pushToValdiMarshaller:] */

void FUN_1050f6650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050f665c; end: 1050f67ab; -[SCCommunitiesProfileMembersActionHandler _fetchSnapchatterForUserId:completion:] */

void FUN_1050f665c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050f67ac; end: 1050f693f;  */

void FUN_1050f67ac(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar8 != 0) {
    if (param_2 == 0 && param_3 == (undefined *)0x0) {
      uVar2 = *(undefined8 *)(lVar8 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x15;
      lVar5 = 0;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar9);
      puVar6 = puVar3;
      func_0x00010c244ea0(uVar2);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar9);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        lVar5 = param_2;
        puVar6 = param_3;
        (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
      }
    }
  }
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_2 + 0x20);
  if (lVar8 != 0) {
    _objc_retain(puVar6);
    func_0x00010bfb1920(lVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,lVar5,puVar6);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 1050f6940; end: 1050f69bb;  */

void FUN_1050f6940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1050f69bc; end: 1050f6a27; -[SCCommunitiesProfileMembersActionHandler .cxx_destruct] */

void FUN_1050f69bc(long param_1)

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



/* Entry: 1050f6a28; end: 1050f6aab; -[SCCommunitiesProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f6a28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271c344);
  *(undefined **)(param_1 + _DAT_11271c344) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1 + _DAT_11271c348;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c29f4c0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be48970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchVerifiedMemberProfile_11256fbf8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be47d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchNonMemberProfile_11256f900);
  return;
}



/* Entry: 1050f6aac; end: 1050f7027; -[SCCommunitiesProfileEntryPoint _createPageContextWithStorySectionNativeBridge:identitySectionNativeBridge:membersSectionNativeBridge:headerNativeBridge:mapSectionNativeBridge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f6aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1 + _DAT_11271c34c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b4c78;
  _objc_alloc();
  func_0x00010c007d60();
  lVar1 = param_1 + _DAT_11271c350;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b4c80;
  _objc_alloc(PTR_PTR_1126b4c80);
  lVar14 = (long)_DAT_11271c348;
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018e20(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010c1c2580(puVar5);
  puVar7 = PTR_PTR_1126b4c50;
  _objc_alloc(PTR_PTR_1126b4c50);
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x28;
  func_0x00010bb1577c(0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 6;
  func_0x00010bb15538(6);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar10 = lVar14;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8a80(puVar7);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010c1c06c0(puVar5);
  _objc_initWeak(auStack_68,param_1);
  puVar11 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x0001080608e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c08fa60();
  if (puVar13 != (undefined *)0x0) {
    func_0x00010c17f800(puVar5);
  }
  puVar13 = puVar11;
  func_0x00010c269d40(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4ce0(puVar5);
  _objc_release(puVar13);
  lVar1 = param_1 + _DAT_11271c354;
  _objc_loadWeakRetained(lVar1);
  lVar14 = lVar1;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271c358;
  _objc_loadWeakRetained(lVar1);
  lVar14 = lVar1;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271c35c;
  _objc_loadWeakRetained(lVar1);
  lVar14 = lVar1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar14 = (long)_DAT_11271c360;
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar14;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bfea2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar14;
    func_0x00010bfea320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar1);
    _objc_release(param_1);
    lVar1 = lVar6;
    func_0x00010bfea2c0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar14;
    func_0x00010bf56860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d600(puVar5);
    _objc_release(lVar10);
    _objc_release(lVar14);
    _objc_release(lVar1);
    _objc_release(lVar6);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050f7028; end: 1050f7067;  */

void FUN_1050f7028(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050f7068; end: 1050f749f; -[SCCommunitiesProfileEntryPoint _createSiblingPageContextWithHeaderNativeBridge:identitySectionNativeBridge:orgId:groupId:orgType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f7068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = (long)_DAT_11271c34c;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar1 = lVar12;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  puVar2 = PTR_PTR_1126b4c88;
  _objc_alloc();
  lVar13 = (long)_DAT_11271c348;
  lVar12 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar12);
  lVar3 = lVar12;
  func_0x00010c117400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007e40(puVar2,param_2,lVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar12);
  lVar12 = param_1 + _DAT_11271c350;
  _objc_loadWeakRetained();
  lVar3 = lVar12;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar12);
  puVar5 = PTR_PTR_1126b4c90;
  _objc_alloc();
  lVar12 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar12);
  lVar3 = lVar12;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018e00(puVar5,param_2,lVar3,param_3,param_4,puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar12);
  puVar6 = PTR_PTR_1126b4c50;
  _objc_alloc(PTR_PTR_1126b4c50);
  lVar12 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar12);
  lVar3 = lVar12;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x28;
  func_0x00010bb1577c(0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 6;
  func_0x00010bb15538(6);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar9 = lVar13;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8a80(puVar6,param_2,lVar4,lVar3,uVar7,uVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar12);
  puVar10 = puVar5;
  func_0x00010c1c06c0(puVar5,param_2,puVar6);
  func_0x0001080608e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c08fa60();
  if (puVar11 != (undefined *)0x0) {
    func_0x00010c17f800(puVar5,param_2,puVar10);
  }
  lVar12 = param_1 + _DAT_11271c354;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar5,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  lVar12 = param_1 + _DAT_11271c358;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar5,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  lVar12 = param_1 + _DAT_11271c35c;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar5,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  param_1 = param_1 + _DAT_11271c364;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar5,param_2,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  func_0x00010c1d6240(puVar5,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1a4760(puVar5,param_2,param_6);
  _objc_release(param_6);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050f74a0; end: 1050f7a7b; -[SCCommunitiesProfileEntryPoint _createNonVerifiedPageContextWithHeaderNativeBridge:identitySectionNativeBridge:nonVerifiedProfileCallToActionSectionNativeBridge:orgId:groupId:orgType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050f74a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1 + _DAT_11271c34c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b4c88;
  _objc_alloc();
  lVar16 = (long)_DAT_11271c348;
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c117400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007e40();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271c350;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b4c50;
  _objc_alloc();
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x28;
  func_0x00010bb1577c(0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 6;
  func_0x00010bb15538(6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8a80();
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126b4c98;
  _objc_alloc();
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010c247d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8ae0();
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar12 = PTR_PTR_1126b4ca0;
  _objc_alloc(PTR_PTR_1126b4ca0);
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018e60(puVar12);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar13 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x0001080608e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c08fa60();
  if (puVar15 != (undefined *)0x0) {
    func_0x00010c17f800(puVar12);
  }
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar4 = lVar16;
  func_0x00010bf5d4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar1 = param_1 + _DAT_11271c368;
  _objc_loadWeakRetained();
  lVar16 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar16;
  func_0x000108060ea8();
  _objc_release(lVar16);
  _objc_release(lVar1);
  if ((int)lVar7 != 0) {
    lVar1 = param_1 + _DAT_11271c36c;
    _objc_loadWeakRetained(lVar1);
    lVar16 = lVar1;
    func_0x00010bf42d20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    FUN_1050f54a8(param_8,lVar7,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar16);
    _objc_release(lVar1);
    lVar4 = param_8;
  }
  func_0x00010c186760(puVar12);
  puVar15 = puVar13;
  func_0x00010c269d40(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4ce0(puVar12);
  _objc_release(puVar15);
  lVar1 = param_1 + _DAT_11271c364;
  _objc_loadWeakRetained(lVar1);
  lVar16 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar12);
  _objc_release(lVar16);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11271c35c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar12);
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}


