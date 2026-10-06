/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7943a4; end: 10b7943af; +[SOJUSnapAttachmentBuilder messageClass] */

void FUN_10b7943a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d9158);
  return;
}



/* Entry: 10b7943b0; end: 10b7943b3; +[SOJUSnapAttachmentBuilder withJUSnapAttachment:] */

void FUN_10b7943b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7943b4; end: 10b79441f;  */

undefined8 FUN_10b7943b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80678;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80678,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff8419d893;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f13918;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13918,param_2,param_1);
    uVar2 = 0x76cf65b5;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b794420; end: 10b79445b;  */

undefined ** FUN_10b794420(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f13918;
  if (param_1 != 0x76cf65b5) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80678;
  if (param_1 != -0x7be6276d) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79445c; end: 10b79447b; -[SOJUSnapConnectAttributes initWithSourceAppDisplayName:sourceAppOauthClientId:] */

void FUN_10b79445c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79447c; end: 10b7944d7; +[SOJUSnapConnectAttributes registerMessageFields:] */

void FUN_10b79447c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_sourceAppDisplayName_11266f788;
  _objc_retain(param_3);
  FUN_10b7944d8(param_3,param_2,puVar1);
  FUN_10b7944d8(param_3,param_2,PTR_s_sourceAppOauthClientId_11266f790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7944d8; end: 10b7944ef;  */

void FUN_10b7944d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b7944f0; end: 10b794527; -[SOJUSnapCreatorAttribution initWithCreatorId:creatorType:creatorDisplayName:originalStoryId:originalTimestamp:visibility:logoUrl:creatorUsername:editionId:attachment:] */

void FUN_10b7944f0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b794528; end: 10b7945ff; +[SOJUSnapCreatorAttribution registerMessageFields:] */

void FUN_10b794528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_creatorId_1125b46b8;
  _objc_retain(param_3);
  func_0x00010b794620(param_3,param_2,puVar1,0,1);
  func_0x00010b794630();
  func_0x00010b794644();
  func_0x00010b794600();
  func_0x00010b794600();
  func_0x00010b794630();
  func_0x00010b794644();
  func_0x00010b794650();
  func_0x00010b794644();
  func_0x00010b794600();
  func_0x00010b794600();
  func_0x00010b794600();
  func_0x00010b794650();
  func_0x00010b794620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794600; end: 10b794663;  */

void FUN_10b794600(void)

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



/* Entry: 10b794664; end: 10b7946c7; -[SOJUSnapMetadata initWithIsReply:cameraFrontFacing:orientation:countryCode:filterId:lensId:encGeoData:captionTextDeprecated:snapAttachmentDeprecated:venueId:snapAttachments:isInfiniteDuration:multiSnapMetadata:checksum:contextHint:animatedSnapType:lensMetadata:sendSource:captureDate:unlockablesSnapInfo:contextClientInfo:] */

void FUN_10b794664(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7946c8; end: 10b7948ff; +[SOJUSnapMetadata registerMessageFields:] */

void FUN_10b7946c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010b794970();
  func_0x00010b79495c();
  func_0x00010b794948();
  func_0x00010b79495c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_orientation_112618e58,0,0,6,0,FUN_10b794994,
                      FUN_10b794a30,0);
  func_0x00010b794900();
  func_0x00010b794900();
  func_0x00010b794900();
  func_0x00010b794900();
  func_0x00010b794938(param_3,param_2,PTR_s_captionTextDeprecated_112547438,
                      &PTR____CFConstantStringClassReference_110f80698,2);
  puVar1 = PTR_s_snapAttachmentDeprecated_112547440;
  puVar2 = PTR_PTR_1126d9158;
  _objc_opt_class(PTR_PTR_1126d9158);
  func_0x00010b794968(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f806b8,2,7,
                      puVar2);
  func_0x00010b794900();
  _objc_opt_class(PTR_PTR_1126d9158);
  func_0x00010b794970();
  func_0x00010b794968();
  func_0x00010b794948();
  func_0x00010b79495c();
  _objc_opt_class(PTR_PTR_1126e11e0);
  func_0x00010b794970();
  func_0x00010b794968();
  func_0x00010b794938(param_3,param_2,PTR_s_checksum_1125abc48,0,0);
  func_0x00010b794900();
  func_0x00010b794920();
  func_0x00010bf06b60();
  func_0x00010b794900();
  func_0x00010b794920();
  func_0x00010bf06b60();
  func_0x00010b794948();
  func_0x00010b79495c();
  func_0x00010b794900();
  func_0x00010b794900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794900; end: 10b794983;  */

void FUN_10b794900(void)

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



/* Entry: 10b794984; end: 10b79498f; +[SOJUSnapMetadataBuilder messageClass] */

void FUN_10b794984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0eb0);
  return;
}



/* Entry: 10b794990; end: 10b794993; +[SOJUSnapMetadataBuilder withJUSnapMetadata:] */

void FUN_10b794990(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b794994; end: 10b794a2f;  */

undefined8 FUN_10b794994(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f806d8;
  func_0x00010b794a9c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffcd546541;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f806f8;
    func_0x00010b794a9c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffea4f3615;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80718;
      func_0x00010b794a9c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x2b92333c;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f80738;
        func_0x00010b794a9c();
        uVar2 = 0x470a9567;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b794a30; end: 10b794aa3;  */

undefined ** FUN_10b794a30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x15b0c9eb) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f806f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80718;
  if (param_1 != 0x2b92333c) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80738;
  if (param_1 != 0x470a9567) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f806d8;
  if (param_1 != -0x32ab9abf) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b794aa4; end: 10b794b0f;  */

undefined8 FUN_10b794aa4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x760cb725;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,param_2,param_1);
    uVar2 = 0x8ad415f;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b794b10; end: 10b794b4b;  */

undefined ** FUN_10b794b10(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
  if (param_1 != 0x8ad415f) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df62b8;
  if (param_1 != 0x760cb725) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b794b4c; end: 10b794b73; -[SOJUSnapProInfo initWithUnifiedProfileId:profileTier:profileType:profileBadgeType:defaultLandingProfilePageType:profileLogo:] */

void FUN_10b794b4c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b794b74; end: 10b794c17; +[SOJUSnapProInfo registerMessageFields:] */

void FUN_10b794b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b794c38();
  func_0x00010bf06b60();
  func_0x00010b794c18();
  func_0x00010b794c18();
  func_0x00010b794c18();
  func_0x00010b794c18();
  _objc_opt_class(PTR_PTR_1126e1020);
  func_0x00010b794c38();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794c18; end: 10b794c4f;  */

void FUN_10b794c18(void)

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



/* Entry: 10b794c50; end: 10b794c5b; +[SOJUSnapProInfoBuilder messageClass] */

void FUN_10b794c50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0b40);
  return;
}



/* Entry: 10b794c5c; end: 10b794c5f; +[SOJUSnapProInfoBuilder withJUSnapProInfo:] */

void FUN_10b794c5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b794c60; end: 10b794c7f; -[SOJUSnapProInfoLogo initWithLogoType:logoData:] */

void FUN_10b794c60(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b794c80; end: 10b794cf3; +[SOJUSnapProInfoLogo registerMessageFields:] */

void FUN_10b794c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_logoType_11260aba8;
  _objc_retain(param_3);
  FUN_10b794cf4(param_3,param_2,puVar1,0,1,5,in_x6,in_x7,0,0);
  FUN_10b794cf4(param_3,param_2,PTR_s_logoData_11260ab60,0,1,6,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794cf4; end: 10b794cff;  */

void FUN_10b794cf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b794d00; end: 10b794d0b; +[SOJUSnapProInfoLogoBuilder messageClass] */

void FUN_10b794d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1020);
  return;
}



/* Entry: 10b794d0c; end: 10b794d0f; +[SOJUSnapProInfoLogoBuilder withJUSnapProInfoLogo:] */

void FUN_10b794d0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b794d10; end: 10b794d13; -[SOJUSnapProStoryReplyInfo initWithReplyDisclaimerSeen:] */

void FUN_10b794d10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b794d14; end: 10b794d53; +[SOJUSnapProStoryReplyInfo registerMessageFields:] */

void FUN_10b794d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_replyDisclaimerSeen_11262a140,0,1,0,0,0,0,0);
  return;
}



/* Entry: 10b794d54; end: 10b794dbb; -[SOJUSnapStateMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:snapId:viewed:replayed:screenshotCount:fiNeedsRetry:fiVersion:fiSenderOutAlpha:fiRecipientOutAlpha:fiSendTimestamp:fiRecipientOutDelta:fiRecipientOutDeltaCheck:fiSenderOutBeta:screenCaptureShotCount:screenCaptureRecordingCount:] */

void FUN_10b794d54(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b794dbc; end: 10b794fe7; +[SOJUSnapStateMessage registerMessageFields:] */

void FUN_10b794dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a78;
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b795048();
  func_0x00010b79503c();
  func_0x00010b79503c(param_3,param_2,PTR_s_knownChatSequenceNumbers_112545160,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b795008();
  func_0x00010b795008();
  func_0x00010b795048();
  func_0x00010b79503c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  func_0x00010b79503c(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b794fe8();
  func_0x00010b794fe8();
  func_0x00010b795048();
  func_0x00010b79503c();
  func_0x00010b795048();
  func_0x00010b79503c();
  func_0x00010b795008();
  func_0x00010b795028();
  func_0x00010b79503c();
  func_0x00010b795028();
  func_0x00010b79503c();
  func_0x00010b794fe8();
  func_0x00010b794fe8();
  func_0x00010b795008();
  func_0x00010b794fe8();
  func_0x00010b794fe8();
  func_0x00010b794fe8();
  func_0x00010b795008();
  func_0x00010b795008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794fe8; end: 10b795057;  */

void FUN_10b794fe8(void)

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



/* Entry: 10b795058; end: 10b79509f; -[SOJUSnapUpdate initWithT:c:replayed:sv:stackId:replayPurchaseReceipt:esId:fiNeedsRetry:fiVersion:fiRecipientOutAlpha:fiRecipientOutDelta:fiRecipientOutDeltaCheck:fiRecipientOutBeta:screenCaptureShotCount:screenCaptureRecordingCount:] */

void FUN_10b795058(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7950a0; end: 10b7951df; +[SOJUSnapUpdate registerMessageFields:] */

void FUN_10b7950a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_t_112546400;
  _objc_retain(param_3);
  func_0x00010b795214(param_3,param_2,puVar1,0,0,2,in_x6,in_x7,0,0);
  func_0x00010b795220();
  func_0x00010b795214();
  func_0x00010b795220();
  func_0x00010b795214();
  func_0x00010b795220();
  func_0x00010b795214();
  func_0x00010b7951e0();
  func_0x00010b7951e0();
  func_0x00010b7951e0();
  func_0x00010b795200();
  func_0x00010b795214();
  func_0x00010b795200();
  func_0x00010b795214();
  func_0x00010b7951e0();
  func_0x00010b7951e0();
  func_0x00010b7951e0();
  func_0x00010b7951e0();
  func_0x00010b795200();
  func_0x00010b795214();
  func_0x00010b795200();
  func_0x00010b795214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7951e0; end: 10b79522f;  */

void FUN_10b7951e0(void)

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



/* Entry: 10b795230; end: 10b79523b; +[SOJUSnapUpdateBuilder messageClass] */

void FUN_10b795230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e11e8);
  return;
}



/* Entry: 10b79523c; end: 10b79523f; +[SOJUSnapUpdateBuilder withJUSnapUpdate:] */

void FUN_10b79523c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b795240; end: 10b795263; -[SOJUSnapchatter initWithUserId:username:isUserPopular:displayUsername:] */

void FUN_10b795240(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795264; end: 10b7952ff; +[SOJUSnapchatter registerMessageFields:] */

void FUN_10b795264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  FUN_10b795300(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b79530c();
  FUN_10b795300();
  func_0x00010b79530c();
  FUN_10b795300();
  func_0x00010b79530c();
  FUN_10b795300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b795300; end: 10b79531b;  */

void FUN_10b795300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79531c; end: 10b79533b; -[SOJUSnapstreakMetadata initWithSnapstreakExpiryTime:snapstreakCount:] */

void FUN_10b79531c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79533c; end: 10b795397; +[SOJUSnapstreakMetadata registerMessageFields:] */

void FUN_10b79533c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snapstreakExpiryTime_1125474d0;
  _objc_retain(param_3);
  FUN_10b795398(param_3,param_2,puVar1);
  FUN_10b795398(param_3,param_2,PTR_s_snapstreakCount_1125474d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b795398; end: 10b7953af;  */

void FUN_10b795398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,2,0,0);
  return;
}



/* Entry: 10b7953b0; end: 10b79541b;  */

undefined8 FUN_10b7953b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80758;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80758,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffe8b78801;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80778;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80778,param_2,param_1);
    uVar2 = 0xffffffffa50a72fa;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79541c; end: 10b795457;  */

undefined ** FUN_10b79541c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80778;
  if (param_1 != -0x5af58d06) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80758;
  if (param_1 != -0x174877ff) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b795458; end: 10b795477; -[SOJUSponsoredSlug initWithStyle:defaultValues:] */

void FUN_10b795458(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795478; end: 10b7954f3; +[SOJUSponsoredSlug registerMessageFields:] */

void FUN_10b795478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0f20;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b7954f4();
  func_0x00010b79550c();
  _objc_opt_class(PTR_PTR_1126e0b08);
  FUN_10b7954f4();
  func_0x00010b79550c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7954f4; end: 10b795517;  */

void FUN_10b7954f4(void)

{
  return;
}



/* Entry: 10b795518; end: 10b795553; -[SOJUSponsoredSlugPosAndText initWithViewRect:alignment:position:hmargin:vmargin:text:sponsoredText:sponsoredChannelText:timeBeforeFadeout:longformText:longformTimeBeforeFadeout:] */

void FUN_10b795518(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795554; end: 10b7956b7; +[SOJUSponsoredSlugPosAndText registerMessageFields:] */

void FUN_10b795554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e11f0;
  puVar1 = PTR_s_viewRect_112685268;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
  func_0x00010b7956c8();
  func_0x00010bf06b60();
  func_0x00010b7956c8();
  func_0x00010bf06b60();
  func_0x00010b7956ec();
  func_0x00010b7956b8();
  func_0x00010b7956ec();
  func_0x00010b7956b8();
  func_0x00010b7956ec();
  func_0x00010b7956b8();
  func_0x00010b7956ec();
  func_0x00010b7956b8();
  func_0x00010b7956ec();
  func_0x00010b7956b8();
  func_0x00010b7956ec();
  func_0x00010b7956e0();
  func_0x00010b7956ec();
  func_0x00010b7956b8();
  func_0x00010b7956ec();
  func_0x00010b7956e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7956b8; end: 10b7956fb;  */

void FUN_10b7956b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7956fc; end: 10b79577b;  */

undefined8 FUN_10b7956fc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8f298;
  func_0x00010b7957cc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x32a007;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8f278;
    func_0x00010b7957cc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x677c21c;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db4498;
      func_0x00010b7957cc();
      uVar2 = 0xffffffffaeb2cc55;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79577c; end: 10b7957d3;  */

undefined ** FUN_10b79577c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x677c21c) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e8f278;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8f298;
  if (param_1 != 0x32a007) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db4498;
  if (param_1 != -0x514d33ab) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7957d4; end: 10b7958fb;  */

undefined8 FUN_10b7957d4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f24758;
  func_0x00010b795a04();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffff6d104d1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f24778;
    func_0x00010b795a04();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x774b229f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f24798;
      func_0x00010b795a04();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffe3a5f672;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f247b8;
        func_0x00010b795a04();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x5dc6e59b;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f247d8;
          func_0x00010b795a04();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xfffffffff84bf8e9;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f24498;
            func_0x00010b795a04();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x5b6c2ee8;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f247f8;
              func_0x00010b795a04();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffff9b2eb871;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f24818;
                func_0x00010b795a04();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x7b0a6e3f;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f24838;
                  func_0x00010b795a04();
                  uVar2 = 0xffffffffcafeb6d2;
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



/* Entry: 10b7958fc; end: 10b795a0b;  */

undefined ** FUN_10b7958fc(long param_1)

{
  if (param_1 == -0x64d1478f) {
    return &PTR____CFConstantStringClassReference_110f247f8;
  }
  if (param_1 == -0x3501492e) {
    return &PTR____CFConstantStringClassReference_110f24838;
  }
  if (param_1 == -0x1c5a098e) {
    return &PTR____CFConstantStringClassReference_110f24798;
  }
  if (param_1 == -0x92efb2f) {
    return &PTR____CFConstantStringClassReference_110f24758;
  }
  if (param_1 == -0x7b40717) {
    return &PTR____CFConstantStringClassReference_110f247d8;
  }
  if (param_1 == 0x5b6c2ee8) {
    return &PTR____CFConstantStringClassReference_110f24498;
  }
  if (param_1 == 0x5dc6e59b) {
    return &PTR____CFConstantStringClassReference_110f247b8;
  }
  if (param_1 != 0x7b0a6e3f) {
    if (param_1 == 0x774b229f) {
      return &PTR____CFConstantStringClassReference_110f24778;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f24818;
}



/* Entry: 10b795a0c; end: 10b795a2f; -[SOJUSponsoredSlugStyle initWithFont:textSize:color:dropshadowColor:dropshadowOffset:] */

void FUN_10b795a0c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795a30; end: 10b795adb; +[SOJUSponsoredSlugStyle registerMessageFields:] */

void FUN_10b795a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b795afc();
  func_0x00010b795adc();
  func_0x00010b795aec();
  func_0x00010b795adc();
  func_0x00010b795aec();
  func_0x00010b795adc();
  func_0x00010b795aec();
  func_0x00010b795adc();
  _objc_opt_class(PTR_PTR_1126e11f8);
  func_0x00010b795afc();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b795adc; end: 10b795b0f;  */

void FUN_10b795adc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b795b10; end: 10b795b33; -[SOJUSponsoredStoryMetadata initWithPreviewDisplayName:postviewDisplayName:sponsor:thirdPartyTagUrl:] */

void FUN_10b795b10(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795b34; end: 10b795bbf; +[SOJUSponsoredStoryMetadata registerMessageFields:] */

void FUN_10b795b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_previewDisplayName_1125474e8;
  _objc_retain(param_3);
  FUN_10b795bc0(param_3,param_2,puVar1,0,1);
  func_0x00010b795bd0();
  FUN_10b795bc0();
  func_0x00010b795bd0();
  FUN_10b795bc0();
  func_0x00010b795bd0();
  FUN_10b795bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b795bc0; end: 10b795bdf;  */

void FUN_10b795bc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b795be0; end: 10b795c2f; -[SOJUSticker initWithPackId:stickerId:stickerType:capabilities:creationTime:encKey:encIv:lastUsedTime:facecutOriginSnapId:customStickerType:isAnimated:externalSrcUrl:stickerImageData:uniqueId:unlockableId:order:miniAppMetadata:customText:] */

void FUN_10b795be0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795c30; end: 10b795e2f; +[SOJUSticker registerMessageFields:] */

void FUN_10b795c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b795e88();
  func_0x00010b795e7c();
  func_0x00010b795e30();
  func_0x00010b795e50();
  func_0x00010bf06b60();
  func_0x00010b795e7c(param_3,param_2,PTR_s_capabilities_1125a9820,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xf932ffd8b36b84);
  func_0x00010b795e68();
  func_0x00010b795e7c();
  func_0x00010b795e30();
  func_0x00010b795e30();
  func_0x00010b795e68();
  func_0x00010b795e7c();
  func_0x00010b795e30();
  func_0x00010b795e50();
  func_0x00010bf06b60();
  func_0x00010b795e68();
  func_0x00010b795e7c();
  func_0x00010b795e30();
  func_0x00010b795e68();
  func_0x00010b795e7c();
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0x503ddfdc8d3736);
  func_0x00010b795e68();
  func_0x00010b795e7c();
  func_0x00010b795e68();
  func_0x00010b795e7c();
  func_0x00010b795e7c(param_3,param_2,PTR_s_order_112618c80,0,0,1);
  _objc_opt_class(PTR_PTR_1126e0ea8);
  func_0x00010b795e88();
  func_0x00010bf06b60();
  func_0x00010b795e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b795e30; end: 10b795e9b;  */

void FUN_10b795e30(void)

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



/* Entry: 10b795e9c; end: 10b795ea7; +[SOJUStickerBuilder messageClass] */

void FUN_10b795e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ac8);
  return;
}



/* Entry: 10b795ea8; end: 10b795eab; +[SOJUStickerBuilder withJUSticker:] */

void FUN_10b795ea8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b795eac; end: 10b795ecb; -[SOJUStickerConfig initWithMaximumSearchResults:maximumSearchEmojis:searchOrder:] */

void FUN_10b795eac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795ecc; end: 10b795f3b; +[SOJUStickerConfig registerMessageFields:] */

void FUN_10b795ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_maximumSearchResults_112547528;
  _objc_retain(param_3);
  FUN_10b795f3c(param_3,param_2,puVar1);
  FUN_10b795f3c(param_3,param_2,PTR_s_maximumSearchEmojis_112547530);
  FUN_10b795f3c(param_3,param_2,PTR_s_searchOrder_112547538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b795f3c; end: 10b795f53;  */

void FUN_10b795f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,1,0,0);
  return;
}



/* Entry: 10b795f54; end: 10b795f97; -[SOJUStickerMetadata initWithStickerId:stickerType:mediaPath:priority:active:hasAlpha:capabilities:isAnimated:uniqueId:order:contentObject:boltContentUrl:miniAppMetadata:] */

void FUN_10b795f54(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b795f98; end: 10b79613f; +[SOJUStickerMetadata registerMessageFields:] */

void FUN_10b795f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_stickerId_112672a58;
  _objc_retain(param_3);
  FUN_10b796140(param_3,param_2,puVar1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_stickerType_112672ea0,0,1,6,0,FUN_10b796bd0,
                      FUN_10b796d4c,0);
  func_0x00010b796188();
  FUN_10b796140();
  func_0x00010b796178();
  func_0x00010b796158();
  func_0x00010b796178();
  func_0x00010b796158();
  func_0x00010b796164();
  func_0x00010b796158();
  func_0x00010b796158(param_3,param_2,PTR_s_capabilities_1125a9820,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xf932ffd8b36b84);
  func_0x00010b796164();
  func_0x00010b796158();
  func_0x00010b796164();
  func_0x00010b796158();
  func_0x00010b796178();
  func_0x00010b796158();
  func_0x00010b796188();
  FUN_10b796140();
  func_0x00010b796188();
  FUN_10b796140();
  _objc_opt_class(PTR_PTR_1126e0ea8);
  func_0x00010b796188();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b796140; end: 10b796193;  */

void FUN_10b796140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b796194; end: 10b79619f; +[SOJUStickerMetadataBuilder messageClass] */

void FUN_10b796194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1200);
  return;
}



/* Entry: 10b7961a0; end: 10b7961a3; +[SOJUStickerMetadataBuilder withJUStickerMetadata:] */

void FUN_10b7961a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7961a4; end: 10b7961c3; -[SOJUStickerMiniAppMetadata initWithMiniAppId:miniAppShareInfo:] */

void FUN_10b7961a4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7961c4; end: 10b79621f; +[SOJUStickerMiniAppMetadata registerMessageFields:] */

void FUN_10b7961c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_miniAppId_1126111e8;
  _objc_retain(param_3);
  FUN_10b796220(param_3,param_2,puVar1);
  FUN_10b796220(param_3,param_2,PTR_s_miniAppShareInfo_1126111f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b796220; end: 10b796237;  */

void FUN_10b796220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b796238; end: 10b796243; +[SOJUStickerMiniAppMetadataBuilder messageClass] */

void FUN_10b796238(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ea8);
  return;
}



/* Entry: 10b796244; end: 10b796247; +[SOJUStickerMiniAppMetadataBuilder withJUStickerMiniAppMetadata:] */

void FUN_10b796244(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b796248; end: 10b7962a3; -[SOJUStickerPack initWithPackId:categoryId:iconUrl:iconVersion:url:version:active:type:capabilities:target:superCategory:geofence:unlockablePreviewImgUrl:title:unlockExpirationTimeInSec:contextualPackMetadata:unlockableId:isExpandable:metadataUrl:expirationTtlInSec:] */

void FUN_10b796248(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7962a4; end: 10b7964db; +[SOJUStickerPack registerMessageFields:] */

void FUN_10b7962a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b79654c();
  func_0x00010b7964fc();
  func_0x00010b7964dc();
  func_0x00010b7964dc();
  func_0x00010b79650c();
  func_0x00010b796520();
  func_0x00010b79652c();
  func_0x00010b7964fc();
  func_0x00010b79652c();
  func_0x00010b796520();
  func_0x00010b79652c();
  func_0x00010b796520();
  func_0x00010b79653c();
  func_0x00010b796568();
  func_0x00010b79653c();
  func_0x00010b796520();
  func_0x00010c19a460(param_3,param_2,0xf932ffd8b36b84);
  func_0x00010b79653c();
  func_0x00010b796520();
  func_0x00010c19a460(param_3,param_2,0xc43f44aac3c32b);
  func_0x00010b796568(param_3,param_2,PTR_s_superCategory_112547578,0,1);
  _objc_opt_class(PTR_PTR_1126e0ee0);
  func_0x00010b79654c();
  func_0x00010b79655c();
  func_0x00010b7964dc();
  func_0x00010b79652c();
  func_0x00010b7964fc();
  func_0x00010b79650c();
  func_0x00010b796520();
  _objc_opt_class(PTR_PTR_1126e1208);
  func_0x00010b79654c();
  func_0x00010b79655c();
  func_0x00010b7964dc();
  func_0x00010b79650c();
  func_0x00010b796520();
  func_0x00010b7964dc();
  func_0x00010b79650c();
  func_0x00010b796520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7964dc; end: 10b796573;  */

void FUN_10b7964dc(void)

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



/* Entry: 10b796574; end: 10b79657f; +[SOJUStickerPackBuilder messageClass] */

void FUN_10b796574(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0f18);
  return;
}



/* Entry: 10b796580; end: 10b796583; +[SOJUStickerPackBuilder withJUStickerPack:] */

void FUN_10b796580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b796584; end: 10b7965a3; -[SOJUStickerPackContextualMetadata initWithPlacement:priority:displayCount:] */

void FUN_10b796584(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7965a4; end: 10b796643; +[SOJUStickerPackContextualMetadata registerMessageFields:] */

void FUN_10b7965a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_placement_11261d108;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b796654,FUN_10b7966c0,0);
  FUN_10b796644(param_3,param_2,PTR_s_priority_112622940,0,0);
  FUN_10b796644(param_3,param_2,PTR_s_displayCount_1125beef0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b796644; end: 10b796653;  */

void FUN_10b796644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b796654; end: 10b7966bf;  */

undefined8 FUN_10b796654(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9e78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff918d59a8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80798;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80798,param_2,param_1);
    uVar2 = 0xffffffffd73be909;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7966c0; end: 10b7966fb;  */

undefined ** FUN_10b7966c0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80798;
  if (param_1 != -0x28c416f7) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9e78;
  if (param_1 != -0x6e72a658) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7966fc; end: 10b796733; -[SOJUStickerPackMetadata initWithPackId:categoryId:packType:version:target:active:hasBanner:stickers:priority:] */

void FUN_10b7966fc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b796734; end: 10b7968af; +[SOJUStickerPackMetadata registerMessageFields:] */

void FUN_10b796734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_packId_112619c98;
  _objc_retain(param_3);
  FUN_10b7968b0(param_3,param_2,puVar1,0,1,6);
  func_0x00010b7968bc();
  FUN_10b7968b0();
  func_0x00010bf06b60(param_3,param_2,PTR_s_packType_1125475c8,0,1,6,0,FUN_10b796bd0,FUN_10b796d4c,0
                     );
  func_0x00010b7968bc();
  FUN_10b7968b0();
  FUN_10b7968b0(param_3,param_2,PTR_s_target_112678178,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xc43f44aac3c32b);
  func_0x00010b7968bc();
  FUN_10b7968b0();
  func_0x00010b7968bc();
  FUN_10b7968b0();
  puVar1 = PTR_s_stickers_112672f20;
  puVar2 = PTR_PTR_1126e1200;
  _objc_opt_class(PTR_PTR_1126e1200);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010b7968bc();
  FUN_10b7968b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7968b0; end: 10b7968cb;  */

void FUN_10b7968b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7968cc; end: 10b7968d7; +[SOJUStickerPackMetadataBuilder messageClass] */

void FUN_10b7968cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1210);
  return;
}



/* Entry: 10b7968d8; end: 10b7968db; +[SOJUStickerPackMetadataBuilder withJUStickerPackMetadata:] */

void FUN_10b7968d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7968dc; end: 10b796977;  */

undefined8 FUN_10b7968dc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
  func_0x00010b7969e4();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x24b0f4ce;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dec738;
    func_0x00010b7969e4();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff89f20ed6;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f807b8;
      func_0x00010b7969e4();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffaf788a39;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ea0e98;
        func_0x00010b7969e4();
        uVar2 = 0x6bed3636;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b796978; end: 10b7969eb;  */

undefined ** FUN_10b796978(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x760df12a) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dec738;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd6e38;
  if (param_1 != 0x24b0f4ce) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f807b8;
  if (param_1 != -0x508775c7) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea0e98;
  if (param_1 != 0x6bed3636) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7969ec; end: 10b7969f3; +[SOJUStickerSearchMetadata canInitFromProto] */

undefined8 FUN_10b7969ec(void)

{
  return 0;
}



/* Entry: 10b7969f4; end: 10b796a13; -[SOJUStickerSearchMetadata initWithStickerTags:emojiTags:synonyms:] */

void FUN_10b7969f4(void)

{
  func_0x00010c012ba0();
  return;
}


