/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004153cc; end: 00415447;  */

undefined * FUN_004153cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6f0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21920,&UNK_007fcbcc,&UNK_007fcc64,10,
                    FUN_00415448,0);
    do {
      if (puRam0000000000b5f6f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6f0;
}



/* Entry: 00415448; end: 00415453;  */

bool FUN_00415448(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 00415454; end: 004154cf;  */

undefined * FUN_00415454(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6f8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21940,&UNK_007fcc8c,&UNK_007fccb8,4,
                    FUN_004154d0,0);
    do {
      if (puRam0000000000b5f6f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6f8;
}



/* Entry: 004154d0; end: 004154db;  */

bool FUN_004154d0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 004154dc; end: 00415557;  */

undefined * FUN_004154dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f700 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21960,&UNK_007fccc8,&UNK_007fccec,3,
                    FUN_00415558,0);
    do {
      if (puRam0000000000b5f700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f700;
}



/* Entry: 00415558; end: 00415563;  */

bool FUN_00415558(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 00415564; end: 004155df;  */

undefined * FUN_00415564(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f708 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21980,&UNK_007fccf8,&UNK_007fcd34,5,
                    FUN_004155e0,0);
    do {
      if (puRam0000000000b5f708 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f708;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f708,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f708 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f708;
}



/* Entry: 004155e0; end: 004155eb;  */

bool FUN_004155e0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 004155ec; end: 00415667;  */

undefined * FUN_004155ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f710 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a219a0,&UNK_007fcd48,&UNK_007fcdc0,7,
                    FUN_00415668,0);
    do {
      if (puRam0000000000b5f710 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f710;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f710,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f710 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f710;
}



/* Entry: 00415668; end: 00415673;  */

bool FUN_00415668(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 00415674; end: 004156ef;  */

undefined * FUN_00415674(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f718 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a219c0,&UNK_007fcddc,&UNK_007fce38,6,
                    FUN_004156f0,0);
    do {
      if (puRam0000000000b5f718 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f718;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f718,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f718 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f718;
}



/* Entry: 004156f0; end: 004156fb;  */

bool FUN_004156f0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 004156fc; end: 00415777;  */

undefined * FUN_004156fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f720 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a219e0,&UNK_007fce50,&UNK_007fcebc,7,
                    FUN_00415778,0);
    do {
      if (puRam0000000000b5f720 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f720;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f720,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f720 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f720;
}



/* Entry: 00415778; end: 00415783;  */

bool FUN_00415778(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 00415784; end: 004157ff;  */

undefined * FUN_00415784(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f728 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21a00,&UNK_007fced8,&UNK_007fcef4,3,
                    FUN_00415800,0);
    do {
      if (puRam0000000000b5f728 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f728;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f728,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f728 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f728;
}



/* Entry: 00415800; end: 0041580b;  */

bool FUN_00415800(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0041580c; end: 00415887; +[SCPushNotificationPushNotificationResult descriptor] */

undefined * FUN_0041580c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f730 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad00a8,
                    &PTR____CFConstantStringClassReference_00a21a20,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_pushNotificationId_00afc058,4,0x18,
                    0x1c);
    func_0x00791440();
    puRam0000000000b5f730 = puVar1;
  }
  return puRam0000000000b5f730;
}



/* Entry: 00415888; end: 004158ef; +[SCPushNotificationSendPushResponse descriptor] */

void FUN_00415888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f738 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad00f8,
                    &PTR____CFConstantStringClassReference_00a21a40,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_pushNotificationId_00afc0d8,4,0x18,
                    0x1c);
    puRam0000000000b5f738 = puVar1;
  }
  return;
}



/* Entry: 004158f0; end: 00415957; +[SCPushNotificationSendPushAsyncResponse descriptor] */

void FUN_004158f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f740 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0148,
                    &PTR____CFConstantStringClassReference_00a21a60,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_pushNotificationId_00afbdb8,3,0x10,
                    0x1c);
    puRam0000000000b5f740 = puVar1;
  }
  return;
}



/* Entry: 00415958; end: 004159bf; +[SCPushNotificationSendPushSyncResponse descriptor] */

void FUN_00415958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f748 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0198,
                    &PTR____CFConstantStringClassReference_00a21a80,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_linkingId_00afbe18,3,0x18,0x1c);
    puRam0000000000b5f748 = puVar1;
  }
  return;
}



/* Entry: 004159c0; end: 00415a27; +[SCPushNotificationDeviceResult descriptor] */

void FUN_004159c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f750 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad01e8,
                    &PTR____CFConstantStringClassReference_00a21aa0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_sessionId_00afc5b8,6,0x28,0x1c);
    puRam0000000000b5f750 = puVar1;
  }
  return;
}



/* Entry: 00415a28; end: 00415a8f; +[SCPushNotificationTrackingSetting descriptor] */

void FUN_00415a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f758 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0238,
                    &PTR____CFConstantStringClassReference_00a21ac0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_trackingDisplay_00afc3d8,5,0x20,
                    0x1c);
    puRam0000000000b5f758 = puVar1;
  }
  return;
}



/* Entry: 00415a90; end: 00415b0f; +[SCPushNotificationPushNotificationHeader descriptor] */

undefined * FUN_00415a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f760 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0288,
                    &PTR____CFConstantStringClassReference_00a21ae0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_recipientUserId_00afd2d8,0x16,0x78,
                    0x1c);
    func_0x00791440();
    puRam0000000000b5f760 = puVar1;
  }
  return puRam0000000000b5f760;
}



/* Entry: 00415b10; end: 00415b77; +[SCPushNotificationTargetingInfo descriptor] */

void FUN_00415b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f768 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad02d8,
                    &PTR____CFConstantStringClassReference_00a21b00,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_authSessionIdsArray_00afb918,1,0x10
                    ,0x1c);
    puRam0000000000b5f768 = puVar1;
  }
  return;
}



/* Entry: 00415b78; end: 00415bdf; +[SCPushNotificationNotificationTTL descriptor] */

void FUN_00415b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f770 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0328,
                    &PTR____CFConstantStringClassReference_00a21b20,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_ttlInSec_00afb938,1,8,0x1c);
    puRam0000000000b5f770 = puVar1;
  }
  return;
}



/* Entry: 00415be0; end: 00415c5b; +[SCPushNotificationPushNotificationConfig descriptor] */

undefined * FUN_00415be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f778 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0378,
                    &PTR____CFConstantStringClassReference_00a21b40,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_generalNotificationConfig_00afbe78,
                    3,0x20,0x1c);
    func_0x00791440();
    puRam0000000000b5f778 = puVar1;
  }
  return puRam0000000000b5f778;
}



/* Entry: 00415c5c; end: 00415cc3; +[SCPushNotificationLegacyTypeName descriptor] */

void FUN_00415c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f780 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad03c8,
                    &PTR____CFConstantStringClassReference_00a21b60,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_name_00afb958,1,0x10,0x1c);
    puRam0000000000b5f780 = puVar1;
  }
  return;
}



/* Entry: 00415cc4; end: 00415d43; +[SCPushNotificationGeneralNotificationConfig descriptor] */

undefined * FUN_00415cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f788 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0418,
                    &PTR____CFConstantStringClassReference_00a21b80,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_ttlInSec_00afc8b8,7,0x28,0x1c);
    func_0x00791440();
    puRam0000000000b5f788 = puVar1;
  }
  return puRam0000000000b5f788;
}



/* Entry: 00415d44; end: 00415dab; +[SCPushNotificationDryRun descriptor] */

void FUN_00415d44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f790 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0468,
                    &PTR____CFConstantStringClassReference_00a21ba0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_enabled_00afb978,1,4,0x1c);
    puRam0000000000b5f790 = puVar1;
  }
  return;
}



/* Entry: 00415dac; end: 00415e13; +[SCPushNotificationAndroidNotificationConfig descriptor] */

void FUN_00415dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f798 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad04b8,
                    &PTR____CFConstantStringClassReference_00a21bc0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_dryRun_00afbbb8,2,0x10,0x1c);
    puRam0000000000b5f798 = puVar1;
  }
  return;
}



/* Entry: 00415e14; end: 00415e7b; +[SCPushNotificationVoIP descriptor] */

void FUN_00415e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0508,
                    &PTR____CFConstantStringClassReference_00a21be0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_enabled_00afb998,1,4,0x1c);
    puRam0000000000b5f7a0 = puVar1;
  }
  return;
}



/* Entry: 00415e7c; end: 00415ee3; +[SCPushNotificationCategory descriptor] */

void FUN_00415e7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0558,
                    &PTR____CFConstantStringClassReference_00a21c00,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_name_00afb9b8,1,0x10,0x1c);
    puRam0000000000b5f7a8 = puVar1;
  }
  return;
}



/* Entry: 00415ee4; end: 00415f4b; +[SCPushNotificationIosNotificationConfig descriptor] */

void FUN_00415ee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad05a8,
                    &PTR____CFConstantStringClassReference_00a21c20,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_voip_00afc678,6,0x28,0x1c);
    puRam0000000000b5f7b0 = puVar1;
  }
  return;
}



/* Entry: 00415f4c; end: 00415fb3; +[SCPushNotificationAlert descriptor] */

void FUN_00415f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad05f8,
                    &PTR____CFConstantStringClassReference_00a21c40,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_title_00afc738,6,0x38,0x1c);
    puRam0000000000b5f7b8 = puVar1;
  }
  return;
}



/* Entry: 00415fb4; end: 0041601b; +[SCPushNotificationDictionaryPayload descriptor] */

void FUN_00415fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0648,
                    &PTR____CFConstantStringClassReference_00a21c60,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_data_p_00afb9d8,1,0x10,0x1c);
    puRam0000000000b5f7c0 = puVar1;
  }
  return;
}



/* Entry: 0041601c; end: 00416083; +[SCPushNotificationBinaryPayload descriptor] */

void FUN_0041601c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0698,
                    &PTR____CFConstantStringClassReference_00a21c80,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_data_p_00afb9f8,1,0x10,0x1c);
    puRam0000000000b5f7c8 = puVar1;
  }
  return;
}



/* Entry: 00416084; end: 004160eb; +[SCPushNotificationContentPayload descriptor] */

void FUN_00416084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad06e8,
                    &PTR____CFConstantStringClassReference_00a21ca0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationDisplayModel_00afc158,4
                    ,0x28,0x1c);
    puRam0000000000b5f7d0 = puVar1;
  }
  return;
}



/* Entry: 004160ec; end: 0041618b; +[SCPushNotificationPushNotificationRequest descriptor] */

undefined * FUN_004160ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0738,
                    &PTR____CFConstantStringClassReference_00a21cc0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_header_00afd098,0x12,0x98,0x1c);
    func_0x00791460();
    func_0x00791440(puVar1,param_2,&UNK_007fcf1b);
    puRam0000000000b5f7d8 = puVar1;
  }
  return puRam0000000000b5f7d8;
}



/* Entry: 0041618c; end: 004161f3; +[SCPushNotificationGrowthNotificationMetadata descriptor] */

void FUN_0041618c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0788,
                    &PTR____CFConstantStringClassReference_00a21ce0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_campaignType_00afc478,5,0x30,0x1c);
    puRam0000000000b5f7e0 = puVar1;
  }
  return;
}



/* Entry: 004161f4; end: 0041625b; +[SCPushNotificationNotificationDeviceSetting descriptor] */

void FUN_004161f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad07d8,
                    &PTR____CFConstantStringClassReference_00a21d00,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_settingValue_00afba18,1,0x10,0x1c);
    puRam0000000000b5f7e8 = puVar1;
  }
  return;
}



/* Entry: 0041625c; end: 004162db; +[SCPushNotificationAckNotificationRequest descriptor] */

undefined * FUN_0041625c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,
                    &_OBJC_CLASS___SCPushNotificationAckNotificationRequest,
                    &PTR____CFConstantStringClassReference_00a21d20,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationId_00afd598,0x1b,0xc0,
                    0x1c);
    func_0x00791440();
    puRam0000000000b5f7f0 = puVar1;
  }
  return puRam0000000000b5f7f0;
}



/* Entry: 004162dc; end: 0041636b; +[SCPushNotificationSendPushToDeviceRequest descriptor] */

undefined * FUN_004162dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f7f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0878,
                    &PTR____CFConstantStringClassReference_00a21d40,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_webpushRequest_00afce98,0x10,0x80,
                    0x1c);
    func_0x00791460();
    puRam0000000000b5f7f8 = puVar1;
  }
  return puRam0000000000b5f7f8;
}



/* Entry: 0041636c; end: 004163d3; +[SCPushNotificationWebPushToDeviceRequest descriptor] */

void FUN_0041636c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f800 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad08c8,
                    &PTR____CFConstantStringClassReference_00a21d60,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationProvider_00afc518,5,
                    0x28,0x1c);
    puRam0000000000b5f800 = puVar1;
  }
  return;
}



/* Entry: 004163d4; end: 0041643f; +[SCPushNotificationFCMPushToDeviceRequest descriptor] */

void FUN_004163d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f808 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0918,
                    &PTR____CFConstantStringClassReference_00a21d80,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationProvider_00afcd78,9,
                    0x40,0x1c);
    puRam0000000000b5f808 = puVar1;
  }
  return;
}



/* Entry: 00416440; end: 004164ab; +[SCPushNotificationAPNSPushToDeviceRequest descriptor] */

void FUN_00416440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f810 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0968,
                    &PTR____CFConstantStringClassReference_00a21da0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationProvider_00afca78,8,
                    0x38,0x1c);
    puRam0000000000b5f810 = puVar1;
  }
  return;
}



/* Entry: 004164ac; end: 00416517; +[SCPushNotificationHMSPushToDeviceRequest descriptor] */

void FUN_004164ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f818 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad09b8,
                    &PTR____CFConstantStringClassReference_00a21dc0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationProvider_00afcb78,8,
                    0x38,0x1c);
    puRam0000000000b5f818 = puVar1;
  }
  return;
}



/* Entry: 00416518; end: 00416583; +[SCPushNotificationADMPushToDeviceRequest descriptor] */

void FUN_00416518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f820 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0a08,
                    &PTR____CFConstantStringClassReference_00a21de0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationProvider_00afc998,7,
                    0x38,0x1c);
    puRam0000000000b5f820 = puVar1;
  }
  return;
}



/* Entry: 00416584; end: 004165eb; +[SCPushNotificationSpectaclesHubPushToDeviceRequest descriptor] */

void FUN_00416584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f828 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0a58,
                    &PTR____CFConstantStringClassReference_00a21e00,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationProvider_00afc1d8,4,
                    0x20,0x1c);
    puRam0000000000b5f828 = puVar1;
  }
  return;
}



/* Entry: 004165ec; end: 00416653; +[SCPushNotificationDuplexPushToDeviceRequest descriptor] */

void FUN_004165ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f830 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0aa8,
                    &PTR____CFConstantStringClassReference_00a21e20,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_duplexNotification_00afba38,1,0x10,
                    0x1c);
    puRam0000000000b5f830 = puVar1;
  }
  return;
}



/* Entry: 00416654; end: 004166bb; +[SCPushNotificationSendPushToDeviceResponse descriptor] */

void FUN_00416654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f838 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0af8,
                    &PTR____CFConstantStringClassReference_00a21e40,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_statusCode_00afc258,4,0x18,0x1c);
    puRam0000000000b5f838 = puVar1;
  }
  return;
}



/* Entry: 004166bc; end: 00416727; +[SCPushNotificationLoggingInfo descriptor] */

void FUN_004166bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f840 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0b48,
                    &PTR____CFConstantStringClassReference_00a21e60,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_browserInfo_00afd8f8,0x21,0xd8,0x1c
                   );
    puRam0000000000b5f840 = puVar1;
  }
  return;
}



/* Entry: 00416728; end: 0041678f; +[SCPushNotificationAckNotificationResponse descriptor] */

void FUN_00416728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f848 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0b98,
                    &PTR____CFConstantStringClassReference_00a21e80,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_statusCode_00afba58,1,8,0x1c);
    puRam0000000000b5f848 = puVar1;
  }
  return;
}



/* Entry: 00416790; end: 004167f7; +[SCPushNotificationCachePayloadInMemory descriptor] */

void FUN_00416790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f850 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0be8,
                    &PTR____CFConstantStringClassReference_00a21ea0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_remainingRetriesArray_00afbed8,3,
                    0x18,0x1c);
    puRam0000000000b5f850 = puVar1;
  }
  return;
}



/* Entry: 004167f8; end: 00416863; +[SCPushNotificationDelayQueueEntry descriptor] */

void FUN_004167f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f858 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0c38,
                    &PTR____CFConstantStringClassReference_00a21ec0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_notificationId_00afcc78,8,0x40,0x1c
                   );
    puRam0000000000b5f858 = puVar1;
  }
  return;
}



/* Entry: 00416864; end: 004168cb; +[SCPushNotificationPendingResend descriptor] */

void FUN_00416864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f860 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0c88,
                    &PTR____CFConstantStringClassReference_00a21ee0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_key_00afbf38,3,0x20,0x1c);
    puRam0000000000b5f860 = puVar1;
  }
  return;
}



/* Entry: 004168cc; end: 00416933; +[SCPushNotificationAddPendingResendsRequest descriptor] */

void FUN_004168cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f868 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0cd8,
                    &PTR____CFConstantStringClassReference_00a21f00,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_pendingResendsArray_00afba78,1,0x10
                    ,0x1c);
    puRam0000000000b5f868 = puVar1;
  }
  return;
}



/* Entry: 00416934; end: 0041699b; +[SCPushNotificationAddPendingResendsResponse descriptor] */

void FUN_00416934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f870 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0d28,
                    &PTR____CFConstantStringClassReference_00a21f20,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_statusCode_00afbbf8,2,8,0x1c);
    puRam0000000000b5f870 = puVar1;
  }
  return;
}



/* Entry: 0041699c; end: 00416a03; +[SCPushNotificationSampleReasons descriptor] */

void FUN_0041699c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f878 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0d78,
                    &PTR____CFConstantStringClassReference_00a21f40,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_sender_00afba98,1,4,0x1c);
    puRam0000000000b5f878 = puVar1;
  }
  return;
}



/* Entry: 00416a04; end: 00416a7f; +[SCPushNotificationScheduleNotificationRequest descriptor] */

undefined * FUN_00416a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f880 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0dc8,
                    &PTR____CFConstantStringClassReference_00a21f60,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_pushRequest_00afbc38,2,0x18,0x1c);
    func_0x00791440();
    puRam0000000000b5f880 = puVar1;
  }
  return puRam0000000000b5f880;
}



/* Entry: 00416a80; end: 00416afb; +[SCPushNotificationScheduleNotificationResponse descriptor] */

undefined * FUN_00416a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f888 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0e18,
                    &PTR____CFConstantStringClassReference_00a21f80,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_statusCode_00afbc78,2,0x10,0x1c);
    func_0x00791440();
    puRam0000000000b5f888 = puVar1;
  }
  return puRam0000000000b5f888;
}



/* Entry: 00416afc; end: 00416b77; +[SCPushNotificationCancelNotificationRequest descriptor] */

undefined * FUN_00416afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f890 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0e68,
                    &PTR____CFConstantStringClassReference_00a21fa0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_requestId_00afbab8,1,0x10,0x1c);
    func_0x00791440();
    puRam0000000000b5f890 = puVar1;
  }
  return puRam0000000000b5f890;
}



/* Entry: 00416b78; end: 00416bdf; +[SCPushNotificationCancelNotificationResponse descriptor] */

void FUN_00416b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f898 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0eb8,
                    &PTR____CFConstantStringClassReference_00a21fc0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_statusCode_00afbad8,1,8,0x1c);
    puRam0000000000b5f898 = puVar1;
  }
  return;
}



/* Entry: 00416be0; end: 00416c5b; +[SCPushNotificationRescheduleNotificationRequest descriptor] */

undefined * FUN_00416be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0f08,
                    &PTR____CFConstantStringClassReference_00a21fe0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_requestId_00afbcb8,2,0x18,0x1c);
    func_0x00791440();
    puRam0000000000b5f8a0 = puVar1;
  }
  return puRam0000000000b5f8a0;
}



/* Entry: 00416c5c; end: 00416cc3; +[SCPushNotificationRescheduleNotificationResponse descriptor] */

void FUN_00416c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0f58,
                    &PTR____CFConstantStringClassReference_00a22000,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_statusCode_00afbaf8,1,8,0x1c);
    puRam0000000000b5f8a8 = puVar1;
  }
  return;
}



/* Entry: 00416cc4; end: 00416d2b; +[SCPushNotificationDropPredicate descriptor] */

void FUN_00416cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0fa8,
                    &PTR____CFConstantStringClassReference_00a22020,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_predicate_00afbb18,1,0x10,0x1c);
    puRam0000000000b5f8b0 = puVar1;
  }
  return;
}



/* Entry: 00416d2c; end: 00416d93; +[SCPushNotificationOverridePredicate descriptor] */

void FUN_00416d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0ff8,
                    &PTR____CFConstantStringClassReference_00a22040,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_predicate_00afc2d8,4,0x10,0x1c);
    puRam0000000000b5f8b8 = puVar1;
  }
  return;
}



/* Entry: 00416d94; end: 00416dfb; +[SCPushNotificationPredicate descriptor] */

void FUN_00416d94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1048,
                    &PTR____CFConstantStringClassReference_00a22060,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_lessThanAppVersion_00afc7f8,6,0x38,
                    0x1c);
    puRam0000000000b5f8c0 = puVar1;
  }
  return;
}



/* Entry: 00416dfc; end: 00416e63; +[SCPushNotificationLessThanAppVersionPredicate descriptor] */

void FUN_00416dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1098,
                    &PTR____CFConstantStringClassReference_00a22080,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_appVersion_00afbb38,1,0x10,0x1c);
    puRam0000000000b5f8c8 = puVar1;
  }
  return;
}



/* Entry: 00416e64; end: 00416ecb; +[SCPushNotificationEqualToDeviceTypePredicate descriptor] */

void FUN_00416e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad10e8,
                    &PTR____CFConstantStringClassReference_00a220a0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_deviceType_00afbb58,1,8,0x1c);
    puRam0000000000b5f8d0 = puVar1;
  }
  return;
}



/* Entry: 00416ecc; end: 00416f33; +[SCPushNotificationCofRuleBoolPredicate descriptor] */

void FUN_00416ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1138,
                    &PTR____CFConstantStringClassReference_00a220c0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_ruleName_00afbb78,1,0x10,0x1c);
    puRam0000000000b5f8d8 = puVar1;
  }
  return;
}



/* Entry: 00416f34; end: 00416f9b; +[SCPushNotificationCofRuleIntEqPredicate descriptor] */

void FUN_00416f34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1188,
                    &PTR____CFConstantStringClassReference_00a220e0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_ruleName_00afbcf8,2,0x18,0x1c);
    puRam0000000000b5f8e0 = puVar1;
  }
  return;
}



/* Entry: 00416f9c; end: 00417003; +[SCPushNotificationAlwaysTruePredicate descriptor] */

void FUN_00416f9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad11d8,
                    &PTR____CFConstantStringClassReference_00a22100,
                    &PTR_s_snapchat_notification_00afb900,0,0,4,0x1c);
    puRam0000000000b5f8e8 = puVar1;
  }
  return;
}



/* Entry: 00417004; end: 0041706b; +[SCPushNotificationGetUserPushReachabilityRequest descriptor] */

void FUN_00417004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1228,
                    &PTR____CFConstantStringClassReference_00a22120,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_recipientUserId_00afbd38,2,0x10,
                    0x1c);
    puRam0000000000b5f8f0 = puVar1;
  }
  return;
}



/* Entry: 0041706c; end: 004170d3; +[SCPushNotificationGetUserPushReachabilityResponse descriptor] */

void FUN_0041706c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f8f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1278,
                    &PTR____CFConstantStringClassReference_00a22140,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_isUserLikelyReachable_00afbf98,3,
                    0x18,0x1c);
    puRam0000000000b5f8f8 = puVar1;
  }
  return;
}



/* Entry: 004170d4; end: 0041713b; +[SCPushNotificationUserReachableMetadata descriptor] */

void FUN_004170d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f900 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad12c8,
                    &PTR____CFConstantStringClassReference_00a22160,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_lastAckTimestamp_00afbff8,3,0x18,
                    0x1c);
    puRam0000000000b5f900 = puVar1;
  }
  return;
}



/* Entry: 0041713c; end: 004171a3; +[SCPushNotificationBatchGetUserPushReachabilityRequest descriptor] */

void FUN_0041713c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f908 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1318,
                    &PTR____CFConstantStringClassReference_00a22180,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_recipientUserIdsArray_00afbd78,2,
                    0x10,0x1c);
    puRam0000000000b5f908 = puVar1;
  }
  return;
}



/* Entry: 004171a4; end: 0041720b; +[SCPushNotificationBatchGetUserPushReachabilityResponse descriptor] */

void FUN_004171a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f910 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1368,
                    &PTR____CFConstantStringClassReference_00a221a0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_resultsArray_00afbb98,1,0x10,0x1c);
    puRam0000000000b5f910 = puVar1;
  }
  return;
}



/* Entry: 0041720c; end: 00417273; +[SCPushNotificationUserPushReachabilityResult descriptor] */

void FUN_0041720c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f918 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad13b8,
                    &PTR____CFConstantStringClassReference_00a221c0,
                    &PTR_s_snapchat_notification_00afb900,&PTR_s_recipientUserId_00afc358,4,0x20,
                    0x1c);
    puRam0000000000b5f918 = puVar1;
  }
  return;
}



/* Entry: 00417274; end: 004172db; +[SCPBNNotificationBaseData descriptor] */

void FUN_00417274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f920 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1458,
                    &PTR____CFConstantStringClassReference_00a221e0,
                    &PTR_s_snapchat_notification_00afdd18,&PTR_s_senderData_00afdd70,3,0x18,0x1c);
    puRam0000000000b5f920 = puVar1;
  }
  return;
}



/* Entry: 004172dc; end: 004173bf; +[SCPBNSenderData descriptor] */

void FUN_004172dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f928 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad14a8,
                    &PTR____CFConstantStringClassReference_00a22200,
                    &PTR_s_snapchat_notification_00afdd18,&PTR_s_senderUserId_00afdd30,2,0x18,0x1c);
    puRam0000000000b5f928 = puVar1;
  }
  return;
}



/* Entry: 004173c0; end: 004173cb;  */

bool FUN_004173c0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 004173cc; end: 00417447;  */

undefined * FUN_004173cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f938 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a22240,&UNK_007fcfbc,&UNK_007fd074,0xc,
                    FUN_00417448,0);
    do {
      if (puRam0000000000b5f938 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f938;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f938,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f938 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f938;
}



/* Entry: 00417448; end: 00417453;  */

bool FUN_00417448(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 00417454; end: 004174cf;  */

undefined * FUN_00417454(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f940 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a22260,&UNK_007fd0a4,&UNK_007fd104,4,
                    FUN_004174d0,0);
    do {
      if (puRam0000000000b5f940 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f940;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f940,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f940 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f940;
}



/* Entry: 004174d0; end: 004174db;  */

bool FUN_004174d0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 004174dc; end: 00417557;  */

undefined * FUN_004174dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f948 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a22280,&UNK_007fd114,&UNK_007fd160,4,
                    FUN_00417558,0);
    do {
      if (puRam0000000000b5f948 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f948;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f948,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f948 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f948;
}



/* Entry: 00417558; end: 00417563;  */

bool FUN_00417558(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 00417564; end: 004175cb; +[SCPBNNotificationDisplayModel descriptor] */

void FUN_00417564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f950 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1548,
                    &PTR____CFConstantStringClassReference_00a222a0,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_display_00afe000,2,0x18,0x1c);
    puRam0000000000b5f950 = puVar1;
  }
  return;
}



/* Entry: 004175cc; end: 00417657; +[SCPBNDisplay descriptor] */

undefined * FUN_004175cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f958 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1598,
                    &PTR____CFConstantStringClassReference_00a222c0,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_silentDisplay_00afe540,5,0x30,0x1c)
    ;
    func_0x00791460();
    puRam0000000000b5f958 = puVar1;
  }
  return puRam0000000000b5f958;
}



/* Entry: 00417658; end: 004176bf; +[SCPBNLoggedOutDisplay descriptor] */

void FUN_00417658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f960 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad15e8,
                    &PTR____CFConstantStringClassReference_00a222e0,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_title_00afe4c0,4,0x28,0x1c);
    puRam0000000000b5f960 = puVar1;
  }
  return;
}



/* Entry: 004176c0; end: 00417727; +[SCPBNInAppDisplay descriptor] */

void FUN_004176c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f968 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1638,
                    &PTR____CFConstantStringClassReference_00a22300,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_title_00afe680,6,0x38,0x1c);
    puRam0000000000b5f968 = puVar1;
  }
  return;
}



/* Entry: 00417728; end: 0041778f; +[SCPBNSilentDisplay descriptor] */

void FUN_00417728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f970 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1688,
                    &PTR____CFConstantStringClassReference_00a22320,
                    &PTR_s_snapchat_notification_00afde28,0,0,4,0x1c);
    puRam0000000000b5f970 = puVar1;
  }
  return;
}



/* Entry: 00417790; end: 004177f7; +[SCPBNVisibleDisplay descriptor] */

void FUN_00417790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f978 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1f98,
                    &PTR____CFConstantStringClassReference_00a22340,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_title_00afe8a0,0xe,0x68,0x1c);
    puRam0000000000b5f978 = puVar1;
  }
  return;
}



/* Entry: 004177f8; end: 00417893; +[SCPBNVisibleDisplay_DisplayStyle descriptor] */

undefined * FUN_004177f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f980 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1fc0,
                    &PTR____CFConstantStringClassReference_00a22360,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_communicationDisplay_00afde40,1,
                    0x10,0x1c);
    func_0x00791460();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00ad1f98);
    puRam0000000000b5f980 = puVar1;
  }
  return puRam0000000000b5f980;
}



/* Entry: 00417894; end: 0041790f; +[SCPBNCommunicationDisplay descriptor] */

undefined * FUN_00417894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f988 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1728,
                    &PTR____CFConstantStringClassReference_00a22380,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_title_00afe740,0xb,0x60,0x1c);
    func_0x00791440();
    puRam0000000000b5f988 = puVar1;
  }
  return puRam0000000000b5f988;
}



/* Entry: 00417910; end: 0041799b; +[SCPBNIcon descriptor] */

undefined * FUN_00417910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f990 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&_OBJC_CLASS___SCPBNIcon,
                    &PTR____CFConstantStringClassReference_00a223a0,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_bitmoji_00afe040,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5f990 = puVar1;
  }
  return puRam0000000000b5f990;
}



/* Entry: 0041799c; end: 00417a27; +[SCPBNBitmoji descriptor] */

undefined * FUN_0041799c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f998 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad17c8,
                    &PTR____CFConstantStringClassReference_00a223c0,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_userBitmoji_00afe1c0,3,0x20,0x1c);
    func_0x00791460();
    puRam0000000000b5f998 = puVar1;
  }
  return puRam0000000000b5f998;
}



/* Entry: 00417a28; end: 00417a8f; +[SCPBNUserBitmoji descriptor] */

void FUN_00417a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f9a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1818,
                    &PTR____CFConstantStringClassReference_00a223e0,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_userId_00afe080,2,0x18,0x1c);
    puRam0000000000b5f9a0 = puVar1;
  }
  return;
}



/* Entry: 00417a90; end: 00417af7; +[SCPBNGroupConversationBitmoji descriptor] */

void FUN_00417a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f9a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad1868,
                    &PTR____CFConstantStringClassReference_00a22400,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_actorUserId_00afde60,1,0x10,0x1c);
    puRam0000000000b5f9a8 = puVar1;
  }
  return;
}



/* Entry: 00417af8; end: 00417b73; +[SCPBNBitmojiInfo descriptor] */

undefined * FUN_00417af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f9b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad18b8,
                    &PTR____CFConstantStringClassReference_00a22420,
                    &PTR_s_snapchat_notification_00afde28,&PTR_s_bitmojiDownloadURL_00afe220,3,0x20,
                    0x1c);
    func_0x00791440();
    puRam0000000000b5f9b0 = puVar1;
  }
  return puRam0000000000b5f9b0;
}


