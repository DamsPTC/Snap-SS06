/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b770588; end: 10b7705a7; -[SOJUCustomStickerSync initWithCreationList:deletionList:] */

void FUN_10b770588(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7705a8; end: 10b77065f; +[SOJUCustomStickerSync registerMessageFields:] */

void FUN_10b7705a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0ac8;
  puVar1 = PTR_s_creationList_112545398;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_deletionList_1125453a0,0,1,7,0,0,0,1);
  func_0x00010c19a460(param_3,param_2,0x8e2ade5a89254d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b770660; end: 10b77066b; +[SOJUCustomStickerSyncBuilder messageClass] */

void FUN_10b770660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ad0);
  return;
}



/* Entry: 10b77066c; end: 10b77066f; +[SOJUCustomStickerSyncBuilder withJUCustomStickerSync:] */

void FUN_10b77066c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b770670; end: 10b7706db;  */

undefined8 FUN_10b770670(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7dd78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7dd78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x6d0394f5;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7dd98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7dd98,param_2,param_1);
    uVar2 = 0x6bdd8583;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7706dc; end: 10b770717;  */

undefined ** FUN_10b7706dc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7dd98;
  if (param_1 != 0x6bdd8583) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7dd78;
  if (param_1 != 0x6d0394f5) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b770718; end: 10b770737; -[SOJUCustomStickerUpdate initWithOperationType:lastUsedTimeList:] */

void FUN_10b770718(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b770738; end: 10b7707cb; +[SOJUCustomStickerUpdate registerMessageFields:] */

void FUN_10b770738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b7707cc();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0ad8);
  FUN_10b7707cc();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7707cc; end: 10b7707df;  */

void FUN_10b7707cc(void)

{
  return;
}



/* Entry: 10b7707e0; end: 10b7707eb; +[SOJUCustomStickerUpdateBuilder messageClass] */

void FUN_10b7707e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ae0);
  return;
}



/* Entry: 10b7707ec; end: 10b7707ef; +[SOJUCustomStickerUpdateBuilder withJUCustomStickerUpdate:] */

void FUN_10b7707ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7707f0; end: 10b77081f;  */

undefined8 FUN_10b7707f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ddb8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7ddb8,param_2,param_1);
  uVar2 = 0x7bb21dc;
  if (ppuVar1 != (undefined **)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b770820; end: 10b770843;  */

undefined ** FUN_10b770820(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ddb8;
  if (param_1 != 0x7bb21dc) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  return ppuVar1;
}



/* Entry: 10b770844; end: 10b77086b; -[SOJUDailyForecast initWithFahrenheitMin:fahrenheitMax:celsiusMin:celsiusMax:weatherCondition:displayTime:] */

void FUN_10b770844(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77086c; end: 10b77091b; +[SOJUDailyForecast registerMessageFields:] */

void FUN_10b77086c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77094c();
  func_0x00010b77091c();
  func_0x00010b77094c();
  func_0x00010b77091c();
  func_0x00010b77094c();
  func_0x00010b77091c();
  func_0x00010b77094c();
  func_0x00010b77091c();
  func_0x00010b770934();
  func_0x00010bf06b60();
  func_0x00010b770934();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77091c; end: 10b770957;  */

void FUN_10b77091c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,3,0,0);
  return;
}



/* Entry: 10b770958; end: 10b770b0b;  */

undefined8 FUN_10b770958(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f18f98;
  func_0x00010b770ca0();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x2900e0f9;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f18fb8;
    func_0x00010b770ca0();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x7d8924d5;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f18fd8;
      func_0x00010b770ca0();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffbfa4bf47;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f18ff8;
        func_0x00010b770ca0();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffff82ff33fa;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f19018;
          func_0x00010b770ca0();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x54db3c5a;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f19038;
            func_0x00010b770ca0();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x3b7fcec3;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f19058;
              func_0x00010b770ca0();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x5d5db6d;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f19078;
                func_0x00010b770ca0();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x11e3df81;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f19098;
                  func_0x00010b770ca0();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xffffffffc9ab4104;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f190b8;
                    func_0x00010b770ca0();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x4996b114;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f190d8;
                      func_0x00010b770ca0();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xffffffffdb2561ca;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f190f8;
                        func_0x00010b770ca0();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xffffffffddce6c73;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f19118;
                          func_0x00010b770ca0();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xffffffffa7edf9ea;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f19138;
                            func_0x00010b770ca0();
                            uVar2 = 0xffffffffd5a47de8;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b770b0c; end: 10b770ca7;  */

undefined ** FUN_10b770b0c(long param_1)

{
  if (param_1 == -0x7d00cc06) {
    return &PTR____CFConstantStringClassReference_110f18ff8;
  }
  if (param_1 == -0x58120616) {
    return &PTR____CFConstantStringClassReference_110f19118;
  }
  if (param_1 == -0x405b40b9) {
    return &PTR____CFConstantStringClassReference_110f18fd8;
  }
  if (param_1 == -0x3654befc) {
    return &PTR____CFConstantStringClassReference_110f19098;
  }
  if (param_1 == -0x2a5b8218) {
    return &PTR____CFConstantStringClassReference_110f19138;
  }
  if (param_1 == -0x24da9e36) {
    return &PTR____CFConstantStringClassReference_110f190d8;
  }
  if (param_1 == -0x2231938d) {
    return &PTR____CFConstantStringClassReference_110f190f8;
  }
  if (param_1 != 0x5d5db6d) {
    if (param_1 == 0x11e3df81) {
      return &PTR____CFConstantStringClassReference_110f19078;
    }
    if (param_1 == 0x2900e0f9) {
      return &PTR____CFConstantStringClassReference_110f18f98;
    }
    if (param_1 == 0x3b7fcec3) {
      return &PTR____CFConstantStringClassReference_110f19038;
    }
    if (param_1 != 0x4996b114) {
      if (param_1 == 0x54db3c5a) {
        return &PTR____CFConstantStringClassReference_110f19018;
      }
      if (param_1 == 0x7d8924d5) {
        return &PTR____CFConstantStringClassReference_110f18fb8;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110f190b8;
  }
  return &PTR____CFConstantStringClassReference_110f19058;
}



/* Entry: 10b770ca8; end: 10b770cd3; -[SOJUDeleteStoryRequest initWithTimestamp:reqToken:username:snapchatUserId:storyId:groupId:archiveOnly:] */

void FUN_10b770ca8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b770cd4; end: 10b770d7f; +[SOJUDeleteStoryRequest registerMessageFields:] */

void FUN_10b770cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  func_0x00010b770da0(param_3,param_2,puVar1,0,0);
  func_0x00010b770d80();
  func_0x00010b770db0();
  func_0x00010b770da0();
  func_0x00010b770d80();
  func_0x00010b770d80();
  func_0x00010b770d80();
  func_0x00010b770db0();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b770d80; end: 10b770dc3;  */

void FUN_10b770d80(void)

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



/* Entry: 10b770dc4; end: 10b770dcf; +[SOJUDeleteStoryRequestBuilder messageClass] */

void FUN_10b770dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ae8);
  return;
}



/* Entry: 10b770dd0; end: 10b770dd3; +[SOJUDeleteStoryRequestBuilder withJUDeleteStoryRequest:] */

void FUN_10b770dd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b770dd4; end: 10b770dfb; -[SOJUDeviceTokenAuthPayload initWithTimestamp:reqToken:username:snapchatUserId:dtoken1i:dsig:] */

void FUN_10b770dd4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b770dfc; end: 10b770e9f; +[SOJUDeviceTokenAuthPayload registerMessageFields:] */

void FUN_10b770dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b770ec8();
  func_0x00010b770ea0();
  func_0x00010b770ec8();
  func_0x00010b770eb8();
  func_0x00010b770ec8();
  func_0x00010b770ea0();
  func_0x00010b770ec8();
  func_0x00010b770eb8();
  func_0x00010b770ec8();
  func_0x00010b770ea0();
  func_0x00010b770ec8();
  func_0x00010b770ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b770ea0; end: 10b770ed3;  */

void FUN_10b770ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b770ed4; end: 10b770ef3; -[SOJUDiscoverChannelListResponse initWithChannels:generationTs:] */

void FUN_10b770ed4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b770ef4; end: 10b770f93; +[SOJUDiscoverChannelListResponse registerMessageFields:] */

void FUN_10b770ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0af0;
  puVar1 = PTR_s_channels_112545408;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_generationTs_112544d48,0,1,2,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b770f94; end: 10b77105b; -[SOJUDiscoverChannelResponse initWithName:position:storiesPagePosition:promotedStoriesPagePosition:publisherName:publisherFormalName:publisherDescription:publisherDeeplink:filledIcon:invertedIcon:loadingIcon:introMovie:primaryColor:secondaryColor:editionId:editionPublishingTimestamp:dsnapsData:introVideoAdMetadata:sponsored:sponsoredSlug:subscribable:tileList:subscribedImage:horizontalIcon:region:promoteDemoteStatus:hashValue:searchIcon:isShow:editionVersion:rollingNewsEnabled:isHiddenInStoryScreen:isSubscribed:publisherFeatures:contentTags:segments:tags:contentAccessWhitelists:localContent:publisherId:showId:businessId:shareable:hasCuratedSnaps:viewableOnWeb:contentAccessLists:contentType:moderation:] */

void FUN_10b770f94(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77105c; end: 10b7714db; +[SOJUDiscoverChannelResponse registerMessageFields:] */

void FUN_10b77105c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7715ac();
  func_0x00010b771548();
  func_0x00010b771574(param_3,param_2,PTR_s_position_11261eab8,0,0,1);
  func_0x00010b771534();
  func_0x00010b771574();
  func_0x00010b771534();
  func_0x00010b771574();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b771580();
  func_0x00010b771574();
  func_0x00010b7714dc();
  _objc_opt_class(PTR_PTR_1126e0af8);
  func_0x00010b771558();
  _objc_opt_class(PTR_PTR_1126e0b00);
  func_0x00010b771558();
  func_0x00010b771590();
  func_0x00010b771574();
  _objc_opt_class(PTR_PTR_1126e0b08);
  func_0x00010b771558();
  func_0x00010b771590();
  func_0x00010b771574();
  _objc_opt_class(PTR_PTR_1126e0b10);
  func_0x00010b771558();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b771590();
  func_0x00010b771548();
  func_0x00010b7714fc();
  func_0x00010bf06b60();
  func_0x00010b771548(param_3,param_2,PTR_s_hashValue_1125d5478,
                      &PTR____CFConstantStringClassReference_110e18b98,2);
  func_0x00010b7714dc();
  func_0x00010b771514();
  func_0x00010b771534();
  func_0x00010b771574();
  func_0x00010b771514();
  func_0x00010b771514();
  func_0x00010b771514();
  func_0x00010b771580();
  func_0x00010b771574();
  func_0x00010b7715bc();
  func_0x00010b771580();
  func_0x00010b771574();
  func_0x00010b7715bc();
  _objc_opt_class(PTR_PTR_1126e0b18);
  func_0x00010b7715ac();
  func_0x00010b7715a0();
  func_0x00010b771574(param_3,param_2,PTR_s_tags_112677b48,0,0,7);
  func_0x00010b7715bc();
  func_0x00010b771580();
  func_0x00010b771574();
  func_0x00010b7715bc();
  func_0x00010b771580();
  func_0x00010b771574();
  func_0x00010b7715bc();
  func_0x00010b771534();
  func_0x00010b771574();
  func_0x00010b7714dc();
  func_0x00010b7714dc();
  func_0x00010b771590();
  func_0x00010b771574();
  func_0x00010b771514();
  func_0x00010b771514();
  _objc_opt_class(PTR_PTR_1126e0b20);
  func_0x00010b771558();
  func_0x00010b7714fc();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0b28);
  func_0x00010b7715ac();
  func_0x00010b7715a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7714dc; end: 10b7715c3;  */

void FUN_10b7714dc(void)

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



/* Entry: 10b7715c4; end: 10b7715cf; +[SOJUDiscoverChannelResponseBuilder messageClass] */

void FUN_10b7715c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0af0);
  return;
}



/* Entry: 10b7715d0; end: 10b7715d3; +[SOJUDiscoverChannelResponseBuilder withJUDiscoverChannelResponse:] */

void FUN_10b7715d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7715d4; end: 10b77163f;  */

undefined8 FUN_10b7715d4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ddd8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7ddd8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xc503c88;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ddf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7ddf8,param_2,param_1);
    uVar2 = 0x52afb0d3;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b771640; end: 10b77167b;  */

undefined ** FUN_10b771640(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ddf8;
  if (param_1 != 0x52afb0d3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7ddd8;
  if (param_1 != 0xc503c88) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77167c; end: 10b7716fb;  */

undefined8 FUN_10b77167c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7de18;
  func_0x00010b77174c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffad93a3dc;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7de38;
    func_0x00010b77174c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff966b6978;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
      func_0x00010b77174c();
      uVar2 = 0x24a738;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7716fc; end: 10b771753;  */

undefined ** FUN_10b7716fc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x69949688) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7de38;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7de18;
  if (param_1 != -0x526c5c24) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dea818;
  if (param_1 != 0x24a738) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b771754; end: 10b771773; -[SOJUDiscoverContentAccessList initWithIsWhitelist:list:] */

void FUN_10b771754(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b771774; end: 10b771803; +[SOJUDiscoverContentAccessList registerMessageFields:] */

void FUN_10b771774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_isWhitelist_1125454c8;
  _objc_retain(param_3);
  FUN_10b771804(param_3,param_2,puVar1,0,0,0,in_x6,in_x7,0,0);
  FUN_10b771804(param_3,param_2,PTR_s_list_1126040a8,0,0,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x7a74cb80d69864);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b771804; end: 10b77180f;  */

void FUN_10b771804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b771810; end: 10b77184b; -[SOJUDiscoverEditionChunkResponse initWithUrl:dsnapId:dsnapType:hashValue:color:adType:adPlacementMetadata:tile:tiles:tags:moderation:] */

void FUN_10b771810(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77184c; end: 10b7719f7; +[SOJUDiscoverEditionChunkResponse registerMessageFields:] */

void FUN_10b77184c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b771a20();
  func_0x00010b771a14();
  func_0x00010b771a34();
  func_0x00010b771a14();
  func_0x00010b771a34();
  func_0x00010b771a14();
  func_0x00010b771a14(param_3,param_2,PTR_s_hashValue_1125d5478,
                      &PTR____CFConstantStringClassReference_110e18b98,2,6);
  func_0x00010b771a14(param_3,param_2,PTR_s_color_1125adcb8,0,0,6);
  func_0x00010b771a34();
  func_0x00010b771a14();
  _objc_opt_class(PTR_PTR_1126e0b00);
  func_0x00010b771a20();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0930);
  func_0x00010b7719f8();
  _objc_opt_class(PTR_PTR_1126e0930);
  func_0x00010b7719f8();
  func_0x00010b771a14(param_3,param_2,PTR_s_tags_112677b48,0,0,7);
  func_0x00010c19a460(param_3,param_2,0x42d3276b43cdd9);
  _objc_opt_class(PTR_PTR_1126e0b30);
  func_0x00010b7719f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7719f8; end: 10b771a43;  */

void FUN_10b7719f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b771a44; end: 10b771a63; -[SOJUDiscoverEditionResponse initWithChannel:validity:generationTs:] */

void FUN_10b771a44(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b771a64; end: 10b771b33; +[SOJUDiscoverEditionResponse registerMessageFields:] */

void FUN_10b771a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0af0;
  puVar1 = PTR_s_channel_1125aaef0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_validity_1125454f0,0,0,6,0,FUN_10b771b34,FUN_10b771c24,0
                     );
  func_0x00010bf06b60(param_3,param_2,PTR_s_generationTs_112544d48,0,1,2,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b771b34; end: 10b771c23;  */

undefined8 FUN_10b771b34(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e07338;
  func_0x00010b771cdc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x32b0ec;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7de58;
    func_0x00010b771cdc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff99b337e2;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7de78;
      func_0x00010b771cdc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff92d02863;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e2db38;
        func_0x00010b771cdc();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffb1f6a725;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7de98;
          func_0x00010b771cdc();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x24fe86ab;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7deb8;
            func_0x00010b771cdc();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x477b1b82;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110df1a98;
              func_0x00010b771cdc();
              uVar2 = 0xffffffffb2ad085b;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0;
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



/* Entry: 10b771c24; end: 10b771ce3;  */

undefined ** FUN_10b771c24(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_1 != -0x6d2fd79d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
    if (param_1 == -0x664cc81e) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7de58;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7de98;
    if (param_1 != 0x24fe86ab) {
      ppuVar2 = ppuVar1;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e07338;
    if (param_1 != 0x32b0ec) {
      ppuVar1 = ppuVar2;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110df1a98;
    if (param_1 != -0x4d52f7a5) {
      ppuVar2 = ppuVar1;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2db38;
    if (param_1 != -0x4e0958db) {
      ppuVar1 = ppuVar2;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7deb8;
    if (param_1 != 0x477b1b82) {
      ppuVar2 = ppuVar1;
    }
    return ppuVar2;
  }
  return &PTR____CFConstantStringClassReference_110f7de78;
}



/* Entry: 10b771ce4; end: 10b771d07; -[SOJUDiscoverModerationAudience initWithAnyoneCanView:nobodyUnder18CanView:nobodyCanView:nobodyInSensitiveCountryCanView:] */

void FUN_10b771ce4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b771d08; end: 10b771daf; +[SOJUDiscoverModerationAudience registerMessageFields:] */

void FUN_10b771d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_anyoneCanView_112545500;
  _objc_retain(param_3);
  FUN_10b771db0(param_3,param_2,puVar1,0,1);
  FUN_10b771db0(param_3,param_2,PTR_s_nobodyUnder18CanView_112545508,
                &PTR____CFConstantStringClassReference_110f7ded8,2);
  FUN_10b771db0(param_3,param_2,PTR_s_nobodyCanView_112545510,0,1);
  FUN_10b771db0(param_3,param_2,PTR_s_nobodyInSensitiveCountryCanView_112545518,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b771db0; end: 10b771dbf;  */

void FUN_10b771db0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b771dc0; end: 10b771ddf; -[SOJUDiscoverModerationBrandSafety initWithIsBrandUnsafe:isSponsoredContent:] */

void FUN_10b771dc0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b771de0; end: 10b771e3b; +[SOJUDiscoverModerationBrandSafety registerMessageFields:] */

void FUN_10b771de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_isBrandUnsafe_112545528;
  _objc_retain(param_3);
  FUN_10b771e3c(param_3,param_2,puVar1);
  FUN_10b771e3c(param_3,param_2,PTR_s_isSponsoredContent_112545530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b771e3c; end: 10b771e53;  */

void FUN_10b771e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,0,0,0);
  return;
}



/* Entry: 10b771e54; end: 10b771ed3;  */

undefined8 FUN_10b771e54(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9f18;
  func_0x00010b771f28();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4d28309;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7def8;
    func_0x00010b771f28();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffcf3b802d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7df18;
      func_0x00010b771f28();
      uVar2 = 0x1b861c46;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b771ed4; end: 10b771f2f;  */

undefined ** FUN_10b771ed4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x30c47fd3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7def8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9f18;
  if (param_1 != 0x4d28309) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7df18;
  if (param_1 != 0x1b861c46) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b771f30; end: 10b771f4f; -[SOJUDiscoverModerationSnapModeration initWithAudience:scope:brandSafety:] */

void FUN_10b771f30(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b771f50; end: 10b771fff; +[SOJUDiscoverModerationSnapModeration registerMessageFields:] */

void FUN_10b771f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0920;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b772000();
  func_0x00010b772018();
  func_0x00010bf06b60(param_3,param_2,PTR_s_scope_112631b68,0,0,6,0,FUN_10b771e54,FUN_10b771ed4,0);
  _objc_opt_class(PTR_PTR_1126e0928);
  FUN_10b772000();
  func_0x00010b772018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772000; end: 10b772023;  */

void FUN_10b772000(void)

{
  return;
}



/* Entry: 10b772024; end: 10b772047; -[SOJUDiscoverModerationStoryModeration initWithModerationRevisionId:moderatedAtMs:audience:scope:moderatedAt:] */

void FUN_10b772024(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772048; end: 10b772137; +[SOJUDiscoverModerationStoryModeration registerMessageFields:] */

void FUN_10b772048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b772144();
  func_0x00010b772138();
  func_0x00010b772144();
  func_0x00010b772138();
  _objc_opt_class(PTR_PTR_1126e0920);
  func_0x00010b772144();
  func_0x00010bf06b60();
  func_0x00010bf06b60(param_3,param_2,PTR_s_scope_112631b68,0,0,6,0,FUN_10b771e54,FUN_10b771ed4,0);
  func_0x00010b772144();
  func_0x00010b772138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772138; end: 10b77214f;  */

void FUN_10b772138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b772150; end: 10b77217f; -[SOJUDiscoverResponse initWithGetChannels:getEdition:videoCatalog:adVideoCatalog:validationEndpoint:resourceParameterName:resourceParameterValue:compatibility:] */

void FUN_10b772150(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772180; end: 10b772233; +[SOJUDiscoverResponse registerMessageFields:] */

void FUN_10b772180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_getChannels_112545568;
  _objc_retain(param_3);
  func_0x00010b772254(param_3,param_2,puVar1,0,1);
  func_0x00010b772234();
  func_0x00010b772234();
  func_0x00010b772234();
  func_0x00010b772234();
  func_0x00010b772234();
  func_0x00010b772234();
  func_0x00010b772254(param_3,param_2,PTR_s_compatibility_1125455a0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772234; end: 10b772263;  */

void FUN_10b772234(void)

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



/* Entry: 10b772264; end: 10b77228b; -[SOJUDiscoverSegmentChunkResponse initWithSegmentId:dsnapIds:tiles:isFixed:categoryEligible:audience:] */

void FUN_10b772264(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77228c; end: 10b77238b; +[SOJUDiscoverSegmentChunkResponse registerMessageFields:] */

void FUN_10b77228c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_segmentId_112633ae0;
  _objc_retain(param_3);
  FUN_10b77238c(param_3,param_2,puVar1,0,1,2);
  func_0x00010b7723b4();
  FUN_10b77238c();
  func_0x00010c19a460(param_3,param_2,0xa8d02a11ce618a);
  _objc_opt_class(PTR_PTR_1126e0930);
  func_0x00010b772398();
  func_0x00010b7723b4();
  FUN_10b77238c();
  func_0x00010b7723b4();
  FUN_10b77238c();
  _objc_opt_class(PTR_PTR_1126e0920);
  func_0x00010b772398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77238c; end: 10b7723c3;  */

void FUN_10b77238c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7723c4; end: 10b7723ef; -[SOJUDynamicContentSetting initWithAutoRefreshDelayInMilli:autoRefreshMessageXPortrait:autoRefreshMessageXLandscape:autoRefreshMessageYPortrait:autoRefreshMessageYLandscape:dynamicFilterRefreshHint:dynamicFilterUpdatingMessage:] */

void FUN_10b7723c4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7723f0; end: 10b77249b; +[SOJUDynamicContentSetting registerMessageFields:] */

void FUN_10b7723f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_autoRefreshDelayInMilli_1125455c8;
  _objc_retain(param_3);
  func_0x00010b7724d0(param_3,param_2,puVar1,0,1,2,in_x6,in_x7,0,0);
  func_0x00010b77249c();
  func_0x00010b77249c();
  func_0x00010b77249c();
  func_0x00010b77249c();
  func_0x00010b7724bc();
  func_0x00010b7724d0();
  func_0x00010b7724bc();
  func_0x00010b7724d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77249c; end: 10b7724db;  */

void FUN_10b77249c(void)

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



/* Entry: 10b7724dc; end: 10b7724fb; -[SOJUEmojiBrushResource initWithVersion:emojis:] */

void FUN_10b7724dc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7724fc; end: 10b77258b; +[SOJUEmojiBrushResource registerMessageFields:] */

void FUN_10b7724fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_version_112683d20;
  _objc_retain(param_3);
  FUN_10b77258c(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  FUN_10b77258c(param_3,param_2,PTR_s_emojis_1125c1458,0,0,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0xc9d7140e840339);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77258c; end: 10b772597;  */

void FUN_10b77258c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b772598; end: 10b7725c7; -[SOJUEmojiInfo initWithType:source:title:emojiDesc:emojiPickerDesc:defaultType:defaultVal:emojiLegendRank:] */

void FUN_10b772598(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7725c8; end: 10b7726ab; +[SOJUEmojiInfo registerMessageFields:] */

void FUN_10b7725c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010b7726bc(param_3,param_2,puVar1,0,0,5,in_x6,in_x7,0,0);
  func_0x00010b7726ac(param_3,param_2,PTR_s_source_11266f770,0,0);
  func_0x00010b7726ac(param_3,param_2,PTR_s_title_112679e90,0,0);
  func_0x00010b7726c8();
  func_0x00010b7726ac();
  func_0x00010b7726c8();
  func_0x00010b7726ac();
  func_0x00010b7726c8();
  func_0x00010b7726bc();
  func_0x00010b7726c8();
  func_0x00010b7726ac();
  func_0x00010b7726c8();
  func_0x00010b7726bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7726ac; end: 10b7726db;  */

void FUN_10b7726ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7726dc; end: 10b7727af;  */

undefined8 FUN_10b7726dc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7df38;
  func_0x00010b772848();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x133fa9f6;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e69c58;
    func_0x00010b772848();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x4513cf6;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7df58;
      func_0x00010b772848();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffaa89f7ac;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e69c78;
        func_0x00010b772848();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffff87518375;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7df78;
          func_0x00010b772848();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffbb29fe00;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7df98;
            func_0x00010b772848();
            uVar2 = 0x1fe776;
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



/* Entry: 10b7727b0; end: 10b77284f;  */

undefined ** FUN_10b7727b0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x4513cf6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e69c58;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7df38;
  if (param_1 != 0x133fa9f6) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7df98;
  if (param_1 != 0x1fe776) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7df78;
  if (param_1 != -0x44d60200) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7df58;
  if (param_1 != -0x55760854) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e69c78;
  if (param_1 != -0x78ae7c8b) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b772850; end: 10b772873; -[SOJUErrorMessage initWithType:idValue:appEngineTarget:message:errorId:] */

void FUN_10b772850(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772874; end: 10b772937; +[SOJUErrorMessage registerMessageFields:] */

void FUN_10b772874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  FUN_10b772938(param_3,param_2,PTR_s_idValue_1125d7158,
                &PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b772948();
  FUN_10b772938();
  func_0x00010b772948();
  FUN_10b772938();
  func_0x00010b772948();
  FUN_10b772938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772938; end: 10b772957;  */

void FUN_10b772938(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b772958; end: 10b77297f; -[SOJUFavoriteStickerInfo initWithPackId:stickerId:stickerType:capabilities:numTimesUsed:lastUsed:] */

void FUN_10b772958(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772980; end: 10b772a8b; +[SOJUFavoriteStickerInfo registerMessageFields:] */

void FUN_10b772980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_packId_112619c98;
  _objc_retain(param_3);
  FUN_10b772a8c(param_3,param_2,puVar1,0,1,6);
  func_0x00010b772a98();
  FUN_10b772a8c();
  func_0x00010b772a98();
  func_0x00010bf06b60();
  FUN_10b772a8c(param_3,param_2,PTR_s_capabilities_1125a9820,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xf932ffd8b36b84);
  func_0x00010b772a98();
  FUN_10b772a8c();
  func_0x00010b772a98();
  FUN_10b772a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772a8c; end: 10b772aa7;  */

void FUN_10b772a8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b772aa8; end: 10b772aab; -[SOJUFeedDeltaSyncToken initWithToken:] */

void FUN_10b772aa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b772aac; end: 10b772aeb; +[SOJUFeedDeltaSyncToken registerMessageFields:] */

void FUN_10b772aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_token_11267a5d8,0,0,6,0,0,0,0);
  return;
}



/* Entry: 10b772aec; end: 10b772aef; -[SOJUFeedResponseInfo initWithFeedIterToken:] */

void FUN_10b772aec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b772af0; end: 10b772b2f; +[SOJUFeedResponseInfo registerMessageFields:] */

void FUN_10b772af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_feedIterToken_112545130,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b772b30; end: 10b772c97; -[SOJUFriend initWithName:userId:type:display:birthday:ts:reverseTs:direction:storyPrivacy:canSeeCustomStories:pendingSnapsCountDeprecated:expirationDeprecated:isSharedStoryDeprecated:hasCustomDescriptionDeprecated:sharedStoryIdDeprecated:localStoryDeprecated:ignoredLink:hiddenLink:addSource:addSourceType:friendmojiString:needsLoveDeprecated:autoAddedDeprecated:sojuNewLinkDeprecated:dontDecayThumbnailDeprecated:venueDeprecated:friendmojiSymbols:friendmojis:snapStreakCount:snapStreakExpiration:bitmojiAvatarId:potentialHighQualityScoreDeprecated:pendingChatsCountDeprecated:bitmojiSelfieId:canBeSharedByFriendsDeprecated:fideliusInfo:bitmojiSnapcodeSelfieId:studySettings:isPopular:isStoryMuted:isIncomingFriendRequestViewed:displayUsername:snapProId:isCognacNotificationMuted:mutableUsername:isCameosSharingSupported:snapshotMetadata:bitmojiSceneId:bitmojiBackgroundId:bitmojiFriendmojiPolicyDeprecated:isBitmojiFriendmojiSharingSupported:cameosSharingPolicy:plusBadgeVisibility:postViewEmoji:bitmojiBackgroundUrl:cameosAdsPolicy:dreamsGeneratingPolicy:encodedAvatarMetadata:snapProInfo:encodedActionmojiPreferences:canUseMySelfie:isHighQualityForBlending:considerForLocationSharingProtection:postSendEmoji:incomingFriendRequestImpressionCount:isSuppressedOnAddedMe:profileTheme:isPlusSubscriber:saturnUserId:isMemoryOnlySubscriber:isAiChatbot:linkCreationTs:] */

void FUN_10b772b30(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772c98; end: 10b772ca3; +[SOJUFriendBuilder messageClass] */

void FUN_10b772c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0b48);
  return;
}



/* Entry: 10b772ca4; end: 10b772ca7; +[SOJUFriendBuilder withJUFriend:] */

void FUN_10b772ca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b772ca8; end: 10b772cc7; -[SOJUFriendFeedAstGroup initWithIdValue:astVersionsToUse:] */

void FUN_10b772ca8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772cc8; end: 10b772d63; +[SOJUFriendFeedAstGroup registerMessageFields:] */

void FUN_10b772cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b772d64(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,in_x6,
                in_x7,0,0);
  FUN_10b772d64(param_3,param_2,PTR_s_astVersionsToUse_1125456f0,0,1,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0xf7006433c40287);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772d64; end: 10b772d6f;  */

void FUN_10b772d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b772d70; end: 10b772d77; +[SOJUFriendFeedDebugRankingMetadata canInitFromProto] */

undefined8 FUN_10b772d70(void)

{
  return 0;
}



/* Entry: 10b772d78; end: 10b772d7b; -[SOJUFriendFeedDebugRankingMetadata initWithDebugAstGroups:] */

void FUN_10b772d78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b772d7c; end: 10b772df3; +[SOJUFriendFeedDebugRankingMetadata registerMessageFields:] */

void FUN_10b772d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_debugAstGroups_112545700;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,0,0,0,2);
  func_0x00010c19a460(param_3,param_2,0xab2540d7103816);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772df4; end: 10b772e1b; -[SOJUFriendFeedFriendRankingSignals initWithFriendUserId:lastInteractionTimestampInSecs:numPrivateStories:smallestPrivateStorySize:numGroupchats:smallestGroupchatSize:] */

void FUN_10b772df4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772e1c; end: 10b772ebf; +[SOJUFriendFeedFriendRankingSignals registerMessageFields:] */

void FUN_10b772e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_friendUserId_1125cbdf0;
  _objc_retain(param_3);
  func_0x00010b772ee0(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b772ee0(param_3,param_2,PTR_s_lastInteractionTimestampInSecs_112545710,0,1,2,in_x6,
                      in_x7,0,0);
  func_0x00010b772ec0();
  func_0x00010b772ec0();
  func_0x00010b772ec0();
  func_0x00010b772ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772ec0; end: 10b772eeb;  */

void FUN_10b772ec0(void)

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


