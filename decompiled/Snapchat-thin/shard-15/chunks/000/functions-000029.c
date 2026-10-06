/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b78a360; end: 10b78a39b;  */

undefined ** FUN_10b78a360(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f858;
  if (param_1 != 0xfb28253) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f838;
  if (param_1 != -0x668ae91d) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78a39c; end: 10b78a3ff; -[SOJUMedia initWithMediaId:mediaType:mediaUrl:mediaAttributes:key:iv:width:height:owner:timerSec:isZipped:venueId:snapAttachments:isInfiniteDuration:sourceId:animatedSnapType:creatorAttribution:directDownloadUrl:miniThumbnailData:lensMetadata:contextClientInfo:] */

void FUN_10b78a39c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78a400; end: 10b78a61f; +[SOJUMedia registerMessageFields:] */

void FUN_10b78a400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mediaId_11260ee78;
  _objc_retain(param_3);
  func_0x00010b78a680(param_3,param_2,puVar1);
  func_0x00010b78a640();
  func_0x00010b78a620();
  func_0x00010b78a620();
  func_0x00010b78a680(param_3,param_2,PTR_s_mediaAttributes_11260ea80);
  func_0x00010b78a664();
  func_0x00010c19a460(param_3,param_2,0xd855e4a3ecfec9);
  func_0x00010b78a670();
  func_0x00010b78a640();
  func_0x00010b78a670();
  func_0x00010b78a640();
  func_0x00010b78a670();
  func_0x00010b78a664();
  func_0x00010b78a670();
  func_0x00010b78a664();
  func_0x00010b78a670();
  func_0x00010b78a640();
  func_0x00010b78a650();
  func_0x00010b78a664();
  func_0x00010b78a650();
  func_0x00010b78a664();
  func_0x00010b78a620();
  puVar1 = PTR_s_snapAttachments_11266d748;
  _objc_opt_class(PTR_PTR_1126d9158);
  func_0x00010b78a680(param_3,param_2,puVar1);
  func_0x00010b78a68c();
  func_0x00010b78a650();
  func_0x00010b78a664();
  func_0x00010b78a620();
  func_0x00010b78a680(param_3,param_2,PTR_s_animatedSnapType_11259e778);
  func_0x00010bf06b60();
  func_0x00010b78a620();
  puVar1 = PTR_s_directDownloadUrl_1125bd580;
  _objc_opt_class(PTR_PTR_1126d96b0);
  func_0x00010b78a680(param_3,param_2,puVar1);
  func_0x00010b78a68c();
  func_0x00010b78a620();
  func_0x00010b78a620();
  func_0x00010b78a620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78a620; end: 10b78a697;  */

void FUN_10b78a620(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78a698; end: 10b78a6a3; +[SOJUMediaBuilder messageClass] */

void FUN_10b78a698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0eb8);
  return;
}



/* Entry: 10b78a6a4; end: 10b78a6a7; +[SOJUMediaBuilder withJUMedia:] */

void FUN_10b78a6a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78a6a8; end: 10b78a6cb; -[SOJUMediaCardAttribute initWithStart:end:type:url:] */

void FUN_10b78a6a8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78a6cc; end: 10b78a77b; +[SOJUMediaCardAttribute registerMessageFields:] */

void FUN_10b78a6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_start_112671080;
  _objc_retain(param_3);
  FUN_10b78a77c(param_3,param_2,puVar1,0,0,1);
  func_0x00010b78a788();
  FUN_10b78a77c();
  func_0x00010b78a788();
  func_0x00010bf06b60();
  func_0x00010b78a788();
  FUN_10b78a77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78a77c; end: 10b78a797;  */

void FUN_10b78a77c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78a798; end: 10b78a86b;  */

undefined8 FUN_10b78a798(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e51178;
  func_0x00010b78a904();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x32affa;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e700b8;
    func_0x00010b78a904();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffbb979bf4;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd96b8;
      func_0x00010b78a904();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x65b3d6e;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7f878;
        func_0x00010b78a904();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x48f6b14e;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dadab8;
          func_0x00010b78a904();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x5c24b9c;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7f898;
            func_0x00010b78a904();
            uVar2 = 0x38a51dea;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78a86c; end: 10b78a90b;  */

undefined ** FUN_10b78a86c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x4468640c) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e700b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f898;
  if (param_1 != 0x38a51dea) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd96b8;
  if (param_1 != 0x65b3d6e) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dadab8;
  if (param_1 != 0x5c24b9c) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e51178;
  if (param_1 != 0x32affa) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f878;
  if (param_1 != 0x48f6b14e) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78a90c; end: 10b78a92f; -[SOJUMediaSave initWithSavedMessageSenderId:savedMessageId:mediaTypeSavedCount:destination:] */

void FUN_10b78a90c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78a930; end: 10b78aa13; +[SOJUMediaSave registerMessageFields:] */

void FUN_10b78a930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_savedMessageSenderId_1126308a8;
  _objc_retain(param_3);
  FUN_10b78aa14(param_3,param_2,puVar1,0,1,6);
  FUN_10b78aa14(param_3,param_2,PTR_s_savedMessageId_1126308a0,0,1,6);
  FUN_10b78aa14(param_3,param_2,PTR_s_mediaTypeSavedCount_11260f568,0,1,7);
  func_0x00010c19a460(param_3,param_2,0x47dda33973733a);
  func_0x00010bf06b60(param_3,param_2,PTR_s_destination_1125b9480,0,0,6,0,FUN_10b78aa30,
                      FUN_10b78aa9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78aa14; end: 10b78aa1f;  */

void FUN_10b78aa14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78aa20; end: 10b78aa2b; +[SOJUMediaSaveBuilder messageClass] */

void FUN_10b78aa20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1098);
  return;
}



/* Entry: 10b78aa2c; end: 10b78aa2f; +[SOJUMediaSaveBuilder withJUMediaSave:] */

void FUN_10b78aa2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78aa30; end: 10b78aa9b;  */

undefined8 FUN_10b78aa30(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffffcd22957;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f8b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f8b8,param_2,param_1);
    uVar2 = 0xffffffff82d4d16d;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78aa9c; end: 10b78aad7;  */

undefined ** FUN_10b78aa9c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f8b8;
  if (param_1 != -0x7d2b2e93) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbaab8;
  if (param_1 != -0x32dd6a9) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78aad8; end: 10b78aafb; -[SOJUMediaUrl initWithUrl:expirySecs:type:region:] */

void FUN_10b78aad8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78aafc; end: 10b78abab; +[SOJUMediaUrl registerMessageFields:] */

void FUN_10b78aafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_url_1126816f8;
  _objc_retain(param_3);
  FUN_10b78abac(param_3,param_2,puVar1,0,0,6);
  func_0x00010b78abb8();
  FUN_10b78abac();
  func_0x00010b78abb8();
  func_0x00010bf06b60();
  func_0x00010b78abb8();
  FUN_10b78abac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78abac; end: 10b78abc7;  */

void FUN_10b78abac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78abc8; end: 10b78abd3; +[SOJUMediaUrlBuilder messageClass] */

void FUN_10b78abc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d96b0);
  return;
}



/* Entry: 10b78abd4; end: 10b78abd7; +[SOJUMediaUrlBuilder withJUMediaUrl:] */

void FUN_10b78abd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78abd8; end: 10b78abf7; -[SOJUMegaStickerPackMetadata initWithVersion:stickers:] */

void FUN_10b78abd8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78abf8; end: 10b78ac7f; +[SOJUMegaStickerPackMetadata registerMessageFields:] */

void FUN_10b78abf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b78ac80();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e10a0);
  FUN_10b78ac80();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78ac80; end: 10b78ac93;  */

void FUN_10b78ac80(void)

{
  return;
}



/* Entry: 10b78ac94; end: 10b78acb7; -[SOJUMegaStickerPackStickerMetadata initWithPackId:stickerId:stickerType:capabilities:isAnimated:] */

void FUN_10b78ac94(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78acb8; end: 10b78adab; +[SOJUMegaStickerPackStickerMetadata registerMessageFields:] */

void FUN_10b78acb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_packId_112619c98;
  _objc_retain(param_3);
  FUN_10b78adac(param_3,param_2,puVar1,0,1,6);
  func_0x00010b78adb8();
  FUN_10b78adac();
  func_0x00010b78adb8();
  func_0x00010bf06b60();
  FUN_10b78adac(param_3,param_2,PTR_s_capabilities_1125a9820,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xf932ffd8b36b84);
  func_0x00010b78adb8();
  FUN_10b78adac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78adac; end: 10b78adc7;  */

void FUN_10b78adac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78adc8; end: 10b78ade7; -[SOJUMessage initWithType:idValue:appEngineTarget:] */

void FUN_10b78adc8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ade8; end: 10b78ae8b; +[SOJUMessage registerMessageFields:] */

void FUN_10b78ade8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  FUN_10b78ae8c(param_3,param_2,PTR_s_idValue_1125d7158,
                &PTR____CFConstantStringClassReference_110dbf6f8,2);
  FUN_10b78ae8c(param_3,param_2,PTR_s_appEngineTarget_112545168,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78ae8c; end: 10b78ae9b;  */

void FUN_10b78ae8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78ae9c; end: 10b78af0b; -[SOJUMessageBody initWithMedia:medias:sticker:snapchatter:type:typeVersion:text:attributes:mediaCardAttributes:storyTitle:storyShare:obfuscation:snapMetadata:khaleesiShare:nycShare:searchShareStorySnap:searchShareStory:mediaSave:replyMedias:messagePallet:sendStartTimestamp:isScreenRecording:messageParcel:screenCaptureSource:speedwayStoryV2Source:snapProStoryReplyInfo:] */

void FUN_10b78ae9c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78af0c; end: 10b78b213; +[SOJUMessageBody registerMessageFields:] */

void FUN_10b78af0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0eb8;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b78b254();
  func_0x00010b78b288();
  _objc_opt_class(PTR_PTR_1126e0eb8);
  func_0x00010b78b26c();
  _objc_opt_class(PTR_PTR_1126e0ac8);
  func_0x00010b78b254();
  func_0x00010b78b288();
  _objc_opt_class(PTR_PTR_1126e10a8);
  func_0x00010b78b254();
  func_0x00010b78b288();
  func_0x00010b78b2bc();
  func_0x00010b78b2b0();
  func_0x00010b78b2a0();
  func_0x00010b78b294();
  func_0x00010b78b2bc();
  func_0x00010b78b294();
  _objc_opt_class(PTR_PTR_1126e0998);
  func_0x00010b78b26c();
  _objc_opt_class(PTR_PTR_1126e09a0);
  func_0x00010b78b238();
  func_0x00010b78b2a0();
  func_0x00010b78b294();
  _objc_opt_class(PTR_PTR_1126e10b0);
  func_0x00010b78b214();
  func_0x00010b78b2bc();
  func_0x00010b78b294();
  _objc_opt_class(PTR_PTR_1126e0eb0);
  func_0x00010b78b214();
  _objc_opt_class(PTR_PTR_1126e10b8);
  func_0x00010b78b214();
  _objc_opt_class(PTR_PTR_1126e10c0);
  func_0x00010b78b214();
  _objc_opt_class(PTR_PTR_1126e10c8);
  func_0x00010b78b214();
  _objc_opt_class(PTR_PTR_1126e10d0);
  func_0x00010b78b214();
  _objc_opt_class(PTR_PTR_1126e1098);
  func_0x00010b78b214();
  _objc_opt_class(PTR_PTR_1126e0eb8);
  func_0x00010b78b238();
  _objc_opt_class(PTR_PTR_1126e10d8);
  func_0x00010b78b238();
  func_0x00010b78b2a0();
  func_0x00010b78b294();
  func_0x00010b78b2a0();
  func_0x00010b78b294();
  _objc_opt_class(PTR_PTR_1126e10d8);
  func_0x00010b78b214();
  func_0x00010b78b2a0();
  func_0x00010b78b2b0();
  func_0x00010b78b2a0();
  func_0x00010b78b2b0();
  _objc_opt_class(PTR_PTR_1126e10e0);
  func_0x00010b78b214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78b214; end: 10b78b2cb;  */

void FUN_10b78b214(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78b2cc; end: 10b78b2d7; +[SOJUMessageBodyBuilder messageClass] */

void FUN_10b78b2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0a80);
  return;
}



/* Entry: 10b78b2d8; end: 10b78b2db; +[SOJUMessageBodyBuilder withJUMessageBody:] */

void FUN_10b78b2d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78b2dc; end: 10b78b72f;  */

long FUN_10b78b2dc(undefined8 param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbf1d8;
  func_0x00010b78bb80();
  if (ppuVar1 == (undefined **)0x0) {
    lVar2 = 0x36452d;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db9458;
    func_0x00010b78bb80();
    if (ppuVar1 == (undefined **)0x0) {
      lVar2 = 0x62f6fe4;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e11c38;
      func_0x00010b78bb80();
      if (ppuVar1 == (undefined **)0x0) {
        lVar2 = -0x18d27a9a;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ecc358;
        func_0x00010b78bb80();
        if (ppuVar1 == (undefined **)0x0) {
          lVar2 = 0x51eb515;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ebb4f8;
          func_0x00010b78bb80();
          if (ppuVar1 == (undefined **)0x0) {
            lVar2 = 0x1435b272;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e11c98;
            func_0x00010b78bb80();
            if (ppuVar1 == (undefined **)0x0) {
              lVar2 = 0x699fe14b;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110e11c78;
              func_0x00010b78bb80();
              if (ppuVar1 == (undefined **)0x0) {
                lVar2 = -0x5327f83a;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7f8d8;
                func_0x00010b78bb80();
                if (ppuVar1 == (undefined **)0x0) {
                  lVar2 = 0x5161c02a;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e12f98;
                  func_0x00010b78bb80();
                  if (ppuVar1 == (undefined **)0x0) {
                    lVar2 = -0x36a5dce0;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f8f8;
                    func_0x00010b78bb80();
                    if (ppuVar1 == (undefined **)0x0) {
                      lVar2 = -0x6fa10405;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110e11bf8;
                      func_0x00010b78bb80();
                      if (ppuVar1 == (undefined **)0x0) {
                        lVar2 = -0x70aaf6c3;
                      }
                      else {
                        lVar2 = -0x47407b42;
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7f918;
                        func_0x00010b78bb80();
                        if (ppuVar1 != (undefined **)0x0) {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ebba78;
                          func_0x00010b78bb80();
                          if (ppuVar1 != (undefined **)0x0) {
                            lVar2 = -0x35b0b749;
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f7f938;
                            func_0x00010b78bb80();
                            if (ppuVar1 == (undefined **)0x0) goto LAB_10b78b718;
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e9c118;
                            func_0x00010b78bb80();
                            if (ppuVar1 == (undefined **)0x0) {
                              lVar2 = 0x5c56c2bb;
                              goto LAB_10b78b718;
                            }
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ebba58;
                            func_0x00010b78bb80();
                            if (ppuVar1 == (undefined **)0x0) {
                              lVar2 = -0x607116ca;
                              goto LAB_10b78b718;
                            }
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e9c138;
                            func_0x00010b78bb80();
                            if (ppuVar1 == (undefined **)0x0) {
                              lVar2 = -0x4da15682;
                              goto LAB_10b78b718;
                            }
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f7f958;
                            func_0x00010b78bb80();
                            if (ppuVar1 != (undefined **)0x0) {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ebba98;
                              func_0x00010b78bb80();
                              if (ppuVar1 == (undefined **)0x0) {
                                lVar2 = -0x35b0b747;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7f978;
                                func_0x00010b78bb80();
                                if (ppuVar1 == (undefined **)0x0) {
                                  lVar2 = -0xa6fa8c2;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ebb478;
                                  func_0x00010b78bb80();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    lVar2 = -0x77e614e3;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f998;
                                    func_0x00010b78bb80();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      lVar2 = -0x4aa8db9f;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7f9b8;
                                      func_0x00010b78bb80();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        lVar2 = -0x382c18e6;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110e67b78;
                                        func_0x00010b78bb80();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          lVar2 = -0x36969feb;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110e15e38
                                          ;
                                          func_0x00010b78bb80();
                                          if (ppuVar1 == (undefined **)0x0) {
                                            lVar2 = -0x59351941;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ebb7b8;
                                            func_0x00010b78bb80();
                                            if (ppuVar1 == (undefined **)0x0) {
                                              lVar2 = -0xa81f96f;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbddd8;
                                              func_0x00010b78bb80();
                                              if (ppuVar1 == (undefined **)0x0) {
                                                lVar2 = 0x35efca;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7f9d8;
                                                func_0x00010b78bb80();
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  lVar2 = -0x13166e62;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ebb3d8;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = -0x137f7b28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ebb438;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = -0x15a94915;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ebb418;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = -0x32496f82;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dfc938;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = -0x511d273d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ebb798;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = 0x739f58f8;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7f9f8;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = 0x35f59ed8;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7fa18;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = 0x10f375fd;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e81738;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = 0x35f83741;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ebb778;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = 0x31150b46;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e9c158;
                                                  func_0x00010b78bb80();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    lVar2 = -0x6bbfee6c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e9c178;
                                                  func_0x00010b78bb80();
                                                  lVar2 = 0x67cc7f96;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    lVar2 = 0;
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
                              }
                              goto LAB_10b78b718;
                            }
                          }
                          lVar2 = lVar2 + 1;
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
    }
  }
LAB_10b78b718:
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10b78b730; end: 10b78bb87;  */

undefined ** FUN_10b78b730(long param_1)

{
  if (param_1 == -0x77e614e3) {
    return &PTR____CFConstantStringClassReference_110ebb478;
  }
  if (param_1 == -0x70aaf6c3) {
    return &PTR____CFConstantStringClassReference_110e11bf8;
  }
  if (param_1 == -0x6fa10405) {
    return &PTR____CFConstantStringClassReference_110f7f8f8;
  }
  if (param_1 == -0x6bbfee6c) {
    return &PTR____CFConstantStringClassReference_110e9c158;
  }
  if (param_1 == -0x607116ca) {
    return &PTR____CFConstantStringClassReference_110ebba58;
  }
  if (param_1 == -0x59351941) {
    return &PTR____CFConstantStringClassReference_110e15e38;
  }
  if (param_1 == -0x5327f83a) {
    return &PTR____CFConstantStringClassReference_110e11c78;
  }
  if (param_1 == -0x511d273d) {
    return &PTR____CFConstantStringClassReference_110dfc938;
  }
  if (param_1 == -0x4da15682) {
    return &PTR____CFConstantStringClassReference_110e9c138;
  }
  if (param_1 == -0x4aa8db9f) {
    return &PTR____CFConstantStringClassReference_110f7f998;
  }
  if (param_1 == -0x47407b42) {
    return &PTR____CFConstantStringClassReference_110f7f918;
  }
  if (param_1 == -0x47407b41) {
    return &PTR____CFConstantStringClassReference_110ebba78;
  }
  if (param_1 == -0x382c18e6) {
    return &PTR____CFConstantStringClassReference_110f7f9b8;
  }
  if (param_1 == -0x36a5dce0) {
    return &PTR____CFConstantStringClassReference_110e12f98;
  }
  if (param_1 == -0x36969feb) {
    return &PTR____CFConstantStringClassReference_110e67b78;
  }
  if (param_1 == -0x35b0b749) {
    return &PTR____CFConstantStringClassReference_110f7f938;
  }
  if (param_1 == -0x35b0b748) {
    return &PTR____CFConstantStringClassReference_110f7f958;
  }
  if (param_1 == -0x35b0b747) {
    return &PTR____CFConstantStringClassReference_110ebba98;
  }
  if (param_1 == -0x32496f82) {
    return &PTR____CFConstantStringClassReference_110ebb418;
  }
  if (param_1 == -0x18d27a9a) {
    return &PTR____CFConstantStringClassReference_110e11c38;
  }
  if (param_1 == -0x15a94915) {
    return &PTR____CFConstantStringClassReference_110ebb438;
  }
  if (param_1 == -0x137f7b28) {
    return &PTR____CFConstantStringClassReference_110ebb3d8;
  }
  if (param_1 == -0x13166e62) {
    return &PTR____CFConstantStringClassReference_110f7f9d8;
  }
  if (param_1 == -0xa81f96f) {
    return &PTR____CFConstantStringClassReference_110ebb7b8;
  }
  if (param_1 == -0xa6fa8c2) {
    return &PTR____CFConstantStringClassReference_110f7f978;
  }
  if (param_1 == 0x35efca) {
    return &PTR____CFConstantStringClassReference_110dbddd8;
  }
  if (param_1 == 0x36452d) {
    return &PTR____CFConstantStringClassReference_110dbf1d8;
  }
  if (param_1 == 0x51eb515) {
    return &PTR____CFConstantStringClassReference_110ecc358;
  }
  if (param_1 == 0x739f58f8) {
    return &PTR____CFConstantStringClassReference_110ebb798;
  }
  if (param_1 == 0x10f375fd) {
    return &PTR____CFConstantStringClassReference_110f7fa18;
  }
  if (param_1 == 0x1435b272) {
    return &PTR____CFConstantStringClassReference_110ebb4f8;
  }
  if (param_1 != 0x31150b46) {
    if (param_1 == 0x35f59ed8) {
      return &PTR____CFConstantStringClassReference_110f7f9f8;
    }
    if (param_1 == 0x35f83741) {
      return &PTR____CFConstantStringClassReference_110e81738;
    }
    if (param_1 == 0x5161c02a) {
      return &PTR____CFConstantStringClassReference_110f7f8d8;
    }
    if (param_1 != 0x5c56c2bb) {
      if (param_1 == 0x67cc7f96) {
        return &PTR____CFConstantStringClassReference_110e9c178;
      }
      if (param_1 != 0x699fe14b) {
        if (param_1 == 0x62f6fe4) {
          return &PTR____CFConstantStringClassReference_110db9458;
        }
        return &PTR____CFConstantStringClassReference_110de39b8;
      }
      return &PTR____CFConstantStringClassReference_110e11c98;
    }
    return &PTR____CFConstantStringClassReference_110e9c118;
  }
  return &PTR____CFConstantStringClassReference_110ebb778;
}



/* Entry: 10b78bb88; end: 10b78bbc3; -[SOJUMessageEraseMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:chatMessageId:chatMessageSeqNum:chatMessageSenderId:] */

void FUN_10b78bb88(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78bbc4; end: 10b78bd73; +[SOJUMessageEraseMessage registerMessageFields:] */

void FUN_10b78bbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a78;
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b78bd94();
  func_0x00010b78bd74();
  func_0x00010b78bd94();
  func_0x00010b78bd74();
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b78bd80();
  func_0x00010b78bd74();
  func_0x00010b78bd80();
  func_0x00010b78bd74();
  func_0x00010b78bd94();
  func_0x00010b78bd74();
  func_0x00010b78bd94();
  func_0x00010bf06b60();
  func_0x00010b78bd74(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b78bd80();
  func_0x00010b78bd74();
  func_0x00010b78bd80();
  func_0x00010b78bd74();
  func_0x00010b78bd80();
  func_0x00010b78bd74();
  func_0x00010b78bd80();
  func_0x00010b78bd74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78bd74; end: 10b78bd9f;  */

void FUN_10b78bd74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78bda0; end: 10b78bdcb; -[SOJUMessageParcel initWithIdValue:type:contents:payloadDeprecated:media:tag:tagVersion:] */

void FUN_10b78bda0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78bdcc; end: 10b78bef7; +[SOJUMessageParcel registerMessageFields:] */

void FUN_10b78bdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b78bef8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b78bf08();
  FUN_10b78bef8();
  func_0x00010b78bf08();
  FUN_10b78bef8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_payloadDeprecated_112546dc0,
                      &PTR____CFConstantStringClassReference_110df8598,2,7,0,0,0,0);
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0xf6cf86a57585af);
  puVar1 = PTR_s_media_11260ea10;
  puVar2 = PTR_PTR_1126e10e8;
  _objc_opt_class(PTR_PTR_1126e10e8);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010b78bf08();
  FUN_10b78bef8();
  func_0x00010b78bf08();
  FUN_10b78bef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78bef8; end: 10b78bf17;  */

void FUN_10b78bef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78bf18; end: 10b78bf23; +[SOJUMessageParcelBuilder messageClass] */

void FUN_10b78bf18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10d8);
  return;
}



/* Entry: 10b78bf24; end: 10b78bf27; +[SOJUMessageParcelBuilder withJUMessageParcel:] */

void FUN_10b78bf24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78bf28; end: 10b78bf63; -[SOJUMessagePreservationMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:chatMessageId:preserved:chatMessageSeqNum:] */

void FUN_10b78bf28(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78bf64; end: 10b78c12b; +[SOJUMessagePreservationMessage registerMessageFields:] */

void FUN_10b78bf64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a78;
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010b78c12c(param_3,param_2,PTR_s_knownChatSequenceNumbers_112545160,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  func_0x00010b78c12c(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010b78c138();
  func_0x00010b78c12c();
  func_0x00010b78c138();
  func_0x00010b78c12c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78c12c; end: 10b78c147;  */

void FUN_10b78c12c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78c148; end: 10b78c18b; -[SOJUMessageStateMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:chatMessageId:state:version:chatMessageSenderId:chatMessageSeqNum:] */

void FUN_10b78c148(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78c18c; end: 10b78c35f; +[SOJUMessageStateMessage registerMessageFields:] */

void FUN_10b78c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a78;
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b78c380();
  func_0x00010b78c360();
  func_0x00010b78c360(param_3,param_2,PTR_s_knownChatSequenceNumbers_112545160,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b78c36c();
  func_0x00010b78c360();
  func_0x00010b78c36c();
  func_0x00010b78c360();
  func_0x00010b78c380();
  func_0x00010b78c360();
  func_0x00010b78c390();
  func_0x00010b78c360(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b78c36c();
  func_0x00010b78c360();
  func_0x00010b78c36c();
  func_0x00010b78c360();
  func_0x00010b78c390();
  func_0x00010b78c380();
  func_0x00010b78c360();
  func_0x00010b78c36c();
  func_0x00010b78c360();
  func_0x00010b78c36c();
  func_0x00010b78c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78c360; end: 10b78c3a7;  */

void FUN_10b78c360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78c3a8; end: 10b78c413;  */

undefined8 FUN_10b78c3a8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea0078;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ea0078,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4b07667;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fa38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7fa38,param_2,param_1);
    uVar2 = 0x1a3c236e;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78c414; end: 10b78c44f;  */

undefined ** FUN_10b78c414(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fa38;
  if (param_1 != 0x1a3c236e) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea0078;
  if (param_1 != 0x4b07667) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78c450; end: 10b78c767;  */

undefined8 FUN_10b78c450(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fa58;
  func_0x00010b78ca68();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x154d5ba;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfe178;
    func_0x00010b78ca68();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x38b478ea;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7fa78;
      func_0x00010b78ca68();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x1f9d589c;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7fa98;
        func_0x00010b78ca68();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffff8ae9f0ce;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ee5158;
          func_0x00010b78ca68();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffb3e79cfb;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7fab8;
            func_0x00010b78ca68();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffb6167040;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ec22b8;
              func_0x00010b78ca68();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffff9c1897dc;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7fad8;
                func_0x00010b78ca68();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffff8d328a94;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7faf8;
                  func_0x00010b78ca68();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xffffffffb79dc659;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fb18;
                    func_0x00010b78ca68();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xfffffffff95ad7cf;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7fb38;
                      func_0x00010b78ca68();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xfffffffffaec6220;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ecc3f8;
                        func_0x00010b78ca68();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x348172;
                        }
                        else {
                          uVar2 = 0xffffffffb61d446e;
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7fb58;
                          func_0x00010b78ca68();
                          if (ppuVar1 != (undefined **)0x0) {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110daeeb8;
                            func_0x00010b78ca68();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x5c4d208;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f7fb78;
                              func_0x00010b78ca68();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x1afc71a1;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7fb98;
                                func_0x00010b78ca68();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x141919b5;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fbb8;
                                  func_0x00010b78ca68();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xfffffffffb1033f6;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fbd8;
                                    func_0x00010b78ca68();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x76ab3085;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7fbf8;
                                      func_0x00010b78ca68();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x2d1d9120;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7fc18;
                                        func_0x00010b78ca68();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x75a0c368;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7fc38
                                          ;
                                          func_0x00010b78ca68();
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x648abdd4;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7fc58;
                                            func_0x00010b78ca68();
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x74f30f65;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7fc78;
                                              func_0x00010b78ca68();
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0xffffffff8f557a86;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7fc98;
                                                func_0x00010b78ca68();
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x64d5843b;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e3cd18;
                                                  func_0x00010b78ca68();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x237a88eb;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7fcb8;
                                                  func_0x00010b78ca68();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7a584864;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7fcd8;
                                                  func_0x00010b78ca68();
                                                  uVar2 = 0xffffffffb6d7946e;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0;
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
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78c768; end: 10b78ca6f;  */

undefined ** FUN_10b78c768(long param_1)

{
  if (param_1 == -0x75160f32) {
    return &PTR____CFConstantStringClassReference_110f7fa98;
  }
  if (param_1 == -0x72cd756c) {
    return &PTR____CFConstantStringClassReference_110f7fad8;
  }
  if (param_1 == -0x70aa857a) {
    return &PTR____CFConstantStringClassReference_110f7fc78;
  }
  if (param_1 == -0x63e76824) {
    return &PTR____CFConstantStringClassReference_110ec22b8;
  }
  if (param_1 == -0x4c186305) {
    return &PTR____CFConstantStringClassReference_110ee5158;
  }
  if (param_1 == -0x49e98fc0) {
    return &PTR____CFConstantStringClassReference_110f7fab8;
  }
  if (param_1 == -0x49e2bb92) {
    return &PTR____CFConstantStringClassReference_110f7fb58;
  }
  if (param_1 == -0x49286b92) {
    return &PTR____CFConstantStringClassReference_110f7fcd8;
  }
  if (param_1 == -0x486239a7) {
    return &PTR____CFConstantStringClassReference_110f7faf8;
  }
  if (param_1 == -0x6a52831) {
    return &PTR____CFConstantStringClassReference_110f7fb18;
  }
  if (param_1 == -0x5139de0) {
    return &PTR____CFConstantStringClassReference_110f7fb38;
  }
  if (param_1 == -0x4efcc0a) {
    return &PTR____CFConstantStringClassReference_110f7fbb8;
  }
  if (param_1 == 0x348172) {
    return &PTR____CFConstantStringClassReference_110ecc3f8;
  }
  if (param_1 == 0x154d5ba) {
    return &PTR____CFConstantStringClassReference_110f7fa58;
  }
  if (param_1 == 0x5c4d208) {
    return &PTR____CFConstantStringClassReference_110daeeb8;
  }
  if (param_1 != 0x141919b5) {
    if (param_1 == 0x1afc71a1) {
      return &PTR____CFConstantStringClassReference_110f7fb78;
    }
    if (param_1 == 0x1f9d589c) {
      return &PTR____CFConstantStringClassReference_110f7fa78;
    }
    if (param_1 == 0x237a88eb) {
      return &PTR____CFConstantStringClassReference_110e3cd18;
    }
    if (param_1 == 0x2d1d9120) {
      return &PTR____CFConstantStringClassReference_110f7fbf8;
    }
    if (param_1 == 0x7a584864) {
      return &PTR____CFConstantStringClassReference_110f7fcb8;
    }
    if (param_1 == 0x648abdd4) {
      return &PTR____CFConstantStringClassReference_110f7fc38;
    }
    if (param_1 == 0x64d5843b) {
      return &PTR____CFConstantStringClassReference_110f7fc98;
    }
    if (param_1 != 0x74f30f65) {
      if (param_1 == 0x75a0c368) {
        return &PTR____CFConstantStringClassReference_110f7fc18;
      }
      if (param_1 != 0x76ab3085) {
        if (param_1 == 0x38b478ea) {
          return &PTR____CFConstantStringClassReference_110dfe178;
        }
        return &PTR____CFConstantStringClassReference_110de39b8;
      }
      return &PTR____CFConstantStringClassReference_110f7fbd8;
    }
    return &PTR____CFConstantStringClassReference_110f7fc58;
  }
  return &PTR____CFConstantStringClassReference_110f7fb98;
}



/* Entry: 10b78ca70; end: 10b78ca93; -[SOJUMessagingChatMediaInput initWithMediaId:type:uploadUrl:key:iv:] */

void FUN_10b78ca70(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ca94; end: 10b78cb33; +[SOJUMessagingChatMediaInput registerMessageFields:] */

void FUN_10b78ca94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mediaId_11260ee78;
  _objc_retain(param_3);
  FUN_10b78cb34(param_3,param_2,puVar1,0,1);
  func_0x00010b78cb44();
  FUN_10b78cb34();
  func_0x00010b78cb44();
  FUN_10b78cb34();
  func_0x00010b78cb44();
  FUN_10b78cb34();
  func_0x00010b78cb44();
  FUN_10b78cb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78cb34; end: 10b78cb53;  */

void FUN_10b78cb34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78cb54; end: 10b78cb5f; +[SOJUMessagingChatMediaInputBuilder messageClass] */

void FUN_10b78cb54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10f0);
  return;
}



/* Entry: 10b78cb60; end: 10b78cb63; +[SOJUMessagingChatMediaInputBuilder withJUMessagingChatMediaInput:] */

void FUN_10b78cb60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78cb64; end: 10b78cb93; -[SOJUMessagingConversationStoryElementRequest initWithTimestamp:reqToken:username:snapchatUserId:storyId:senderUsername:sequenceNumber:conversationId:] */

void FUN_10b78cb64(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78cb94; end: 10b78cc63; +[SOJUMessagingConversationStoryElementRequest registerMessageFields:] */

void FUN_10b78cb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  func_0x00010b78cc84(param_3,param_2,puVar1,0,0);
  func_0x00010b78cc64();
  func_0x00010b78cc84(param_3,param_2,PTR_s_username_112682b30,0,0);
  func_0x00010b78cc64();
  func_0x00010b78cc64();
  func_0x00010b78cc64();
  func_0x00010bf06b60(param_3,param_2,PTR_s_sequenceNumber_1126353c0,0,1,1,0,0,0,0);
  func_0x00010b78cc64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78cc64; end: 10b78cc93;  */

void FUN_10b78cc64(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78cc94; end: 10b78cc9f; +[SOJUMessagingConversationStoryElementRequestBuilder messageClass] */

void FUN_10b78cc94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10f8);
  return;
}



/* Entry: 10b78cca0; end: 10b78cca3; +[SOJUMessagingConversationStoryElementRequestBuilder withJUMessagingConversationStoryElementRequest:] */

void FUN_10b78cca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78cca4; end: 10b78ccc7; -[SOJUMessagingConversationStoryElementResponse initWithStory:status:publisherData:type:] */

void FUN_10b78cca4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ccc8; end: 10b78cd83; +[SOJUMessagingConversationStoryElementResponse registerMessageFields:] */

void FUN_10b78ccc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf0d0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b78cd9c();
  func_0x00010b78cdb4();
  func_0x00010b78cd84();
  _objc_opt_class(PTR_PTR_1126cf0c8);
  func_0x00010b78cd9c();
  func_0x00010b78cdb4();
  func_0x00010b78cd84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78cd84; end: 10b78cdbf;  */

void FUN_10b78cd84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78cdc0; end: 10b78cddf; -[SOJUMessagingGatewayInfo initWithGatewayAuthToken:gatewayServer:] */

void FUN_10b78cdc0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78cde0; end: 10b78ce7b; +[SOJUMessagingGatewayInfo registerMessageFields:] */

void FUN_10b78cde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a38;
  puVar1 = PTR_s_gatewayAuthToken_112546e18;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_gatewayServer_112546e20,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78ce7c; end: 10b78ce9b; -[SOJUMessagingParcelMedia initWithIdValue:version:] */

void FUN_10b78ce7c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ce9c; end: 10b78cf0b; +[SOJUMessagingParcelMedia registerMessageFields:] */

void FUN_10b78ce9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b78cf0c(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  FUN_10b78cf0c(param_3,param_2,PTR_s_version_112683d20,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78cf0c; end: 10b78cf1b;  */

void FUN_10b78cf0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78cf1c; end: 10b78cf27; +[SOJUMessagingParcelMediaBuilder messageClass] */

void FUN_10b78cf1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10e8);
  return;
}



/* Entry: 10b78cf28; end: 10b78cf2b; +[SOJUMessagingParcelMediaBuilder withJUMessagingParcelMedia:] */

void FUN_10b78cf28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78cf2c; end: 10b78cf67; -[SOJUMessagingStorySharePublisherData initWithUserId:username:displayName:thumbnailUrl:profileDescription:live:publishTimestamp:bitmojiAvatarId:bitmojiSelfieId:bitmojiSnapcodeSelfieId:isUserPopular:] */

void FUN_10b78cf2c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78cf68; end: 10b78d04b; +[SOJUMessagingStorySharePublisherData registerMessageFields:] */

void FUN_10b78cf68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  func_0x00010b78d06c(param_3,param_2,puVar1,0,0);
  func_0x00010b78d09c();
  func_0x00010b78d06c();
  func_0x00010b78d04c();
  func_0x00010b78d04c();
  func_0x00010b78d04c();
  func_0x00010b78d09c();
  func_0x00010b78d090();
  func_0x00010b78d07c();
  func_0x00010b78d090();
  func_0x00010b78d04c();
  func_0x00010b78d04c();
  func_0x00010b78d04c();
  func_0x00010b78d07c();
  func_0x00010b78d090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78d04c; end: 10b78d0af;  */

void FUN_10b78d04c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78d0b0; end: 10b78d12f;  */

undefined8 FUN_10b78d0b0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fcf8;
  func_0x00010b78d184();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4da97dc;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fd18;
    func_0x00010b78d184();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffbf2f4718;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7fd38;
      func_0x00010b78d184();
      uVar2 = 0x2b446133;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78d130; end: 10b78d18b;  */

undefined ** FUN_10b78d130(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x40d0b8e8) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7fd18;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fcf8;
  if (param_1 != 0x4da97dc) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7fd38;
  if (param_1 != 0x2b446133) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78d18c; end: 10b78d3cb;  */

undefined8 FUN_10b78d18c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fd58;
  func_0x00010b78d5ec();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x37b0e405;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fd78;
    func_0x00010b78d5ec();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x43df6d10;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7fd98;
      func_0x00010b78d5ec();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffb6cbdc00;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7fdb8;
        func_0x00010b78d5ec();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffd0189cd9;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7fdd8;
          func_0x00010b78d5ec();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x56d200a8;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7fdf8;
            func_0x00010b78d5ec();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffc68d8caa;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7fe18;
              func_0x00010b78d5ec();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x6dbd505e;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7fe38;
                func_0x00010b78d5ec();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffff881dfaf2;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7fe58;
                  func_0x00010b78d5ec();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xffffffffdefe323d;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fe78;
                    func_0x00010b78d5ec();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xffffffffa7acacd1;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7fe98;
                      func_0x00010b78d5ec();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x7f9d83b0;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7feb8;
                        func_0x00010b78d5ec();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x16b8c454;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7fed8;
                          func_0x00010b78d5ec();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xffffffffe30f8929;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f7fef8;
                            func_0x00010b78d5ec();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x24546afd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f7ff18;
                              func_0x00010b78d5ec();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xffffffffc98ba742;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7ff38;
                                func_0x00010b78d5ec();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xfffffffff9a65a1e;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ff58;
                                  func_0x00010b78d5ec();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xffffffffc0944b78;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ff78;
                                    func_0x00010b78d5ec();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xfffffffff2b9e017;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7ff98;
                                      func_0x00010b78d5ec();
                                      uVar2 = 0xffffffffdcba750c;
                                      if (ppuVar1 != (undefined **)0x0) {
                                        uVar2 = 0;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78d3cc; end: 10b78d5f3;  */

undefined ** FUN_10b78d3cc(long param_1)

{
  if (param_1 == -0x77e2050e) {
    return &PTR____CFConstantStringClassReference_110f7fe38;
  }
  if (param_1 == -0x5853532f) {
    return &PTR____CFConstantStringClassReference_110f7fe78;
  }
  if (param_1 == -0x49342400) {
    return &PTR____CFConstantStringClassReference_110f7fd98;
  }
  if (param_1 == -0x3f6bb488) {
    return &PTR____CFConstantStringClassReference_110f7ff58;
  }
  if (param_1 == -0x39727356) {
    return &PTR____CFConstantStringClassReference_110f7fdf8;
  }
  if (param_1 == -0x367458be) {
    return &PTR____CFConstantStringClassReference_110f7ff18;
  }
  if (param_1 == -0x2fe76327) {
    return &PTR____CFConstantStringClassReference_110f7fdb8;
  }
  if (param_1 == -0x23458af4) {
    return &PTR____CFConstantStringClassReference_110f7ff98;
  }
  if (param_1 == -0x2101cdc3) {
    return &PTR____CFConstantStringClassReference_110f7fe58;
  }
  if (param_1 == -0x1cf076d7) {
    return &PTR____CFConstantStringClassReference_110f7fed8;
  }
  if (param_1 == -0xd461fe9) {
    return &PTR____CFConstantStringClassReference_110f7ff78;
  }
  if (param_1 == -0x659a5e2) {
    return &PTR____CFConstantStringClassReference_110f7ff38;
  }
  if (param_1 == 0x16b8c454) {
    return &PTR____CFConstantStringClassReference_110f7feb8;
  }
  if (param_1 == 0x24546afd) {
    return &PTR____CFConstantStringClassReference_110f7fef8;
  }
  if (param_1 == 0x37b0e405) {
    return &PTR____CFConstantStringClassReference_110f7fd58;
  }
  if (param_1 != 0x7f9d83b0) {
    if (param_1 == 0x56d200a8) {
      return &PTR____CFConstantStringClassReference_110f7fdd8;
    }
    if (param_1 != 0x6dbd505e) {
      if (param_1 == 0x43df6d10) {
        return &PTR____CFConstantStringClassReference_110f7fd78;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110f7fe18;
  }
  return &PTR____CFConstantStringClassReference_110f7fe98;
}



/* Entry: 10b78d5f4; end: 10b78d64f; -[SOJUMischiefUpdateMessage initWithBody:chatMessageId:savedState:preservations:lastReleasedSeqNum:header:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:mischiefUpdateMessageType:originParticipantId:participantsIds:sojuNewMischiefName:mischiefMetadataResult:] */

void FUN_10b78d5f4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78d650; end: 10b78d903; +[SOJUMischiefUpdateMessage registerMessageFields:] */

void FUN_10b78d650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0a80;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b78d944();
  func_0x00010b78d93c();
  func_0x00010b78d92c();
  func_0x00010b78d920();
  func_0x00010b78d904();
  func_0x00010b78d968();
  func_0x00010b78d95c();
  func_0x00010b78d920();
  func_0x00010b78d968();
  func_0x00010b78d904();
  func_0x00010b78d968();
  _objc_opt_class(PTR_PTR_1126e0a78);
  func_0x00010b78d944();
  func_0x00010b78d93c();
  func_0x00010b78d95c();
  func_0x00010b78d920();
  func_0x00010b78d904();
  func_0x00010b78d968();
  func_0x00010b78d92c();
  func_0x00010b78d920();
  func_0x00010b78d92c();
  func_0x00010b78d920();
  func_0x00010b78d95c();
  func_0x00010b78d920();
  func_0x00010b78d95c();
  func_0x00010b78d970();
  func_0x00010b78d920(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b78d92c();
  func_0x00010b78d920();
  func_0x00010b78d92c();
  func_0x00010b78d970();
  func_0x00010b78d92c();
  func_0x00010b78d920();
  func_0x00010b78d904();
  func_0x00010b78d968();
  func_0x00010b78d920(param_3,param_2,PTR_s_sojuNewMischiefName_112546e68,
                      &PTR____CFConstantStringClassReference_110f7ffb8,2,6);
  _objc_opt_class(PTR_PTR_1126e0fd0);
  func_0x00010b78d944();
  func_0x00010b78d93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78d904; end: 10b78d97b;  */

void FUN_10b78d904(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78d97c; end: 10b78daa3;  */

undefined8 FUN_10b78d97c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ffd8;
  func_0x00010b78dbac();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffa0ada9f5;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7fff8;
    func_0x00010b78dbac();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x2532c1b3;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80018;
      func_0x00010b78dbac();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xfffffffff17c0931;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f80038;
        func_0x00010b78dbac();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x15fd1fd7;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f80058;
          func_0x00010b78dbac();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x3243bb92;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f80078;
            func_0x00010b78dbac();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffff9b9c9724;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f80098;
              func_0x00010b78dbac();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x5f0ce27;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f800b8;
                func_0x00010b78dbac();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x6621fcf9;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f800d8;
                  func_0x00010b78dbac();
                  uVar2 = 0xffffffffe386829d;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78daa4; end: 10b78dbb3;  */

undefined ** FUN_10b78daa4(long param_1)

{
  if (param_1 == -0x646368dc) {
    return &PTR____CFConstantStringClassReference_110f80078;
  }
  if (param_1 == -0x5f52560b) {
    return &PTR____CFConstantStringClassReference_110f7ffd8;
  }
  if (param_1 == -0x1c797d63) {
    return &PTR____CFConstantStringClassReference_110f800d8;
  }
  if (param_1 == -0xe83f6cf) {
    return &PTR____CFConstantStringClassReference_110f80018;
  }
  if (param_1 == 0x5f0ce27) {
    return &PTR____CFConstantStringClassReference_110f80098;
  }
  if (param_1 == 0x15fd1fd7) {
    return &PTR____CFConstantStringClassReference_110f80038;
  }
  if (param_1 == 0x6621fcf9) {
    return &PTR____CFConstantStringClassReference_110f800b8;
  }
  if (param_1 != 0x3243bb92) {
    if (param_1 == 0x2532c1b3) {
      return &PTR____CFConstantStringClassReference_110f7fff8;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f80058;
}



/* Entry: 10b78dbb4; end: 10b78dbd3; -[SOJUMultiSnapMetadata initWithBundleId:segmentIndex:segmentCount:] */

void FUN_10b78dbb4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78dbd4; end: 10b78dc47; +[SOJUMultiSnapMetadata registerMessageFields:] */

void FUN_10b78dbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_bundleId_1125a6c38;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,0,0,0);
  FUN_10b78dc48();
  FUN_10b78dc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78dc48; end: 10b78dc67;  */

void FUN_10b78dc48(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78dc68; end: 10b78dc8b; -[SOJUMyGroupStories initWithGroupId:displayName:stories:hasCustomDescription:searchLookupData:] */

void FUN_10b78dc68(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78dc8c; end: 10b78dd5f; +[SOJUMyGroupStories registerMessageFields:] */

void FUN_10b78dc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x7;
  
  puVar1 = PTR_s_groupId_1125d1470;
  _objc_retain(param_3);
  FUN_10b78dd60(param_3,param_2,puVar1);
  FUN_10b78dd60(param_3,param_2,PTR_s_displayName_1125bf108);
  _objc_opt_class(PTR_PTR_1126e1100);
  func_0x00010b78dd80();
  func_0x00010b78dd78();
  func_0x00010b78dd78(param_3,param_2,PTR_s_hasCustomDescription_112545990,0,1,0,0,in_x7,0,0);
  _objc_opt_class(PTR_PTR_1126e1108);
  func_0x00010b78dd80();
  func_0x00010b78dd78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78dd60; end: 10b78dd97;  */

void FUN_10b78dd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b78dd98; end: 10b78ddbb; -[SOJUMyVerifiedCollabStories initWithUsername:userId:displayName:stories:collabStories:] */

void FUN_10b78dd98(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ddbc; end: 10b78de97; +[SOJUMyVerifiedCollabStories registerMessageFields:] */

void FUN_10b78ddbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b78dea8();
  func_0x00010b78de98();
  func_0x00010b78de98(param_3,param_2,PTR_s_userId_112682320,0,1);
  func_0x00010b78de98(param_3,param_2,PTR_s_displayName_1125bf108,0,1);
  _objc_opt_class(PTR_PTR_1126e0938);
  func_0x00010b78dea8();
  func_0x00010b78deb8();
  _objc_opt_class(PTR_PTR_1126e1110);
  func_0x00010b78dea8();
  func_0x00010b78deb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78de98; end: 10b78dec3;  */

void FUN_10b78de98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78dec4; end: 10b78dee3; -[SOJUNycShare initWithStoryId:mediaType:poiId:] */

void FUN_10b78dec4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78dee4; end: 10b78df53; +[SOJUNycShare registerMessageFields:] */

void FUN_10b78dee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_storyId_112674158;
  _objc_retain(param_3);
  FUN_10b78df54(param_3,param_2,puVar1);
  FUN_10b78df54(param_3,param_2,PTR_s_mediaType_11260f520);
  FUN_10b78df54(param_3,param_2,PTR_s_poiId_11261e4a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


