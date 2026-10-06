/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065dd0b4; end: 1065dd19f;  */

void FUN_1065dd0b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  lVar2 = *(long *)(param_1 + 0x30) + 8;
  _objc_loadWeakRetained(lVar2);
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  func_0x00010c10d100(lVar2);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 1065dd1a0; end: 1065dd1eb;  */

void FUN_1065dd1a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065dd1ec; end: 1065dd1f3; -[SCOAuth2DeepLinkProcessor needsNavigationDelegate] */

undefined8 FUN_1065dd1ec(void)

{
  return 0;
}



/* Entry: 1065dd1f4; end: 1065dd1fb; -[SCOAuth2DeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1065dd1f4(void)

{
  return 0;
}



/* Entry: 1065dd1fc; end: 1065dd1ff; -[SCOAuth2DeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1065dd1fc(void)

{
  return;
}



/* Entry: 1065dd200; end: 1065dd243; -[SCOAuth2DeepLinkProcessor .cxx_destruct] */

void FUN_1065dd200(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065dd244; end: 1065dd24b; -[SCSnapKitOAuthPermissionScopeHandler launchOAuth2PermissionPresenterWithScope:] */

void FUN_1065dd244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_exposeScope__1125c4f30);
  return;
}



/* Entry: 1065dd24c; end: 1065dd293; -[SCSnapKitOAuthPermissionScopeHandler removeOAuth2PermissionPresenter] */

void FUN_1065dd24c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065dd294; end: 1065dd29f; -[SCSnapKitOAuthPermissionScopeHandler .cxx_destruct] */

void FUN_1065dd294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065dd2a0; end: 1065dd423; +[SCSnapKitCreativeKitWebShareMetadataHelper metadataFromProtoMetadata:] */

void FUN_1065dd2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126cbf20;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0f1dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c11b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c245240(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c255240(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf0ea80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf05300();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c263dc0();
  _objc_release(param_3);
  func_0x00010c033360(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,(char)uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065dd424; end: 1065dd81f; -[SCSnapKitDeeplinkFactoryImpl initWithNavigationDelegate:businessProfilesPresenterScopeLauncher:userSession:safeBrowsingAPI:legacySendToScopeLauncher:ephemeralMediaFactory:filterServices:snapTokenProvider:creatorSettingsService:snapProProfilesProvider:conversationDestinationParser:httpMetadataService:httpRequestModifier:urlPreviewProvider:simpleContentFetcher:imageSourceProvider:textSender:previewSnapSenderFactory:galleryStorySaver:] */

undefined8 *
FUN_1065dd424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f1fc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 1065dd820; end: 1065dd913; -[SCSnapKitDeeplinkFactoryImpl snapKitCreativeKitSendToViewControllerWithDeepLinkUrl:videoProvider:cameraDeepLinkMetadata:sendToContentMetadata:] */

void FUN_1065dd820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cbf28;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c061100(puVar1,param_2,param_4,param_5,param_6,uVar3,lVar2,
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_3,*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065dd914; end: 1065dd9c7; -[SCSnapKitDeeplinkFactoryImpl snapKitCreativeKitWebModalViewController:] */

void FUN_1065dd914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cbf30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c009a00(puVar1,param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065dd9c8; end: 1065dda07; -[SCSnapKitDeeplinkFactoryImpl snapKitOAuth2PermissionPresenterScopeWithDeepLinkURL:features:consentRequired:is1PA:presentingViewController:delegate:] */

void FUN_1065dd9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x00010bf57520(PTR_PTR_1126cbf08,param_2,param_3,0,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 1065dda08; end: 1065ddb7f; -[SCSnapKitDeeplinkFactoryImpl .cxx_destruct] */

void FUN_1065dda08(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065ddb80; end: 1065ddd4f; -[SCSnapKitDeeplinkingServiceProvider _creativeKitWebDataLoader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ddb80(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cbe10;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274b714;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b718;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274b71c;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11274b720;
  lVar9 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar11 = lVar14;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b724;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0489c0(puVar1,param_2,lVar3,lVar6,lVar8,lVar10,lVar11,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065ddd50; end: 1065de1bf; -[SCSnapKitDeeplinkingServiceProvider _snapKitDeepLinkFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065ddd50(long param_1,undefined8 param_2)

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
  long lVar39;
  long lVar40;
  
  puVar1 = PTR_PTR_1126cbf50;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274b728;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_11274b72c;
  lVar5 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf25200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274b730;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274b718;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar12 = lVar39;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274b734;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274b738;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11274b714;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11274b73c;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_11274b71c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11274b740;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = (long)_DAT_11274b720;
  lVar24 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar26 = lVar40;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11274b744;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c28f860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11274b748;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_11274b724;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11274b74c;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11274b750;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b754;
  _objc_loadWeakRetained();
  lVar38 = param_1;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e600(puVar1,param_2,lVar4,lVar6,lVar8,lVar11,lVar12,lVar14,lVar15,lVar17,lVar18,
                      lVar20,lVar23,lVar25,lVar26,lVar28,lVar30,lVar33,lVar35,lVar37,lVar38);
  _objc_release(lVar38);
  _objc_release(param_1);
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
  _objc_release(lVar40);
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
  _objc_release(lVar39);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065de1c0; end: 1065de2e3; -[SCSnapKitDeeplinkingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065de1c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b764,0);
  _objc_storeStrong(param_1 + _DAT_11274b758,0);
  _objc_destroyWeak(param_1 + _DAT_11274b754);
  _objc_destroyWeak(param_1 + _DAT_11274b750);
  _objc_destroyWeak(param_1 + _DAT_11274b760);
  _objc_destroyWeak(param_1 + _DAT_11274b74c);
  _objc_destroyWeak(param_1 + _DAT_11274b748);
  _objc_destroyWeak(param_1 + _DAT_11274b744);
  _objc_destroyWeak(param_1 + _DAT_11274b724);
  _objc_destroyWeak(param_1 + _DAT_11274b740);
  _objc_destroyWeak(param_1 + _DAT_11274b73c);
  _objc_destroyWeak(param_1 + _DAT_11274b72c);
  _objc_destroyWeak(param_1 + _DAT_11274b738);
  _objc_destroyWeak(param_1 + _DAT_11274b734);
  _objc_destroyWeak(param_1 + _DAT_11274b720);
  _objc_destroyWeak(param_1 + _DAT_11274b728);
  _objc_destroyWeak(param_1 + _DAT_11274b71c);
  _objc_destroyWeak(param_1 + _DAT_11274b718);
  _objc_destroyWeak(param_1 + _DAT_11274b714);
  _objc_destroyWeak(param_1 + _DAT_11274b730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b75c);
  return;
}



/* Entry: 1065de2e4; end: 1065de387; -[SCSnapKitDeeplinkingUtilitiesProvider captionStateForMetadata:] */

void FUN_1065de2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cbf68;
  puVar3 = PTR_PTR_1126cbf60;
  _objc_retain(param_3);
  func_0x00010bf8b640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf2fba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c252920(puVar3,param_2,puVar1,1,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065de388; end: 1065de517; -[SCSnapKitDeeplinkingUtilitiesProvider updateTopicCollection:forMetadata:] */

void FUN_1065de388(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar3 = param_3;
      func_0x00010c082d60();
      if ((int)uVar3 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c0e38;
        _objc_alloc(PTR_PTR_1126c0e38);
        func_0x00010c019f00();
        func_0x00010befc580(param_3);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c254d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c4978,PTR_s_stickerRelativeSize__112672d68);
  return;
}



/* Entry: 1065de518; end: 1065de523; -[SCSnapKitStickerHelper stickerRelativeSize:] */

void FUN_1065de518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c254d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c4978,PTR_s_stickerRelativeSize__112672d68);
  return;
}



/* Entry: 1065de524; end: 1065de52f; -[SCSnapKitStickerHelper isStickerAnimated:] */

void FUN_1065de524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c4978,PTR_s_isStickerAnimated__1125fd870);
  return;
}



/* Entry: 1065de530; end: 1065de53b; -[SCSnapKitStickerHelper SCACreativeKitStickertype:] */

void FUN_1065de530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4978,PTR_s_SCACreativeKitStickertype__11254e198);
  return;
}



/* Entry: 1065de53c; end: 1065de547; -[SCSnapKitStickerHelper stickerImage:] */

void FUN_1065de53c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c254130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c4978,PTR_s_stickerImage__112672a70);
  return;
}



/* Entry: 1065de548; end: 1065de553; -[SCSnapKitStickerHelper stickerCenter:] */

void FUN_1065de548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c4978,PTR_s_stickerCenter__1126728e0);
  return;
}



/* Entry: 1065de554; end: 1065de55f; -[SCSnapKitStickerHelper stickerRotation:] */

void FUN_1065de554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c254d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c4978,PTR_s_stickerRotation__112672d80);
  return;
}



/* Entry: 1065de560; end: 1065de8af; -[SCScanCardSnapKitDeepLink initWithDeepLinkURLString:snapTokenProvider:safeBrowsingAPI:imageSourceProvider:snapProProfilesProvider:creatorSettingsService:snapKitDeepLinkDelegate:creativeKitWebModalDelegate:httpMetadataService:httpRequestModifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1065de560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
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
  puStack_68 = PTR_PTR_1126f1fc8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(0x4071800000000000,0x406d800000000000,puVar1,
                      PTR_s_initWithPreferredSize__1125313a8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b768);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b768) = uVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11274b76c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274b770;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274b774;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274b778;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf5b760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b77c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b77c) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_8;
    func_0x00010bf5b780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b780);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274b780) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_8;
    func_0x00010bf5b7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11274b784;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274b788) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274b78c) = 0;
    func_0x00010c204a20(puVar1);
    func_0x00010c185900(puVar1);
    lVar6 = (long)_DAT_11274b790;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274b794;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc();
    puVar4 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b798);
    *(undefined **)((long)puVar1 + (long)_DAT_11274b798) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
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



/* Entry: 1065de8b0; end: 1065de9db; -[SCScanCardSnapKitDeepLink didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065de8b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274b784);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar6);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126b4030;
    func_0x00010bf5b300(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    if ((uVar4 & 1) == 0) {
      puVar3 = PTR_PTR_1126b4030;
      func_0x00010bf5b340(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      if ((int)uVar4 == 0) goto LAB_1065de9c4;
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + _DAT_11274b78c) = uVar5;
    func_0x00010c28a820(param_1);
  }
LAB_1065de9c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065de9dc; end: 1065deb23; -[SCScanCardSnapKitDeepLink loadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065de9dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      *(undefined8 *)(param_1 + _DAT_11274b768));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c09b2c0(param_1);
    goto LAB_1065deb0c;
  }
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc();
  func_0x00010c057c40();
  lVar7 = (long)_DAT_11274b79c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    func_0x00010c09b2c0(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0f5820(uVar4,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar6 == 0) {
LAB_1065deaf4:
      func_0x00010c09b2c0(param_1);
    }
    else {
      lVar5 = *(long *)(param_1 + lVar7);
      func_0x00010c0f5820(lVar5,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c067fc0();
      _objc_release(lVar5);
      if (lVar7 != 1) goto LAB_1065deaf4;
      func_0x00010be4d040(param_1);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
LAB_1065deb0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065deb24; end: 1065def8f; -[SCScanCardSnapKitDeepLink transitionToContentAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065deb24(undefined8 param_1,double param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  func_0x00010be34a20();
  if ((int)puVar12 == 0) {
    puVar12 = param_3;
    func_0x00010bf99160();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar11;
    func_0x00010c0d3c80();
  }
  else {
    puVar12 = param_3;
    func_0x00010c2841e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010c289c00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c289c20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11274b7a0;
    uVar2 = *(undefined8 *)(param_3 + lVar13);
    func_0x00010bfe5b40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bfe9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar12;
    puStack_98 = puVar11;
    puStack_90 = puVar1;
    puStack_88 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    func_0x00010c106e40(param_3);
    func_0x00010c0699c0(puVar12);
    dVar14 = param_2;
    func_0x00010c0699c0(puVar11);
    param_2 = param_2 + dVar14;
    func_0x00010c0699c0(puVar1);
    dVar14 = param_2 + dVar14 + 18.0 + 10.0 + 15.0 + 18.0 + 15.0 + 55.0 + 9.0;
    func_0x00010c1e02c0(param_1,dVar14,param_3);
    _objc_retain(puVar1);
    puVar4 = puVar1;
    if (*(long *)(param_3 + _DAT_11274b7a4) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80();
      if ((int)puVar5 != 0) {
        puVar4 = param_3;
        func_0x00010be84780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25fda0(param_3);
        func_0x00010c28a820(param_3);
        if (puVar4 != (undefined *)0x0) {
          func_0x00010befa120(puVar7);
        }
        if (*(long *)(param_3 + _DAT_11274b7ac) != 0) {
          func_0x00010befa120(puVar7);
        }
        func_0x00010c106e40(param_3);
        dVar15 = dVar14;
        func_0x00010c0699c0(puVar4);
        dVar14 = dVar14 + dVar15 + 15.0;
        func_0x00010c1e02c0(param_1,dVar14,param_3);
        _objc_release(puVar1);
      }
    }
    lVar6 = *(long *)(param_3 + lVar13);
    puStack_178 = puVar12;
    func_0x00010c0f1dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(param_3 + lVar13);
      func_0x00010c0f1dc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80();
      _objc_release(uVar2);
      _objc_release(lVar6);
      if ((int)puVar12 != 0) {
        uVar2 = *(undefined8 *)(param_3 + lVar13);
        func_0x00010c0f1dc0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_3;
        func_0x00010bf0a400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (puVar12 != (undefined *)0x0) {
          func_0x00010befa120(puVar7);
        }
        func_0x00010c106e40(param_3);
        dVar15 = dVar14;
        func_0x00010c0699c0(puVar12);
        func_0x00010c1e02c0(param_1,dVar14 + dVar15 + 15.0,param_3);
        _objc_release(puVar12);
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar12 = puStack_178;
  }
  _objc_release(puVar11);
  _objc_release(puVar12);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  puStack_160 = (undefined8 *)0x0;
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)*puStack_160;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_160 != puVar11) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010c1677c0(0,*(undefined8 *)(lStack_168 + (long)puVar12 * 8));
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puVar7;
      func_0x00010bf52a60();
      puVar12 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  func_0x00010c0f88e0(param_3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1065def90;
  uVar8 = *(undefined8 *)(puVar1 + _DAT_11274b79c);
  puStack_1b0 = puVar11;
  puStack_1a8 = puVar12;
  puStack_1a0 = puVar7;
  puStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110e552f8;
  func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e552f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274b7b0;
  uVar10 = *(undefined8 *)(puVar1 + lVar13);
  *(undefined8 *)(puVar1 + lVar13) = uVar2;
  _objc_release(uVar10);
  _objc_release(ppuVar9);
  _objc_release(uVar8);
  lVar13 = *(long *)(puVar1 + lVar13);
  func_0x00010c08fa60();
  if (lVar13 != 0) {
    puVar12 = puVar1;
    func_0x00010bef1600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126cbe10;
    _objc_alloc();
    func_0x00010c0489c0();
    lVar13 = (long)_DAT_11274b7b4;
    uVar2 = *(undefined8 *)(puVar1 + lVar13);
    *(undefined **)(puVar1 + lVar13) = puVar12;
    _objc_release(uVar2);
    _objc_initWeak(auStack_1b8,puVar1);
    uVar2 = *(undefined8 *)(puVar1 + lVar13);
    _objc_copyWeak(auStack_1c0,auStack_1b8);
    func_0x00010c09b320(uVar2);
    _objc_destroyWeak(auStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c09b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_loadDataComplete_1126046c0);
  return;
}



/* Entry: 1065def90; end: 1065df14f; -[SCScanCardSnapKitDeepLink _loadDataForCreativeKitWebV1] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065def90(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b79c);
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e552f8;
  func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e552f8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274b7b0;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar5;
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  lVar6 = *(long *)(param_1 + lVar6);
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    lVar6 = param_1;
    func_0x00010bef1600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126cbe10;
    _objc_alloc();
    func_0x00010c0489c0();
    lVar6 = (long)_DAT_11274b7b4;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_initWeak(auStack_38,param_1);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c09b320(uVar5);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c09b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadDataComplete_1126046c0);
  return;
}



/* Entry: 1065df150; end: 1065df35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df150(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      uVar1 = param_3;
      func_0x00010bf51e00();
      lVar7 = (long)_DAT_11274b7a0;
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(undefined8 *)(param_1 + lVar7) = uVar1;
      _objc_release(uVar5);
      *(undefined8 *)(param_1 + _DAT_11274b7b8) = param_4;
      lVar6 = (long)_DAT_11274b7a8;
      _objc_retain(param_6);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = param_6;
      _objc_release(uVar1);
      lVar6 = (long)_DAT_11274b7a4;
      _objc_retain(param_7);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = param_7;
      _objc_release(uVar1);
      lVar6 = (long)_DAT_11274b7bc;
      _objc_retain(param_8);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = param_8;
      _objc_release(uVar1);
      lVar6 = *(long *)(param_1 + lVar7);
      func_0x00010c11b1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar6 != 0) {
        uVar1 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c11b1e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80();
        _objc_release(uVar1);
        _objc_release(lVar6);
        if ((int)puVar2 != 0) {
          uVar3 = *(undefined8 *)(param_1 + _DAT_11274b77c);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010c11b1e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar3;
          func_0x00010bf5b7e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar1;
          func_0x00010c080120();
          *(char *)(param_1 + _DAT_11274b78c) = (char)uVar5;
          _objc_release(uVar1);
          _objc_release(uVar4);
          _objc_release(uVar3);
        }
      }
    }
    lVar6 = param_1;
    func_0x00010bef1600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(lVar6);
    func_0x00010c09b2c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065df360; end: 1065df3bb; -[SCScanCardSnapKitDeepLink _hasValidAttachmentData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df360(void)

{
  func_0x00010c08fa60();
  return;
}



/* Entry: 1065df3bc; end: 1065df3eb; -[SCScanCardSnapKitDeepLink _didPressFinishButton] */

void FUN_1065df3bc(undefined8 param_1)

{
  func_0x00010bf5ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065df3ec; end: 1065df43b; -[SCScanCardSnapKitDeepLink _didPressSendToChatButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df3ec(undefined8 param_1)

{
  func_0x00010c2419a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15d040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065df43c; end: 1065df53b; -[SCScanCardSnapKitDeepLink _didPressAttachToSnapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df43c(long param_1)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_11274b7c0;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf0c920(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1065df53c; end: 1065df57f;  */

void FUN_1065df53c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf5ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ae00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065df580; end: 1065df617; -[SCScanCardSnapKitDeepLink _switchToPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df580(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_11274b7a4) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80();
    if ((int)puVar1 != 0) {
      func_0x00010c2419a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10dda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1065df618; end: 1065df70f; -[SCScanCardSnapKitDeepLink _subscribeRequestByButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df618(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274b7a0;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (((int)puVar3 != 0) && ((*(byte *)(param_1 + _DAT_11274b788) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_11274b788) = 1;
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c11b1e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c067fc0();
      func_0x00010bec70e0(param_1,param_2,uVar2,(*(byte *)(param_1 + _DAT_11274b78c) ^ 0xff) & 1,0,0
                         );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 1065df710; end: 1065df927; -[SCScanCardSnapKitDeepLink _subscribeRequestForPublisher:shouldSubscribe:successCompletion:failureCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df710(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b780);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4028;
  func_0x00010bf81ac0(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065df928;
  puStack_90 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_4;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_b0,auStack_78);
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9280(uVar1);
  _objc_release(uVar5);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1065df928; end: 1065df987;  */

void FUN_1065df928(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea81c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065df988; end: 1065df9bf; -[SCScanCardSnapKitDeepLink _setSubscriptionHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df988(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274b78c) = param_3;
  func_0x00010c28a820();
  *(undefined1 *)(param_1 + _DAT_11274b788) = 0;
  return;
}



/* Entry: 1065df9c0; end: 1065df9cf; -[SCScanCardSnapKitDeepLink _setSubscriptionHelperFailure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df9c0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274b788) = 0;
  return;
}



/* Entry: 1065df9d0; end: 1065e02d7; -[SCScanCardSnapKitDeepLink imageViewWithIconString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065df9d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  long lVar33;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar33 = (long)_DAT_11274b7c4;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar1;
  _objc_release(uVar32);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar33));
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar33));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar33));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar1 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4014000000000000);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403e000000000000);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c21e900(puVar2);
  func_0x00010bef9040(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar1 = PTR_PTR_1126b08d8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100b74f58(0x3ff0000000000000,0x3fc999999999999a,0x4000000000000000,0x4000000000000000,
                      puVar1,puVar4,puVar5);
  _objc_release(puVar5);
  lVar6 = param_1;
  func_0x00010bf320c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c219b60(puVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  puStack_a0 = puVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf49420(0x405b800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  puStack_98 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x405b800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  puStack_90 = puVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf320c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  func_0x00010befbb60(puVar4);
  func_0x00010c219b60(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  puStack_c0 = puVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  puStack_b8 = puVar20;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_b0 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  func_0x00010befbb60(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar22 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf49420(0x404fe66666666666);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar33);
  uStack_e8 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar33);
  uStack_e0 = uVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar33);
  uStack_d8 = uVar27;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar33);
  uStack_d0 = uVar32;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar30;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar30);
  _objc_release(puVar8);
  _objc_release(uVar29);
  _objc_release(uVar32);
  _objc_release(puVar9);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(puVar10);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(puVar11);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_initWeak(auStack_f0,param_1);
  puVar31 = auStack_f0;
  _objc_copyWeak(auStack_f8);
  func_0x00010bfaada0(param_1);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume();
  _objc_retain(puVar31);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (puVar31 != (undefined1 *)0x0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_11274b7c4));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar31);
  return;
}



/* Entry: 1065e02d8; end: 1065e032f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e02d8(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274b7c4));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065e0330; end: 1065e05d7; -[SCScanCardSnapKitDeepLink articleViewWithTitle:aboveView:] */

void FUN_1065e0330(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_alloc_init();
  func_0x00010c1cfce0();
  func_0x00010c212f20(puVar1);
  _objc_release(param_6);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1);
  uVar3 = param_4;
  func_0x00010bf320c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c1e0180(param_3 * 0.75,puVar1);
  _objc_release(uVar3);
  func_0x00010c219b60(puVar1);
  uVar3 = param_4;
  func_0x00010bf320c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf320c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_7;
  func_0x00010c274200(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar8 = puVar6;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1065e05d8;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1065e0630;
  puStack_a0 = &UNK_110842e18;
  puStack_98 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b8);
  return;
}



/* Entry: 1065e05d8; end: 1065e062f; -[SCScanCardSnapKitDeepLink updateSubscribeButtonBasedOnSubscriptionStatus] */

void FUN_1065e05d8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065e0630;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1065e0630; end: 1065e06d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e0630(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e56458;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b78c) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e56478;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b7ac);
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar4,param_2,puVar3,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065e06d4; end: 1065e094f; -[SCScanCardSnapKitDeepLink subscribeButtonToTheLeftOfView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e06d4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  double dVar41;
  double dVar42;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = (long)_DAT_11274b7ac;
  lVar2 = param_3;
  if (*(long *)(param_3 + lVar40) == 0) {
    _objc_retain(param_5);
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_3 + lVar40);
    *(undefined **)(param_3 + lVar40) = puVar1;
    _objc_release(uVar37);
    func_0x00010c219b60(*(undefined8 *)(param_3 + lVar40));
    func_0x00010befbd60(*(undefined8 *)(param_3 + lVar40));
    func_0x00010bf320c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)(param_3 + lVar40);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = lVar2;
    func_0x00010bf49420(0x403b000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar40);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar3;
    func_0x00010bf49420(0x403b000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar40);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar40);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar39 = uVar6;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_6 = 4;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar8;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(uVar39);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar35);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar37);
    _objc_release(uVar3);
    _objc_release(lVar38);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar36) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
    lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e56498;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e56498,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar1 = puVar5;
    func_0x00010c271420(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar1);
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e820();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar7);
    func_0x00010bef6f20(puVar8);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(ppuVar9);
    func_0x00010bef6f20(puVar8);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(ppuVar9);
    func_0x00010c08fa60(puVar7);
    func_0x00010c08fa60(ppuVar9);
    func_0x00010bef6f20(puVar8);
    _objc_release(puVar1);
    puVar10 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init();
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar10);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    func_0x00010bf069e0(puVar8);
    func_0x00010c08fa60(puVar7);
    func_0x00010bef6f20(puVar8);
    func_0x00010c08fa60(puVar7);
    func_0x00010bef6f20(puVar8);
    func_0x00010c16b780(puVar5);
    lVar36 = lVar2;
    func_0x00010bf320c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar36);
    func_0x00010c219b60(puVar5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar36;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf493c0(0x4031800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = param_6;
    func_0x00010c274200(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    puVar15 = puVar14;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar37);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(lVar40);
    _objc_release(lVar36);
    _objc_release(puVar12);
    puVar1 = puVar5;
    func_0x00010c271420(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar5;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf49540(0x3feccccccccccccd);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar15);
    _objc_release(lVar36);
    _objc_release(lVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar38) {
      ___stack_chk_fail();
      puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
      lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar16);
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar9;
      func_0x00010bf320c0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(ppuVar17);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar5);
      _objc_release(puVar1);
      func_0x00010befbd60(puVar5);
      puVar1 = puVar5;
      func_0x00010c08c0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar1);
      puVar1 = puVar5;
      func_0x00010c08c0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x403a000000000000);
      _objc_release(puVar1);
      func_0x00010c219b60(puVar5);
      puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc();
      ppuVar17 = &PTR____CFConstantStringClassReference_110dc9238;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9238,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820();
      _objc_release(ppuVar17);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar7);
      func_0x00010bef6f20(puVar7);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar7);
      func_0x00010bef6f20(puVar7);
      _objc_release(puVar1);
      func_0x00010c16b780(puVar5);
      func_0x00010c0699c0(puVar5);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = puVar5;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar9;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar16;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf49420(param_2 + 18.0);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar16;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar16 = puVar18;
      func_0x00010bf493c0(0xc02e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar20);
      _objc_release(puVar16);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(ppuVar17);
      _objc_release(ppuVar9);
      _objc_release(puVar8);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
        ___stack_chk_fail();
        puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
        lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar21);
        func_0x00010bf25cc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = &PTR____CFConstantStringClassReference_110e564f8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e564f8,0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar7;
        func_0x00010bf320c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(puVar5);
        _objc_release(puVar1);
        func_0x00010befbd60(puVar5);
        puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_alloc();
        func_0x00010c04e820();
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar8);
        func_0x00010bef6f20(puVar8);
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar8);
        func_0x00010bef6f20(puVar8);
        _objc_release(puVar1);
        func_0x00010c16b780(puVar5);
        func_0x00010c219b60(puVar5);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar10 = puVar5;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar5;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar21;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        puVar16 = puVar14;
        func_0x00010bf493c0(0xc024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar5;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar7;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar18;
        func_0x00010bf493e0(0x3fe999999999999a);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar21);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar7);
        _objc_release(puVar18);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
          ___stack_chk_fail();
          lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
          func_0x00010bf25cc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = &PTR____CFConstantStringClassReference_110daf8b8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar9;
          func_0x00010bf320c0(ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(ppuVar22);
          puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(puVar5);
          _objc_release(puVar1);
          func_0x00010befbd60(puVar5);
          puVar1 = puVar5;
          func_0x00010c271420(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1cfce0();
          _objc_release(puVar1);
          puVar1 = puVar5;
          func_0x00010c271420(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c165e20();
          _objc_release(puVar1);
          puVar1 = puVar5;
          func_0x00010c271420(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bdb00();
          _objc_release(puVar1);
          puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
          _objc_alloc();
          func_0x00010c04e820();
          puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60(puVar7);
          func_0x00010bef6f20(puVar7);
          _objc_release(puVar1);
          puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60(puVar7);
          func_0x00010bef6f20(puVar7);
          _objc_release(puVar1);
          func_0x00010c16b780(puVar5);
          func_0x00010c219b60(puVar5);
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar8 = puVar5;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar9;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar23 = ppuVar22;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar5;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar24 = ppuVar9;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar25 = ppuVar24;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010bf493c0(0xc032000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar5;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = ppuVar9;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010bf493e0(0x3fe0000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(ppuVar26);
          _objc_release(ppuVar9);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(ppuVar25);
          _objc_release(ppuVar24);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(ppuVar23);
          _objc_release(ppuVar22);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
            ___stack_chk_fail();
            lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
            _objc_alloc_init();
            func_0x00010c219b60();
            puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x00010bfe8220();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = &PTR____CFConstantStringClassReference_110dc34d8;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
            _objc_retainAutoreleasedReturnValue();
            ppuVar22 = &PTR____CFConstantStringClassReference_110dad758;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126aea58;
            _objc_alloc();
            dVar41 = *(double *)(PTR__CGRectZero_110347608 + 8);
            dVar42 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
            func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar41,
                                *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar42);
            func_0x00010c219b60();
            func_0x00010c212f20(puVar8);
            puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c213180(puVar8);
            _objc_release(puVar1);
            func_0x00010c21ad00(puVar8);
            func_0x00010c1cfce0(puVar8);
            puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
            _objc_alloc();
            func_0x00010c01bf60();
            func_0x00010c219b60();
            puVar11 = PTR_PTR_1126aec40;
            func_0x00010bf25cc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16e480();
            func_0x00010c216260(puVar11);
            func_0x00010c216380(puVar11);
            func_0x00010befbd60(puVar11);
            func_0x00010c219b60(puVar11);
            func_0x00010befbb60(puVar5);
            func_0x00010befbb60(puVar5);
            func_0x00010befbb60(puVar5);
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar12 = puVar10;
            func_0x00010bf34860();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar5;
            func_0x00010bf34860();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar10;
            func_0x00010c2a5060();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0(puVar7);
            puVar16 = puVar15;
            func_0x00010bf49420();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar10;
            func_0x00010bfe0660();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0(puVar7);
            puVar19 = puVar18;
            func_0x00010bf49420(dVar41);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar10;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar5;
            func_0x00010c274200(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0(puVar7);
            puVar27 = puVar20;
            func_0x00010bf493c0(dVar41 * -0.5);
            _objc_retainAutoreleasedReturnValue();
            puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar1);
            _objc_release(puVar28);
            _objc_release(puVar27);
            _objc_release(puVar21);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar12 = puVar8;
            func_0x00010c08e400();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar5;
            func_0x00010c08e400();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar12;
            func_0x00010bf493c0(0x4024000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar8;
            func_0x00010c1408a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar5;
            func_0x00010c1408a0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar15;
            func_0x00010bf493c0(0xc024000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar8;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar11;
            func_0x00010c274200(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar19;
            func_0x00010bf493c0(0xc014000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar27 = puVar8;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar28 = puVar10;
            func_0x00010bf1ff80(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar29 = puVar27;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar1);
            _objc_release(puVar30);
            _objc_release(puVar29);
            _objc_release(puVar28);
            _objc_release(puVar27);
            _objc_release(puVar21);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            func_0x00010c213040(puVar8);
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar16 = puVar11;
            func_0x00010bf34860();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar5;
            func_0x00010bf34860();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar16;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar11;
            func_0x00010c2a5060();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar13;
            func_0x00010bf49420(0x406f400000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar11;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar5;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar19;
            func_0x00010bf493c0(0xc014000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar11;
            func_0x00010bfe0660();
            _objc_retainAutoreleasedReturnValue();
            puVar27 = puVar18;
            func_0x00010bf49420(0x4049000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar1);
            _objc_release(puVar28);
            _objc_release(puVar27);
            _objc_release(puVar18);
            _objc_release(puVar21);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar12);
            _objc_release(puVar13);
            _objc_release(puVar14);
            _objc_release(puVar15);
            _objc_release(puVar16);
            ppuVar23 = ppuVar17;
            func_0x00010bf320c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb60();
            _objc_release(ppuVar23);
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar21 = puVar5;
            func_0x00010c08e400();
            _objc_retainAutoreleasedReturnValue();
            ppuVar31 = ppuVar17;
            func_0x00010bf320c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar32 = ppuVar31;
            func_0x00010c08e400();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar21;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar5;
            func_0x00010c1408a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar33 = ppuVar17;
            func_0x00010bf320c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar34 = ppuVar33;
            func_0x00010c1408a0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar19;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar5;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            ppuVar26 = ppuVar17;
            func_0x00010bf320c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar23 = ppuVar26;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar16;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar5;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar24 = ppuVar17;
            func_0x00010bf320c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = ppuVar24;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar1);
            _objc_release(puVar12);
            _objc_release(puVar15);
            _objc_release(ppuVar25);
            _objc_release(ppuVar24);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(ppuVar23);
            _objc_release(ppuVar26);
            _objc_release(puVar16);
            _objc_release(puVar18);
            _objc_release(ppuVar34);
            _objc_release(ppuVar33);
            _objc_release(puVar19);
            _objc_release(puVar20);
            _objc_release(ppuVar32);
            _objc_release(ppuVar31);
            _objc_release(puVar21);
            puVar1 = puVar8;
            func_0x00010c26b700();
            _objc_retainAutoreleasedReturnValue();
            dVar41 = 1.79769313486232e+308;
            uVar37 = 3;
            uVar35 = 0;
            func_0x00010bf20ba0(0x4070400000000000);
            _objc_release(puVar1);
            func_0x00010c23d0a0(puVar7);
            func_0x00010c1e02c0(0x4071800000000000,(long)(dVar42 + dVar41 * 0.5 + 80.0),ppuVar17);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar8);
            _objc_release(ppuVar22);
            _objc_release(ppuVar9);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
              ___stack_chk_fail();
              _objc_retain(uVar35);
              puVar1 = PTR_PTR_1126b08a8;
              _objc_retain(uVar37);
              _objc_alloc(puVar1);
              puVar5 = PTR_PTR_1126b08b0;
              func_0x00010bf33760(PTR_PTR_1126b08b0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c003ac0(puVar1);
              _objc_release(puVar5);
              uVar39 = *(undefined8 *)(puVar7 + _DAT_11274b774);
              puVar5 = PTR_PTR_1126b08b8;
              _objc_alloc(PTR_PTR_1126b08b8);
              func_0x00010c0295e0();
              _objc_release(uVar37);
              func_0x00010bf55f20();
              _objc_retainAutoreleasedReturnValue();
              lVar2 = (long)_DAT_11274b7c8;
              uVar37 = *(undefined8 *)(puVar7 + lVar2);
              *(undefined8 *)(puVar7 + lVar2) = uVar39;
              _objc_release(uVar37);
              _objc_release(puVar5);
              uVar37 = *(undefined8 *)(puVar7 + lVar2);
              _objc_retain(uVar35);
              func_0x00010bfa78e0(uVar37);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(uVar35);
              _objc_release(uVar35);
              _objc_release(puVar1);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1065e0950; end: 1065e0f0f; -[SCScanCardSnapKitDeepLink _publisherViewWithText:aboveView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e0950(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e56498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e56498,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(ppuVar2);
  func_0x00010bef6f20(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(ppuVar2);
  func_0x00010c08fa60(puVar3);
  func_0x00010c08fa60(ppuVar2);
  func_0x00010bef6f20(puVar5);
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  func_0x00010bf069e0(puVar5);
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar5);
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar5);
  func_0x00010c16b780(puVar1);
  uVar31 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar31);
  func_0x00010c219b60(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493c0(0x4031800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_6;
  func_0x00010c274200(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar11 = puVar10;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar34);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(puVar8);
  puVar4 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf49540(0x3feccccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(uVar31);
  _objc_release(param_3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar12);
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x00010bf320c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar13);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    func_0x00010befbd60(puVar1);
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403a000000000000);
    _objc_release(puVar4);
    func_0x00010c219b60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    ppuVar13 = &PTR____CFConstantStringClassReference_110dc9238;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9238,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    _objc_release(ppuVar13);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar3);
    func_0x00010bef6f20(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar3);
    func_0x00010bef6f20(puVar3);
    _objc_release(puVar4);
    func_0x00010c16b780(puVar1);
    func_0x00010c0699c0(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf49420(param_2 + 18.0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar14;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
      lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar17);
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110e564f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e564f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf320c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar4);
      func_0x00010befbd60(puVar1);
      puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc();
      func_0x00010c04e820();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar5);
      func_0x00010bef6f20(puVar5);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar5);
      func_0x00010bef6f20(puVar5);
      _objc_release(puVar4);
      func_0x00010c16b780(puVar1);
      func_0x00010c219b60(puVar1);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puVar1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar17;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar12 = puVar10;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar1;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010bf493e0(0x3fe999999999999a);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar3);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
        ___stack_chk_fail();
        lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
        func_0x00010bf25cc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110daf8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar2;
        func_0x00010bf320c0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(ppuVar18);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(puVar1);
        _objc_release(puVar4);
        func_0x00010befbd60(puVar1);
        puVar4 = puVar1;
        func_0x00010c271420(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cfce0();
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010c271420(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c165e20();
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010c271420(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bdb00();
        _objc_release(puVar4);
        puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_alloc();
        func_0x00010c04e820();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar3);
        func_0x00010bef6f20(puVar3);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar3);
        func_0x00010bef6f20(puVar3);
        _objc_release(puVar4);
        func_0x00010c16b780(puVar1);
        func_0x00010c219b60(puVar1);
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar5 = puVar1;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar2;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar18;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar2;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar20;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf493c0(0xc032000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar2;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf493e0(0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar4);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(ppuVar22);
        _objc_release(ppuVar2);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(ppuVar21);
        _objc_release(ppuVar20);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(ppuVar19);
        _objc_release(ppuVar18);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
          ___stack_chk_fail();
          lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
          _objc_alloc_init();
          func_0x00010c219b60();
          puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = &PTR____CFConstantStringClassReference_110dc34d8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = &PTR____CFConstantStringClassReference_110dad758;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126aea58;
          _objc_alloc();
          dVar35 = *(double *)(PTR__CGRectZero_110347608 + 8);
          dVar36 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
          func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar35,
                              *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar36);
          func_0x00010c219b60();
          func_0x00010c212f20(puVar5);
          puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(puVar5);
          _objc_release(puVar4);
          func_0x00010c21ad00(puVar5);
          func_0x00010c1cfce0(puVar5);
          puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          func_0x00010c01bf60();
          func_0x00010c219b60();
          puVar7 = PTR_PTR_1126aec40;
          func_0x00010bf25cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e480();
          func_0x00010c216260(puVar7);
          func_0x00010c216380(puVar7);
          func_0x00010befbd60(puVar7);
          func_0x00010c219b60(puVar7);
          func_0x00010befbb60(puVar1);
          func_0x00010befbb60(puVar1);
          func_0x00010befbb60(puVar1);
          puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar8 = puVar6;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar1;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar6;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0(puVar3);
          puVar12 = puVar11;
          func_0x00010bf49420();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar6;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0(puVar3);
          puVar15 = puVar14;
          func_0x00010bf49420(dVar35);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar6;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar1;
          func_0x00010c274200(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0(puVar3);
          puVar23 = puVar16;
          func_0x00010bf493c0(dVar35 * -0.5);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar4);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar8 = puVar5;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar1;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010bf493c0(0x4024000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar5;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010c1408a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar11;
          func_0x00010bf493c0(0xc024000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar5;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar7;
          func_0x00010c274200(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar15;
          func_0x00010bf493c0(0xc014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar5;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar6;
          func_0x00010bf1ff80(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar23;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar4);
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          func_0x00010c213040(puVar5);
          puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar14 = puVar7;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar14;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar10;
          func_0x00010bf49420(0x406f400000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar1;
          func_0x00010bf1ff80(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar8;
          func_0x00010bf493c0(0xc014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar7;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar17;
          func_0x00010bf49420(0x4049000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar4);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(puVar10);
          _objc_release(puVar11);
          _objc_release(puVar12);
          _objc_release(puVar14);
          ppuVar19 = ppuVar13;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(ppuVar19);
          puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar17 = puVar1;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          ppuVar27 = ppuVar13;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar28 = ppuVar27;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar17;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar1;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = ppuVar13;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar30 = ppuVar29;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar15;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar13;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar22;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar12;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar1;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = ppuVar13;
          func_0x00010bf320c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar20;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar4);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(ppuVar21);
          _objc_release(ppuVar20);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(ppuVar19);
          _objc_release(ppuVar22);
          _objc_release(puVar12);
          _objc_release(puVar14);
          _objc_release(ppuVar30);
          _objc_release(ppuVar29);
          _objc_release(puVar15);
          _objc_release(puVar16);
          _objc_release(ppuVar28);
          _objc_release(ppuVar27);
          _objc_release(puVar17);
          puVar4 = puVar5;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          dVar35 = 1.79769313486232e+308;
          uVar31 = 3;
          uVar32 = 0;
          func_0x00010bf20ba0(0x4070400000000000);
          _objc_release(puVar4);
          func_0x00010c23d0a0(puVar3);
          func_0x00010c1e02c0(0x4071800000000000,(long)(dVar36 + dVar35 * 0.5 + 80.0),ppuVar13);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(ppuVar18);
          _objc_release(ppuVar2);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
            ___stack_chk_fail();
            _objc_retain(uVar32);
            puVar4 = PTR_PTR_1126b08a8;
            _objc_retain(uVar31);
            _objc_alloc(puVar4);
            puVar1 = PTR_PTR_1126b08b0;
            func_0x00010bf33760(PTR_PTR_1126b08b0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c003ac0(puVar4);
            _objc_release(puVar1);
            uVar34 = *(undefined8 *)(puVar3 + _DAT_11274b774);
            puVar1 = PTR_PTR_1126b08b8;
            _objc_alloc(PTR_PTR_1126b08b8);
            func_0x00010c0295e0();
            _objc_release(uVar31);
            func_0x00010bf55f20();
            _objc_retainAutoreleasedReturnValue();
            lVar33 = (long)_DAT_11274b7c8;
            uVar31 = *(undefined8 *)(puVar3 + lVar33);
            *(undefined8 *)(puVar3 + lVar33) = uVar34;
            _objc_release(uVar31);
            _objc_release(puVar1);
            uVar31 = *(undefined8 *)(puVar3 + lVar33);
            _objc_retain(uVar32);
            func_0x00010bfa78e0(uVar31);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar32);
            _objc_release(uVar32);
            _objc_release(puVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065e0f10; end: 1065e1343; -[SCScanCardSnapKitDeepLink updateSendURLToSnapViewAboveView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e0f10(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar31);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc9238;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9238,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820();
  _objc_release(ppuVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar3);
  _objc_release(puVar2);
  func_0x00010c16b780(puVar1);
  func_0x00010c0699c0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf49420(param_2 + 18.0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar12 = puVar11;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar34);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar32);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar31);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar14);
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e564f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e564f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf320c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010befbd60(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e820();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar5);
    func_0x00010bef6f20(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar5);
    func_0x00010bef6f20(puVar5);
    _objc_release(puVar2);
    func_0x00010c16b780(puVar1);
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar12 = puVar10;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493e0(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
      ___stack_chk_fail();
      lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar4;
      func_0x00010bf320c0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(ppuVar18);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar2);
      func_0x00010befbd60(puVar1);
      puVar2 = puVar1;
      func_0x00010c271420(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010c271420(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165e20();
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010c271420(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdb00();
      _objc_release(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc();
      func_0x00010c04e820();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar3);
      func_0x00010bef6f20(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar3);
      func_0x00010bef6f20(puVar3);
      _objc_release(puVar2);
      func_0x00010c16b780(puVar1);
      func_0x00010c219b60(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = puVar1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar4;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar18;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar4;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar20;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493c0(0xc032000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar4;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf493e0(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(ppuVar22);
      _objc_release(ppuVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(ppuVar21);
      _objc_release(ppuVar20);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar19);
      _objc_release(ppuVar18);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
        ___stack_chk_fail();
        lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc_init();
        func_0x00010c219b60();
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110dc34d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = &PTR____CFConstantStringClassReference_110dad758;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126aea58;
        _objc_alloc();
        dVar35 = *(double *)(PTR__CGRectZero_110347608 + 8);
        dVar36 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar35,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar36);
        func_0x00010c219b60();
        func_0x00010c212f20(puVar5);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar5);
        _objc_release(puVar2);
        func_0x00010c21ad00(puVar5);
        func_0x00010c1cfce0(puVar5);
        puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        func_0x00010c01bf60();
        func_0x00010c219b60();
        puVar7 = PTR_PTR_1126aec40;
        func_0x00010bf25cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e480();
        func_0x00010c216260(puVar7);
        func_0x00010c216380(puVar7);
        func_0x00010befbd60(puVar7);
        func_0x00010c219b60(puVar7);
        func_0x00010befbb60(puVar1);
        func_0x00010befbb60(puVar1);
        func_0x00010befbb60(puVar1);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar8 = puVar6;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0(puVar3);
        puVar12 = puVar11;
        func_0x00010bf49420();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar6;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0(puVar3);
        puVar14 = puVar13;
        func_0x00010bf49420(dVar35);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar6;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar1;
        func_0x00010c274200(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0(puVar3);
        puVar23 = puVar15;
        func_0x00010bf493c0(dVar35 * -0.5);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2);
        _objc_release(puVar24);
        _objc_release(puVar23);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar8 = puVar5;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010bf493c0(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar1;
        func_0x00010c1408a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x00010bf493c0(0xc024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar5;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar7;
        func_0x00010c274200(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        func_0x00010bf493c0(0xc014000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar5;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar6;
        func_0x00010bf1ff80(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar23;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2);
        _objc_release(puVar26);
        _objc_release(puVar25);
        _objc_release(puVar24);
        _objc_release(puVar23);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        func_0x00010c213040(puVar5);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar13 = puVar7;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar1;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar10;
        func_0x00010bf49420(0x406f400000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar1;
        func_0x00010bf1ff80(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar9;
        func_0x00010bf493c0(0xc014000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar7;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar16;
        func_0x00010bf49420(0x4049000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2);
        _objc_release(puVar24);
        _objc_release(puVar23);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar12);
        _objc_release(puVar13);
        ppuVar19 = ppuVar17;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(ppuVar19);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar16 = puVar1;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar27 = ppuVar17;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar27;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar16;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar1;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar28 = ppuVar17;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar29 = ppuVar28;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar14;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        ppuVar30 = ppuVar17;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar30;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar12;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar17;
        func_0x00010bf320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar20;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(ppuVar21);
        _objc_release(ppuVar20);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(ppuVar19);
        _objc_release(ppuVar30);
        _objc_release(puVar12);
        _objc_release(puVar13);
        _objc_release(ppuVar29);
        _objc_release(ppuVar28);
        _objc_release(puVar14);
        _objc_release(puVar15);
        _objc_release(ppuVar22);
        _objc_release(ppuVar27);
        _objc_release(puVar16);
        puVar2 = puVar5;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        dVar35 = 1.79769313486232e+308;
        uVar31 = 3;
        uVar32 = 0;
        func_0x00010bf20ba0(0x4070400000000000);
        _objc_release(puVar2);
        func_0x00010c23d0a0(puVar3);
        func_0x00010c1e02c0(0x4071800000000000,(long)(dVar36 + dVar35 * 0.5 + 80.0),ppuVar17);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(ppuVar18);
        _objc_release(ppuVar4);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar33) {
          ___stack_chk_fail();
          _objc_retain(uVar32);
          puVar2 = PTR_PTR_1126b08a8;
          _objc_retain(uVar31);
          _objc_alloc(puVar2);
          puVar1 = PTR_PTR_1126b08b0;
          func_0x00010bf33760(PTR_PTR_1126b08b0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c003ac0(puVar2);
          _objc_release(puVar1);
          uVar34 = *(undefined8 *)(puVar3 + _DAT_11274b774);
          puVar1 = PTR_PTR_1126b08b8;
          _objc_alloc(PTR_PTR_1126b08b8);
          func_0x00010c0295e0();
          _objc_release(uVar31);
          func_0x00010bf55f20();
          _objc_retainAutoreleasedReturnValue();
          lVar33 = (long)_DAT_11274b7c8;
          uVar31 = *(undefined8 *)(puVar3 + lVar33);
          *(undefined8 *)(puVar3 + lVar33) = uVar34;
          _objc_release(uVar31);
          _objc_release(puVar1);
          uVar31 = *(undefined8 *)(puVar3 + lVar33);
          _objc_retain(uVar32);
          func_0x00010bfa78e0(uVar31);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar32);
          _objc_release(uVar32);
          _objc_release(puVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065e1344; end: 1065e16ef; -[SCScanCardSnapKitDeepLink updateSendURLToChatViewAboveView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e1344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar34 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e564f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e564f8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_1;
  func_0x00010bf320c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar32);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  func_0x00010befbd60(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f20(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f20(puVar4);
  _objc_release(puVar3);
  func_0x00010c16b780(puVar1);
  func_0x00010c219b60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = puVar7;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar35);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar34) {
    ___stack_chk_fail();
    lVar34 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar2;
    func_0x00010bf320c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar14);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    func_0x00010befbd60(puVar1);
    puVar3 = puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e820();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar4);
    func_0x00010bef6f20(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar4);
    func_0x00010bef6f20(puVar4);
    _objc_release(puVar3);
    func_0x00010c16b780(puVar1);
    func_0x00010c219b60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(ppuVar18);
    _objc_release(ppuVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar17);
    _objc_release(ppuVar16);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar34) {
      ___stack_chk_fail();
      lVar34 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      func_0x00010c219b60();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc34d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126aea58;
      _objc_alloc();
      dVar36 = *(double *)(PTR__CGRectZero_110347608 + 8);
      dVar37 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar36,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar37);
      func_0x00010c219b60();
      func_0x00010c212f20(puVar5);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar5);
      _objc_release(puVar3);
      func_0x00010c21ad00(puVar5);
      func_0x00010c1cfce0(puVar5);
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      func_0x00010c219b60();
      puVar7 = PTR_PTR_1126aec40;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e480();
      func_0x00010c216260(puVar7);
      func_0x00010c216380(puVar7);
      func_0x00010befbd60(puVar7);
      func_0x00010c219b60(puVar7);
      func_0x00010befbb60(puVar1);
      func_0x00010befbb60(puVar1);
      func_0x00010befbb60(puVar1);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = puVar6;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(puVar4);
      puVar19 = puVar12;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar6;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(puVar4);
      puVar21 = puVar20;
      func_0x00010bf49420(dVar36);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar1;
      func_0x00010c274200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(puVar4);
      puVar24 = puVar22;
      func_0x00010bf493c0(dVar36 * -0.5);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = puVar5;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar1;
      func_0x00010c1408a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar12;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar7;
      func_0x00010c274200(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      func_0x00010bf493c0(0xc014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar6;
      func_0x00010bf1ff80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar24;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c213040(puVar5);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar19 = puVar7;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar19;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010bf49420(0x406f400000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar7;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      func_0x00010bf493c0(0xc014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar7;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar20;
      func_0x00010bf49420(0x4049000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar20);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar12);
      _objc_release(puVar19);
      ppuVar15 = ppuVar13;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(ppuVar15);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar23 = puVar1;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      ppuVar28 = ppuVar13;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar28;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar23;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar1;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar30 = ppuVar13;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar31 = ppuVar30;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar13;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar15;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar19;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar13;
      func_0x00010bf320c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar17;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar12);
      _objc_release(ppuVar18);
      _objc_release(ppuVar17);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(ppuVar16);
      _objc_release(ppuVar15);
      _objc_release(puVar19);
      _objc_release(puVar20);
      _objc_release(ppuVar31);
      _objc_release(ppuVar30);
      _objc_release(puVar21);
      _objc_release(puVar22);
      _objc_release(ppuVar29);
      _objc_release(ppuVar28);
      _objc_release(puVar23);
      puVar3 = puVar5;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      dVar36 = 1.79769313486232e+308;
      uVar32 = 3;
      uVar33 = 0;
      func_0x00010bf20ba0(0x4070400000000000);
      _objc_release(puVar3);
      func_0x00010c23d0a0(puVar4);
      func_0x00010c1e02c0(0x4071800000000000,(long)(dVar37 + dVar36 * 0.5 + 80.0),ppuVar13);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(ppuVar14);
      _objc_release(ppuVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar34) {
        ___stack_chk_fail();
        _objc_retain(uVar33);
        puVar3 = PTR_PTR_1126b08a8;
        _objc_retain(uVar32);
        _objc_alloc(puVar3);
        puVar1 = PTR_PTR_1126b08b0;
        func_0x00010bf33760(PTR_PTR_1126b08b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c003ac0(puVar3);
        _objc_release(puVar1);
        uVar35 = *(undefined8 *)(puVar4 + _DAT_11274b774);
        puVar1 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        _objc_release(uVar32);
        func_0x00010bf55f20();
        _objc_retainAutoreleasedReturnValue();
        lVar34 = (long)_DAT_11274b7c8;
        uVar32 = *(undefined8 *)(puVar4 + lVar34);
        *(undefined8 *)(puVar4 + lVar34) = uVar35;
        _objc_release(uVar32);
        _objc_release(puVar1);
        uVar32 = *(undefined8 *)(puVar4 + lVar34);
        _objc_retain(uVar33);
        func_0x00010bfa78e0(uVar32);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar33);
        _objc_release(uVar33);
        _objc_release(puVar3);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065e16f0; end: 1065e1b07; -[SCScanCardSnapKitDeepLink updateCancelButtonStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e16f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_1;
  func_0x00010bf320c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar33);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  func_0x00010befbd60(puVar1);
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f20(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f20(puVar4);
  _objc_release(puVar3);
  func_0x00010c16b780(puVar1);
  func_0x00010c219b60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493c0(0xc032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar36);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar35) {
    ___stack_chk_fail();
    lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110dc34d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc();
    dVar37 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar38 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar37,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar38);
    func_0x00010c219b60();
    func_0x00010c212f20(puVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar5);
    _objc_release(puVar3);
    func_0x00010c21ad00(puVar5);
    func_0x00010c1cfce0(puVar5);
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c219b60();
    puVar7 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e480();
    func_0x00010c216260(puVar7);
    func_0x00010c216380(puVar7);
    func_0x00010befbd60(puVar7);
    func_0x00010c219b60(puVar7);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(puVar4);
    puVar16 = puVar13;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(puVar4);
    puVar18 = puVar17;
    func_0x00010bf49420(dVar37);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(puVar4);
    puVar21 = puVar19;
    func_0x00010bf493c0(dVar37 * -0.5);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar7;
    func_0x00010c274200(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar6;
    func_0x00010bf1ff80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    func_0x00010c213040(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar16 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010bf49420(0x406f400000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar17;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar17);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar13);
    _objc_release(puVar16);
    ppuVar30 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar30);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar20 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar25;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuVar27;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar29 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar30 = ppuVar29;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = ppuVar2;
    func_0x00010bf320c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar31;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(ppuVar32);
    _objc_release(ppuVar31);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(ppuVar30);
    _objc_release(ppuVar29);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(ppuVar28);
    _objc_release(ppuVar27);
    _objc_release(puVar18);
    _objc_release(puVar19);
    _objc_release(ppuVar26);
    _objc_release(ppuVar25);
    _objc_release(puVar20);
    puVar3 = puVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    dVar37 = 1.79769313486232e+308;
    uVar33 = 3;
    uVar34 = 0;
    func_0x00010bf20ba0(0x4070400000000000);
    _objc_release(puVar3);
    func_0x00010c23d0a0(puVar4);
    func_0x00010c1e02c0(0x4071800000000000,(long)(dVar38 + dVar37 * 0.5 + 80.0),ppuVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar35) {
      ___stack_chk_fail();
      _objc_retain(uVar34);
      puVar3 = PTR_PTR_1126b08a8;
      _objc_retain(uVar33);
      _objc_alloc(puVar3);
      puVar1 = PTR_PTR_1126b08b0;
      func_0x00010bf33760(PTR_PTR_1126b08b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003ac0(puVar3);
      _objc_release(puVar1);
      uVar36 = *(undefined8 *)(puVar4 + _DAT_11274b774);
      puVar1 = PTR_PTR_1126b08b8;
      _objc_alloc(PTR_PTR_1126b08b8);
      func_0x00010c0295e0();
      _objc_release(uVar33);
      func_0x00010bf55f20();
      _objc_retainAutoreleasedReturnValue();
      lVar35 = (long)_DAT_11274b7c8;
      uVar33 = *(undefined8 *)(puVar4 + lVar35);
      *(undefined8 *)(puVar4 + lVar35) = uVar36;
      _objc_release(uVar33);
      _objc_release(puVar1);
      uVar33 = *(undefined8 *)(puVar4 + lVar35);
      _objc_retain(uVar34);
      func_0x00010bfa78e0(uVar33);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar34);
      _objc_release(uVar34);
      _objc_release(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065e1b08; end: 1065e2537; -[SCScanCardSnapKitDeepLink errorViewForCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e1b08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc34d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  dVar31 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar32 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar31,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar32);
  func_0x00010c219b60();
  func_0x00010c212f20(puVar5);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar6);
  func_0x00010c21ad00(puVar5);
  func_0x00010c1cfce0(puVar5);
  puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  puVar8 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480();
  func_0x00010c216260(puVar8);
  func_0x00010c216380(puVar8);
  func_0x00010befbd60(puVar8);
  func_0x00010c219b60(puVar8);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar9 = puVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(puVar2);
  puVar13 = puVar12;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(puVar2);
  puVar15 = puVar14;
  func_0x00010bf49420(dVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  func_0x00010c274200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(puVar2);
  puVar18 = puVar16;
  func_0x00010bf493c0(dVar31 * -0.5);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar9 = puVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c1408a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  func_0x00010c274200(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010bf1ff80(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  func_0x00010c213040(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar11;
  func_0x00010bf49420(0x406f400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar9;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar14);
  uVar27 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar27);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_1;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar28;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar30);
  _objc_release(uVar28);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(puVar17);
  puVar6 = puVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  dVar31 = 1.79769313486232e+308;
  uVar27 = 3;
  uVar28 = 0;
  func_0x00010bf20ba0(0x4070400000000000);
  _objc_release(puVar6);
  func_0x00010c23d0a0(puVar2);
  func_0x00010c1e02c0(0x4071800000000000,(long)(dVar32 + dVar31 * 0.5 + 80.0),param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar28);
  puVar6 = PTR_PTR_1126b08a8;
  _objc_retain(uVar27);
  _objc_alloc(puVar6);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003ac0(puVar6);
  _objc_release(puVar1);
  uVar30 = *(undefined8 *)(puVar2 + _DAT_11274b774);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(uVar27);
  func_0x00010bf55f20();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11274b7c8;
  uVar27 = *(undefined8 *)(puVar2 + lVar29);
  *(undefined8 *)(puVar2 + lVar29) = uVar30;
  _objc_release(uVar27);
  _objc_release(puVar1);
  uVar27 = *(undefined8 *)(puVar2 + lVar29);
  _objc_retain(uVar28);
  func_0x00010bfa78e0(uVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar28);
  _objc_release(uVar28);
  _objc_release(puVar6);
  return;
}



/* Entry: 1065e2538; end: 1065e26c3; -[SCScanCardSnapKitDeepLink fetchThumbnailImageWithURL:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e2538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003ac0(puVar1,param_2,puVar2,PTR____NSArray0__struct_11034ab48,0x5a0);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274b774);
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(param_3);
  func_0x00010bf55f20(uVar5,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11274b7c8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar5;
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065e26c4;
  puStack_60 = &UNK_11092e698;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274b798);
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa78e0(uVar3,param_2,&puStack_78,uVar5,PTR___dispatch_main_q_11034be20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1065e26c4; end: 1065e26d3;  */

void FUN_1065e26c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001065e26d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1065e26d4; end: 1065e26f3; -[SCScanCardSnapKitDeepLink snapKitDeepLinkDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e26d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274b7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e26f4; end: 1065e2707; -[SCScanCardSnapKitDeepLink setSnapKitDeepLinkDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e26f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274b7c0,param_3);
  return;
}



/* Entry: 1065e2708; end: 1065e2727; -[SCScanCardSnapKitDeepLink creativeKitWebModalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e2708(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274b7cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e2728; end: 1065e273b; -[SCScanCardSnapKitDeepLink setCreativeKitWebModalDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e2728(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274b7cc,param_3);
  return;
}



/* Entry: 1065e273c; end: 1065e28c3; -[SCScanCardSnapKitDeepLink .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e273c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b7cc);
  _objc_destroyWeak(param_1 + _DAT_11274b7c0);
  _objc_storeStrong(param_1 + _DAT_11274b798,0);
  _objc_storeStrong(param_1 + _DAT_11274b7ac,0);
  _objc_storeStrong(param_1 + _DAT_11274b794,0);
  _objc_storeStrong(param_1 + _DAT_11274b790,0);
  _objc_storeStrong(param_1 + _DAT_11274b784,0);
  _objc_storeStrong(param_1 + _DAT_11274b780,0);
  _objc_storeStrong(param_1 + _DAT_11274b77c,0);
  _objc_storeStrong(param_1 + _DAT_11274b778,0);
  _objc_storeStrong(param_1 + _DAT_11274b7c8,0);
  _objc_storeStrong(param_1 + _DAT_11274b774,0);
  _objc_storeStrong(param_1 + _DAT_11274b770,0);
  _objc_storeStrong(param_1 + _DAT_11274b76c,0);
  _objc_storeStrong(param_1 + _DAT_11274b7a0,0);
  _objc_storeStrong(param_1 + _DAT_11274b7b0,0);
  _objc_storeStrong(param_1 + _DAT_11274b7b4,0);
  _objc_storeStrong(param_1 + _DAT_11274b79c,0);
  _objc_storeStrong(param_1 + _DAT_11274b7c4,0);
  _objc_storeStrong(param_1 + _DAT_11274b7bc,0);
  _objc_storeStrong(param_1 + _DAT_11274b7a4,0);
  _objc_storeStrong(param_1 + _DAT_11274b7a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b768,0);
  return;
}



/* Entry: 1065e28c4; end: 1065e2aa7; -[SCSnapKitDeeplinkTableViewCell initWithPreferredSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1065e28c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_3;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f1fd0;
  puVar2 = &uStack_50;
  uStack_50 = param_3;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithStyle_reuseIdentifier__1125f1528,0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_11274b7d0) = param_1;
    ((undefined8 *)((long)puVar2 + (long)_DAT_11274b7d0))[1] = param_2;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1fbac0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar4);
    puVar5 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar2 + (long)_DAT_11274b7d4,puVar3);
    func_0x00010bdebd20(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return puVar2;
}



/* Entry: 1065e2aa8; end: 1065e2c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e2aa8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274b7d0),
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065e2c9c; end: 1065e2e23; -[SCSnapKitDeeplinkTableViewCell activityIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e2c9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274b7d8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
    func_0x00010bff0f20();
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1a8560();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf320c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + lVar3,puVar2);
    _objc_release(puVar2);
  }
  _objc_loadWeakRetained(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e2e24; end: 1065e2fd3; -[SCSnapKitDeeplinkTableViewCell hitTest:withEvent:] */

void FUN_1065e2e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
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
  long lStack_68;
  
  plVar3 = &lStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf320c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = *(undefined1 **)(lStack_128 + lVar6 * 8);
        func_0x00010bf512a0(param_1,param_2,param_3);
        func_0x00010bfe3a40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined1 *)0x0) {
          _objc_release(lVar2);
          goto LAB_1065e2f8c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  puStack_138 = PTR_PTR_1126f1fd0;
  lStack_140 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_140,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)plVar3;
LAB_1065e2f8c:
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1065e2fd4; end: 1065e2fd7; -[SCSnapKitDeeplinkTableViewCell loadData] */

void FUN_1065e2fd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadDataComplete_1126046c0);
  return;
}



/* Entry: 1065e2fd8; end: 1065e304b; -[SCSnapKitDeeplinkTableViewCell loadDataComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e2fd8(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_11274b7dc) = 1;
  *(undefined1 *)(param_1 + _DAT_11274b7e0) = 0;
  if ((*(char *)(param_1 + _DAT_11274b7e4) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_11274b7e8) & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010c29fbc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_transitionToContentAnimated__11267c4f0,lVar1);
    return;
  }
  return;
}



/* Entry: 1065e304c; end: 1065e304f; -[SCSnapKitDeeplinkTableViewCell transitionToContentAnimated:] */

void FUN_1065e304c(void)

{
  return;
}



/* Entry: 1065e3050; end: 1065e307b; -[SCSnapKitDeeplinkTableViewCell cardWillInsert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3050(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11274b7ec) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11274b7ec) = 1;
  *(undefined1 *)(param_1 + _DAT_11274b7e0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c09b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadData_1126046b0);
  return;
}



/* Entry: 1065e307c; end: 1065e3103; -[SCSnapKitDeeplinkTableViewCell cardWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e307c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_11274b7f0) = 1;
  if ((((*(byte *)(param_1 + _DAT_11274b7e4) & 1) == 0) &&
      (*(undefined1 *)(param_1 + _DAT_11274b7e4) = 1, *(char *)(param_1 + _DAT_11274b7dc) == '\x01')
      ) && ((*(byte *)(param_1 + _DAT_11274b7e8) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_11274b7e8) = 1;
    lVar1 = param_1;
    func_0x00010c29fbc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_transitionToContentAnimated__11267c4f0,lVar1);
    return;
  }
  return;
}



/* Entry: 1065e3104; end: 1065e3113; -[SCSnapKitDeeplinkTableViewCell cardDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3104(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274b7f0) = 0;
  return;
}



/* Entry: 1065e3114; end: 1065e3263; -[SCSnapKitDeeplinkTableViewCell _createCardShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3114(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e56518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c13a140(0x404b800000000000,0x404b800000000000,0x404b800000000000,0x404b800000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1065e3264;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(puVar1,param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0();
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274b7f4);
  *(undefined **)(param_1 + _DAT_11274b7f4) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065e3264; end: 1065e359b;  */

void FUN_1065e3264(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf320c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc041c00000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf320c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4041000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf320c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4041400000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf320c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc041800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065e359c; end: 1065e367f; -[SCSnapKitDeeplinkTableViewCell performInitialAnimationWithViews:] */

void FUN_1065e359c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065e3680;
  puStack_60 = &UNK_110842e18;
  uStack_58 = param_1;
  func_0x00010bf03400(0x3fb99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1065e3924;
  puStack_88 = &UNK_110842e18;
  uStack_80 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fb99999a0000000,0x3fb99999a0000000,puVar2,param_2,0,&puStack_a0,0);
  _objc_release(uStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 1065e3680; end: 1065e3723;  */

void FUN_1065e3680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf320c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 1065e3724; end: 1065e3923;  */

void FUN_1065e3724(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c106e40(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c106e40(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c0df720(param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065e3924; end: 1065e3a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3924(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar2 + _DAT_11274b7d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3a18; end: 1065e3a37; -[SCSnapKitDeeplinkTableViewCell cardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3a18(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274b7d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3a38; end: 1065e3a4b; -[SCSnapKitDeeplinkTableViewCell preferredSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1065e3a38(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274b7d0);
}



/* Entry: 1065e3a4c; end: 1065e3a5f; -[SCSnapKitDeeplinkTableViewCell setPreferredSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3a4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274b7d0;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 1065e3a60; end: 1065e3a73; -[SCSnapKitDeeplinkTableViewCell setActivityIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3a60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274b7d8,param_3);
  return;
}



/* Entry: 1065e3a74; end: 1065e3a83; -[SCSnapKitDeeplinkTableViewCell visible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1065e3a74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274b7f0);
}



/* Entry: 1065e3a84; end: 1065e3a93; -[SCSnapKitDeeplinkTableViewCell setVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3a84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274b7f0) = param_3;
  return;
}



/* Entry: 1065e3a94; end: 1065e3adb; -[SCSnapKitDeeplinkTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065e3a94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b7d8);
  _objc_destroyWeak(param_1 + _DAT_11274b7d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b7f4,0);
  return;
}



/* Entry: 1065e3adc; end: 1065e3b07; +[SCGrapheneSnapKitDeeplinkingMetric ckLiteDeepLinkRequestPrcssr] */

void FUN_1065e3adc(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3b08; end: 1065e3b33; +[SCGrapheneSnapKitDeeplinkingMetric ckDeepLinkRequestProcessor] */

void FUN_1065e3b08(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3b34; end: 1065e3b5f; +[SCGrapheneSnapKitDeeplinkingMetric ckLiteDeepLinkRequestParser] */

void FUN_1065e3b34(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3b60; end: 1065e3b8b; +[SCGrapheneSnapKitDeeplinkingMetric ckDeepLinkRequestParser] */

void FUN_1065e3b60(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3b8c; end: 1065e3bb7; +[SCGrapheneSnapKitDeeplinkingMetric ckDeepLinkRequestHandler] */

void FUN_1065e3b8c(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3bb8; end: 1065e3be3; +[SCGrapheneSnapKitDeeplinkingMetric snapConnectValidation] */

void FUN_1065e3bb8(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3be4; end: 1065e3c0f; +[SCGrapheneSnapKitDeeplinkingMetric snapKitPasteboard] */

void FUN_1065e3be4(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3c10; end: 1065e3c3b; +[SCGrapheneSnapKitDeeplinkingMetric ckShareError] */

void FUN_1065e3c10(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3c3c; end: 1065e3c67; +[SCGrapheneSnapKitDeeplinkingMetric snapKitPasteControl] */

void FUN_1065e3c3c(void)

{
  _objc_alloc(PTR_PTR_1126cbdf0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065e3c68; end: 1065e3d07; -[SCGrapheneSnapKitDeeplinkingMetric description] */

void FUN_1065e3c68(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e56538;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e56538,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f1fd8;
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



/* Entry: 1065e3d08; end: 1065e3ef3; -[SCGrapheneRegistry snapKitDeeplinkingGraphene] */

void FUN_1065e3d08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1065e3d90;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3a78 != -1) {
    func_0x00010002a2fc(0x1136c3a78,&puStack_48);
  }
  uVar1 = uRam00000001136c3a70;
  _objc_retain(uRam00000001136c3a70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065e3ef4; end: 1065e3f03; -[SCApplicationLogger isUserOutOfAaoGatingSession] */

bool FUN_1065e3ef4(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}



/* Entry: 1065e3f04; end: 1065e3f9b; -[SCApplicationLogger logApplicationResignActive] */

void FUN_1065e3f04(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c082860();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1065e3f9c;
    puStack_48 = &UNK_110848c48;
    uStack_40 = param_1;
    puStack_38 = puVar3;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_60);
  }
  return;
}



/* Entry: 1065e3f9c; end: 1065e3fb3;  */

void FUN_1065e3f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be57cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logResignActiveWithApplicationS_1125738d8,
             *(undefined8 *)(param_1 + 0x28),0,0,0);
  return;
}



/* Entry: 1065e3fb4; end: 1065e400b; -[SCApplicationLogger logApplicationClose] */

void FUN_1065e3fb4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065e400c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1065e400c; end: 1065e4013;  */

void FUN_1065e400c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be503f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logApplicationClose_112571a98);
  return;
}


