/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b78df54; end: 10b78df6b;  */

void FUN_10b78df54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b78df6c; end: 10b78df77; +[SOJUNycShareBuilder messageClass] */

void FUN_10b78df6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10c0);
  return;
}



/* Entry: 10b78df78; end: 10b78df7b; +[SOJUNycShareBuilder withJUNycShare:] */

void FUN_10b78df78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78df7c; end: 10b78dfbf; -[SOJUOurStoryAuth initWithStoryId:account:displayName:geofence:myStoriesDisplayName:venue:friendName:localStory:isWhitelisted:timeLeft:substoryDisplayNames:substoryLocationIds:lagunaStory:] */

void FUN_10b78df7c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78dfc0; end: 10b78e18b; +[SOJUOurStoryAuth registerMessageFields:] */

void FUN_10b78dfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_storyId_112674158;
  _objc_retain(param_3);
  FUN_10b78e18c(param_3,param_2,puVar1,0,1,6);
  FUN_10b78e18c(param_3,param_2,PTR_s_account_112546eb0,0,0,6);
  func_0x00010b78e198();
  FUN_10b78e18c();
  puVar1 = PTR_s_geofence_1125cdf00;
  puVar2 = PTR_PTR_1126e0ee0;
  _objc_opt_class(PTR_PTR_1126e0ee0);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b78e198();
  FUN_10b78e18c();
  FUN_10b78e18c(param_3,param_2,PTR_s_venue_1126838f8,0,0,6);
  func_0x00010b78e198();
  FUN_10b78e18c();
  func_0x00010b78e198();
  FUN_10b78e18c();
  func_0x00010b78e198();
  FUN_10b78e18c();
  func_0x00010b78e1ac();
  FUN_10b78e18c();
  func_0x00010b78e1ac();
  FUN_10b78e18c();
  func_0x00010c19a460(param_3,param_2,0x727e8644ceaecb);
  func_0x00010b78e1ac();
  FUN_10b78e18c();
  func_0x00010c19a460(param_3,param_2,0x97610593aadb22);
  func_0x00010b78e198();
  FUN_10b78e18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e18c; end: 10b78e1bb;  */

void FUN_10b78e18c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78e1bc; end: 10b78e1e3; -[SOJUPartialStoryLogbook initWithStory:storyExtras:friendStoryExtras:otherStoryExtras:engagementPercentage:intendedPostTime:] */

void FUN_10b78e1bc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e1e4; end: 10b78e2b7; +[SOJUPartialStoryLogbook registerMessageFields:] */

void FUN_10b78e1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  
  puVar2 = PTR_PTR_1126cf0d0;
  puVar1 = PTR_s_story_112673df8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010b78e2dc(param_3,param_2,puVar1,0,0,7,puVar2,in_x7,0,0);
  func_0x00010b78e2e4();
  func_0x00010b78e2b8();
  func_0x00010b78e2e4();
  func_0x00010b78e2b8();
  func_0x00010b78e2e4();
  func_0x00010b78e2b8();
  func_0x00010b78e2ec();
  func_0x00010b78e2dc();
  func_0x00010b78e2ec();
  func_0x00010b78e2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e2b8; end: 10b78e2ff;  */

void FUN_10b78e2b8(void)

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



/* Entry: 10b78e300; end: 10b78e31f; -[SOJUPingMessage initWithType:idValue:appEngineTarget:] */

void FUN_10b78e300(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e320; end: 10b78e3c3; +[SOJUPingMessage registerMessageFields:] */

void FUN_10b78e320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  FUN_10b78e3c4(param_3,param_2,PTR_s_idValue_1125d7158,
                &PTR____CFConstantStringClassReference_110dbf6f8,2);
  FUN_10b78e3c4(param_3,param_2,PTR_s_appEngineTarget_112545168,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e3c4; end: 10b78e3d3;  */

void FUN_10b78e3c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78e3d4; end: 10b78e3f7; -[SOJUPingResponse initWithType:idValue:appEngineTarget:pingId:] */

void FUN_10b78e3d4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e3f8; end: 10b78e4b7; +[SOJUPingResponse registerMessageFields:] */

void FUN_10b78e3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  FUN_10b78e4b8(param_3,param_2,PTR_s_idValue_1125d7158,
                &PTR____CFConstantStringClassReference_110dbf6f8,2);
  FUN_10b78e4b8(param_3,param_2,PTR_s_appEngineTarget_112545168,0,1);
  FUN_10b78e4b8(param_3,param_2,PTR_s_pingId_112546ef8,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e4b8; end: 10b78e4c7;  */

void FUN_10b78e4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78e4c8; end: 10b78e4e7; -[SOJUPromptMessage initWithUuid:name:] */

void FUN_10b78e4c8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e4e8; end: 10b78e543; +[SOJUPromptMessage registerMessageFields:] */

void FUN_10b78e4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_uuid_112682d80;
  _objc_retain(param_3);
  FUN_10b78e544(param_3,param_2,puVar1);
  FUN_10b78e544(param_3,param_2,PTR_s_name_112612df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e544; end: 10b78e55b;  */

void FUN_10b78e544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b78e55c; end: 10b78e57f; -[SOJUProtocolErrorMessage initWithType:idValue:appEngineTarget:message:] */

void FUN_10b78e55c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e580; end: 10b78e63f; +[SOJUProtocolErrorMessage registerMessageFields:] */

void FUN_10b78e580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  FUN_10b78e640(param_3,param_2,PTR_s_idValue_1125d7158,
                &PTR____CFConstantStringClassReference_110dbf6f8,2);
  FUN_10b78e640(param_3,param_2,PTR_s_appEngineTarget_112545168,0,1);
  FUN_10b78e640(param_3,param_2,PTR_s_message_112610668,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e640; end: 10b78e64f;  */

void FUN_10b78e640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78e650; end: 10b78e66f; -[SOJUPurikuraMetadataResponse initWithVersion:patterns:] */

void FUN_10b78e650(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e670; end: 10b78e6f7; +[SOJUPurikuraMetadataResponse registerMessageFields:] */

void FUN_10b78e670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b78e6f8();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126d8bf8);
  FUN_10b78e6f8();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e6f8; end: 10b78e70b;  */

void FUN_10b78e6f8(void)

{
  return;
}



/* Entry: 10b78e70c; end: 10b78e743; -[SOJUPurikuraPatternItem initWithUuid:url:thumbnailX:thumbnailY:thumbnailWidth:thumbnailHeight:colorFilter:bokeh:beauty:] */

void FUN_10b78e70c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78e744; end: 10b78e843; +[SOJUPurikuraPatternItem registerMessageFields:] */

void FUN_10b78e744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_uuid_112682d80;
  _objc_retain(param_3);
  func_0x00010b78e864(param_3,param_2,puVar1,0,0,6);
  func_0x00010b78e870();
  func_0x00010b78e864();
  func_0x00010b78e844();
  func_0x00010b78e844();
  func_0x00010b78e844();
  func_0x00010b78e844();
  func_0x00010bf06b60(param_3,param_2,PTR_s_colorFilter_1125add40,0,1,6,0,FUN_10b78e880,
                      FUN_10b78e91c,0);
  func_0x00010b78e870();
  func_0x00010b78e864();
  func_0x00010b78e870();
  func_0x00010b78e864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78e844; end: 10b78e87f;  */

void FUN_10b78e844(void)

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



/* Entry: 10b78e880; end: 10b78e91b;  */

undefined8 FUN_10b78e880(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f27678;
  func_0x00010b78e988();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x6dc1de7e;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f276b8;
    func_0x00010b78e988();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x702094a7;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f27698;
      func_0x00010b78e988();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffa7d67d05;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f800f8;
        func_0x00010b78e988();
        uVar2 = 0xffffffff920469ae;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78e91c; end: 10b78e98f;  */

undefined ** FUN_10b78e91c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x702094a7) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f276b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f27678;
  if (param_1 != 0x6dc1de7e) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f27698;
  if (param_1 != -0x582982fb) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f800f8;
  if (param_1 != -0x6dfb9652) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78e990; end: 10b78ea57; -[SOJUReceivedSnap initWithIdValue:st:m:ts:sts:zipped:pts:orientation:snapMetadata:sendStartTimestamp:replyMedias:seqNum:viewTimestamp:sn:t:timer:capTextDeprecated:capPosDeprecated:capOriDeprecated:mo:broadcast:broadcastMediaUrl:broadcastUrl:broadcastActionText:broadcastSecondaryText:broadcastHideTimer:filterId:lensId:egData:uvTags:esId:fiVersion:fiSenderOutAlpha:fiRecipientOutAlpha:fiSendTimestamp:fideliusInfo:fiSnapKey:fiSnapIv:venueId:snapAttachments:isInfiniteDuration:fiSenderOutBeta:fiSnapReleaseTs:fiRetried:directDownloadUrl:contextHint:animatedSnapType:] */

void FUN_10b78e990(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ea58; end: 10b78ee6f; +[SOJUReceivedSnap registerMessageFields:] */

void FUN_10b78ea58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010b78eea4(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b78eed0();
  func_0x00010b78eed0();
  func_0x00010b78eef8();
  func_0x00010b78eeec();
  func_0x00010b78eef8();
  func_0x00010b78eeec();
  func_0x00010b78eef8();
  func_0x00010b78eeec();
  func_0x00010b78eef8();
  func_0x00010b78eeec();
  func_0x00010b78eef8();
  func_0x00010b78eeec();
  _objc_opt_class(PTR_PTR_1126e0eb0);
  func_0x00010b78eeb4();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  _objc_opt_class(PTR_PTR_1126e0eb8);
  func_0x00010b78eeb4();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  func_0x00010b78eef8();
  func_0x00010b78eea4();
  func_0x00010b78eed0();
  func_0x00010b78eef8();
  func_0x00010b78eeec();
  func_0x00010b78eea4(param_3,param_2,PTR_s_capTextDeprecated_112546408,
                      &PTR____CFConstantStringClassReference_110f7ec18,2);
  func_0x00010b78eeec(param_3,param_2,PTR_s_capPosDeprecated_112546410,
                      &PTR____CFConstantStringClassReference_110f7ec38,2,4);
  func_0x00010b78eeec(param_3,param_2,PTR_s_capOriDeprecated_112546418,
                      &PTR____CFConstantStringClassReference_110f7ec58,2,2);
  func_0x00010b78eed0();
  func_0x00010b78eed0();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78eeec(param_3,param_2,PTR_s_uvTags_112546470,0,1,7);
  func_0x00010c19a460(param_3,param_2,0x47f71de40c8b4d);
  func_0x00010b78ee70();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  _objc_opt_class(PTR_PTR_1126c0690);
  func_0x00010b78eeb4();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  func_0x00010b78ee70();
  _objc_opt_class(PTR_PTR_1126d9158);
  func_0x00010b78eeb4();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  func_0x00010b78ee70();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  func_0x00010b78ee90();
  func_0x00010b78eeec();
  _objc_opt_class(PTR_PTR_1126d96b0);
  func_0x00010b78eeb4();
  func_0x00010b78ee70();
  func_0x00010bf06b60(param_3,param_2,PTR_s_animatedSnapType_11259e778,0,1,6,0,FUN_10b768028,
                      FUN_10b7680c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78ee70; end: 10b78ef0b;  */

void FUN_10b78ee70(void)

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



/* Entry: 10b78ef0c; end: 10b78ef2f; -[SOJURect initWithX:y:width:height:] */

void FUN_10b78ef0c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78ef30; end: 10b78efa3; +[SOJURect registerMessageFields:] */

void FUN_10b78ef30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b78efbc();
  func_0x00010b78efa4();
  func_0x00010b78efbc();
  func_0x00010b78efa4();
  func_0x00010b78efbc();
  func_0x00010b78efa4();
  func_0x00010b78efbc();
  func_0x00010b78efa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78efa4; end: 10b78efc7;  */

void FUN_10b78efa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,4,0,0);
  return;
}



/* Entry: 10b78efc8; end: 10b78efcb; -[SOJURemoteApiInfo initWithRemoteApiSpecIds:] */

void FUN_10b78efc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b78efcc; end: 10b78f043; +[SOJURemoteApiInfo registerMessageFields:] */

void FUN_10b78efcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_remoteApiSpecIds_112628190;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,0,0,0,1);
  func_0x00010c19a460(param_3,param_2,0x8e0d4be9557f8e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f044; end: 10b78f04f; +[SOJURemoteApiInfoBuilder messageClass] */

void FUN_10b78f044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1088);
  return;
}



/* Entry: 10b78f050; end: 10b78f053; +[SOJURemoteApiInfoBuilder withJURemoteApiInfo:] */

void FUN_10b78f050(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78f054; end: 10b78f073; -[SOJURemoveUnlockedStickerPackResponse initWithStickerPackId:errorMessage:] */

void FUN_10b78f054(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f074; end: 10b78f0cf; +[SOJURemoveUnlockedStickerPackResponse registerMessageFields:] */

void FUN_10b78f074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_stickerPackId_112546f68;
  _objc_retain(param_3);
  FUN_10b78f0d0(param_3,param_2,puVar1);
  FUN_10b78f0d0(param_3,param_2,PTR_s_errorMessage_1125c3d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f0d0; end: 10b78f0e7;  */

void FUN_10b78f0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b78f0e8; end: 10b78f0eb; -[SOJURichStoryRichStoryAdToLens initWithLenses:] */

void FUN_10b78f0e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b78f0ec; end: 10b78f163; +[SOJURichStoryRichStoryAdToLens registerMessageFields:] */

void FUN_10b78f0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1118;
  puVar1 = PTR_s_lenses_112603aa0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f164; end: 10b78f183; -[SOJURichStoryRichStoryAppInstallAndroid initWithPackageId:storeParams:] */

void FUN_10b78f164(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f184; end: 10b78f213; +[SOJURichStoryRichStoryAppInstallAndroid registerMessageFields:] */

void FUN_10b78f184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_packageId_112619cd8;
  _objc_retain(param_3);
  FUN_10b78f214(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b78f214(param_3,param_2,PTR_s_storeParams_1126738d0,0,1,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0xfaa2ea0fb74247);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f214; end: 10b78f21f;  */

void FUN_10b78f214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78f220; end: 10b78f243; -[SOJURichStoryRichStoryAppInstallAttachment initWithAndroidPackageId:androidStoreParams:iosAppId:iosStoreParams:] */

void FUN_10b78f220(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f244; end: 10b78f313; +[SOJURichStoryRichStoryAppInstallAttachment registerMessageFields:] */

void FUN_10b78f244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_androidPackageId_11259e458;
  _objc_retain(param_3);
  FUN_10b78f314(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b78f320();
  FUN_10b78f314();
  func_0x00010c19a460(param_3,param_2,0xc3c91587e50ae8);
  func_0x00010b78f320();
  FUN_10b78f314();
  func_0x00010b78f320();
  FUN_10b78f314();
  func_0x00010c19a460(param_3,param_2,0x656d88c16267be);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f314; end: 10b78f32f;  */

void FUN_10b78f314(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78f330; end: 10b78f34f; -[SOJURichStoryRichStoryAppInstallIos initWithAppId:storeParams:] */

void FUN_10b78f330(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f350; end: 10b78f3df; +[SOJURichStoryRichStoryAppInstallIos registerMessageFields:] */

void FUN_10b78f350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_appId_11259ee68;
  _objc_retain(param_3);
  FUN_10b78f3e0(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b78f3e0(param_3,param_2,PTR_s_storeParams_1126738d0,0,1,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0xfaa2ea0fb74247);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f3e0; end: 10b78f3eb;  */

void FUN_10b78f3e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78f3ec; end: 10b78f40b; -[SOJURichStoryRichStoryCameraAttachment initWithLenses:addToOurStory:] */

void FUN_10b78f3ec(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f40c; end: 10b78f4ab; +[SOJURichStoryRichStoryCameraAttachment registerMessageFields:] */

void FUN_10b78f40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1118;
  puVar1 = PTR_s_lenses_112603aa0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_addToOurStory_11259ca38,0,1,0,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f4ac; end: 10b78f4cb; -[SOJURichStoryRichStoryCommerceCatalog initWithIdValue:type:] */

void FUN_10b78f4ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f4cc; end: 10b78f55f; +[SOJURichStoryRichStoryCommerceCatalog registerMessageFields:] */

void FUN_10b78f4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,0,
                      0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b78f560,FUN_10b78f590,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f560; end: 10b78f58f;  */

undefined8 FUN_10b78f560(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e36438;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e36438,param_2,param_1);
  uVar2 = 0xffffffffbfb7cf6b;
  if (ppuVar1 != (undefined **)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b78f590; end: 10b78f5b3;  */

undefined ** FUN_10b78f590(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e36438;
  if (param_1 != -0x40483095) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  return ppuVar1;
}



/* Entry: 10b78f5b4; end: 10b78f5ef; -[SOJURichStoryRichStoryDeepLinkAttachment initWithUri:inAppMode:appTitle:inAppBackground:iosAppIcon:iosAppId:androidAppIcon:androidPackageId:tapLinkActionText:deepLinkWebFallbackUrl:deepLinkFallbackType:] */

void FUN_10b78f5b4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f5f0; end: 10b78f6fb; +[SOJURichStoryRichStoryDeepLinkAttachment registerMessageFields:] */

void FUN_10b78f5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_uri_1126816c8;
  _objc_retain(param_3);
  func_0x00010b78f748(param_3,param_2,puVar1,0,0,6);
  func_0x00010b78f734();
  func_0x00010b78f748();
  func_0x00010b78f6fc();
  func_0x00010b78f6fc();
  func_0x00010b78f6fc();
  func_0x00010b78f734();
  func_0x00010b78f748();
  func_0x00010b78f6fc();
  func_0x00010b78f6fc();
  func_0x00010b78f71c();
  func_0x00010bf06b60();
  func_0x00010b78f6fc();
  func_0x00010b78f71c();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f6fc; end: 10b78f753;  */

void FUN_10b78f6fc(void)

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



/* Entry: 10b78f754; end: 10b78f75f; +[SOJURichStoryRichStoryDeepLinkAttachmentBuilder messageClass] */

void FUN_10b78f754(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dd788);
  return;
}



/* Entry: 10b78f760; end: 10b78f763; +[SOJURichStoryRichStoryDeepLinkAttachmentBuilder withJURichStoryRichStoryDeepLinkAttachment:] */

void FUN_10b78f760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b78f764; end: 10b78f7e3;  */

undefined8 FUN_10b78f764(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45478;
  func_0x00010b78f838();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffa670c53d;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f77ff8;
    func_0x00010b78f838();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x595a172;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f78018;
      func_0x00010b78f838();
      uVar2 = 0xffffffffb5bab694;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78f7e4; end: 10b78f83f;  */

undefined ** FUN_10b78f7e4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x595a172) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f77ff8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f78018;
  if (param_1 != -0x4a45496c) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e45478;
  if (param_1 != -0x598f3ac3) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78f840; end: 10b78f8ab;  */

undefined8 FUN_10b78f840(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f77fb8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f77fb8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffab5cd8d2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f77fd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f77fd8,param_2,param_1);
    uVar2 = 0x51ae0bcc;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78f8ac; end: 10b78f8e7;  */

undefined ** FUN_10b78f8ac(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f77fd8;
  if (param_1 != 0x51ae0bcc) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f77fb8;
  if (param_1 != -0x54a3272e) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78f8e8; end: 10b78f90b; -[SOJURichStoryRichStoryInteractionZone initWithInteractionZoneButtonItems:interactionZoneType:interactionZoneHeadline:interactionZoneItems:] */

void FUN_10b78f8e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78f90c; end: 10b78f9bf; +[SOJURichStoryRichStoryInteractionZone registerMessageFields:] */

void FUN_10b78f90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1120;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b78f9c0();
  func_0x00010b78f9e0();
  func_0x00010bf06b60();
  func_0x00010b78f9e0();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e1128);
  FUN_10b78f9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78f9c0; end: 10b78f9f7;  */

void FUN_10b78f9c0(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78f9f8; end: 10b78fa27; -[SOJURichStoryRichStoryInteractionZoneButtonItem initWithItemIcon:url:title:descriptionValue:deepLinkUri:deepLinkFallbackIosAppId:deepLinkFallbackAndroidPackageId:deepLinkFallbackWebUrl:] */

void FUN_10b78f9f8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78fa28; end: 10b78fb1b; +[SOJURichStoryRichStoryInteractionZoneButtonItem registerMessageFields:] */

void FUN_10b78fa28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_itemIcon_1125feb40;
  _objc_retain(param_3);
  FUN_10b78fb1c(param_3,param_2,puVar1,0,1);
  func_0x00010b78fb2c();
  FUN_10b78fb1c();
  func_0x00010b78fb2c();
  FUN_10b78fb1c();
  FUN_10b78fb1c(param_3,param_2,PTR_s_descriptionValue_112544bb0,
                &PTR____CFConstantStringClassReference_110dd3178,2);
  func_0x00010b78fb2c();
  FUN_10b78fb1c();
  func_0x00010b78fb2c();
  func_0x00010bf06b60();
  func_0x00010b78fb2c();
  FUN_10b78fb1c();
  func_0x00010b78fb2c();
  FUN_10b78fb1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78fb1c; end: 10b78fb3b;  */

void FUN_10b78fb1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b78fb3c; end: 10b78fb6b;  */

undefined8 FUN_10b78fb3c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80118;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80118,param_2,param_1);
  uVar2 = 0x75751b32;
  if (ppuVar1 != (undefined **)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b78fb6c; end: 10b78fb8f;  */

undefined ** FUN_10b78fb6c(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80118;
  if (param_1 != 0x75751b32) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  return ppuVar1;
}



/* Entry: 10b78fb90; end: 10b78fbbb; -[SOJURichStoryRichStoryInteractionZoneItem initWithItemIcon:title:descriptionValue:attachmentType:webview:deepLink:appInstall:] */

void FUN_10b78fb90(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78fbbc; end: 10b78fce7; +[SOJURichStoryRichStoryInteractionZoneItem registerMessageFields:] */

void FUN_10b78fbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b78fce8();
  func_0x00010b78fcfc();
  func_0x00010b78fcfc(param_3,param_2,PTR_s_title_112679e90,0,0);
  func_0x00010b78fcfc(param_3,param_2,PTR_s_descriptionValue_112544bb0,
                      &PTR____CFConstantStringClassReference_110dd3178,2);
  func_0x00010bf06b60(param_3,param_2,PTR_s_attachmentType_1125a0f28,0,1,6,0,FUN_10b78fd14,
                      FUN_10b78fd94,0);
  _objc_opt_class(PTR_PTR_1126e1130);
  FUN_10b78fce8();
  func_0x00010b78fd0c();
  _objc_opt_class(PTR_PTR_1126dd788);
  FUN_10b78fce8();
  func_0x00010b78fd0c();
  _objc_opt_class(PTR_PTR_1126e1138);
  FUN_10b78fce8();
  func_0x00010b78fd0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78fce8; end: 10b78fd13;  */

void FUN_10b78fce8(void)

{
  return;
}



/* Entry: 10b78fd14; end: 10b78fd93;  */

undefined8 FUN_10b78fd14(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6c2f8;
  func_0x00010b78fde8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x73c6c7d9;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6ed8;
    func_0x00010b78fde8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x542746e6;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80138;
      func_0x00010b78fde8();
      uVar2 = 0x71e0205a;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b78fd94; end: 10b78fdef;  */

undefined ** FUN_10b78fd94(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x542746e6) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd6ed8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80138;
  if (param_1 != 0x71e0205a) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f6c2f8;
  if (param_1 != 0x73c6c7d9) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78fdf0; end: 10b78fea3; -[SOJURichStoryRichStoryItemPropertiesResponse initWithFile:images:articleVideos:background:backgroundType:overlay:videoId:mode:docking:sponsoredOverlay:videoFirstFrame:videoShareFrame:zIndex:icon:title:ios:android:url:allowJsInjection:deepLinkUrls:allowedWebviewMacros:allowWebStorage:useImmersiveMode:videoRotationEnabled:sharingAudience:sharingMethod:deepLinkAttachment:iosSmartDeeplinkAppId:androidSmartDeeplinkPackageId:controlAudio:blockWebviewPreloading:subscriptionMethod:jsBridgeCapabilities:commerceCatalogs:notificationOptIn:subscription:interactionZone:cameraAttachment:adToLens:injectBitmojiAvatarId:webviewBackgroundColor:contentAspectRatio:bitmojiRemoteVideoId:] */

void FUN_10b78fdf0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78fea4; end: 10b7902b7; +[SOJURichStoryRichStoryItemPropertiesResponse registerMessageFields:] */

void FUN_10b78fea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_file_1125c8c18;
  _objc_retain(param_3);
  func_0x00010b790378(param_3,param_2,puVar1,0,0,6);
  func_0x00010b790378(param_3,param_2,PTR_s_images_1125d8010,0,0,7);
  func_0x00010b7903a0();
  func_0x00010b790384();
  func_0x00010b790378();
  func_0x00010b7903a0();
  func_0x00010b7902d8();
  func_0x00010b7902b8();
  func_0x00010b7902d8();
  func_0x00010b7902b8();
  func_0x00010b7902d8();
  func_0x00010b7902d8();
  func_0x00010b7902b8();
  func_0x00010b7902b8();
  func_0x00010b7902b8();
  func_0x00010b79034c();
  func_0x00010b790378();
  func_0x00010b7902d8();
  func_0x00010b7902d8();
  _objc_opt_class(PTR_PTR_1126e1140);
  func_0x00010b790360();
  func_0x00010b790394();
  _objc_opt_class(PTR_PTR_1126e1148);
  func_0x00010b790360();
  func_0x00010b790394();
  func_0x00010b7902d8();
  func_0x00010b7902f8();
  func_0x00010b790384();
  func_0x00010b790378();
  func_0x00010b7903a0();
  func_0x00010b790384();
  func_0x00010b790378();
  func_0x00010b7903a0();
  func_0x00010b7902f8();
  func_0x00010b7902f8();
  func_0x00010b7902f8();
  func_0x00010b790318();
  func_0x00010bf06b60();
  func_0x00010b790318();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126dd788);
  func_0x00010b790330();
  func_0x00010b79034c();
  func_0x00010b790378();
  func_0x00010b7902b8();
  func_0x00010b7902f8();
  func_0x00010b7902f8();
  func_0x00010b790318();
  func_0x00010bf06b60();
  func_0x00010b790384();
  func_0x00010b790378();
  func_0x00010b7903a0();
  _objc_opt_class(PTR_PTR_1126e1150);
  func_0x00010b790330();
  _objc_opt_class(PTR_PTR_1126e1158);
  func_0x00010b790330();
  _objc_opt_class(PTR_PTR_1126e1160);
  func_0x00010b790360();
  func_0x00010b790394();
  _objc_opt_class(PTR_PTR_1126e1168);
  func_0x00010b790330();
  _objc_opt_class(PTR_PTR_1126e1170);
  func_0x00010b790330();
  _objc_opt_class(PTR_PTR_1126e1178);
  func_0x00010b790330();
  func_0x00010b7902f8();
  func_0x00010b7902b8();
  func_0x00010b79034c();
  func_0x00010b790378();
  func_0x00010b7902b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7902b8; end: 10b7903a7;  */

void FUN_10b7902b8(void)

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



/* Entry: 10b7903a8; end: 10b79040f;  */

undefined8 FUN_10b7903a8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3e78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ea3e78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfd81;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e55078;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e55078,param_2,param_1);
    uVar2 = 0x3f997e22;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b790410; end: 10b790447;  */

undefined ** FUN_10b790410(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e55078;
  if (param_1 != 0x3f997e22) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea3e78;
  if (param_1 != 0xfd81) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b790448; end: 10b7904c7;  */

undefined8 FUN_10b790448(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010b79051c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff86df6221;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
    func_0x00010b79051c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x31ce9f6d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80158;
      func_0x00010b79051c();
      uVar2 = 0xffffffff92b2f126;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7904c8; end: 10b790523;  */

undefined ** FUN_10b7904c8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x31ce9f6d) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e35d58;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80158;
  if (param_1 != -0x6d4d0eda) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db00f8;
  if (param_1 != -0x79209ddf) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b790524; end: 10b79058f;  */

undefined8 FUN_10b790524(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80178;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80178,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3ecc2a7c;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80198;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80198,param_2,param_1);
    uVar2 = 0x32335afd;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b790590; end: 10b7905cb;  */

undefined ** FUN_10b790590(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80198;
  if (param_1 != 0x32335afd) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80178;
  if (param_1 != 0x3ecc2a7c) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7905cc; end: 10b7905eb; -[SOJURichStoryRichStoryLens initWithLensCreativeId:lensScancodeId:scancodeVersion:] */

void FUN_10b7905cc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7905ec; end: 10b79066f; +[SOJURichStoryRichStoryLens registerMessageFields:] */

void FUN_10b7905ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_lensCreativeId_112544828;
  _objc_retain(param_3);
  FUN_10b790670(param_3,param_2,puVar1);
  FUN_10b790670(param_3,param_2,PTR_s_lensScancodeId_112603450);
  func_0x00010bf06b60(param_3,param_2,PTR_s_scancodeVersion_1126317d8,0,1,1,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b790670; end: 10b790687;  */

void FUN_10b790670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b790688; end: 10b79068b; -[SOJURichStoryRichStoryNotificationOptIn initWithNamespaceValue:] */

void FUN_10b790688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79068c; end: 10b7906cf; +[SOJURichStoryRichStoryNotificationOptIn registerMessageFields:] */

void FUN_10b79068c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_namespaceValue_112547080,
                      &PTR____CFConstantStringClassReference_110f2edf8,2,6,0,0,0,0);
  return;
}



/* Entry: 10b7906d0; end: 10b7906f3; -[SOJURichStoryRichStorySubscription initWithDisplayName:subscriptionId:subscriptionType:primaryColor:secondaryColor:] */

void FUN_10b7906d0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7906f4; end: 10b79079b; +[SOJURichStoryRichStorySubscription registerMessageFields:] */

void FUN_10b7906f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7907b4();
  func_0x00010b79079c();
  func_0x00010b7907b4();
  func_0x00010b79079c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_subscriptionType_112547098,0,1,6,0,FUN_10b7907c0,
                      FUN_10b79082c,0);
  func_0x00010b7907b4();
  func_0x00010b79079c();
  func_0x00010b7907b4();
  func_0x00010b79079c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79079c; end: 10b7907bf;  */

void FUN_10b79079c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b7907c0; end: 10b79082b;  */

undefined8 FUN_10b7907c0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f4a318;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f4a318,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffffc5db1dc;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f801b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f801b8,param_2,param_1);
    uVar2 = 0x41b68fe1;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79082c; end: 10b790867;  */

undefined ** FUN_10b79082c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f801b8;
  if (param_1 != 0x41b68fe1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f4a318;
  if (param_1 != -0x3a24e24) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}


