/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105960358; end: 105960387; -[SCNNotificationsNotificationDisplayContext setDisplayDelayMs:] */

void FUN_105960358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960388; end: 10596038f; -[SCNNotificationsNotificationDisplayContext displayDelayReason] */

undefined8 FUN_105960388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105960390; end: 105960397; -[SCNNotificationsNotificationDisplayContext setDisplayDelayReason:] */

void FUN_105960390(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960398; end: 1059603c7; -[SCNNotificationsNotificationDisplayContext .cxx_destruct] */

void FUN_105960398(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1059603c8; end: 1059603d7; -[SCNNotificationsNotificationHandlerParameters initWithUserId:databasePath:] */

void FUN_1059603c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserId_databasePath_redr_1125f4600,param_3,param_4,0,0,0);
  return;
}



/* Entry: 1059603d8; end: 1059603f7; -[SCNNotificationsNotificationHandlerParameters setUserId:] */

void FUN_1059603d8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960460();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059603f8; end: 1059603ff; -[SCNNotificationsNotificationHandlerParameters setDatabasePath:] */

void FUN_1059603f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960400; end: 10596041f; -[SCNNotificationsNotificationHandlerParameters setRedriveConfig:] */

void FUN_105960400(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960460();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960420; end: 10596043f; -[SCNNotificationsNotificationHandlerParameters setTweaks:] */

void FUN_105960420(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960460();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960440; end: 10596045f; -[SCNNotificationsNotificationHandlerParameters setAckConfig:] */

void FUN_105960440(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960460();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960460; end: 105960477;  */

void FUN_105960460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 105960478; end: 1059605b3; -[SCNNotificationsNotificationHandlerParametersLite initWithUserId:databasePath:tweaks:ackConfig:] */

undefined1 *
FUN_105960478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eb178;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059605b4; end: 1059605bf; -[SCNNotificationsNotificationHandlerParametersLite initWithUserId:databasePath:] */

void FUN_1059605b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05aff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserId_databasePath_twea_1125f4608,param_3,param_4,0,0);
  return;
}



/* Entry: 1059605c0; end: 1059605c7; -[SCNNotificationsNotificationHandlerParametersLite userId] */

undefined8 FUN_1059605c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059605c8; end: 1059605e7; -[SCNNotificationsNotificationHandlerParametersLite setUserId:] */

void FUN_1059605c8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960684();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059605e8; end: 1059605ef; -[SCNNotificationsNotificationHandlerParametersLite databasePath] */

undefined8 FUN_1059605e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059605f0; end: 1059605f7; -[SCNNotificationsNotificationHandlerParametersLite setDatabasePath:] */

void FUN_1059605f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1059605f8; end: 1059605ff; -[SCNNotificationsNotificationHandlerParametersLite tweaks] */

undefined8 FUN_1059605f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105960600; end: 10596061f; -[SCNNotificationsNotificationHandlerParametersLite setTweaks:] */

void FUN_105960600(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960684();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960620; end: 105960627; -[SCNNotificationsNotificationHandlerParametersLite ackConfig] */

undefined8 FUN_105960620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105960628; end: 105960647; -[SCNNotificationsNotificationHandlerParametersLite setAckConfig:] */

void FUN_105960628(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960684();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960648; end: 105960683; -[SCNNotificationsNotificationHandlerParametersLite .cxx_destruct] */

void FUN_105960648(long param_1)

{
  func_0x00010596069c(param_1 + 0x20);
  func_0x00010596069c(param_1 + 0x18);
  func_0x00010596069c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105960684; end: 1059606a3;  */

void FUN_105960684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1059606a4; end: 1059607af; -[SCNNotificationsNotificationHandlerParametersLoggedOut initWithDatabasePath:tweaks:ackConfig:] */

undefined1 *
FUN_1059606a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 1059607b0; end: 1059607bb; -[SCNNotificationsNotificationHandlerParametersLoggedOut initWithDatabasePath:] */

void FUN_1059607b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0094d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDatabasePath_tweaks_ackC_1125dff00,param_3,0,0);
  return;
}



/* Entry: 1059607bc; end: 1059607c3; -[SCNNotificationsNotificationHandlerParametersLoggedOut databasePath] */

undefined8 FUN_1059607bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059607c4; end: 1059607cb; -[SCNNotificationsNotificationHandlerParametersLoggedOut setDatabasePath:] */

void FUN_1059607c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1059607cc; end: 1059607d3; -[SCNNotificationsNotificationHandlerParametersLoggedOut tweaks] */

undefined8 FUN_1059607cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059607d4; end: 1059607f7; -[SCNNotificationsNotificationHandlerParametersLoggedOut setTweaks:] */

void FUN_1059607d4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960860();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059607f8; end: 1059607ff; -[SCNNotificationsNotificationHandlerParametersLoggedOut ackConfig] */

undefined8 FUN_1059607f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105960800; end: 105960823; -[SCNNotificationsNotificationHandlerParametersLoggedOut setAckConfig:] */

void FUN_105960800(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_105960860();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960824; end: 10596085f; -[SCNNotificationsNotificationHandlerParametersLoggedOut .cxx_destruct] */

void FUN_105960824(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105960860; end: 10596086f;  */

void FUN_105960860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 105960870; end: 10596091b; -[SCNNotificationsNotificationSuppressedContext initWithAppState:platformSuppressionDetail:] */

undefined1 *
FUN_105960870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10596091c; end: 105960923; -[SCNNotificationsNotificationSuppressedContext initWithAppState:] */

void FUN_10596091c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAppState_platformSuppres_1125da798,param_3,0);
  return;
}



/* Entry: 105960924; end: 10596092b; -[SCNNotificationsNotificationSuppressedContext appState] */

undefined8 FUN_105960924(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10596092c; end: 105960933; -[SCNNotificationsNotificationSuppressedContext setAppState:] */

void FUN_10596092c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105960934; end: 10596093b; -[SCNNotificationsNotificationSuppressedContext platformSuppressionDetail] */

undefined8 FUN_105960934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10596093c; end: 105960943; -[SCNNotificationsNotificationSuppressedContext setPlatformSuppressionDetail:] */

void FUN_10596093c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960944; end: 10596094f; -[SCNNotificationsNotificationSuppressedContext .cxx_destruct] */

void FUN_105960944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105960950; end: 10596095f; -[SCNNotificationsRedriveConfig initWithMaxAttemptCount:minDelayMs:triggerAfterReceive:enableInForeground:] */

void FUN_105960950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c028bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithMaxAttemptCount_minDelay_1125e7ce0);
  return;
}



/* Entry: 105960960; end: 105960967; -[SCNNotificationsRedriveConfig setMaxAttemptCount:] */

void FUN_105960960(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105960968; end: 10596096f; -[SCNNotificationsRedriveConfig setMinDelayMs:] */

void FUN_105960968(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105960970; end: 105960977; -[SCNNotificationsRedriveConfig setTriggerAfterReceive:] */

void FUN_105960970(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105960978; end: 10596099b; -[SCNNotificationsRedriveConfig setMaxNotifCountPerRedrive:] */

void FUN_105960978(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1059609c8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10596099c; end: 1059609a3; -[SCNNotificationsRedriveConfig setEnableInForeground:] */

void FUN_10596099c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1059609a4; end: 1059609c7; -[SCNNotificationsRedriveConfig setInAppReminderConfig:] */

void FUN_1059609a4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1059609c8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059609c8; end: 1059609d7;  */

void FUN_1059609c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1059609d8; end: 105960a1f; -[SCNNotificationsRedriveMetadata initWithRedriveAttemptCount:] */

void FUN_1059609d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 105960a20; end: 105960a27; -[SCNNotificationsRedriveMetadata redriveAttemptCount] */

undefined8 FUN_105960a20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105960a28; end: 105960a2f; -[SCNNotificationsRedriveMetadata setRedriveAttemptCount:] */

void FUN_105960a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105960a30; end: 105960a63; -[SCNNotificationsSuppressData init] */

void FUN_105960a30(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eb1a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105960a64; end: 105960c17; -[SCNNotificationsTokenRegistrarParameters initWithUserId:userAgentPrefix:deviceId:bundleId:metricsDeviceId:tweaks:skipUpload:] */

undefined1 *
FUN_105960a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

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
  puStack_58 = PTR_PTR_1126eb1a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105960d44(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000105960d44(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000105960d44(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000105960d44(uVar3);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105960c18; end: 105960c47; -[SCNNotificationsTokenRegistrarParameters initWithUserId:userAgentPrefix:skipUpload:] */

void FUN_105960c18(void)

{
  func_0x00010c05bda0();
  return;
}



/* Entry: 105960c48; end: 105960c4f; -[SCNNotificationsTokenRegistrarParameters userId] */

undefined8 FUN_105960c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105960c50; end: 105960c73; -[SCNNotificationsTokenRegistrarParameters setUserId:] */

void FUN_105960c50(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000105960d4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960c74; end: 105960c7b; -[SCNNotificationsTokenRegistrarParameters userAgentPrefix] */

undefined8 FUN_105960c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105960c7c; end: 105960c83; -[SCNNotificationsTokenRegistrarParameters setUserAgentPrefix:] */

void FUN_105960c7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960c84; end: 105960c8b; -[SCNNotificationsTokenRegistrarParameters deviceId] */

undefined8 FUN_105960c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105960c8c; end: 105960c93; -[SCNNotificationsTokenRegistrarParameters setDeviceId:] */

void FUN_105960c8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960c94; end: 105960c9b; -[SCNNotificationsTokenRegistrarParameters bundleId] */

undefined8 FUN_105960c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105960c9c; end: 105960ca3; -[SCNNotificationsTokenRegistrarParameters setBundleId:] */

void FUN_105960c9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960ca4; end: 105960cab; -[SCNNotificationsTokenRegistrarParameters metricsDeviceId] */

undefined8 FUN_105960ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105960cac; end: 105960cb3; -[SCNNotificationsTokenRegistrarParameters setMetricsDeviceId:] */

void FUN_105960cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960cb4; end: 105960cbb; -[SCNNotificationsTokenRegistrarParameters tweaks] */

undefined8 FUN_105960cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105960cbc; end: 105960cdf; -[SCNNotificationsTokenRegistrarParameters setTweaks:] */

void FUN_105960cbc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000105960d4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960ce0; end: 105960ce7; -[SCNNotificationsTokenRegistrarParameters skipUpload] */

undefined1 FUN_105960ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105960ce8; end: 105960cef; -[SCNNotificationsTokenRegistrarParameters setSkipUpload:] */

void FUN_105960ce8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105960cf0; end: 105960d3b; -[SCNNotificationsTokenRegistrarParameters .cxx_destruct] */

void FUN_105960cf0(long param_1)

{
  FUN_105960d3c(param_1 + 0x38);
  FUN_105960d3c(param_1 + 0x30);
  FUN_105960d3c(param_1 + 0x28);
  FUN_105960d3c(param_1 + 0x20);
  FUN_105960d3c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105960d3c; end: 105960d5b;  */

void FUN_105960d3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 105960d5c; end: 105960d63; -[SCNNotificationsTweaks setTweaks:] */

void FUN_105960d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960d64; end: 105960fd7;  */

undefined8 * FUN_105960d64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 uStack_388;
  undefined1 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [24];
  undefined1 uStack_330;
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [24];
  undefined1 uStack_2d8;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined1 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 uStack_228;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 uStack_1d0;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3a8 = 0x100000000;
  func_0x00010002b838(auStack_3a0,&UNK_10f31406a);
  uStack_388 = 0;
  uStack_358 = 0;
  uStack_350 = 0x200000001;
  func_0x00010002b838(auStack_348,&UNK_10f31409b);
  uStack_330 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0x300000002;
  func_0x00010002b838(auStack_2f0,&UNK_10f314168);
  uStack_2d8 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0x400000003;
  func_0x00010002b838(auStack_298,&UNK_10f3141be);
  uStack_280 = 0;
  uStack_250 = 0;
  uStack_248 = 0x500000004;
  func_0x00010002b838(auStack_240,&UNK_10f3145fa);
  uStack_228 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0x600000005;
  func_0x00010002b838(auStack_1e8,&UNK_10f314649);
  uStack_1d0 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0x700000006;
  func_0x00010002b838(auStack_190,&UNK_10f31468a);
  uStack_178 = 0;
  uStack_148 = 0;
  uStack_140 = 0x800000007;
  func_0x00010002b838(auStack_138,&UNK_10f3146d7);
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x900000008;
  func_0x00010002b838(auStack_e0,&UNK_10f314727);
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0xa00000009;
  func_0x00010002b838(auStack_88,&UNK_10f31478d);
  uStack_70 = 0;
  uStack_40 = 0;
  uVar3 = 10;
  func_0x00010054ae4c(param_1,10,&UNK_10f313852,&uStack_3a8,10);
  lVar4 = 0x318;
  do {
    puVar1 = (undefined8 *)(auStack_3a0 + lVar4 + -8);
    func_0x00010054b180();
    lVar4 = lVar4 + -0x58;
  } while (lVar4 != -0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_90;
  lVar4 = -0x370;
  do {
    func_0x00010054b180(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar4 = lVar4 + 0x58;
  } while (lVar4 != 0);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_1108c20c8;
  puVar1[1] = uVar3;
  FUN_105961010(puVar1 + 2,uVar3);
  return puVar1;
}



/* Entry: 105960fd8; end: 10596100f;  */

undefined8 * FUN_105960fd8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1108c20c8;
  param_1[1] = param_2;
  FUN_105961010(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 105961010; end: 10596105b;  */

void FUN_105961010(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x750;
  __Znwm();
  FUN_1059614a4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10596105c; end: 10596111f;  */

undefined8 * FUN_10596105c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108c20c8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0x6c8);
    func_0x00010054c360(lVar1 + 0x640);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x628);
    func_0x00010054c360(lVar1 + 0x598);
    func_0x00010054c360(lVar1 + 0x510);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x4f8);
    func_0x00010054c360(lVar1 + 0x468);
    func_0x00010054c360(lVar1 + 0x3e0);
    FUN_105961138(lVar1 + 0x368);
    func_0x0001059611b8(lVar1 + 0x2f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x2d8);
    func_0x000105961238(lVar1 + 600);
    func_0x0001059611b8(lVar1 + 0x1e0);
    func_0x0001059612b8(lVar1 + 0x168);
    func_0x000105961338(lVar1 + 0xf0);
    func_0x0001059611b8(lVar1 + 0x78);
    func_0x0001059613b8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105961120; end: 105961123;  */

undefined8 * FUN_105961120(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108c20c8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0x6c8);
    func_0x00010054c360(lVar1 + 0x640);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x628);
    func_0x00010054c360(lVar1 + 0x598);
    func_0x00010054c360(lVar1 + 0x510);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x4f8);
    func_0x00010054c360(lVar1 + 0x468);
    func_0x00010054c360(lVar1 + 0x3e0);
    FUN_105961138(lVar1 + 0x368);
    func_0x0001059611b8(lVar1 + 0x2f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x2d8);
    func_0x000105961238(lVar1 + 600);
    func_0x0001059611b8(lVar1 + 0x1e0);
    func_0x0001059612b8(lVar1 + 0x168);
    func_0x000105961338(lVar1 + 0xf0);
    func_0x0001059611b8(lVar1 + 0x78);
    func_0x0001059613b8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105961124; end: 105961137;  */

void FUN_105961124(void)

{
  FUN_10596105c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105961138; end: 10596115b;  */

void FUN_105961138(void)

{
  func_0x00010596148c();
  FUN_10596115c();
  func_0x00010596146c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 10596115c; end: 10596119b;  */

void FUN_10596115c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105961438();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10596119c();
    }
  }
  return;
}



/* Entry: 10596119c; end: 1059611db;  */

void FUN_10596119c(void)

{
  func_0x000105961458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059611dc; end: 10596121b;  */

void FUN_1059611dc(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105961438();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10596121c();
    }
  }
  return;
}



/* Entry: 10596121c; end: 10596125b;  */

void FUN_10596121c(void)

{
  func_0x000105961458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596125c; end: 10596129b;  */

void FUN_10596125c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105961438();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10596129c();
    }
  }
  return;
}



/* Entry: 10596129c; end: 1059612db;  */

void FUN_10596129c(void)

{
  func_0x000105961458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059612dc; end: 10596131b;  */

void FUN_1059612dc(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105961438();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10596131c();
    }
  }
  return;
}



/* Entry: 10596131c; end: 10596135b;  */

void FUN_10596131c(void)

{
  func_0x000105961458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596135c; end: 10596139b;  */

void FUN_10596135c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105961438();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10596139c();
    }
  }
  return;
}



/* Entry: 10596139c; end: 1059613db;  */

void FUN_10596139c(void)

{
  func_0x000105961458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059613dc; end: 10596141b;  */

void FUN_1059613dc(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105961438();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10596141c();
    }
  }
  return;
}



/* Entry: 10596141c; end: 105961437;  */

void FUN_10596141c(void)

{
  func_0x000105961458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105961438; end: 1059614a3;  */

void FUN_105961438(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 8);
  lVar2 = *(long *)param_1[1];
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  param_1[2] = 0;
  return;
}



/* Entry: 1059614a4; end: 105961887;  */

undefined8 * FUN_1059614a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0x32aaaba7;
  puVar1 = param_1;
  func_0x0001059642c0();
  func_0x000105964138(puVar1 + 9);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  FUN_105961fa4(param_1 + 0xf,param_2,&UNK_10f314910,0x35);
  param_1[0x1e] = 0x32aaaba7;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_2;
  func_0x000105964138(param_1 + 0x27);
  param_1[0x2a] = param_1 + 0x2a;
  param_1[0x2b] = param_1 + 0x2a;
  param_1[0x2d] = 0x32aaaba7;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = param_2;
  func_0x000105964138(param_1 + 0x36);
  param_1[0x39] = param_1 + 0x39;
  param_1[0x3a] = param_1 + 0x39;
  param_1[0x3b] = 0;
  FUN_105961fa4(param_1 + 0x3c,param_2,&UNK_10f314e1f,0x49);
  param_1[0x4b] = 0x32aaaba7;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = param_2;
  func_0x000105964138(param_1 + 0x54);
  param_1[0x57] = param_1 + 0x57;
  param_1[0x58] = param_1 + 0x57;
  param_1[0x59] = 0;
  func_0x000105964318();
  param_1[0x5a] = param_2;
  func_0x000105964344(param_1 + 0x5b);
  func_0x000105964310();
  FUN_105961fa4(param_1 + 0x5e,param_2,&UNK_10f31502f,0x6a);
  param_1[0x6d] = 0x32aaaba7;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = param_2;
  func_0x000105964138(param_1 + 0x76);
  param_1[0x79] = param_1 + 0x79;
  param_1[0x7a] = param_1 + 0x79;
  param_1[0x7b] = 0;
  func_0x00010054bfa4(param_1 + 0x7c,param_2,&UNK_10f315180,0x1c2);
  func_0x00010054bfa4(param_1 + 0x8d,param_2,&UNK_10f315343,0x42);
  func_0x000105964318();
  param_1[0x9e] = param_2;
  func_0x000105964344(param_1 + 0x9f);
  func_0x000105964310();
  func_0x00010054bfa4(param_1 + 0xa2,param_2,&UNK_10f3153fb,0xaa);
  func_0x00010054bfa4(param_1 + 0xb3,param_2,&UNK_10f3154a6,0x33);
  func_0x000105964318();
  param_1[0xc4] = param_2;
  func_0x000105964344(param_1 + 0xc5);
  func_0x000105964310();
  func_0x00010054bfa4(param_1 + 200,param_2,&UNK_10f315511,0x88);
  func_0x00010054bfa4(param_1 + 0xd9,param_2,&UNK_10f31559a,0xbb);
  return param_1;
}



/* Entry: 105961888; end: 1059618cf;  */

void FUN_105961888(void)

{
  FUN_105962000();
  func_0x000105964388();
  func_0x000105964258();
  func_0x0001005ecd38();
  func_0x000105964230();
  func_0x000105962134();
  return;
}



/* Entry: 1059618d0; end: 1059618ff;  */

void FUN_1059618d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_105961900(param_1 + 0xf0,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 105961900; end: 10596192b;  */

void FUN_105961900(void)

{
  func_0x000105964374();
  FUN_105962714();
  func_0x000105964360();
  func_0x000105964258();
  FUN_105962848();
  func_0x000105964230();
  FUN_10596287c();
  return;
}



/* Entry: 10596192c; end: 10596195b;  */

void FUN_10596192c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10596195c(param_1 + 0x168,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 10596195c; end: 105961987;  */

void FUN_10596195c(void)

{
  func_0x000105964374();
  FUN_105962b48();
  func_0x000105964360();
  func_0x000105964258();
  FUN_105962848();
  func_0x000105964230();
  func_0x000105962c7c();
  return;
}



/* Entry: 105961988; end: 1059619ab;  */

void FUN_105961988(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1059619ac(param_1 + 0x1e0,&uStack_18);
  return;
}



/* Entry: 1059619ac; end: 1059619ef;  */

void FUN_1059619ac(void)

{
  func_0x000105964338();
  func_0x000105964388();
  func_0x000105964258();
  func_0x0001005edcc0();
  func_0x000105964230();
  func_0x000105962310();
  return;
}



/* Entry: 1059619f0; end: 105961a87;  */

void FUN_1059619f0(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_48;
  
  uStack_48 = param_4;
  func_0x000105964274(param_3[1]);
  param_2 = param_2 + 0x2d0;
  FUN_105961a88(param_2);
  lVar1 = param_3[1];
  iVar2 = 1;
  for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    FUN_105961aac(param_2,iVar2,lVar3);
    iVar2 = iVar2 + 1;
  }
  func_0x000105961acc(param_2,iVar2,&uStack_48);
  FUN_105961aec(param_1,param_2);
  return;
}


