/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b790868; end: 10b79086b; -[SOJURichStoryRichStoryWebviewAttachment initWithUrl:] */

void FUN_10b790868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b79086c; end: 10b7908ab; +[SOJURichStoryRichStoryWebviewAttachment registerMessageFields:] */

void FUN_10b79086c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_url_1126816f8,0,0,6,0,0,0,0);
  return;
}



/* Entry: 10b7908ac; end: 10b7908cb; -[SOJUSavedState initWithSaved:version:] */

void FUN_10b7908ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7908cc; end: 10b79093f; +[SOJUSavedState registerMessageFields:] */

void FUN_10b7908cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_saved_112630810;
  _objc_retain(param_3);
  FUN_10b790940(param_3,param_2,puVar1,0,0,0,in_x6,in_x7,0,0);
  FUN_10b790940(param_3,param_2,PTR_s_version_112683d20,0,0,1,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b790940; end: 10b79094b;  */

void FUN_10b790940(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79094c; end: 10b79094f; +[SOJUScannableAction registerMessageFields:] */

void FUN_10b79094c(void)

{
  return;
}



/* Entry: 10b790950; end: 10b790973; -[SOJUScannableActionAdCreativePreview initWithEntityType:entityId:createdTimestampInMillis:isActionExpirable:ttlInMillis:] */

void FUN_10b790950(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b790974; end: 10b790a2b; +[SOJUScannableActionAdCreativePreview registerMessageFields:] */

void FUN_10b790974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_entityType_1125c3568;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b790a4c,FUN_10b790ab4,0);
  FUN_10b790a2c();
  func_0x00010b790a40();
  FUN_10b790a2c();
  func_0x00010b790a40();
  FUN_10b790a2c();
  func_0x00010b790a40();
  FUN_10b790a2c();
  func_0x00010b790a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b790a2c; end: 10b790a4b;  */

void FUN_10b790a2c(void)

{
  return;
}



/* Entry: 10b790a4c; end: 10b790ab3;  */

undefined8 FUN_10b790a4c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddf4b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ddf4b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x823;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df1058;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df1058,param_2,param_1);
    uVar2 = 0xffffffff9b275faf;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b790ab4; end: 10b790ae7;  */

undefined ** FUN_10b790ab4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1058;
  if (param_1 != -0x64d8a051) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ddf4b8;
  if (param_1 != 0x823) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b790ae8; end: 10b790b23; -[SOJUScannableActionAddFriend initWithUsername:displayName:userEmoji:userId:bitmojiAvatarId:bitmojiSelfieId:bitmojiSnapcodeSelfieId:isPopular:displayUsername:snapProId:mutableUsername:] */

void FUN_10b790ae8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b790b24; end: 10b790c03; +[SOJUScannableActionAddFriend registerMessageFields:] */

void FUN_10b790b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_username_112682b30;
  _objc_retain(param_3);
  func_0x00010b790c24(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  func_0x00010b790c04();
  func_0x00010b790c04();
  func_0x00010b790c04();
  func_0x00010b790c04();
  func_0x00010b790c04();
  func_0x00010b790c04();
  func_0x00010b790c24(param_3,param_2,PTR_s_isPopular_1125fc3b8,0,1,0,in_x6,in_x7,0,0);
  func_0x00010b790c04();
  func_0x00010b790c04();
  func_0x00010b790c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b790c04; end: 10b790c2f;  */

void FUN_10b790c04(void)

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



/* Entry: 10b790c30; end: 10b790c5f; -[SOJUScannableActionDeepLink initWithHeader:byline:iconUrl:url:primaryColor:secondaryColor:status:postInfo:] */

void FUN_10b790c30(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b790c60; end: 10b790d67; +[SOJUScannableActionDeepLink registerMessageFields:] */

void FUN_10b790c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b790d88();
  func_0x00010b790d68();
  func_0x00010b790d78();
  func_0x00010b790d68();
  func_0x00010b790d78();
  func_0x00010b790d68();
  func_0x00010b790d78();
  func_0x00010b790d68();
  func_0x00010b790d78();
  func_0x00010b790d68();
  func_0x00010b790d78();
  func_0x00010b790d68();
  func_0x00010bf06b60(param_3,param_2,PTR_s_status_112672580,0,0,6,0,FUN_10b791cf0,FUN_10b791d70,0);
  _objc_opt_class(PTR_PTR_1126e1180);
  func_0x00010b790d88();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b790d68; end: 10b790d9b;  */

void FUN_10b790d68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b790d9c; end: 10b790dcb; -[SOJUScannableActionGame initWithTitle:appId:iconUrl:buildId:orgId:payload:appType:path:] */

void FUN_10b790d9c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b790dcc; end: 10b790eb7; +[SOJUScannableActionGame registerMessageFields:] */

void FUN_10b790dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_title_112679e90;
  _objc_retain(param_3);
  func_0x00010b790ed8(param_3,param_2,puVar1,0,0);
  func_0x00010b790eb8();
  func_0x00010b790eb8();
  func_0x00010b790eb8();
  func_0x00010b790eb8();
  func_0x00010b790ed8(param_3,param_2,PTR_s_payload_11261b328,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_appType_11259f300,0,1,6,0,FUN_10b790ee8,FUN_10b790f54,0)
  ;
  func_0x00010b790ed8(param_3,param_2,PTR_s_path_11261b020,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b790eb8; end: 10b790ee7;  */

void FUN_10b790eb8(void)

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



/* Entry: 10b790ee8; end: 10b790f53;  */

undefined8 FUN_10b790ee8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1078;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df1078,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x2143f2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df1098;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df1098,param_2,param_1);
    uVar2 = 0x241c57;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b790f54; end: 10b790f87;  */

undefined ** FUN_10b790f54(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1098;
  if (param_1 != 0x241c57) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df1078;
  if (param_1 != 0x2143f2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b790f88; end: 10b790fa7; -[SOJUScannableActionMessage initWithHeadline:byline:url:] */

void FUN_10b790f88(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b790fa8; end: 10b791017; +[SOJUScannableActionMessage registerMessageFields:] */

void FUN_10b790fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_headline_1125d5ad0;
  _objc_retain(param_3);
  FUN_10b791018(param_3,param_2,puVar1);
  FUN_10b791018(param_3,param_2,PTR_s_byline_1125a7110);
  FUN_10b791018(param_3,param_2,PTR_s_url_1126816f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791018; end: 10b79102f;  */

void FUN_10b791018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b791030; end: 10b791057; -[SOJUScannableActionOpenUrl initWithHeader:byline:url:iconUrl:localIconAssetName:actionHint:] */

void FUN_10b791030(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791058; end: 10b79110b; +[SOJUScannableActionOpenUrl registerMessageFields:] */

void FUN_10b791058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  FUN_10b79110c(param_3,param_2,puVar1,0,0);
  func_0x00010b79111c();
  FUN_10b79110c();
  func_0x00010b79111c();
  FUN_10b79110c();
  func_0x00010b79111c();
  FUN_10b79110c();
  func_0x00010b79111c();
  FUN_10b79110c();
  func_0x00010b79111c();
  FUN_10b79110c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79110c; end: 10b79112b;  */

void FUN_10b79110c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79112c; end: 10b79114f; -[SOJUScannableActionScanToAuth initWithClientId:state:codeChallenge:scopes:redirectUrl:] */

void FUN_10b79112c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791150; end: 10b791207; +[SOJUScannableActionScanToAuth registerMessageFields:] */

void FUN_10b791150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b791220();
  func_0x00010b791208();
  func_0x00010b791220();
  func_0x00010b791208();
  func_0x00010b791220();
  func_0x00010b791208();
  func_0x00010bf06b60(param_3,param_2,PTR_s_scopes_112631ce8,0,0,7,0,0,0,1);
  func_0x00010c19a460(param_3,param_2,0xe9c22fb4f4fad4);
  func_0x00010b791220();
  func_0x00010b791208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791208; end: 10b79122b;  */

void FUN_10b791208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b79122c; end: 10b79122f; -[SOJUScannableActionSnapKitDeepLink initWithDeeplink:] */

void FUN_10b79122c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b791230; end: 10b79126f; +[SOJUScannableActionSnapKitDeepLink registerMessageFields:] */

void FUN_10b791230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_deeplink_1125b7ad8,0,0,6,0,0,0,0);
  return;
}



/* Entry: 10b791270; end: 10b79127b; +[SOJUScannableActionSnapKitDeepLinkBuilder messageClass] */

void FUN_10b791270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126bc158);
  return;
}



/* Entry: 10b79127c; end: 10b79127f; +[SOJUScannableActionSnapKitDeepLinkBuilder withJUScannableActionSnapKitDeepLink:] */

void FUN_10b79127c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b791280; end: 10b79129f; -[SOJUScannableActionSponsoredLensPreview initWithUnlockableId:creativeId:] */

void FUN_10b791280(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7912a0; end: 10b7912fb; +[SOJUScannableActionSponsoredLensPreview registerMessageFields:] */

void FUN_10b7912a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_unlockableId_11267de50;
  _objc_retain(param_3);
  FUN_10b7912fc(param_3,param_2,puVar1);
  FUN_10b7912fc(param_3,param_2,PTR_s_creativeId_1125b44b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7912fc; end: 10b791313;  */

void FUN_10b7912fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b791314; end: 10b7915df;  */

undefined8 FUN_10b791314(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ecb438;
  func_0x00010b79188c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x1e2c1c1c;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f801d8;
    func_0x00010b79188c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x53ef319d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f801f8;
      func_0x00010b79188c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x10a561da;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
        func_0x00010b79188c();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x31ce9f6d;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e36418;
          func_0x00010b79188c();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x63b68be7;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e0dbf8;
            func_0x00010b79188c();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffe9b61e9e;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110df9b18;
              func_0x00010b79188c();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xfffffffff3b3ab0f;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f80218;
                func_0x00010b79188c();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xfffffffff693009c;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f80238;
                  func_0x00010b79188c();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x70b27857;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
                    func_0x00010b79188c();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x24b0f4ce;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f80258;
                      func_0x00010b79188c();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xffffffffc565e58e;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
                        func_0x00010b79188c();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x2398fe;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f80278;
                          func_0x00010b79188c();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xffffffffd729add0;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f80298;
                            func_0x00010b79188c();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x4e9eb1eb;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110e36458;
                              func_0x00010b79188c();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x46909bb4;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f802b8;
                                func_0x00010b79188c();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xffffffffa1a4dc7c;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f802d8;
                                  func_0x00010b79188c();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xffffffffdc028ccf;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f802f8;
                                    func_0x00010b79188c();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xffffffff906a8c25;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110e36498;
                                      func_0x00010b79188c();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x411ba16f;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110e36478;
                                        func_0x00010b79188c();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x1e36712a;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110e20ef8
                                          ;
                                          func_0x00010b79188c();
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x4073aa1;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e364d8;
                                            func_0x00010b79188c();
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0xffffffffae6d6c7f;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f80318;
                                              func_0x00010b79188c();
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0xffffffffdb1a423c;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e36518;
                                                func_0x00010b79188c();
                                                uVar2 = 0xffffffffdb767acd;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7915e0; end: 10b791893;  */

undefined ** FUN_10b7915e0(long param_1)

{
  if (param_1 == -0x6f9573db) {
    return &PTR____CFConstantStringClassReference_110f802f8;
  }
  if (param_1 == -0x5e5b2384) {
    return &PTR____CFConstantStringClassReference_110f802b8;
  }
  if (param_1 == -0x51929381) {
    return &PTR____CFConstantStringClassReference_110e364d8;
  }
  if (param_1 == -0x3a9a1a72) {
    return &PTR____CFConstantStringClassReference_110f80258;
  }
  if (param_1 == -0x28d65230) {
    return &PTR____CFConstantStringClassReference_110f80278;
  }
  if (param_1 == -0x24e5bdc4) {
    return &PTR____CFConstantStringClassReference_110f80318;
  }
  if (param_1 == -0x24898533) {
    return &PTR____CFConstantStringClassReference_110e36518;
  }
  if (param_1 == -0x23fd7331) {
    return &PTR____CFConstantStringClassReference_110f802d8;
  }
  if (param_1 == -0x1649e162) {
    return &PTR____CFConstantStringClassReference_110e0dbf8;
  }
  if (param_1 == -0xc4c54f1) {
    return &PTR____CFConstantStringClassReference_110df9b18;
  }
  if (param_1 == -0x96cff64) {
    return &PTR____CFConstantStringClassReference_110f80218;
  }
  if (param_1 == 0x2398fe) {
    return &PTR____CFConstantStringClassReference_110e3ddf8;
  }
  if (param_1 == 0x4073aa1) {
    return &PTR____CFConstantStringClassReference_110e20ef8;
  }
  if (param_1 == 0x10a561da) {
    return &PTR____CFConstantStringClassReference_110f801f8;
  }
  if (param_1 == 0x1e2c1c1c) {
    return &PTR____CFConstantStringClassReference_110ecb438;
  }
  if (param_1 != 0x1e36712a) {
    if (param_1 == 0x24b0f4ce) {
      return &PTR____CFConstantStringClassReference_110dd6e38;
    }
    if (param_1 == 0x31ce9f6d) {
      return &PTR____CFConstantStringClassReference_110e35d58;
    }
    if (param_1 == 0x411ba16f) {
      return &PTR____CFConstantStringClassReference_110e36498;
    }
    if (param_1 == 0x46909bb4) {
      return &PTR____CFConstantStringClassReference_110e36458;
    }
    if (param_1 == 0x4e9eb1eb) {
      return &PTR____CFConstantStringClassReference_110f80298;
    }
    if (param_1 == 0x70b27857) {
      return &PTR____CFConstantStringClassReference_110f80238;
    }
    if (param_1 == 0x63b68be7) {
      return &PTR____CFConstantStringClassReference_110e36418;
    }
    if (param_1 == 0x53ef319d) {
      return &PTR____CFConstantStringClassReference_110f801d8;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110e36478;
}



/* Entry: 10b791894; end: 10b7918bb; -[SOJUScannableActionUnlockableSticker initWithThumbnailImageLink:stickerTitle:stickerPackId:unlockDurationInMins:unlocked:unlockableId:] */

void FUN_10b791894(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7918bc; end: 10b791967; +[SOJUScannableActionUnlockableSticker registerMessageFields:] */

void FUN_10b7918bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b79198c();
  func_0x00010b791968();
  func_0x00010b79198c();
  func_0x00010b791968();
  func_0x00010b79198c();
  func_0x00010b791968();
  func_0x00010b79198c();
  func_0x00010b791980();
  func_0x00010b79198c();
  func_0x00010b791980();
  func_0x00010b79198c();
  func_0x00010b791968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791968; end: 10b791997;  */

void FUN_10b791968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b791998; end: 10b7919b7; -[SOJUScannableActionUrlOnly initWithUrl:remarks:] */

void FUN_10b791998(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7919b8; end: 10b791a13; +[SOJUScannableActionUrlOnly registerMessageFields:] */

void FUN_10b7919b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_url_1126816f8;
  _objc_retain(param_3);
  FUN_10b791a14(param_3,param_2,puVar1);
  FUN_10b791a14(param_3,param_2,PTR_s_remarks_112547138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791a14; end: 10b791a2b;  */

void FUN_10b791a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b791a2c; end: 10b791a4b; -[SOJUScannableAnalyticsSnapcodeDailyMetrics initWithScannableId:dailyMetrics:] */

void FUN_10b791a2c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791a4c; end: 10b791ad3; +[SOJUScannableAnalyticsSnapcodeDailyMetrics registerMessageFields:] */

void FUN_10b791a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b791ad4();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e1188);
  FUN_10b791ad4();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791ad4; end: 10b791ae7;  */

void FUN_10b791ad4(void)

{
  return;
}



/* Entry: 10b791ae8; end: 10b791b07; -[SOJUScannableAnalyticsSnapcodeMetricsDay initWithDate:scanCount:clickCount:] */

void FUN_10b791ae8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791b08; end: 10b791b97; +[SOJUScannableAnalyticsSnapcodeMetricsDay registerMessageFields:] */

void FUN_10b791b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_date_1125b6d20;
  _objc_retain(param_3);
  FUN_10b791b98(param_3,param_2,puVar1,0,0);
  func_0x00010c18ec00(param_3);
  FUN_10b791b98(param_3,param_2,PTR_s_scanCount_112547158,0,1);
  FUN_10b791b98(param_3,param_2,PTR_s_clickCount_1125acbb0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791b98; end: 10b791ba7;  */

void FUN_10b791b98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b791ba8; end: 10b791bcb; -[SOJUScannableAnalyticsSnapcodeTotalMetrics initWithScannableId:scanCountTotal:clickCountTotal:lastUpdated:] */

void FUN_10b791ba8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791bcc; end: 10b791c4b; +[SOJUScannableAnalyticsSnapcodeTotalMetrics registerMessageFields:] */

void FUN_10b791bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_scannableId_1126317f0;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,0,0,0);
  FUN_10b791c4c();
  FUN_10b791c4c();
  FUN_10b791c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791c4c; end: 10b791cef;  */

void FUN_10b791c4c(void)

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



/* Entry: 10b791cf0; end: 10b791d6f;  */

undefined8 FUN_10b791cf0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45eb8;
  func_0x00010b791dc4();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x21c1577;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80398;
    func_0x00010b791dc4();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xfffffffffc5db1ce;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80178;
      func_0x00010b791dc4();
      uVar2 = 0x3ecc2a7c;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b791d70; end: 10b791dcb;  */

undefined ** FUN_10b791d70(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x3a24e32) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f80398;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45eb8;
  if (param_1 != 0x21c1577) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80178;
  if (param_1 != 0x3ecc2a7c) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b791dcc; end: 10b791deb; -[SOJUScannableDeepLinkPostInfo initWithPublishDate:postHeadline:postSubhead:] */

void FUN_10b791dcc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791dec; end: 10b791e5f; +[SOJUScannableDeepLinkPostInfo registerMessageFields:] */

void FUN_10b791dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_publishDate_112547180;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,2,0,0,0,0);
  FUN_10b791e60();
  FUN_10b791e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791e60; end: 10b791e7f;  */

void FUN_10b791e60(void)

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



/* Entry: 10b791e80; end: 10b791eaf; -[SOJUScannableMusicMusicActionRequest initWithTimestamp:reqToken:username:snapchatUserId:artistName:songGenre:songTitle:musicGenre:] */

void FUN_10b791e80(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791eb0; end: 10b791f7f; +[SOJUScannableMusicMusicActionRequest registerMessageFields:] */

void FUN_10b791eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  func_0x00010b791fa0(param_3,param_2,puVar1,0,0);
  func_0x00010b791f80();
  func_0x00010b791fa0(param_3,param_2,PTR_s_username_112682b30,0,0);
  func_0x00010b791f80();
  func_0x00010b791f80();
  func_0x00010bf06b60(param_3,param_2,PTR_s_songGenre_1125471a0,0,1,1,0,0,0,0);
  func_0x00010b791f80();
  func_0x00010b791f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b791f80; end: 10b791faf;  */

void FUN_10b791f80(void)

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



/* Entry: 10b791fb0; end: 10b791fbb; +[SOJUScannableMusicMusicActionRequestBuilder messageClass] */

void FUN_10b791fb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1190);
  return;
}



/* Entry: 10b791fbc; end: 10b791fbf; +[SOJUScannableMusicMusicActionRequestBuilder withJUScannableMusicMusicActionRequest:] */

void FUN_10b791fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b791fc0; end: 10b791fef; -[SOJUScannableScannableAction initWithIdValue:type:data:status:priority:timeCreated:timeExpired:devDescription:] */

void FUN_10b791fc0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b791ff0; end: 10b792107; +[SOJUScannableScannableAction registerMessageFields:] */

void FUN_10b791ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b792108(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b792124();
  func_0x00010bf06b60();
  func_0x00010b792114();
  FUN_10b792108();
  func_0x00010b792124();
  func_0x00010bf06b60();
  func_0x00010b792114();
  FUN_10b792108();
  func_0x00010b792114();
  FUN_10b792108();
  func_0x00010b792114();
  FUN_10b792108();
  func_0x00010b792114();
  FUN_10b792108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792108; end: 10b79213b;  */

void FUN_10b792108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b79213c; end: 10b792147; +[SOJUScannableScannableActionBuilder messageClass] */

void FUN_10b79213c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1198);
  return;
}



/* Entry: 10b792148; end: 10b79214b; +[SOJUScannableScannableActionBuilder withJUScannableScannableAction:] */

void FUN_10b792148(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b79214c; end: 10b79216b; -[SOJUScannableServletScannableResponse initWithScannableActions:scannableId:] */

void FUN_10b79214c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b79216c; end: 10b79220b; +[SOJUScannableServletScannableResponse registerMessageFields:] */

void FUN_10b79216c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1198;
  puVar1 = PTR_s_scannableActions_1126317e0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_scannableId_1126317f0,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79220c; end: 10b79228b;  */

undefined8 FUN_10b79220c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f49b38;
  func_0x00010b7922e0();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffcadb1721;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80178;
    func_0x00010b7922e0();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3ecc2a7c;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f803b8;
      func_0x00010b7922e0();
      uVar2 = 0xffffffff8735bbf9;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b79228c; end: 10b7922e7;  */

undefined ** FUN_10b79228c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x3ecc2a7c) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f80178;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f49b38;
  if (param_1 != -0x3524e8df) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f803b8;
  if (param_1 != -0x78ca4407) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7922e8; end: 10b792367;  */

undefined8 FUN_10b7922e8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f803d8;
  func_0x00010b7923bc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4f929424;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f803f8;
    func_0x00010b7923bc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffa67feba9;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80418;
      func_0x00010b7923bc();
      uVar2 = 0x869df16;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b792368; end: 10b7923c3;  */

undefined ** FUN_10b792368(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x59801457) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f803f8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80418;
  if (param_1 != 0x869df16) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f803d8;
  if (param_1 != 0x4f929424) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7923c4; end: 10b7923c7; -[SOJUSearchShareStory initWithDynamicStoryId:] */

void FUN_10b7923c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7923c8; end: 10b792407; +[SOJUSearchShareStory registerMessageFields:] */

void FUN_10b7923c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_dynamicStoryId_1125c0878,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b792408; end: 10b792427; -[SOJUSearchShareStorySnap initWithSnapId:mediaType:dynamicStoryId:] */

void FUN_10b792408(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792428; end: 10b792497; +[SOJUSearchShareStorySnap registerMessageFields:] */

void FUN_10b792428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snapId_11266deb0;
  _objc_retain(param_3);
  FUN_10b792498(param_3,param_2,puVar1);
  FUN_10b792498(param_3,param_2,PTR_s_mediaType_11260f520);
  FUN_10b792498(param_3,param_2,PTR_s_dynamicStoryId_1125c0878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792498; end: 10b7924af;  */

void FUN_10b792498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b7924b0; end: 10b7924bb; +[SOJUSearchShareStorySnapBuilder messageClass] */

void FUN_10b7924b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e10c8);
  return;
}



/* Entry: 10b7924bc; end: 10b7924bf; +[SOJUSearchShareStorySnapBuilder withJUSearchShareStorySnap:] */

void FUN_10b7924bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7924c0; end: 10b7924df; -[SOJUSecurityArroyoMessageIdentifier initWithConversationId:messageId:legacyMessageId:] */

void FUN_10b7924c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7924e0; end: 10b792553; +[SOJUSecurityArroyoMessageIdentifier registerMessageFields:] */

void FUN_10b7924e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_conversationId_1125b1a48;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,0,0,0);
  FUN_10b792554();
  FUN_10b792554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792554; end: 10b792573;  */

void FUN_10b792554(void)

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



/* Entry: 10b792574; end: 10b792593; -[SOJUSecurityArroyoRetryInfo initWithArroyoMessageId:fideliusDeviceRecipientInfo:recipientBeta:] */

void FUN_10b792574(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792594; end: 10b792627; +[SOJUSecurityArroyoRetryInfo registerMessageFields:] */

void FUN_10b792594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0688;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b792628();
  _objc_opt_class(PTR_PTR_1126c0690);
  FUN_10b792628();
  func_0x00010bf06b60(param_3,param_2,PTR_s_recipientBeta_1126264c8,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792628; end: 10b79264b;  */

void FUN_10b792628(void)

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



/* Entry: 10b79264c; end: 10b792673; -[SOJUSecurityFidUpdatePackage initWithSnapIds:friendKeys:clearSnapIdsDeprecated:reset:arroyoMessageIds:arroyoRetryInfos:] */

void FUN_10b79264c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792674; end: 10b7927b3; +[SOJUSecurityFidUpdatePackage registerMessageFields:] */

void FUN_10b792674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x7;
  
  puVar1 = PTR_s_snapIds_11266df30;
  _objc_retain(param_3);
  func_0x00010b7927d0(param_3,param_2,puVar1,0,1,7,0,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x9d14c8c73bfd91);
  _objc_opt_class(PTR_PTR_1126c0680);
  func_0x00010b7927b4();
  func_0x00010b7927d0(param_3,param_2,PTR_s_clearSnapIdsDeprecated_112547218,
                      &PTR____CFConstantStringClassReference_110f80438,2,7,0,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0xbe6d7f3463da8d);
  func_0x00010b7927d0(param_3,param_2,PTR_s_reset_11262ba18,0,0,0,0,in_x7,0,0);
  _objc_opt_class(PTR_PTR_1126c0688);
  func_0x00010b7927b4();
  _objc_opt_class(PTR_PTR_1126c0698);
  func_0x00010b7927b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7927b4; end: 10b7927d7;  */

void FUN_10b7927b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7927d8; end: 10b792803; -[SOJUSecurityFideliusAckRetry initWithSnapId:fideliusVersion:fideliusPackage:senderOutBeta:retrySource:cleartextKeyDeprecated:arroyoMessageId:] */

void FUN_10b7927d8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792804; end: 10b792903; +[SOJUSecurityFideliusAckRetry registerMessageFields:] */

void FUN_10b792804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snapId_11266deb0;
  _objc_retain(param_3);
  FUN_10b792904(param_3,param_2,puVar1,0,1,2);
  func_0x00010b79292c();
  FUN_10b792904();
  _objc_opt_class(PTR_PTR_1126c0418);
  func_0x00010b792910();
  func_0x00010b79292c();
  FUN_10b792904();
  func_0x00010b79292c();
  FUN_10b792904();
  FUN_10b792904(param_3,param_2,PTR_s_cleartextKeyDeprecated_112547240,
                &PTR____CFConstantStringClassReference_110f80458,2,6);
  _objc_opt_class(PTR_PTR_1126c0688);
  func_0x00010b792910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792904; end: 10b79293f;  */

void FUN_10b792904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b792940; end: 10b79294b; +[SOJUSecurityFideliusAckRetryBuilder messageClass] */

void FUN_10b792940(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e11a0);
  return;
}



/* Entry: 10b79294c; end: 10b79294f; +[SOJUSecurityFideliusAckRetryBuilder withJUSecurityFideliusAckRetry:] */

void FUN_10b79294c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b792950; end: 10b792953; -[SOJUSecurityFideliusAckRetryRequest initWithAckRetries:] */

void FUN_10b792950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b792954; end: 10b7929cb; +[SOJUSecurityFideliusAckRetryRequest registerMessageFields:] */

void FUN_10b792954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e11a0;
  puVar1 = PTR_s_ackRetries_112547258;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7929cc; end: 10b7929eb; -[SOJUSecurityFideliusClearRetryRequest initWithSnapIds:arroyoMessages:] */

void FUN_10b7929cc(void)

{
  func_0x00010c012ba0();
  return;
}


