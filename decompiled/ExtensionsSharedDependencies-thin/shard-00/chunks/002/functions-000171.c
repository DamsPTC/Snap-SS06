/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0041a8b8; end: 0041a8c3;  */

bool FUN_0041a8b8(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 0041a8c4; end: 0041a93f;  */

undefined * FUN_0041a8c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fc78 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a22f40,&UNK_007ffbf4,&UNK_007ffc1c,2,
                    FUN_0041a940,0);
    do {
      if (puRam0000000000b5fc78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fc78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fc78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fc78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fc78;
}



/* Entry: 0041a940; end: 0041a94b;  */

bool FUN_0041a940(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0041a94c; end: 0041a9c7;  */

undefined * FUN_0041a94c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fc80 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a22f60,&UNK_007ffc24,&UNK_007ffc60,3,
                    FUN_0041a9c8,0);
    do {
      if (puRam0000000000b5fc80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fc80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fc80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fc80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fc80;
}



/* Entry: 0041a9c8; end: 0041a9d3;  */

bool FUN_0041a9c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0041a9d4; end: 0041aa4f;  */

undefined * FUN_0041a9d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fc88 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a22f80,&UNK_007ffc6c,&UNK_007ffca8,3,
                    FUN_0041aa50,0);
    do {
      if (puRam0000000000b5fc88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fc88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fc88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fc88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fc88;
}



/* Entry: 0041aa50; end: 0041aa5b;  */

bool FUN_0041aa50(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0041aa5c; end: 0041aaf7; +[SCPBNFeatureMetadata descriptor] */

undefined * FUN_0041aa5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fc90 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad32a8,
                    &PTR____CFConstantStringClassReference_00a22fa0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_spotlightGrowth_00b001c0,0xc,0x68,
                    0x1c);
    func_0x00791460();
    func_0x00791440(puVar1,param_2,&UNK_007ffcb4);
    puRam0000000000b5fc90 = puVar1;
  }
  return puRam0000000000b5fc90;
}



/* Entry: 0041aaf8; end: 0041ab5f; +[SCPBNMessageReminders descriptor] */

void FUN_0041aaf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fc98 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad32f8,
                    &PTR____CFConstantStringClassReference_00a22fc0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_unreadChatMessageIdsArray_00affda0,
                    2,0x18,0x1c);
    puRam0000000000b5fc98 = puVar1;
  }
  return;
}



/* Entry: 0041ab60; end: 0041abdb; +[SCPBNSpotlightGrowth descriptor] */

undefined * FUN_0041ab60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fca0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3348,
                    &PTR____CFConstantStringClassReference_00a22fe0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_compositeStoryId_00affde0,2,0x18,
                    0x1c);
    func_0x00791440();
    puRam0000000000b5fca0 = puVar1;
  }
  return puRam0000000000b5fca0;
}



/* Entry: 0041abdc; end: 0041ac67; +[SCPBNMemories descriptor] */

undefined * FUN_0041abdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fca8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3398,
                    &PTR____CFConstantStringClassReference_00a23000,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_memoriesFeaturedStory_00affea0,3,
                    0x20,0x1c);
    func_0x00791460();
    puRam0000000000b5fca8 = puVar1;
  }
  return puRam0000000000b5fca8;
}



/* Entry: 0041ac68; end: 0041accf; +[SCPBNTyping descriptor] */

void FUN_0041ac68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcb0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad33e8,
                    &PTR____CFConstantStringClassReference_00a23020,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_messageId_00affd00,1,0x10,0x1c);
    puRam0000000000b5fcb0 = puVar1;
  }
  return;
}



/* Entry: 0041acd0; end: 0041ad4b; +[SCPBNMessagingMedia descriptor] */

undefined * FUN_0041acd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcb8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3438,
                    &PTR____CFConstantStringClassReference_00a23040,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_downloadURL_00afff00,3,0x20,0x1c);
    func_0x00791440();
    puRam0000000000b5fcb8 = puVar1;
  }
  return puRam0000000000b5fcb8;
}



/* Entry: 0041ad4c; end: 0041adb3; +[SCPBNChat descriptor] */

void FUN_0041ad4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcc0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3730,
                    &PTR____CFConstantStringClassReference_00a23060,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_isGroup_00b000a0,9,0x30,0x1c);
    puRam0000000000b5fcc0 = puVar1;
  }
  return;
}



/* Entry: 0041adb4; end: 0041ae4f; +[SCPBNChat_ChatFeatureMetadata descriptor] */

undefined * FUN_0041adb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcc8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3758,
                    &PTR____CFConstantStringClassReference_00a23080,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_liveGame_00affd20,1,0x10,0x1c);
    func_0x00791460();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00ad3730);
    puRam0000000000b5fcc8 = puVar1;
  }
  return puRam0000000000b5fcc8;
}



/* Entry: 0041ae50; end: 0041aeb7; +[SCPBNLiveGameMetadata descriptor] */

void FUN_0041ae50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcd0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad34d8,
                    &PTR____CFConstantStringClassReference_00a230a0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_gameType_00affd40,1,8,0x1c);
    puRam0000000000b5fcd0 = puVar1;
  }
  return;
}



/* Entry: 0041aeb8; end: 0041af1f; +[SCPBNSnap descriptor] */

void FUN_0041aeb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcd8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3528,
                    &PTR____CFConstantStringClassReference_00a230c0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_isGroup_00afffe0,6,0x28,0x1c);
    puRam0000000000b5fcd8 = puVar1;
  }
  return;
}



/* Entry: 0041af20; end: 0041afab; +[SCPBNFriendStory descriptor] */

undefined * FUN_0041af20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fce0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3780,
                    &PTR____CFConstantStringClassReference_00a230e0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_optIn_00affe20,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5fce0 = puVar1;
  }
  return puRam0000000000b5fce0;
}



/* Entry: 0041afac; end: 0041b02f; +[SCPBNFriendStory_OptIn descriptor] */

undefined * FUN_0041afac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fce8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad37a8,
                    &PTR____CFConstantStringClassReference_00a23100,
                    &PTR_s_snapchat_notification_00affce8,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5fce8 = puVar1;
  }
  return puRam0000000000b5fce8;
}



/* Entry: 0041b030; end: 0041b0bb; +[SCPBNDiscoverStory descriptor] */

undefined * FUN_0041b030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcf0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad37d0,
                    &PTR____CFConstantStringClassReference_00a23120,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_optIn_00affe60,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5fcf0 = puVar1;
  }
  return puRam0000000000b5fcf0;
}



/* Entry: 0041b0bc; end: 0041b13f; +[SCPBNDiscoverStory_OptIn descriptor] */

undefined * FUN_0041b0bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fcf8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad37f8,
                    &PTR____CFConstantStringClassReference_00a23100,
                    &PTR_s_snapchat_notification_00affce8,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5fcf8 = puVar1;
  }
  return puRam0000000000b5fcf8;
}



/* Entry: 0041b140; end: 0041b1bb; +[SCPBNFriendingSuggestion descriptor] */

undefined * FUN_0041b140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd00 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,
                    &_OBJC_CLASS___SCPBNFriendingSuggestion,
                    &PTR____CFConstantStringClassReference_00a23140,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_userId_00b00340,0xd,0x58,0x1c);
    func_0x00791440();
    puRam0000000000b5fd00 = puVar1;
  }
  return puRam0000000000b5fd00;
}



/* Entry: 0041b1bc; end: 0041b223; +[SCPBNFriendingSuggestions descriptor] */

void FUN_0041b1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd08 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3668,
                    &PTR____CFConstantStringClassReference_00a23160,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_suggestionsArray_00affd60,1,0x10,
                    0x1c);
    puRam0000000000b5fd08 = puVar1;
  }
  return;
}



/* Entry: 0041b224; end: 0041b28b; +[SCPBNFriendAdd descriptor] */

void FUN_0041b224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd10 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad36b8,
                    &PTR____CFConstantStringClassReference_00a23180,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_userId_00afff60,4,0x20,0x1c);
    puRam0000000000b5fd10 = puVar1;
  }
  return;
}



/* Entry: 0041b28c; end: 0041b307; +[SCPBNTiv descriptor] */

undefined * FUN_0041b28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd18 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3708,
                    &PTR____CFConstantStringClassReference_00a231a0,
                    &PTR_s_snapchat_notification_00affce8,&PTR_s_landingPageData_00affd80,1,0x10,
                    0x1c);
    func_0x00791440();
    puRam0000000000b5fd18 = puVar1;
  }
  return puRam0000000000b5fd18;
}



/* Entry: 0041b308; end: 0041b3eb; +[SCPushNotificationUUID descriptor] */

void FUN_0041b308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd20 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,
                    &_OBJC_CLASS___SCPushNotificationUUID,
                    &PTR____CFConstantStringClassReference_00a231c0,
                    &PTR_s_snapchat_notification_00b004e0,&PTR_s_id_p_00b004f8,1,0x10,0x1c);
    puRam0000000000b5fd20 = puVar1;
  }
  return;
}



/* Entry: 0041b3ec; end: 0041b3f7;  */

bool FUN_0041b3ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0041b3f8; end: 0041b45f; +[SCPBNTalkLiveUpdate descriptor] */

void FUN_0041b3f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fd30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad3938,
                    &PTR____CFConstantStringClassReference_00a23200,
                    &PTR_s_snapchat_notification_00b00518,&PTR_s_streamerCallId_00b00530,7,0x28,0x1c
                   );
    puRam0000000000b5fd30 = puVar1;
  }
  return;
}



/* Entry: 0041b460; end: 0041b53b; -[SCBitmojiNotificationExtensionUserDefaults configs] */

void FUN_0041b460(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar4 = puVar3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac2ae8;
  _objc_opt_class(PTR_PTR_00ac2ae8);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0041b53c; end: 0041b5cb; -[SCBitmojiNotificationExtensionUserDefaults setConfigs:] */

void FUN_0041b53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a23220);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0041b5cc; end: 0041b63f; -[SCBitmojiNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_0041b5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac39c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041b640; end: 0041b64b; -[SCBitmojiNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_0041b640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041b64c; end: 0041b6bf; -[SCBitmojiNotificationServiceExtensionConfigs initWithBitmojiSelfieCurrentCacheVersion:bitmojiSelfieNextCacheVersion:bitmojiSelfieNextCacheVersionThreshold:bitmojiUseStagingImages:bitmojiRenderStyle:] */

void FUN_0041b64c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_00ac39d0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
  }
  return;
}



/* Entry: 0041b6c0; end: 0041b783; -[SCBitmojiNotificationServiceExtensionConfigs initWithCoder:] */

undefined1 *
FUN_0041b6c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_00ac39d0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00781aa0(param_4);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0041b784; end: 0041b7a7; -[SCBitmojiNotificationServiceExtensionConfigs copyWithZone:] */

undefined8 FUN_0041b784(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0041b7a8; end: 0041b843; -[SCBitmojiNotificationServiceExtensionConfigs encodeWithCoder:] */

void FUN_0041b7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00782760(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a23240);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a23260);
  func_0x00782720(*(undefined4 *)(param_1 + 0xc),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a23280);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                  &PTR____CFConstantStringClassReference_00a232a0);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a232c0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0041b844; end: 0041b8df; -[SCBitmojiNotificationServiceExtensionConfigs hash] */

undefined8 * FUN_0041b844(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  lStack_30 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_20 = -lVar4;
  if (-1 < lVar4) {
    lStack_20 = lVar4;
  }
  func_0x0076fd30(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(char *)((long)puVar1 + 8) != param_3[8])))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        fVar6 = ABS(*(float *)((long)puVar1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        if (fVar6 <= 1.1754944e-38) {
          fVar6 = 1.1754944e-38;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(float *)((long)puVar1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar6);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 0041b8e0; end: 0041b9c7; -[SCBitmojiNotificationServiceExtensionConfigs isEqual:] */

bool FUN_0041b8e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((((uVar2 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar3 = false;
      }
      else {
        fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        if (fVar4 <= 1.1754944e-38) {
          fVar4 = 1.1754944e-38;
        }
        bVar3 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 0041b9c8; end: 0041b9cf; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiSelfieCurrentCacheVersion] */

undefined8 FUN_0041b9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0041b9d0; end: 0041b9d7; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiSelfieNextCacheVersion] */

undefined8 FUN_0041b9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0041b9d8; end: 0041b9df; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiSelfieNextCacheVersionThreshold] */

undefined4 FUN_0041b9d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 0041b9e0; end: 0041b9e7; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiUseStagingImages] */

undefined1 FUN_0041b9e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0041b9e8; end: 0041b9ef; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiRenderStyle] */

undefined8 FUN_0041b9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0041b9f0; end: 0041ba63; -[SCMapNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_0041b9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCMapNotificationExtensionUserDefaults_00ac39d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041ba64; end: 0041bb4b; -[SCMapNotificationExtensionUserDefaults mapNotificationServiceExtensionConfigs] */

void FUN_0041ba64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar4 = puVar3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac2af0;
  _objc_opt_class(PTR_PTR_00ac2af0);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0041bb4c; end: 0041bbeb; -[SCMapNotificationExtensionUserDefaults setMapNotificationServiceExtensionConfigs:] */

void FUN_0041bb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,param_3,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a232e0);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 0041bbec; end: 0041bbf7; -[SCMapNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_0041bbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041bbf8; end: 0041bd5b; -[SCNotificationServiceExtensionMapConfigs initWithCoder:] */

undefined1 *
FUN_0041bbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_00ac39e0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00781a80(param_4);
    *(ulong *)((long)puVar1 + 0x20) = CONCAT44(uVar5,uVar4);
    func_0x00781a80(param_4);
    *(ulong *)((long)puVar1 + 0x28) = CONCAT44(uVar5,uVar4);
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    func_0x00781aa0(param_4);
    *(undefined4 *)((long)puVar1 + 0x10) = uVar4;
    uVar2 = param_4;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    func_0x00781a80(param_4);
    *(ulong *)((long)puVar1 + 0x38) = CONCAT44(uVar5,uVar4);
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0041bd5c; end: 0041be57; -[SCNotificationServiceExtensionMapConfigs initWithDisableLiveLocationNotificationSuppression:notificationDelayThreshold:desiredAccuracy:maxLocationRequestDuration:shouldLogBatteryState:lpseGrapheneSamplingRate:etag:useValisStaging:maxStreamingDuration:publishStreamingBlizzardEvents:isOnboardedToFootsteps:useReducedAccuracyForPeriodicPushes:] */

undefined1 *
FUN_0041bd5c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
            undefined1 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
            undefined4 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_00ac39e0;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_10;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_11;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined1 *)((long)puVar1 + 0xb) = param_12;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xd) = param_13._1_1_;
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 0041be58; end: 0041be7b; -[SCNotificationServiceExtensionMapConfigs copyWithZone:] */

undefined8 FUN_0041be58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0041be7c; end: 0041bfa3; -[SCNotificationServiceExtensionMapConfigs encodeWithCoder:] */

void FUN_0041be7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x007826a0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a23300);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a23320);
  func_0x00782700(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a23340);
  func_0x00782700(*(undefined8 *)(param_1 + 0x28),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a23360);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                  &PTR____CFConstantStringClassReference_00a23380);
  func_0x00782720(*(undefined4 *)(param_1 + 0x10),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a233a0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                  &PTR____CFConstantStringClassReference_00a233c0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                  &PTR____CFConstantStringClassReference_00a233e0);
  func_0x00782700(*(undefined8 *)(param_1 + 0x38),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a23400);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                  &PTR____CFConstantStringClassReference_00a23420);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                  &PTR____CFConstantStringClassReference_00a23440);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                  &PTR____CFConstantStringClassReference_00a23460);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0041bfa4; end: 0041c0c7; -[SCNotificationServiceExtensionMapConfigs hash] */

ulong * FUN_0041bfa4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  float fVar8;
  double dVar9;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  lStack_80 = -lVar2;
  if (-1 < lVar2) {
    lStack_80 = lVar2;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar6 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  lStack_60 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  func_0x007843a0();
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  puVar4 = &uStack_88;
  uStack_58 = uVar3;
  func_0x0076fd30(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_0041c284:
    puVar7 = (ulong *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_0041c288;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         (((((char)puVar4[1] == (char)param_3[1] && (puVar4[3] == param_3[3])) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
           (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
       (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) {
      dVar9 = ABS((double)puVar4[4] - (double)param_3[4]);
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16)) {
        dVar9 = ABS((double)puVar4[5] - (double)param_3[5]);
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16)) {
          fVar8 = ABS(*(float *)(puVar4 + 2) - *(float *)(param_3 + 2));
          if ((fVar8 < 1.1754944e-38) ||
             (fVar8 < ABS(*(float *)(puVar4 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07)) {
            dVar9 = ABS((double)puVar4[7] - (double)param_3[7]);
            if ((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16)) {
              puVar7 = (ulong *)puVar4[6];
              if (puVar7 != (ulong *)param_3[6]) {
                func_0x007877e0();
                goto LAB_0041c288;
              }
              goto LAB_0041c284;
            }
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_0041c288:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 0041c0c8; end: 0041c2a3; -[SCNotificationServiceExtensionMapConfigs isEqual:] */

long FUN_0041c0c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0041c284:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0041c288;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      if ((dVar5 < 2.2250738585072014e-308) ||
         (dVar5 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16)) {
        dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16)) {
          fVar4 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
          if ((fVar4 < 1.1754944e-38) ||
             (fVar4 < ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07))
          {
            dVar5 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                        2.220446049250313e-16)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x007877e0();
                goto LAB_0041c288;
              }
              goto LAB_0041c284;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_0041c288:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0041c2a4; end: 0041c2ab; -[SCNotificationServiceExtensionMapConfigs disableLiveLocationNotificationSuppression] */

undefined1 FUN_0041c2a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0041c2ac; end: 0041c2b3; -[SCNotificationServiceExtensionMapConfigs notificationDelayThreshold] */

undefined8 FUN_0041c2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0041c2b4; end: 0041c2bb; -[SCNotificationServiceExtensionMapConfigs desiredAccuracy] */

undefined8 FUN_0041c2b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0041c2bc; end: 0041c2c3; -[SCNotificationServiceExtensionMapConfigs maxLocationRequestDuration] */

undefined8 FUN_0041c2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0041c2c4; end: 0041c2cb; -[SCNotificationServiceExtensionMapConfigs shouldLogBatteryState] */

undefined1 FUN_0041c2c4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 0041c2cc; end: 0041c2d3; -[SCNotificationServiceExtensionMapConfigs lpseGrapheneSamplingRate] */

undefined4 FUN_0041c2cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 0041c2d4; end: 0041c2db; -[SCNotificationServiceExtensionMapConfigs etag] */

undefined8 FUN_0041c2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0041c2dc; end: 0041c2e3; -[SCNotificationServiceExtensionMapConfigs useValisStaging] */

undefined1 FUN_0041c2dc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 0041c2e4; end: 0041c2eb; -[SCNotificationServiceExtensionMapConfigs maxStreamingDuration] */

undefined8 FUN_0041c2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 0041c2ec; end: 0041c2f3; -[SCNotificationServiceExtensionMapConfigs publishStreamingBlizzardEvents] */

undefined1 FUN_0041c2ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 0041c2f4; end: 0041c2fb; -[SCNotificationServiceExtensionMapConfigs isOnboardedToFootsteps] */

undefined1 FUN_0041c2f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 0041c2fc; end: 0041c303; -[SCNotificationServiceExtensionMapConfigs useReducedAccuracyForPeriodicPushes] */

undefined1 FUN_0041c2fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 0041c304; end: 0041c30f; -[SCNotificationServiceExtensionMapConfigs .cxx_destruct] */

void FUN_0041c304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x30,0);
  return;
}



/* Entry: 0041c310; end: 0041c383; -[SCMessagingNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_0041c310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac39e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041c384; end: 0041c45f; -[SCMessagingNotificationExtensionUserDefaults arroyoConfig] */

void FUN_0041c384(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar4 = puVar3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac2af8;
  _objc_opt_class(PTR_PTR_00ac2af8);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0041c460; end: 0041c4ef; -[SCMessagingNotificationExtensionUserDefaults setArroyoConfig:] */

void FUN_0041c460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a234a0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0041c4f0; end: 0041c537; -[SCMessagingNotificationExtensionUserDefaults latestUnreadMessageTimestamp] */

undefined8 FUN_0041c4f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x007871e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 0041c538; end: 0041c57b; -[SCMessagingNotificationExtensionUserDefaults setLatestUnreadMessageTimestamp:] */

void FUN_0041c538(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e6c0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0041c57c; end: 0041c587; -[SCMessagingNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_0041c57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041c588; end: 0041c64b; -[SCNotificationServiceExtensionArroyoConfig initWithCoder:] */

undefined1 * FUN_0041c588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac39f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041c64c; end: 0041c6eb; -[SCNotificationServiceExtensionArroyoConfig initWithEnableDebugTracing:useArroyoForNewConversations:disableArroyoOneOnOne:tweaks:] */

undefined1 *
FUN_0041c64c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac39f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 0041c6ec; end: 0041c70f; -[SCNotificationServiceExtensionArroyoConfig copyWithZone:] */

undefined8 FUN_0041c6ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0041c710; end: 0041c797; -[SCNotificationServiceExtensionArroyoConfig encodeWithCoder:] */

void FUN_0041c710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x007826a0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a234e0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                  &PTR____CFConstantStringClassReference_00a23500);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                  &PTR____CFConstantStringClassReference_00a23520);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a23540);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0041c798; end: 0041c807; -[SCNotificationServiceExtensionArroyoConfig hash] */

ulong * FUN_0041c798(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_28 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  puVar2 = &uStack_38;
  uStack_20 = uVar1;
  func_0x0076fd30(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_0041c8ac;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((((char)puVar2[1] != (char)param_3[1] ||
         (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
        (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) {
      puVar4 = (ulong *)0x0;
      goto LAB_0041c8ac;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x007877e0();
      goto LAB_0041c8ac;
    }
  }
  puVar4 = (ulong *)((long)&MACH_HEADER.magic + 1);
LAB_0041c8ac:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 0041c808; end: 0041c8c7; -[SCNotificationServiceExtensionArroyoConfig isEqual:] */

long FUN_0041c808(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0041c8ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
        (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
      lVar3 = 0;
      goto LAB_0041c8ac;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x007877e0();
      goto LAB_0041c8ac;
    }
  }
  lVar3 = 1;
LAB_0041c8ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0041c8c8; end: 0041c8cf; -[SCNotificationServiceExtensionArroyoConfig enableDebugTracing] */

undefined1 FUN_0041c8c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0041c8d0; end: 0041c8d7; -[SCNotificationServiceExtensionArroyoConfig useArroyoForNewConversations] */

undefined1 FUN_0041c8d0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 0041c8d8; end: 0041c8df; -[SCNotificationServiceExtensionArroyoConfig disableArroyoOneOnOne] */

undefined1 FUN_0041c8d8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 0041c8e0; end: 0041c8e7; -[SCNotificationServiceExtensionArroyoConfig tweaks] */

undefined8 FUN_0041c8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0041c8e8; end: 0041c8f3; -[SCNotificationServiceExtensionArroyoConfig .cxx_destruct] */

void FUN_0041c8e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0041c8f4; end: 0041ca5f; -[SCNSEArgosProvider fetchArgosHeaders:requestId:completionPerformer:successBlock:failureBlock:] */

void FUN_0041c8f4(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar4 = param_3;
  lVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
  if (param_7 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_00a23560;
    lVar5 = 1;
    func_0x00782e40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  puVar2 = PTR_PTR_00ac2b08;
  _objc_retain(ppuVar4);
  _objc_alloc_init(puVar2);
  func_0x0078fe60();
  _objc_release(ppuVar4);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007814c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fe20(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x0078fe20(puVar2);
  }
  func_0x0078fee0(puVar2);
  puVar1 = puVar2;
  func_0x007814c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_002967b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0041ca60; end: 0041cb53; -[SCNSEArgosProvider generateAttestationPayload:requestParameters:] */

void FUN_0041ca60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_00ac2b08;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x0078fe60();
  _objc_release(param_3);
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007814c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fe20(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x0078fe20(puVar1,param_2,param_4);
  }
  func_0x0078fee0(puVar1,param_2,4);
  puVar2 = puVar1;
  func_0x007814c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_002967b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0041cb54; end: 0041cb6f;  */

void _sc_extensionArgosProvider(void)

{
  _objc_alloc_init(PTR_PTR_00ac2b18);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0041cb70; end: 0041cbe3; -[SCArgosService initWithArgosImpl:] */

undefined1 * FUN_0041cb70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac39f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041cbe4; end: 0041cbeb; -[SCArgosService attestationProvider] */

undefined8 FUN_0041cbe4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0041cbec; end: 0041cbf7; -[SCArgosService .cxx_destruct] */

void FUN_0041cbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041cbf8; end: 0041cc6b; -[SCPreLoginAttestationService initWithPreLoginAttestationService:] */

undefined1 * FUN_0041cbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041cc6c; end: 0041cc73; -[SCPreLoginAttestationService preLoginAttestationProvider] */

undefined8 FUN_0041cc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0041cc74; end: 0041cc87; -[SCPreLoginAttestationService .cxx_destruct] */

void FUN_0041cc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041cc88; end: 0041d9df;  */

void FUN_0041cc88(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00780e80();
  uVar7 = param_2;
  func_0x00780e80();
  uVar5 = param_1;
  if (uVar7 != 0) {
    uVar7 = 0;
    uVar6 = param_1;
    do {
      puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_2;
      func_0x00789e00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x007822a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00780c40();
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(puVar1);
        break;
      }
      func_0x00791f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puVar1);
      uVar7 = uVar7 + 1;
      uVar2 = param_2;
      func_0x00780e80();
      uVar6 = uVar5;
    } while (uVar7 < uVar2);
  }
  uVar7 = uVar5;
  func_0x00780c40();
  uVar6 = uVar5;
  if ((int)uVar7 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x00791f80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar6);
  return;
}



/* Entry: 0041d9e0; end: 0041dac3;  */

void FUN_0041d9e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_0041dac4;
  puStack_50 = &UNK_009e2f48;
  uStack_48 = param_1;
  _objc_retain(param_1);
  ppuVar2 = &puStack_68;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_0041dbac;
  puStack_78 = &UNK_009e2f78;
  ppuStack_70 = ppuVar2;
  _objc_retain();
  func_0x0077f660(puVar3,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuStack_70);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0041dac4; end: 0041dbab;  */

void FUN_0041dac4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  func_0x007817c0(PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70,param_2,
                  *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0078a400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00781120(puVar3,param_2,puVar2,1,0,0);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_00ac2b38;
    puVar2 = puVar1;
    func_0x0078a400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788de0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0041dbac; end: 0041dbdb;  */

void FUN_0041dbac(void)

{
  _objc_alloc(PTR_PTR_00ac2b38);
  func_0x00786ac0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0041dbdc; end: 0041dbeb;  */

void FUN_0041dbdc(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  return;
}



/* Entry: 0041dbec; end: 0041dd37;  */

void FUN_0041dbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  _objc_retain(param_1);
  func_0x0077f660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(puVar1);
  func_0x0077f660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0041dd38; end: 0041de63;  */

void FUN_0041dd38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  func_0x007817c0(PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70,param_2,
                  *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0078a400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00781120(puVar2,param_2,puVar3,1,0,&uStack_38);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x0077bac0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a235e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_00ac2b40;
  _objc_alloc(PTR_PTR_00ac2b40);
  puVar4 = PTR_PTR_00ac2b48;
  _objc_opt_class(PTR_PTR_00ac2b48);
  func_0x0077cec0(puVar2,param_2,puVar4,puVar3,0,0,0,0,0);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0041de64; end: 0041df1f;  */

void FUN_0041de64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = PTR_PTR_00ac2b50;
  _objc_alloc(PTR_PTR_00ac2b50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = *(undefined **)(param_1 + 0x28);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSSet_00ac2a68;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_00ac2a68);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSSet_00ac2a68;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_00ac2a68);
    func_0x00786aa0(puVar3,param_2,uVar1,puVar4,puVar5);
    _objc_release(puVar5);
  }
  else {
    func_0x00786aa0(puVar3,param_2,uVar1,puVar4);
  }
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}


