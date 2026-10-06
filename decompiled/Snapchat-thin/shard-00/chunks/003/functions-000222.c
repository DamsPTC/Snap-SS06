/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005088f0; end: 100508a33; -[SCMapNotificationPresenter initWithBitmojiAvatarProvider:bitmojiImageFetcher:notificationManager:notificationProvider:mapUKUnder18ComplianceChecker:locationSharingPreferencesProvider:] */

undefined1 *
FUN_1005088f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126edfb0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100508a34; end: 100508a43; -[_TtC19SCMapPeopleServices19SCMapPeopleServices mapPeopleFriendsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100508a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd5d8));
  return;
}



/* Entry: 100508a44; end: 100508e6f; -[SCStreamingLocationSharingPreferencesProvider initWithUserPreferences:applicationPreferences:dataManager:mapUserPreferences:notificationPresenter:blizzardLogger:lazyFeatureSettingsService:userContext:mapPeopleFriendsProvider:locationPermissionsManager:currentUserId:circumstanceEngine:applicationLifecycleEvents:mapUKUnder18ComplianceChecker:] */

undefined8 *
FUN_100508a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_70 = PTR_PTR_1126edfc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar6 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar6);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar6 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_5);
    uVar6 = puVar1[0xc];
    puVar1[0xc] = param_5;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_3);
    uVar6 = puVar1[0xd];
    puVar1[0xd] = param_3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = puVar1[0xe];
    puVar1[0xe] = param_4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_7);
    uVar6 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_8);
    uVar6 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_9);
    uVar6 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_11);
    uVar6 = puVar1[7];
    puVar1[7] = param_11;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_12);
    uVar6 = puVar1[8];
    puVar1[8] = param_12;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_13);
    uVar6 = puVar1[10];
    puVar1[10] = param_13;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_6);
    uVar6 = puVar1[9];
    puVar1[9] = param_6;
    func_0x000107c61170(uVar6);
    puVar2 = PTR_PTR_1126c5e68;
    func_0x000107c610f4();
    func_0x000107c475f4();
    uVar6 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c53fcc(puVar1[3]);
    func_0x000107c61174(param_14);
    uVar6 = puVar1[0x11];
    puVar1[0x11] = param_14;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_16);
    uVar6 = puVar1[0xb];
    puVar1[0xb] = param_16;
    func_0x000107c61170(uVar6);
    puVar1[0xf] = 0x3ff0000000000000;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    uVar6 = param_14;
    func_0x000107c4980c();
    *(int *)((long)puVar1 + 0x84) = (int)uVar6;
    puVar3 = puVar1;
    func_0x000107c3b7f8(puVar1);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4b8d4();
    func_0x000107c61180();
    func_0x000107c57678(puVar1);
    func_0x000107c61170(puVar4);
    puVar4 = puVar1;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000107c55000(puVar1);
      func_0x000107c3bf40(puVar1);
    }
    uVar5 = param_10;
    func_0x000107c4a350();
    if ((uVar5 & 1) == 0) {
      puVar4 = puVar1;
      func_0x000107c4ec80(puVar1);
      func_0x000107c61180();
      func_0x000107c3c530(puVar1);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100508e70; end: 1005090bb; -[SCMapGhostModeTimerController initWithMapUserPreferences:notificationPresenter:applicationLifecycleEvents:] */

undefined8 *
FUN_100508e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1126edfa8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c42384(puVar1[1]);
    func_0x000107c54b24(puVar1);
    puVar1[6] = 0x4014000000000000;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_68,puVar1);
    uVar2 = param_5;
    func_0x000107c5e370(param_5);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c42b70(puVar1);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005090bc; end: 1005090cb; -[SCMapUserPreferencesImpl durationOfGhostMode] */

void FUN_1005090bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_doubleForKey__1125bfa80,
             &PTR____CFConstantStringClassReference_110e07b98);
  return;
}



/* Entry: 1005090cc; end: 1005091af; -[SCPreferences doubleForKey:] */

undefined8 FUN_1005090cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  func_0x000107c6115c(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar1 == 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61158(puVar2);
    uVar4 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    uVar3 = param_2;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_2);
    if (uVar3 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c4223c(param_2);
    }
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c4223c(param_2);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1005091b0; end: 1005091b7; -[SCMapGhostModeTimerController setForceSync:] */

void FUN_1005091b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1005091b8; end: 10050920f; -[SCMapGhostModeTimerController exitGhostModeIfTimerExpired] */

void FUN_1005091b8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x100509224;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 100509210; end: 10050922b; -[SCMapGhostModeTimerController setDelegate:] */

void FUN_100509210(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10050922c; end: 100509307; -[SCMapGhostModeTimerController _exitGhostModeIfTimerExpired] */

void FUN_10050922c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x000107c4d560();
  if ((int)uVar1 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c4168c(param_1);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c443d4(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}



/* Entry: 100509308; end: 10050938f; -[SCMapGhostModeTimerController needsSync] */

bool FUN_100509308(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = param_2;
  func_0x000107c43810();
  if ((uVar2 & 1) == 0) {
    func_0x000107c5c9e8(*(undefined8 *)(param_2 + 8));
    dVar3 = param_1;
    func_0x000107c42384(*(undefined8 *)(param_2 + 8));
    bVar1 = false;
    if ((0.0 < param_1) && (0.0 < dVar3)) {
      dVar4 = dVar3;
      func_0x000107c40f00(*(undefined8 *)(param_2 + 0x18));
      dVar5 = dVar4;
      func_0x000107c5c9e8(*(undefined8 *)(param_2 + 8));
      bVar1 = dVar3 < dVar4 - dVar5;
      if (dVar4 - dVar5 < 0.0) {
        bVar1 = true;
      }
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 100509390; end: 10050939b; -[SCMapGhostModeTimerController forceSync] */

byte FUN_100509390(long param_1)

{
  return *(byte *)(param_1 + 0x48) & 1;
}



/* Entry: 10050939c; end: 1005093ab; -[SCMapUserPreferencesImpl timeIntervalSinceBootWhenGhostModeWasEntered] */

void FUN_10050939c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_doubleForKey__1125bfa80,
             &PTR____CFConstantStringClassReference_110e07b78);
  return;
}



/* Entry: 1005093ac; end: 100509437; -[SCStreamingLocationSharingPreferencesProvider _getCachedPreferencesObject] */

void FUN_1005093ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100509438; end: 10050973f; -[SCMapNotificationServiceProvider _locationPrivacyReminderNotificationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100509438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126cd7f8;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11274f654;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11274f658;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c4ec94();
  func_0x000107c61180();
  lVar25 = (long)_DAT_11274f660;
  lVar6 = param_1 + lVar25;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c3de14();
  func_0x000107c61180();
  lVar25 = param_1 + lVar25;
  func_0x000107c61148();
  lVar8 = lVar25;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar26 = (long)_DAT_11274f664;
  lVar9 = param_1 + lVar26;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar26 = param_1 + lVar26;
  func_0x000107c61148();
  lVar11 = lVar26;
  func_0x000107c45070();
  func_0x000107c61180();
  lVar12 = param_1 + _DAT_11274f668;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c4c440();
  func_0x000107c61180();
  lVar14 = param_1 + _DAT_11274f678;
  func_0x000107c61148();
  lVar15 = lVar14;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_11274f67c;
  func_0x000107c61148();
  lVar17 = lVar16;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar18 = param_1 + _DAT_11274f680;
  func_0x000107c61148();
  lVar19 = lVar18;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  lVar20 = param_1 + _DAT_11274f670;
  func_0x000107c61148();
  lVar21 = lVar20;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar22 = param_1 + _DAT_11274f684;
  func_0x000107c61148();
  lVar23 = lVar22;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11274f66c;
  func_0x000107c61148();
  lVar24 = param_1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c4935c(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar11,lVar13,lVar15,lVar17,
                      lVar19,lVar21,lVar23,lVar24);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100509740; end: 100509747; -[SCLocationSharingServices preferencesProvider] */

undefined8 FUN_100509740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100509748; end: 10050974f; -[SCMapPersonLocationServices mapPersonLocationsProvider] */

undefined8 FUN_100509748(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100509750; end: 100509abf; -[SCLocationPrivacyReminderNotificationControllerImpl initWithUserSession:locationSharingPreferences:appNotificationProvider:notificationProcessingManager:bitmojiAvatarProvider:bitmojiImageFetcher:mapUserPreferences:unifiedGRPCClientFactory:userTrackedLogger:locationPermissionsManager:circumstanceEngine:mapPersonLocationsProvider:applicationLifecycleEvents:] */

undefined8 *
FUN_100509750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_70 = PTR_PTR_1126f2e98;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0xd,param_3);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cd7b0;
    func_0x000107c610f4();
    func_0x000107c49418();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    uVar2 = param_15;
    func_0x000107c5e370(param_15);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100509ac0; end: 100509b8b; -[SCLocationPrivacyReminderNotificationLogging initWithUserTrackedLogger:locationSharingPreferencesProvider:locationPermissionsManager:] */

undefined1 *
FUN_100509ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f2eb0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100509b8c; end: 100509c03; -[_TtC25SCMapNotificationServices25SCMapNotificationServices initWithLocationSharingNotificationController:locationPrivacyReminderNotificationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100509b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa9918) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fa9920) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100509c04; end: 100509c8f;  */

void FUN_100509c04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100509c90; end: 100509c97;  */

void FUN_100509c90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100509c98; end: 100509ceb;  */

void FUN_100509c98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100509cec; end: 100509cfb;  */

void FUN_100509cec(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100209cc8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uStack_88;
  *(undefined8 *)(lVar2 + 0x48) = uStack_90;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126a7ed0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar3);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efc1b30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  lVar13 = *(long *)(lVar2 + 0x20);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc1b60);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10050a1d0);
    (*pcVar1)();
  }
  *(long *)(lVar2 + 0x50) = lVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(lVar2 + 0x58) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10050a1d4);
  (*pcVar1)();
}



/* Entry: 100509cfc; end: 10050a1d3;  */

void FUN_100509cfc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100209cc8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7ed0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efc1b30);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  lVar12 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc1b60);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10050a1d0);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x50) = lVar11;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(param_2 + 0x58) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10050a1d4);
  (*pcVar1)();
}



/* Entry: 10050a1d4; end: 10050a49f; -[SCCameraConfigurationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050a1d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e504(puVar1);
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_1127242f8);
  }
  func_0x000107c61174(uVar10);
  puVar2 = PTR_PTR_1126b9ad0;
  func_0x000107c610f4(PTR_PTR_1126b9ad0);
  func_0x000107c45b9c();
  func_0x000107c42c20(uVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  puVar2 = PTR_PTR_1126b9ad8;
  func_0x000107c610f4(PTR_PTR_1126b9ad8);
  lVar3 = param_1 + _DAT_1127242dc;
  func_0x000107c61148(lVar3);
  lVar4 = lVar3;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127242f4;
    func_0x000107c61148(lVar11);
  }
  lVar5 = lVar11;
  func_0x000107c5bca0(lVar11);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127242f0;
    func_0x000107c61148(lVar12);
  }
  lVar7 = lVar12;
  func_0x000107c3de48(lVar12);
  func_0x000107c61180();
  func_0x000107c45df0(puVar2);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  puVar8 = PTR_PTR_1126b9ae0;
  func_0x000107c610f4(PTR_PTR_1126b9ae0);
  func_0x000107c45f60();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127242e0));
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar10 = puRam0000000113839558;
  puRam0000000113839558 = puVar9;
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10050a4a0; end: 10050a4f7; -[_TtC34SCCameraCircumstanceEngineServices34SCCameraCircumstanceEngineServices initWithCameraCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050a4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130360e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10050a4f8; end: 10050b2d3; -[SCCameraConfigurationImpl initWithCircumstanceEngine:featureSettingsService:systemConfiguration:appStartExperimentReader:] */

undefined8 *
FUN_10050a4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_80 = PTR_PTR_1126e8968;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = puVar2;
    func_0x000107c61170(uVar3);
    uVar4 = puVar1[0x16];
    func_0x000107c61174(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(uVar4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10050b2d4; end: 10050b3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050b2d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b9ac8;
    func_0x000107c610f4(PTR_PTR_1126b9ac8);
    lVar1 = param_1 + _DAT_1127242ec;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_1127242f0;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c3de48();
    func_0x000107c61180();
    func_0x000107c45db4(puVar5,param_2,lVar2,lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10050b3ac; end: 10050b403; -[_TtC29SCCameraConfigurationServices29SCCameraConfigurationServices initWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050b3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113081210) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10050b404; end: 10050b44f;  */

void FUN_10050b404(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050b450; end: 10050b457;  */

void FUN_10050b450(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050b458; end: 10050b4ab;  */

void FUN_10050b458(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050b4ac; end: 10050b4b3;  */

void FUN_10050b4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10009a060();
  func_0x000107c613fc();
  FUN_10050b528(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050b4b4; end: 10050b527;  */

void FUN_10050b4b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10009a060();
  func_0x000107c613fc();
  FUN_10050b528(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10050b528; end: 10050b683;  */

void FUN_10050b528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7398;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10050b684; end: 10050b74b; -[SCCameraCircumstanceEngineImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_10050b684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8890;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4097c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050b74c; end: 10050b7ef; -[SCTopLevelFeatureScopeConfigLoaderServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050b74c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ce578;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_1127513d4;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0(puVar1,param_2,lVar3);
  lVar5 = (long)_DAT_1127513d8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c61174(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10050b7f0; end: 10050b8ef; -[SCTopLevelFeatureScopeConfigProviderServices initWithCircumstanceEngine:] */

undefined8 * FUN_10050b7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f3588;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_48,puVar1);
    uVar2 = 0x19;
    func_0x000107c60f2c(0x19,0);
    func_0x000107c61180();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10050c060;
    puStack_58 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_50,auStack_48);
    FUN_10007380c(uVar2,&puStack_70);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10050b8f0; end: 10050b91b;  */

void FUN_10050b8f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050b91c; end: 10050b923;  */

void FUN_10050b91c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050b924; end: 10050b977;  */

void FUN_10050b924(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050b978; end: 10050b983;  */

void FUN_10050b978(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10032c734();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126ac3f8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00a690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10050b984; end: 10050bc37;  */

void FUN_10050b984(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10032c734();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac3f8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00a690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10050bc38; end: 10050bd1b; -[SCChatNotificationServiceProvider provide] */

void FUN_10050bc38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cb9f0;
  func_0x000107c610f4(PTR_PTR_1126cb9f0);
  func_0x000107c45d90();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10050bd1c; end: 10050bd8f; -[SCChatNotificationServices initWithChatNotificationDestinationProvider:] */

undefined1 * FUN_10050bd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f6378;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050bd90; end: 10050bdcb;  */

void FUN_10050bd90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050bdcc; end: 10050bdd3;  */

void FUN_10050bdcc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050bdd4; end: 10050be27;  */

void FUN_10050bdd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050be28; end: 10050be2f;  */

void FUN_10050be28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100330900();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10050be98();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050be30; end: 10050be97;  */

void FUN_10050be30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100330900();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10050be98();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050be98; end: 10050c05f;  */

void FUN_10050be98(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126ac6a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f111b00);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f111b30);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10050c05c);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x28) = lVar5;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10050c060);
  (*pcVar1)();
}



/* Entry: 10050c060; end: 10050c09b;  */

void FUN_10050c060(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    FUN_10050c09c(*(undefined8 *)(param_1 + 8));
    func_0x000107c611b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10050c09c; end: 10050c153;  */

void FUN_10050c09c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  lVar2 = lRam00000001136c4660;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10050c154;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x000107c61174(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    FUN_10002a2fc(0x1136c4660,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001136c4658;
  func_0x000107c61174(uRam00000001136c4658);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10050c154; end: 10050c377;  */

/* WARNING: Possible PIC construction at 0x00010050c1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050c218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050c240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050c2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050c31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050c330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050c400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050c334) */
/* WARNING: Removing unreachable block (ram,0x00010050c374) */
/* WARNING: Removing unreachable block (ram,0x00010050c420) */
/* WARNING: Removing unreachable block (ram,0x00010050c3b8) */
/* WARNING: Removing unreachable block (ram,0x00010050c3c4) */
/* WARNING: Removing unreachable block (ram,0x00010050c428) */
/* WARNING: Removing unreachable block (ram,0x00010050c3e8) */
/* WARNING: Removing unreachable block (ram,0x00010050c3f4) */
/* WARNING: Removing unreachable block (ram,0x00010050c354) */
/* WARNING: Removing unreachable block (ram,0x00010050c320) */
/* WARNING: Removing unreachable block (ram,0x00010050c2f0) */
/* WARNING: Removing unreachable block (ram,0x00010050c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010050c244) */
/* WARNING: Removing unreachable block (ram,0x00010050c318) */
/* WARNING: Removing unreachable block (ram,0x00010050c27c) */
/* WARNING: Removing unreachable block (ram,0x00010050c28c) */
/* WARNING: Removing unreachable block (ram,0x00010050c290) */
/* WARNING: Removing unreachable block (ram,0x00010050c2a0) */
/* WARNING: Removing unreachable block (ram,0x00010050c2a8) */
/* WARNING: Removing unreachable block (ram,0x00010050c21c) */
/* WARNING: Removing unreachable block (ram,0x00010050c324) */
/* WARNING: Removing unreachable block (ram,0x00010050c220) */
/* WARNING: Removing unreachable block (ram,0x00010050c1cc) */
/* WARNING: Removing unreachable block (ram,0x00010050c404) */

void FUN_10050c154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af7d0;
  func_0x000107c4cd90(PTR_PTR_1126af7d0);
  func_0x000107c61180();
  func_0x000107c4f558(uVar2,param_2,&PTR____CFConstantStringClassReference_110e60a18,puVar1,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10050c378; end: 10050c42f; -[SCMemoriesNavigationImplEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010050c400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050c404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050c378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61160(PTR_PTR_1126cdd28);
  puVar1 = PTR_PTR_1126cdd30;
  func_0x000107c610f4(PTR_PTR_1126cdd30);
  func_0x000107c479c4();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274fdc0);
  }
  func_0x000107c42c20(uVar2,param_2,puVar1);
  puVar1 = PTR_PTR_1126cdd38;
  func_0x000107c610f4(PTR_PTR_1126cdd38);
  func_0x000107c47168();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274fdbc);
  }
  func_0x000107c42c20(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10050c430; end: 10050c46b; -[SCMemoriesNavigationServiceImpl init] */

void FUN_10050c430(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f3060;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10050c46c; end: 10050c4df; -[SCMemoriesNavigationServices initWithNavigationService:] */

undefined1 * FUN_10050c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702108;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050c4e0; end: 10050c553; -[SCLegacyMemoriesNavigationServices initWithLegacyMemoriesNavigationService:] */

undefined1 * FUN_10050c4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8438;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050c554; end: 10050c55b;  */

void FUN_10050c554(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050c55c; end: 10050c5af;  */

void FUN_10050c55c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050c5b0; end: 10050d8f7;  */

void FUN_10050c5b0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100363dc4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0xb8) = uStack_78;
  *(undefined8 *)(param_2 + 0xc0) = uStack_80;
  *(undefined8 *)(param_2 + 200) = uStack_88;
  *(undefined8 *)(param_2 + 0xd0) = uStack_90;
  FUN_1000285a8(0x112e50720,&UNK_10da4eef8);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar6;
  FUN_1000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar8 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x20) = puVar6;
  FUN_1000285a8(0x112f20638,&UNK_10db595d0);
  func_0x000107c610f8();
  uVar8 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x28) = puVar6;
  FUN_1000285a8(0x112f20640,&UNK_10db591e0);
  func_0x000107c610f8();
  uVar8 = uStack_b0;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x30) = puVar6;
  FUN_1000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar8 = uStack_b8;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x38) = puVar6;
  FUN_1000285a8(0x112e4e438,&UNK_10db591f0);
  func_0x000107c610f8();
  uVar8 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x40) = puVar6;
  FUN_1000285a8(0x112f20648,&UNK_10db591f8);
  func_0x000107c610f8();
  uVar8 = uStack_c8;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x48) = puVar6;
  FUN_1000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar8 = uStack_d0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar6;
  FUN_1000285a8(0x112f20650,&UNK_10db59530);
  func_0x000107c610f8();
  uVar8 = uStack_d8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x58) = puVar6;
  FUN_1000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar8 = uStack_e0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x60) = puVar6;
  FUN_1000285a8(0x112f20658,&UNK_10db59208);
  func_0x000107c610f8();
  uVar8 = uStack_e8;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x68) = puVar6;
  FUN_1000285a8(0x112e4cd30,&UNK_10da47080);
  func_0x000107c610f8();
  uVar8 = uStack_f0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x70) = puVar6;
  FUN_1000285a8(0x112f20660,&UNK_10db595f0);
  func_0x000107c610f8();
  uVar8 = uStack_f8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x78) = puVar6;
  FUN_1000285a8(0x112e9ebb8,&UNK_10daafe70);
  func_0x000107c610f8();
  uVar8 = uStack_100;
  func_0x000107c6157c(uStack_100);
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x80) = puVar6;
  FUN_1000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  uVar8 = uStack_108;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x88) = puVar6;
  FUN_1000285a8(0x112f20668,&UNK_10db59210);
  func_0x000107c610f8();
  uVar8 = uStack_110;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x90) = puVar6;
  FUN_1000285a8(0x112e0bda8,&UNK_10d9e5488);
  func_0x000107c610f8();
  uVar8 = uStack_118;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar6 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x98) = puVar6;
  FUN_1000285a8(0x112f20670,&UNK_10db59220);
  func_0x000107c610f8();
  uVar8 = uStack_120;
  func_0x000107c6157c(uStack_120);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0xa0) = puVar6;
  FUN_1000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  uVar8 = uStack_128;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0xa8) = puVar6;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0xb0) = puVar9;
  puVar6 = PTR_PTR_1126ac668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  uVar8 = uVar13;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = uVar13;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f053c60);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f111390);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0557f0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1113b0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32a40);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1113e0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f111400);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f053cb0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar8);
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f111420);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef21f80);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f111440);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f111460);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef13560);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f111480);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f01b670);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 0x90);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0cb170);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010eff69a0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1114a0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(uVar10);
  lVar11 = *(long *)(param_2 + 0xb0);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uStack_98);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61574(uStack_a8);
    func_0x000107c61574(uStack_b0);
    func_0x000107c61574(uStack_b8);
    func_0x000107c61574(uStack_c0);
    func_0x000107c61574(uStack_c8);
    func_0x000107c61574(uStack_d0);
    func_0x000107c61574(uStack_d8);
    func_0x000107c61574(uStack_e0);
    func_0x000107c61574(uStack_e8);
    func_0x000107c61574(uStack_f0);
    func_0x000107c61574(uStack_f8);
    func_0x000107c61574(uStack_100);
    func_0x000107c61574(uStack_108);
    func_0x000107c61574(uStack_110);
    func_0x000107c61574(uStack_118);
    func_0x000107c61574(uStack_120);
    func_0x000107c61574(uStack_128);
    *(long *)(param_2 + 0xd8) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10050d8f8);
  (*pcVar1)();
}



/* Entry: 10050d8f8; end: 10050d94b;  */

void FUN_10050d8f8(void)

{
  long unaff_x20;
  
  FUN_10050c5b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 10050d94c; end: 10050d953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050d94c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003615d4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113034c68) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10050d954; end: 10050d9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050d954(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003615d4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113034c68) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10050d9c0; end: 10050dccf;  */

/* WARNING: Possible PIC construction at 0x00010050db98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dbb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dbc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dc98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050dc9c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc8c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc7c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc6c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc5c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc4c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc3c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc2c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc1c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc0c) */
/* WARNING: Removing unreachable block (ram,0x00010050dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010050dbec) */
/* WARNING: Removing unreachable block (ram,0x00010050dbdc) */
/* WARNING: Removing unreachable block (ram,0x00010050dbcc) */
/* WARNING: Removing unreachable block (ram,0x00010050dbbc) */
/* WARNING: Removing unreachable block (ram,0x00010050dbac) */
/* WARNING: Removing unreachable block (ram,0x00010050db9c) */
/* WARNING: Removing unreachable block (ram,0x00010050dcac) */

void FUN_10050d9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110501948;
  func_0x000107c613fc(&UNK_110501948,0x130,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  uVar2 = 0x112e956e8;
  FUN_1000285a8(0x112e956e8,&UNK_10daa0aa8);
  func_0x000107c613fc();
  puVar3 = &UNK_1023f8608;
  FUN_1000841f8(&UNK_1023f8608,puVar1,uVar2);
  FUN_100084214(&UNK_10daa0a80,0x24,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10050dcd0; end: 10050dcd3;  */

void FUN_10050dcd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050dcd4; end: 10050dd3f;  */

void FUN_10050dcd4(void)

{
  long unaff_x20;
  
  FUN_10050d9c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128));
  return;
}



/* Entry: 10050dd40; end: 10050dd43;  */

void FUN_10050dd40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050dd44; end: 10050de7f;  */

void FUN_10050dd44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050de80; end: 10050de87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050de80(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10034001c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f20e30) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10050de88; end: 10050def3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050de88(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10034001c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f20e30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10050def4; end: 10050df03;  */

/* WARNING: Possible PIC construction at 0x00010050dfb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dfc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dfd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010050dfb8) */
/* WARNING: Removing unreachable block (ram,0x00010050dfd8) */

void FUN_10050def4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1104b85e8;
  func_0x000107c613fc(&UNK_1104b85e8,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e4e130;
  FUN_1000285a8(0x112e4e130,&UNK_10da497e0);
  func_0x000107c613fc();
  puVar8 = &UNK_101ff1310;
  FUN_1000841f8(&UNK_101ff1310,puVar6,uVar7);
  FUN_100084214(&UNK_10da497a0,0x3a,2);
  *param_1 = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10050df04; end: 10050dff3;  */

/* WARNING: Possible PIC construction at 0x00010050dfb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dfc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050dfd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010050dfb8) */
/* WARNING: Removing unreachable block (ram,0x00010050dfd8) */

void FUN_10050df04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1104b85e8;
  func_0x000107c613fc(&UNK_1104b85e8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112e4e130;
  FUN_1000285a8(0x112e4e130,&UNK_10da497e0);
  func_0x000107c613fc();
  puVar3 = &UNK_101ff1310;
  FUN_1000841f8(&UNK_101ff1310,puVar1,uVar2);
  FUN_100084214(&UNK_10da497a0,0x3a,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10050dff4; end: 10050dffb;  */

void FUN_10050dff4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050dffc; end: 10050e047;  */

void FUN_10050dffc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050e048; end: 10050e0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050e048(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003413b0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130347e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10050e0b0; end: 10050e0b7;  */

void FUN_10050e0b0(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e5bbe8,&UNK_10da61eb0);
  func_0x000107c613fc();
  puVar1 = &UNK_102152324;
  FUN_1000841f8();
  FUN_100084214(&UNK_10da61e80,0x2e,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10050e0b8; end: 10050e133;  */

void FUN_10050e0b8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e5bbe8,&UNK_10da61eb0);
  func_0x000107c613fc();
  puVar1 = &UNK_102152324;
  FUN_1000841f8(&UNK_102152324,param_2);
  FUN_100084214(&UNK_10da61e80,0x2e,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10050e134; end: 10050e13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050e134(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10034e9c8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b28) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10050e13c; end: 10050e1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050e13c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10034e9c8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff5b28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10050e1a8; end: 10050e2ef;  */

/* WARNING: Possible PIC construction at 0x00010050e280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e2c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050e2b4) */
/* WARNING: Removing unreachable block (ram,0x00010050e2a4) */
/* WARNING: Removing unreachable block (ram,0x00010050e294) */
/* WARNING: Removing unreachable block (ram,0x00010050e284) */
/* WARNING: Removing unreachable block (ram,0x00010050e2c4) */

void FUN_10050e1a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1104b8bc8;
  func_0x000107c613fc(&UNK_1104b8bc8,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  uVar2 = 0x112e4e418;
  FUN_1000285a8(0x112e4e418,&UNK_10da49ed8);
  func_0x000107c613fc();
  puVar3 = &UNK_101ff3ee0;
  FUN_1000841f8(&UNK_101ff3ee0,puVar1,uVar2);
  FUN_100084214(&UNK_10da49ea0,0x30,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10050e2f0; end: 10050e2f3;  */

void FUN_10050e2f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050e2f4; end: 10050e32f;  */

void FUN_10050e2f4(void)

{
  long unaff_x20;
  
  FUN_10050e1a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10050e330; end: 10050e333;  */

void FUN_10050e330(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050e334; end: 10050e3a7;  */

void FUN_10050e334(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050e3a8; end: 10050e43b;  */

void FUN_10050e3a8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10050e43c; end: 10050e4a3; +[TopLevelFeatureScopePreloadConfig descriptor] */

void FUN_10050e43c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3f20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c6a2e0,
                        &PTR____CFConstantStringClassReference_110f59438,&PTR_DAT_11336a0d8,
                        &PTR_DAT_11336a0f0,1,0x10,0x1c);
    puRam00000001137f3f20 = puVar1;
  }
  return;
}



/* Entry: 10050e4a4; end: 10050e527; -[SCOptionalMultiScopeExposerProxy initWithUnderlyingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10050e4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112703838;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112787ce0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050e528; end: 10050e547;  */

void FUN_10050e528(void)

{
  func_0x000107c61168(&PTR_PTR_112932a48);
  return;
}



/* Entry: 10050e548; end: 10050e8f3; -[SCImmediateUserFeatureLaunchServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010050e80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010050e8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010050e8c0) */
/* WARNING: Removing unreachable block (ram,0x00010050e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010050e8a0) */
/* WARNING: Removing unreachable block (ram,0x00010050e890) */
/* WARNING: Removing unreachable block (ram,0x00010050e880) */
/* WARNING: Removing unreachable block (ram,0x00010050e870) */
/* WARNING: Removing unreachable block (ram,0x00010050e860) */
/* WARNING: Removing unreachable block (ram,0x00010050e850) */
/* WARNING: Removing unreachable block (ram,0x00010050e840) */
/* WARNING: Removing unreachable block (ram,0x00010050e820) */
/* WARNING: Removing unreachable block (ram,0x00010050e810) */
/* WARNING: Removing unreachable block (ram,0x00010050e8d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050e548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar2 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar3 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar4 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar5 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar6 = PTR_PTR_1126cdbc8;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar7 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar8 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar9 = PTR_PTR_1126caad0;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar10 = PTR_PTR_1126caad0;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar11 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar12 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar13 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar14 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar15 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar16 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar17 = PTR_PTR_1126cdbc8;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar18 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar19 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar20 = PTR_PTR_1126bdb40;
  func_0x000107c610f4(PTR_PTR_1126bdb40);
  lVar21 = param_1 + _DAT_11274f96c;
  func_0x000107c61148();
  lVar22 = param_1 + _DAT_11274f970;
  func_0x000107c61148();
  lVar23 = param_1 + _DAT_11274f974;
  func_0x000107c61148();
  param_1 = param_1 + _DAT_11274f978;
  func_0x000107c61148();
  func_0x000107c47178(puVar20,param_2,puVar1,puVar2,puVar3,puVar4,puVar6,puVar5,puVar7,puVar8,puVar9
                      ,puVar10,puVar11,puVar12,puVar13,puVar14,puVar15,puVar16,puVar17,puVar18,
                      puVar19,lVar21,lVar22,lVar23,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10050e8f4; end: 10050e96f; +[TopLevelFeatureScopePreloadConfig_FeatureScopePreloadConfig descriptor] */

undefined * FUN_10050e8f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c6a330,
                        &PTR____CFConstantStringClassReference_110f59458,&PTR_DAT_11336a0d8,
                        &PTR_s_featureScope_11336a110,3,0x10,0x1c);
    func_0x000107c5a88c();
    puRam00000001137f3f28 = puVar1;
  }
  return puRam00000001137f3f28;
}



/* Entry: 10050e970; end: 10050e9db; -[SCUserFeatureLauncher initWithScopeExposer:] */

undefined1 * FUN_10050e970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700ed8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050e9dc; end: 10050ea93; -[SCUserFeatureMultiLauncher initWithMultiScopeExposer:] */

undefined1 * FUN_10050e9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700ee0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5e168();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = &UNK_10f55c52f;
    func_0x000107c60f50(&UNK_10f55c52f,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050ea94; end: 10050eb1b; -[SCUserFeatureOptionalMultiLauncher initWithMultiScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10050ea94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112700ef0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithMultiScopeExposer__1125e8c80,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127835cc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050eb1c; end: 10050eb93; -[SCUserFeatureOptionalLauncher initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10050eb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700ee8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithScopeExposer__1125ee1e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_1127835c8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050eb94; end: 10050f057; -[SCImmediateUserFeatureLaunchServices initWithLegacySendToScopeLauncher:sendToScopeLauncher:myProfileScopeLauncher:friendProfileScopeLauncher:communitiesProfileScopeLauncher:storyMemberActionSheetLauncher:allContactsLauncher:addFriendsLauncher:auraMyProfileScopeLauncher:chatScopeLauncher:mapScopeMultiLauncher:adReportScopeLauncher:lensVideoEditingLauncher:businessProfilesScopeLauncher:settingsScopeLauncher:unifiedPublicProfilesPresenterScopeLauncher:snapcodeScopeLauncher:mapSearchScopeLauncher:previewScopeLauncher:sendToScopeServices:customStoryMemberActionSheetScopeServices:lensVideoEditingScopeServices:customStoryMembersScopeServices:] */

undefined8 *
FUN_10050eb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  puStack_70 = PTR_PTR_112700ec0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[2];
    puVar1[2] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[1];
    puVar1[1] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10050f058; end: 10050f133;  */

void FUN_10050f058(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10050f134; end: 10050f13b;  */

void FUN_10050f134(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x250);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050f13c; end: 10050f18f;  */

void FUN_10050f13c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x250);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


