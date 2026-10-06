/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b254b0c; end: 10b254b37; +[SCGrapheneDataSaverMetric dialogShown] */

void FUN_10b254b0c(void)

{
  _objc_alloc(PTR_PTR_1126dfd18);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b254b38; end: 10b254b63; +[SCGrapheneDataSaverMetric dialogGoToSettings] */

void FUN_10b254b38(void)

{
  _objc_alloc(PTR_PTR_1126dfd18);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b254b64; end: 10b254c03; -[SCGrapheneDataSaverMetric description] */

void FUN_10b254b64(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5ecb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f5ecb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112705e28;
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



/* Entry: 10b254c04; end: 10b254d4f; -[SCGrapheneRegistry dataSaverGraphene] */

void FUN_10b254c04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b254c8c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f43d0 != -1) {
    func_0x000107c27d9c(0x1137f43d0,&puStack_48);
  }
  uVar1 = uRam00000001137f43c8;
  _objc_retain(uRam00000001137f43c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b254d50; end: 10b254d5b; -[SCLegacyTravelModeSignalProviderServices .cxx_destruct] */

void FUN_10b254d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b254d5c; end: 10b254d67; -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForOneYear] */

void FUN_10b254d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ed18);
  return;
}



/* Entry: 10b254d68; end: 10b254d73; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForOneYearServerParam] */

undefined ** FUN_10b254d68(void)

{
  return &PTR____CFConstantStringClassReference_110f5ed18;
}



/* Entry: 10b254d74; end: 10b254d83; -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForOneYear:] */

void FUN_10b254d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ed18,param_3);
  return;
}



/* Entry: 10b254d84; end: 10b254dab; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_one_year_client_value:] */

void FUN_10b254d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254dac; end: 10b254dd3; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_one_year_server_value:] */

void FUN_10b254dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254dd4; end: 10b254deb; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForOneYear] */

void FUN_10b254dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ed18,
             &PTR____CFConstantStringClassReference_110efd4f8);
  return;
}



/* Entry: 10b254dec; end: 10b254df7; -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForSixMonths] */

void FUN_10b254dec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ed38);
  return;
}



/* Entry: 10b254df8; end: 10b254e03; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForSixMonthsServerParam] */

undefined ** FUN_10b254df8(void)

{
  return &PTR____CFConstantStringClassReference_110f5ed38;
}



/* Entry: 10b254e04; end: 10b254e13; -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForSixMonths:] */

void FUN_10b254e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ed38,param_3);
  return;
}



/* Entry: 10b254e14; end: 10b254e3b; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_six_months_client_value:] */

void FUN_10b254e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254e3c; end: 10b254e63; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_six_months_server_value:] */

void FUN_10b254e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254e64; end: 10b254e7b; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForSixMonths] */

void FUN_10b254e64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ed38,
             &PTR____CFConstantStringClassReference_110efd478);
  return;
}



/* Entry: 10b254e7c; end: 10b254e87; -[SCFeatureSettingsService getEmojiForBestFriends] */

void FUN_10b254e7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ed58);
  return;
}



/* Entry: 10b254e88; end: 10b254e93; -[SCFeatureSettingsService emojiForBestFriendsServerParam] */

undefined ** FUN_10b254e88(void)

{
  return &PTR____CFConstantStringClassReference_110f5ed58;
}



/* Entry: 10b254e94; end: 10b254ea3; -[SCFeatureSettingsService setEmojiForBestFriends:] */

void FUN_10b254e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ed58,param_3);
  return;
}



/* Entry: 10b254ea4; end: 10b254ecb; -[SCFeatureSettingsService emoji_for_best_friends_client_value:] */

void FUN_10b254ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254ecc; end: 10b254ef3; -[SCFeatureSettingsService emoji_for_best_friends_server_value:] */

void FUN_10b254ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254ef4; end: 10b254f0b; -[SCFeatureSettingsService emojiForBestFriends] */

void FUN_10b254ef4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ed58,
             &PTR____CFConstantStringClassReference_110e45e38);
  return;
}



/* Entry: 10b254f0c; end: 10b254f17; -[SCFeatureSettingsService getEmojiForNumberOneBestFriends] */

void FUN_10b254f0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ed78);
  return;
}



/* Entry: 10b254f18; end: 10b254f23; -[SCFeatureSettingsService emojiForNumberOneBestFriendsServerParam] */

undefined ** FUN_10b254f18(void)

{
  return &PTR____CFConstantStringClassReference_110f5ed78;
}



/* Entry: 10b254f24; end: 10b254f33; -[SCFeatureSettingsService setEmojiForNumberOneBestFriends:] */

void FUN_10b254f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ed78,param_3);
  return;
}



/* Entry: 10b254f34; end: 10b254f5b; -[SCFeatureSettingsService emoji_for_number_one_best_friends_client_value:] */

void FUN_10b254f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254f5c; end: 10b254f83; -[SCFeatureSettingsService emoji_for_number_one_best_friends_server_value:] */

void FUN_10b254f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254f84; end: 10b254f9b; -[SCFeatureSettingsService emojiForNumberOneBestFriends] */

void FUN_10b254f84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ed78,
             &PTR____CFConstantStringClassReference_110e28998);
  return;
}



/* Entry: 10b254f9c; end: 10b254fa7; -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForTwoWeeks] */

void FUN_10b254f9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ed98);
  return;
}



/* Entry: 10b254fa8; end: 10b254fb3; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoWeeksServerParam] */

undefined ** FUN_10b254fa8(void)

{
  return &PTR____CFConstantStringClassReference_110f5ed98;
}



/* Entry: 10b254fb4; end: 10b254fc3; -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForTwoWeeks:] */

void FUN_10b254fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ed98,param_3);
  return;
}



/* Entry: 10b254fc4; end: 10b254feb; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_weeks_client_value:] */

void FUN_10b254fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b254fec; end: 10b255013; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_weeks_server_value:] */

void FUN_10b254fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255014; end: 10b25502b; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoWeeks] */

void FUN_10b255014(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ed98,
             &PTR____CFConstantStringClassReference_110e288d8);
  return;
}



/* Entry: 10b25502c; end: 10b255037; -[SCFeatureSettingsService getEmojiForNumberOneBestFriendsForTwoMonths] */

void FUN_10b25502c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5edb8);
  return;
}



/* Entry: 10b255038; end: 10b255043; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoMonthsServerParam] */

undefined ** FUN_10b255038(void)

{
  return &PTR____CFConstantStringClassReference_110f5edb8;
}



/* Entry: 10b255044; end: 10b255053; -[SCFeatureSettingsService setEmojiForNumberOneBestFriendsForTwoMonths:] */

void FUN_10b255044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5edb8,param_3);
  return;
}



/* Entry: 10b255054; end: 10b25507b; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_months_client_value:] */

void FUN_10b255054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25507c; end: 10b2550a3; -[SCFeatureSettingsService emoji_for_number_one_best_friends_for_two_months_server_value:] */

void FUN_10b25507c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2550a4; end: 10b2550bb; -[SCFeatureSettingsService emojiForNumberOneBestFriendsForTwoMonths] */

void FUN_10b2550a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5edb8,
             &PTR____CFConstantStringClassReference_110efd458);
  return;
}



/* Entry: 10b2550bc; end: 10b2550c7; -[SCFeatureSettingsService getEmojiForMutualBestFriends] */

void FUN_10b2550bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5edd8);
  return;
}



/* Entry: 10b2550c8; end: 10b2550d3; -[SCFeatureSettingsService emojiForMutualBestFriendsServerParam] */

undefined ** FUN_10b2550c8(void)

{
  return &PTR____CFConstantStringClassReference_110f5edd8;
}



/* Entry: 10b2550d4; end: 10b2550e3; -[SCFeatureSettingsService setEmojiForMutualBestFriends:] */

void FUN_10b2550d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5edd8,param_3);
  return;
}



/* Entry: 10b2550e4; end: 10b25510b; -[SCFeatureSettingsService emoji_for_mutual_best_friends_client_value:] */

void FUN_10b2550e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25510c; end: 10b255133; -[SCFeatureSettingsService emoji_for_mutual_best_friends_server_value:] */

void FUN_10b25510c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255134; end: 10b25514b; -[SCFeatureSettingsService emojiForMutualBestFriends] */

void FUN_10b255134(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5edd8,
             &PTR____CFConstantStringClassReference_110e8c618);
  return;
}



/* Entry: 10b25514c; end: 10b255157; -[SCFeatureSettingsService getEmojiForMutualNumberOneBestFriends] */

void FUN_10b25514c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5edf8);
  return;
}



/* Entry: 10b255158; end: 10b255163; -[SCFeatureSettingsService emojiForMutualNumberOneBestFriendsServerParam] */

undefined ** FUN_10b255158(void)

{
  return &PTR____CFConstantStringClassReference_110f5edf8;
}



/* Entry: 10b255164; end: 10b255173; -[SCFeatureSettingsService setEmojiForMutualNumberOneBestFriends:] */

void FUN_10b255164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5edf8,param_3);
  return;
}



/* Entry: 10b255174; end: 10b25519b; -[SCFeatureSettingsService emoji_for_mutual_number_one_best_friends_client_value:] */

void FUN_10b255174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25519c; end: 10b2551c3; -[SCFeatureSettingsService emoji_for_mutual_number_one_best_friends_server_value:] */

void FUN_10b25519c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2551c4; end: 10b2551db; -[SCFeatureSettingsService emojiForMutualNumberOneBestFriends] */

void FUN_10b2551c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5edf8,
             &PTR____CFConstantStringClassReference_110f5ef18);
  return;
}



/* Entry: 10b2551dc; end: 10b2551e7; -[SCFeatureSettingsService getEmojiForSnapstreak] */

void FUN_10b2551dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ee18);
  return;
}



/* Entry: 10b2551e8; end: 10b2551f3; -[SCFeatureSettingsService emojiForSnapstreakServerParam] */

undefined ** FUN_10b2551e8(void)

{
  return &PTR____CFConstantStringClassReference_110f5ee18;
}



/* Entry: 10b2551f4; end: 10b255203; -[SCFeatureSettingsService setEmojiForSnapstreak:] */

void FUN_10b2551f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ee18,param_3);
  return;
}



/* Entry: 10b255204; end: 10b25522b; -[SCFeatureSettingsService emoji_for_snapstreak_client_value:] */

void FUN_10b255204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25522c; end: 10b255253; -[SCFeatureSettingsService emoji_for_snapstreak_server_value:] */

void FUN_10b25522c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255254; end: 10b25526b; -[SCFeatureSettingsService emojiForSnapstreak] */

void FUN_10b255254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ee18,
             &PTR____CFConstantStringClassReference_110dcb2f8);
  return;
}



/* Entry: 10b25526c; end: 10b255277; -[SCFeatureSettingsService getEmojiForPinnedConversation] */

void FUN_10b25526c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ee38);
  return;
}



/* Entry: 10b255278; end: 10b255283; -[SCFeatureSettingsService emojiForPinnedConversationServerParam] */

undefined ** FUN_10b255278(void)

{
  return &PTR____CFConstantStringClassReference_110f5ee38;
}



/* Entry: 10b255284; end: 10b255293; -[SCFeatureSettingsService setEmojiForPinnedConversation:] */

void FUN_10b255284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ee38,param_3);
  return;
}



/* Entry: 10b255294; end: 10b2552bb; -[SCFeatureSettingsService emoji_for_pinned_conversation_client_value:] */

void FUN_10b255294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2552bc; end: 10b2552e3; -[SCFeatureSettingsService emoji_for_pinned_conversation_server_value:] */

void FUN_10b2552bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2552e4; end: 10b2552fb; -[SCFeatureSettingsService emojiForPinnedConversation] */

void FUN_10b2552e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ee38,
             &PTR____CFConstantStringClassReference_110f5ef58);
  return;
}



/* Entry: 10b2552fc; end: 10b255307; -[SCFeatureSettingsService getEmojiForSnapBot] */

void FUN_10b2552fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ee58);
  return;
}



/* Entry: 10b255308; end: 10b255313; -[SCFeatureSettingsService emojiForSnapBotServerParam] */

undefined ** FUN_10b255308(void)

{
  return &PTR____CFConstantStringClassReference_110f5ee58;
}



/* Entry: 10b255314; end: 10b255323; -[SCFeatureSettingsService setEmojiForSnapBot:] */

void FUN_10b255314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ee58,param_3);
  return;
}



/* Entry: 10b255324; end: 10b25534b; -[SCFeatureSettingsService emoji_for_merlin_client_value:] */

void FUN_10b255324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25534c; end: 10b255373; -[SCFeatureSettingsService emoji_for_merlin_server_value:] */

void FUN_10b25534c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255374; end: 10b25538b; -[SCFeatureSettingsService emojiForSnapBot] */

void FUN_10b255374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ee58,
             &PTR____CFConstantStringClassReference_110f0a498);
  return;
}



/* Entry: 10b25538c; end: 10b255397; -[SCFeatureSettingsService getEmojiForTopGroups] */

void FUN_10b25538c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ee78);
  return;
}



/* Entry: 10b255398; end: 10b2553a3; -[SCFeatureSettingsService emojiForTopGroupsServerParam] */

undefined ** FUN_10b255398(void)

{
  return &PTR____CFConstantStringClassReference_110f5ee78;
}



/* Entry: 10b2553a4; end: 10b2553b3; -[SCFeatureSettingsService setEmojiForTopGroups:] */

void FUN_10b2553a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ee78,param_3);
  return;
}



/* Entry: 10b2553b4; end: 10b2553db; -[SCFeatureSettingsService emoji_for_top_groups_client_value:] */

void FUN_10b2553b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2553dc; end: 10b255403; -[SCFeatureSettingsService emoji_for_top_groups_server_value:] */

void FUN_10b2553dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255404; end: 10b25541b; -[SCFeatureSettingsService emojiForTopGroups] */

void FUN_10b255404(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ee78,
             &PTR____CFConstantStringClassReference_110f5ef78);
  return;
}



/* Entry: 10b25541c; end: 10b255427; -[SCFeatureSettingsService getEmojiForMutuallyPinnedBFF] */

void FUN_10b25541c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5ee98);
  return;
}



/* Entry: 10b255428; end: 10b255433; -[SCFeatureSettingsService emojiForMutuallyPinnedBFFServerParam] */

undefined ** FUN_10b255428(void)

{
  return &PTR____CFConstantStringClassReference_110f5ee98;
}



/* Entry: 10b255434; end: 10b255443; -[SCFeatureSettingsService setEmojiForMutuallyPinnedBFF:] */

void FUN_10b255434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5ee98,param_3);
  return;
}



/* Entry: 10b255444; end: 10b25546b; -[SCFeatureSettingsService emoji_for_mutually_pinned_bff_client_value:] */

void FUN_10b255444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25546c; end: 10b255493; -[SCFeatureSettingsService emoji_for_mutually_pinned_bff_server_value:] */

void FUN_10b25546c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255494; end: 10b2554ab; -[SCFeatureSettingsService emojiForMutuallyPinnedBFF] */

void FUN_10b255494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5ee98,
             &PTR____CFConstantStringClassReference_110f5efb8);
  return;
}



/* Entry: 10b2554ac; end: 10b2554b7; -[SCFeatureSettingsService getEmojiForNewFriends] */

void FUN_10b2554ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5eeb8);
  return;
}



/* Entry: 10b2554b8; end: 10b2554c3; -[SCFeatureSettingsService emojiForNewFriendsServerParam] */

undefined ** FUN_10b2554b8(void)

{
  return &PTR____CFConstantStringClassReference_110f5eeb8;
}



/* Entry: 10b2554c4; end: 10b2554d3; -[SCFeatureSettingsService setEmojiForNewFriends:] */

void FUN_10b2554c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5eeb8,param_3);
  return;
}



/* Entry: 10b2554d4; end: 10b2554fb; -[SCFeatureSettingsService emoji_for_new_friends_client_value:] */

void FUN_10b2554d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2554fc; end: 10b255523; -[SCFeatureSettingsService emoji_for_new_friends_server_value:] */

void FUN_10b2554fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b255524; end: 10b25553b; -[SCFeatureSettingsService emojiForNewFriends] */

void FUN_10b255524(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5eeb8,
             &PTR____CFConstantStringClassReference_110dc9818);
  return;
}



/* Entry: 10b25553c; end: 10b255543; -[SCFriendmojiServices friendmojiData] */

undefined8 FUN_10b25553c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b255544; end: 10b25554b; -[SCFriendmojiServices friendmojiDataProvider] */

undefined8 FUN_10b255544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b25554c; end: 10b255593; -[SCFriendmojiServices .cxx_destruct] */

void FUN_10b25554c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b255594; end: 10b25559f; -[SCFriendmojiDecoratorPluginScope .cxx_destruct] */

void FUN_10b255594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2555a0; end: 10b25570b; -[SCEmojiInfo initWithSource:title:emojiDesc:emojiPickerDesc:defaultVal:emojiLegendRank:] */

undefined1 *
FUN_10b2555a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_112705e48;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b25570c; end: 10b25572f; -[SCEmojiInfo copyWithZone:] */

undefined8 FUN_10b25570c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b255730; end: 10b2557d3; -[SCEmojiInfo hash] */

undefined8 * FUN_10b255730(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b2558b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b2558c0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b2558c0;
                }
                goto LAB_10b2558b4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b2558c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b2557d4; end: 10b2558db; -[SCEmojiInfo isEqual:] */

long FUN_10b2557d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b2558b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b2558c0;
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
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b2558c0;
                }
                goto LAB_10b2558b4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b2558c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b2558dc; end: 10b2558e3; -[SCEmojiInfo source] */

undefined8 FUN_10b2558dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2558e4; end: 10b2558eb; -[SCEmojiInfo title] */

undefined8 FUN_10b2558e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2558ec; end: 10b2558f3; -[SCEmojiInfo emojiDesc] */

undefined8 FUN_10b2558ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


