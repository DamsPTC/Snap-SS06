/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00427af4; end: 00427b77;  */

/* WARNING: Removing unreachable block (ram,0x00427b20) */

void FUN_00427af4(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x18
      ) {
  }
  return;
}



/* Entry: 00427b78; end: 00427bc7;  */

/* WARNING: Removing unreachable block (ram,0x00427ba4) */

void FUN_00427b78(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; *param_1 != lVar1; lVar1 = lVar1 + -0x18) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 00427bc8; end: 00427c77;  */

long FUN_00427bc8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 00427c78; end: 00427c8b;  */

void FUN_00427c78(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0040d774("vector");
  if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
    FUN_0040cee8();
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        puVar1 = (undefined8 *)(param_4 + lVar3);
        puVar2 = (undefined8 *)((long)param_2 + lVar3);
        *puVar1 = *puVar2;
        uVar5 = puVar2[2];
        uVar4 = puVar2[1];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar5;
        puVar1[1] = uVar4;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar1 + 4) = 0;
        *(undefined1 *)(puVar1 + 10) = 0;
        if (*(char *)(puVar2 + 10) == '\x01') {
          puVar1[4] = puVar2[4];
          (**(code **)(puVar2[5] + 0x10))(puVar1 + 5);
          *(undefined1 *)(puVar1 + 10) = 1;
        }
        lVar3 = lVar3 + 0x58;
      } while (puVar2 + 0xb != param_3);
      do {
        FUN_00427da0(param_2);
        param_2 = param_2 + 0xb;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x58);
  return;
}



/* Entry: 00427c8c; end: 00427cd3;  */

void FUN_00427c8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
    FUN_0040cee8();
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        puVar1 = (undefined8 *)(param_4 + lVar3);
        puVar2 = (undefined8 *)((long)param_2 + lVar3);
        *puVar1 = *puVar2;
        uVar5 = puVar2[2];
        uVar4 = puVar2[1];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar5;
        puVar1[1] = uVar4;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar1 + 4) = 0;
        *(undefined1 *)(puVar1 + 10) = 0;
        if (*(char *)(puVar2 + 10) == '\x01') {
          puVar1[4] = puVar2[4];
          (**(code **)(puVar2[5] + 0x10))(puVar1 + 5);
          *(undefined1 *)(puVar1 + 10) = 1;
        }
        lVar3 = lVar3 + 0x58;
      } while (puVar2 + 0xb != param_3);
      do {
        FUN_00427da0(param_2);
        param_2 = param_2 + 0xb;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x58);
  return;
}



/* Entry: 00427cd4; end: 00427d9f;  */

void FUN_00427cd4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 != param_3) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_4 + lVar3);
      puVar2 = (undefined8 *)((long)param_2 + lVar3);
      *puVar1 = *puVar2;
      uVar5 = puVar2[2];
      uVar4 = puVar2[1];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar5;
      puVar1[1] = uVar4;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      *(undefined1 *)(puVar1 + 10) = 0;
      if (*(char *)(puVar2 + 10) == '\x01') {
        puVar1[4] = puVar2[4];
        (**(code **)(puVar2[5] + 0x10))(puVar1 + 5);
        *(undefined1 *)(puVar1 + 10) = 1;
      }
      lVar3 = lVar3 + 0x58;
    } while (puVar2 + 0xb != param_3);
    do {
      FUN_00427da0(param_2);
      param_2 = param_2 + 0xb;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 00427da0; end: 00427e3b;  */

void FUN_00427da0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    (*(code *)**(undefined8 **)(param_1 + 0x28))();
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 00427e3c; end: 00427eab;  */

void FUN_00427e3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar4 != lVar2) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_00427da0(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00427eac; end: 00427fd7;  */

long FUN_00427eac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 00427fd8; end: 00428053;  */

undefined8 *
FUN_00427fd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00783dc0(param_2);
  FUN_00648ba8(param_1,uVar1,param_3,param_4);
  *param_1 = &PTR_FUN_009e3450;
  param_1[0x11] = param_2;
  return param_1;
}



/* Entry: 00428054; end: 004280a7;  */

undefined8 * FUN_00428054(undefined8 *param_1)

{
  _objc_release(param_1[0x11]);
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004280a8; end: 0042811b; -[SCFriendingNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_004280a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3af0;
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



/* Entry: 0042811c; end: 00428163; -[SCFriendingNotificationExtensionUserDefaults notificationBestFriendsSoundEnabled] */

undefined8 FUN_0042811c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fba0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 00428164; end: 004281a7; -[SCFriendingNotificationExtensionUserDefaults setNotificationBestFriendsSoundEnabled:] */

void FUN_00428164(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d040();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004281a8; end: 00428283; -[SCFriendingNotificationExtensionUserDefaults rankedBestFriendsUserIds] */

void FUN_004281a8(long param_1)

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
  puVar5 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_00ac2a68);
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



/* Entry: 00428284; end: 00428313; -[SCFriendingNotificationExtensionUserDefaults setRankedBestFriendsUserIds:] */

void FUN_00428284(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a24240);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00428314; end: 004283ef; -[SCFriendingNotificationExtensionUserDefaults rankedBestFriendsUserIdsInArray] */

void FUN_00428314(long param_1)

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
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
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



/* Entry: 004283f0; end: 0042847f; -[SCFriendingNotificationExtensionUserDefaults setRankedBestFriendsUserIdsInArray:] */

void FUN_004283f0(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a24260);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00428480; end: 004285b3; -[SCFriendingNotificationExtensionUserDefaults pendingFriendReminderUserIds] */

void FUN_00428480(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x0077d520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x0077d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_004285b4;
    uStack_40 = 0x4285c4;
    uStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
    func_0x007855e0();
    func_0x00780dc0();
    param_1 = puStack_58[5];
    _objc_retain(param_1);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004285b4; end: 004285cb;  */

void FUN_004285b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 004285cc; end: 0042866b;  */

void FUN_004285cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0042866c; end: 00428753; -[SCFriendingNotificationExtensionUserDefaults setPendingFriendReminderUserIds:] */

void FUN_0042866c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x0077d520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x0077be80(param_1,param_2,param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
    func_0x007855e0();
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_00428754;
    puStack_48 = &UNK_009e3580;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00780e00(puVar2,param_2,lVar1,4,0,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00428754; end: 0042875f;  */

void FUN_00428754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__accumulatePendingFriendReminder_00ab9c98,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00428760; end: 004287af;  */

void FUN_00428760(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 004287b0; end: 0042887b; -[SCFriendingNotificationExtensionUserDefaults clearPendingFriendReminderUserIds] */

void FUN_004287b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x0077d520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00792720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078b4a0();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
    func_0x007855e0();
    func_0x00780e00();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0042887c; end: 004288bb;  */

void FUN_0042887c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b4a0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004288bc; end: 00428a13; -[SCFriendingNotificationExtensionUserDefaults readAndClearPendingFriendReminderUserIds] */

void FUN_004288bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x0077d520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = param_1;
    func_0x0077d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00792720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078b4a0();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_004285b4;
    uStack_40 = 0x4285c4;
    uStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
    func_0x007855e0();
    func_0x00780e00();
    lVar4 = puStack_58[5];
    _objc_retain(lVar4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_60,8);
    uVar3 = uStack_38;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar4);
  return;
}



/* Entry: 00428a14; end: 00428a7f;  */

void FUN_00428a14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b4a0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00428a80; end: 00428b5b; -[SCFriendingNotificationExtensionUserDefaults _readPendingFriendReminderUserIdsUnlocked] */

void FUN_00428a80(long param_1)

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
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
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



/* Entry: 00428b5c; end: 00428d73; -[SCFriendingNotificationExtensionUserDefaults _accumulatePendingFriendReminderUserIds:] */

void FUN_00428b5c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar7 = param_1;
  func_0x0077d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00789700();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  func_0x00791360(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00780ea0(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar1 = puVar7;
        func_0x00780c20(puVar7,param_2,uVar8);
        if (((ulong)puVar1 & 1) == 0) {
          func_0x0077e720(puVar7,param_2,uVar8);
          func_0x0077e720(puVar2,param_2,uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_3;
      func_0x00780ea0(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar8,param_2,puVar1,&PTR____CFConstantStringClassReference_00a24340);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x0078c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar1 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00780ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar2 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar2;
      func_0x0077bac0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a24200);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x0078a400(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x007833a0(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = puVar7;
        func_0x0078a400(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00781180(puVar4,param_2,puVar5,0,0);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 00428d74; end: 00428ec3; -[SCFriendingNotificationExtensionUserDefaults _pendingFriendReminderLockFileURL] */

void FUN_00428d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x0078c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00780ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x0077bac0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a24200);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x0078a400(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x007833a0(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = puVar6;
        func_0x0078a400(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00781180(puVar3,param_2,puVar4,0,0);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
  return;
}



/* Entry: 00428ec4; end: 00428f0b; -[SCFriendingNotificationExtensionUserDefaults unviewedIncomingFriendsAppBadgeEnabled] */

undefined8 FUN_00428ec4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fba0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 00428f0c; end: 00428f4f; -[SCFriendingNotificationExtensionUserDefaults setUnviewedIncomingFriendsAppBadgeEnabled:] */

void FUN_00428f0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d040();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00428f50; end: 00428f97; -[SCFriendingNotificationExtensionUserDefaults unviewedSuggestionsBadgeNumberFromNotifications] */

undefined8 FUN_00428f50(long param_1)

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



/* Entry: 00428f98; end: 00428fdb; -[SCFriendingNotificationExtensionUserDefaults setUnviewedSuggestionsBadgeNumberFromNotifications:] */

void FUN_00428f98(long param_1)

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



/* Entry: 00428fdc; end: 00429023; -[SCFriendingNotificationExtensionUserDefaults structuredBadgeInfoEnabled] */

undefined8 FUN_00428fdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fba0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 00429024; end: 00429067; -[SCFriendingNotificationExtensionUserDefaults setStructuredBadgeInfoEnabled:] */

void FUN_00429024(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d040();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00429068; end: 00429177; -[SCFriendingNotificationExtensionUserDefaults unviewedSuggestionsBadgeTypeToUserIdsFromNotifications] */

void FUN_00429068(long param_1)

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
  puVar5 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00781fe0(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00429178; end: 0042925b; -[SCFriendingNotificationExtensionUserDefaults setUnviewedSuggestionsBadgeTypeToUserIdsFromNotifications:] */

void FUN_00429178(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00781fe0(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0042925c; end: 004292a3; -[SCFriendingNotificationExtensionUserDefaults isRankingEnabledForNotificationPath] */

undefined8 FUN_0042925c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fba0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 004292a4; end: 004292e7; -[SCFriendingNotificationExtensionUserDefaults setRankingEnabledForNotificationPath:] */

void FUN_004292a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d040();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004292e8; end: 0042932f; -[SCFriendingNotificationExtensionUserDefaults capSizeOfFriendSuggestionsNotification] */

undefined8 FUN_004292e8(long param_1)

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



/* Entry: 00429330; end: 00429373; -[SCFriendingNotificationExtensionUserDefaults setCapSizeOfFriendSuggestionsNotification:] */

void FUN_00429330(long param_1)

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



/* Entry: 00429374; end: 0042937f; -[SCFriendingNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_00429374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00429380; end: 0042968b;  */

undefined ** FUN_00429380(undefined *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  long lVar12;
  int aiStack_168 [2];
  int iStack_160;
  undefined4 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_120;
  int iStack_ac;
  int iStack_a8;
  int aiStack_a4 [11];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    piVar4 = aiStack_168;
    FUN_0022b55c(piVar4,0x208);
    puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if ((int)piVar4 == 0) {
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
      ppuStack_50 = &PTR____CFConstantStringClassReference_00a24380;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
      _objc_retainAutoreleasedReturnValue();
LAB_004294a0:
      func_0x00782e40(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = param_1;
      _objc_retainAutorelease();
      func_0x0077fde0();
      puVar5 = param_1;
      func_0x007882e0(param_1);
      FUN_0022b5bc(puVar6,puVar5,aiStack_168,0x208);
      puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00;
      if ((int)puVar6 != 0) {
        uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
        ppuStack_60 = &PTR____CFConstantStringClassReference_00a243a0;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
        func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_004294a0;
      }
      uStack_140 = 7;
      aiStack_a4[1] = 1;
      puVar6 = param_1;
      _objc_retainAutorelease();
      func_0x0077fde0();
      puVar5 = param_1;
      func_0x007882e0(param_1);
      FUN_0022b600(puVar6,puVar5,aiStack_168);
      puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00;
      if ((int)puVar6 == 0) {
        piVar4 = aiStack_168;
        if (iStack_ac != 0) {
          piVar4 = &iStack_a8;
        }
        iVar1 = *piVar4;
        lVar12 = (long)iVar1;
        piVar4 = (int *)((ulong)aiStack_168 | 4);
        if (iStack_ac != 0) {
          piVar4 = aiStack_a4;
        }
        iVar2 = *piVar4;
        uVar8 = 0;
        _CGDataProviderCreateWithData(0,uStack_130,uStack_120,0x4296b4);
        uVar9 = uVar8;
        _CGColorSpaceCreateDeviceRGB();
        uVar10 = 0x4005;
        if (iStack_160 != 0) {
          uVar10 = 0x4001;
        }
        _CGImageCreate(lVar12,(long)iVar2,8,0x20,(long)(iVar1 << 2),uVar9,uVar10,uVar8,0,0,0);
        _CGColorSpaceRelease(uVar9);
        _CGDataProviderRelease(uVar8);
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___UIImage_00ac2a88;
        _objc_alloc(PTR__OBJC_CLASS___UIImage_00ac2a88);
        func_0x00784e80();
        _CGImageRelease(lVar12);
        goto LAB_004294c8;
      }
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
      FUN_0042968c();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      puStack_70 = puVar6;
      func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00782e40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  ppuVar11 = (undefined **)0x0;
LAB_004294c8:
  _objc_release();
  uVar3 = (uint)param_1;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar11);
    return ppuVar11;
  }
  ___stack_chk_fail();
  if (uVar3 < 8) {
    return (undefined **)(&PTR_PTR_009e3608)[uVar3 - 1];
  }
  return &PTR____CFConstantStringClassReference_00a244a0;
}



/* Entry: 0042968c; end: 004296bb;  */

undefined ** FUN_0042968c(uint param_1)

{
  if (param_1 < 8) {
    return (undefined **)(&PTR_PTR_009e3608)[param_1 - 1];
  }
  return &PTR____CFConstantStringClassReference_00a244a0;
}



/* Entry: 004296bc; end: 0042996b;  */

void FUN_004296bc(undefined8 param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  if (param_2 == (char *)0x0) {
LAB_00429828:
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar3 = 1;
    _calloc(1,0x100);
    lVar10 = lVar3 + 0x10;
    FUN_0022b55c(lVar10,0x208);
    puVar12 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if ((int)lVar10 == 0) {
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
      ppuStack_70 = &PTR____CFConstantStringClassReference_00a24380;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080();
      _objc_retainAutoreleasedReturnValue();
LAB_004297fc:
      func_0x00782e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _free(lVar3);
      _objc_release(puVar12);
      goto LAB_00429828;
    }
    pcVar4 = param_2;
    _objc_retainAutorelease();
    func_0x0077fde0();
    pcVar5 = param_2;
    func_0x007882e0(param_2);
    FUN_0022b5bc(pcVar4,pcVar5,lVar3 + 0x10,0x208);
    puVar12 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if ((int)pcVar4 != 0) {
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
      ppuStack_80 = &PTR____CFConstantStringClassReference_00a243a0;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_004297fc;
    }
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_00999d30;
    _CFDataCreateCopy(uVar7,param_2);
    *(undefined8 *)(lVar3 + 8) = uVar7;
    bVar2 = *(int *)(lVar3 + 0xcc) != 0;
    lVar10 = 0x14;
    if (bVar2) {
      lVar10 = 0xd4;
    }
    lVar11 = 0x10;
    if (bVar2) {
      lVar11 = 0xd0;
    }
    lVar13 = (long)*(int *)(lVar3 + lVar11);
    iVar1 = *(int *)(lVar3 + lVar10);
    pcStack_a8 = FUN_0042996c;
    uStack_b0 = 0;
    uStack_98 = 0;
    pcStack_a0 = FUN_00429ac4;
    pcStack_90 = FUN_00429ad4;
    lVar10 = lVar3;
    _CGDataProviderCreateDirect(lVar3,lVar13 * 4 * (long)iVar1,&uStack_b0);
    lVar11 = lVar10;
    _CGColorSpaceCreateDeviceRGB();
    uVar9 = 0x4005;
    if (*(int *)(lVar3 + 0x18) != 0) {
      uVar9 = 0x4001;
    }
    _CGImageCreate(lVar13,(long)iVar1,8,0x20,(long)(int)(lVar13 * 4),lVar11,uVar9,lVar10);
    _CGColorSpaceRelease(lVar11);
    _CGDataProviderRelease(lVar10);
    puVar12 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_alloc();
    func_0x00784ea0(param_1);
    _CGImageRelease(lVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_2 == '\x01') {
    if (*(int *)(param_2 + 4) == 0) {
LAB_004299f4:
      puVar8 = *(undefined1 **)(param_2 + 0x48);
      goto LAB_00429a94;
    }
  }
  else {
    lVar3 = 7;
    param_2[0x38] = '\a';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0xd8] = '\x01';
    param_2[0xd9] = '\0';
    param_2[0xda] = '\0';
    param_2[0xdb] = '\0';
    lVar11 = *(long *)(param_2 + 8);
    if (lVar11 == 0) {
      param_2[4] = '\a';
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      *param_2 = '\x01';
    }
    else {
      _CFDataGetBytePtr();
      uVar7 = *(undefined8 *)(param_2 + 8);
      _CFDataGetLength(uVar7);
      FUN_0022b600(lVar11,uVar7,param_2 + 0x10);
      *(int *)(param_2 + 4) = (int)lVar11;
      *param_2 = '\x01';
      lVar3 = lVar11;
      if ((int)lVar11 == 0) goto LAB_004299f4;
    }
    puVar12 = PTR__OBJC_CLASS___NSError_00ac2b00;
    FUN_0042968c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(puVar12);
  }
  puVar8 = (undefined1 *)0x0;
LAB_00429a94:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar10) {
    ___stack_chk_fail();
    *puVar8 = 0;
    *(undefined8 *)(puVar8 + 0x48) = 0;
    if (puVar8 != (undefined1 *)0xffffffffffffffc8) {
      if (*(int *)(puVar8 + 0x44) < 1) {
        func_0x0024b520(*(undefined8 *)(puVar8 + 0xa8));
      }
      *(undefined8 *)(puVar8 + 0xa8) = 0;
    }
    return;
  }
  return;
}



/* Entry: 0042996c; end: 00429ac3;  */

void FUN_0042996c(char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 4) == 0) {
LAB_004299f4:
      puVar5 = *(undefined1 **)(param_1 + 0x48);
      goto LAB_00429a94;
    }
  }
  else {
    lVar1 = 7;
    param_1[0x38] = '\a';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xd8] = '\x01';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
      param_1[4] = '\a';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *param_1 = '\x01';
    }
    else {
      _CFDataGetBytePtr();
      uVar2 = *(undefined8 *)(param_1 + 8);
      _CFDataGetLength(uVar2);
      FUN_0022b600(lVar7,uVar2,param_1 + 0x10);
      *(int *)(param_1 + 4) = (int)lVar7;
      *param_1 = '\x01';
      lVar1 = lVar7;
      if ((int)lVar7 == 0) goto LAB_004299f4;
    }
    puVar4 = PTR__OBJC_CLASS___NSError_00ac2b00;
    FUN_0042968c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
  puVar5 = (undefined1 *)0x0;
LAB_00429a94:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    if (puVar5 != (undefined1 *)0xffffffffffffffc8) {
      if (*(int *)(puVar5 + 0x44) < 1) {
        func_0x0024b520(*(undefined8 *)(puVar5 + 0xa8));
      }
      *(undefined8 *)(puVar5 + 0xa8) = 0;
    }
    return;
  }
  return;
}



/* Entry: 00429ac4; end: 00429ad3;  */

void FUN_00429ac4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (param_1 != (undefined1 *)0xffffffffffffffc8) {
    if (*(int *)(param_1 + 0x44) < 1) {
      func_0x0024b520(*(undefined8 *)(param_1 + 0xa8));
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



/* Entry: 00429ad4; end: 00429b07;  */

void FUN_00429ad4(long param_1)

{
  FUN_00220694(param_1 + 0x38);
  if (*(long *)(param_1 + 8) != 0) {
    _CFRelease();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 00429b08; end: 00429b63;  */

void FUN_00429b08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_encoding_00ab6790;
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,puVar1,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00429b64; end: 00429c03;  */

ulong FUN_00429b64(ulong param_1)

{
  ulong uVar1;
  
  _objc_getAssociatedObject(param_1,PTR_s_encoding_00ab6790);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007930e0();
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 00429c04; end: 00429c27;  */

void FUN_00429c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_00ac2a88,
             PTR_s_sc_imageWithData_scale_shouldInt_00abdd30,param_3,0);
  return;
}



/* Entry: 00429c28; end: 00429d1b;  */

void FUN_00429c28(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_4;
    func_0x0078a780();
    func_0x006076f0();
    if ((int)uVar1 < 1) {
      puVar2 = PTR__OBJC_CLASS___UIImage_00ac2a88;
      func_0x00784740(param_1,PTR__OBJC_CLASS___UIImage_00ac2a88,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078dc40();
    }
    else {
      if (param_1 <= 0.0) {
        puVar2 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
        func_0x00788c60(PTR__OBJC_CLASS___UIScreen_00ac2c50);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078c200();
        _objc_release(puVar2);
        param_1 = dVar3;
      }
      dVar3 = (double)(uVar1 & 0xffffffff) / param_1;
      puVar2 = PTR__OBJC_CLASS___UIImage_00ac2a88;
      func_0x0078c040(dVar3,dVar3,param_1,PTR__OBJC_CLASS___UIImage_00ac2a88,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00429d1c; end: 0042a023;  */

void FUN_00429d1c(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined **param_6,int param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar8 = param_6;
  dVar11 = param_1;
  _objc_retain(param_6);
  if (param_6 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    goto LAB_00429fd4;
  }
  dVar12 = dVar11;
  dVar13 = param_3;
  if (param_3 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
    func_0x00788c60(PTR__OBJC_CLASS___UIScreen_00ac2c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c200();
    dVar12 = dVar11;
    _objc_release(puVar1);
    dVar13 = dVar11;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  uStack_98 = *(undefined8 *)PTR__kCGImageSourceShouldCache_00999800;
  puStack_90 = PTR____kCFBooleanFalse_00999d20;
  ppuVar8 = &puStack_90;
  param_7 = (int)&uStack_98;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_6;
  _CGImageSourceCreateWithData(param_6,puVar1);
  if (ppuVar2 == (undefined **)0x0) {
LAB_00429e90:
    param_3 = dVar12;
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar8 = (undefined **)0x0;
    ppuVar3 = ppuVar2;
    _CGImageSourceCopyPropertiesAtIndex();
    if (ppuVar3 == (undefined **)0x0) {
      _CFRelease(ppuVar2);
      goto LAB_00429e90;
    }
    ppuVar4 = ppuVar3;
    func_0x00789f00();
    fVar10 = SUB84(dVar12,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0 || ppuVar5 == (undefined **)0x0) {
LAB_00429e5c:
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIImage_00ac2a88;
      func_0x00784740(param_3,PTR__OBJC_CLASS___UIImage_00ac2a88);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00783840(ppuVar4);
      dVar12 = (double)fVar10;
      dVar11 = dVar12;
      if (dVar12 < param_2 * dVar13) {
        func_0x00783840(ppuVar5);
        dVar11 = (double)SUB84(dVar12,0);
        if ((double)SUB84(dVar12,0) < param_2 * dVar13) goto LAB_00429e5c;
      }
      param_3 = dVar11;
      uStack_c8 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_009997f0;
      uStack_c0 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_009997f8;
      puStack_b0 = PTR____kCFBooleanTrue_00999d28;
      puStack_a8 = PTR____kCFBooleanTrue_00999d28;
      uStack_b8 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_00999808;
      puVar6 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
      func_0x00789c60();
      _objc_retainAutoreleasedReturnValue();
      param_7 = (int)&uStack_c8;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      puStack_a0 = puVar6;
      func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      ppuVar8 = ppuVar2;
      _CGImageSourceCreateThumbnailAtIndex(ppuVar2,0,puVar7);
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        param_7 = 0;
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIImage_00ac2a88;
        func_0x00784720(dVar13,PTR__OBJC_CLASS___UIImage_00ac2a88);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(ppuVar8);
        param_3 = dVar13;
      }
      _objc_release(puVar7);
    }
    _CFRelease(ppuVar2);
    ppuVar8 = param_6;
    func_0x0078a780();
    func_0x0078dc40(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar1);
  dVar11 = param_3;
LAB_00429fd4:
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_88) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar9 = ppuVar8;
      func_0x0078a780();
      if (ppuVar9 == (undefined **)((long)&MACH_HEADER.magic + 3)) {
        ppuVar9 = ppuVar8;
        if (param_7 == 0) {
          FUN_004296bc(dVar11,ppuVar8,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          FUN_00429380();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIImage_00ac2a88;
        func_0x00784740(dVar11,PTR__OBJC_CLASS___UIImage_00ac2a88);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x0078dc40();
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar9);
  return;
}



/* Entry: 0042a024; end: 0042a0e3;  */

void FUN_0042a024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 int param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  if (param_4 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar1 = param_4;
    func_0x0078a780();
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      puVar2 = param_4;
      if (param_5 == 0) {
        FUN_004296bc(param_1,param_4,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_00429380();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_00ac2a88;
      func_0x00784740(param_1,PTR__OBJC_CLASS___UIImage_00ac2a88);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0078dc40();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0042a0e4; end: 0042a0f3;  */

void FUN_0042a0e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_00ac2a88,
             PTR_s_sc_imageWithData_scale_isDecoded_00abdd28);
  return;
}



/* Entry: 0042a0f4; end: 0042a1c7; -[SCNotificationsExtensionSnapTokenAuthenticatedRequestsProvider initWithAPIClient:authToken:userId:] */

undefined1 *
FUN_0042a0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_00ac3af8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0042a1c8; end: 0042a2ef; -[SCNotificationsExtensionSnapTokenAuthenticatedRequestsProvider submitPostRequestWithEndpoint:data:completionPerformer:successBlock:failureBlock:] */

void FUN_0042a1c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_00999f30;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_0042a2f0;
  puStack_70 = &UNK_009e36a0;
  uStack_68 = param_5;
  uStack_60 = param_7;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00788d80(uVar1,param_2,param_3,param_4,0,PTR____NSDictionary0__struct_00999d18,
                  &PTR__OBJC_CLASS___NSConstantDictionary_00a595e0,uVar2,
                  &PTR____CFConstantStringClassReference_00a212a0,uVar3,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 0042a2f0; end: 0042a447;  */

void FUN_0042a2f0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    _objc_retain(param_3);
    func_0x0078a560(uVar2);
    _objc_release(param_3);
  }
  else {
    if (param_2 != 0) {
      func_0x00791ca0();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(param_4);
    func_0x0078a560(uVar2);
    _objc_release(param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 0042a448; end: 0042a45b;  */

void FUN_0042a448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042a458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0042a45c; end: 0042a48f;  */

void FUN_0042a45c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 0042a490; end: 0042a49f;  */

void FUN_0042a490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042a49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0042a4a0; end: 0042a4e3;  */

void FUN_0042a4a0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  return;
}



/* Entry: 0042a4e4; end: 0042a4eb; -[SCNotificationsExtensionSnapTokenAuthenticatedRequestsProvider deviceId] */

undefined8 FUN_0042a4e4(void)

{
  return 0;
}



/* Entry: 0042a4ec; end: 0042a533; -[SCNotificationsExtensionSnapTokenAuthenticatedRequestsProvider .cxx_destruct] */

void FUN_0042a4ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0042a534; end: 0042a5a7; -[SCSnapTokenExtensionLogger initWithBlizzardExtensionLogger:] */

undefined1 * FUN_0042a534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3b00;
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



/* Entry: 0042a5a8; end: 0042a61b; -[SCSnapTokenExtensionLogger logAccessTokenRetrievalSuccessLatencyWithMetricsInfo:token:] */

void FUN_0042a5a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00787be0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_00ac2c58;
    func_0x00783c40(PTR_PTR_00ac2c58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 8) != 0) {
      func_0x00788ac0(*(long *)(param_1 + 8),param_2,puVar2);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042a61c; end: 0042a663; -[SCSnapTokenExtensionLogger logAccessTokenRetrievalErrorWithError:forMetricsInfo:] */

void FUN_0042a61c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2c58;
  func_0x00783c20(PTR_PTR_00ac2c58);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00788ac0(*(long *)(param_1 + 8),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0042a664; end: 0042a667; -[SCSnapTokenExtensionLogger logSnapTokenSessionRequestSuccessWithLatencySecs:] */

void FUN_0042a664(void)

{
  return;
}



/* Entry: 0042a668; end: 0042a6af; -[SCSnapTokenExtensionLogger logSnapTokenSessionRequestErrorWithError:] */

void FUN_0042a668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2c58;
  func_0x00783c60(PTR_PTR_00ac2c58);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00788ac0(*(long *)(param_1 + 8),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0042a6b0; end: 0042a6b3; -[SCSnapTokenExtensionLogger logAccessTokenWithAgeInSeconds:asMeasuredOn:] */

void FUN_0042a6b0(void)

{
  return;
}



/* Entry: 0042a6b4; end: 0042a6b7; -[SCSnapTokenExtensionLogger logAccessTokenPrefetchInThePastErrorWithMagnitudeSecs:forType:] */

void FUN_0042a6b4(void)

{
  return;
}



/* Entry: 0042a6b8; end: 0042a6bb; -[SCSnapTokenExtensionLogger logSnapTokensOnLoginProcessedWithStatus:] */

void FUN_0042a6b8(void)

{
  return;
}



/* Entry: 0042a6bc; end: 0042a6bf; -[SCSnapTokenExtensionLogger logSnapTokensOnJanusLoginProcessedWithStatus:] */

void FUN_0042a6bc(void)

{
  return;
}



/* Entry: 0042a6c0; end: 0042a6c3; -[SCSnapTokenExtensionLogger logInvalidRefreshTokenOnAccessTokenFetchWithStatus:] */

void FUN_0042a6c0(void)

{
  return;
}



/* Entry: 0042a6c4; end: 0042a6c7; -[SCSnapTokenExtensionLogger logInvalidRefreshTokenOnSnapSessionFetchWithStatus:source:] */

void FUN_0042a6c4(void)

{
  return;
}



/* Entry: 0042a6c8; end: 0042a6cb; -[SCSnapTokenExtensionLogger logSuccesfulRefreshTokenOnSessionFetchWithSource:] */

void FUN_0042a6c8(void)

{
  return;
}



/* Entry: 0042a6cc; end: 0042a6cf; -[SCSnapTokenExtensionLogger logSnapTokenStorageHadToBeBackedUpWithOperation:] */

void FUN_0042a6cc(void)

{
  return;
}



/* Entry: 0042a6d0; end: 0042a6d3; -[SCSnapTokenExtensionLogger logSnapSessionStartWithoutRefreshToken] */

void FUN_0042a6d0(void)

{
  return;
}



/* Entry: 0042a6d4; end: 0042a6d7; -[SCSnapTokenExtensionLogger logAttestationTotalLatencyWithSecs:] */

void FUN_0042a6d4(void)

{
  return;
}



/* Entry: 0042a6d8; end: 0042a6db; -[SCSnapTokenExtensionLogger logAttestationGenerationLatencyWithSecs:] */

void FUN_0042a6d8(void)

{
  return;
}



/* Entry: 0042a6dc; end: 0042a6df; -[SCSnapTokenExtensionLogger logSnapTokenStorageLatency:forMethodWithName:] */

void FUN_0042a6dc(void)

{
  return;
}



/* Entry: 0042a6e0; end: 0042a6e3; -[SCSnapTokenExtensionLogger logAccessTokenFetchWithNeedsCloud1TLToken:] */

void FUN_0042a6e0(void)

{
  return;
}



/* Entry: 0042a6e4; end: 0042a6e7; -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageTokenDeleteOperationWithSuccess:errorCode:tokenType:] */

void FUN_0042a6e4(void)

{
  return;
}



/* Entry: 0042a6e8; end: 0042a6eb; -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageTokenReadOperationWithSuccess:errorCode:tokenType:] */

void FUN_0042a6e8(void)

{
  return;
}



/* Entry: 0042a6ec; end: 0042a6ef; -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageTokenWriteOperationWithSuccess:errorCode:tokenType:] */

void FUN_0042a6ec(void)

{
  return;
}



/* Entry: 0042a6f0; end: 0042a6f3; -[SCSnapTokenExtensionLogger logSnapTokenAccessPostInvalidation] */

void FUN_0042a6f0(void)

{
  return;
}



/* Entry: 0042a6f4; end: 0042a6f7; -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageAccessPostInvalidationWithOperation:] */

void FUN_0042a6f4(void)

{
  return;
}



/* Entry: 0042a6f8; end: 0042a703; -[SCSnapTokenExtensionLogger .cxx_destruct] */

void FUN_0042a6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0042a704; end: 0042a7db;  */

void _sc_extensionSnapTokenProvider(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCBlizzardExtensionLogger_00ac2b80;
  _objc_alloc(PTR__OBJC_CLASS___SCBlizzardExtensionLogger_00ac2b80);
  func_0x00786e20();
  uVar2 = param_1;
  FUN_0042a7dc(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0042a7dc; end: 0042a967;  */

void FUN_0042a7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2c60;
  _objc_alloc(PTR_PTR_00ac2c60);
  puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  func_0x00791520(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784b00(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_00ac2c68;
  _objc_alloc(PTR_PTR_00ac2c68);
  func_0x00784d40();
  puVar3 = PTR_PTR_00ac2c70;
  _objc_alloc(PTR_PTR_00ac2c70);
  func_0x00785ac0();
  puVar4 = PTR_PTR_00ac2c78;
  _objc_alloc(PTR_PTR_00ac2c78);
  func_0x00786640();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 0042a968; end: 0042aabb; -[SCSnapTokenAccessTokenFetchOperation initWithAccessType:isPrefetch:isTrySyncFirst:isSyncBlockExecution:successQueue:failureQueue:successBlock:failureBlock:] */

undefined1 *
FUN_0042a968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_00ac3b08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    puVar2 = PTR_PTR_00ac2c80;
    _objc_alloc();
    func_0x00784b40();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar3);
    uVar3 = param_9;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_10;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 0042aabc; end: 0042ab77; -[SCSnapTokenAccessTokenFetchOperation sendSuccess:] */

void FUN_0042aabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
    if (*(char *)(param_1 + 8) == '\x01') {
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_00999f30;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_0042ab78;
      puStack_48 = &UNK_009e36d0;
      lStack_40 = param_1;
      _objc_retain(param_3);
      uStack_38 = param_3;
      _dispatch_async(lVar2,&puStack_60);
      _objc_release(uStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 0042ab78; end: 0042ab87;  */

void FUN_0042ab78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0042ab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 0042ab88; end: 0042ac43; -[SCSnapTokenAccessTokenFetchOperation sendFailure:] */

void FUN_0042ab88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    if (*(char *)(param_1 + 8) == '\x01') {
      (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_00999f30;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_0042ac44;
      puStack_48 = &UNK_009e36d0;
      lStack_40 = param_1;
      _objc_retain(param_3);
      uStack_38 = param_3;
      _dispatch_async(lVar2,&puStack_60);
      _objc_release(uStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 0042ac44; end: 0042ac53;  */

void FUN_0042ac44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0042ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 0042ac54; end: 0042ac5b; -[SCSnapTokenAccessTokenFetchOperation accessType] */

undefined8 FUN_0042ac54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0042ac5c; end: 0042ac63; -[SCSnapTokenAccessTokenFetchOperation isSyncBlockExecution] */

undefined1 FUN_0042ac5c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0042ac64; end: 0042ac6b; -[SCSnapTokenAccessTokenFetchOperation setIsSyncBlockExecution:] */

void FUN_0042ac64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}


