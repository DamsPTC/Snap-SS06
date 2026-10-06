/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b764344; end: 10b7643af;  */

undefined8 FUN_10b764344(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c758;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c758,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffff773c24f;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7c738;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c738,param_2,param_1);
    uVar2 = 0x11bed;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7643b0; end: 10b7643e7;  */

undefined ** FUN_10b7643b0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c738;
  if (param_1 != 0x11bed) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c758;
  if (param_1 != -0x88c3db1) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7643e8; end: 10b764417; -[SOJUAdSnapCreationInfo initWithCamera:isAudioOn:mediaType:snapDurationMillis:snapPreviewMillis:geofilterLoadedCount:filterCarouselEntryDirection:filterSwipeCount:] */

void FUN_10b7643e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b764418; end: 10b7644f7; +[SOJUAdSnapCreationInfo registerMessageFields:] */

void FUN_10b764418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_camera_1125a7d40;
  _objc_retain(param_3);
  func_0x00010b76452c(param_3,param_2,puVar1,0,0,2);
  func_0x00010b764518();
  func_0x00010b76452c();
  func_0x00010b764518();
  func_0x00010b76452c();
  func_0x00010b7644f8();
  func_0x00010b7644f8();
  func_0x00010b7644f8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_filterCarouselEntryDirection_1125c9038,0,1,6,0,
                      FUN_10b764548,FUN_10b7645c8,0);
  func_0x00010b7644f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7644f8; end: 10b764537;  */

void FUN_10b7644f8(void)

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



/* Entry: 10b764538; end: 10b764543; +[SOJUAdSnapCreationInfoBuilder messageClass] */

void FUN_10b764538(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0788);
  return;
}



/* Entry: 10b764544; end: 10b764547; +[SOJUAdSnapCreationInfoBuilder withJUAdSnapCreationInfo:] */

void FUN_10b764544(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b764548; end: 10b7645c7;  */

undefined8 FUN_10b764548(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  func_0x00010b764614();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x24a738;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ede1d8;
    func_0x00010b764614();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x239807;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ede1f8;
      func_0x00010b764614();
      uVar2 = 0x4a5c9fc;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7645c8; end: 10b76461b;  */

undefined ** FUN_10b7645c8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x239807) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ede1d8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  if (param_1 != 0x24a738) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ede1f8;
  if (param_1 != 0x4a5c9fc) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76461c; end: 10b76463f; -[SOJUAdSourceConfig initWithName:type:behavior:params:] */

void FUN_10b76461c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b764640; end: 10b76470f; +[SOJUAdSourceConfig registerMessageFields:] */

void FUN_10b764640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_name_112612df0;
  _objc_retain(param_3);
  func_0x00010b764728(param_3,param_2,puVar1,0,0,6);
  func_0x00010b764710();
  func_0x00010b764710();
  func_0x00010b764728(param_3,param_2,PTR_s_params_11261a858,0,0,7);
  func_0x00010c19a460(param_3,param_2,0x3e2345a5bc012c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b764710; end: 10b764733;  */

void FUN_10b764710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b764734; end: 10b7647b3;  */

undefined8 FUN_10b764734(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddecd8;
  func_0x00010b764808();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x180899e2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddecf8;
    func_0x00010b764808();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff91b76d20;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7c898;
      func_0x00010b764808();
      uVar2 = 0x5c0596e2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7647b4; end: 10b76480f;  */

undefined ** FUN_10b7647b4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x6e4892e0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ddecf8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddecd8;
  if (param_1 != 0x180899e2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c898;
  if (param_1 != 0x5c0596e2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b764810; end: 10b76487b;  */

undefined8 FUN_10b764810(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2d998;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2d998,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff84acfca6;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7c8b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c8b8,param_2,param_1);
    uVar2 = 0x1842e;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76487c; end: 10b7648b3;  */

undefined ** FUN_10b76487c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c8b8;
  if (param_1 != 0x1842e) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2d998;
  if (param_1 != -0x7b53035a) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7648b4; end: 10b7648d7; -[SOJUAdSourcesConfig initWithAdSources:useV2:shutOffRules:useAppInstallV2:] */

void FUN_10b7648b4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7648d8; end: 10b764967; +[SOJUAdSourcesConfig registerMessageFields:] */

void FUN_10b7648d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0860;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b764968();
  func_0x00010b764988();
  _objc_opt_class(PTR_PTR_1126e0868);
  FUN_10b764968();
  func_0x00010b764988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b764968; end: 10b7649a7;  */

void FUN_10b764968(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7649a8; end: 10b7649e3; -[SOJUAdStoryImpressionTrack initWithTimeViewedSeconds:mediaDurationSeconds:snapCount:viewedSnapIndex:exitEvent:uniqueSwipeUps:totalSwipeUps:isAudioOn:snapImpressions:tileImpression:creativeId:] */

void FUN_10b7649a8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7649e4; end: 10b764b03; +[SOJUAdStoryImpressionTrack registerMessageFields:] */

void FUN_10b7649e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timeViewedSeconds_112679930;
  _objc_retain(param_3);
  func_0x00010b764b38(param_3,param_2,puVar1,0,1,3);
  func_0x00010b764b24();
  func_0x00010b764b38();
  func_0x00010b764b04();
  func_0x00010b764b04();
  func_0x00010b764b24();
  func_0x00010b764b38();
  func_0x00010b764b04();
  func_0x00010b764b04();
  func_0x00010b764b24();
  func_0x00010b764b38();
  _objc_opt_class(PTR_PTR_1126e0870);
  func_0x00010b764b44();
  _objc_opt_class(PTR_PTR_1126e0878);
  func_0x00010b764b44();
  func_0x00010b764b24();
  func_0x00010b764b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b764b04; end: 10b764b5f;  */

void FUN_10b764b04(void)

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



/* Entry: 10b764b60; end: 10b764ba3; -[SOJUAdStorySnapImpressionTrack initWithSnapIndex:swipeUpCount:skipEvent:adType:threeV:appInstall:longformVideo:remoteWebpage:localWebpage:deepLink:subscribe:adToLens:adToCall:adToMessage:] */

void FUN_10b764b60(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b764ba4; end: 10b764d53; +[SOJUAdStorySnapImpressionTrack registerMessageFields:] */

void FUN_10b764ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b764d78();
  func_0x00010b764d8c();
  func_0x00010b764d94();
  func_0x00010b764d8c();
  func_0x00010b764d94();
  func_0x00010b764d8c();
  func_0x00010b764d94();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e07a8);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e07b0);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e07b8);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e0768);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e07c0);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e0770);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e07e8);
  func_0x00010b764d78();
  func_0x00010b764d8c();
  _objc_opt_class(PTR_PTR_1126e07f0);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e0810);
  func_0x00010b764d54();
  _objc_opt_class(PTR_PTR_1126e0818);
  func_0x00010b764d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b764d54; end: 10b764da3;  */

void FUN_10b764d54(void)

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



/* Entry: 10b764da4; end: 10b764deb; -[SOJUAdSubscribeImpressionTrack initWithTopsnapTimeViewedSeconds:topsnapMediaDurationSeconds:longformTimeViewedSeconds:swiped:renderedTimestampInMilliSeconds:deltaBetweenReceiveAndRenderMillis:channelSubscribedEndStatus:swipeCount:creativeId:topsnapAudioPlaybackVolume:longformAudioPlaybackVolume:topsnapTimeViewedBeforeInteractionSeconds:topsnapVolumes:topsnapMaxContinuousTimeViewedSeconds:topsnapAudibleTimeViewedSeconds:topsnapMediaType:] */

void FUN_10b764da4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b764dec; end: 10b764f63; +[SOJUAdSubscribeImpressionTrack registerMessageFields:] */

void FUN_10b764dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b764fa4();
  func_0x00010b764f98();
  func_0x00010b764f64();
  func_0x00010b764f64();
  func_0x00010b764f98(param_3,param_2,PTR_s_swiped_112676f30,0,0,0);
  func_0x00010b764f84();
  func_0x00010b764f98();
  func_0x00010b764f84();
  func_0x00010b764f98();
  func_0x00010b764f84();
  func_0x00010b764f98();
  func_0x00010b764f84();
  func_0x00010b764f98();
  func_0x00010b764f84();
  func_0x00010b764f98();
  func_0x00010b764f64();
  func_0x00010b764f64();
  func_0x00010b764f64();
  _objc_opt_class(PTR_PTR_1126e0758);
  func_0x00010b764fa4();
  func_0x00010bf06b60();
  func_0x00010b764f64();
  func_0x00010b764f64();
  func_0x00010bf06b60(param_3,param_2,PTR_s_topsnapMediaType_1125445e8,0,1,6,0,FUN_10b76549c,
                      FUN_10b765508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b764f64; end: 10b764fbb;  */

void FUN_10b764f64(void)

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



/* Entry: 10b764fbc; end: 10b764fdb; -[SOJUAdTargeting initWithContentStreamId:sessionTargetingString:targetingMap:] */

void FUN_10b764fbc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b764fdc; end: 10b76507b; +[SOJUAdTargeting registerMessageFields:] */

void FUN_10b764fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_contentStreamId_1125449c8;
  _objc_retain(param_3);
  FUN_10b76507c(param_3,param_2,puVar1);
  FUN_10b76507c(param_3,param_2,PTR_s_sessionTargetingString_1125449d0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_targetingMap_112678308,0,1,7,0,0,0,2);
  func_0x00010c19a460(param_3,param_2,0xdd996f4910bb36);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76507c; end: 10b765093;  */

void FUN_10b76507c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b765094; end: 10b7650cf; -[SOJUAdThreeVImpressionTrack initWithTopsnapTimeViewedSeconds:topsnapMediaDurationSeconds:renderedTimestampInMilliSeconds:deltaBetweenReceiveAndRenderMillis:creativeId:topsnapAudioPlaybackVolume:topsnapTimeViewedBeforeInteractionSeconds:topsnapVolumes:topsnapMaxContinuousTimeViewedSeconds:topsnapAudibleTimeViewedSeconds:topsnapMediaType:] */

void FUN_10b765094(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7650d0; end: 10b7651e7; +[SOJUAdThreeVImpressionTrack registerMessageFields:] */

void FUN_10b7650d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b765228();
  func_0x00010b76521c();
  func_0x00010b7651e8();
  func_0x00010b765208();
  func_0x00010b76521c();
  func_0x00010b765208();
  func_0x00010b76521c();
  func_0x00010b765208();
  func_0x00010b76521c();
  func_0x00010b7651e8();
  func_0x00010b7651e8();
  _objc_opt_class(PTR_PTR_1126e0758);
  func_0x00010b765228();
  func_0x00010bf06b60();
  func_0x00010b7651e8();
  func_0x00010b7651e8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_topsnapMediaType_1125445e8,0,1,6,0,FUN_10b76549c,
                      FUN_10b765508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7651e8; end: 10b76523f;  */

void FUN_10b7651e8(void)

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



/* Entry: 10b765240; end: 10b76525f; -[SOJUAdTileImpressionTrack initWithIsViewed:isViewedAppSession:tileTapped:] */

void FUN_10b765240(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b765260; end: 10b7652cf; +[SOJUAdTileImpressionTrack registerMessageFields:] */

void FUN_10b765260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_isViewed_1125fe760;
  _objc_retain(param_3);
  FUN_10b7652d0(param_3,param_2,puVar1);
  FUN_10b7652d0(param_3,param_2,PTR_s_isViewedAppSession_1125449e8);
  FUN_10b7652d0(param_3,param_2,PTR_s_tileTapped_1125449f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7652d0; end: 10b7652e7;  */

void FUN_10b7652d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,0,0,0);
  return;
}



/* Entry: 10b7652e8; end: 10b76532b; -[SOJUAdTileViewImpressionTrack initWithLensId:rawAdData:encryptedSponsoredUnlockableTargetingInfoData:rankingId:rankingData:encGeoData:lensCreativeId:adFlagData:tileTimeMillis:tileTapped:launchedSelfie:tileIndexPos:tileMaxViewedPercentage:] */

void FUN_10b7652e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76532c; end: 10b765443; +[SOJUAdTileViewImpressionTrack registerMessageFields:] */

void FUN_10b76532c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b765484();
  func_0x00010b765478();
  func_0x00010b765444();
  func_0x00010b765444();
  func_0x00010b765444();
  func_0x00010b765444();
  func_0x00010b765444();
  func_0x00010b765444();
  _objc_opt_class(PTR_PTR_1126e0738);
  func_0x00010b765484();
  func_0x00010bf06b60();
  func_0x00010b765464();
  func_0x00010b765478();
  func_0x00010b765464();
  func_0x00010b765478();
  func_0x00010b765464();
  func_0x00010b765478();
  func_0x00010b765464();
  func_0x00010b765478();
  func_0x00010b765464();
  func_0x00010b765478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b765444; end: 10b76549b;  */

void FUN_10b765444(void)

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



/* Entry: 10b76549c; end: 10b765507;  */

undefined8 FUN_10b76549c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db93d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db93d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x428b13b;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db93f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db93f8,param_2,param_1);
    uVar2 = 0x4de1c5b;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b765508; end: 10b765543;  */

undefined ** FUN_10b765508(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db93f8;
  if (param_1 != 0x4de1c5b) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db93d8;
  if (param_1 != 0x428b13b) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b765544; end: 10b76556b; -[SOJUAdTopsnapVolumes initWithMaxVolumeAtStart:maxVolumeAt25PercentMediaDuration:maxVolumeAt50PercentMediaDuration:maxVolumeAt75PercentMediaDuration:maxVolumeAt97PercentMediaDuration:maxVolumeAt100PercentMediaDuration:] */

void FUN_10b765544(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76556c; end: 10b76563f; +[SOJUAdTopsnapVolumes registerMessageFields:] */

void FUN_10b76556c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_maxVolumeAtStart_112544a20;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,3,0,0,0,0);
  FUN_10b765640();
  FUN_10b765640();
  FUN_10b765640();
  FUN_10b765640();
  FUN_10b765640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b765640; end: 10b765657;  */

void FUN_10b765640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b765658; end: 10b76567f; -[SOJUAdTrackInfo initWithSceid:userData:trackHostAndPath:pixelToken:userDataV2Deprecated:userDataV2Encrypted:] */

void FUN_10b765658(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b765680; end: 10b765747; +[SOJUAdTrackInfo registerMessageFields:] */

void FUN_10b765680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_sceid_112544a58;
  _objc_retain(param_3);
  func_0x00010b765768(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  func_0x00010b765748();
  func_0x00010b765748();
  func_0x00010b765748();
  func_0x00010b765768(param_3,param_2,PTR_s_userDataV2Deprecated_112544a60,
                      &PTR____CFConstantStringClassReference_110f7c978,2,7,in_x6,in_x7,0,0);
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0x636e70e1012430);
  func_0x00010b765748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b765748; end: 10b765773;  */

void FUN_10b765748(void)

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



/* Entry: 10b765774; end: 10b7657cf; -[SOJUAdTrackRequest initWithRequestId:canTrack:userAdId:rawUserData:rawAdData:targeting:impressionData:debug:sessionId:trackSeqNum:attemptSeqNum:clientRankingModelOutput:clientRankingNoShow:clientRankingFeatures:opportunityRequestId:creationTimestampMs:appInfo:deviceInfo:numberOfAttempts:] */

void FUN_10b765774(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7657d0; end: 10b76598f; +[SOJUAdTrackRequest registerMessageFields:] */

void FUN_10b7657d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7659f4();
  func_0x00010b7659e8();
  func_0x00010b7659d4();
  func_0x00010b7659e8();
  func_0x00010b7659b4();
  func_0x00010b7659b4();
  func_0x00010b7659b4();
  _objc_opt_class(PTR_PTR_1126e0880);
  func_0x00010b7659f4();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0828);
  func_0x00010b765990();
  func_0x00010b7659e8(param_3,param_2,PTR_s_debug_1125b7188,0,0,0);
  func_0x00010b7659b4();
  func_0x00010b7659d4();
  func_0x00010b7659e8();
  func_0x00010b7659d4();
  func_0x00010b7659e8();
  _objc_opt_class(PTR_PTR_1126e0888);
  func_0x00010b765990();
  func_0x00010b7659d4();
  func_0x00010b7659e8();
  _objc_opt_class(PTR_PTR_1126e0890);
  func_0x00010b765990();
  func_0x00010b7659b4();
  func_0x00010b7659d4();
  func_0x00010b7659e8();
  _objc_opt_class(PTR_PTR_1126e0898);
  func_0x00010b765990();
  _objc_opt_class(PTR_PTR_1126e08a0);
  func_0x00010b765990();
  func_0x00010b7659d4();
  func_0x00010b7659e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b765990; end: 10b765a07;  */

void FUN_10b765990(void)

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



/* Entry: 10b765a08; end: 10b765a13; +[SOJUAdTrackRequestBuilder messageClass] */

void FUN_10b765a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e08a8);
  return;
}



/* Entry: 10b765a14; end: 10b765a17; +[SOJUAdTrackRequestBuilder withJUAdTrackRequest:] */

void FUN_10b765a14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b765a18; end: 10b765c8f;  */

undefined8 FUN_10b765a18(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c998;
  func_0x00010b765ee8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffdb0c51d5;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45478;
    func_0x00010b765ee8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffa670c53d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7c818;
      func_0x00010b765ee8();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffaf62b49c;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7c9b8;
        func_0x00010b765ee8();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x43bdcca;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7c9d8;
          func_0x00010b765ee8();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x31dd02cf;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e9c0b8;
            func_0x00010b765ee8();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x4b900d5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7c9f8;
              func_0x00010b765ee8();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffffb52bf09f;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110df83b8;
                func_0x00010b765ee8();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffffaa508d41;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e77c58;
                  func_0x00010b765ee8();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xffffffffa77d2781;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110e77d18;
                    func_0x00010b765ee8();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xffffffffe4cfaa47;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7ca18;
                      func_0x00010b765ee8();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xffffffffc68b0535;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110e550f8;
                        func_0x00010b765ee8();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x7b9bbf78;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110e0dbb8;
                          func_0x00010b765ee8();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xfffffffffc6d3fa6;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
                            func_0x00010b765ee8();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x2398fe;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f499f8;
                              func_0x00010b765ee8();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xffffffffdd1b7826;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7ca38;
                                func_0x00010b765ee8();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xfffffffffa1874a0;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f6c438;
                                  func_0x00010b765ee8();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xffffffffb51f9a9e;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ca58;
                                    func_0x00010b765ee8();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xffffffffb52c594f;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7ca78;
                                      func_0x00010b765ee8();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xffffffffdd175186;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7ca98;
                                        func_0x00010b765ee8();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0xffffffffb4d07bbf;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7cab8
                                          ;
                                          func_0x00010b765ee8();
                                          uVar2 = 0xffffffffc68ee6bf;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b765c90; end: 10b765eef;  */

undefined ** FUN_10b765c90(long param_1)

{
  if (param_1 == 0x7b9bbf78) {
    return &PTR____CFConstantStringClassReference_110e550f8;
  }
  if (param_1 == -0x5882d87f) {
    return &PTR____CFConstantStringClassReference_110e77c58;
  }
  if (param_1 == -0x55af72bf) {
    return &PTR____CFConstantStringClassReference_110df83b8;
  }
  if (param_1 == -0x509d4b64) {
    return &PTR____CFConstantStringClassReference_110f7c818;
  }
  if (param_1 == -0x4b2f8441) {
    return &PTR____CFConstantStringClassReference_110f7ca98;
  }
  if (param_1 == -0x4ae06562) {
    return &PTR____CFConstantStringClassReference_110f6c438;
  }
  if (param_1 == -0x4ad40f61) {
    return &PTR____CFConstantStringClassReference_110f7c9f8;
  }
  if (param_1 == -0x4ad3a6b1) {
    return &PTR____CFConstantStringClassReference_110f7ca58;
  }
  if (param_1 == -0x3974facb) {
    return &PTR____CFConstantStringClassReference_110f7ca18;
  }
  if (param_1 == -0x39711941) {
    return &PTR____CFConstantStringClassReference_110f7cab8;
  }
  if (param_1 == -0x24f3ae2b) {
    return &PTR____CFConstantStringClassReference_110f7c998;
  }
  if (param_1 == -0x22e8ae7a) {
    return &PTR____CFConstantStringClassReference_110f7ca78;
  }
  if (param_1 == -0x22e487da) {
    return &PTR____CFConstantStringClassReference_110f499f8;
  }
  if (param_1 == -0x1b3055b9) {
    return &PTR____CFConstantStringClassReference_110e77d18;
  }
  if (param_1 == -0x5e78b60) {
    return &PTR____CFConstantStringClassReference_110f7ca38;
  }
  if (param_1 != -0x392c05a) {
    if (param_1 == 0x2398fe) {
      return &PTR____CFConstantStringClassReference_110e3ddf8;
    }
    if (param_1 == 0x43bdcca) {
      return &PTR____CFConstantStringClassReference_110f7c9b8;
    }
    if (param_1 == 0x4b900d5) {
      return &PTR____CFConstantStringClassReference_110e9c0b8;
    }
    if (param_1 != 0x31dd02cf) {
      if (param_1 == -0x598f3ac3) {
        return &PTR____CFConstantStringClassReference_110e45478;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110f7c9d8;
  }
  return &PTR____CFConstantStringClassReference_110e0dbb8;
}



/* Entry: 10b765ef0; end: 10b765f13; -[SOJUAdUnlockableAttachmentImpression initWithLongformVideoImpression:remoteWebpageImpression:appInstallImpression:deepLinkImpression:] */

void FUN_10b765ef0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b765f14; end: 10b765faf; +[SOJUAdUnlockableAttachmentImpression registerMessageFields:] */

void FUN_10b765f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e08b0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b765fb0();
  _objc_opt_class(PTR_PTR_1126e08b8);
  FUN_10b765fb0();
  _objc_opt_class(PTR_PTR_1126e08c0);
  FUN_10b765fb0();
  _objc_opt_class(PTR_PTR_1126e08c8);
  FUN_10b765fb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b765fb0; end: 10b765fd3;  */

void FUN_10b765fb0(void)

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



/* Entry: 10b765fd4; end: 10b765fdf; +[SOJUAdUnlockableAttachmentImpressionBuilder messageClass] */

void FUN_10b765fd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e07a0);
  return;
}



/* Entry: 10b765fe0; end: 10b765fe3; +[SOJUAdUnlockableAttachmentImpressionBuilder withJUAdUnlockableAttachmentImpression:] */

void FUN_10b765fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b765fe4; end: 10b766003; -[SOJUAdUnlockableDeepLink initWithOpenTimestampMs:redirectToStore:redirectToWebview:] */

void FUN_10b765fe4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b766004; end: 10b766077; +[SOJUAdUnlockableDeepLink registerMessageFields:] */

void FUN_10b766004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_openTimestampMs_112544ae0;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,2,0,0,0,0);
  FUN_10b766078();
  FUN_10b766078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b766078; end: 10b766097;  */

void FUN_10b766078(void)

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



/* Entry: 10b766098; end: 10b7660a3; +[SOJUAdUnlockableDeepLinkBuilder messageClass] */

void FUN_10b766098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e08c8);
  return;
}



/* Entry: 10b7660a4; end: 10b7660a7; +[SOJUAdUnlockableDeepLinkBuilder withJUAdUnlockableDeepLink:] */

void FUN_10b7660a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7660a8; end: 10b7660ab; -[SOJUAdUnlockableLongformAppInstall initWithOpenTimestampMs:] */

void FUN_10b7660a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7660ac; end: 10b7660eb; +[SOJUAdUnlockableLongformAppInstall registerMessageFields:] */

void FUN_10b7660ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_openTimestampMs_112544ae0,0,1,2,0,0,0,0);
  return;
}



/* Entry: 10b7660ec; end: 10b7660f7; +[SOJUAdUnlockableLongformAppInstallBuilder messageClass] */

void FUN_10b7660ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e08c0);
  return;
}



/* Entry: 10b7660f8; end: 10b7660fb; +[SOJUAdUnlockableLongformAppInstallBuilder withJUAdUnlockableLongformAppInstall:] */

void FUN_10b7660f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7660fc; end: 10b76611f; -[SOJUAdUnlockableLongformVideoView initWithViewTimeSec:mediaDurationSec:renderedTimestampMs:openTimestampMs:] */

void FUN_10b7660fc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b766120; end: 10b7661af; +[SOJUAdUnlockableLongformVideoView registerMessageFields:] */

void FUN_10b766120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_viewTimeSec_112685368;
  _objc_retain(param_3);
  FUN_10b7661b0(param_3,param_2,puVar1,0,1,3,in_x6,in_x7,0,0);
  func_0x00010b7661bc();
  FUN_10b7661b0();
  func_0x00010b7661bc();
  FUN_10b7661b0();
  func_0x00010b7661bc();
  FUN_10b7661b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7661b0; end: 10b7661cf;  */

void FUN_10b7661b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7661d0; end: 10b7661db; +[SOJUAdUnlockableLongformVideoViewBuilder messageClass] */

void FUN_10b7661d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e08b0);
  return;
}



/* Entry: 10b7661dc; end: 10b7661df; +[SOJUAdUnlockableLongformVideoViewBuilder withJUAdUnlockableLongformVideoView:] */

void FUN_10b7661dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7661e0; end: 10b766207; -[SOJUAdUnlockableLongformWebviewView initWithViewTimeSec:renderedTimestampMs:loadedOnEntry:loadedOnExit:openTimestampMs:pixelCookieSet:] */

void FUN_10b7661e0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b766208; end: 10b7662a7; +[SOJUAdUnlockableLongformWebviewView registerMessageFields:] */

void FUN_10b766208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_viewTimeSec_112685368;
  _objc_retain(param_3);
  func_0x00010b7662c8(param_3,param_2,puVar1,0,1,3,in_x6,in_x7,0,0);
  func_0x00010b7662d4();
  func_0x00010b7662c8();
  func_0x00010b7662a8();
  func_0x00010b7662a8();
  func_0x00010b7662d4();
  func_0x00010b7662c8();
  func_0x00010b7662a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7662a8; end: 10b7662e7;  */

void FUN_10b7662a8(void)

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



/* Entry: 10b7662e8; end: 10b7662f3; +[SOJUAdUnlockableLongformWebviewViewBuilder messageClass] */

void FUN_10b7662e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e08b8);
  return;
}



/* Entry: 10b7662f4; end: 10b7662f7; +[SOJUAdUnlockableLongformWebviewViewBuilder withJUAdUnlockableLongformWebviewView:] */

void FUN_10b7662f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7662f8; end: 10b766327; -[SOJUAdUnlockableViewImpressionTrack initWithTimeViewedSeconds:mediaDurationSeconds:encGeoData:isAudioOn:snapViewType:deviceInfo:snappableInviteAction:unlockablesSnapInfo:] */

void FUN_10b7662f8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b766328; end: 10b766427; +[SOJUAdUnlockableViewImpressionTrack registerMessageFields:] */

void FUN_10b766328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b766468();
  func_0x00010b766440();
  func_0x00010b76644c();
  func_0x00010b766440();
  func_0x00010b766428();
  func_0x00010b766460();
  func_0x00010b76644c();
  func_0x00010b766440();
  func_0x00010b766428();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0780);
  func_0x00010b766468();
  func_0x00010b766460();
  func_0x00010b766428();
  func_0x00010bf06b60();
  func_0x00010b766428();
  func_0x00010b766460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b766428; end: 10b76647f;  */

void FUN_10b766428(void)

{
  return;
}



/* Entry: 10b766480; end: 10b76648b; +[SOJUAdUnlockableViewImpressionTrackBuilder messageClass] */

void FUN_10b766480(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e07d8);
  return;
}



/* Entry: 10b76648c; end: 10b76648f; +[SOJUAdUnlockableViewImpressionTrackBuilder withJUAdUnlockableViewImpressionTrack:] */

void FUN_10b76648c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b766490; end: 10b76659b;  */

undefined8 FUN_10b766490(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e53518;
  func_0x00010b766680();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x20479a60;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9c0b8;
    func_0x00010b766680();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x4b900d5;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7cad8;
      func_0x00010b766680();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffebbd366a;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7caf8;
        func_0x00010b766680();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffd6a0e688;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7cb18;
          func_0x00010b766680();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffd6a7cb2c;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7cb38;
            func_0x00010b766680();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffaaa05e54;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7cb58;
              func_0x00010b766680();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffffa04af849;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110e77c58;
                func_0x00010b766680();
                uVar2 = 0xffffffffa77d2781;
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



/* Entry: 10b76659c; end: 10b766687;  */

undefined ** FUN_10b76659c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_1 == -0x5fb507b7) {
    return &PTR____CFConstantStringClassReference_110f7cb58;
  }
  if (param_1 == -0x5882d87f) {
    return &PTR____CFConstantStringClassReference_110e77c58;
  }
  if (param_1 == -0x555fa1ac) {
    return &PTR____CFConstantStringClassReference_110f7cb38;
  }
  if (param_1 != -0x295f1978) {
    if (param_1 == -0x295834d4) {
      return &PTR____CFConstantStringClassReference_110f7cb18;
    }
    if (param_1 != -0x1442c996) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
      if (param_1 == 0x4b900d5) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e9c0b8;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e53518;
      if (param_1 != 0x20479a60) {
        ppuVar2 = ppuVar1;
      }
      return ppuVar2;
    }
    return &PTR____CFConstantStringClassReference_110f7cad8;
  }
  return &PTR____CFConstantStringClassReference_110f7caf8;
}



/* Entry: 10b766688; end: 10b7666f3;  */

undefined8 FUN_10b766688(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6a798;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6a798,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x22d52a;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd93b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd93b8,param_2,param_1);
    uVar2 = 0x26dd7f;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7666f4; end: 10b766727;  */

undefined ** FUN_10b7666f4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd93b8;
  if (param_1 != 0x26dd7f) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f6a798;
  if (param_1 != 0x22d52a) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b766728; end: 10b766b5b;  */

ulong FUN_10b766728(undefined8 param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f18b38;
  func_0x00010b766f74();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff9c9717e5;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f18b58;
    func_0x00010b766f74();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffcf5d0adf;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f18b78;
      func_0x00010b766f74();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x1a040a22;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f18b98;
        func_0x00010b766f74();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x248de666;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f18bb8;
          func_0x00010b766f74();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xfffffffff2b19ec8;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f18bd8;
            func_0x00010b766f74();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x1a0e6a1a;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f18bf8;
              func_0x00010b766f74();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffffa8b9a5bd;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f18c18;
                func_0x00010b766f74();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffff92f34e84;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f18c38;
                  func_0x00010b766f74();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xffffffffeab1a352;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f18c58;
                    func_0x00010b766f74();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x1b567ead;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f18c78;
                      func_0x00010b766f74();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xfffffffff15f6d47;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f18c98;
                        func_0x00010b766f74();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x431dca04;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f18cb8;
                          func_0x00010b766f74();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x2e879d01;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f18cf8;
                            func_0x00010b766f74();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xfffffffffb643e43;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f18d18;
                              func_0x00010b766f74();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar3 = 0xb737;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18d38;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x1070c589;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18d58;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x78fe2cec;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18d78;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xfffffffffbd02932;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18d98;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xffffffff98198191;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18db8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x2e593b1b;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18dd8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x2f5432a1;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18ed8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x4a68a6a6;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18df8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x7ebc3d7f;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18e18;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xffffffff8d60a69e;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110e056f8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x10ca441e;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18e38;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x20e40509;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18e58;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x1df5c7d4;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18e78;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x2e5189e1;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18eb8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xffffffff8fc9b466;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18e98;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xffffffffaf01eee0;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18ef8;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x5740d2fe;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f18f18;
                                func_0x00010b766f74();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xfffffffffb39d9f1;
                                  goto LAB_10b766b44;
                                }
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7cb78;
                                func_0x00010b766f74();
                                if (ppuVar1 != (undefined **)0x0) {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f18f38;
                                  func_0x00010b766f74();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x54110798;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f18f58;
                                    func_0x00010b766f74();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x6424ea8b;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f18f78;
                                      func_0x00010b766f74();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xffffffff9bfe2613;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f18cd8;
                                        func_0x00010b766f74();
                                        uVar2 = 0x3cf4b9ff;
                                        if (ppuVar1 != (undefined **)0x0) {
                                          uVar2 = 0;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_10b766b44;
                                }
                                uVar3 = 0xdb8b;
                              }
                              uVar2 = (ulong)(uVar3 | 0x9c00000);
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
LAB_10b766b44:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b766b5c; end: 10b766f7b;  */

undefined ** FUN_10b766b5c(long param_1)

{
  if (param_1 == -0x729f5962) {
    return &PTR____CFConstantStringClassReference_110f18e18;
  }
  if (param_1 == -0x70364b9a) {
    return &PTR____CFConstantStringClassReference_110f18eb8;
  }
  if (param_1 == -0x6d0cb17c) {
    return &PTR____CFConstantStringClassReference_110f18c18;
  }
  if (param_1 == -0x67e67e6f) {
    return &PTR____CFConstantStringClassReference_110f18d98;
  }
  if (param_1 == -0x6401d9ed) {
    return &PTR____CFConstantStringClassReference_110f18f78;
  }
  if (param_1 == -0x6368e81b) {
    return &PTR____CFConstantStringClassReference_110f18b38;
  }
  if (param_1 == -0x57465a43) {
    return &PTR____CFConstantStringClassReference_110f18bf8;
  }
  if (param_1 == -0x50fe1120) {
    return &PTR____CFConstantStringClassReference_110f18e98;
  }
  if (param_1 == 0x7ebc3d7f) {
    return &PTR____CFConstantStringClassReference_110f18df8;
  }
  if (param_1 == -0x154e5cae) {
    return &PTR____CFConstantStringClassReference_110f18c38;
  }
  if (param_1 == -0xea092b9) {
    return &PTR____CFConstantStringClassReference_110f18c78;
  }
  if (param_1 == -0xd4e6138) {
    return &PTR____CFConstantStringClassReference_110f18bb8;
  }
  if (param_1 == -0x4c6260f) {
    return &PTR____CFConstantStringClassReference_110f18f18;
  }
  if (param_1 == -0x49bc1bd) {
    return &PTR____CFConstantStringClassReference_110f18cf8;
  }
  if (param_1 == -0x42fd6ce) {
    return &PTR____CFConstantStringClassReference_110f18d78;
  }
  if (param_1 == 0x9c0b737) {
    return &PTR____CFConstantStringClassReference_110f18d18;
  }
  if (param_1 == 0x9c0db8b) {
    return &PTR____CFConstantStringClassReference_110f7cb78;
  }
  if (param_1 == 0x1070c589) {
    return &PTR____CFConstantStringClassReference_110f18d38;
  }
  if (param_1 == 0x10ca441e) {
    return &PTR____CFConstantStringClassReference_110e056f8;
  }
  if (param_1 == 0x1a040a22) {
    return &PTR____CFConstantStringClassReference_110f18b78;
  }
  if (param_1 == 0x1a0e6a1a) {
    return &PTR____CFConstantStringClassReference_110f18bd8;
  }
  if (param_1 == 0x1b567ead) {
    return &PTR____CFConstantStringClassReference_110f18c58;
  }
  if (param_1 == 0x1df5c7d4) {
    return &PTR____CFConstantStringClassReference_110f18e58;
  }
  if (param_1 == 0x20e40509) {
    return &PTR____CFConstantStringClassReference_110f18e38;
  }
  if (param_1 == 0x248de666) {
    return &PTR____CFConstantStringClassReference_110f18b98;
  }
  if (param_1 == 0x2e5189e1) {
    return &PTR____CFConstantStringClassReference_110f18e78;
  }
  if (param_1 == 0x2e593b1b) {
    return &PTR____CFConstantStringClassReference_110f18db8;
  }
  if (param_1 == 0x2e879d01) {
    return &PTR____CFConstantStringClassReference_110f18cb8;
  }
  if (param_1 == 0x2f5432a1) {
    return &PTR____CFConstantStringClassReference_110f18dd8;
  }
  if (param_1 == 0x3cf4b9ff) {
    return &PTR____CFConstantStringClassReference_110f18cd8;
  }
  if (param_1 == 0x431dca04) {
    return &PTR____CFConstantStringClassReference_110f18c98;
  }
  if (param_1 != 0x4a68a6a6) {
    if (param_1 == 0x54110798) {
      return &PTR____CFConstantStringClassReference_110f18f38;
    }
    if (param_1 == 0x5740d2fe) {
      return &PTR____CFConstantStringClassReference_110f18ef8;
    }
    if (param_1 == 0x6424ea8b) {
      return &PTR____CFConstantStringClassReference_110f18f58;
    }
    if (param_1 != 0x78fe2cec) {
      if (param_1 == -0x30a2f521) {
        return &PTR____CFConstantStringClassReference_110f18b58;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110f18d58;
  }
  return &PTR____CFConstantStringClassReference_110f18ed8;
}



/* Entry: 10b766f7c; end: 10b766f9f; -[SOJUAdsStoryAdInsertionConfig initWithFirstOnResume:interval:minSnapsAfterAd:firstOnStart:] */

void FUN_10b766f7c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b766fa0; end: 10b76702b; +[SOJUAdsStoryAdInsertionConfig registerMessageFields:] */

void FUN_10b766fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_firstOnResume_112544b50;
  _objc_retain(param_3);
  FUN_10b76702c(param_3,param_2,puVar1,0,1);
  func_0x00010b76703c();
  FUN_10b76702c();
  func_0x00010b76703c();
  FUN_10b76702c();
  func_0x00010b76703c();
  FUN_10b76702c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76702c; end: 10b76704b;  */

void FUN_10b76702c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76704c; end: 10b767073; -[SOJUAdsStoryAdMetadata initWithAdInsertionConfig:adRequestConfig:adUnitId:targetingParameters:adCannotFollowSnapIds:enableFullView:] */

void FUN_10b76704c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b767074; end: 10b767187; +[SOJUAdsStoryAdMetadata registerMessageFields:] */

void FUN_10b767074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e08d0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b767194();
  _objc_opt_class(PTR_PTR_1126e08d8);
  func_0x00010b767194();
  func_0x00010b7671b0();
  func_0x00010b767188();
  func_0x00010b7671b0();
  func_0x00010b767188();
  func_0x00010c19a460(param_3,param_2,0x8ebed4f227fcb7);
  func_0x00010b7671b0();
  func_0x00010b767188();
  func_0x00010c19a460(param_3,param_2,0x2b60a49cfe23e8);
  func_0x00010b7671b0();
  func_0x00010b767188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b767188; end: 10b7671bf;  */

void FUN_10b767188(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7671c0; end: 10b7671df; -[SOJUAdsStoryAdRequestConfig initWithFirstPosition:minimumRemaining:timeout:] */

void FUN_10b7671c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7671e0; end: 10b767267; +[SOJUAdsStoryAdRequestConfig registerMessageFields:] */

void FUN_10b7671e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_firstPosition_112544b98;
  _objc_retain(param_3);
  FUN_10b767268(param_3,param_2,puVar1,0,1);
  FUN_10b767268(param_3,param_2,PTR_s_minimumRemaining_112544ba0,0,1);
  FUN_10b767268(param_3,param_2,PTR_s_timeout_112679b48,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b767268; end: 10b767277;  */

void FUN_10b767268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b767278; end: 10b7672e7; -[SOJUAirAirRequest initWithIdValue:reportType:descriptionValue:feature:subFeature:connectionType:bandwidth:shakeSensitivity:deviceScore:otherInfo:reportOption:notificationEmails:appUsedMemory:freeMemory:blobData:reportSource:appLastChangeCommitHash:userId:deviceId:isp:preferenceInfo:guestModeDeprecated:lockscreen:sessionId:shakeReproducibility:selfAssign:] */

void FUN_10b767278(void)

{
  func_0x00010c012ba0();
  return;
}


