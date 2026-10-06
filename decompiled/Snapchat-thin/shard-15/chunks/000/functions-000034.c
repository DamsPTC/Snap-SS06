/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b796a14; end: 10b796ae3; +[SOJUStickerSearchMetadata registerMessageFields:] */

void FUN_10b796a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_stickerTags_1125475e8;
  _objc_retain(param_3);
  FUN_10b796ae4(param_3,param_2,puVar1,0,1);
  func_0x00010b796af4();
  FUN_10b796ae4(param_3,param_2,PTR_s_emojiTags_1125475f0,0,1);
  func_0x00010b796af4();
  FUN_10b796ae4(param_3,param_2,PTR_s_synonyms_1125475f8,0,0);
  func_0x00010b796af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b796ae4; end: 10b796afb;  */

void FUN_10b796ae4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b796afc; end: 10b796b1b; -[SOJUStickerSearchPack initWithUrl:version:stickerType:] */

void FUN_10b796afc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b796b1c; end: 10b796bc3; +[SOJUStickerSearchPack registerMessageFields:] */

void FUN_10b796b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_url_1126816f8;
  _objc_retain(param_3);
  FUN_10b796bc4(param_3,param_2,puVar1,0,0,6);
  FUN_10b796bc4(param_3,param_2,PTR_s_version_112683d20,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_stickerType_112672ea0,0,1,6,0,FUN_10b796bd0,
                      FUN_10b796d4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b796bc4; end: 10b796bcf;  */

void FUN_10b796bc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b796bd0; end: 10b796d4b;  */

undefined8 FUN_10b796bd0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e55078;
  func_0x00010b796ea8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3f997e22;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
    func_0x00010b796ea8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x24b0f4ce;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110efd3f8;
      func_0x00010b796ea8();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x7f6db8cc;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e550b8;
        func_0x00010b796ea8();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x3f08826;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e55098;
          func_0x00010b796ea8();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffea1fba4f;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f807d8;
            func_0x00010b796ea8();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xcac2dcf;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f802b8;
              func_0x00010b796ea8();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffffa1a4dc7c;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110e550d8;
                func_0x00010b796ea8();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x40ae93f;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e55318;
                  func_0x00010b796ea8();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x285f2955;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f282b8;
                    func_0x00010b796ea8();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xffffffff9d5855b0;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110e3deb8;
                      func_0x00010b796ea8();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x4c4d50f;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110e55138;
                        func_0x00010b796ea8();
                        uVar2 = 0x3cedc99;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b796d4c; end: 10b796eaf;  */

undefined ** FUN_10b796d4c(long param_1)

{
  if (param_1 == -0x62a7aa50) {
    return &PTR____CFConstantStringClassReference_110f282b8;
  }
  if (param_1 == -0x5e5b2384) {
    return &PTR____CFConstantStringClassReference_110f802b8;
  }
  if (param_1 == -0x15e045b1) {
    return &PTR____CFConstantStringClassReference_110e55098;
  }
  if (param_1 == 0x3cedc99) {
    return &PTR____CFConstantStringClassReference_110e55138;
  }
  if (param_1 == 0x3f08826) {
    return &PTR____CFConstantStringClassReference_110e550b8;
  }
  if (param_1 == 0x40ae93f) {
    return &PTR____CFConstantStringClassReference_110e550d8;
  }
  if (param_1 == 0x4c4d50f) {
    return &PTR____CFConstantStringClassReference_110e3deb8;
  }
  if (param_1 != 0xcac2dcf) {
    if (param_1 == 0x7f6db8cc) {
      return &PTR____CFConstantStringClassReference_110efd3f8;
    }
    if (param_1 == 0x285f2955) {
      return &PTR____CFConstantStringClassReference_110e55318;
    }
    if (param_1 == 0x3f997e22) {
      return &PTR____CFConstantStringClassReference_110e55078;
    }
    if (param_1 == 0x24b0f4ce) {
      return &PTR____CFConstantStringClassReference_110dd6e38;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f807d8;
}



/* Entry: 10b796eb0; end: 10b796ef7; -[SOJUStoriesResponse initWithMyStories:myStoriesWithCollabs:friendStories:myGroupStories:myVerifiedStories:matureContentText:friendStoriesDelta:orderingResponse:serverInfo:userStoriesPrecacheConfig:myMobStories:syncMetadata:unsignedReceipt:responseType:deletedFriendStories:paginate:] */

void FUN_10b796eb0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b796ef8; end: 10b79714f; +[SOJUStoriesResponse registerMessageFields:] */

void FUN_10b796ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0938;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e1110);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e0fa8);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e1218);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e1220);
  FUN_10b797150();
  func_0x00010b797178();
  func_0x00010b79716c();
  func_0x00010c19a460(param_3,param_2,0x12f2d012719633);
  func_0x00010b797178();
  func_0x00010b79716c();
  _objc_opt_class(PTR_PTR_1126e1228);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e1230);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e1238);
  FUN_10b797150();
  _objc_opt_class(PTR_PTR_1126e1240);
  FUN_10b797150();
  func_0x00010b797178();
  func_0x00010b79716c();
  func_0x00010b797178();
  func_0x00010b79716c();
  func_0x00010b797178();
  func_0x00010bf06b60();
  func_0x00010b797178();
  func_0x00010b79716c();
  func_0x00010c19a460(param_3,param_2,0x31607430bc1f13);
  func_0x00010b79716c(param_3,param_2,PTR_s_paginate_112547668,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797150; end: 10b797187;  */

void FUN_10b797150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b797188; end: 10b7971f3;  */

undefined8 FUN_10b797188(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d098;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d098,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffffb885561;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d0b8,param_2,param_1);
    uVar2 = 0x211a8f;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7971f4; end: 10b79722b;  */

undefined ** FUN_10b7971f4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0b8;
  if (param_1 != 0x211a8f) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d098;
  if (param_1 != -0x477aa9f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b79722c; end: 10b79724b; -[SOJUStoriesSearchLookupData initWithOriginalStoryId:searchStoryId:] */

void FUN_10b79722c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79724c; end: 10b7972a7; +[SOJUStoriesSearchLookupData registerMessageFields:] */

void FUN_10b79724c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_originalStoryId_112619090;
  _objc_retain(param_3);
  FUN_10b7972a8(param_3,param_2,puVar1);
  FUN_10b7972a8(param_3,param_2,PTR_s_searchStoryId_112632b08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7972a8; end: 10b7972bf;  */

void FUN_10b7972a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b7972c0; end: 10b7973df; -[SOJUStory initWithIdValue:username:matureContent:clientId:timestamp:framing:mediaId:mediaKey:mediaUrl:mediaIv:thumbnailIv:thumbnailUrl:mediaType:time:timeLeft:captionTextDisplay:caption:zipped:filterId:unlockables:storyFilterId:sponsoredStoryMetadata:isShared:adPlacementMetadata:needsAuth:adCanFollow:isSponsored:sponsoredSlug:submissionId:encGeoData:unlockablesVendorTags:attribution:isOfficialStory:snapAttachmentUrl:isPublic:isInfiniteDuration:venueId:brandFriendliness:audioStitch:mediaD2sUrl:ruleFileParameters:filterGeofilterId:filterLensId:contextHint:animatedSnapType:largeThumbnailUrl:lensMetadata:unlockablesSnapInfo:snapConnectAttributes:repostAttribution:comment:contentObject:captureSessionId:legacyZippedCo:mediaCo:overlayCo:thumbnailCo:contextClientInfo:videoContentUrl:overlayContentUrl:firstFrameVideoContentUrl:curationSourceStoryId:] */

void FUN_10b7972c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7973e0; end: 10b797887; +[SOJUStory registerMessageFields:] */

void FUN_10b7973e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010b7978e8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b797930();
  func_0x00010b7978e8();
  func_0x00010b7978a8();
  func_0x00010b797888();
  func_0x00010b797930();
  func_0x00010b797924();
  _objc_opt_class(PTR_PTR_1126cf0d8);
  func_0x00010b79790c();
  func_0x00010b797940();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b7978f8();
  func_0x00010b797924();
  func_0x00010b797930();
  func_0x00010b797924();
  func_0x00010b7978f8();
  func_0x00010b797924();
  func_0x00010b797888();
  _objc_opt_class(PTR_PTR_1126e1248);
  func_0x00010b79790c();
  func_0x00010b797940();
  func_0x00010b797930();
  func_0x00010b797924();
  func_0x00010b797888();
  _objc_opt_class(PTR_PTR_1126e1250);
  func_0x00010b79794c();
  func_0x00010b797940();
  func_0x00010b797888();
  _objc_opt_class(PTR_PTR_1126e1258);
  func_0x00010b7978c4();
  func_0x00010b7978a8();
  _objc_opt_class(PTR_PTR_1126e0b00);
  func_0x00010b7978c4();
  func_0x00010b7978a8();
  func_0x00010b7978a8();
  func_0x00010b7978a8();
  _objc_opt_class(PTR_PTR_1126e0b08);
  func_0x00010b7978c4();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797924(param_3,param_2,PTR_s_unlockablesVendorTags_112547690,0,1,7);
  func_0x00010c19a460(param_3,param_2,0x7f71d3ac20274d);
  _objc_opt_class(PTR_PTR_1126cf0e0);
  func_0x00010b79790c();
  func_0x00010b797940();
  func_0x00010b7978a8();
  func_0x00010b797888();
  func_0x00010b7978a8();
  func_0x00010b7978a8();
  func_0x00010b797888();
  func_0x00010b7978f8();
  func_0x00010b797924();
  _objc_opt_class(PTR_PTR_1126d5218);
  func_0x00010b7978c4();
  func_0x00010b797888();
  _objc_opt_class(PTR_PTR_1126e1260);
  func_0x00010b79794c();
  func_0x00010b797940();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010bf06b60(param_3,param_2,PTR_s_animatedSnapType_11259e778,0,1,6,0,FUN_10b768028,
                      FUN_10b7680c4,0);
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  _objc_opt_class(PTR_PTR_1126cf0e8);
  func_0x00010b7978c4();
  _objc_opt_class(PTR_PTR_1126e0ea0);
  func_0x00010b7978c4();
  func_0x00010b797930();
  func_0x00010b7978e8();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
  func_0x00010b797888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797888; end: 10b797963;  */

void FUN_10b797888(void)

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



/* Entry: 10b797964; end: 10b797993; -[SOJUStoryCaption initWithFontSize:centerX:centerY:rotation:tracking:type:width:height:] */

void FUN_10b797964(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b797994; end: 10b797a9b; +[SOJUStoryCaption registerMessageFields:] */

void FUN_10b797994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_fontSize_1125ca9a8;
  _objc_retain(param_3);
  FUN_10b797a9c(param_3,param_2,puVar1,0,1);
  func_0x00010b797aac();
  FUN_10b797a9c();
  func_0x00010b797aac();
  FUN_10b797a9c();
  func_0x00010b797aac();
  FUN_10b797a9c();
  func_0x00010b797aac();
  func_0x00010bf06b60();
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b76bab0,FUN_10b76bb4c,0);
  func_0x00010b797aac();
  FUN_10b797a9c();
  func_0x00010b797aac();
  FUN_10b797a9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797a9c; end: 10b797abb;  */

void FUN_10b797a9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b797abc; end: 10b797adb; -[SOJUStoryCollaborator initWithUserId:username:displayName:] */

void FUN_10b797abc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b797adc; end: 10b797b63; +[SOJUStoryCollaborator registerMessageFields:] */

void FUN_10b797adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  FUN_10b797b64(param_3,param_2,puVar1,0,1);
  FUN_10b797b64(param_3,param_2,PTR_s_username_112682b30,0,0);
  FUN_10b797b64(param_3,param_2,PTR_s_displayName_1125bf108,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797b64; end: 10b797b73;  */

void FUN_10b797b64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b797b74; end: 10b797b97; -[SOJUStoryExtra initWithViewCount:screenshotCount:screenCaptureShotCount:screenCaptureRecordingCount:snapSaveCount:] */

void FUN_10b797b74(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b797b98; end: 10b797c1b; +[SOJUStoryExtra registerMessageFields:] */

void FUN_10b797b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b797c34();
  func_0x00010b797c1c();
  func_0x00010b797c34();
  func_0x00010b797c1c();
  func_0x00010b797c34();
  func_0x00010b797c1c();
  func_0x00010b797c34();
  func_0x00010b797c1c();
  func_0x00010b797c34();
  func_0x00010b797c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797c1c; end: 10b797c3f;  */

void FUN_10b797c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,1,0,0);
  return;
}



/* Entry: 10b797c40; end: 10b797c5f; -[SOJUStoryFrame initWithCreateTime:source:] */

void FUN_10b797c40(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b797c60; end: 10b797cd3; +[SOJUStoryFrame registerMessageFields:] */

void FUN_10b797c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_createTime_1125b3ff0;
  _objc_retain(param_3);
  FUN_10b797cd4(param_3,param_2,puVar1,0,1,2,in_x6,in_x7,0,0);
  FUN_10b797cd4(param_3,param_2,PTR_s_source_11266f770,0,0,5,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797cd4; end: 10b797cdf;  */

void FUN_10b797cd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b797ce0; end: 10b797ceb; +[SOJUStoryFrameBuilder messageClass] */

void FUN_10b797ce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126cf0d8);
  return;
}



/* Entry: 10b797cec; end: 10b797cef; +[SOJUStoryFrameBuilder withJUStoryFrame:] */

void FUN_10b797cec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b797cf0; end: 10b797d27; -[SOJUStoryLogbook initWithStory:storyExtras:friendStoryExtras:otherStoryExtras:engagementPercentage:intendedPostTime:storyNotes:friendStoryNotes:otherStoryNotes:] */

void FUN_10b797cf0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b797d28; end: 10b797e53; +[SOJUStoryLogbook registerMessageFields:] */

void FUN_10b797d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cf0d0;
  puVar1 = PTR_s_story_112673df8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010b797e9c();
  func_0x00010b797e70(param_3,param_2,puVar1,0,0,7);
  func_0x00010b797e78();
  func_0x00010b797e9c();
  func_0x00010b797e54();
  func_0x00010b797e78();
  func_0x00010b797e9c();
  func_0x00010b797e54();
  func_0x00010b797e78();
  func_0x00010b797e9c();
  func_0x00010b797e54();
  func_0x00010b797e88();
  func_0x00010b797e70();
  func_0x00010b797e88();
  func_0x00010b797e70();
  func_0x00010b797e80();
  func_0x00010b797e54();
  func_0x00010b797e80();
  func_0x00010b797e54();
  func_0x00010b797e80();
  func_0x00010b797e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797e54; end: 10b797ea7;  */

void FUN_10b797e54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b797ea8; end: 10b797ed3; -[SOJUStoryNote initWithViewer:screenshotted:timestamp:storypointer:isFriendViewOfPublicStory:screenRecorded:saved:] */

void FUN_10b797ea8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b797ed4; end: 10b797fa7; +[SOJUStoryNote registerMessageFields:] */

void FUN_10b797ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b797fd4();
  func_0x00010b797fb8();
  func_0x00010b797fc4();
  func_0x00010b797fa8();
  func_0x00010b797fc4();
  func_0x00010b797fb8();
  _objc_opt_class(PTR_PTR_1126e1268);
  func_0x00010b797fd4();
  func_0x00010bf06b60();
  func_0x00010b797fc4();
  func_0x00010b797fa8();
  func_0x00010b797fc4();
  func_0x00010b797fa8();
  func_0x00010b797fc4();
  func_0x00010b797fa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b797fa8; end: 10b797feb;  */

void FUN_10b797fa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b797fec; end: 10b79800b; -[SOJUStoryPointer initWithMKey:mField:mId:] */

void FUN_10b797fec(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79800c; end: 10b79807b; +[SOJUStoryPointer registerMessageFields:] */

void FUN_10b79800c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mKey_112547708;
  _objc_retain(param_3);
  FUN_10b79807c(param_3,param_2,puVar1);
  FUN_10b79807c(param_3,param_2,PTR_s_mField_112547710);
  FUN_10b79807c(param_3,param_2,PTR_s_mId_11260b190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79807c; end: 10b798093;  */

void FUN_10b79807c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b798094; end: 10b798113;  */

undefined8 FUN_10b798094(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6f8;
  func_0x00010b798168();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x706d575;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd97b8;
    func_0x00010b798168();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3f74916b;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
      func_0x00010b798168();
      uVar2 = 0x77297f71;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b798114; end: 10b79816f;  */

undefined ** FUN_10b798114(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x3f74916b) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd97b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
  if (param_1 != 0x77297f71) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbb6f8;
  if (param_1 != 0x706d575) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b798170; end: 10b798193; -[SOJUStoryShare initWithStoryId:mediaType:isUserTagged:isUserQuoted:] */

void FUN_10b798170(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798194; end: 10b798223; +[SOJUStoryShare registerMessageFields:] */

void FUN_10b798194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_storyId_112674158;
  _objc_retain(param_3);
  FUN_10b798224(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b798230();
  FUN_10b798224();
  func_0x00010b798230();
  FUN_10b798224();
  func_0x00010b798230();
  FUN_10b798224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798224; end: 10b798243;  */

void FUN_10b798224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b798244; end: 10b79824f; +[SOJUStoryShareBuilder messageClass] */

void FUN_10b798244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10b0);
  return;
}



/* Entry: 10b798250; end: 10b798253; +[SOJUStoryShareBuilder withJUStoryShare:] */

void FUN_10b798250(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b798254; end: 10b79828b; -[SOJUStorySticker initWithStickerId:packId:width:height:centerX:centerY:rotation:tracking:type:] */

void FUN_10b798254(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79828c; end: 10b7983a7; +[SOJUStorySticker registerMessageFields:] */

void FUN_10b79828c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_stickerId_112672a58;
  _objc_retain(param_3);
  func_0x00010b7983b8(param_3,param_2,puVar1,0,1,6);
  func_0x00010b7983c4();
  func_0x00010b7983b8();
  func_0x00010b7983c4();
  func_0x00010b7983a8();
  func_0x00010b7983c4();
  func_0x00010b7983a8();
  func_0x00010b7983c4();
  func_0x00010b7983a8();
  func_0x00010b7983c4();
  func_0x00010b7983a8();
  func_0x00010b7983c4();
  func_0x00010b7983a8();
  func_0x00010b7983c4();
  func_0x00010b7983b8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b796bd0,FUN_10b796d4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7983a8; end: 10b7983d3;  */

void FUN_10b7983a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7983d4; end: 10b7983d7; -[SOJUStoryStickers initWithStickers:] */

void FUN_10b7983d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7983d8; end: 10b79844f; +[SOJUStoryStickers registerMessageFields:] */

void FUN_10b7983d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1270;
  puVar1 = PTR_s_stickers_112672f20;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798450; end: 10b79846f; -[SOJUStoryThumbnail initWithNeedsAuth:url:] */

void FUN_10b798450(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798470; end: 10b7984e3; +[SOJUStoryThumbnail registerMessageFields:] */

void FUN_10b798470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_needsAuth_1126136a0;
  _objc_retain(param_3);
  FUN_10b7984e4(param_3,param_2,puVar1,0,1,0,in_x6,in_x7,0,0);
  FUN_10b7984e4(param_3,param_2,PTR_s_url_1126816f8,0,0,6,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7984e4; end: 10b7984ef;  */

void FUN_10b7984e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7984f0; end: 10b79850f; -[SOJUStoryThumbnails initWithUnviewed:viewed:] */

void FUN_10b7984f0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798510; end: 10b798577; +[SOJUStoryThumbnails registerMessageFields:] */

void FUN_10b798510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1278;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b798578();
  _objc_opt_class(PTR_PTR_1126e1278);
  FUN_10b798578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798578; end: 10b79859b;  */

void FUN_10b798578(void)

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



/* Entry: 10b79859c; end: 10b7985bb; -[SOJUStrPoint initWithX:y:] */

void FUN_10b79859c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7985bc; end: 10b798617; +[SOJUStrPoint registerMessageFields:] */

void FUN_10b7985bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_x_11268d448;
  _objc_retain(param_3);
  FUN_10b798618(param_3,param_2,puVar1);
  FUN_10b798618(param_3,param_2,PTR_s_y_11268d510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798618; end: 10b79862f;  */

void FUN_10b798618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b798630; end: 10b798653; -[SOJUStrRect initWithX:y:width:height:] */

void FUN_10b798630(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798654; end: 10b7986c7; +[SOJUStrRect registerMessageFields:] */

void FUN_10b798654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7986e0();
  func_0x00010b7986c8();
  func_0x00010b7986e0();
  func_0x00010b7986c8();
  func_0x00010b7986e0();
  func_0x00010b7986c8();
  func_0x00010b7986e0();
  func_0x00010b7986c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7986c8; end: 10b7986eb;  */

void FUN_10b7986c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b7986ec; end: 10b79870b; -[SOJUStringsPair initWithKey:value:] */

void FUN_10b7986ec(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79870c; end: 10b798767; +[SOJUStringsPair registerMessageFields:] */

void FUN_10b79870c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_key_1125ff368;
  _objc_retain(param_3);
  FUN_10b798768(param_3,param_2,puVar1);
  FUN_10b798768(param_3,param_2,PTR_s_value_112683588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798768; end: 10b79877f;  */

void FUN_10b798768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b798780; end: 10b79881b;  */

undefined8 FUN_10b798780(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1098;
  func_0x00010b798880();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x241c57;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f807f8;
    func_0x00010b798880();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x2f109394;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80818;
      func_0x00010b798880();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffd47dbbd7;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
        func_0x00010b798880();
        uVar2 = 0x2398fe;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79881c; end: 10b798887;  */

undefined ** FUN_10b79881c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x2f109394) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f807f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df1098;
  if (param_1 != 0x241c57) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
  if (param_1 != 0x2398fe) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80818;
  if (param_1 != -0x2b824429) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b798888; end: 10b7988b3; -[SOJUSupportToolsCognacAirRequestOtherInfo initWithGameId:gameName:isFirstParty:buildVersion:hasScreenCaptured:appType:isAppLoaded:] */

void FUN_10b798888(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7988b4; end: 10b798987; +[SOJUSupportToolsCognacAirRequestOtherInfo registerMessageFields:] */

void FUN_10b7988b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_gameId_1125cd190;
  _objc_retain(param_3);
  func_0x00010b7989bc(param_3,param_2,puVar1,0,1,6);
  func_0x00010b7989a8();
  func_0x00010b7989bc();
  func_0x00010b798988();
  func_0x00010b7989a8();
  func_0x00010b7989bc();
  func_0x00010b798988();
  func_0x00010bf06b60(param_3,param_2,PTR_s_appType_11259f300,0,1,6,0,FUN_10b798780,FUN_10b79881c,0)
  ;
  func_0x00010b798988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798988; end: 10b7989c7;  */

void FUN_10b798988(void)

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



/* Entry: 10b7989c8; end: 10b7989d3; +[SOJUSupportToolsCognacAirRequestOtherInfoBuilder messageClass] */

void FUN_10b7989c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1280);
  return;
}



/* Entry: 10b7989d4; end: 10b7989d7; +[SOJUSupportToolsCognacAirRequestOtherInfoBuilder withJUSupportToolsCognacAirRequestOtherInfo:] */

void FUN_10b7989d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7989d8; end: 10b798a27; -[SOJUSupportToolsShakeTicketOtherInfo initWithIsAutoTicket:options:sourceScreen:sourceScreenFeatureTeam:jiraMetaInfo:tweaksInfo:hasScreenCaptured:hasVideoAttached:hasCameraRollAttachment:cameraRollAttachmentsFileNames:isFromMushroom:arroyoMode:lastCrashId:metadata:spectaclesVersion:linkedNonFatalId:cofToken:] */

void FUN_10b7989d8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798a28; end: 10b798be3; +[SOJUSupportToolsShakeTicketOtherInfo registerMessageFields:] */

void FUN_10b798a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_isAutoTicket_112547770;
  _objc_retain(param_3);
  func_0x00010b798c18(param_3,param_2,puVar1,0,1,0,in_x6,in_x7,0,0);
  func_0x00010b798c18(param_3,param_2,PTR_s_options_112618c30,0,0,7,in_x6,in_x7,0,1);
  func_0x00010b798c24();
  func_0x00010b798be4();
  func_0x00010b798be4();
  func_0x00010b798be4();
  func_0x00010b798be4();
  func_0x00010b798c04();
  func_0x00010b798c18();
  func_0x00010b798c04();
  func_0x00010b798c18();
  func_0x00010b798c04();
  func_0x00010b798c18();
  func_0x00010b798c18(param_3,param_2,PTR_s_cameraRollAttachmentsFileNames_1125477a0,0,1,7,in_x6,
                      in_x7,0,1);
  func_0x00010b798c24();
  func_0x00010b798c04();
  func_0x00010b798c18();
  func_0x00010b798be4();
  func_0x00010b798be4();
  func_0x00010b798c18(param_3,param_2,PTR_s_metadata_112610a48,0,0,7,in_x6,in_x7,0,2);
  func_0x00010b798c24();
  func_0x00010b798be4();
  func_0x00010b798be4();
  func_0x00010b798be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798be4; end: 10b798c2b;  */

void FUN_10b798be4(void)

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



/* Entry: 10b798c2c; end: 10b798c37; +[SOJUSupportToolsShakeTicketOtherInfoBuilder messageClass] */

void FUN_10b798c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1288);
  return;
}



/* Entry: 10b798c38; end: 10b798c3b; +[SOJUSupportToolsShakeTicketOtherInfoBuilder withJUSupportToolsShakeTicketOtherInfo:] */

void FUN_10b798c38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b798c3c; end: 10b798c3f; -[SOJUSupportToolsSupportToolsResponse initWithHelpvideosListingLastUpdated:] */

void FUN_10b798c3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b798c40; end: 10b798c7f; +[SOJUSupportToolsSupportToolsResponse registerMessageFields:] */

void FUN_10b798c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_helpvideosListingLastUpdated_1125477e8,0,1,2,0,0,0,0);
  return;
}



/* Entry: 10b798c80; end: 10b798d8b;  */

undefined8 FUN_10b798c80(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80838;
  func_0x00010b798e74();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3faf811;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
    func_0x00010b798e74();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x24a738;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80858;
      func_0x00010b798e74();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff86aaec21;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f67418;
        func_0x00010b798e74();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x1ed75024;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f80878;
          func_0x00010b798e74();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x3a9636bc;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f80898;
            func_0x00010b798e74();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xfffffffff6b7aa94;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110def538;
              func_0x00010b798e74();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x7d7bf7a3;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f808b8;
                func_0x00010b798e74();
                uVar2 = 0xb6ff06;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b798d8c; end: 10b798e7b;  */

undefined ** FUN_10b798d8c(long param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == -0x795513df) {
    return &PTR____CFConstantStringClassReference_110f80858;
  }
  if (param_1 == -0x948556c) {
    return &PTR____CFConstantStringClassReference_110f80898;
  }
  if (param_1 == 0x7d7bf7a3) {
    return &PTR____CFConstantStringClassReference_110def538;
  }
  if (param_1 != 0xb6ff06) {
    if (param_1 == 0x3faf811) {
      return &PTR____CFConstantStringClassReference_110f80838;
    }
    if (param_1 != 0x1ed75024) {
      if (param_1 != 0x3a9636bc) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
        if (param_1 == 0x24a738) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
        }
        return ppuVar1;
      }
      return &PTR____CFConstantStringClassReference_110f80878;
    }
    return &PTR____CFConstantStringClassReference_110f67418;
  }
  return &PTR____CFConstantStringClassReference_110f808b8;
}



/* Entry: 10b798e7c; end: 10b798e9b; -[SOJUTextAttribute initWithStart:end:attribute:] */

void FUN_10b798e7c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798e9c; end: 10b798f2f; +[SOJUTextAttribute registerMessageFields:] */

void FUN_10b798e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_start_112671080;
  _objc_retain(param_3);
  FUN_10b798f30(param_3,param_2,puVar1);
  FUN_10b798f30(param_3,param_2,PTR_s_end_1125c29d0);
  puVar1 = PTR_s_attribute_1125a1118;
  puVar2 = PTR_PTR_1126e1290;
  _objc_opt_class(PTR_PTR_1126e1290);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b798f30; end: 10b798f47;  */

void FUN_10b798f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,1,0,0);
  return;
}



/* Entry: 10b798f48; end: 10b798f67; -[SOJUTextShadowParameters initWithColor:shadowOffset:blurRadius:] */

void FUN_10b798f48(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b798f68; end: 10b798fff; +[SOJUTextShadowParameters registerMessageFields:] */

void FUN_10b798f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x7;
  
  _objc_retain(param_3);
  func_0x00010b799008();
  func_0x00010b799000();
  _objc_opt_class(PTR_PTR_1126d9120);
  func_0x00010b799008();
  func_0x00010b799000();
  func_0x00010b799000(param_3,param_2,PTR_s_blurRadius_1125a5398,0,1,3,0,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b799000; end: 10b79901b;  */

void FUN_10b799000(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79901c; end: 10b79903b; -[SOJUUnlockGetUnlocksResponse initWithGeofilters:groupedUnlocks:] */

void FUN_10b79901c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79903c; end: 10b7990c3; +[SOJUUnlockGetUnlocksResponse registerMessageFields:] */

void FUN_10b79903c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc140;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b7990d0();
  func_0x00010b7990c4();
  _objc_opt_class(PTR_PTR_1126e1298);
  func_0x00010b7990d0();
  func_0x00010b7990c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7990c4; end: 10b7990e3;  */

void FUN_10b7990c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7990e4; end: 10b799103; -[SOJUUnlockMetadataResponse initWithMetadata:status:] */

void FUN_10b7990e4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b799104; end: 10b7991ab; +[SOJUUnlockMetadataResponse registerMessageFields:] */

void FUN_10b799104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc140;
  puVar1 = PTR_s_metadata_112610a48;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_status_112672580,0,0,6,0,FUN_10b7992e4,FUN_10b799558,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7991ac; end: 10b7991af; -[SOJUUnlockOrderedUnlocks initWithUnlocks:] */

void FUN_10b7991ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7991b0; end: 10b799227; +[SOJUUnlockOrderedUnlocks registerMessageFields:] */

void FUN_10b7991b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1090;
  puVar1 = PTR_s_unlocks_11267e008;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b799228; end: 10b799247; -[SOJUUnlockSortedUnlocksResponse initWithGeofilters:unlocks:] */

void FUN_10b799228(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b799248; end: 10b7992c3; +[SOJUUnlockSortedUnlocksResponse registerMessageFields:] */

void FUN_10b799248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc140;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b7992c4(2);
  _objc_opt_class(PTR_PTR_1126e1090);
  FUN_10b7992c4(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7992c4; end: 10b7992e3;  */

void FUN_10b7992c4(undefined8 param_1)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


