/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10510dc00; end: 10510dc07; -[SCUnifiedProfileCommunitiesSectionActionModel isVerified] */

undefined1 FUN_10510dc00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10510dc08; end: 10510dc37; -[SCUnifiedProfileCommunitiesSectionActionModel .cxx_destruct] */

void FUN_10510dc08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10510dc38; end: 10510e0bf; -[SCCommunitiesOnboardingContextFactoryImpl initWithValdiRuntimeProvider:myBitmojiAvatarIdProvider:communityOrgService:alertPresenter:onOnboardingExitWithResult:onboardingManager:composerBlizzardLogger:cofStore:sourceType:sessionId:communitySharingScopeExposer:isSharingInOnboardingEnabled:navigationDelegate:circumstanceEngine:userInfoProvider:customStoriesDataFetcher:onboardingLaunchPreset:communityStoreProvider:googleContactPermissionManager:googleSignInManager:googleContactSyncServices:communitiesProfileScopeLauncher:delegate:] */

undefined8 *
FUN_10510dc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  puStack_70 = PTR_PTR_1126e6348;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xd) = param_14;
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[3];
    puVar1[3] = param_19;
    _objc_release(uVar2);
    puVar1[0x11] = param_20;
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x18,param_26);
  }
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 10510e0c0; end: 10510e0f3; -[SCCommunitiesOnboardingContextFactoryImpl dealloc] */

void FUN_10510e0c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6348;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10510e0f4; end: 10510e543; -[SCCommunitiesOnboardingContextFactoryImpl componentContext] */

void FUN_10510e0f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  func_0x00010c040b80();
  lVar4 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c1c1bc0(puVar3);
  _objc_release(lVar4);
  _objc_opt_class(PTR_PTR_1126b4de0);
  func_0x00010c181960(puVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126b4de8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ee40();
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca960(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar5);
  _objc_release(uVar1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10510e544;
  puStack_90 = &UNK_110868358;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1b6880(puVar5);
  puStack_d0 = puVar9;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10510e5f8;
  puStack_b8 = &UNK_11084f310;
  _objc_copyWeak(auStack_b0,auStack_80);
  puVar7 = puVar5;
  func_0x00010c1ba080();
  func_0x0001080608e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c08fa60();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c17f800(puVar5);
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puStack_f8 = puVar9;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10510e65c;
    puStack_e0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_d8,auStack_80);
    func_0x00010c1b9700(puVar5);
    _objc_destroyWeak(auStack_d8);
  }
  puStack_120 = puVar9;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10510e718;
  puStack_108 = &UNK_110843540;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c1b95a0(puVar5);
  puVar9 = PTR_PTR_1126b4c98;
  _objc_alloc(PTR_PTR_1126b4c98);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8ae0(puVar9);
  _objc_release(uVar1);
  func_0x00010c1d45e0(puVar5);
  func_0x00010c17df40(puVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f8a0(puVar5);
  _objc_release(uVar1);
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c1b9620(puVar5);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10510e544; end: 10510e5f7;  */

void FUN_10510e544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be46500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10510e5f8; end: 10510e65b;  */

void FUN_10510e5f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be49da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10510e65c; end: 10510e6eb;  */

void FUN_10510e65c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10510e6ec;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10510e6ec; end: 10510e717;  */

void FUN_10510e6ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be484e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510e718; end: 10510e7bf;  */

void FUN_10510e718(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10510e7c0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10510e7c0; end: 10510e833;  */

void FUN_10510e7c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510e834; end: 10510e8ef; -[SCCommunitiesOnboardingContextFactoryImpl _joinCommunityObservableWithGroupId:email:googleIdToken:msIdToken:] */

void FUN_10510e834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c085a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10510e8f0; end: 10510e9cb; -[SCCommunitiesOnboardingContextFactoryImpl _leaveCommunitySilentlyObservableWithGroupId:] */

void FUN_10510e8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10510e9cc;
  puStack_50 = &UNK_1108683b8;
  lStack_48 = param_1;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10510e9cc; end: 10510eb2f;  */

void FUN_10510e9cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  _objc_initWeak(auStack_50,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0f7420(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10510eb30; end: 10510eb9f;  */

void FUN_10510eb30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48500(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10510eba0; end: 10510ecbb; -[SCCommunitiesOnboardingContextFactoryImpl _launchSharingOnOnboardingLeaveCommunitySilentlyObservableWithMetadata:observer:groupId:] */

void FUN_10510eba0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10510ecbc;
    puStack_58 = &UNK_1108683e8;
    uStack_50 = uVar2;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010bf62500(uVar1,param_2,param_5,PTR___dispatch_main_q_11034be20,&puStack_70);
    _objc_release(uStack_48);
  }
  else {
    func_0x00010c08e280(uVar2,param_2,param_3,param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10510ecbc; end: 10510eccb;  */

void FUN_10510ecbc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_leaveVerifiedCommunitySilentlyOb_1126012d0,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10510eccc; end: 10510ed57; -[SCCommunitiesOnboardingContextFactoryImpl _launchSharingOnOnboarding] */

void FUN_10510eccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b3e58;
  _objc_alloc(PTR_PTR_1126b3e58);
  func_0x00010c00b1a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10510ed58; end: 10510ee33; -[SCCommunitiesOnboardingContextFactoryImpl _launchCommnityProfilePage:] */

void FUN_10510ed58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    _objc_retain(param_1);
    uVar3 = *(undefined8 *)(param_1 + 200);
    *(long *)(param_1 + 200) = param_1;
    _objc_retain(uVar2);
    _objc_release(uVar3);
    lVar1 = param_1 + 0xc0;
    _objc_loadWeakRetained(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10510ee34;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    uStack_38 = uVar2;
    func_0x00010bf83020(lVar1,param_2,&puStack_68);
    _objc_release(lVar1);
    _objc_release(lStack_40);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10510ee34; end: 10510eeff;  */

void FUN_10510ee34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1450;
  _objc_alloc(PTR_PTR_1126b1450);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = 9;
  func_0x00010bc9107c(9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0190a0(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,0);
  _objc_release(uVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar4,uVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10510ef00; end: 10510efdb; -[SCCommunitiesOnboardingContextFactoryImpl _requestGoogleContactPermission] */

void FUN_10510ef00(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10510efdc; end: 10510f0bb;  */

void FUN_10510efdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10510f0bc;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10510f0bc; end: 10510f0ef;  */

void FUN_10510f0bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510f0f0; end: 10510f273; -[SCCommunitiesOnboardingContextFactoryImpl _continueRequestGoogleContactPermission:] */

void FUN_10510f0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf4a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10510f274;
  puStack_60 = &UNK_110842e18;
  ppuVar4 = &puStack_78;
  uStack_58 = uVar3;
  _objc_retainBlock();
  _objc_initWeak(auStack_80,param_3);
  _objc_retain(ppuVar4);
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c135600(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10510f274; end: 10510f28b;  */

void FUN_10510f274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_syncGoogleContacts_completionHan_112677228,2,
             &PTR___NSConcreteGlobalBlock_110868418);
  return;
}



/* Entry: 10510f28c; end: 10510f643;  */

void FUN_10510f28c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10510f644;
  uStack_90 = 0x10510f654;
  uStack_88 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_10510f644;
  uStack_c0 = 0x10510f654;
  uStack_b8 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0bc5c0(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((puStack_a8[5] == 0) && (puStack_78[3] == 0)) {
    puStack_78[3] = 0xfffffffffffffffb;
  }
  puVar1 = PTR_PTR_1126b4df0;
  _objc_alloc_init(PTR_PTR_1126b4df0);
  if (puStack_a8[5] == 0) {
    puVar2 = PTR_PTR_1126b4e00;
    _objc_opt_new(PTR_PTR_1126b4e00);
    func_0x00010c1ebc20((double)(long)puStack_78[3]);
    func_0x00010c196ee0(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126b4df8;
    _objc_opt_new(PTR_PTR_1126b4df8);
    func_0x00010c1a3e80();
    func_0x00010c194080(puVar2);
    func_0x00010c189480(puVar1);
  }
  _objc_release(puVar2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0d9840();
  _objc_release(lVar3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf436e0();
  _objc_release(param_1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_2);
  return;
}



/* Entry: 10510f644; end: 10510f6bb;  */

void FUN_10510f644(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10510f6bc; end: 10510f7a7;  */

void FUN_10510f6bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010510f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10510f7a8; end: 10510f857;  */

void FUN_10510f7a8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 10510f858; end: 10510f933;  */

void FUN_10510f858(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010510f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10510f934; end: 10510f987;  */

void FUN_10510f934(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 10510f988; end: 10510fb3f;  */

void FUN_10510f988(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010510fa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10510fb40; end: 10510fb87; -[SCCommunitiesOnboardingContextFactoryImpl didDismissCommunitySharingFlow] */

void FUN_10510fb40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10510fb88; end: 10510fbb7; -[SCCommunitiesOnboardingContextFactoryImpl communitiesProfileDidDismissWithScope:] */

void FUN_10510fb88(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x00010bf94c80();
  }
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10510fbb8; end: 10510fbcf; -[SCCommunitiesOnboardingContextFactoryImpl managedViewController] */

void FUN_10510fbb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510fbd0; end: 10510fbdb; -[SCCommunitiesOnboardingContextFactoryImpl setManagedViewController:] */

void FUN_10510fbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 10510fbdc; end: 10510fd0b; -[SCCommunitiesOnboardingContextFactoryImpl .cxx_destruct] */

void FUN_10510fbdc(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10510fd0c; end: 10510fd47; -[SCCommunitiesOnboardingLogger init] */

void FUN_10510fd0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126e6350;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10510fd48; end: 10510fdbb; -[SCCommunitiesOnboardingLogger logCommunitiesOnboardingEventWithSourceType:success:] */

void FUN_10510fd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4e08;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  FUN_10511313c();
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10510fdbc; end: 10510fe5b; -[SCCommunitiesOnboardingLogger logCommunitiesOnboardingEventWithBillboardCampaign:sourceType:success:] */

void FUN_10510fdbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b4e08;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bdd4220(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105113324(puVar1,lVar2,param_4,param_5,1);
  _objc_release(param_4);
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10510fe5c; end: 10510fe7f; -[SCCommunitiesOnboardingLogger _billboardCampaignString:] */

undefined ** FUN_10510fe5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return (undefined **)(&PTR_PTR_1108684f8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110dab4b8;
}



/* Entry: 10510fe80; end: 10510ff8f; -[SCCommunitiesOnboardingManager initWithCustomStoriesDataMutator:performerProvider:] */

undefined1 *
FUN_10510fe80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e6358;
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
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10510ff90; end: 10510ffd3; -[SCCommunitiesOnboardingManager joinCommunityResultObservableWithGroupId:email:googleIdToken:msIdToken:] */

void FUN_10510ff90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be46500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10510ffd4; end: 10511019f; -[SCCommunitiesOnboardingManager _joinCommunityObservableWithGroupId:email:googleIdToken:msIdToken:] */

void FUN_10510ffd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  _objc_initWeak(auStack_60,*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_70,auStack_60);
  _objc_copyWeak(auStack_68,auStack_58);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051101a0; end: 1051102eb;  */

void FUN_1051101a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_copyWeak(auStack_70,param_1 + 0x50);
  func_0x00010c085a20(uVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051102ec; end: 105110387;  */

void FUN_1051102ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (param_1 != 0)) {
    puVar2 = PTR_PTR_1126b4e10;
    _objc_alloc(PTR_PTR_1126b4e10);
    func_0x00010bde9200(lVar1);
    func_0x00010c03fc80(puVar2);
    func_0x00010c0d9840(param_1);
    func_0x00010bf436e0(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105110388; end: 1051104b3; -[SCCommunitiesOnboardingManager leavePendingCommunitySilentlyObservableWithCustomStory:observer:] */

void FUN_105110388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_48;
  _objc_loadWeakRetained(puVar3);
  _objc_retain(param_4);
  func_0x00010c08e1e0(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051104b4; end: 10511050f;  */

void FUN_1051104b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105110510; end: 10511063b; -[SCCommunitiesOnboardingManager leaveVerifiedCommunitySilentlyObservableWithCustomStory:observer:] */

void FUN_105110510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_48;
  _objc_loadWeakRetained(puVar3);
  _objc_retain(param_4);
  func_0x00010c08e1e0(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10511063c; end: 105110697;  */

void FUN_10511063c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105110698; end: 1051106a3; -[SCCommunitiesOnboardingManager _convertJoinCommunityResult:] */

uint FUN_105110698(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (9 < param_3) {
    param_3 = 1;
  }
  return param_3;
}



/* Entry: 1051106a4; end: 1051106df; -[SCCommunitiesOnboardingManager .cxx_destruct] */

void FUN_1051106a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051106e0; end: 1051108cb; -[SCVerifiedCommunitiesOnboardingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051106e0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar2 = param_1 + _DAT_11271c8c4;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11271c8c8;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x000108060ea8();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar5 = lVar3;
  func_0x00010bfe3000();
  lVar6 = lVar3;
  func_0x00010bf42d40();
  lVar8 = (long)_DAT_11271c8cc;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c0e8020();
  _objc_release(lVar2);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar8;
  func_0x00010c0e8020();
  _objc_release(lVar8);
  bVar1 = lVar6 < 1;
  if ((int)lVar4 == 0) {
    if (lVar6 < 1) goto LAB_105110804;
  }
  else if (lVar6 < 2 && (lVar5 != 0 || bVar1)) {
LAB_105110804:
    if ((lVar2 != 2 || (lVar5 != 0 || bVar1)) && (lVar7 != 1 || (lVar5 < 1 || bVar1))) {
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c2a1700(lVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_10511088c;
    }
  }
  FUN_1051108cc(param_1);
LAB_10511088c:
  _objc_release(lVar3);
  return;
}



/* Entry: 1051108cc; end: 1051109c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051108cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271c910;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11271c8cc;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1051121d0;
    puStack_58 = &UNK_110841f80;
    lStack_50 = lVar3;
    lStack_48 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 1051109c4; end: 105110a63;  */

void FUN_1051109c4(long param_1,long param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    FUN_1051108cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105110a64;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105110a64; end: 105111247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105110a64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_105111180;
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105111248;
  puStack_90 = &UNK_110863778;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar12;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1051113f0;
  puStack_b8 = &UNK_110868578;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar12;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105111504;
  puStack_e0 = &UNK_1108685a8;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0e8020();
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11271c8c8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000108060a3c();
  _objc_release(lVar6);
  _objc_release(lVar4);
  puStack_128 = puVar12;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1051115dc;
  puStack_110 = &UNK_110868608;
  uStack_100 = lVar5 == 2;
  _objc_copyWeak(auStack_108,auStack_80);
  uStack_ff = (undefined1)lVar7;
  ppuVar8 = &puStack_128;
  _objc_retainBlock();
  puVar9 = PTR_PTR_1126b4e18;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11271c8d0;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c0e8020();
  lVar6 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf19ee0();
  lVar7 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained(lVar7);
  lVar11 = lVar7;
  func_0x00010c247d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ffe0();
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  puVar12 = PTR_PTR_1126ae720;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_105111884;
  puStack_138 = &UNK_110862fe8;
  _objc_copyWeak(auStack_130,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_158,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0e8020();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    func_0x00010c1d4560(puVar9);
  }
  lVar4 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11271c8cc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0e8020();
  _objc_release(lVar4);
  if (lVar5 == 1) {
    lVar4 = param_1 + _DAT_11271c8d0;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bfc69a0(lVar7);
LAB_1051110f4:
    _objc_release(lVar7);
  }
  else {
    lVar4 = param_1 + _DAT_11271c8cc;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c0e8020();
    _objc_release(lVar4);
    if (lVar5 == 2) {
      lVar4 = param_1 + _DAT_11271c8d0;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      func_0x00010bfc69a0(lVar7);
      goto LAB_1051110f4;
    }
    lVar4 = param_1 + _DAT_11271c8cc;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c0e8020();
    _objc_release(lVar4);
    if (lVar5 == 3) {
      lVar4 = param_1 + _DAT_11271c8d0;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_11271c8cc;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c0ecf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_11271c8cc;
      _objc_loadWeakRetained();
      lVar6 = lVar4;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_retain(lVar5);
      _objc_retain(lVar6);
      func_0x00010bfc69a0(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar6);
      _objc_release(lVar5);
      goto LAB_1051110f4;
    }
  }
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_130);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
LAB_105111180:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105111248; end: 1051113ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105111248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar1,param_2,10000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1,param_2,60000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11271c8d4;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
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
    _objc_release(lVar6);
    lVar2 = param_1 + _DAT_11271c8d8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b7020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1051113f0; end: 1051115db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051113f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11271c8dc;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    lVar1 = param_1 + _DAT_11271c8e0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010beff660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1051115dc; end: 105111687;  */

void FUN_1051115dc(long param_1,undefined4 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105111688;
  puStack_48 = &UNK_1108685d8;
  uStack_34 = *(undefined1 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_33 = *(undefined1 *)(param_1 + 0x29);
  uStack_38 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 105111688; end: 105111883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105111688(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (((*(char *)(param_1 + 0x2c) == '\x01') || (*(char *)(param_1 + 0x2d) != '\x01')) ||
     (*(int *)(param_1 + 0x28) != 1)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x0001051117a8();
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_1 + _DAT_11271c8dc;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0d6760();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0cf9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126b3e58;
      _objc_alloc(PTR_PTR_1126b3e58);
      func_0x00010c00b1a0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271c8f0));
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105111884; end: 10511190f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105111884(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11271c914;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf1cf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105111910; end: 105111dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105111910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puVar40;
  long lVar41;
  
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar40 = PTR_PTR_1126b4e40;
  if (lVar6 == 0) {
    puVar40 = (undefined *)0x0;
  }
  else {
    uVar38 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar1);
    _objc_retain(uVar5);
    _objc_retain(uVar2);
    _objc_alloc();
    lVar41 = lVar6 + _DAT_11271c8d0;
    _objc_loadWeakRetained();
    lVar7 = lVar41;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6 + _DAT_11271c8e8;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf1ad00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6 + _DAT_11271c8ec;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf3f680();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6 + _DAT_11271c8cc;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c247d20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar6 + _DAT_11271c8cc;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(lVar6 + _DAT_11271c8f0);
    lVar17 = lVar6 + _DAT_11271c8c8;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x000108060900();
    lVar20 = lVar6 + _DAT_11271c8dc;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar6 + _DAT_11271c8c8;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar6 + _DAT_11271c8f4;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar6 + _DAT_11271c8e4;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar6 + _DAT_11271c8cc;
    _objc_loadWeakRetained();
    func_0x00010c0e8020();
    lVar29 = lVar6 + _DAT_11271c8f8;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf43140();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar6 + _DAT_11271c8fc;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010bfcd4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar6 + _DAT_11271c900;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010bfcd5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = lVar6 + _DAT_11271c904;
    _objc_loadWeakRetained();
    lVar36 = lVar6 + _DAT_11271c908;
    _objc_loadWeakRetained();
    lVar37 = lVar36;
    func_0x00010bf42de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ffa0(puVar40,param_2,lVar7,lVar9,uVar2,uVar5,uVar3,uVar1,uVar38,lVar12,lVar14,
                        lVar16,uVar39,(char)lVar19);
    _objc_release(uVar38);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar2);
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
    _objc_release(lVar20);
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
    _objc_release(lVar41);
    func_0x00010c1c1bc0(puVar40,param_2,uVar4);
    _objc_release(uVar4);
    lVar41 = (long)_DAT_11271c90c;
    _objc_retain(puVar40);
    uVar38 = *(undefined8 *)(lVar6 + lVar41);
    *(undefined **)(lVar6 + lVar41) = puVar40;
    _objc_release(uVar38);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar40);
  return;
}



/* Entry: 105111dd8; end: 105111e63;  */

void FUN_105111dd8(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105111e64;
  puStack_38 = &UNK_110841f80;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 105111e64; end: 105111ee7;  */

void FUN_105111e64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b4e20;
  func_0x00010bfbc0e0(PTR_PTR_1126b4e20,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf443a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251b00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105111ee8; end: 105111f73;  */

void FUN_105111ee8(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105111f74;
  puStack_38 = &UNK_110841f80;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 105111f74; end: 105111ff7;  */

void FUN_105111f74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b4e28;
  func_0x00010bfbc0e0(PTR_PTR_1126b4e28,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf443a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251a60(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105111ff8; end: 1051120b7;  */

void FUN_105111ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051120b8;
  puStack_48 = &UNK_11084c4a0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  uStack_30 = uVar3;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1051120b8; end: 105112147;  */

void FUN_1051120b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b4e30;
  func_0x00010bfbc0e0(PTR_PTR_1126b4e30,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf443a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e83c0(puVar1,param_2,uVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105112148; end: 10511215f;  */

void FUN_105112148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c298470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_verifiedCommunitiesOnboardingDid_112683b40,
             *(int *)(param_1 + 0x28) == 1);
  return;
}



/* Entry: 105112160; end: 105112253; -[SCVerifiedCommunitiesOnboardingEntryPoint didDismissCommunitySharingFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112160(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271c8f0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar1 = param_1 + _DAT_11271c8cc;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      param_1 = param_1 + _DAT_11271c8cc;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f440();
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(lVar2);
    }
    return;
  }
  return;
}



/* Entry: 105112254; end: 105112347; -[SCVerifiedCommunitiesOnboardingEntryPoint dismissActiveCommunityFlowWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271c8cc;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105112348;
  puStack_58 = &UNK_11084aaa8;
  lStack_50 = lVar2;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6f440(lVar1,param_2,&puStack_70);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105112348; end: 10511237b;  */

void FUN_105112348(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c298470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_verifiedCommunitiesOnboardingDid_112683b40,0);
  return;
}



/* Entry: 10511237c; end: 10511249f; -[SCVerifiedCommunitiesOnboardingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511237c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c908);
  _objc_storeStrong(param_1 + _DAT_11271c8f0,0);
  _objc_destroyWeak(param_1 + _DAT_11271c904);
  _objc_destroyWeak(param_1 + _DAT_11271c900);
  _objc_destroyWeak(param_1 + _DAT_11271c8fc);
  _objc_destroyWeak(param_1 + _DAT_11271c910);
  _objc_destroyWeak(param_1 + _DAT_11271c8f8);
  _objc_destroyWeak(param_1 + _DAT_11271c8c4);
  _objc_destroyWeak(param_1 + _DAT_11271c8f4);
  _objc_destroyWeak(param_1 + _DAT_11271c8c8);
  _objc_destroyWeak(param_1 + _DAT_11271c8ec);
  _objc_destroyWeak(param_1 + _DAT_11271c914);
  _objc_destroyWeak(param_1 + _DAT_11271c8e4);
  _objc_destroyWeak(param_1 + _DAT_11271c8e8);
  _objc_destroyWeak(param_1 + _DAT_11271c8d4);
  _objc_destroyWeak(param_1 + _DAT_11271c8dc);
  _objc_destroyWeak(param_1 + _DAT_11271c8d0);
  _objc_destroyWeak(param_1 + _DAT_11271c8e0);
  _objc_destroyWeak(param_1 + _DAT_11271c8d8);
  _objc_destroyWeak(param_1 + _DAT_11271c8cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c90c,0);
  return;
}



/* Entry: 1051124a0; end: 105112543; -[SCVerifiedCommunitiesOnboardingFlowViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051124a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6360;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c189400();
    func_0x00010b83741c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271c918;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined1 **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b20(puVar1);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105112544; end: 105112617; -[SCVerifiedCommunitiesOnboardingFlowViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112544(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1126e6360;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271c918);
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



/* Entry: 105112618; end: 10511261b; -[SCVerifiedCommunitiesOnboardingFlowViewController cardToExpandTransition] */

void FUN_105112618(void)

{
  return;
}



/* Entry: 10511261c; end: 1051126d7; -[SCVerifiedCommunitiesOnboardingFlowViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10511261c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + (long)_DAT_11271c91c) & 1) == 0) {
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
      if ((uVar1 & 1) != 0) goto LAB_105112658;
    }
    uVar2 = 1;
  }
  else {
LAB_105112658:
    uVar2 = 0;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 1051126d8; end: 1051126e3; -[SCVerifiedCommunitiesOnboardingFlowViewController cardTransitionWillBeginWithView:] */

void FUN_1051126d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1051126e4; end: 1051126e7; -[SCVerifiedCommunitiesOnboardingFlowViewController cardTransitionEndedWithView:transitionType:] */

void FUN_1051126e4(void)

{
  return;
}



/* Entry: 1051126e8; end: 105112743; -[SCVerifiedCommunitiesOnboardingFlowViewController forceDisableDismissalGesture:] */

void FUN_1051126e8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105112744;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105112744; end: 10511275b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112744(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271c91c) =
       *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 10511275c; end: 105112767; -[SCVerifiedCommunitiesOnboardingFlowViewController defaultProjectNameV2] */

undefined ** FUN_10511275c(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 105112768; end: 105112773; -[SCVerifiedCommunitiesOnboardingFlowViewController defaultSubProjectName] */

undefined ** FUN_105112768(void)

{
  return &PTR____CFConstantStringClassReference_110dc5f98;
}



/* Entry: 105112774; end: 105112787; -[SCVerifiedCommunitiesOnboardingFlowViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c918,0);
  return;
}



/* Entry: 105112788; end: 105112807; -[SCVerifiedCommunitiesContainerView didMoveToSuperview] */

void FUN_105112788(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6368;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToSuperview_1125bb968);
  lVar1 = param_1;
  func_0x00010bf77f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf77f20();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105112808; end: 105112817; -[SCVerifiedCommunitiesContainerView didMoveToSuperviewCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112808(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11271c920,1);
  return;
}



/* Entry: 105112818; end: 105112823; -[SCVerifiedCommunitiesContainerView setDidMoveToSuperviewCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105112824; end: 105112837; -[SCVerifiedCommunitiesContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c920,0);
  return;
}



/* Entry: 105112838; end: 105112843; -[SCVerifiedCommunitiesPresentationsContainer viewControllerToPresent] */

void FUN_105112838(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 105112844; end: 10511284b; -[SCVerifiedCommunitiesPresentationsContainer setViewControllerToPresent:] */

void FUN_105112844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10511284c; end: 105112857; -[SCVerifiedCommunitiesPresentationsContainer completion] */

void FUN_10511284c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 105112858; end: 10511285f; -[SCVerifiedCommunitiesPresentationsContainer setCompletion:] */

void FUN_105112858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105112860; end: 10511286b; -[SCVerifiedCommunitiesPresentationsContainer animated] */

byte FUN_105112860(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 10511286c; end: 105112873; -[SCVerifiedCommunitiesPresentationsContainer setAnimated:] */

void FUN_10511286c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105112874; end: 1051128a3; -[SCVerifiedCommunitiesPresentationsContainer .cxx_destruct] */

void FUN_105112874(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051128a4; end: 1051129db; -[SCVerifiedCommunitiesOnboardingTrayViewController initWithValdiRuntimeProvider:onboardingLaunchPreset:billboardSurface:sourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051128a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e6370;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271c930;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271c934) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271c938) = param_5;
    lVar4 = (long)_DAT_11271c93c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271c940);
    *(undefined **)((long)puVar1 + (long)_DAT_11271c940) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4e48;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271c944);
    *(undefined **)((long)puVar1 + (long)_DAT_11271c944) = puVar3;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    func_0x00010c1c8c00(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051129dc; end: 105112b83; -[SCVerifiedCommunitiesOnboardingTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051129dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271c930);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11271c934) == 0) {
    puVar3 = (undefined *)(param_1 + _DAT_11271c948);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf443a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b4e50;
    _objc_alloc(PTR_PTR_1126b4e50);
    func_0x00010c061d40();
    func_0x00010c222380(param_1);
    _objc_release(puVar3);
  }
  else {
    puVar5 = PTR_PTR_1126b4e58;
    _objc_opt_new(PTR_PTR_1126b4e58);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c18d920(puVar5);
    func_0x00010c222380(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 105112b84; end: 105112baf;  */

void FUN_105112b84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1144e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105112bb0; end: 105112d9b; -[SCVerifiedCommunitiesOnboardingTrayViewController proceedPendingPresentations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112bb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar7 = lVar5;
  _objc_release();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lStack_150 = (long)_DAT_11271c940;
    lVar5 = *(long *)(param_1 + lStack_150);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    lStack_148 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_120;
      do {
        puVar1 = PTR_s_presentViewController_animated_c_112621588;
        lVar5 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lStack_148);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar5 * 8);
          uVar3 = uVar6;
          func_0x00010c29c380(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010bf034a0(uVar6);
          func_0x00010bf43fe0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_138 = PTR_PTR_1126e6370;
          lStack_140 = param_1;
          _objc_msgSendSuper2(&lStack_140,puVar1,uVar3,uVar4,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar3);
          func_0x00010c0a3840(*(undefined8 *)(param_1 + _DAT_11271c944));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lStack_148;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lStack_148);
    lVar7 = *(long *)(param_1 + lStack_150);
    *(undefined **)(param_1 + lStack_150) = PTR____NSArray0__struct_11034ab48;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_105112d9c;
  puStack_178 = PTR_PTR_1126e6370;
  lStack_180 = lVar7;
  lStack_170 = lVar5;
  lStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_180,PTR_s_viewDidLoad_112684cd8);
  lVar5 = *(long *)(lVar7 + _DAT_11271c93c);
  func_0x00010bc92e28();
  if ((lVar5 - 0x81U < 2 || lVar5 == 3) || lVar5 == 0) {
    func_0x00010c0a3860(*(undefined8 *)(lVar7 + _DAT_11271c944));
  }
  else {
    func_0x00010c0a3840(*(undefined8 *)(lVar7 + _DAT_11271c944));
  }
  return;
}



/* Entry: 105112d9c; end: 105112e3f; -[SCVerifiedCommunitiesOnboardingTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105112d9c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  lVar1 = *(long *)(param_1 + _DAT_11271c93c);
  func_0x00010bc92e28();
  if ((lVar1 - 0x81U < 2 || lVar1 == 3) || lVar1 == 0) {
    func_0x00010c0a3860(*(undefined8 *)(param_1 + _DAT_11271c944));
  }
  else {
    func_0x00010c0a3840(*(undefined8 *)(param_1 + _DAT_11271c944));
  }
  return;
}


