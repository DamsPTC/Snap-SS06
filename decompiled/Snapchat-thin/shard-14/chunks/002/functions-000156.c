/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b04e124; end: 10b04e16b; -[SCCCreatePostEditTileDelegate initWithOnEditTileTap:] */

undefined8 FUN_10b04e124(undefined8 param_1)

{
  func_0x00010b04e578();
  func_0x00010b04e54c();
  func_0x00010b04e530();
  func_0x00010b04e560();
  return param_1;
}



/* Entry: 10b04e16c; end: 10b04e17f; +[SCCCreatePostEditTileDelegate valdiMarshallableObjectDescriptor] */

void FUN_10b04e16c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb36f0;
  param_1[1] = &PTR_DAT_110cb3720;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e180; end: 10b04e1b3; -[SCCCreatePostEditedFrame initWithSnapDoc:timestampMs:baseFrameImage:] */

void FUN_10b04e180(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b04e520(PTR_PTR_112704c98);
  func_0x00010b04e53c(auStack_20);
  return;
}



/* Entry: 10b04e1b4; end: 10b04e1c7; +[SCCCreatePostEditedFrame valdiMarshallableObjectDescriptor] */

void FUN_10b04e1b4(undefined8 *param_1)

{
  *param_1 = &PTR_s_snapDoc_110cb3730;
  param_1[1] = &PTR_DAT_110cb37a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e1c8; end: 10b04e29b; -[SCCCreatePostLocationDependencies initWithLatitude:longitude:suggestedLocationsObservable:grpcService:onTapReportVenue:onTapSuggestAPlace:] */

undefined8 *
FUN_10b04e1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010b04e560();
  puStack_58 = PTR_PTR_112704ca0;
  uStack_60 = param_1;
  func_0x00010b04e54c();
  puVar1 = &uStack_60;
  func_0x00010b04e53c(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b04e29c; end: 10b04e2af; +[SCCCreatePostLocationDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b04e29c(undefined8 *param_1)

{
  *param_1 = &PTR_s_latitude_110cb37b8;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb3860;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e2b0; end: 10b04e2db; -[SCCCreatePostLoggingParams initWithPostSource:] */

void FUN_10b04e2b0(void)

{
  func_0x00010b04e54c();
  func_0x00010b04e530();
  return;
}



/* Entry: 10b04e2dc; end: 10b04e2ef; +[SCCCreatePostLoggingParams valdiMarshallableObjectDescriptor] */

void FUN_10b04e2dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3880;
  param_1[1] = &PTR_DAT_110cb38c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e2f0; end: 10b04e317; -[SCCCreatePostMention initWithUserId:username:displayName:range:] */

void FUN_10b04e2f0(void)

{
  func_0x00010b04e520(PTR_PTR_112704cb0);
  func_0x00010b04e510();
  return;
}



/* Entry: 10b04e318; end: 10b04e32b; +[SCCCreatePostMention valdiMarshallableObjectDescriptor] */

void FUN_10b04e318(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_110cb38d8;
  param_1[1] = &PTR_DAT_110cb3950;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e32c; end: 10b04e35f; -[SCCCreatePostPaidPartnershipConfig initWithHasMusic:isAnonymous:canUseSponsorTool:] */

void FUN_10b04e32c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b04e520(PTR_PTR_112704cb8);
  func_0x00010b04e53c(auStack_20);
  return;
}



/* Entry: 10b04e360; end: 10b04e373; +[SCCCreatePostPaidPartnershipConfig valdiMarshallableObjectDescriptor] */

void FUN_10b04e360(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3960;
  param_1[1] = &PTR_DAT_110cb39f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e374; end: 10b04e3af; -[SCCCreatePostPlaceTagsMetadata initWithLatitude:longitude:source:type:] */

void FUN_10b04e374(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b04e520(PTR_PTR_112704cc0);
  func_0x00010b04e53c(auStack_20);
  return;
}



/* Entry: 10b04e3b0; end: 10b04e3c3; +[SCCCreatePostPlaceTagsMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b04e3b0(undefined8 *param_1)

{
  *param_1 = &PTR_s_latitude_110cb3a08;
  param_1[1] = &PTR_DAT_110cb3ac8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e3c4; end: 10b04e3ef; -[SCCCreatePostPreviewAsset initWithAsset:type:width:height:] */

void FUN_10b04e3c4(void)

{
  func_0x00010b04e520(PTR_PTR_112704cc8);
  func_0x00010b04e510();
  return;
}



/* Entry: 10b04e3f0; end: 10b04e403; +[SCCCreatePostPreviewAsset valdiMarshallableObjectDescriptor] */

void FUN_10b04e3f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3ae8;
  param_1[1] = &PTR_s_SCNValdiCoreAsset_110cb3b78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e404; end: 10b04e42f; -[SCCCreatePostRange initWithStart:endExclusive:] */

void FUN_10b04e404(void)

{
  func_0x00010b04e54c();
  func_0x00010b04e530();
  return;
}



/* Entry: 10b04e430; end: 10b04e443; +[SCCCreatePostRange valdiMarshallableObjectDescriptor] */

void FUN_10b04e430(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_110cb3b90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e444; end: 10b04e46f; -[SCCCreatePostSoundConfig initWithIsImageSnap:audioPresentInVideo:audioEnabled:isMusicSnap:] */

void FUN_10b04e444(void)

{
  func_0x00010b04e520(PTR_PTR_112704cd8);
  func_0x00010b04e510();
  return;
}



/* Entry: 10b04e470; end: 10b04e483; +[SCCCreatePostSoundConfig valdiMarshallableObjectDescriptor] */

void FUN_10b04e470(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb3bd8;
  param_1[1] = &PTR_DAT_110cb3c80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e484; end: 10b04e4ab; -[SCCCreatePostStoryConfig initWithId2:storyType:] */

void FUN_10b04e484(void)

{
  func_0x00010b04e520(PTR_PTR_112704ce0);
  func_0x00010b04e510();
  return;
}



/* Entry: 10b04e4ac; end: 10b04e4bf; +[SCCCreatePostStoryConfig valdiMarshallableObjectDescriptor] */

void FUN_10b04e4ac(undefined8 *param_1)

{
  *param_1 = &PTR_s_id_110cb3c90;
  param_1[1] = &PTR_DAT_110cb3d08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e4c0; end: 10b04e4eb; -[SCCCreatePostTopic initWithHashtag:] */

void FUN_10b04e4c0(void)

{
  func_0x00010b04e54c();
  func_0x00010b04e530();
  return;
}



/* Entry: 10b04e4ec; end: 10b04e583; +[SCCCreatePostTopic valdiMarshallableObjectDescriptor] */

void FUN_10b04e4ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb3d20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b04e584; end: 10b04e717; -[SCSnapKitOAuth2PermissionPresenterScope initWithUIContainer:oAuth2InputDataModel:phoneNumberVerifyId:features:consentRequired:is1PA:kitPluginType:kitAuthFlowSource:kitVersion:kitIsFromReactNative:kitIsForFirebaseAuthentication:delegate:] */

undefined8 *
FUN_10b04e584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112704cf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    puVar1[6] = param_9;
    puVar1[7] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0xb) = param_12._1_1_;
    _objc_storeWeak(puVar1 + 9,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b04e718; end: 10b04e71f; -[SCSnapKitOAuth2PermissionPresenterScope uiContainer] */

undefined8 FUN_10b04e718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04e720; end: 10b04e727; -[SCSnapKitOAuth2PermissionPresenterScope oAuth2InputDataModel] */

undefined8 FUN_10b04e720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04e728; end: 10b04e72f; -[SCSnapKitOAuth2PermissionPresenterScope phoneNumberVerifyId] */

undefined8 FUN_10b04e728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b04e730; end: 10b04e737; -[SCSnapKitOAuth2PermissionPresenterScope features] */

undefined8 FUN_10b04e730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b04e738; end: 10b04e73f; -[SCSnapKitOAuth2PermissionPresenterScope consentRequired] */

undefined1 FUN_10b04e738(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b04e740; end: 10b04e747; -[SCSnapKitOAuth2PermissionPresenterScope is1PA] */

undefined1 FUN_10b04e740(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b04e748; end: 10b04e74f; -[SCSnapKitOAuth2PermissionPresenterScope kitPluginType] */

undefined8 FUN_10b04e748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b04e750; end: 10b04e757; -[SCSnapKitOAuth2PermissionPresenterScope kitAuthFlowSource] */

undefined8 FUN_10b04e750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b04e758; end: 10b04e75f; -[SCSnapKitOAuth2PermissionPresenterScope kitVersion] */

undefined8 FUN_10b04e758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b04e760; end: 10b04e767; -[SCSnapKitOAuth2PermissionPresenterScope isFromReactNative] */

undefined1 FUN_10b04e760(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b04e768; end: 10b04e76f; -[SCSnapKitOAuth2PermissionPresenterScope isForFirebaseAuthentication] */

undefined1 FUN_10b04e768(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b04e770; end: 10b04e787; -[SCSnapKitOAuth2PermissionPresenterScope delegate] */

void FUN_10b04e770(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04e788; end: 10b04e7e3; -[SCSnapKitOAuth2PermissionPresenterScope .cxx_destruct] */

void FUN_10b04e788(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b04e7e4; end: 10b04ea0f; -[SCOAuth2InputDataModel initWithClientId:sessionId:responseType:redirectUrl:scope:state:codeChallenge:requestIdHash:codeChallengeMethod:codeVerifier:isScanFlow:] */

undefined8 *
FUN_10b04e7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112704cf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_13;
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



/* Entry: 10b04ea10; end: 10b04ea33; -[SCOAuth2InputDataModel copyWithZone:] */

undefined8 FUN_10b04ea10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04ea34; end: 10b04eb0b; -[SCOAuth2InputDataModel hash] */

undefined8 * FUN_10b04ea34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b04ec5c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b04ec68;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                        if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_10b04ec68;
                        }
                        goto LAB_10b04ec5c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b04ec68:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b04eb0c; end: 10b04ec83; -[SCOAuth2InputDataModel isEqual:] */

long FUN_10b04eb0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04ec5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04ec68;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_10b04ec68;
                        }
                        goto LAB_10b04ec5c;
                      }
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
LAB_10b04ec68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04ec84; end: 10b04ec8b; -[SCOAuth2InputDataModel clientId] */

undefined8 FUN_10b04ec84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04ec8c; end: 10b04ec93; -[SCOAuth2InputDataModel sessionId] */

undefined8 FUN_10b04ec8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04ec94; end: 10b04ec9b; -[SCOAuth2InputDataModel responseType] */

undefined8 FUN_10b04ec94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b04ec9c; end: 10b04eca3; -[SCOAuth2InputDataModel redirectUrl] */

undefined8 FUN_10b04ec9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b04eca4; end: 10b04ecab; -[SCOAuth2InputDataModel scope] */

undefined8 FUN_10b04eca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b04ecac; end: 10b04ecb3; -[SCOAuth2InputDataModel state] */

undefined8 FUN_10b04ecac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b04ecb4; end: 10b04ecbb; -[SCOAuth2InputDataModel codeChallenge] */

undefined8 FUN_10b04ecb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b04ecbc; end: 10b04ecc3; -[SCOAuth2InputDataModel requestIdHash] */

undefined8 FUN_10b04ecbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b04ecc4; end: 10b04eccb; -[SCOAuth2InputDataModel codeChallengeMethod] */

undefined8 FUN_10b04ecc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b04eccc; end: 10b04ecd3; -[SCOAuth2InputDataModel codeVerifier] */

undefined8 FUN_10b04eccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b04ecd4; end: 10b04ecdb; -[SCOAuth2InputDataModel isScanFlow] */

undefined1 FUN_10b04ecd4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b04ecdc; end: 10b04ed6b; -[SCOAuth2InputDataModel .cxx_destruct] */

void FUN_10b04ecdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b04ed6c; end: 10b04eddf; -[SCCanvasConnectionManagementServices initWithConnectionManager:] */

undefined1 * FUN_10b04ed6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704d00;
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



/* Entry: 10b04ede0; end: 10b04ede7; -[SCCanvasConnectionManagementServices connectionManager] */

undefined8 FUN_10b04ede0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b04ede8; end: 10b04edf3; -[SCCanvasConnectionManagementServices .cxx_destruct] */

void FUN_10b04ede8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b04edf4; end: 10b04eecb; -[SCAuthApprovalResponseModel initWithRedirectUri:code:state:] */

undefined1 *
FUN_10b04edf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704d08;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04eecc; end: 10b04eeef; -[SCAuthApprovalResponseModel copyWithZone:] */

undefined8 FUN_10b04eecc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04eef0; end: 10b04ef6f; -[SCAuthApprovalResponseModel hash] */

undefined8 * FUN_10b04eef0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b04f008:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b04f014;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b04f014;
          }
          goto LAB_10b04f008;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b04f014:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b04ef70; end: 10b04f02f; -[SCAuthApprovalResponseModel isEqual:] */

long FUN_10b04ef70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04f008:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04f014;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b04f014;
          }
          goto LAB_10b04f008;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b04f014:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04f030; end: 10b04f037; -[SCAuthApprovalResponseModel redirectUri] */

undefined8 FUN_10b04f030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b04f038; end: 10b04f03f; -[SCAuthApprovalResponseModel code] */

undefined8 FUN_10b04f038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04f040; end: 10b04f047; -[SCAuthApprovalResponseModel state] */

undefined8 FUN_10b04f040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04f048; end: 10b04f083; -[SCAuthApprovalResponseModel .cxx_destruct] */

void FUN_10b04f048(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b04f084; end: 10b04f21b; -[SCAuthAuthorizationRequestModel initWithResponseType:clientId:redirectUri:scope:state:codeChallengeMethod:codeChallenge:] */

undefined1 *
FUN_10b04f084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112704d10;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10b04f21c; end: 10b04f23f; -[SCAuthAuthorizationRequestModel copyWithZone:] */

undefined8 FUN_10b04f21c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04f240; end: 10b04f2ef; -[SCAuthAuthorizationRequestModel hash] */

undefined8 * FUN_10b04f240(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b04f3e8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b04f3f4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b04f3f4;
                  }
                  goto LAB_10b04f3e8;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b04f3f4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b04f2f0; end: 10b04f40f; -[SCAuthAuthorizationRequestModel isEqual:] */

long FUN_10b04f2f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04f3e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04f3f4;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b04f3f4;
                  }
                  goto LAB_10b04f3e8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b04f3f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04f410; end: 10b04f417; -[SCAuthAuthorizationRequestModel responseType] */

undefined8 FUN_10b04f410(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b04f418; end: 10b04f41f; -[SCAuthAuthorizationRequestModel clientId] */

undefined8 FUN_10b04f418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04f420; end: 10b04f427; -[SCAuthAuthorizationRequestModel redirectUri] */

undefined8 FUN_10b04f420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04f428; end: 10b04f42f; -[SCAuthAuthorizationRequestModel scope] */

undefined8 FUN_10b04f428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b04f430; end: 10b04f437; -[SCAuthAuthorizationRequestModel state] */

undefined8 FUN_10b04f430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b04f438; end: 10b04f43f; -[SCAuthAuthorizationRequestModel codeChallengeMethod] */

undefined8 FUN_10b04f438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b04f440; end: 10b04f447; -[SCAuthAuthorizationRequestModel codeChallenge] */

undefined8 FUN_10b04f440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b04f448; end: 10b04f4b3; -[SCAuthAuthorizationRequestModel .cxx_destruct] */

void FUN_10b04f448(long param_1)

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



/* Entry: 10b04f4b4; end: 10b04f603; -[SCAuthAuthorizationResponseModel initWithApprovalToken:clientName:clientDescription:clientIconURL:scopesRequestedArray:scopesRequestedArray_Count:consentRequired:] */

undefined1 *
FUN_10b04f4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

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
  puStack_58 = PTR_PTR_112704d18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04f604; end: 10b04f627; -[SCAuthAuthorizationResponseModel copyWithZone:] */

undefined8 FUN_10b04f604(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04f628; end: 10b04f6cb; -[SCAuthAuthorizationResponseModel hash] */

undefined8 * FUN_10b04f628(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b04f7b4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b04f7c0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b04f7c0;
              }
              goto LAB_10b04f7b4;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b04f7c0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b04f6cc; end: 10b04f7db; -[SCAuthAuthorizationResponseModel isEqual:] */

long FUN_10b04f6cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04f7b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04f7c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b04f7c0;
              }
              goto LAB_10b04f7b4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b04f7c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04f7dc; end: 10b04f7e3; -[SCAuthAuthorizationResponseModel approvalToken] */

undefined8 FUN_10b04f7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04f7e4; end: 10b04f7eb; -[SCAuthAuthorizationResponseModel clientName] */

undefined8 FUN_10b04f7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04f7ec; end: 10b04f7f3; -[SCAuthAuthorizationResponseModel clientDescription] */

undefined8 FUN_10b04f7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b04f7f4; end: 10b04f7fb; -[SCAuthAuthorizationResponseModel clientIconURL] */

undefined8 FUN_10b04f7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b04f7fc; end: 10b04f803; -[SCAuthAuthorizationResponseModel scopesRequestedArray] */

undefined8 FUN_10b04f7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b04f804; end: 10b04f80b; -[SCAuthAuthorizationResponseModel scopesRequestedArray_Count] */

undefined8 FUN_10b04f804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b04f80c; end: 10b04f813; -[SCAuthAuthorizationResponseModel consentRequired] */

undefined1 FUN_10b04f80c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b04f814; end: 10b04f867; -[SCAuthAuthorizationResponseModel .cxx_destruct] */

void FUN_10b04f814(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b04f868; end: 10b04f957; -[SCAuthScopeModel initWithName:descriptionsArray:descriptionsArray_Count:toggleable:icon:] */

undefined1 *
FUN_10b04f868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112704d20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b04f958; end: 10b04f97b; -[SCAuthScopeModel copyWithZone:] */

undefined8 FUN_10b04f958(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04f97c; end: 10b04fa07; -[SCAuthScopeModel hash] */

undefined8 * FUN_10b04f97c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b04fac0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b04facc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
          if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b04facc;
          }
          goto LAB_10b04fac0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b04facc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b04fa08; end: 10b04fae7; -[SCAuthScopeModel isEqual:] */

long FUN_10b04fa08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04fac0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04facc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b04facc;
          }
          goto LAB_10b04fac0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b04facc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04fae8; end: 10b04faef; -[SCAuthScopeModel name] */

undefined8 FUN_10b04fae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04faf0; end: 10b04faf7; -[SCAuthScopeModel descriptionsArray] */

undefined8 FUN_10b04faf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04faf8; end: 10b04faff; -[SCAuthScopeModel descriptionsArray_Count] */

undefined8 FUN_10b04faf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b04fb00; end: 10b04fb07; -[SCAuthScopeModel toggleable] */

undefined1 FUN_10b04fb00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b04fb08; end: 10b04fb0f; -[SCAuthScopeModel icon] */

undefined8 FUN_10b04fb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b04fb10; end: 10b04fb4b; -[SCAuthScopeModel .cxx_destruct] */

void FUN_10b04fb10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b04fb4c; end: 10b04fce7; -[SCCanvasAppConnection initWithApplicationId:applicationName:applicationIconURL:approvedScopes:connectionTimestamp:appContext:snapKitFeatures:isConnected:hasPrivateStorageData:isFirstPartyApp:] */

undefined8 *
FUN_10b04fb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112704d28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_10._2_1_;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}


