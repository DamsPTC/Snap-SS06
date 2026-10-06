/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10002f6b8; end: 10002f6bf; -[SCCrashRecoveryNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_10002f6b8(void)

{
  return 0;
}



/* Entry: 10002f6c0; end: 10002f6c7; -[SCCrashRecoveryNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_10002f6c0(void)

{
  return 0;
}



/* Entry: 10002f6c8; end: 10002f6d3; -[SCCrashRecoveryNotificationModifierProvider .cxx_destruct] */

void FUN_10002f6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002f6d4; end: 10002f747; -[SCNotifExtGrowthCampaignNotificationBadgeCountProvider initWithGrapheneExtensionLogger:] */

undefined1 * FUN_10002f6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002f748; end: 10002f79b; -[SCNotifExtGrowthCampaignNotificationBadgeCountProvider badgeCountProviderType] */

void FUN_10002f748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30;
  func_0x00010002f9dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000723e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 10002f79c; end: 10002f7f7; -[SCNotifExtGrowthCampaignNotificationBadgeCountProvider provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_10002f79c(undefined8 param_1)

{
  long in_x4;
  
  _objc_retain(in_x4);
  func_0x00010006c640(param_1);
  (**(code **)(in_x4 + 0x10))(in_x4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(in_x4);
  return;
}



/* Entry: 10002f7f8; end: 10002f8df; -[SCNotifExtGrowthCampaignNotificationBadgeCountProvider _fullBadgeCountWithNotifications:incomingNotification:] */

long FUN_10002f7f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010006e840(param_3);
  if (param_4 != 0) {
    param_3 = param_3 + 1;
    lVar1 = param_4;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000100072060(lVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      func_0x00010006c880(param_1,param_2,lVar4);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_4);
  return param_3;
}



/* Entry: 10002f8e0; end: 10002f9cf; -[SCNotifExtGrowthCampaignNotificationBadgeCountProvider _incrementLoggingForType:] */

void FUN_10002f8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070720(puVar1);
  _objc_release(puVar2);
  func_0x00010006ff00(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10002f9d0; end: 10002f9e7; -[SCNotifExtGrowthCampaignNotificationBadgeCountProvider .cxx_destruct] */

void FUN_10002f9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002f9e8; end: 10002fa43;  */

ulong FUN_10002f9e8(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  _SCNotifExtTypeContainedIn(param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abc58);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    _SCNotifExtTypeContainedIn(param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abc70);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10002fa44; end: 10002fa5b;  */

void FUN_10002fa44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtTypeContainedIn_1000a0448)
            (param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abc58);
  return;
}



/* Entry: 10002fa5c; end: 10002facf; -[SCGrowthMessageRemindersSDNSuppressor initWithArroyoAdapter:] */

undefined1 * FUN_10002fa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2450;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002fad0; end: 10002fd43; -[SCGrowthMessageRemindersSDNSuppressor getSuppressionReason:conversationMetadata:] */

undefined8 FUN_10002fad0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010006e7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100074320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 == 0) || (lVar2 = param_3, func_0x00010006f360(), (int)lVar2 != 10)) {
    uVar7 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x000100071b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010006f6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071340();
    func_0x000100071380(uVar4);
    lVar5 = lVar2;
    func_0x000100074420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006e840();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x000100074440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010006e840();
    _objc_release(lVar5);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 1;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10002fd44;
    uStack_90 = 0x10002fd54;
    uStack_88 = 0;
    lVar5 = lVar2;
    func_0x000100074420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f260();
    _objc_release(lVar5);
    uVar7 = 2;
    if ((*(byte *)(puStack_78 + 3) & lVar6 == 0) == 0) {
      uVar7 = 0;
    }
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10002fd44; end: 10002fd5b;  */

void FUN_10002fd44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10002fd5c; end: 10002fe37;  */

void FUN_10002fd5c(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x30) < param_2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x000100071f80(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
    *param_4 = 1;
  }
  return;
}



/* Entry: 10002fe38; end: 10002fe43; -[SCGrowthMessageRemindersSDNSuppressor .cxx_destruct] */

void FUN_10002fe38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002fe44; end: 10002ff6b; -[SCGrowthNotificationModifier initWithProcessingScope:] */

undefined8 FUN_10002fe44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puVar1 = PTR___NSConcreteStackBlock_1000a00f0;
  puStack_78 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10002ff6c;
  puStack_60 = &UNK_1000a2528;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010006dfc0(puVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10002ff9c;
  puStack_88 = &UNK_1000a2558;
  uStack_80 = param_3;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar3,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070900(param_1,param_2,param_3,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uStack_80);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10002ff6c; end: 10002ffcb;  */

void FUN_10002ff6c(void)

{
  _objc_alloc(PTR_PTR_1000d1e98);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10002ffcc; end: 1000300b7; -[SCGrowthNotificationModifier initWithProcessingScope:avatarLazy:intentDonatorLazy:] */

undefined1 *
FUN_10002ffcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1000d2458;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000300b8; end: 1000303cf; -[SCGrowthNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000300b8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar4 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar5;
  FUN_10002f9e8();
  if ((int)uVar4 != 0) {
    uVar3 = param_1;
    func_0x00010006d6e0();
    if ((int)uVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x000100074180(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010006f040(uVar4);
      _objc_release(uVar4);
    }
    else {
      _SCNotifExtModifyContentForCommNotif
                (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
      uVar4 = uVar5;
      FUN_10002fa44();
      if ((int)uVar4 == 0) {
        uVar3 = param_1;
        func_0x00010006d240();
        if (((uVar3 & 1) != 0) || (uVar3 = param_1, func_0x00010006d5e0(), (int)uVar3 == 0)) {
          func_0x00010006c4a0(param_1);
          goto LAB_1000302fc;
        }
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x000100074180(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010006efe0(uVar4);
        _objc_release(uVar4);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x000100074180(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010006f040(uVar4);
        _objc_release(uVar4);
      }
    }
    _objc_release(param_4);
  }
LAB_1000302fc:
  _objc_release(uVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 1000303d0; end: 100030487;  */

void FUN_1000303d0(long param_1,undefined8 param_2)

{
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010006c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__donateIntent__1000cf920,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100030488; end: 1000304bb; -[SCGrowthNotificationModifier bestAttemptContent] */

void FUN_100030488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100073800(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 1000304bc; end: 100030517; -[SCGrowthNotificationModifier _shouldAddAvatarToGrowthNotification:] */

ulong FUN_1000304bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010006d620(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010006d600(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 100030518; end: 10003054f; -[SCGrowthNotificationModifier _shouldAddAvatarToStoryNotification:] */

void FUN_100030518(long param_1,undefined8 param_2,int param_3)

{
  FUN_10002fa44();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100073ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showBitmojiEnabled_1000d16a0);
    return;
  }
  return;
}



/* Entry: 100030550; end: 100030587; -[SCGrowthNotificationModifier _shouldAddAvatarToMessageReminderNotification:] */

void FUN_100030550(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010002fa50();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100073ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showBitmojiEnabled_1000d16a0);
    return;
  }
  return;
}



/* Entry: 100030588; end: 10003067b; -[SCGrowthNotificationModifier _shouldSendCommunicationNotification:] */

undefined8 FUN_100030588(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010002fa50();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010002fa44();
    iVar1 = (int)uVar2;
    if (iVar1 != 0) goto LAB_10003060c;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x000100072060(lVar3,param_2,&PTR____CFConstantStringClassReference_1000a4c68);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001000713a0();
    if (lVar4 == 0) {
      uVar2 = param_3;
      func_0x00010002fa44();
      _objc_release();
      iVar1 = (int)lVar3;
      if ((uVar2 & 1) == 0) goto LAB_10003065c;
    }
    else {
      _objc_release();
      iVar1 = (int)lVar3;
    }
LAB_10003060c:
    _SCNotifExtPhoneSupportsCommNotif();
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x000100074640(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x000100074180();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010006e360();
      _objc_release(uVar6);
      _objc_release(uVar5);
      goto LAB_100030660;
    }
  }
LAB_10003065c:
  uVar7 = 0;
LAB_100030660:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10003067c; end: 10003067f; -[SCGrowthNotificationModifier _notifExtPhoneSupportsLeftImageOnCommNotif] */

void FUN_10003067c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtPhoneSupportsLeftImageOnCommNotif_1000a0440)();
  return;
}



/* Entry: 100030680; end: 10003079f; -[SCGrowthNotificationModifier _donateIntent:] */

void FUN_100030680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100074180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x100030734;
  puStack_48 = &UNK_1000a25b8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010006ef80(uVar1,param_2,uVar2,0,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1000307a0; end: 1000307ff; -[SCGrowthNotificationModifier .cxx_destruct] */

void FUN_1000307a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100030800; end: 100030807; +[SCGrowthNotificationModifierProvider IsBitmojiGrowthPushType:] */

ulong FUN_100030800(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  _SCNotifExtTypeContainedIn(param_3,&PTR__OBJC_CLASS___NSConstantArray_1000abc58);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    _SCNotifExtTypeContainedIn(param_3,&PTR__OBJC_CLASS___NSConstantArray_1000abc70);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 100030808; end: 1000308d3; -[SCGrowthNotificationModifierProvider initWithProcessingScope:grapheneExtensionLogger:arroyoAdapter:] */

undefined1 *
FUN_100030808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1000d2460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000308d4; end: 100030903; -[SCGrowthNotificationModifierProvider getModifier:] */

void FUN_1000308d4(void)

{
  _objc_alloc(PTR_PTR_1000d1ea8);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100030904; end: 10003090b; -[SCGrowthNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_100030904(void)

{
  return 0;
}



/* Entry: 10003090c; end: 1000309a3; -[SCGrowthNotificationModifierProvider getBadgeCountProviders] */

void FUN_10003090c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  iVar1 = (int)&puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR_PTR_1000d1eb0;
  _objc_alloc();
  func_0x000100070400();
  puStack_30 = puVar2;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010006f360();
    if (iVar1 == 10) {
      _objc_alloc(PTR_PTR_1000d1eb8);
      func_0x000100070060();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000309a4; end: 1000309eb; -[SCGrowthNotificationModifierProvider getSuppressor:] */

void FUN_1000309a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010006f360();
  if (param_3 == 10) {
    _objc_alloc(PTR_PTR_1000d1eb8);
    func_0x000100070060();
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000309ec; end: 100030a27; -[SCGrowthNotificationModifierProvider .cxx_destruct] */

void FUN_1000309ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100030a28; end: 100030b4f; -[SCDeviceCheckExtensionImpl fetchDeviceTokenWithCompletionHandler:] */

void FUN_100030a28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___DCDevice_1000d1ec0;
  func_0x00010006e940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100071240();
  if (((ulong)puVar2 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_1000a3a08);
  }
  else {
    _objc_retain(param_3);
    func_0x00010006f640(puVar1);
    _objc_release(param_3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 100030b50; end: 100030c17; -[SCDeviceCheckExtensionImpl generateDeviceTokenWithCompletionHandler:] */

void FUN_100030b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100030bd4;
  puStack_30 = &UNK_1000a2618;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010006f3c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 100030c18; end: 100030c33;  */

void FUN_100030c18(void)

{
  _objc_alloc_init(PTR_PTR_1000d1ec8);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100030c34; end: 100030ca7; -[SCDeviceCheckServices initWithDeviceCheckTokenFetcher:] */

undefined1 * FUN_100030c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100030ca8; end: 100030caf; -[SCDeviceCheckServices deviceCheckTokenFetcher] */

undefined8 FUN_100030ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100030cb0; end: 100030cbb; -[SCDeviceCheckServices .cxx_destruct] */

void FUN_100030cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100030cbc; end: 100030d37;  */

undefined * FUN_100030cbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9438 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a4c88,&UNK_10008fd60,
                        &UNK_10008fd80,4,FUN_100030d38,0);
    do {
      if (puRam00000001000e9438 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9438;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9438,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9438 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9438;
}



/* Entry: 100030d38; end: 100030d43;  */

bool FUN_100030d38(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 100030d44; end: 100030dbf;  */

undefined * FUN_100030d44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9440 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a4ca8,&UNK_10008fd90,
                        &UNK_10008fdc0,4,FUN_100030dc0,0);
    do {
      if (puRam00000001000e9440 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9440;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9440,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9440 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9440;
}



/* Entry: 100030dc0; end: 100030dcb;  */

bool FUN_100030dc0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 100030dcc; end: 100030e47;  */

undefined * FUN_100030dcc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9448 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a4cc8,&UNK_10008fdd0,
                        &UNK_10008fe08,3,FUN_100030e48,0);
    do {
      if (puRam00000001000e9448 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9448;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9448,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9448 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9448;
}



/* Entry: 100030e48; end: 100030e53;  */

bool FUN_100030e48(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 100030e54; end: 100030ecf;  */

undefined * FUN_100030e54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9450 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a4ce8,&UNK_10008fe14,
                        &UNK_10008fe58,6,FUN_100030ed0,0);
    do {
      if (puRam00000001000e9450 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9450;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9450,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9450 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9450;
}



/* Entry: 100030ed0; end: 100030edb;  */

bool FUN_100030ed0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 100030edc; end: 100030f43; +[SCSecurityDuplexTriggerHermodEventRequest descriptor] */

void FUN_100030edc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9458 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d4480,
                        &PTR____CFConstantStringClassReference_1000a4d08,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_userId_1000de130,9,0x48,0x1c);
    puRam00000001000e9458 = puVar1;
  }
  return;
}



/* Entry: 100030f44; end: 100030fab; +[SCSecurityDuplexRetryPolicy descriptor] */

void FUN_100030f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9460 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d44d0,
                        &PTR____CFConstantStringClassReference_1000a4d28,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_intervalMinutes_1000de010,3,
                        0x10,0x1c);
    puRam00000001000e9460 = puVar1;
  }
  return;
}



/* Entry: 100030fac; end: 100031013; +[SCSecurityDuplexTriggerHermodEventResponse descriptor] */

void FUN_100030fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9468 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d4520,
                        &PTR____CFConstantStringClassReference_1000a4d48,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_taskId_1000ddfd0,1,0x10,0x1c);
    puRam00000001000e9468 = puVar1;
  }
  return;
}



/* Entry: 100031014; end: 10003107b; +[SCSecurityDuplexSubmitHermodClientPayloadRequest descriptor] */

void FUN_100031014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9470 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d4570,
                        &PTR____CFConstantStringClassReference_1000a4d68,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_taskId_1000de070,3,0x18,0x1c);
    puRam00000001000e9470 = puVar1;
  }
  return;
}



/* Entry: 10003107c; end: 1000310e3; +[SCSecurityDuplexSubmitHermodClientPayloadResponse descriptor] */

void FUN_10003107c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9478 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d45c0,
                        &PTR____CFConstantStringClassReference_1000a4d88,
                        &PTR_s_snap_security_duplex_1000ddfb8,0,0,4,0x1c);
    puRam00000001000e9478 = puVar1;
  }
  return;
}



/* Entry: 1000310e4; end: 10003114b; +[SCSecurityDuplexAckHermodEventRequest descriptor] */

void FUN_1000310e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9480 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d4610,
                        &PTR____CFConstantStringClassReference_1000a4da8,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_taskId_1000de0d0,3,0x18,0x1c);
    puRam00000001000e9480 = puVar1;
  }
  return;
}



/* Entry: 10003114c; end: 1000311b3; +[SCSecurityDuplexAckHermodEventResponse descriptor] */

void FUN_10003114c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9488 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d4660,
                        &PTR____CFConstantStringClassReference_1000a4dc8,
                        &PTR_s_snap_security_duplex_1000ddfb8,0,0,4,0x1c);
    puRam00000001000e9488 = puVar1;
  }
  return;
}



/* Entry: 1000311b4; end: 10003121b; +[SCSecurityDuplexGetTaskStatusRequest descriptor] */

void FUN_1000311b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9490 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d46b0,
                        &PTR____CFConstantStringClassReference_1000a4de8,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_taskId_1000ddff0,1,0x10,0x1c);
    puRam00000001000e9490 = puVar1;
  }
  return;
}



/* Entry: 10003121c; end: 100031283; +[SCSecurityDuplexGetTaskStatusResponse descriptor] */

void FUN_10003121c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9498 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d4700,
                        &PTR____CFConstantStringClassReference_1000a4e08,
                        &PTR_s_snap_security_duplex_1000ddfb8,&PTR_s_taskId_1000de250,10,0x48,0x1c);
    puRam00000001000e9498 = puVar1;
  }
  return;
}



/* Entry: 100031284; end: 1000312f7; -[SCInteractiveStickersNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100031284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000312f8; end: 10003133b; -[SCInteractiveStickersNotificationModifierProvider getModifier:] */

void FUN_1000312f8(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x000100031358();
  if (param_3 != 0) {
    _objc_alloc(PTR_PTR_1000d1ee8);
    func_0x0001000707c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10003133c; end: 100031343; -[SCInteractiveStickersNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_10003133c(void)

{
  return 0;
}



/* Entry: 100031344; end: 10003134b; -[SCInteractiveStickersNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_100031344(void)

{
  return 0;
}



/* Entry: 10003134c; end: 100031363; -[SCInteractiveStickersNotificationModifierProvider .cxx_destruct] */

void FUN_10003134c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100031364; end: 1000313df; -[SCStoryInviteStickerNotificationModifier initWithProcessingScope:] */

undefined8 FUN_100031364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_1000a2668);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000709e0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000313e0; end: 1000313fb;  */

void FUN_1000313e0(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___SCMultiSenderTemplateModifier_1000d1ef0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000313fc; end: 10003149f; -[SCStoryInviteStickerNotificationModifier initWithProcessingScope:multiSenderTemplateModifierProvider:] */

undefined1 *
FUN_1000313fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000314a0; end: 100031643; -[SCStoryInviteStickerNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000314a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100071be0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100074180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074160();
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100071d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010006f6e0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100031644; end: 1000316b3;  */

void FUN_100031644(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010006c6e0();
  _objc_release(param_2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010006c740();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 1000316b4; end: 10003171b;  */

void FUN_1000316b4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 10003171c; end: 10003174f; -[SCStoryInviteStickerNotificationModifier bestAttemptContent] */

void FUN_10003171c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100073800(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100031750; end: 100031a6b; -[SCStoryInviteStickerNotificationModifier _groupNotificationsIfNeededWithRequest:notifications:] */

void FUN_100031750(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010006e860(param_4,param_2,&uStack_130,auStack_f0,0x10);
  uVar9 = *(undefined8 *)PTR__SCPushNotificationGroupedSendersKey_1000a0470;
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        lVar12 = *(long *)(lStack_128 + lVar11 * 8);
        lVar6 = lVar12;
        func_0x0001000726a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010006e720();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar6);
        if (lVar5 == 0) {
          lVar6 = lVar12;
          func_0x0001000726a0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar6;
          func_0x00010006fda0();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001000726a0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar12;
          func_0x00010006e720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006e340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          _objc_release(lVar12);
          _objc_release(lVar3);
LAB_1000319c4:
          _objc_release(lVar6);
        }
        else {
          lVar6 = lVar5;
          func_0x000100071100(lVar5,param_2,uVar7);
          if ((int)lVar6 != 0) {
            func_0x0001000726a0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar12;
            func_0x00010006e720();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar6;
            func_0x000100074620();
            _objc_retainAutoreleasedReturnValue();
            func_0x000100072060();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar3);
            _objc_release(lVar6);
            _objc_release(lVar12);
            lVar6 = *(long *)(param_1 + 0x10);
            func_0x000100074180(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010006dd40();
            goto LAB_1000319c4;
          }
        }
        _objc_release(lVar5);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_4;
      func_0x00010006e860(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  func_0x000100072060(*(undefined8 *)(param_1 + 0x20),param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(uVar9);
  func_0x000100073800(uVar7,param_2,uVar1);
  puVar8 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  func_0x000100072060(uVar7,param_2,&PTR____CFConstantStringClassReference_1000a3908);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073760(*(undefined8 *)(param_4 + 0x18),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  func_0x000100072060(uVar7,param_2,&PTR____CFConstantStringClassReference_1000a3928);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072ba0(*(undefined8 *)(param_4 + 0x18),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  func_0x000100073660(*(undefined8 *)(param_4 + 0x18),param_2,0);
  func_0x0001000720a0(uVar9,param_2,*(undefined8 *)(param_4 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar9);
  return;
}



/* Entry: 100031a6c; end: 100031b7b; -[SCStoryInviteStickerNotificationModifier _handleContentWithModifierCallback:] */

void FUN_100031a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x000100073800(uVar2,param_2,uVar1);
  puVar3 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100072060(uVar2,param_2,&PTR____CFConstantStringClassReference_1000a3908);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073760(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100072060(uVar2,param_2,&PTR____CFConstantStringClassReference_1000a3928);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072ba0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x000100073660(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x0001000720a0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100031b7c; end: 100031bc3; -[SCStoryInviteStickerNotificationModifier .cxx_destruct] */

void FUN_100031b7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100031bc4; end: 100031bd7; -[SCLensNotificationBadgeUpdater badgeCountProviderType] */

void FUN_100031bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000723f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30,
             PTR_s_pushTypeWithTypes__1000d10f0,&PTR__OBJC_CLASS___NSConstantArray_1000abca0);
  return;
}



/* Entry: 100031bd8; end: 100031c2b; -[SCLensNotificationBadgeUpdater provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_100031bd8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  _objc_retain(param_5);
  func_0x00010006e840(param_3);
  if (param_4 != 0) {
    param_3 = param_3 + 1;
  }
  (**(code **)(param_5 + 0x10))(param_5,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_5);
  return;
}



/* Entry: 100031c2c; end: 100031c9f; -[SCLensNotificationModifier initWithProcessingScope:] */

undefined8 FUN_100031c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCNotifExtAttachmentModifier_1000d1ef8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  func_0x000100070840(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100031ca0; end: 100031d43; -[SCLensNotificationModifier initWithProcessingScope:attachmentModifier:] */

undefined1 *
FUN_100031ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100031d44; end: 100031f4b; -[SCLensNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100031d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 == 0) || (lVar4 = lVar3, func_0x0001000713a0(), lVar4 == 0)) {
    func_0x0001000720a0(param_4);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = uVar2;
    func_0x000100073de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010006d9c0(uVar1);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100031f4c; end: 100031f8f;  */

void FUN_100031f4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010006c720();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100031f90; end: 100031fb7; -[SCLensNotificationModifier bestAttemptContent] */

void FUN_100031f90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100031fb8; end: 10003201b; -[SCLensNotificationModifier _handleAddAttachmentWithSuccess:withModifierCallback:] */

void FUN_100031fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_retain(param_4);
  func_0x000100071f00(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001000720a0(param_4,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10003201c; end: 100032063; -[SCLensNotificationModifier .cxx_destruct] */

void FUN_10003201c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100032064; end: 1000320f7; -[SCLensNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100032064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2488;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000320f8; end: 100032127; -[SCLensNotificationModifierProvider getModifier:] */

void FUN_1000320f8(void)

{
  _objc_alloc(PTR_PTR_1000d1f00);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100032128; end: 10003212f; -[SCLensNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_100032128(void)

{
  return 0;
}



/* Entry: 100032130; end: 1000321bb; -[SCLensNotificationModifierProvider getBadgeCountProviders] */

void FUN_100032130(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d1f08;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 1000321bc; end: 1000321eb; -[SCLensNotificationModifierProvider .cxx_destruct] */

void FUN_1000321bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000321ec; end: 1000321f7;  */

void FUN_1000321ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtTypeContainedIn_1000a0448)
            (param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abcb8);
  return;
}



/* Entry: 1000321f8; end: 1000322b7; -[SCLiveLocationNotificationModifier initWithProcessingScope:] */

undefined8 FUN_1000321f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  _objc_retain(param_3);
  func_0x0001000739a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010006e320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070960(param_1,param_2,param_3,0,puVar1,uVar2,uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000322b8; end: 1000323d3; -[SCLiveLocationNotificationModifier initWithProcessingScope:locationManager:apiClient:blizzardExtensionLogger:grapheneExtensionLogger:] */

undefined1 *
FUN_1000322b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000d2490;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x000100074680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000323d4; end: 1000324ef; -[SCLiveLocationNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000323d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100073bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070d40();
  _objc_release(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1000324f0;
  puStack_68 = &UNK_1000a2718;
  lStack_60 = param_1;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1000324f0; end: 10003267b;  */

void FUN_1000324f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar3 = PTR__OBJC_CLASS___SCLocationPushHandlerFactory_1000d1f18;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x000100074620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000100071920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  if (lVar5 == 0) {
    uVar1 = 2;
    _dispatch_get_global_queue(2,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1000326a4;
    puStack_78 = &UNK_1000a1cc8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_70 = uVar2;
    _dispatch_async(uVar1,&puStack_90);
    _objc_release(uVar1);
    uVar1 = uStack_70;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10003267c;
    puStack_50 = &UNK_1000a26e8;
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = uVar1;
    func_0x000100072340(lVar5);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10003267c; end: 1000326af;  */

void FUN_10003267c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuppressNotification__1000d1028,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuccess__1000d1020,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30));
  return;
}



/* Entry: 1000326b0; end: 1000326d7; -[SCLiveLocationNotificationModifier bestAttemptContent] */

void FUN_1000326b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 1000326d8; end: 100032743; -[SCLiveLocationNotificationModifier .cxx_destruct] */

void FUN_1000326d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100032744; end: 10003274f;  */

void FUN_100032744(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtTypeContainedIn_1000a0448)
            (param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abcd0);
  return;
}



/* Entry: 100032750; end: 1000327bf; -[SCMapFlyoverNotificationModifier initWithProcessingScope:] */

undefined8 FUN_100032750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1000d1e98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  _objc_release(param_3);
  func_0x0001000700e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000327c0; end: 100032833; -[SCMapFlyoverNotificationModifier initWithAvatar:] */

undefined1 * FUN_1000327c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100032834; end: 100032907; -[SCMapFlyoverNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100032834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100071be0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100032908;
  puStack_48 = &UNK_1000a2588;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010006efe0(uVar1,param_2,uVar2,0,0xb,1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}


