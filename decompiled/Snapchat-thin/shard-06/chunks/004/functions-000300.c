/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048d16f4; end: 1048d16fb; +[SCAttributedProfileTask qrCodeCardPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d16f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bab8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d16fc; end: 1048d170b; +[SCAttributedProfileTask notificationCenterButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d16fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bab8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d170c; end: 1048d171b; +[SCAttributedProfileTask saturnUpsellDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d170c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bab8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d171c; end: 1048d1723; +[SCAttributedProfileTask calendarDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d171c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bab8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1724; end: 1048d172b; +[SCAttributedProfileTask calendarFetchParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1724(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bab8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d172c; end: 1048d177b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d172c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bab8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d177c; end: 1048d17c3; -[SCAttributedProfileTask matchQrCodeCardPage:notificationCenterButton:saturnUpsellDeeplink:calendarDeeplink:calendarFetchParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d177c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309bab8);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_3 = param_4;
    }
  }
  else {
    param_3 = param_5;
    if ((bVar1 != 2) && (param_3 = param_6, bVar1 != 3)) {
      param_3 = param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d17c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d17c4; end: 1048d17f7;  */

void FUN_1048d17c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d17f8; end: 1048d187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d17f8(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_70 [10];
  
  uVar4 = param_1;
  func_0x0001009479b0();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar2 = auStack_70 + 6;
  if (uVar1 != 3) {
    puVar2 = auStack_70 + 8;
  }
  puVar3 = auStack_70 + 4;
  if (uVar1 != 2) {
    puVar3 = puVar2;
  }
  puVar2 = auStack_70;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_70 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309bab8) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d1880; end: 1048d19e7;  */

int FUN_1048d1880(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d18fc;
        goto LAB_1048d18e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d18e0:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048d18fc:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d19e8; end: 1048d1a27;  */

void FUN_1048d19e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45650;
  _swift_getWitnessTable(&UNK_10dd45650,&UNK_1107b49a8);
  puRam000000011309bae8 = puVar1;
  return;
}



/* Entry: 1048d1a28; end: 1048d1a37;  */

ulong FUN_1048d1a28(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048d1a38; end: 1048d1b0b;  */

void FUN_1048d1a38(void)

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



/* Entry: 1048d1b0c; end: 1048d1b2b;  */

void FUN_1048d1b0c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d1b2c; end: 1048d1b47; -[SCAttributedPushTask description] */

void FUN_1048d1b2c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1b48; end: 1048d1b8f; -[SCAttributedPushTask init] */

void FUN_1048d1b48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedPushTaskWrapper.swift",0x2f,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d1b90);
  (*pcVar1)();
}



/* Entry: 1048d1b90; end: 1048d1b93; -[SCAttributedPushTask copyWithZone:] */

void FUN_1048d1b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d1b94; end: 1048d1b9b; +[SCAttributedPushTask fetchNotificationsSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1b94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1b9c; end: 1048d1ba3; +[SCAttributedPushTask unviewedIncomingFriendsRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1b9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1ba4; end: 1048d1bab; +[SCAttributedPushTask inAppReminder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1ba4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bac; end: 1048d1bb3; +[SCAttributedPushTask welcomeBackInAppNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1bac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bb4; end: 1048d1bbb; +[SCAttributedPushTask userNotifcationSettingsLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1bb4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bbc; end: 1048d1bc3; +[SCAttributedPushTask tokenRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1bbc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bc4; end: 1048d1bcb; +[SCAttributedPushTask pendingNotificationRedirect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1bc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bcc; end: 1048d1bd3; +[SCAttributedPushTask loggedOutClearing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1bcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bd4; end: 1048d1bdb; +[SCAttributedPushTask revokeLocallyScheduledNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d1bd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309baf0) = 0xc;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d1bdc; end: 1048d1d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1048d1bdc(code *param_1,int param_2,code *param_3,undefined8 param_4,code *param_5,
                    undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,ulong param_10
                    ,code *param_11,undefined *param_12,code *param_13,ulong param_14,code *param_15
                    ,code *param_16,code *param_17,undefined *param_18,code *param_19,code *param_20
                    ,code *param_21,ulong param_22,code *param_23,code *param_24,code *param_25,
                    code *param_26)

{
  code *pcVar1;
  code *pcVar2;
  code **ppcVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **ppcVar15;
  code **ppcVar16;
  code **ppcVar17;
  code **ppcVar18;
  code **ppcVar19;
  code **ppcVar20;
  code **ppcVar21;
  code **ppcVar22;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  uint uVar23;
  int iVar24;
  long unaff_x20;
  undefined1 auStack_2a0 [416];
  undefined1 auStack_100 [16];
  code *pcStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined auStack_c0 [16];
  code *pcStack_b0;
  undefined8 uStack_90;
  code *pcStack_70;
  code *pcStack_68;
  
  ppcVar3 = &pcStack_70;
  iVar24 = (int)param_24;
  ppcVar4 = &pcStack_70;
  ppcVar5 = &pcStack_70;
  ppcVar6 = &pcStack_70;
  ppcVar7 = &pcStack_70;
  ppcVar8 = &pcStack_70;
  ppcVar9 = &pcStack_70;
  ppcVar10 = &pcStack_70;
  ppcVar11 = &pcStack_70;
  ppcVar12 = &pcStack_70;
  ppcVar13 = &pcStack_70;
  ppcVar14 = &pcStack_70;
  ppcVar15 = &pcStack_70;
  ppcVar16 = &pcStack_70;
  ppcVar17 = &pcStack_70;
  ppcVar18 = &pcStack_70;
  ppcVar19 = &pcStack_70;
  ppcVar20 = &pcStack_70;
  ppcVar21 = &pcStack_70;
  ppcVar22 = &pcStack_70;
  pcVar1 = param_24;
  pcVar2 = param_26;
  pcStack_68 = param_7;
  switch(*(undefined1 *)(unaff_x20 + _DAT_11309baf0)) {
  default:
  case 0x6c:
  case 0x7a:
  case 0xb2:
  case 0xf2:
    (*param_1)();
code_r0x0001048d1c54:
    return param_1;
  case 1:
  case 0xd0:
  case 0xd8:
  case 0xe0:
  case 0xe8:
    (*param_3)();
    break;
  case 2:
  case 0x14:
    (*param_5)();
  case 0x12:
    break;
  case 3:
  case 0x13:
    (*param_7)();
code_r0x0001048d1c9c:
    return param_1;
  case 4:
  case 0x19:
    (*param_9)();
  case 0x16:
    break;
  case 5:
    (*param_11)();
    break;
  case 6:
    (*param_13)();
    break;
  case 7:
  case 0x15:
    (*param_15)();
code_r0x0001048d1ca8:
    return param_1;
  case 8:
  case 0xbc:
    (*param_17)();
    break;
  case 9:
  case 0x9c:
  case 0x10:
    (*param_19)();
    break;
  case 10:
    (*param_21)();
    break;
  case 0xb:
  case 0x6a:
  case 0x92:
  case 0x94:
  case 0xca:
  case 0x11:
  case 0xcc:
    (*param_23)();
code_r0x0001048d1c60:
    return param_1;
  case 0xc:
    (*param_25)();
  case 0xf:
    break;
  case 0xd:
    goto code_r0x0001048d1ca8;
  case 0x17:
    goto code_r0x0001048d1c9c;
  case 0x18:
  case 0x5f:
  case 0x73:
  case 0x87:
  case 0x9b:
  case 0xa3:
  case 0xab:
  case 0xbf:
  case 0xd3:
  case 0xdb:
  case 0xe3:
  case 0xeb:
    goto code_r0x0001048d1c54;
  case 0x20:
  case 0x40:
    goto code_r0x0001048d1d50;
  case 0x21:
  case 0x22:
  case 0x27:
  case 0x41:
  case 0x42:
  case 0x47:
  case 0x55:
    goto code_r0x0001048d1e1c;
  case 0x23:
  case 0x43:
    goto code_r0x0001048d1e14;
  case 0x24:
  case 0x44:
    goto code_r0x0001048d1df0;
  case 0x25:
  case 0x33:
  case 0x45:
  case 0x54:
    goto code_r0x0001048d1dd4;
  case 0x26:
  case 0x2b:
  case 0x46:
  case 0x4b:
  case 0x53:
    goto code_r0x0001048d1e20;
  case 0x28:
  case 0x48:
  case 0x58:
    goto code_r0x0001048d1de0;
  case 0x29:
  case 0x49:
    goto code_r0x0001048d1ddc;
  case 0x2a:
  case 0x4a:
  case 0x80:
  case 0xa4:
    goto code_r0x0001048d1d8c;
  case 0x2c:
  case 0x30:
  case 0x4c:
  case 0x50:
    goto code_r0x0001048d1e18;
  case 0x2d:
  case 0x4d:
    goto code_r0x0001048d1dec;
  case 0x2e:
  case 0x4e:
    goto code_r0x0001048d1d9c;
  case 0x2f:
  case 0x4f:
    goto code_r0x0001048d1dd0;
  case 0x31:
  case 0x51:
    goto code_r0x0001048d1df8;
  case 0x32:
    goto code_r0x0001048d1d88;
  case 0x34:
    goto code_r0x0001048d1df4;
  case 0x35:
    goto code_r0x0001048d1dd8;
  case 0x52:
    goto code_r0x0001048d1d98;
  case 0x56:
    goto code_r0x0001048d1e30;
  case 0x57:
  case 0xac:
    goto code_r0x0001048d1e0c;
  case 0x5c:
    goto code_r0x0001048d1da0;
  case 0x5d:
  case 0x71:
  case 0x85:
  case 0x99:
  case 0xa1:
  case 0xa9:
  case 0xbd:
  case 0xd1:
  case 0xd9:
  case 0xe1:
  case 0xe9:
    param_20 = (code *)(ulong)(param_2 - 0xf4U);
    param_22 = (ulong)((param_2 - 0xf4U >> 8) + 1);
  case 0x77:
  case 0xa7:
  case 0xaf:
  case 0xdf:
  case 0xe7:
  case 0xef:
    *param_1 = SUB81(param_20,0);
    if (1 < iVar24) {
      if (iVar24 != 2) {
        *(int *)(param_1 + 1) = (int)param_22;
        return param_1;
      }
      *(short *)(param_1 + 1) = (short)param_22;
      return param_1;
    }
    if (iVar24 == 0) {
      return param_1;
    }
    param_1[1] = SUB81(param_22,0);
    return param_1;
  case 0x5e:
  case 0x72:
  case 0x86:
  case 0x9a:
  case 0xa2:
  case 0xaa:
  case 0xbe:
  case 0xd2:
  case 0xda:
  case 0xe2:
  case 0xea:
    goto code_r0x0001048d1f14;
  case 0x61:
    goto code_r0x0001048d2008;
  case 0x62:
  case 0x8a:
  case 0xc2:
    param_24 = (code *)&stack0xfffffffffffffff0;
  case 0x9e:
    goto code_r0x0001048d1f14;
  case 0x70:
    goto code_r0x0001048d1d70;
  case 0x74:
    goto code_r0x0001048d1f1c;
  case 0x75:
  case 0xa5:
  case 0xad:
    goto code_r0x0001048d1f58;
  case 0x76:
  case 0xa6:
  case 0xae:
  case 0xde:
  case 0xe6:
  case 0xee:
    goto code_r0x0001048d1f2c;
  case 0x81:
  case 0x98:
  case 0xa0:
  case 0xa8:
  case 0xb9:
  case 0xf9:
    ppcVar3 = (code **)auStack_2a0;
    pcStack_b0 = param_25;
    pcStack_f0 = param_9;
    param_24 = param_15;
    param_22 = param_14;
    param_20 = param_13;
    param_18 = param_12;
    param_16 = param_11;
    param_14 = param_10;
    uStack_d0 = param_8;
    uStack_90 = param_6;
    pcStack_70 = param_5;
  case 0x84:
    *(ulong *)((long)ppcVar3 + 0x140) = param_14;
    ppcVar4 = ppcVar3;
code_r0x0001048d1d44:
    *(code **)((long)ppcVar4 + 0x120) = param_16;
    *(undefined **)((long)ppcVar4 + 0x100) = param_18;
    *(code **)((long)ppcVar4 + 0xe0) = param_20;
    ppcVar5 = ppcVar4;
    goto code_r0x0001048d1d50;
  case 0x82:
  case 0xba:
  case 0xfa:
    param_18 = &UNK_10dd456fd;
    param_16 = (code *)0x1048d1eb8;
  case 0xb8:
                    /* WARNING: Could not recover jumptable at 0x0001048d1eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(param_16 + (ulong)(byte)param_18[(long)param_20] * 4))();
    return param_1;
  case 0x83:
  case 0xbb:
  case 0xfb:
    goto code_r0x0001048d1c60;
  case 0x88:
  case 0xf8:
    goto code_r0x0001048d1fac;
  case 0x89:
  case 0xc1:
    if (!in_ZR && in_NG == in_OV) {
      if (iVar24 == 2) {
        *(undefined2 *)(param_1 + 1) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      goto joined_r0x0001048d2010;
    }
    goto code_r0x0001048d2008;
  case 0x9d:
    goto code_r0x0001048d1d44;
  case 0xc0:
    goto code_r0x0001048d1f14;
  case 0xd4:
    param_24 = (code *)(ulong)(param_2 + 0xcU);
    in_CY = 0xfffeff < param_2 + 0xcU;
  case 0xdd:
  case 0xe5:
  case 0xed:
    param_22 = 4;
code_r0x0001048d1f58:
    uVar23 = 2;
    if ((bool)in_CY) {
      uVar23 = (uint)param_22;
    }
    if (((uint)((ulong)param_24 >> 8) & 0xffffff) < 0xff) {
      uVar23 = 1;
    }
    param_24 = (code *)(ulong)uVar23;
code_r0x0001048d1f6c:
    if ((int)param_24 == 4) {
      uVar23 = *(uint *)(param_1 + 1);
joined_r0x0001048d1f98:
      if (uVar23 != 0) {
LAB_1048d1f9c:
        param_1 = (code *)(ulong)(((uint)(byte)*param_1 | uVar23 << 8) - 0xc);
code_r0x0001048d1fac:
        return param_1;
      }
    }
    else {
      if ((int)param_24 != 2) {
        uVar23 = (uint)(byte)param_1[1];
        goto joined_r0x0001048d1f98;
      }
code_r0x0001048d1f7c:
      uVar23 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) goto LAB_1048d1f9c;
    }
    in_CY = 0xc < (byte)*param_1;
    param_24 = (code *)(ulong)((byte)*param_1 - 0xd);
code_r0x0001048d1fc0:
    iVar24 = (int)param_24;
    if (!(bool)in_CY) {
      iVar24 = -1;
    }
    return (code *)(ulong)(iVar24 + 1);
  case 0xd5:
    goto code_r0x0001048d1fc0;
  case 0xd6:
    goto code_r0x0001048d1f7c;
  case 0xdc:
    goto code_r0x0001048d1dfc;
  case 0xe4:
code_r0x0001048d1f14:
    param_1[param_22] = SUB81(param_23,0);
    *(code **)param_24 = param_1;
    *(code **)(param_24 + 8) = param_26;
    pcVar1 = param_24;
code_r0x0001048d1f1c:
    param_1 = pcVar1;
    _objc_msgSendSuper2(param_1,PTR_s_init_1125d9248);
code_r0x0001048d1f2c:
    return param_1;
  case 0xec:
    goto code_r0x0001048d1f6c;
  }
  return param_1;
code_r0x0001048d1d50:
  *(ulong *)((long)ppcVar5 + 0xc0) = param_22;
  *(code **)((long)ppcVar5 + 0xa0) = param_24;
  _objc_retain();
  *(undefined8 *)((long)ppcVar5 + 0x80) = 0x1048d2128;
  *(undefined1 **)((long)ppcVar5 + 0x88) = (undefined1 *)((long)ppcVar5 + 0x90);
  ppcVar6 = ppcVar5;
  param_26 = param_1;
code_r0x0001048d1d70:
  *(undefined8 *)((long)ppcVar6 + 0x70) = 0x1048d2124;
  *(undefined1 **)((long)ppcVar6 + 0x78) = (undefined1 *)((long)ppcVar6 + 0xb0);
  param_24 = (code *)((long)ppcVar6 + 0xd0);
  param_22 = 0x1048d2000;
  ppcVar7 = ppcVar6;
code_r0x0001048d1d88:
  param_22 = param_22 + 0x120;
  ppcVar8 = ppcVar7;
code_r0x0001048d1d8c:
  *(ulong *)((long)ppcVar8 + 0x60) = param_22;
  *(code **)((long)ppcVar8 + 0x68) = param_24;
  param_24 = (code *)((long)ppcVar8 + 0xf0);
  param_22 = 0x1048d2000;
  ppcVar9 = ppcVar8;
code_r0x0001048d1d98:
  param_22 = param_22 + 0x11c;
  ppcVar10 = ppcVar9;
code_r0x0001048d1d9c:
  param_20 = (code *)0x1048d2000;
  ppcVar11 = ppcVar10;
code_r0x0001048d1da0:
  *(ulong *)((long)ppcVar11 + 0x50) = param_22;
  *(code **)((long)ppcVar11 + 0x58) = param_24;
  param_16 = (code *)auStack_100;
  *(code **)((long)ppcVar11 + 0x40) = param_20 + 0x118;
  *(undefined1 **)((long)ppcVar11 + 0x48) = (undefined1 *)((long)ppcVar11 + 0x110);
  param_20 = (code *)auStack_e0;
  param_18 = (undefined *)0x1048d2110;
  *(undefined8 *)((long)ppcVar11 + 0x30) = 0x1048d2114;
  *(undefined1 **)((long)ppcVar11 + 0x38) = (undefined1 *)((long)ppcVar11 + 0x130);
  ppcVar12 = ppcVar11;
code_r0x0001048d1dd0:
  param_24 = (code *)0x1048d2000;
  ppcVar13 = ppcVar12;
code_r0x0001048d1dd4:
  param_24 = param_24 + 0x10c;
  ppcVar14 = ppcVar13;
code_r0x0001048d1dd8:
  param_22 = 0x1048d2000;
  ppcVar15 = ppcVar14;
code_r0x0001048d1ddc:
  param_22 = param_22 + 0x108;
  ppcVar16 = ppcVar15;
code_r0x0001048d1de0:
  *(undefined **)((long)ppcVar16 + 0x20) = param_18;
  *(code **)((long)ppcVar16 + 0x28) = param_16;
  ppcVar17 = ppcVar16;
code_r0x0001048d1dec:
  ppcVar18 = ppcVar17;
code_r0x0001048d1df0:
  ppcVar19 = ppcVar18;
code_r0x0001048d1df4:
  param_18 = auStack_c0;
  ppcVar20 = ppcVar19;
code_r0x0001048d1df8:
  *(code **)((long)ppcVar20 + 0x10) = param_24;
  *(code **)((long)ppcVar20 + 0x18) = param_20;
  ppcVar21 = ppcVar20;
code_r0x0001048d1dfc:
  ppcVar22 = ppcVar21;
code_r0x0001048d1e0c:
  *ppcVar22 = (code *)param_22;
  ppcVar22[1] = (code *)param_18;
code_r0x0001048d1e14:
code_r0x0001048d1e18:
code_r0x0001048d1e1c:
  pcVar2 = param_26;
  goto code_r0x0001048d1e20;
code_r0x0001048d2008:
  if (iVar24 != 0) {
    param_1[1] = (code)0x0;
  }
joined_r0x0001048d2010:
  if (param_2 == 0) {
    return param_1;
  }
  *param_1 = (code)((char)param_2 + '\f');
  return param_1;
code_r0x0001048d1e20:
  param_1 = pcVar2;
  FUN_1048d1bdc();
  _objc_release(param_1);
code_r0x0001048d1e30:
  return param_1;
}



/* Entry: 1048d1d04; end: 1048d1e3b; -[SCAttributedPushTask matchLocationARLens:userNotifications:fetchNotificationsSettings:beginPermissionsRequest:unviewedIncomingFriendsRepository:inAppReminder:welcomeBackInAppNotification:userNotifcationSettingsLogging:tokenRegistration:pendingNotificationRedirect:loggedOutClearing:notificationLegacyCoreProcessors:revokeLocallyScheduledNotification:] */

void FUN_1048d1d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1048d1bdc(0x1048d20f4,auStack_40,0x1048d20fc,auStack_60,0x1048d2100,auStack_80,0x1048d2104,
                auStack_a0,0x1048d2108,auStack_c0,0x1048d210c,auStack_e0,0x1048d2110,auStack_100,
                0x1048d2114,auStack_120,0x1048d2118,auStack_140,0x1048d211c,auStack_160,0x1048d2120,
                auStack_180,0x1048d2124,auStack_1a0,0x1048d2128,auStack_1c0);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d1e3c; end: 1048d1e6f;  */

void FUN_1048d1e3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d1e70; end: 1048d1f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 ** FUN_1048d1e70(undefined1 **param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  undefined1 ***pppuVar2;
  undefined1 ***pppuVar3;
  undefined1 ***pppuVar4;
  undefined1 ***pppuVar5;
  undefined1 ***pppuVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined1 ***pppuVar12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 ***pppuVar13;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 ***pppuVar19;
  int iVar20;
  ulong uVar21;
  undefined1 **ppuStack_110;
  undefined1 **ppuStack_108;
  undefined1 **ppuStack_f0;
  undefined1 **ppuStack_e8;
  undefined1 *apuStack_e0 [2];
  undefined1 *apuStack_d0 [2];
  undefined1 *apuStack_c0 [2];
  undefined1 *apuStack_b0 [2];
  undefined1 *apuStack_a0 [2];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 *apuStack_70 [2];
  undefined1 *apuStack_60 [2];
  undefined1 *apuStack_50 [2];
  undefined1 *apuStack_40 [2];
  undefined1 *apuStack_30 [2];
  int iVar11;
  
  pppuVar12 = &ppuStack_f0;
  pppuVar19 = &ppuStack_f0;
  uVar17 = (uint)&ppuStack_f0;
  iVar20 = (int)&ppuStack_f0;
  iVar10 = (int)&ppuStack_f0;
  iVar11 = (int)&ppuStack_f0;
  ppuVar15 = param_1;
  func_0x0001009acf5c();
  ppuVar14 = ppuVar15;
  _objc_allocWithZone();
  uVar16 = (uint)&ppuStack_f0;
  pppuVar2 = (undefined1 ***)ppuVar14;
  pppuVar13 = &ppuStack_f0;
  pppuVar3 = &ppuStack_f0;
  pppuVar4 = &ppuStack_f0;
  pppuVar5 = &ppuStack_f0;
  pppuVar6 = &ppuStack_f0;
  uVar21 = _DAT_11309baf0;
  iVar18 = (int)&ppuStack_f0;
  iVar7 = (int)&ppuStack_f0;
  iVar8 = (int)&ppuStack_f0;
  switch((ulong)param_1 & 0xff) {
  case 0:
    break;
  default:
    pppuVar6 = (undefined1 ***)apuStack_e0;
  case 0x5f:
  case 0x6d:
  case 0xa5:
  case 0xe5:
    pppuVar19 = pppuVar6;
    break;
  case 2:
    pppuVar3 = (undefined1 ***)apuStack_d0;
  case 0x8f:
    pppuVar19 = pppuVar3;
    break;
  case 3:
    pppuVar19 = (undefined1 ***)apuStack_c0;
    break;
  case 4:
  case 0xbf:
    pppuVar4 = (undefined1 ***)apuStack_b0;
  case 0x76:
  case 0xae:
  case 0xee:
    pppuVar19 = pppuVar4;
    break;
  case 5:
    pppuVar19 = (undefined1 ***)apuStack_a0;
    break;
  case 6:
    pppuVar19 = (undefined1 ***)&puStack_90;
    break;
  case 7:
    pppuVar19 = (undefined1 ***)apuStack_80;
    break;
  case 8:
    pppuVar19 = (undefined1 ***)apuStack_70;
    break;
  case 9:
    pppuVar19 = (undefined1 ***)apuStack_60;
    break;
  case 10:
    pppuVar19 = (undefined1 ***)apuStack_50;
    break;
  case 0xb:
  case 0x52:
  case 0x66:
  case 0x7a:
  case 0x8e:
  case 0x96:
  case 0x9e:
  case 0xb2:
  case 0xc6:
  case 0xce:
  case 0xd6:
  case 0xde:
    pppuVar5 = (undefined1 ***)apuStack_40;
  case 0x5d:
  case 0x85:
  case 0x87:
  case 0xbd:
    pppuVar19 = pppuVar5;
    break;
  case 0xc:
    pppuVar19 = (undefined1 ***)apuStack_30;
    break;
  case 0x13:
  case 0x33:
  case 0xf3:
    goto code_r0x0001048d1fbc;
  case 0x14:
  case 0x15:
  case 0x1a:
  case 0x34:
  case 0x35:
  case 0x3a:
  case 0x48:
  case 0xf4:
  case 0xf5:
  case 0xfa:
    *(byte *)ppuVar14 = (byte)param_2;
    return ppuVar14;
  case 0x16:
  case 0x36:
  case 0xf6:
    return ppuVar14;
  case 0x17:
  case 0x37:
  case 0xf7:
    goto code_r0x0001048d205c;
  case 0x18:
  case 0x26:
  case 0x38:
  case 0x47:
  case 0xf8:
    goto code_r0x0001048d2040;
  case 0x19:
  case 0x1e:
  case 0x39:
  case 0x3e:
  case 0x46:
  case 0xf9:
    return ppuVar14;
  case 0x1b:
  case 0x3b:
  case 0x4b:
  case 0xfb:
    goto code_r0x0001048d204c;
  case 0x1c:
  case 0x3c:
  case 0xfc:
    goto code_r0x0001048d2048;
  case 0x1d:
  case 0x3d:
  case 0x73:
  case 0x97:
    goto code_r0x0001048d1ff8;
  case 0x1f:
  case 0x23:
  case 0x3f:
  case 0x43:
    return ppuVar14;
  case 0x20:
  case 0x40:
    goto code_r0x0001048d2058;
  case 0x21:
  case 0x41:
    goto code_r0x0001048d2008;
  case 0x22:
  case 0x42:
    goto code_r0x0001048d203c;
  case 0x24:
  case 0x44:
    goto code_r0x0001048d2064;
  case 0x25:
    goto code_r0x0001048d1ff4;
  case 0x27:
    goto code_r0x0001048d2060;
  case 0x28:
    goto code_r0x0001048d2044;
  case 0x45:
  case 0xfd:
    goto code_r0x0001048d2004;
  case 0x49:
    return ppuVar14;
  case 0x4a:
  case 0x9f:
    goto code_r0x0001048d2078;
  case 0x4f:
    goto code_r0x0001048d200c;
  case 0x50:
  case 100:
  case 0x78:
  case 0x8c:
  case 0x94:
  case 0x9c:
  case 0xb0:
  case 0xc4:
  case 0xcc:
  case 0xd4:
  case 0xdc:
    goto code_r0x0001048d2284;
  case 0x55:
  case 0x7d:
  case 0xb5:
    pppuVar12 = &ppuStack_110;
    ppuStack_110 = ppuVar15;
    ppuStack_108 = param_1;
  case 0x91:
    *(undefined1 **)((long)pppuVar12 + 0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)pppuVar12 + 0x18) = 0x1048d1e90;
    ppuVar14 = (undefined1 **)0x0;
    __ss6HasherV8_combineyySuF(0);
code_r0x0001048d2188:
    return ppuVar14;
  case 99:
  case 0xfe:
    goto code_r0x0001048d1fdc;
  case 0x67:
    goto code_r0x0001048d2188;
  case 0x68:
  case 0x98:
  case 0xa0:
    goto code_r0x0001048d21c4;
  case 0x69:
  case 0x99:
  case 0xa1:
  case 0xd1:
  case 0xd9:
  case 0xe1:
    uStack_88 = 0x1048d1e90;
    puStack_90 = &stack0xfffffffffffffff0;
    __ss6HasherV5_seedABSi_tcfC(&ppuStack_e8);
    ppuVar14 = (undefined1 **)0x0;
    __ss6HasherV8_combineyySuF(0);
  case 199:
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048d21c0:
code_r0x0001048d21c4:
    return ppuVar14;
  case 0x6a:
  case 0x9a:
  case 0xa2:
  case 0xd2:
  case 0xda:
  case 0xe2:
    goto code_r0x0001048d2290;
  case 0x74:
  case 0x8b:
  case 0x93:
  case 0x9b:
  case 0xac:
  case 0xec:
    goto code_r0x0001048d1f7c;
  case 0x75:
  case 0xad:
  case 0xed:
    goto code_r0x0001048d20f4;
  case 0x77:
    goto code_r0x0001048d1fac;
  case 0x7b:
  case 0xeb:
    ppuStack_e8 = (undefined1 **)((ulong)ppuStack_e8 & 0xffffffff00000000);
    ppuStack_f0 = (undefined1 **)0x24;
  case 200:
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1048d2254);
    (*pcVar9)();
  case 0x7c:
  case 0xb4:
    _objc_allocWithZone();
  case 0x54:
    pppuVar2 = &ppuStack_f0;
    ppuStack_f0 = ppuVar14;
    ppuStack_e8 = param_1;
code_r0x0001048d2284:
    ppuVar14 = (undefined1 **)pppuVar2;
    _objc_msgSendSuper2();
code_r0x0001048d2290:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar14;
  case 0x90:
LAB_1048d1fb0:
    uVar17 = (uint)*(byte *)((long)ppuVar14 + 1);
joined_r0x0001048d1f98:
    if (uVar17 != 0) goto LAB_1048d1f9c;
    goto LAB_1048d1fb8;
  case 0xab:
code_r0x0001048d20f4:
    ppuVar15 = (undefined1 **)ppuVar15[2];
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)ppuVar15[2])();
    return ppuVar15;
  case 0xaf:
    iVar20 = 2;
    if (0xfffeff < uVar16) {
      iVar20 = 4;
    }
    if (uVar16 >> 8 < 0xff) {
      iVar20 = 1;
    }
    if (iVar20 == 4) {
      uVar17 = *(uint *)((long)ppuVar14 + 1);
      goto joined_r0x0001048d1f98;
    }
    if (iVar20 != 2) goto LAB_1048d1fb0;
code_r0x0001048d1f7c:
    uVar17 = (uint)*(ushort *)((long)ppuVar14 + 1);
    if (*(ushort *)((long)ppuVar14 + 1) != 0) {
LAB_1048d1f9c:
      ppuVar14 = (undefined1 **)(ulong)(((uint)*(byte *)ppuVar14 | uVar17 << 8) - 0xc);
code_r0x0001048d1fac:
      return ppuVar14;
    }
LAB_1048d1fb8:
    uVar17 = (uint)*(byte *)ppuVar14;
code_r0x0001048d1fbc:
    iVar20 = uVar17 - 0xd;
    if (uVar17 < 0xd) {
      iVar20 = -1;
    }
    return (undefined1 **)(ulong)(iVar20 + 1);
  case 0xb3:
    __ss6HasherV5_seedABSi_tcfC(&ppuStack_e8,0);
    ppuVar14 = (undefined1 **)0x0;
  case 0x51:
  case 0x65:
  case 0x79:
  case 0x8d:
  case 0x95:
  case 0x9d:
  case 0xb1:
  case 0xc5:
  case 0xcd:
  case 0xd5:
  case 0xdd:
    __ss6HasherV8_combineyySuF();
code_r0x0001048d2158:
    __ss6HasherV9_finalizeSiyF();
    return ppuVar14;
  case 0xc3:
  case 0xcb:
  case 0xd3:
  case 0xdb:
    goto code_r0x0001048d1f1c;
  case 0xc9:
    return (undefined1 **)0x1;
  case 0xcf:
    goto code_r0x0001048d2068;
  case 0xd0:
  case 0xd8:
  case 0xe0:
    goto code_r0x0001048d21c0;
  case 0xd7:
    goto code_r0x0001048d2158;
  case 0xdf:
    return ppuVar14;
  case 0xff:
    in_CY = (uint)_DAT_11309baf0 <= uVar16;
    uVar21 = 4;
code_r0x0001048d1fdc:
    iVar20 = 2;
    if ((bool)in_CY) {
      iVar20 = (int)uVar21;
    }
    if (uVar16 >> 8 < 0xff) {
      iVar20 = 1;
    }
    in_CY = 0xf3 < param_3;
code_r0x0001048d1ff4:
    iVar8 = 0;
    if ((bool)in_CY) {
      iVar8 = iVar20;
    }
code_r0x0001048d1ff8:
    iVar11 = iVar8;
    if (0xf3 < param_2) {
      uVar17 = (param_2 - 0xf4 >> 8) + 1;
      uVar21 = (ulong)uVar17;
      *(byte *)ppuVar14 = (byte)(param_2 - 0xf4);
      if (iVar11 < 2) {
        if (iVar11 == 0) {
          return ppuVar14;
        }
        *(byte *)((long)ppuVar14 + 1) = (byte)uVar17;
        return ppuVar14;
      }
code_r0x0001048d2058:
      in_ZR = iVar11 == 2;
code_r0x0001048d205c:
      if (!(bool)in_ZR) {
        *(int *)((long)ppuVar14 + 1) = (int)uVar21;
code_r0x0001048d2078:
        return ppuVar14;
      }
code_r0x0001048d2060:
      *(short *)((long)ppuVar14 + 1) = (short)uVar21;
code_r0x0001048d2064:
      return ppuVar14;
    }
    in_OV = SBORROW4(iVar11,1);
    in_NG = iVar11 + -1 < 0;
    in_ZR = iVar11 == 1;
    iVar7 = iVar11;
code_r0x0001048d2004:
    iVar10 = iVar7;
    iVar18 = iVar10;
    if ((bool)in_ZR || in_NG != in_OV) {
code_r0x0001048d2008:
      if (iVar10 == 0) goto code_r0x0001048d2048;
code_r0x0001048d200c:
      *(byte *)((long)ppuVar14 + 1) = 0;
    }
    else {
code_r0x0001048d203c:
      in_ZR = iVar18 == 2;
code_r0x0001048d2040:
      if (!(bool)in_ZR) {
code_r0x0001048d2068:
        pbVar1 = (byte *)((long)ppuVar14 + 1);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        if (param_2 == 0) {
          return ppuVar14;
        }
        goto code_r0x0001048d204c;
      }
code_r0x0001048d2044:
      ((byte *)((long)ppuVar14 + 1))[0] = 0;
      ((byte *)((long)ppuVar14 + 1))[1] = 0;
code_r0x0001048d2048:
    }
    if (param_2 == 0) {
      return ppuVar14;
    }
code_r0x0001048d204c:
    *(byte *)ppuVar14 = (byte)param_2 + 0xc;
    return ppuVar14;
  }
  *(byte *)((long)ppuVar14 + _DAT_11309baf0) = (byte)param_1;
  *pppuVar19 = ppuVar14;
  pppuVar19[1] = ppuVar15;
  pppuVar13 = pppuVar19;
code_r0x0001048d1f1c:
  _objc_msgSendSuper2(pppuVar13,PTR_s_init_1125d9248);
  return (undefined1 **)pppuVar13;
}



/* Entry: 1048d1f3c; end: 1048d20a3;  */

int FUN_1048d1f3c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d1fb8;
        goto LAB_1048d1f9c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d1f9c:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_1048d1fb8:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d20a4; end: 1048d20e3;  */

void FUN_1048d20a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bb20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4574c;
  _swift_getWitnessTable(&UNK_10dd4574c,&UNK_1107b4a90);
  puRam000000011309bb20 = puVar1;
  return;
}



/* Entry: 1048d20e4; end: 1048d212b;  */

ulong FUN_1048d20e4(ulong param_1)

{
  if (0xc < param_1) {
    param_1 = 0xd;
  }
  return param_1;
}



/* Entry: 1048d212c; end: 1048d21cb;  */

void FUN_1048d212c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048d21cc; end: 1048d21ef;  */

void FUN_1048d21cc(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1048d21f0; end: 1048d220b; -[SCAttributedSIGTask description] */

void FUN_1048d21f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d220c; end: 1048d2253; -[SCAttributedSIGTask init] */

void FUN_1048d220c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSIGTaskWrapper.swift",0x2e,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d2254);
  (*pcVar1)();
}



/* Entry: 1048d2254; end: 1048d2257; -[SCAttributedSIGTask copyWithZone:] */

void FUN_1048d2254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d2258; end: 1048d2297; +[SCAttributedSIGTask demo] */

void FUN_1048d2258(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2298; end: 1048d22a3; -[SCAttributedSIGTask matchDemo:] */

void FUN_1048d2298(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001048d22a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d22a4; end: 1048d22f7;  */

void FUN_1048d22a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d22f8; end: 1048d23e7;  */

uint FUN_1048d22f8(uint *param_1,int param_2)

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



/* Entry: 1048d23e8; end: 1048d2427;  */

void FUN_1048d23e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bb58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4582c;
  _swift_getWitnessTable(&UNK_10dd4582c,&UNK_1107b4b78);
  puRam000000011309bb58 = puVar1;
  return;
}



/* Entry: 1048d2428; end: 1048d24fb;  */

void FUN_1048d2428(void)

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



/* Entry: 1048d24fc; end: 1048d251b;  */

void FUN_1048d24fc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d251c; end: 1048d2537; -[SCAttributedSafetyTask description] */

void FUN_1048d251c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2538; end: 1048d257f; -[SCAttributedSafetyTask init] */

void FUN_1048d2538(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSafetyTaskWrapper.swift",0x31,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d2580);
  (*pcVar1)();
}



/* Entry: 1048d2580; end: 1048d2583; -[SCAttributedSafetyTask copyWithZone:] */

void FUN_1048d2580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d2584; end: 1048d258b; +[SCAttributedSafetyTask convoSafetyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2584(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d258c; end: 1048d2593; +[SCAttributedSafetyTask tinsel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d258c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2594; end: 1048d259b; +[SCAttributedSafetyTask cos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2594(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d259c; end: 1048d25a3; +[SCAttributedSafetyTask caid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d259c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d25a4; end: 1048d25ab; +[SCAttributedSafetyTask securityConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d25a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d25ac; end: 1048d25b3; +[SCAttributedSafetyTask familyCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d25ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d25b4; end: 1048d25bb; +[SCAttributedSafetyTask complianceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d25b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d25bc; end: 1048d25c3; +[SCAttributedSafetyTask scw] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d25bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d25c4; end: 1048d25cb; +[SCAttributedSafetyTask fideliusUnauthenticated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d25c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d25cc; end: 1048d2723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code **** FUN_1048d25cc(code ****param_1,undefined1 *param_2,code ****param_3,undefined8 param_4,
                       code ****param_5,undefined8 param_6,code ****param_7,undefined1 *param_8,
                       code *param_9,ulong param_10,code *param_11,code ****param_12,code *param_13,
                       code *param_14,code *param_15,ulong param_16,code *param_17,
                       undefined4 param_18,undefined4 param_19,code *param_20,undefined4 param_21,
                       undefined4 param_22,code *param_23,undefined1 *param_24,code *param_25,
                       code ***param_26,code *param_27,code ****param_28,code *param_29,
                       undefined1 *param_30,code *param_31,undefined1 *param_32,code ****param_33,
                       code ****param_34)

{
  byte bVar1;
  bool in_CY;
  code ****ppppcVar2;
  code ****ppppcVar3;
  code ****ppppcVar4;
  undefined1 *puVar5;
  uint uVar6;
  code ****ppppcVar7;
  int iVar8;
  long unaff_x20;
  ulong in_stack_00000130;
  undefined1 auStack_100 [16];
  code *pcStack_f0;
  undefined1 auStack_e0 [16];
  code *pcStack_d0;
  undefined1 auStack_c0 [16];
  code *pcStack_b0;
  code ***pppcStack_a0;
  code ***pppcStack_98;
  code ***pppcStack_90;
  undefined1 *puStack_88;
  code ***pppcStack_80;
  undefined1 *puStack_78;
  code ***pppcStack_70;
  code **ppcStack_68;
  
  ppppcVar3 = &pppcStack_a0;
  bVar1 = *(byte *)(unaff_x20 + _DAT_11309bb60);
  ppppcVar2 = (code ****)&UNK_10dd458d0;
  puVar5 = (undefined1 *)(ulong)*(byte *)((code ****)(ulong)bVar1 + 0x21ba8b1a);
  ppppcVar4 = param_33;
  ppppcVar7 = param_12;
  pppcStack_a0 = (code ***)param_1;
  pppcStack_98 = (code ***)param_4;
  pppcStack_90 = (code ***)param_3;
  puStack_88 = (undefined1 *)param_6;
  pppcStack_80 = (code ***)param_5;
  puStack_78 = param_8;
  pppcStack_70 = (code ***)param_7;
  switch(bVar1) {
  default:
  case 0x6c:
  case 0x7a:
  case 0xb2:
  case 0xf2:
    param_12 = param_1;
code_r0x0001048d265c:
  case 0x18:
code_r0x0001048d26c4:
    (*(code *)param_12)();
    break;
  case 1:
    param_12 = param_3;
    goto code_r0x0001048d26c4;
  case 2:
  case 0x17:
    param_12 = param_5;
    goto code_r0x0001048d26c4;
  case 3:
  case 0x1d:
    param_12 = param_7;
    goto code_r0x0001048d26c4;
  case 4:
  case 0xd0:
  case 0xd8:
  case 0xe0:
  case 0xe8:
  case 0x19:
    (*param_9)();
    break;
  case 5:
    (*param_11)();
    break;
  case 6:
  case 0x9c:
    (*param_13)();
  case 0x84:
    break;
  case 7:
  case 0x16:
    (*param_15)();
  case 0x1a:
    break;
  case 8:
  case 0x81:
  case 0xb9:
  case 0xf9:
    (*param_17)();
    break;
  case 9:
  case 0x13:
    (*param_20)();
    break;
  case 10:
    (*param_23)();
    break;
  case 0xb:
  case 0x14:
  case 0xd4:
    (*param_25)();
code_r0x0001048d2674:
    break;
  case 0xc:
  case 0x12:
    (*param_27)();
  case 0x1f:
    break;
  case 0xd:
    (*param_29)();
    break;
  case 0xe:
  case 0x6a:
  case 0x92:
  case 0x94:
  case 0xca:
  case 0x1b:
  case 0xcc:
    (*param_31)();
code_r0x0001048d2668:
    break;
  case 0xf:
  case 0x15:
    (*(code *)param_33)();
  case 0xbc:
    break;
  case 0x10:
    break;
  case 0x1c:
    goto code_r0x0001048d2674;
  case 0x1e:
  case 0x5f:
  case 0x73:
  case 0x87:
  case 0x9b:
  case 0xa3:
  case 0xab:
  case 0xbf:
  case 0xd3:
  case 0xdb:
  case 0xe3:
  case 0xeb:
    goto code_r0x0001048d265c;
  case 0x20:
  case 0x40:
    goto code_r0x0001048d2758;
  case 0x21:
  case 0x22:
  case 0x27:
  case 0x2e:
  case 0x41:
  case 0x42:
  case 0x47:
  case 0x4e:
  case 0x57:
    goto code_r0x0001048d2824;
  case 0x23:
  case 0x43:
    goto code_r0x0001048d281c;
  case 0x24:
  case 0x44:
    goto code_r0x0001048d27f8;
  case 0x25:
  case 0x35:
  case 0x45:
  case 0x56:
    goto code_r0x0001048d27dc;
  case 0x26:
  case 0x46:
  case 0x55:
    goto code_r0x0001048d2828;
  case 0x28:
  case 0x2d:
  case 0x48:
  case 0x4d:
  case 0x5a:
    goto code_r0x0001048d27e8;
  case 0x29:
  case 0x49:
    goto code_r0x0001048d27e4;
  case 0x2a:
  case 0x4a:
  case 0x54:
    goto code_r0x0001048d27a0;
  case 0x2b:
  case 0x31:
  case 0x4b:
  case 0x51:
    goto code_r0x0001048d27d8;
  case 0x2c:
  case 0x4c:
    goto code_r0x0001048d27ec;
  case 0x2f:
  case 0x4f:
  case 0x58:
    goto code_r0x0001048d2838;
  case 0x30:
  case 0x50:
    goto code_r0x0001048d27a4;
  case 0x32:
  case 0x52:
    goto code_r0x0001048d2820;
  case 0x33:
  case 0x53:
    goto code_r0x0001048d2800;
  case 0x34:
    goto code_r0x0001048d2790;
  case 0x36:
    goto code_r0x0001048d27fc;
  case 0x37:
    goto code_r0x0001048d27e0;
  case 0x59:
  case 0x80:
    goto code_r0x0001048d2814;
  case 0x5c:
    goto code_r0x0001048d2768;
  case 0x5d:
  case 0x71:
  case 0x85:
  case 0x99:
  case 0xa1:
  case 0xa9:
  case 0xbd:
  case 0xd1:
  case 0xd9:
  case 0xe1:
  case 0xe9:
    goto code_r0x0001048d2a20;
  case 0x5e:
  case 0x72:
  case 0x86:
  case 0x9a:
  case 0xa2:
  case 0xaa:
  case 0xbe:
  case 0xd2:
  case 0xda:
  case 0xe2:
  case 0xea:
    _objc_allocWithZone();
    param_30 = (undefined1 *)(param_10 & 0xff);
    param_28 = (code ****)&UNK_10dd45000;
    param_12 = &pppcStack_a0;
  case 0x62:
  case 0x8a:
  case 0xc2:
    param_28 = param_28 + 0x11c;
code_r0x0001048d290c:
                    /* WARNING: Could not recover jumptable at 0x0001048d2918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((long)param_28 + (long)param_30) * 4 + 0x1048d291c))(param_12);
    return param_33;
  case 0x60:
    goto code_r0x0001048d29d4;
  case 0x61:
  case 0x89:
  case 0xc1:
    return (code ****)0x0;
  case 0x70:
  case 0x9d:
    pppcStack_90 = (code ***)&UNK_10dd458d0;
    param_16 = param_10;
    param_14 = param_9;
    pppcStack_70 = (code ***)(ulong)bVar1;
code_r0x0001048d2758:
    pcStack_b0 = param_11;
    pcStack_d0 = param_9;
    in_stack_00000130 = param_16;
    pcStack_f0 = param_14;
code_r0x0001048d2768:
    _objc_retain();
    param_34 = param_33;
code_r0x0001048d2790:
code_r0x0001048d27a0:
code_r0x0001048d27a4:
code_r0x0001048d27d4:
code_r0x0001048d27d8:
code_r0x0001048d27dc:
code_r0x0001048d27e0:
    param_26 = (code ***)&stack0x00000120;
code_r0x0001048d27e4:
code_r0x0001048d27e8:
code_r0x0001048d27ec:
    param_32 = auStack_100;
    param_24 = auStack_e0;
code_r0x0001048d27f8:
code_r0x0001048d27fc:
code_r0x0001048d2800:
    param_30 = auStack_c0;
    param_2 = &stack0xffffffffffffffc0;
code_r0x0001048d2814:
    puVar5 = &stack0xffffffffffffffa0;
code_r0x0001048d281c:
    ppppcVar2 = &pppcStack_80;
code_r0x0001048d2820:
code_r0x0001048d2824:
code_r0x0001048d2828:
    ppppcVar7 = (code ****)0x1048d2b94;
    param_28 = (code ****)0x1048d2000;
code_r0x0001048d2838:
    param_28 = param_28 + 0x172;
    param_12 = (code ****)0x1048d2000;
    pppcStack_70 = (code ***)ppppcVar7;
    ppcStack_68 = (code **)param_26;
code_r0x0001048d2844:
    param_12 = (code ****)((long)param_12 + 0xb8c);
    param_26 = (code ***)0x1048d2b88;
    pppcStack_80 = (code ***)param_28;
    puStack_78 = param_32;
code_r0x0001048d2854:
    pppcStack_a0 = param_26;
    pppcStack_98 = (code ***)param_30;
    pppcStack_90 = (code ***)param_12;
    puStack_88 = param_24;
    FUN_1048d25cc(0x1048d2b74,param_2,0x1048d2b7c,puVar5,0x1048d2b80,ppppcVar2,0x1048d2b84,
                  &pppcStack_a0);
    _objc_release(param_34);
    return param_34;
  case 0x74:
    ppppcVar4 = (code ****)&stack0xffffffffffffffd0;
    goto code_r0x0001048d2990;
  case 0x75:
  case 0xa5:
  case 0xad:
    goto code_r0x0001048d2980;
  case 0x76:
  case 0x88:
  case 0xa6:
  case 0xae:
  case 0xb8:
  case 0xde:
  case 0xe4:
  case 0xe6:
  case 0xee:
    ppppcVar4 = (code ****)&stack0xffffffffffffffa0;
    goto code_r0x0001048d2990;
  case 0x77:
  case 0xa7:
  case 0xaf:
  case 0xdf:
  case 0xe7:
  case 0xef:
    goto code_r0x0001048d2a2c;
  case 0x82:
  case 0xba:
  case 0xfa:
    ppppcVar2 = param_34;
    _swift_getObjectType();
    pppcStack_a0 = (code ***)param_34;
    pppcStack_98 = (code ***)ppppcVar2;
    _objc_msgSendSuper2(&pppcStack_a0,PTR_s_dealloc_112525b20);
    return ppppcVar3;
  case 0x83:
  case 0xbb:
  case 0xfb:
    goto code_r0x0001048d2668;
  case 0x98:
  case 0xa0:
  case 0xa8:
    goto code_r0x0001048d26d8;
  case 0x9e:
    goto code_r0x0001048d290c;
  case 0xa4:
    goto code_r0x0001048d27d4;
  case 0xac:
  case 0xc0:
    goto code_r0x0001048d2854;
  case 0xd5:
    if (!in_CY) goto LAB_1048d2a38;
    uVar6 = (int)param_2 + 0xf;
    param_12 = (code ****)(ulong)uVar6;
    in_CY = 0xfffeff < uVar6;
code_r0x0001048d29d4:
    iVar8 = 2;
    if (in_CY) {
      iVar8 = 4;
    }
    if (((uint)((ulong)param_12 >> 8) & 0xffffff) < 0xff) {
      iVar8 = 1;
    }
    if (iVar8 == 4) {
      uVar6 = *(uint *)((long)param_33 + 1);
      param_12 = (code ****)(ulong)uVar6;
joined_r0x0001048d2a18:
      if (uVar6 == 0) {
LAB_1048d2a38:
        iVar8 = *(byte *)param_33 - 0x10;
        if (*(byte *)param_33 < 0x10) {
          iVar8 = -1;
        }
        return (code ****)(ulong)(iVar8 + 1);
      }
    }
    else {
      if (iVar8 != 2) {
        param_12 = (code ****)(ulong)*(byte *)((long)param_33 + 1);
code_r0x0001048d2a34:
        uVar6 = (uint)param_12;
        goto joined_r0x0001048d2a18;
      }
      param_12 = (code ****)(ulong)*(ushort *)((long)param_33 + 1);
      if (*(ushort *)((long)param_33 + 1) == 0) goto LAB_1048d2a38;
    }
    param_32 = (undefined1 *)(ulong)*(byte *)param_33;
code_r0x0001048d2a20:
    param_33 = (code ****)(ulong)(((uint)param_32 | (int)param_12 << 8) - 0xf);
code_r0x0001048d2a2c:
    return param_33;
  case 0xd6:
    ppppcVar4 = &pppcStack_90;
    goto code_r0x0001048d2990;
  case 0xdc:
    goto code_r0x0001048d2844;
  case 0xdd:
  case 0xe5:
  case 0xed:
    param_12 = (code ****)&stack0xffffffffffffffc0;
code_r0x0001048d2980:
    ppppcVar4 = param_12;
code_r0x0001048d2990:
    *(char *)((long)param_33 + (long)param_32) = (char)param_10;
    *ppppcVar4 = (code ***)param_33;
    ppppcVar4[1] = (code ***)param_34;
    _objc_msgSendSuper2(ppppcVar4,PTR_s_init_1125d9248);
code_r0x0001048d29b4:
    return ppppcVar4;
  case 0xec:
    goto code_r0x0001048d29b4;
  case 0xf8:
    goto code_r0x0001048d2a34;
  }
code_r0x0001048d26d8:
  return param_33;
}



/* Entry: 1048d2724; end: 1048d289b; -[SCAttributedSafetyTask matchConvoSafetyPrompt:userSessionValidation:tinsel:cos:caid:securityConfigs:familyCenter:complianceEngine:scw:fideliusTweaks:fideliusNotificationProcessor:fideliusUnauthenticated:snapTokenTweaks:securityDuplex:tivNotification:hermodDuplex:] */

void FUN_1048d2724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1048d25cc(0x1048d2b74,auStack_40,0x1048d2b7c,auStack_60,0x1048d2b80,auStack_80,0x1048d2b84,
                auStack_a0,0x1048d2b88,auStack_c0,0x1048d2b8c,auStack_e0,0x1048d2b90,auStack_100,
                0x1048d2b94,auStack_120,0x1048d2b98,auStack_140,0x1048d2b9c,auStack_160,0x1048d2ba0,
                auStack_180,0x1048d2ba4,auStack_1a0,0x1048d2ba8,auStack_1c0,0x1048d2bac,auStack_1e0,
                0x1048d2bb0,auStack_200,0x1048d2bb4,auStack_220);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d289c; end: 1048d28cf;  */

void FUN_1048d289c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d28d0; end: 1048d29bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1048d28d0(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte **ppbVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulong uVar28;
  byte abStack_130 [8];
  byte *pbStack_128;
  byte abStack_120 [16];
  byte abStack_110 [8];
  long lStack_108;
  byte abStack_100 [16];
  byte abStack_f0 [16];
  byte abStack_e0 [16];
  byte abStack_d0 [16];
  byte abStack_c0 [16];
  byte abStack_b0 [16];
  byte abStack_a0 [16];
  byte abStack_90 [16];
  byte abStack_80 [16];
  byte abStack_70 [16];
  byte abStack_60 [16];
  byte abStack_50 [16];
  byte abStack_40 [16];
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar27;
  
  pbVar19 = abStack_130;
  uVar25 = (uint)abStack_130;
  uVar23 = (uint)abStack_130;
  uVar14 = (uint)abStack_130;
  uVar11 = (uint)abStack_130;
  uVar12 = (uint)abStack_130;
  iVar16 = (int)abStack_130;
  iVar15 = (int)abStack_130;
  iVar13 = (int)abStack_130;
  pbVar17 = param_1;
  func_0x000100933ae0();
  pbVar21 = pbVar17;
  _objc_allocWithZone();
  uVar28 = (ulong)param_1 & 0xff;
  pbVar22 = abStack_130;
  pbVar18 = abStack_130;
  pbVar2 = abStack_130;
  pbVar3 = abStack_130;
  pbVar4 = abStack_130;
  pbVar5 = abStack_130;
  pbVar6 = abStack_130;
  pbVar7 = abStack_130;
  uVar27 = _DAT_11309bb60;
  iVar26 = (int)abStack_130;
  iVar8 = (int)abStack_130;
  iVar9 = (int)abStack_130;
  iVar24 = (int)abStack_130;
  switch(uVar28) {
  case 0:
    break;
  default:
    pbVar7 = abStack_120;
  case 0x5c:
  case 0x6a:
  case 0xa2:
  case 0xe2:
    pbVar19 = pbVar7;
    break;
  case 2:
    pbVar19 = abStack_110;
    break;
  case 3:
    pbVar19 = abStack_100;
    break;
  case 4:
    pbVar4 = abStack_f0;
  case 0xc4:
    pbVar19 = pbVar4;
    break;
  case 5:
    pbVar2 = abStack_e0;
  case 0xac:
    pbVar19 = pbVar2;
    break;
  case 6:
    pbVar19 = abStack_d0;
    break;
  case 7:
    pbVar19 = abStack_c0;
    break;
  case 8:
    pbVar19 = abStack_b0;
    break;
  case 9:
    pbVar19 = abStack_a0;
    break;
  case 10:
    pbVar19 = abStack_90;
    break;
  case 0xb:
  case 0xbc:
    pbVar5 = abStack_80;
  case 0x73:
  case 0xab:
  case 0xeb:
    pbVar19 = pbVar5;
    break;
  case 0xc:
    pbVar3 = abStack_70;
  case 0xc0:
  case 200:
  case 0xd0:
  case 0xd8:
    pbVar19 = pbVar3;
    break;
  case 0xd:
    pbVar19 = abStack_60;
    break;
  case 0xe:
  case 0x4f:
  case 99:
  case 0x77:
  case 0x8b:
  case 0x93:
  case 0x9b:
  case 0xaf:
  case 0xc3:
  case 0xcb:
  case 0xd3:
  case 0xdb:
    pbVar6 = abStack_50;
  case 0x5a:
  case 0x82:
  case 0x84:
  case 0xba:
    pbVar19 = pbVar6;
    break;
  case 0xf:
    pbVar19 = abStack_40;
    break;
  case 0x10:
  case 0x30:
  case 0xf0:
    goto code_r0x0001048d2a20;
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
    goto code_r0x0001048d2aec;
  case 0x13:
  case 0x33:
  case 0xf3:
  case 0xfb:
    goto code_r0x0001048d2ae4;
  case 0x14:
  case 0x34:
  case 0xf4:
  case 0xfe:
    goto code_r0x0001048d2ac0;
  case 0x15:
  case 0x25:
  case 0x35:
  case 0x46:
  case 0xf5:
    goto code_r0x0001048d2aa4;
  case 0x16:
  case 0x36:
  case 0x45:
  case 0xf6:
    goto code_r0x0001048d2af0;
  case 0x18:
  case 0x1d:
  case 0x38:
  case 0x3d:
  case 0x4a:
  case 0xf8:
    goto code_r0x0001048d2ab0;
  case 0x19:
  case 0x39:
  case 0xf9:
    goto code_r0x0001048d2aac;
  case 0x1a:
  case 0x3a:
  case 0x44:
    goto code_r0x0001048d2a68;
  case 0x1b:
  case 0x21:
  case 0x3b:
  case 0x41:
    goto code_r0x0001048d2aa0;
  case 0x1c:
  case 0x3c:
  case 0xfd:
    goto code_r0x0001048d2ab4;
  case 0x1f:
  case 0x3f:
  case 0x48:
    return pbVar21;
  case 0x20:
  case 0x40:
    goto code_r0x0001048d2a6c;
  case 0x22:
  case 0x42:
    goto code_r0x0001048d2ae8;
  case 0x23:
  case 0x43:
    goto code_r0x0001048d2ac8;
  case 0x24:
    uVar27 = 4;
  case 0xfa:
    uVar25 = 2;
    if ((bool)in_CY) {
      uVar25 = (uint)uVar27;
    }
    uVar27 = (ulong)uVar25;
    uVar12 = (uint)abStack_130 >> 8;
code_r0x0001048d2a68:
    in_CY = 0xfe < uVar12;
code_r0x0001048d2a6c:
    iVar26 = (int)uVar27;
    if (!(bool)in_CY) {
      iVar26 = 1;
    }
    iVar24 = 0;
    if (0xf0 < param_3) {
      iVar24 = iVar26;
    }
    if (0xf0 < param_2) {
      uVar28 = (ulong)(param_2 - 0xf1);
code_r0x0001048d2a9c:
      iVar16 = iVar24;
      uVar27 = uVar28 >> 8;
code_r0x0001048d2aa0:
      uVar27 = (ulong)((int)uVar27 + 1);
      iVar9 = iVar16;
code_r0x0001048d2aa4:
      iVar15 = iVar9;
      *pbVar21 = (byte)uVar28;
code_r0x0001048d2aa8:
      in_OV = SBORROW4(iVar15,1);
      in_NG = iVar15 + -1 < 0;
      in_ZR = iVar15 == 1;
      iVar8 = iVar15;
code_r0x0001048d2aac:
      iVar13 = iVar8;
      iVar26 = iVar13;
      if (!(bool)in_ZR && in_NG == in_OV) {
code_r0x0001048d2ad8:
        in_ZR = iVar26 == 2;
code_r0x0001048d2adc:
        if (!(bool)in_ZR) {
          *(int *)(pbVar21 + 1) = (int)uVar27;
          return pbVar21;
        }
        *(short *)(pbVar21 + 1) = (short)uVar27;
code_r0x0001048d2ae4:
        return pbVar21;
      }
code_r0x0001048d2ab0:
      if (iVar13 == 0) {
        return pbVar21;
      }
code_r0x0001048d2ab4:
      pbVar21[1] = (byte)uVar27;
      return pbVar21;
    }
    if (iVar24 < 2) {
      if (iVar24 == 0) goto code_r0x0001048d2ac8;
      pbVar21[1] = 0;
    }
    else {
      in_ZR = iVar24 == 2;
code_r0x0001048d2ac0:
      if (!(bool)in_ZR) {
code_r0x0001048d2ae8:
        pbVar21[1] = 0;
        pbVar21[2] = 0;
        pbVar21[3] = 0;
        pbVar21[4] = 0;
code_r0x0001048d2aec:
        if (param_2 == 0) {
          return pbVar21;
        }
        goto code_r0x0001048d2acc;
      }
code_r0x0001048d2ac4:
      pbVar21[1] = 0;
      pbVar21[2] = 0;
code_r0x0001048d2ac8:
    }
    if (param_2 == 0) {
code_r0x0001048d2af0:
      return pbVar21;
    }
code_r0x0001048d2acc:
    *pbVar21 = (char)param_2 + 0xf;
    return pbVar21;
  case 0x26:
    goto code_r0x0001048d2ac4;
  case 0x27:
    goto code_r0x0001048d2aa8;
  case 0x49:
  case 0x70:
    goto code_r0x0001048d2adc;
  case 0x4c:
    goto LAB_1048d2a30;
  case 0x4d:
  case 0x61:
  case 0x75:
  case 0x89:
  case 0x91:
  case 0x99:
  case 0xad:
  case 0xc1:
  case 0xc9:
  case 0xd1:
  case 0xd9:
    goto code_r0x0001048d2ce8;
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
    pbVar19 = *(byte **)(pbVar17 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pbVar19 + 0x10))();
    return pbVar19;
  case 0x50:
    goto code_r0x0001048d2c9c;
  case 0x51:
  case 0x79:
  case 0xb1:
    goto code_r0x0001048d2cd0;
  case 0x52:
  case 0x7a:
  case 0xb2:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return pbVar21;
  case 0x60:
    goto code_r0x0001048d2a00;
  case 100:
    __ss6HasherVABycfC(&pbStack_128);
    pbVar21 = (byte *)(ulong)pbVar21[(long)_DAT_11309bba8];
  case 0xcd:
  case 0xd5:
  case 0xdd:
code_r0x0001048d2c48:
    __ss6HasherV8_combineyySuF();
code_r0x0001048d2c4c:
    __ss6HasherV8finalizeSiyF();
    return pbVar21;
  case 0x65:
  case 0x95:
  case 0x9d:
    goto code_r0x0001048d2c48;
  case 0x66:
  case 0x78:
  case 0x96:
  case 0x9e:
  case 0xa8:
  case 0xce:
  case 0xd4:
  case 0xd6:
  case 0xde:
    goto code_r0x0001048d2bfc;
  case 0x67:
  case 0x97:
  case 0x9f:
  case 0xcf:
  case 0xd7:
  case 0xdf:
    goto code_r0x0001048d2cf4;
  case 0x71:
  case 0xa9:
  case 0xe9:
    goto code_r0x0001048d29e4;
  case 0x72:
  case 0xaa:
  case 0xea:
    return pbVar21;
  case 0x74:
    goto code_r0x0001048d29d0;
  case 0x88:
  case 0x90:
  case 0x98:
    goto code_r0x0001048d29a0;
  case 0x8c:
    uVar25 = param_2 + 0xf;
    uVar27 = 0xffff00;
code_r0x0001048d29d0:
    uVar23 = 2;
    if ((uint)uVar27 <= uVar25) {
      uVar23 = 4;
    }
    uVar27 = (ulong)uVar23;
    uVar23 = uVar25 >> 8;
code_r0x0001048d29e4:
    iVar24 = (int)uVar27;
    if (uVar23 < 0xff) {
      iVar24 = 1;
    }
    if (iVar24 == 4) {
      uVar11 = *(uint *)(pbVar21 + 1);
joined_r0x0001048d2a18:
      if (uVar11 == 0) {
LAB_1048d2a38:
        iVar24 = *pbVar21 - 0x10;
        if (*pbVar21 < 0x10) {
          iVar24 = -1;
        }
        return (byte *)(ulong)(iVar24 + 1);
      }
    }
    else {
      if (iVar24 == 2) {
        uVar14 = (uint)*(ushort *)(pbVar21 + 1);
code_r0x0001048d2a00:
        uVar11 = uVar14;
        goto joined_r0x0001048d2a18;
      }
LAB_1048d2a30:
      uVar11 = (uint)pbVar21[1];
      if (pbVar21[1] == 0) goto LAB_1048d2a38;
    }
    uVar27 = (ulong)*pbVar21;
code_r0x0001048d2a20:
    return (byte *)(ulong)(((uint)uVar27 | uVar11 << 8) - 0xf);
  case 0x8d:
    return (byte *)(ulong)((uint)abStack_130 + 1);
  case 0x8e:
code_r0x0001048d2bfc:
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF();
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1048d2c1c);
    (*pcVar10)();
  case 0x94:
    goto code_r0x0001048d2a9c;
  case 0x9c:
  case 0xb0:
    return pbVar21;
  case 0xc5:
    goto code_r0x0001048d2c8c;
  case 0xc6:
    goto code_r0x0001048d2c4c;
  case 0xcc:
    return pbVar21;
  case 0xdc:
    param_1 = pbVar17;
    _swift_getObjectType(pbVar17);
code_r0x0001048d2c8c:
    func_0x000100672b50();
    if (lStack_108 == 0) {
code_r0x0001048d2ce8:
      func_0x00010006e7f4();
LAB_1048d2cec:
      pbVar21 = (byte *)0x0;
    }
    else {
code_r0x0001048d2c9c:
      ppbVar20 = &pbStack_128;
      _swift_dynamicCast(ppbVar20,abStack_120,PTR___sypN_11034f1a8 + 8,param_1,6);
      if (((ulong)ppbVar20 & 1) == 0) goto LAB_1048d2cec;
      param_1 = (byte *)(ulong)pbVar17[(long)_DAT_11309bba8];
      pbVar21 = pbStack_128;
      pbVar22 = _DAT_11309bba8;
code_r0x0001048d2cd0:
      bVar1 = pbVar21[(long)pbVar22];
      _objc_release();
      pbVar21 = (byte *)(ulong)((uint)param_1 == (uint)bVar1);
    }
code_r0x0001048d2cf4:
code_r0x0001048d2cfc:
    return pbVar21;
  case 0xe8:
    goto code_r0x0001048d2cfc;
  case 0xfc:
    goto code_r0x0001048d2ad8;
  case 0xff:
    goto code_r0x0001048d2acc;
  }
  pbVar21[_DAT_11309bb60] = (byte)param_1;
  *(byte **)pbVar19 = pbVar21;
  *(byte **)(pbVar19 + 8) = pbVar17;
  pbVar18 = pbVar19;
code_r0x0001048d29a0:
  _objc_msgSendSuper2(pbVar18);
  return pbVar18;
}



/* Entry: 1048d29bc; end: 1048d2b23;  */

int FUN_1048d29bc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d2a38;
        goto LAB_1048d2a1c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d2a1c:
      return ((uint)*param_1 | uVar1 << 8) - 0xf;
    }
  }
LAB_1048d2a38:
  iVar2 = *param_1 - 0x10;
  if (*param_1 < 0x10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d2b24; end: 1048d2b63;  */

void FUN_1048d2b24(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4592c;
  _swift_getWitnessTable(&UNK_10dd4592c,&UNK_1107b4c60);
  puRam000000011309bb90 = puVar1;
  return;
}



/* Entry: 1048d2b64; end: 1048d2bb7;  */

ulong FUN_1048d2b64(ulong param_1)

{
  if (0xf < param_1) {
    param_1 = 0x10;
  }
  return param_1;
}



/* Entry: 1048d2bb8; end: 1048d2bd3; -[SCAttributedProfileHeaderButtonSubtask description] */

void FUN_1048d2bb8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2bd4; end: 1048d2c1b; -[SCAttributedProfileHeaderButtonSubtask init] */

void FUN_1048d2bd4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSHUTaskWrapper.swift",0x2e,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d2c1c);
  (*pcVar1)();
}



/* Entry: 1048d2c1c; end: 1048d2c63; -[SCAttributedProfileHeaderButtonSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2c1c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309bba8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048d2c64; end: 1048d2d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048d2c64(undefined8 param_1)

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
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11309bba8);
      cVar2 = *(char *)(lStack_58 + _DAT_11309bba8);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048d2d04; end: 1048d2d83; -[SCAttributedProfileHeaderButtonSubtask isEqual:] */

uint FUN_1048d2d04(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048d2c64(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048d2d84; end: 1048d2d8b; +[SCAttributedProfileHeaderButtonSubtask reloadBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2d84(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bba8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2d8c; end: 1048d2d93; +[SCAttributedProfileHeaderButtonSubtask bitmojiBadgeReload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2d8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bba8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2d94; end: 1048d2dbf; -[SCAttributedProfileHeaderButtonSubtask matchReloadBadge:fetchIcon:bitmojiBadgeReload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2d94(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309bba8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309bba8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d2dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d2dc0; end: 1048d2e43;  */

void FUN_1048d2dc0(void)

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



/* Entry: 1048d2e44; end: 1048d2e83; -[SCAttributedSHUTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2e44(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11309bb98) == '\0') && (*(long *)(param_1 + _DAT_11309bba0) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d2e84);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2e84; end: 1048d2ecb; -[SCAttributedSHUTask init] */

void FUN_1048d2e84(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSHUTaskWrapper.swift",0x2e,2,0xa4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d2ecc);
  (*pcVar1)();
}



/* Entry: 1048d2ecc; end: 1048d2ed3; +[SCAttributedSHUTask settings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2ecc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb98) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309bba0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d2ed4; end: 1048d2f27; -[SCAttributedSHUTask matchProfileHeaderButton:navigationServicePreload:settings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2ed4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11309bb98) == '\0') {
    if (*(long *)(param_1 + _DAT_11309bba0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048d2f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d2f24);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_11309bb98) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048d2ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d2f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1048d2f28; end: 1048d2f5b;  */

void FUN_1048d2f28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d2f5c; end: 1048d2fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2f5c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  FUN_1048d3070();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11309bba8) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d2fcc; end: 1048d306f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d2fcc(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long alStack_60 [2];
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar3 = alStack_60;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 == 3) {
    lVar4 = 0;
    plVar3 = alStack_50;
    uVar5 = 1;
  }
  else if (uVar1 == 4) {
    plVar3 = alStack_40;
    uVar5 = 2;
    lVar4 = 0;
  }
  else {
    FUN_1048d2f5c();
    uVar5 = 0;
    lVar4 = param_1;
  }
  func_0x0001048d3090();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bb98) = uVar5;
  *(long *)(lVar2 + _DAT_11309bba0) = lVar4;
  *plVar3 = lVar2;
  plVar3[1] = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d3070; end: 1048d30af;  */

void FUN_1048d3070(void)

{
  _objc_opt_self(&PTR_PTR_1129e2e60);
  return;
}



/* Entry: 1048d30b0; end: 1048d321b;  */

void FUN_1048d30b0(void)

{
  return;
}



/* Entry: 1048d321c; end: 1048d325b;  */

void FUN_1048d321c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45a6c;
  _swift_getWitnessTable(&UNK_10dd45a6c,&UNK_1107b4dd8);
  puRam000000011309bc00 = puVar1;
  return;
}



/* Entry: 1048d325c; end: 1048d325f;  */

void FUN_1048d325c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bc08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45b0c;
  _swift_getWitnessTable(&UNK_10dd45b0c,&UNK_1107b4d48);
  puRam000000011309bc08 = puVar1;
  return;
}



/* Entry: 1048d3260; end: 1048d329f;  */

void FUN_1048d3260(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bc08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45b0c;
  _swift_getWitnessTable(&UNK_10dd45b0c,&UNK_1107b4d48);
  puRam000000011309bc08 = puVar1;
  return;
}



/* Entry: 1048d32a0; end: 1048d32e7;  */

void FUN_1048d32a0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d32e8; end: 1048d32eb; -[SCAttributedProfileHeaderButtonSubtask copyWithZone:] */

void FUN_1048d32e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d32ec; end: 1048d32fb; -[SCAttributedSHUTask copyWithZone:] */

void FUN_1048d32ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d32fc; end: 1048d3323;  */

void FUN_1048d32fc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048d3fb0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048d3324; end: 1048d333f; -[SCAttributedSendToRankingRecentsSubTask description] */

void FUN_1048d3324(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3340; end: 1048d3387; -[SCAttributedSendToRankingRecentsSubTask init] */

void FUN_1048d3340(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSharingTaskWrapper.swift",0x32,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d3388);
  (*pcVar1)();
}



/* Entry: 1048d3388; end: 1048d33cf; -[SCAttributedSendToRankingRecentsSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3388(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309bc10));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048d33d0; end: 1048d346f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048d33d0(undefined8 param_1)

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
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11309bc10);
      cVar2 = *(char *)(lStack_58 + _DAT_11309bc10);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048d3470; end: 1048d34ef; -[SCAttributedSendToRankingRecentsSubTask isEqual:] */

uint FUN_1048d3470(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048d33d0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048d34f0; end: 1048d34f7; +[SCAttributedSendToRankingRecentsSubTask modelSyncJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d34f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d34f8; end: 1048d34ff; +[SCAttributedSendToRankingRecentsSubTask featureSyncJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d34f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3500; end: 1048d3507; +[SCAttributedSendToRankingRecentsSubTask contextualFeaturesSyncJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3500(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3508; end: 1048d350f; +[SCAttributedSendToRankingRecentsSubTask preload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3508(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3510; end: 1048d3517; +[SCAttributedSendToRankingRecentsSubTask rankRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3510(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3518; end: 1048d351f; +[SCAttributedSendToRankingRecentsSubTask concurrentScoring] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3518(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


