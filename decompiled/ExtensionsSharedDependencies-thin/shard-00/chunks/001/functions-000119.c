/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00216104; end: 0021623b; -[SCAttributedPushTask matchLocationARLens:userNotifications:fetchNotificationsSettings:beginPermissionsRequest:unviewedIncomingFriendsRepository:inAppReminder:welcomeBackInAppNotification:userNotifcationSettingsLogging:tokenRegistration:pendingNotificationRedirect:loggedOutClearing:notificationLegacyCoreProcessors:revokeLocallyScheduledNotification:] */

void FUN_00216104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_00215fdc(0x216448,auStack_40,0x216450,auStack_60,0x216454,auStack_80,0x216458,auStack_a0,
               0x21645c,auStack_c0,0x216460,auStack_e0,0x216464,auStack_100,0x216468,auStack_120,
               0x21646c,auStack_140,0x216470,auStack_160,0x216474,auStack_180,0x216478,auStack_1a0,
               0x21647c,auStack_1c0);
  _objc_release(param_1);
  return;
}



/* Entry: 0021623c; end: 0021628f;  */

void FUN_0021623c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00216290; end: 002163f7;  */

int FUN_00216290(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0021630c;
        goto LAB_002162f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_002162f0:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_0021630c:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 002163f8; end: 00216437;  */

void FUN_002163f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ec7dc;
  _swift_getWitnessTable(&UNK_007ec7dc,&UNK_009bf1f0);
  puRam0000000000af7d98 = puVar1;
  return;
}



/* Entry: 00216438; end: 0021647f;  */

ulong FUN_00216438(ulong param_1)

{
  if (0xc < param_1) {
    param_1 = 0xd;
  }
  return param_1;
}



/* Entry: 00216480; end: 0021651f;  */

void FUN_00216480(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00216520; end: 00216543;  */

void FUN_00216520(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 00216544; end: 0021655f; -[SCAttributedSIGTask description] */

void FUN_00216544(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216560; end: 002165a7; -[SCAttributedSIGTask init] */

void FUN_00216560(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSIGTaskWrapper.swift",0x2e,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2165a8);
  (*pcVar1)();
}



/* Entry: 002165a8; end: 002165ab; -[SCAttributedSIGTask copyWithZone:] */

void FUN_002165a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002165ac; end: 002165eb; +[SCAttributedSIGTask demo] */

void FUN_002165ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002165ec; end: 002165f7; -[SCAttributedSIGTask matchDemo:] */

void FUN_002165ec(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x002165f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 002165f8; end: 0021664b;  */

void FUN_002165f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021664c; end: 0021673b;  */

uint FUN_0021664c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 0021673c; end: 0021677b;  */

void FUN_0021673c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ec8bc;
  _swift_getWitnessTable(&UNK_007ec8bc,&UNK_009bf2d8);
  puRam0000000000af7dd0 = puVar1;
  return;
}



/* Entry: 0021677c; end: 0021684f;  */

void FUN_0021677c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00216850; end: 0021686f;  */

void FUN_00216850(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00216870; end: 0021688b; -[SCAttributedSafetyTask description] */

void FUN_00216870(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021688c; end: 002168d3; -[SCAttributedSafetyTask init] */

void FUN_0021688c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSafetyTaskWrapper.swift",0x31,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2168d4);
  (*pcVar1)();
}



/* Entry: 002168d4; end: 002168d7; -[SCAttributedSafetyTask copyWithZone:] */

void FUN_002168d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002168d8; end: 002168df; +[SCAttributedSafetyTask convoSafetyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002168d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002168e0; end: 002168e7; +[SCAttributedSafetyTask userSessionValidation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002168e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002168e8; end: 002168ef; +[SCAttributedSafetyTask tinsel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002168e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002168f0; end: 002168f7; +[SCAttributedSafetyTask cos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002168f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002168f8; end: 002168ff; +[SCAttributedSafetyTask caid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002168f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216900; end: 00216907; +[SCAttributedSafetyTask securityConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216900(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216908; end: 0021690f; +[SCAttributedSafetyTask familyCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216908(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216910; end: 00216917; +[SCAttributedSafetyTask complianceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216910(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216918; end: 0021691f; +[SCAttributedSafetyTask scw] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216918(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216920; end: 00216927; +[SCAttributedSafetyTask fideliusTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216920(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216928; end: 0021692f; +[SCAttributedSafetyTask fideliusNotificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216928(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216930; end: 00216937; +[SCAttributedSafetyTask fideliusUnauthenticated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216930(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216938; end: 0021693f; +[SCAttributedSafetyTask snapTokenTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216938(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 0xc;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216940; end: 00216947; +[SCAttributedSafetyTask securityDuplex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216940(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 0xd;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216948; end: 0021694f; +[SCAttributedSafetyTask tivNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216948(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 0xe;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216950; end: 00216957; +[SCAttributedSafetyTask hermodDuplex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216950(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = 0xf;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216958; end: 002169a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216958(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7dd8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002169a8; end: 00216aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_002169a8(undefined **param_1,undefined *param_2,undefined **param_3,undefined **param_4,
            undefined **param_5,undefined8 param_6,undefined **param_7,undefined8 param_8,
            code *param_9,undefined8 param_10,code *param_11,undefined **param_12,code *param_13,
            undefined8 param_14,code *param_15,undefined8 param_16,code *param_17,
            undefined8 param_18,code *param_19,long param_20,code *param_21,undefined1 *param_22,
            code *param_23,undefined1 *param_24,code *param_25,undefined1 *param_26,code *param_27,
            undefined1 *param_28,code *param_29,undefined1 *param_30,undefined **param_31,
            undefined **param_32)

{
  byte bVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined **ppuVar27;
  undefined ***pppuVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  uint uVar31;
  int iVar32;
  long unaff_x20;
  undefined1 *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  pppuVar2 = &ppuStack_a0;
  pppuVar3 = &ppuStack_a0;
  pppuVar28 = &ppuStack_a0;
  puVar33 = &stack0xfffffffffffffff0;
  uStack_78 = param_8;
  ppuStack_70 = param_7;
  uStack_88 = param_6;
  ppuStack_80 = param_5;
  ppuStack_98 = param_4;
  ppuStack_90 = param_3;
  ppuStack_a0 = param_1;
  bVar1 = *(byte *)(unaff_x20 + _DAT_00af7dd8);
  puVar30 = &UNK_007ec960;
  puVar29 = (undefined1 *)(ulong)(byte)(&UNK_007ec960)[bVar1];
  pppuVar4 = &ppuStack_a0;
  pppuVar5 = &ppuStack_a0;
  pppuVar6 = &ppuStack_a0;
  pppuVar7 = &ppuStack_a0;
  pppuVar8 = &ppuStack_a0;
  pppuVar9 = &ppuStack_a0;
  pppuVar10 = &ppuStack_a0;
  pppuVar11 = &ppuStack_a0;
  pppuVar12 = &ppuStack_a0;
  pppuVar13 = &ppuStack_a0;
  pppuVar14 = &ppuStack_a0;
  pppuVar15 = &ppuStack_a0;
  pppuVar16 = &ppuStack_a0;
  pppuVar17 = &ppuStack_a0;
  pppuVar18 = &ppuStack_a0;
  pppuVar19 = &ppuStack_a0;
  pppuVar20 = &ppuStack_a0;
  pppuVar21 = &ppuStack_a0;
  pppuVar22 = &ppuStack_a0;
  pppuVar23 = &ppuStack_a0;
  pppuVar24 = &ppuStack_a0;
  pppuVar25 = &ppuStack_a0;
  pppuVar26 = &ppuStack_a0;
  switch(bVar1) {
  default:
  case 0x5c:
  case 0x6a:
  case 0x88:
  case 0x90:
  case 0x98:
  case 0xa2:
  case 0xe2:
    param_3 = param_1;
    goto code_r0x00216aa0;
  case 1:
    goto code_r0x00216aa0;
  case 2:
    param_3 = param_5;
    goto code_r0x00216aa0;
  case 3:
    param_12 = param_7;
  case 0x8c:
    param_3 = param_12;
code_r0x00216aa0:
    (*(code *)param_3)();
    break;
  case 4:
    (*param_9)();
    break;
  case 5:
  case 0x4c:
    (*param_11)();
    break;
  case 6:
    (*param_13)();
  case 0xc5:
    break;
  case 7:
  case 0x60:
    (*param_15)();
    break;
  case 8:
    (*param_17)();
    break;
  case 9:
    (*param_19)();
    break;
  case 10:
    (*param_21)();
    break;
  case 0xb:
  case 0xc4:
    (*param_23)();
    break;
  case 0xc:
  case 0x74:
    (*param_25)();
    break;
  case 0xd:
  case 0xad:
  case 0xc1:
  case 0xc9:
  case 0xd1:
  case 0xd9:
    (*param_27)();
    goto code_r0x00216ad8;
  case 0xe:
  case 0x5a:
  case 0x82:
  case 0x84:
  case 0xba:
  case 0xbc:
    (*param_29)();
    goto code_r0x00216a44;
  case 0xf:
    (*(code *)param_31)();
    break;
  case 0x10:
  case 0x30:
  case 0xf0:
    goto code_r0x00216b34;
  case 0x11:
  case 0x12:
  case 0x17:
  case 0x1e:
  case 0x31:
  case 0x32:
  case 0x37:
  case 0x3e:
  case 0x47:
  case 0xf1:
  case 0xf2:
  case 0xf7:
    goto code_r0x00216c00;
  case 0x13:
  case 0x33:
  case 0xf3:
  case 0xfb:
    goto code_r0x00216bf8;
  case 0x14:
  case 0x34:
  case 0xf4:
  case 0xfe:
    goto code_r0x00216bd4;
  case 0x15:
  case 0x25:
  case 0x35:
  case 0x46:
  case 0xf5:
    goto code_r0x00216bb8;
  case 0x16:
  case 0x36:
  case 0x45:
  case 0xf6:
    goto code_r0x00216c04;
  case 0x18:
  case 0x1d:
  case 0x38:
  case 0x3d:
  case 0x4a:
  case 0xf8:
    goto code_r0x00216bc4;
  case 0x19:
  case 0x39:
  case 0xf9:
    goto code_r0x00216bc0;
  case 0x1a:
  case 0x3a:
  case 0x44:
    goto code_r0x00216b7c;
  case 0x1b:
  case 0x21:
  case 0x3b:
  case 0x41:
    goto code_r0x00216bb4;
  case 0x1c:
  case 0x3c:
  case 0xfd:
    goto code_r0x00216bc8;
  case 0x1f:
  case 0x3f:
  case 0x48:
    goto code_r0x00216c14;
  case 0x20:
  case 0x40:
  case 0x9c:
    goto code_r0x00216b80;
  case 0x22:
  case 0x42:
    goto code_r0x00216bfc;
  case 0x23:
  case 0x43:
    goto code_r0x00216bdc;
  case 0x24:
    goto code_r0x00216b6c;
  case 0x26:
    goto code_r0x00216bd8;
  case 0x27:
    goto code_r0x00216bbc;
  case 0x49:
    goto code_r0x00216bf0;
  case 0x4d:
  case 0x61:
  case 0x75:
  case 0x89:
  case 0x91:
  case 0x99:
    goto code_r0x00216ad8;
  case 0x4e:
  case 0x62:
  case 0x76:
  case 0x8a:
  case 0x92:
  case 0x9a:
  case 0xae:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xda:
    break;
  case 0x50:
    goto code_r0x00216ac0;
  case 0x51:
  case 0xb0:
LAB_00216d40:
    uVar31 = (uint)*(byte *)((long)param_31 + 1);
joined_r0x00216d28:
    if (uVar31 == 0) {
LAB_00216d48:
      iVar32 = *(byte *)param_31 - 0x10;
      if (*(byte *)param_31 < 0x10) {
        iVar32 = -1;
      }
      auVar39._4_4_ = 0;
      auVar39._0_4_ = iVar32 + 1;
      auVar39._8_8_ = param_2;
      return auVar39;
    }
    goto LAB_00216d2c;
  case 0x52:
  case 0x7a:
  case 0xb2:
    goto code_r0x00216a44;
  case 100:
    goto code_r0x00216c90;
  case 0x65:
  case 0x95:
  case 0x9d:
    goto code_r0x00216ca8;
  case 0x66:
  case 0x96:
  case 0x9e:
  case 0xce:
  case 0xd6:
  case 0xde:
    param_31 = param_31 + 0x105;
    _objc_opt_self(param_31);
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_31;
    return auVar37;
  case 0x67:
  case 0x8f:
  case 0x97:
  case 0x9f:
  case 199:
  case 0xcf:
  case 0xd7:
  case 0xdf:
    goto code_r0x00216e2c;
  case 0x70:
    *(short *)((long)param_31 + 1) = (short)param_30;
    auVar41._8_8_ = param_2;
    auVar41._0_8_ = param_31;
    return auVar41;
  case 0x71:
    param_31 = (undefined **)(ulong)*(byte *)param_31;
  case 0xa9:
  case 0xe9:
    auVar44._8_8_ = param_2;
    auVar44._0_8_ = param_31;
    return auVar44;
  case 0x72:
  case 0xaa:
  case 0xea:
    goto code_r0x00216b08;
  case 0x78:
  case 0x8e:
    param_31 = &PTR_DAT_009bf000;
  case 0xc6:
    param_31 = param_31 + 0x78;
    param_2 = (undefined *)0x0;
code_r0x00216e2c:
    auVar45._8_8_ = param_2;
    auVar45._0_8_ = param_31;
    return auVar45;
  case 0x79:
  case 0xb1:
    goto code_r0x00216d3c;
  case 0x8d:
    ppuVar27 = param_32;
    _swift_getObjectType();
    ppuStack_a0 = param_32;
    ppuStack_98 = ppuVar27;
    goto code_r0x00216c90;
  case 0x94:
    pppuVar2 = &ppuStack_c0;
    ppuStack_c0 = param_32;
    uStack_b8 = param_10;
    pcStack_a8 = param_15;
    puStack_b0 = puVar33;
    goto code_r0x00216b08;
  case 0xa8:
    goto code_r0x00216b10;
  case 0xac:
    *(uint *)((long)param_31 + 1) = (uint)param_30;
    auVar43._8_8_ = param_2;
    auVar43._0_8_ = param_31;
    return auVar43;
  case 0xc0:
  case 200:
  case 0xd0:
  case 0xd8:
    *(undefined2 *)((long)param_31 + 1) = 0;
    if ((int)param_2 != 0) {
      *(char *)param_31 = (char)param_2 + '\x0f';
      auVar40._8_8_ = param_2;
      auVar40._0_8_ = param_31;
      return auVar40;
    }
    auVar42._8_8_ = param_2;
    auVar42._0_8_ = param_31;
    return auVar42;
  case 0xcc:
  case 0xfa:
    goto code_r0x00216b70;
  case 0xcd:
  case 0xd5:
  case 0xdd:
    goto code_r0x00216ca4;
  case 0xd4:
    goto code_r0x00216c60;
  case 0xdc:
    iVar32 = 2;
    if ((uint)param_30 <= (uint)param_12) {
      iVar32 = 4;
    }
    if ((uint)param_12 >> 8 < 0xff) {
      iVar32 = 1;
    }
    if (iVar32 == 4) {
      uVar31 = *(uint *)((long)param_31 + 1);
      goto joined_r0x00216d28;
    }
    if (iVar32 != 2) goto LAB_00216d40;
    uVar31 = (uint)*(ushort *)((long)param_31 + 1);
    if (*(ushort *)((long)param_31 + 1) == 0) goto LAB_00216d48;
LAB_00216d2c:
    param_31 = (undefined **)(ulong)(((uint)*(byte *)param_31 | uVar31 << 8) - 0xf);
code_r0x00216d3c:
    auVar38._8_8_ = param_2;
    auVar38._0_8_ = param_31;
    return auVar38;
  case 0xe8:
    goto code_r0x00216c10;
  case 0xfc:
    goto code_r0x00216bec;
  case 0xff:
    goto code_r0x00216be0;
  }
code_r0x00216aa4:
code_r0x00216ac0:
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = param_31;
  return auVar34;
code_r0x00216b08:
  puVar33 = (undefined1 *)((long)pppuVar2 + 0x10);
  pppuVar3 = (undefined ***)((long)pppuVar2 + -0x2c0);
code_r0x00216b10:
  param_30 = *(undefined1 **)(puVar33 + 0x50);
  param_12 = *(undefined ***)(puVar33 + 0x58);
  param_26 = *(undefined1 **)(puVar33 + 0x40);
  param_28 = *(undefined1 **)(puVar33 + 0x48);
  param_22 = *(undefined1 **)(puVar33 + 0x30);
  param_24 = *(undefined1 **)(puVar33 + 0x38);
  param_18 = *(undefined8 *)(puVar33 + 0x20);
  param_20 = *(long *)(puVar33 + 0x28);
  param_14 = *(undefined8 *)(puVar33 + 0x10);
  param_16 = *(undefined8 *)(puVar33 + 0x18);
  *(long *)(puVar33 + -0x20) = (long)puVar29 * 4 + 0x216a30;
  *(undefined1 **)(puVar33 + -0x40) = puVar29;
  *(ulong *)(puVar33 + -0x60) = (ulong)bVar1;
  *(undefined **)(puVar33 + -0x80) = &UNK_007ec960;
  pppuVar4 = pppuVar3;
  goto code_r0x00216b34;
code_r0x00216c90:
  param_2 = PTR_s_dealloc_00ab6538;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_dealloc_00ab6538);
  param_31 = (undefined **)pppuVar28;
  goto code_r0x00216ca4;
code_r0x00216b34:
  *(code **)(puVar33 + -0xa0) = param_11;
  *(code **)(puVar33 + -0xc0) = param_9;
  *(undefined8 *)(puVar33 + -0xe0) = param_14;
  *(undefined8 *)((long)pppuVar4 + 0x1d0) = param_16;
  *(undefined8 *)((long)pppuVar4 + 0x1b0) = param_18;
  *(long *)((long)pppuVar4 + 400) = param_20;
  *(undefined1 **)((long)pppuVar4 + 0x170) = param_22;
  *(undefined1 **)((long)pppuVar4 + 0x150) = param_24;
  *(undefined1 **)((long)pppuVar4 + 0x130) = param_26;
  *(undefined1 **)((long)pppuVar4 + 0x110) = param_28;
  *(undefined1 **)((long)pppuVar4 + 0xf0) = param_30;
  *(undefined ***)((long)pppuVar4 + 0xd0) = param_12;
  _objc_retain();
  pppuVar5 = pppuVar4;
  param_32 = param_31;
code_r0x00216b6c:
  param_12 = (undefined **)((long)pppuVar5 + 0xc0);
  pppuVar6 = pppuVar5;
code_r0x00216b70:
  *(undefined8 *)((long)pppuVar6 + 0xb0) = 0x216ec4;
  *(undefined ***)((long)pppuVar6 + 0xb8) = param_12;
  pppuVar7 = pppuVar6;
code_r0x00216b7c:
  param_12 = (undefined **)((long)pppuVar7 + 0xe0);
  pppuVar8 = pppuVar7;
code_r0x00216b80:
  *(undefined8 *)((long)pppuVar8 + 0xa0) = 0x216ec0;
  *(undefined ***)((long)pppuVar8 + 0xa8) = param_12;
  *(undefined8 *)((long)pppuVar8 + 0x90) = 0x216ebc;
  *(undefined1 **)((long)pppuVar8 + 0x98) = (undefined1 *)((long)pppuVar8 + 0x100);
  param_12 = (undefined **)((long)pppuVar8 + 0x120);
  param_30 = (undefined1 *)((long)pppuVar8 + 0x140);
  param_28 = (undefined1 *)((long)pppuVar8 + 0x160);
  param_26 = (undefined1 *)((long)pppuVar8 + 0x180);
  param_24 = (undefined1 *)0x216eb8;
  pppuVar9 = pppuVar8;
code_r0x00216bb4:
  *(undefined1 **)((long)pppuVar9 + 0x80) = param_24;
  *(undefined ***)((long)pppuVar9 + 0x88) = param_12;
  pppuVar10 = pppuVar9;
code_r0x00216bb8:
  param_12 = (undefined **)((long)pppuVar10 + 0x1a0);
  pppuVar11 = pppuVar10;
code_r0x00216bbc:
  param_24 = (undefined1 *)((long)pppuVar11 + 0x1c0);
  pppuVar12 = pppuVar11;
code_r0x00216bc0:
  param_22 = (undefined1 *)0x216000;
  pppuVar13 = pppuVar12;
code_r0x00216bc4:
  param_22 = param_22 + 0xeb4;
  pppuVar14 = pppuVar13;
code_r0x00216bc8:
  *(undefined1 **)((long)pppuVar14 + 0x70) = param_22;
  *(undefined1 **)((long)pppuVar14 + 0x78) = param_30;
  param_30 = puVar33 + -0xf0;
  param_22 = puVar33 + -0xd0;
  pppuVar15 = pppuVar14;
code_r0x00216bd4:
  param_20 = 0x216000;
  pppuVar16 = pppuVar15;
code_r0x00216bd8:
  param_20 = param_20 + 0xeb0;
  pppuVar17 = pppuVar16;
code_r0x00216bdc:
  *(long *)((long)pppuVar17 + 0x60) = param_20;
  *(undefined1 **)((long)pppuVar17 + 0x68) = param_28;
  pppuVar18 = pppuVar17;
code_r0x00216be0:
  param_28 = puVar33 + -0xb0;
  param_2 = puVar33 + -0x30;
  param_20 = 0x216000;
  pppuVar19 = pppuVar18;
code_r0x00216bec:
  param_20 = param_20 + 0xeac;
  pppuVar20 = pppuVar19;
code_r0x00216bf0:
  *(long *)((long)pppuVar20 + 0x50) = param_20;
  *(undefined1 **)((long)pppuVar20 + 0x58) = param_26;
  puVar29 = puVar33 + -0x50;
  pppuVar21 = pppuVar20;
code_r0x00216bf8:
  puVar30 = puVar33 + -0x70;
  pppuVar22 = pppuVar21;
code_r0x00216bfc:
  param_26 = (undefined1 *)0x216000;
  pppuVar23 = pppuVar22;
code_r0x00216c00:
  param_26 = param_26 + 0xea8;
  pppuVar24 = pppuVar23;
code_r0x00216c04:
  *(undefined1 **)((long)pppuVar24 + 0x40) = param_26;
  *(undefined ***)((long)pppuVar24 + 0x48) = param_12;
  param_12 = (undefined **)0x216ea4;
  pppuVar25 = pppuVar24;
code_r0x00216c10:
  param_26 = (undefined1 *)0x216000;
  pppuVar26 = pppuVar25;
  goto code_r0x00216c14;
code_r0x00216a44:
  goto code_r0x00216aa4;
code_r0x00216ad8:
  goto code_r0x00216aa4;
code_r0x00216ca4:
code_r0x00216ca8:
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = param_31;
  return auVar36;
code_r0x00216c14:
  pppuVar26[6] = param_12;
  pppuVar26[7] = (undefined **)param_24;
  pppuVar26[4] = (undefined **)(param_26 + 0xea0);
  pppuVar26[5] = (undefined **)param_30;
  pppuVar26[2] = (undefined **)0x216e9c;
  pppuVar26[3] = (undefined **)param_22;
  *pppuVar26 = (undefined **)0x216e98;
  pppuVar26[1] = (undefined **)param_28;
  FUN_002169a8(0x216e84,param_2,0x216e8c,puVar29,0x216e90,puVar30,0x216e94,puVar33 + -0x90);
code_r0x00216c60:
  _objc_release(param_32);
  auVar35._8_8_ = param_2;
  auVar35._0_8_ = param_32;
  return auVar35;
}



/* Entry: 00216b00; end: 00216c77; -[SCAttributedSafetyTask matchConvoSafetyPrompt:userSessionValidation:tinsel:cos:caid:securityConfigs:familyCenter:complianceEngine:scw:fideliusTweaks:fideliusNotificationProcessor:fideliusUnauthenticated:snapTokenTweaks:securityDuplex:tivNotification:hermodDuplex:] */

void FUN_00216b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18)

{
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_1d0 = param_16;
  uStack_1f0 = param_17;
  uStack_210 = param_18;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_002169a8(0x216e84,auStack_40,0x216e8c,auStack_60,0x216e90,auStack_80,0x216e94,auStack_a0,
               0x216e98,auStack_c0,0x216e9c,auStack_e0,0x216ea0,auStack_100,0x216ea4,auStack_120,
               0x216ea8,auStack_140,0x216eac,auStack_160,0x216eb0,auStack_180,0x216eb4,auStack_1a0,
               0x216eb8,auStack_1c0,0x216ebc,auStack_1e0,0x216ec0,auStack_200,0x216ec4,auStack_220);
  _objc_release(param_1);
  return;
}



/* Entry: 00216c78; end: 00216ccb;  */

void FUN_00216c78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00216ccc; end: 00216e33;  */

int FUN_00216ccc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf0 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xf) {
      iVar2 = 4;
    }
    if (param_2 + 0xf >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00216d48;
        goto LAB_00216d2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00216d2c:
      return ((uint)*param_1 | uVar1 << 8) - 0xf;
    }
  }
LAB_00216d48:
  iVar2 = *param_1 - 0x10;
  if (*param_1 < 0x10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00216e34; end: 00216e73;  */

void FUN_00216e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ec9ac;
  _swift_getWitnessTable(&UNK_007ec9ac,&UNK_009bf3c0);
  puRam0000000000af7e08 = puVar1;
  return;
}



/* Entry: 00216e74; end: 00216ec7;  */

ulong FUN_00216e74(ulong param_1)

{
  if (0xf < param_1) {
    param_1 = 0x10;
  }
  return param_1;
}



/* Entry: 00216ec8; end: 00216ee3; -[SCAttributedProfileHeaderButtonSubtask description] */

void FUN_00216ec8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00216ee4; end: 00216f2b; -[SCAttributedProfileHeaderButtonSubtask init] */

void FUN_00216ee4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSHUTaskWrapper.swift",0x2e,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x216f2c);
  (*pcVar1)();
}



/* Entry: 00216f2c; end: 00216f73; -[SCAttributedProfileHeaderButtonSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216f2c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7e20));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00216f74; end: 00217013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00216f74(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00af7e20);
      cVar2 = *(char *)(lStack_58 + _DAT_00af7e20);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 00217014; end: 00217093; -[SCAttributedProfileHeaderButtonSubtask isEqual:] */

uint FUN_00217014(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00216f74(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00217094; end: 0021709b; +[SCAttributedProfileHeaderButtonSubtask reloadBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217094(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e20) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021709c; end: 002170a3; +[SCAttributedProfileHeaderButtonSubtask fetchIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021709c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e20) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002170a4; end: 002170ab; +[SCAttributedProfileHeaderButtonSubtask bitmojiBadgeReload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002170a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e20) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002170ac; end: 002170fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002170ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e20) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002170fc; end: 0021712b; -[SCAttributedProfileHeaderButtonSubtask matchReloadBadge:fetchIcon:bitmojiBadgeReload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002170fc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af7e20) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af7e20) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00217124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0021712c; end: 00217197;  */

void FUN_0021712c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00217198; end: 0021719b;  */

void FUN_00217198(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0021719c; end: 002171db;  */

void FUN_0021719c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 002171dc; end: 00217213;  */

void FUN_002171dc(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 00217214; end: 00217253; -[SCAttributedSHUTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217214(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_00af7e10) == '\0') && (*(long *)(param_1 + _DAT_00af7e18) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x217254);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217254; end: 0021729b; -[SCAttributedSHUTask init] */

void FUN_00217254(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSHUTaskWrapper.swift",0x2e,2,0xa4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21729c);
  (*pcVar1)();
}



/* Entry: 0021729c; end: 0021729f;  */

void FUN_0021729c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002172a0; end: 00217307; +[SCAttributedSHUTask profileHeaderButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002172a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7e10) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7e18) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217308; end: 0021730f; +[SCAttributedSHUTask navigationServicePreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217308(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e10) = 1;
  *(undefined8 *)(lVar1 + _DAT_00af7e18) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217310; end: 00217317; +[SCAttributedSHUTask settings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217310(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e10) = 2;
  *(undefined8 *)(lVar1 + _DAT_00af7e18) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217318; end: 00217373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217318(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e10) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00af7e18) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217374; end: 002173c7; -[SCAttributedSHUTask matchProfileHeaderButton:navigationServicePreload:settings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217374(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00af7e10) == '\0') {
    if (*(long *)(param_1 + _DAT_00af7e18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x002173b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x2173c4);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_00af7e10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00217394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002173bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 002173c8; end: 002173fb;  */

void FUN_002173c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 002173fc; end: 0021740b; -[SCAttributedSHUTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002173fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7e18));
  return;
}



/* Entry: 0021740c; end: 0021744b;  */

void FUN_0021740c(void)

{
  _objc_opt_self(&PTR_PTR_00ace8e8);
  return;
}



/* Entry: 0021744c; end: 002175cf;  */

int FUN_0021744c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_002174f4;
        goto LAB_002174d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_002174d8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_002174f4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 002175d0; end: 0021760f;  */

void FUN_002175d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ecaec;
  _swift_getWitnessTable(&UNK_007ecaec,&UNK_009bf538);
  puRam0000000000af7e78 = puVar1;
  return;
}



/* Entry: 00217610; end: 00217613;  */

void FUN_00217610(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ecb8c;
  _swift_getWitnessTable(&UNK_007ecb8c,&UNK_009bf4a8);
  puRam0000000000af7e80 = puVar1;
  return;
}



/* Entry: 00217614; end: 00217653;  */

void FUN_00217614(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ecb8c;
  _swift_getWitnessTable(&UNK_007ecb8c,&UNK_009bf4a8);
  puRam0000000000af7e80 = puVar1;
  return;
}



/* Entry: 00217654; end: 0021769b;  */

void FUN_00217654(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 0021769c; end: 0021769f; -[SCAttributedProfileHeaderButtonSubtask copyWithZone:] */

void FUN_0021769c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002176a0; end: 002176af; -[SCAttributedSHUTask copyWithZone:] */

void FUN_002176a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002176b0; end: 002176d7;  */

void FUN_002176b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_002181e0();
  *param_1 = uVar1;
  return;
}



/* Entry: 002176d8; end: 002176f3; -[SCAttributedSendToRankingRecentsSubTask description] */

void FUN_002176d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002176f4; end: 0021773b; -[SCAttributedSendToRankingRecentsSubTask init] */

void FUN_002176f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSharingTaskWrapper.swift",0x32,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21773c);
  (*pcVar1)();
}



/* Entry: 0021773c; end: 00217783; -[SCAttributedSendToRankingRecentsSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021773c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7e88));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00217784; end: 00217823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00217784(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00af7e88);
      cVar2 = *(char *)(lStack_58 + _DAT_00af7e88);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 00217824; end: 002178a3; -[SCAttributedSendToRankingRecentsSubTask isEqual:] */

uint FUN_00217824(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00217784(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 002178a4; end: 002178ab; +[SCAttributedSendToRankingRecentsSubTask modelSyncJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178ac; end: 002178b3; +[SCAttributedSendToRankingRecentsSubTask featureSyncJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178b4; end: 002178bb; +[SCAttributedSendToRankingRecentsSubTask contextualFeaturesSyncJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178bc; end: 002178c3; +[SCAttributedSendToRankingRecentsSubTask preload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178c4; end: 002178cb; +[SCAttributedSendToRankingRecentsSubTask rankRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178cc; end: 002178d3; +[SCAttributedSendToRankingRecentsSubTask concurrentScoring] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178d4; end: 002178db; +[SCAttributedSendToRankingRecentsSubTask rankingArtifacts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178dc; end: 002178e3; +[SCAttributedSendToRankingRecentsSubTask subjectProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002178e4; end: 002179db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002178e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e88) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002179dc; end: 00217aa3; -[SCAttributedSendToRankingRecentsSubTask matchModelSyncJobProcessor:featureSyncJobProcessor:contextualFeaturesSyncJobProcessor:preload:rankRecipients:concurrentScoring:rankingArtifacts:subjectProvider:] */

void FUN_002179dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00217934(0x218200,auStack_40,0x218218,auStack_60,0x21821c,auStack_80,0x218220,auStack_a0,
                  0x218224,auStack_c0,0x218228,auStack_e0,0x21822c,auStack_100,0x218230,auStack_120)
  ;
  _objc_release(param_1);
  return;
}



/* Entry: 00217aa4; end: 00217aa7;  */

void FUN_00217aa4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00217aa8; end: 00217b13;  */

void FUN_00217aa8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00217b14; end: 00217b17;  */

void FUN_00217b14(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00217b18; end: 00217b7f;  */

void FUN_00217b18(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00217b80; end: 00217b9f;  */

void FUN_00217b80(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00217ba0; end: 00217be3; -[SCAttributedSharingTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217ba0(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_00af7e90) == '\x01') && (*(long *)(param_1 + _DAT_00af7e98) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x217be4);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217be4; end: 00217c2b; -[SCAttributedSharingTask init] */

void FUN_00217be4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSharingTaskWrapper.swift",0x32,2,0xfe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x217c2c);
  (*pcVar1)();
}



/* Entry: 00217c2c; end: 00217c2f;  */

void FUN_00217c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00217c30; end: 00217c37; +[SCAttributedSharingTask sendToPreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217c30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e90) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af7e98) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}


