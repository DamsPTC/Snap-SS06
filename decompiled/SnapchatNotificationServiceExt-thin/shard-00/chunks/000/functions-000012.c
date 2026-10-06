/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10004bc38; end: 10004bc9f; +[SCFriendingGetNearbyFriendsRequest descriptor] */

void FUN_10004bc38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9700 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7400,
                        &PTR____CFConstantStringClassReference_1000a7188,
                        &PTR_s_snapchat_friending_1000dffb0,&PTR_s_locationsArray_1000dffe8,2,0x10,
                        0x1c);
    puRam00000001000e9700 = puVar1;
  }
  return;
}



/* Entry: 10004bca0; end: 10004bd07; +[SCFriendingGetNearbyFriendsResponse descriptor] */

void FUN_10004bca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9708 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7450,
                        &PTR____CFConstantStringClassReference_1000a71a8,
                        &PTR_s_snapchat_friending_1000dffb0,&PTR_s_friendsArray_1000dffc8,1,0x10,
                        0x1c);
    puRam00000001000e9708 = puVar1;
  }
  return;
}



/* Entry: 10004bd08; end: 10004bd6f; +[SCFriendingNearbyFriend descriptor] */

void FUN_10004bd08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9710 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d74a0,
                        &PTR____CFConstantStringClassReference_1000a71c8,
                        &PTR_s_snapchat_friending_1000dffb0,&PTR_s_userId_1000e00a8,8,0x48,0x1c);
    puRam00000001000e9710 = puVar1;
  }
  return;
}



/* Entry: 10004bd70; end: 10004bdeb; +[SCFriendSuggestionPushNotification descriptor] */

undefined * FUN_10004bd70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9718 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7540,
                        &PTR____CFConstantStringClassReference_1000a71e8,
                        &PTR_s_snapchat_friending_1000e01a8,&PTR_s_userId_1000e01e0,0xd,0x68,0x1c);
    func_0x000100073940();
    puRam00000001000e9718 = puVar1;
  }
  return puRam00000001000e9718;
}



/* Entry: 10004bdec; end: 10004be53; +[SCFriendingSuggestionsInPushNotification descriptor] */

void FUN_10004bdec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9720 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7590,
                        &PTR____CFConstantStringClassReference_1000a7208,
                        &PTR_s_snapchat_friending_1000e01a8,&PTR_s_suggestedFriendsArray_1000e01c0,1
                        ,0x10,0x1c);
    puRam00000001000e9720 = puVar1;
  }
  return;
}



/* Entry: 10004be54; end: 10004bebb; +[SCAtlasGetOutgoingFriendsRequest descriptor] */

void FUN_10004be54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9728 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7630,
                        &PTR____CFConstantStringClassReference_1000a7228,
                        &PTR_s_com_snapchat_atlas_proto_1000e0380,&PTR_s_userId_1000e0398,2,0x18,
                        0x1c);
    puRam00000001000e9728 = puVar1;
  }
  return;
}



/* Entry: 10004bebc; end: 10004bf23; +[SCAtlasGetOutgoingFriendsResponse descriptor] */

void FUN_10004bebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9730 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7680,
                        &PTR____CFConstantStringClassReference_1000a7248,
                        &PTR_s_com_snapchat_atlas_proto_1000e0380,
                        &PTR_s_outgoingFriendsArray_1000e0418,3,0x20,0x1c);
    puRam00000001000e9730 = puVar1;
  }
  return;
}



/* Entry: 10004bf24; end: 10004bf9f; +[SCAtlasOutgoingFriend descriptor] */

undefined * FUN_10004bf24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9738 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d76d0,
                        &PTR____CFConstantStringClassReference_1000a7268,
                        &PTR_s_com_snapchat_atlas_proto_1000e0380,&PTR_s_userId_1000e0478,0x26,0xe0,
                        0x1c);
    func_0x000100073940();
    puRam00000001000e9738 = puVar1;
  }
  return puRam00000001000e9738;
}



/* Entry: 10004bfa0; end: 10004c01b; +[SCAtlasOutgoingFriend_FideliusDeviceInfo descriptor] */

undefined * FUN_10004bfa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9740 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7720,
                        &PTR____CFConstantStringClassReference_1000a7288,
                        &PTR_s_com_snapchat_atlas_proto_1000e0380,&PTR_s_outBeta_1000e03d8,2,0x10,
                        0x1c);
    func_0x000100073920();
    puRam00000001000e9740 = puVar1;
  }
  return puRam00000001000e9740;
}



/* Entry: 10004c01c; end: 10004c083; +[SCAtlasFriendmoji descriptor] */

void FUN_10004c01c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9748 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d77c0,
                        &PTR____CFConstantStringClassReference_1000a72a8,
                        &PTR_s_com_snapchat_atlas_proto_1000e0938,&PTR_s_categoryName_1000e0950,2,
                        0x18,0x1c);
    puRam00000001000e9748 = puVar1;
  }
  return;
}



/* Entry: 10004c084; end: 10004c167; +[SCAtlasExtraFriendmoji descriptor] */

void FUN_10004c084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9750 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7810,
                        &PTR____CFConstantStringClassReference_1000a72c8,
                        &PTR_s_com_snapchat_atlas_proto_1000e0938,&PTR_s_categoryName_1000e0990,2,
                        0x18,0x1c);
    puRam00000001000e9750 = puVar1;
  }
  return;
}



/* Entry: 10004c168; end: 10004c173;  */

bool FUN_10004c168(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10004c174; end: 10004c1db; +[SCAtlasEmojiInfo descriptor] */

void FUN_10004c174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9760 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d78b0,
                        &PTR____CFConstantStringClassReference_1000a7308,
                        &PTR_s_com_snapchat_atlas_proto_1000e09d0,&PTR_s_type_1000e09e8,8,0x38,0x1c)
    ;
    puRam00000001000e9760 = puVar1;
  }
  return;
}



/* Entry: 10004c1dc; end: 10004c243; +[SCAtlasSnapProInfo descriptor] */

void FUN_10004c1dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9768 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7950,
                        &PTR____CFConstantStringClassReference_1000a7328,
                        &PTR_s_com_snapchat_atlas_creators_1000e0ae8,
                        &PTR_s_unifiedProfileId_1000e0b40,6,0x28,0x1c);
    puRam00000001000e9768 = puVar1;
  }
  return;
}



/* Entry: 10004c244; end: 10004c327; +[SCAtlasSnapProInfoLogo descriptor] */

void FUN_10004c244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9770 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d79a0,
                        &PTR____CFConstantStringClassReference_1000a7348,
                        &PTR_s_com_snapchat_atlas_creators_1000e0ae8,&PTR_s_logoType_1000e0b00,2,
                        0x10,0x1c);
    puRam00000001000e9770 = puVar1;
  }
  return;
}



/* Entry: 10004c328; end: 10004c333;  */

bool FUN_10004c328(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10004c334; end: 10004c417; +[SCBitmojiAvatarMetadata descriptor] */

void FUN_10004c334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9780 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7a90,
                        &PTR____CFConstantStringClassReference_1000a7388,
                        &PTR_s_snapchat_bitmoji_profile_v1_1000e0c00,
                        &PTR_s_ugcGarmentArray_1000e0c18,2,0x10,0x1c);
    puRam00000001000e9780 = puVar1;
  }
  return;
}



/* Entry: 10004c418; end: 10004c423;  */

bool FUN_10004c418(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004c424; end: 10004c48b; +[SCBitmojiAvatarOption descriptor] */

void FUN_10004c424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9790 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7b30,
                        &PTR____CFConstantStringClassReference_1000a73c8,
                        &PTR_s_snapchat_bitmoji_avatar_v1_1000e0c58,&PTR_s_optionCategory_1000e0c70,
                        3,0x18,0x1c);
    puRam00000001000e9790 = puVar1;
  }
  return;
}



/* Entry: 10004c48c; end: 10004c517; +[SCBitmojiGarment descriptor] */

undefined * FUN_10004c48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9798 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7bd0,
                        &PTR____CFConstantStringClassReference_1000a73e8,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_top_1000e1f90,0xc,0x68,
                        0x1c);
    func_0x000100073960();
    puRam00000001000e9798 = puVar1;
  }
  return puRam00000001000e9798;
}



/* Entry: 10004c518; end: 10004c583; +[SCBitmojiOutfit descriptor] */

void FUN_10004c518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7c20,
                        &PTR____CFConstantStringClassReference_1000a7408,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_outfitId_1000e0cd0,0x4a,
                        0x134,0x1c);
    puRam00000001000e97a0 = puVar1;
  }
  return;
}



/* Entry: 10004c584; end: 10004c5eb; +[SCBitmojiTop descriptor] */

void FUN_10004c584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7c70,
                        &PTR____CFConstantStringClassReference_1000a7428,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_top_1000e1750,0xb,0x30,
                        0x1c);
    puRam00000001000e97a8 = puVar1;
  }
  return;
}



/* Entry: 10004c5ec; end: 10004c653; +[SCBitmojiBottom descriptor] */

void FUN_10004c5ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7cc0,
                        &PTR____CFConstantStringClassReference_1000a7448,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_bottom_1000e18b0,0xb,
                        0x30,0x1c);
    puRam00000001000e97b0 = puVar1;
  }
  return;
}



/* Entry: 10004c654; end: 10004c6bb; +[SCBitmojiFootwear descriptor] */

void FUN_10004c654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7d10,
                        &PTR____CFConstantStringClassReference_1000a7468,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_footwear_1000e1a10,0xb,
                        0x30,0x1c);
    puRam00000001000e97b8 = puVar1;
  }
  return;
}



/* Entry: 10004c6bc; end: 10004c723; +[SCBitmojiSock descriptor] */

void FUN_10004c6bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7d60,
                        &PTR____CFConstantStringClassReference_1000a7488,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_sock_1000e16b0,5,0x18,
                        0x1c);
    puRam00000001000e97c0 = puVar1;
  }
  return;
}



/* Entry: 10004c724; end: 10004c78b; +[SCBitmojiOuterwear descriptor] */

void FUN_10004c724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7db0,
                        &PTR____CFConstantStringClassReference_1000a74a8,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_outerwear_1000e1b70,0xb,
                        0x30,0x1c);
    puRam00000001000e97c8 = puVar1;
  }
  return;
}



/* Entry: 10004c78c; end: 10004c7f3; +[SCBitmojiOnePiece descriptor] */

void FUN_10004c78c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7e00,
                        &PTR____CFConstantStringClassReference_1000a74c8,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_top_1000e2110,0x16,0x5c,
                        0x1c);
    puRam00000001000e97d0 = puVar1;
  }
  return;
}



/* Entry: 10004c7f4; end: 10004c85b; +[SCBitmojiHat descriptor] */

void FUN_10004c7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7e50,
                        &PTR____CFConstantStringClassReference_1000a74e8,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_hat_1000e1cd0,0xb,0x30,
                        0x1c);
    puRam00000001000e97d8 = puVar1;
  }
  return;
}



/* Entry: 10004c85c; end: 10004c8c3; +[SCBitmojiLipstick descriptor] */

void FUN_10004c85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7ea0,
                        &PTR____CFConstantStringClassReference_1000a7508,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_lipstickTone_1000e1630,1
                        ,8,0x1c);
    puRam00000001000e97e0 = puVar1;
  }
  return;
}



/* Entry: 10004c8c4; end: 10004c92b; +[SCBitmojiEyeshadow descriptor] */

void FUN_10004c8c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7ef0,
                        &PTR____CFConstantStringClassReference_1000a7528,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_eyeshadowTone_1000e1650,
                        1,8,0x1c);
    puRam00000001000e97e8 = puVar1;
  }
  return;
}



/* Entry: 10004c92c; end: 10004c993; +[SCBitmojiBlush descriptor] */

void FUN_10004c92c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7f40,
                        &PTR____CFConstantStringClassReference_1000a7548,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_blushTone_1000e1670,1,8,
                        0x1c);
    puRam00000001000e97f0 = puVar1;
  }
  return;
}



/* Entry: 10004c994; end: 10004c9fb; +[SCBitmojiGlasses descriptor] */

void FUN_10004c994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e97f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7f90,
                        &PTR____CFConstantStringClassReference_1000a7568,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_glasses_1000e1690,1,8,
                        0x1c);
    puRam00000001000e97f8 = puVar1;
  }
  return;
}



/* Entry: 10004c9fc; end: 10004cadf; +[SCBitmojiBag descriptor] */

void FUN_10004c9fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9800 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7fe0,
                        &PTR____CFConstantStringClassReference_1000a7588,
                        &PTR_s_snapchat_bitmoji_fashion_v1_1000e1618,&PTR_s_bag_1000e1e30,0xb,0x30,
                        0x1c);
    puRam00000001000e9800 = puVar1;
  }
  return;
}



/* Entry: 10004cae0; end: 10004caeb;  */

bool FUN_10004cae0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004caec; end: 10004cb53; +[SCFideliusFideliusDeviceKey descriptor] */

void FUN_10004caec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9810 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8080,
                        &PTR____CFConstantStringClassReference_1000a75c8,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_publicKey_1000e25c8,7,0x40,0x1c);
    puRam00000001000e9810 = puVar1;
  }
  return;
}



/* Entry: 10004cb54; end: 10004cbbb; +[SCFideliusWebAppInfo descriptor] */

void FUN_10004cb54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9818 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d80d0,
                        &PTR____CFConstantStringClassReference_1000a75e8,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_publicKey_1000e26a8,8,0x48,0x1c);
    puRam00000001000e9818 = puVar1;
  }
  return;
}



/* Entry: 10004cbbc; end: 10004cc23; +[SCFideliusFideliusUserKey descriptor] */

void FUN_10004cbbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9820 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8120,
                        &PTR____CFConstantStringClassReference_1000a7608,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_deviceKeysArray_1000e23e8,1,0x10,
                        0x1c);
    puRam00000001000e9820 = puVar1;
  }
  return;
}



/* Entry: 10004cc24; end: 10004cc8b; +[SCFideliusFideliusWebRecord descriptor] */

void FUN_10004cc24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9828 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8170,
                        &PTR____CFConstantStringClassReference_1000a7628,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_webAppInfosArray_1000e2408,1,0x10,
                        0x1c);
    puRam00000001000e9828 = puVar1;
  }
  return;
}



/* Entry: 10004cc8c; end: 10004ccf3; +[SCFideliusFideliusTentativeDeviceKey descriptor] */

void FUN_10004cc8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9830 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d81c0,
                        &PTR____CFConstantStringClassReference_1000a7648,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_publicKey_1000e24c8,4,0x28,0x1c);
    puRam00000001000e9830 = puVar1;
  }
  return;
}



/* Entry: 10004ccf4; end: 10004cd5b; +[SCFideliusFideliusTentativeWebKey descriptor] */

void FUN_10004ccf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9838 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8210,
                        &PTR____CFConstantStringClassReference_1000a7668,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_publicKey_1000e2548,4,0x28,0x1c);
    puRam00000001000e9838 = puVar1;
  }
  return;
}



/* Entry: 10004cd5c; end: 10004cdc3; +[SCFideliusFriendKeys descriptor] */

void FUN_10004cd5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9840 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8260,
                        &PTR____CFConstantStringClassReference_1000a7688,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_userId_1000e2428,2,0x18,0x1c);
    puRam00000001000e9840 = puVar1;
  }
  return;
}



/* Entry: 10004cdc4; end: 10004cea7; +[SCFideliusFriendDeviceKey descriptor] */

void FUN_10004cdc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9848 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d82b0,
                        &PTR____CFConstantStringClassReference_1000a76a8,
                        &PTR_s_snapchat_fidelius_1000e23d0,&PTR_s_publicKey_1000e2468,3,0x18,0x1c);
    puRam00000001000e9848 = puVar1;
  }
  return;
}



/* Entry: 10004cea8; end: 10004ceb3;  */

bool FUN_10004cea8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004ceb4; end: 10004cf2f;  */

undefined * FUN_10004ceb4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9858 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a76e8,&UNK_1000908b4,
                        &UNK_1000908fc,3,FUN_10004cf30,0);
    do {
      if (puRam00000001000e9858 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9858;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9858,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9858 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9858;
}



/* Entry: 10004cf30; end: 10004cf3b;  */

bool FUN_10004cf30(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004cf3c; end: 10004cfb7;  */

undefined * FUN_10004cf3c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9860 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7708,&UNK_100090908,
                        &UNK_10009095c,3,FUN_10004cfb8,0);
    do {
      if (puRam00000001000e9860 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9860;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9860,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9860 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9860;
}



/* Entry: 10004cfb8; end: 10004cfc3;  */

bool FUN_10004cfb8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004cfc4; end: 10004d02b; +[SCMAGetActionmojiAssetsRequest descriptor] */

void FUN_10004cfc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9868 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8350,
                        &PTR____CFConstantStringClassReference_1000a7728,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_assetTypesArray_1000e2908,2,
                        0x10,0x1c);
    puRam00000001000e9868 = puVar1;
  }
  return;
}



/* Entry: 10004d02c; end: 10004d093; +[SCMAGetActionmojiAssetsResponse descriptor] */

void FUN_10004d02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9870 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d83a0,
                        &PTR____CFConstantStringClassReference_1000a7748,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_assetsArray_1000e2948,2,0x18
                        ,0x1c);
    puRam00000001000e9870 = puVar1;
  }
  return;
}



/* Entry: 10004d094; end: 10004d0fb; +[SCMAProduct descriptor] */

void FUN_10004d094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9878 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d83f0,
                        &PTR____CFConstantStringClassReference_1000a7768,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_asset_1000e2988,2,0x18,0x1c)
    ;
    puRam00000001000e9878 = puVar1;
  }
  return;
}



/* Entry: 10004d0fc; end: 10004d197; +[SCMAAsset descriptor] */

undefined * FUN_10004d0fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9880 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8440,
                        &PTR____CFConstantStringClassReference_1000a7788,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_assetId_1000e2ba8,7,0x38,
                        0x1c);
    func_0x000100073960();
    func_0x000100073940(puVar1,param_2,&UNK_100090968);
    puRam00000001000e9880 = puVar1;
  }
  return puRam00000001000e9880;
}



/* Entry: 10004d198; end: 10004d1ff; +[SCMASetActionmojiPreferencesRequest descriptor] */

void FUN_10004d198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9888 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8490,
                        &PTR____CFConstantStringClassReference_1000a77a8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_assetId_1000e2b08,5,0x28,
                        0x1c);
    puRam00000001000e9888 = puVar1;
  }
  return;
}



/* Entry: 10004d200; end: 10004d267; +[SCMASetActionmojiPreferencesResponse descriptor] */

void FUN_10004d200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9890 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d84e0,
                        &PTR____CFConstantStringClassReference_1000a77c8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_asset_1000e27c8,1,0x10,0x1c)
    ;
    puRam00000001000e9890 = puVar1;
  }
  return;
}



/* Entry: 10004d268; end: 10004d2cf; +[SCMAGetActionmojiPreferencesRequest descriptor] */

void FUN_10004d268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9898 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8530,
                        &PTR____CFConstantStringClassReference_1000a77e8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,0,0,4,0x1c);
    puRam00000001000e9898 = puVar1;
  }
  return;
}



/* Entry: 10004d2d0; end: 10004d337; +[SCMAGetActionmojiPreferencesResponse descriptor] */

void FUN_10004d2d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8580,
                        &PTR____CFConstantStringClassReference_1000a7808,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_assetsArray_1000e27e8,1,0x10
                        ,0x1c);
    puRam00000001000e98a0 = puVar1;
  }
  return;
}



/* Entry: 10004d338; end: 10004d39f; +[SCMAGetActionmojiSharingOptionsRequest descriptor] */

void FUN_10004d338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d85d0,
                        &PTR____CFConstantStringClassReference_1000a7828,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,0,0,4,0x1c);
    puRam00000001000e98a8 = puVar1;
  }
  return;
}



/* Entry: 10004d3a0; end: 10004d407; +[SCMAGetActionmojiSharingOptionsResponse descriptor] */

void FUN_10004d3a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8620,
                        &PTR____CFConstantStringClassReference_1000a7848,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_sharingOptions_1000e2808,1,
                        0x10,0x1c);
    puRam00000001000e98b0 = puVar1;
  }
  return;
}



/* Entry: 10004d408; end: 10004d46f; +[SCMASetActionmojiSharingOptionsRequest descriptor] */

void FUN_10004d408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8670,
                        &PTR____CFConstantStringClassReference_1000a7868,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_sharingOptions_1000e2828,1,
                        0x10,0x1c);
    puRam00000001000e98b8 = puVar1;
  }
  return;
}



/* Entry: 10004d470; end: 10004d4d7; +[SCMASetActionmojiSharingOptionsResponse descriptor] */

void FUN_10004d470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d86c0,
                        &PTR____CFConstantStringClassReference_1000a7888,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_sharingOptions_1000e2848,1,
                        0x10,0x1c);
    puRam00000001000e98c0 = puVar1;
  }
  return;
}



/* Entry: 10004d4d8; end: 10004d53f; +[SCMADeleteUserGeneratedActionmojiAssetRequest descriptor] */

void FUN_10004d4d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8710,
                        &PTR____CFConstantStringClassReference_1000a78a8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_assetId_1000e29c8,2,0x10,
                        0x1c);
    puRam00000001000e98c8 = puVar1;
  }
  return;
}



/* Entry: 10004d540; end: 10004d5a7; +[SCMADeleteUserGeneratedActionmojiAssetResponse descriptor] */

void FUN_10004d540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8760,
                        &PTR____CFConstantStringClassReference_1000a78c8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,0,0,4,0x1c);
    puRam00000001000e98d0 = puVar1;
  }
  return;
}



/* Entry: 10004d5a8; end: 10004d623; +[SCMACustomPet descriptor] */

undefined * FUN_10004d5a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d87b0,
                        &PTR____CFConstantStringClassReference_1000a78e8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_renderURL_1000e2c88,7,0x40,
                        0x1c);
    func_0x000100073940();
    puRam00000001000e98d8 = puVar1;
  }
  return puRam00000001000e98d8;
}



/* Entry: 10004d624; end: 10004d68b; +[SCMASharingOptions descriptor] */

void FUN_10004d624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8800,
                        &PTR____CFConstantStringClassReference_1000a7908,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_hidePetInChat_1000e2868,1,4,
                        0x1c);
    puRam00000001000e98e0 = puVar1;
  }
  return;
}



/* Entry: 10004d68c; end: 10004d6f3; +[SCMAActionmojiPreferences descriptor] */

void FUN_10004d68c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8850,
                        &PTR____CFConstantStringClassReference_1000a7928,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_pet_1000e2a08,2,0x18,0x1c);
    puRam00000001000e98e8 = puVar1;
  }
  return;
}



/* Entry: 10004d6f4; end: 10004d75b; +[SCMAUserPickedLocations descriptor] */

void FUN_10004d6f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d88a0,
                        &PTR____CFConstantStringClassReference_1000a7948,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_home_1000e2a88,4,0x20,0x1c);
    puRam00000001000e98f0 = puVar1;
  }
  return;
}



/* Entry: 10004d75c; end: 10004d7c3; +[SCMAHidableLocation descriptor] */

void FUN_10004d75c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e98f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d88f0,
                        &PTR____CFConstantStringClassReference_1000a7968,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_shouldHide_1000e2a48,2,0x10,
                        0x1c);
    puRam00000001000e98f8 = puVar1;
  }
  return;
}



/* Entry: 10004d7c4; end: 10004d82b; +[SCMAGetUserPickedLocationsRequest descriptor] */

void FUN_10004d7c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9900 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8940,
                        &PTR____CFConstantStringClassReference_1000a7988,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,
                        &PTR_s_includeUserPickedLocationsOnly_1000e2888,1,4,0x1c);
    puRam00000001000e9900 = puVar1;
  }
  return;
}



/* Entry: 10004d82c; end: 10004d893; +[SCMAGetUserPickedLocationsResponse descriptor] */

void FUN_10004d82c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9908 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8990,
                        &PTR____CFConstantStringClassReference_1000a79a8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_pickedLocations_1000e28a8,1,
                        0x10,0x1c);
    puRam00000001000e9908 = puVar1;
  }
  return;
}



/* Entry: 10004d894; end: 10004d8fb; +[SCMAUpdateUserPickedLocationsRequest descriptor] */

void FUN_10004d894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9910 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d89e0,
                        &PTR____CFConstantStringClassReference_1000a79c8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_pickedLocations_1000e28c8,1,
                        0x10,0x1c);
    puRam00000001000e9910 = puVar1;
  }
  return;
}



/* Entry: 10004d8fc; end: 10004d963; +[SCMAUpdateUserPickedLocationsResponse descriptor] */

void FUN_10004d8fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9918 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8a30,
                        &PTR____CFConstantStringClassReference_1000a79e8,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,0,0,4,0x1c);
    puRam00000001000e9918 = puVar1;
  }
  return;
}



/* Entry: 10004d964; end: 10004d9cb; +[SCMAUpdateSchoolPermissionRequest descriptor] */

void FUN_10004d964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9920 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8a80,
                        &PTR____CFConstantStringClassReference_1000a7a08,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,&PTR_s_hideSchoolLocation_1000e28e8
                        ,1,4,0x1c);
    puRam00000001000e9920 = puVar1;
  }
  return;
}



/* Entry: 10004d9cc; end: 10004daaf; +[SCMAUpdateSchoolPermissionResponse descriptor] */

void FUN_10004d9cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9928 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8ad0,
                        &PTR____CFConstantStringClassReference_1000a7a28,
                        &PTR_s_snapchat_map_actionmoji_1000e27b0,0,0,4,0x1c);
    puRam00000001000e9928 = puVar1;
  }
  return;
}



/* Entry: 10004dab0; end: 10004dabb;  */

bool FUN_10004dab0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10004dabc; end: 10004db23; +[SPCGPoint descriptor] */

void FUN_10004dabc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9938 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8b70,
                        &PTR____CFConstantStringClassReference_1000a7a68,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_lat_1000e2e08,2,0x18,0x1c);
    puRam00000001000e9938 = puVar1;
  }
  return;
}



/* Entry: 10004db24; end: 10004db8b; +[SPCGLineString descriptor] */

void FUN_10004db24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9940 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8bc0,
                        &PTR____CFConstantStringClassReference_1000a7a88,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_pointsArray_1000e2d88,1,0x10,0x1c);
    puRam00000001000e9940 = puVar1;
  }
  return;
}



/* Entry: 10004db8c; end: 10004dbf3; +[SPCGLinearRing descriptor] */

void FUN_10004db8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9948 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8c10,
                        &PTR____CFConstantStringClassReference_1000a7aa8,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_pointsArray_1000e2da8,1,0x10,0x1c);
    puRam00000001000e9948 = puVar1;
  }
  return;
}



/* Entry: 10004dbf4; end: 10004dc5b; +[SPCGPolygon descriptor] */

void FUN_10004dbf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9950 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8c60,
                        &PTR____CFConstantStringClassReference_1000a7ac8,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_ringsArray_1000e2dc8,1,0x10,0x1c);
    puRam00000001000e9950 = puVar1;
  }
  return;
}



/* Entry: 10004dc5c; end: 10004dcc3; +[SPCGMultiPolygon descriptor] */

void FUN_10004dc5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9958 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8cb0,
                        &PTR____CFConstantStringClassReference_1000a7ae8,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_polygonsArray_1000e2de8,1,0x10,0x1c);
    puRam00000001000e9958 = puVar1;
  }
  return;
}



/* Entry: 10004dcc4; end: 10004dd2b; +[SPCGRect descriptor] */

void FUN_10004dcc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9960 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8d00,
                        &PTR____CFConstantStringClassReference_1000a7b08,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_p1_1000e2e48,2,0x18,0x1c);
    puRam00000001000e9960 = puVar1;
  }
  return;
}



/* Entry: 10004dd2c; end: 10004dd93; +[SPCGCircle descriptor] */

void FUN_10004dd2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9968 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8d50,
                        &PTR____CFConstantStringClassReference_1000a7b28,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_point_1000e2e88,3,0x18,0x1c);
    puRam00000001000e9968 = puVar1;
  }
  return;
}



/* Entry: 10004dd94; end: 10004de2f; +[SPCGGeometry descriptor] */

undefined * FUN_10004dd94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9970 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8da0,
                        &PTR____CFConstantStringClassReference_1000a7b48,
                        &PTR_s_snapchat_geo_1000e2d70,&PTR_s_point_1000e2ee8,7,0x40,0x1c);
    func_0x000100073960();
    func_0x000100073940(puVar1,param_2,&UNK_1000909b8);
    puRam00000001000e9970 = puVar1;
  }
  return puRam00000001000e9970;
}



/* Entry: 10004de30; end: 10004deab;  */

undefined * FUN_10004de30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9978 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7b68,&UNK_1000909c0,
                        &UNK_100090a10,6,FUN_10004deac,0);
    do {
      if (puRam00000001000e9978 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9978;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9978,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9978 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9978;
}



/* Entry: 10004deac; end: 10004deb7;  */

bool FUN_10004deac(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10004deb8; end: 10004df47;  */

undefined * FUN_10004deb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9980 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc40(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7b88,&UNK_100090a28,
                        &UNK_100090af4,6,FUN_10004df48,0,&UNK_100090b0c);
    do {
      if (puRam00000001000e9980 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9980;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9980,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9980 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9980;
}



/* Entry: 10004df48; end: 10004df53;  */

bool FUN_10004df48(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10004df54; end: 10004dfe3;  */

undefined * FUN_10004df54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9988 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc40(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7ba8,&UNK_100090b18,
                        &UNK_100090b58,2,FUN_10004dfe4,0,&UNK_100090b60);
    do {
      if (puRam00000001000e9988 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9988;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9988,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9988 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9988;
}



/* Entry: 10004dfe4; end: 10004dfef;  */

bool FUN_10004dfe4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10004dff0; end: 10004e06b;  */

undefined * FUN_10004dff0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9990 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7bc8,&UNK_100090b6d,
                        &UNK_100090bc8,3,FUN_10004e06c,0);
    do {
      if (puRam00000001000e9990 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9990;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9990,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9990 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9990;
}



/* Entry: 10004e06c; end: 10004e077;  */

bool FUN_10004e06c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004e078; end: 10004e0f3;  */

undefined * FUN_10004e078(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9998 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7be8,&UNK_100090bd4,
                        &UNK_100090c30,3,FUN_10004e0f4,0);
    do {
      if (puRam00000001000e9998 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9998;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9998,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9998 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9998;
}



/* Entry: 10004e0f4; end: 10004e0ff;  */

bool FUN_10004e0f4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004e100; end: 10004e17b;  */

undefined * FUN_10004e100(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e99a0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7c08,&UNK_100090c3c,
                        &UNK_100090c54,2,FUN_10004e17c,0);
    do {
      if (puRam00000001000e99a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e99a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e99a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e99a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e99a0;
}



/* Entry: 10004e17c; end: 10004e187;  */

bool FUN_10004e17c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10004e188; end: 10004e203;  */

undefined * FUN_10004e188(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e99a8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7c28,&UNK_100090c5c,
                        &UNK_100090c78,3,FUN_10004e204,0);
    do {
      if (puRam00000001000e99a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e99a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e99a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e99a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e99a8;
}



/* Entry: 10004e204; end: 10004e20f;  */

bool FUN_10004e204(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004e210; end: 10004e28b;  */

undefined * FUN_10004e210(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e99b0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a7c48,&UNK_100090c84,
                        &UNK_100090c9c,2,FUN_10004e28c,0);
    do {
      if (puRam00000001000e99b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e99b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e99b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e99b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e99b0;
}



/* Entry: 10004e28c; end: 10004e297;  */

bool FUN_10004e28c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10004e298; end: 10004e2ff; +[ReadinessCheckRequest descriptor] */

void FUN_10004e298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e99b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8e40,
                        &PTR____CFConstantStringClassReference_1000a7c68,
                        &PTR_s_merlin_toolbox_1000e2ff8,0,0,4,0x1c);
    puRam00000001000e99b8 = puVar1;
  }
  return;
}



/* Entry: 10004e300; end: 10004e367; +[ReadinessCheckResponse descriptor] */

void FUN_10004e300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e99c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8e90,
                        &PTR____CFConstantStringClassReference_1000a7c88,
                        &PTR_s_merlin_toolbox_1000e2ff8,0,0,4,0x1c);
    puRam00000001000e99c0 = puVar1;
  }
  return;
}



/* Entry: 10004e368; end: 10004e3cf; +[TranscriptVoiceNoteRequest descriptor] */

void FUN_10004e368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e99c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d8ee0,
                        &PTR____CFConstantStringClassReference_1000a7ca8,
                        &PTR_s_merlin_toolbox_1000e2ff8,&PTR_s_mediaInfo_1000e34b0,3,0x20,0x1c);
    puRam00000001000e99c8 = puVar1;
  }
  return;
}


