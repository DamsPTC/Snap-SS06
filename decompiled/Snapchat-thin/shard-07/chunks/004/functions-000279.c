/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055122cc; end: 1055122ef;  */

void FUN_1055122cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055122e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1055122f0; end: 105512383;  */

void FUN_1055122f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105512384;
  puStack_40 = &UNK_11085b7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uStack_30);
  return;
}



/* Entry: 105512384; end: 1055123f7;  */

void FUN_105512384(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de8138;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de8138,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 1055123f8; end: 105512433; -[SCGroupsDataMutator maxParticipantsAllowedInGroup] */

undefined8 FUN_1055123f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x000108ef1f68(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105512434; end: 105512473; -[SCGroupsDataMutator maxParticipantsAllowedInCommunityGroup] */

undefined8 FUN_105512434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105512474; end: 1055124ef; -[SCGroupsDataMutator _logUpdateGroupNameWithGroupId:] */

void FUN_105512474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba350;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c8600();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055124f0; end: 105512693; -[SCGroupsDataMutator _logAddToGroupWithGroupId:snapchatters:phoneNumbers:source:] */

void FUN_1055124f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110894080);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  uVar3 = 9;
  uStack_60 = param_6;
  _dispatch_get_global_queue(9,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105512694; end: 1055126df;  */

void FUN_105512694(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2;
  }
  _objc_retain(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055126e0; end: 10551273b;  */

void FUN_1055126e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be500e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10551273c; end: 10551289f; -[SCGroupsDataMutator _logAddToGroupWithGroup:groupId:userIds:phoneNumbers:source:] */

void FUN_10551273c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf446e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ba358;
  _objc_opt_new(PTR_PTR_1126ba358);
  func_0x00010c1c8600();
  _objc_release(param_4);
  func_0x00010c184460(puVar1);
  func_0x00010c206c40(puVar1);
  func_0x00010c06ecc0(param_3);
  func_0x00010c1b00c0(puVar1);
  uVar3 = param_3;
  func_0x00010bf33480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c17f780(puVar1);
  _objc_release(uVar3);
  lVar2 = param_6;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_6;
    func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_1108940d0);
    func_0x00010c1aece0(puVar1);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1055128a0; end: 1055128af;  */

void FUN_1055128a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_SHA256HexString__11254e320,param_2);
  return;
}



/* Entry: 1055128b0; end: 10551296f; -[SCGroupsDataMutator _logLeaveGroupWithGroupId:countExcludingUser:communityId:] */

void FUN_1055128b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba360;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c8600();
  _objc_release(param_3);
  func_0x00010c1e88a0(puVar1,param_2,param_4);
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c17f780(puVar1,param_2,param_5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105512970; end: 105512adf; -[SCGroupsDataMutator _logChatNotificationMuteWithGroupId:muteDurationMinutes:source:] */

void FUN_105512970(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_38);
    _objc_retain(param_3);
    uStack_48 = 4;
    uVar2 = 9;
    uStack_40 = param_5;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010be519a0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105512ae0; end: 105512b63;  */

void FUN_105512ae0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0ca4e0(param_2);
    func_0x00010bf37100(param_2);
    func_0x00010be519a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105512b64; end: 105512c3f; -[SCGroupsDataMutator _logChatNotificationMuteWithGroupId:mentionNotificationOn:chatNotificationOn:muteAction:source:] */

void FUN_105512b64(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = 3;
  if (param_5 == 0) {
    lVar2 = 1;
  }
  lVar1 = 0;
  if (param_5 == 0) {
    lVar1 = 2;
  }
  if (param_4 == 0) {
    lVar1 = lVar2;
  }
  uVar4 = *(undefined8 *)(&UNK_10ddb12e0 + lVar1 * 8);
  puVar3 = PTR_PTR_1126ba368;
  _objc_opt_new(PTR_PTR_1126ba368);
  func_0x00010c1c8600();
  _objc_release(param_3);
  func_0x00010c1ce740(puVar3,param_2,uVar4);
  func_0x00010c1ca600(puVar3,param_2,param_6);
  func_0x00010c206c40(puVar3,param_2,param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105512c40; end: 105512d07; -[SCGroupsDataMutator _logCallingNotificationMuteWithGroupId:muteAction:source:] */

void FUN_105512c40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba370;
  _objc_opt_new(PTR_PTR_1126ba370);
  func_0x00010c1ce740();
  func_0x00010c1c8600(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ca600(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105512d08; end: 105512f77; -[SCGroupsDataMutator _leaveConversationWithGroupId:group:completion:] */

void FUN_105512d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ef4e14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  uVar5 = param_4;
  func_0x00010c06ecc0();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_4;
    func_0x00010bf33480();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_78,param_1);
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105512f78;
  puStack_a8 = &UNK_110845158;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  uStack_98 = uVar5;
  uStack_80 = uVar1;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar3);
  puVar4 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e160();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105512f78; end: 105512fe7;  */

void FUN_105512f78(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105512fe8; end: 1055130a3; -[SCGroupsDataMutator _handleLeaveConversationSuccessWithGroupId:countExcludingUser:communityId:completion:] */

void FUN_105512fe8(undefined8 param_1)

{
  long in_x5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(in_x5);
  func_0x00010be55280(param_1);
  if (in_x5 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1055130a4;
    puStack_50 = &UNK_110849530;
    _objc_retain(in_x5);
    lStack_48 = in_x5;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
  }
  _objc_release(in_x5);
  return;
}



/* Entry: 1055130a4; end: 1055130b7;  */

void FUN_1055130a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055130b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 1055130b8; end: 10551318f; -[SCGroupsDataMutator _handleLeaveConversationFailureWithCompletion:] */

void FUN_1055130b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x105513140;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105513190; end: 1055131fb; -[SCGroupsDataMutator .cxx_destruct] */

void FUN_105513190(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055131fc; end: 10551339f; -[SCGroupsDataTracker didGroupsUpdateDataRequest:] */

void FUN_1055131fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105513284;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 1055133a0; end: 1055134c7;  */

/* WARNING: Possible PIC construction at 0x000105513454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105513458) */
/* WARNING: Removing unreachable block (ram,0x00010551346c) */
/* WARNING: Removing unreachable block (ram,0x000105513420) */

void FUN_1055133a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar2 = lRam0000000000000000;
    func_0x00010bfceb20(lRam0000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,PTR_s_didUpdateGroupsDataRequest_group_1125bd240,uVar3,lVar2);
  return;
}



/* Entry: 1055134c8; end: 1055134f3;  */

void FUN_1055134c8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateGroupsDataRequest_group_1125bd240,0,param_2);
  return;
}



/* Entry: 1055134f4; end: 10551358b; -[SCGroupsDataTracker didUpdateDataRequest:groupId:] */

void FUN_1055134f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10551358c;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10551358c; end: 10551359f;  */

void FUN_10551358c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateGroupsDataRequest_group_1125bd240,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055135a0; end: 1055135a7; -[SCGroupsDataTracker removeListener:] */

void FUN_1055135a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1055135a8; end: 1055136c7; -[SCGroupsDataTracker groupObservableForGroupId:] */

void FUN_1055135a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1055136c8;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055136c8; end: 1055136ff;  */

void FUN_1055136c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c288580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105513700; end: 10551370b;  */

void FUN_105513700(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_objectForKeyedSubscript__112615a50,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10551370c; end: 105513713; -[SCGroupsDataTracker allGroupsObservable] */

void FUN_10551370c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 105513714; end: 10551378b; -[SCGroupsDataTracker didBeginLeavingGroupWithId:] */

void FUN_105513714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf7e260(uVar2,param_2,0,param_3);
  puVar1 = PTR_PTR_1126ba380;
  func_0x00010c08e320(PTR_PTR_1126ba380,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf77240(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10551378c; end: 10551381f; -[SCGroupsDataTracker didChangeInfoForGroup:] */

void FUN_10551378c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e260(uVar3,param_2,1,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ba380;
  func_0x00010c28c7a0(PTR_PTR_1126ba380,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf77240(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105513820; end: 10551386f; -[SCGroupsDataTracker .cxx_destruct] */

void FUN_105513820(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105513870; end: 1055139c7; -[SCGroupsDataUpdater upsertGroupWithConversation:conversationId:completion:] */

void FUN_105513870(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf509a0();
  if (lVar1 == 1) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055139c8; end: 1055139ff;  */

void FUN_1055139c8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee61a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105513a00; end: 105513ac7; -[SCGroupsDataUpdater didCreateConversation:] */

void FUN_105513a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105513ac8;
  puStack_40 = &UNK_110893e60;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c28f100(param_1,param_2,param_3,uVar2,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105513ac8; end: 105513acb;  */

void FUN_105513ac8(void)

{
  return;
}



/* Entry: 105513acc; end: 105513ba7; -[SCGroupsDataUpdater didRemoveConversation:] */

void FUN_105513acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105513ba8; end: 105513c73;  */

void FUN_105513ba8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c272380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c12ca60(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105513c74; end: 105513cc7;  */

void FUN_105513c74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c272380(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcba00(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105513cc8; end: 105513d37; -[SCGroupsDataUpdater didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_105513cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010c272380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28f100(param_1,param_2,param_4,param_3,0);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105513d38; end: 105513d3b; -[SCGroupsDataUpdater didSendStart:] */

void FUN_105513d38(void)

{
  return;
}



/* Entry: 105513d3c; end: 105513d3f; -[SCGroupsDataUpdater didSendComplete:] */

void FUN_105513d3c(void)

{
  return;
}



/* Entry: 105513d40; end: 105513dbb; -[SCGroupsDataUpdater didConversationReset:messages:] */

void FUN_105513d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f100(param_1,param_2,param_3,uVar2,0);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105513dbc; end: 105513dbf; -[SCGroupsDataUpdater didStartSnapchattersUpdateDataRequest:] */

void FUN_105513dbc(void)

{
  return;
}



/* Entry: 105513dc0; end: 105513eab; -[SCGroupsDataUpdater didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105513dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105513eac;
    puStack_20 = &UNK_110855640;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105513ef0;
    puStack_48 = &UNK_1108941c0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x105513f7c;
    puStack_70 = &UNK_110866b00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x105513fc0;
    puStack_98 = &UNK_110862228;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x105514004;
    puStack_c0 = &UNK_110851800;
    uStack_b8 = param_1;
    uStack_90 = param_1;
    uStack_68 = param_1;
    uStack_40 = param_1;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,&puStack_38,&puStack_60,0,0,&puStack_88,&puStack_b0,
                        &puStack_d8,0,0);
  }
  return;
}



/* Entry: 105513eac; end: 105514047;  */

void FUN_105513eac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30860(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105514048; end: 1055148fb; -[SCGroupsDataUpdater _upsertGroupWithConversation:conversationId:completion:] */

void FUN_105514048(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **unaff_x24;
  undefined **ppuVar7;
  undefined *puVar8;
  uint uVar9;
  undefined **unaff_x26;
  undefined8 uVar10;
  undefined1 auStack_1f8 [8];
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = *(undefined ***)(param_1 + 0x30);
  func_0x00010bfce700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c079960();
  if (((ulong)ppuVar2 & 1) == 0) {
    _objc_retain(param_3);
    _objc_retain(ppuVar1);
    if (param_3 == (undefined **)0x0 && ppuVar1 == (undefined **)0x0) {
LAB_1055140d8:
      _objc_release(ppuVar1);
      _objc_release(param_3);
      if (param_5 != 0) {
        param_2 = ppuVar1;
        (**(code **)(param_5 + 0x10))(param_5,ppuVar1);
      }
      goto LAB_10551487c;
    }
    if (((param_3 != (undefined **)0x0) && (ppuVar1 != (undefined **)0x0)) &&
       (ppuVar2 = param_3, func_0x00010bf509a0(), ppuVar2 == (undefined **)0x1)) {
      _objc_retain(ppuVar1);
      _objc_retain(param_3);
      ppuVar2 = param_3;
      func_0x00010bf370e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010bf69d60();
      ppuVar3 = ppuVar1;
      func_0x00010c0dca60();
      ppuStack_188 = (undefined **)
                     CONCAT44(ppuStack_188._4_4_,
                              (uint)(ppuVar7 != (undefined **)0x1) ^ (uint)ppuVar3);
      _objc_release(ppuVar2);
      ppuVar2 = param_3;
      func_0x00010bf370e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010bf69d60();
      ppuStack_190 = (undefined **)
                     CONCAT44(ppuStack_190._4_4_,
                              (uint)(((ulong)((long)ppuVar7 - 1U) & 0xfffffffffffffffd) != 0));
      ppuVar7 = ppuVar1;
      func_0x00010c0ca4e0();
      ppuStack_198 = (undefined **)CONCAT44(ppuStack_198._4_4_,(int)ppuVar7);
      _objc_release(ppuVar2);
      ppuVar2 = param_3;
      func_0x00010bf370e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010bf69d60();
      ppuStack_1a0 = (undefined **)
                     CONCAT44(ppuStack_1a0._4_4_,
                              (uint)(ppuVar7 == (undefined **)0x0 || ppuVar7 == (undefined **)0x3));
      ppuVar7 = ppuVar1;
      func_0x00010bf37100();
      uStack_1a4 = (uint)ppuVar7;
      _objc_release(ppuVar2);
      ppuVar2 = param_3;
      func_0x00010bf28800();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010bf69d60();
      uStack_1a8 = (uint)(ppuVar7 != (undefined **)0x1);
      ppuVar7 = ppuVar1;
      func_0x00010bf098e0();
      _objc_release(ppuVar2);
      ppuVar2 = param_3;
      func_0x000107d062b4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar1;
      func_0x00010bf37000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar2);
      ppuVar4 = param_3;
      func_0x000107d06334();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      ppuVar5 = ppuVar1;
      func_0x00010bf28180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)ppuStack_188 & 1) == 0) {
        if ((((((uint)ppuStack_198 ^ (uint)ppuStack_190) & 1) == 0) &&
            (((uStack_1a4 ^ (uint)ppuStack_1a0) & 1) == 0)) &&
           ((((uStack_1a8 ^ (uint)ppuVar7) & 1) == 0 &&
            ((ppuVar2 == ppuVar3 && (ppuVar4 == ppuVar5)))))) {
          ppuVar2 = param_3;
          func_0x00010c2711a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078c00();
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuVar7 = ppuStack_188;
          if ((int)puVar8 == 0) {
LAB_10551433c:
            ppuStack_188 = ppuVar7;
            ppuVar7 = param_3;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar1;
            func_0x00010bfcef60();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(ppuVar7);
            _objc_retain(ppuVar3);
            if (ppuVar7 == ppuVar3) {
              uVar9 = 0;
            }
            else if (ppuVar3 == (undefined **)0x0) {
              uVar9 = 1;
            }
            else {
              ppuVar4 = ppuVar7;
              func_0x00010c071ae0();
              uVar9 = (uint)ppuVar4 ^ 1;
            }
            _objc_release(ppuVar3);
            _objc_release(ppuVar7);
            _objc_release(ppuVar3);
            _objc_release(ppuVar7);
            if ((int)puVar8 != 0) {
              _objc_release(ppuStack_188);
            }
            _objc_release(ppuVar2);
            if ((uVar9 & 1) != 0) goto LAB_105514770;
          }
          else {
            ppuVar7 = ppuVar1;
            func_0x00010bfcef60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c078c00();
            if ((int)puVar6 == 0) goto LAB_10551433c;
            _objc_release(ppuVar7);
            _objc_release(ppuVar2);
          }
          ppuVar2 = param_3;
          func_0x00010bf1d700();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar2;
          func_0x00010bf529e0();
          ppuVar3 = ppuVar1;
          func_0x00010bf1d700();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010bf529e0();
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          if (ppuVar7 == ppuVar4) {
            ppuVar2 = param_3;
            func_0x00010c0dada0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar2;
            func_0x00010bf529e0();
            ppuVar3 = ppuVar1;
            func_0x00010c0dada0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010bf529e0();
            _objc_release(ppuVar3);
            _objc_release(ppuVar2);
            if (ppuVar7 == ppuVar4) {
              uStack_118 = 0;
              uStack_120 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
              lStack_138 = 0;
              uStack_140 = 0;
              uStack_128 = 0;
              puStack_130 = (ulong *)0x0;
              ppuVar2 = param_3;
              func_0x00010c0dada0();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_190 = ppuVar2;
              func_0x00010bf52a60();
              if (ppuVar2 != (undefined **)0x0) {
                ppuStack_188 = (undefined **)*puStack_130;
                do {
                  ppuVar7 = (undefined **)0x0;
                  do {
                    if ((undefined **)*puStack_130 != ppuStack_188) {
                      _objc_enumerationMutation(ppuStack_190);
                    }
                    uVar10 = *(undefined8 *)(lStack_138 + (long)ppuVar7 * 8);
                    ppuVar3 = ppuVar1;
                    func_0x00010c0dada0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c272380(uVar10);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar4 = ppuVar3;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(uVar10);
                    _objc_release(ppuVar3);
                    if (ppuVar4 == (undefined **)0x0) {
                      _objc_release(ppuStack_190);
                      goto LAB_105514770;
                    }
                    ppuVar7 = (undefined **)((long)ppuVar7 + 1);
                  } while (ppuVar2 != ppuVar7);
                  ppuVar2 = ppuStack_190;
                  func_0x00010bf52a60();
                } while (ppuVar2 != (undefined **)0x0);
              }
              _objc_release(ppuStack_190);
              ppuVar2 = param_3;
              FUN_105509360();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar1;
              func_0x00010bf5ab40(ppuVar1);
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar2;
              param_2 = ppuVar7;
              func_0x00010bd86de8(ppuVar2,ppuVar7);
              _objc_release(ppuVar7);
              _objc_release(ppuVar2);
              if ((int)ppuVar3 != 0) {
                ppuVar2 = param_3;
                func_0x00010c0f4aa0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar2;
                func_0x00010bf529e0();
                unaff_x26 = ppuVar1;
                func_0x00010c0ecc20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = unaff_x26;
                func_0x00010bf529e0();
                _objc_release(unaff_x26);
                _objc_release(ppuVar2);
                if (ppuVar7 == ppuVar3) {
                  ppuVar2 = param_3;
                  func_0x00010c076ee0();
                  ppuVar7 = ppuVar1;
                  func_0x00010c076ea0();
                  if ((int)ppuVar2 == (int)ppuVar7) {
                    unaff_x24 = param_3;
                    func_0x00010c0f4aa0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar2 = unaff_x24;
                    func_0x00010bf529e0();
                    _objc_release(unaff_x24);
                    if (ppuVar2 != (undefined **)0x0) {
                      ppuStack_188 = (undefined **)0x0;
                      do {
                        ppuVar2 = param_3;
                        func_0x00010c0f4aa0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_190 = ppuVar2;
                        func_0x00010c0dfd40();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_198 = ppuVar2;
                        func_0x00010c0f4a60();
                        _objc_retainAutoreleasedReturnValue();
                        ppuStack_1a0 = ppuVar2;
                        func_0x00010c272380();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x26 = ppuVar1;
                        func_0x00010c0ecc20(ppuVar1);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar7 = unaff_x26;
                        func_0x00010c0dfd40();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar3 = ppuVar7;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar4 = ppuVar2;
                        param_2 = ppuVar3;
                        func_0x00010bd86de8(ppuVar2,ppuVar3);
                        _objc_release(ppuVar3);
                        _objc_release(ppuVar7);
                        _objc_release(unaff_x26);
                        _objc_release(ppuVar2);
                        _objc_release(ppuStack_1a0);
                        _objc_release(ppuStack_198);
                        _objc_release(ppuStack_190);
                        if (((ulong)ppuVar4 & 1) == 0) goto LAB_105514770;
                        unaff_x24 = param_3;
                        func_0x00010c0f4aa0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar2 = unaff_x24;
                        func_0x00010bf529e0();
                        _objc_release(unaff_x24);
                        ppuStack_188 = (undefined **)((long)ppuStack_188 + 1);
                      } while (ppuStack_188 < ppuVar2);
                    }
                    goto LAB_1055140d8;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_105514770:
    _objc_release(ppuVar1);
    _objc_release(param_3);
  }
  unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_f8 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = param_4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(apuStack_f0,param_1);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1055148fc;
  puStack_168 = &UNK_110894250;
  unaff_x26 = &puStack_180;
  param_2 = apuStack_f0;
  _objc_copyWeak(auStack_148,param_2);
  _objc_retain(unaff_x24);
  ppuStack_160 = unaff_x24;
  _objc_retain(puVar8);
  puStack_158 = puVar8;
  _objc_retain(param_5);
  lStack_150 = param_5;
  func_0x00010be12320(param_1);
  _objc_release(lStack_150);
  _objc_release(puStack_158);
  _objc_release(ppuStack_160);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(apuStack_f0);
  _objc_release(puVar8);
  _objc_release(unaff_x24);
LAB_10551487c:
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 7);
  _objc_destroyWeak(apuStack_f0);
  ppuVar7 = param_3;
  __Unwind_Resume();
  pcStack_1b8 = FUN_1055148fc;
  ppuStack_1f0 = unaff_x24;
  lStack_1e8 = param_1;
  ppuStack_1e0 = ppuVar1;
  lStack_1d8 = param_5;
  uStack_1d0 = param_4;
  ppuStack_1c8 = param_3;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  ppuVar2 = ppuVar7 + 7;
  _objc_loadWeakRetained(ppuVar2);
  puVar8 = ppuVar7[6];
  _objc_retain(puVar8);
  _objc_copyWeak(auStack_1f8,ppuVar7 + 7);
  func_0x00010bee61c0(ppuVar2);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puVar8);
  _objc_release(param_2);
  return;
}



/* Entry: 1055148fc; end: 1055149e3;  */

void FUN_1055148fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  func_0x00010bee61c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1055149e4; end: 105514a8b;  */

void FUN_1055149e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    _objc_release(param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbe60(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105514a8c; end: 105514b43;  */

void FUN_105514a8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105514b44; end: 105514b73;  */

void FUN_105514b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105514b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105514b74; end: 105515053;  */

undefined8 FUN_105514b74(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar8 == 0) {
    uVar9 = 0;
    goto LAB_105514e0c;
  }
  _objc_retain(param_2);
  _objc_retain(uVar8);
  if (param_2 == 0) {
LAB_105514df8:
    uVar9 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bf509a0();
    uVar10 = uVar8;
    func_0x00010bf509a0();
    if (uVar1 != uVar10) goto LAB_105514df8;
    uVar1 = param_2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar10);
    if (uVar1 != uVar10) {
      uVar2 = uVar1;
      if (uVar10 != 0) {
        func_0x00010c071ae0();
        _objc_release(uVar10);
        _objc_release(uVar1);
        _objc_release(uVar10);
        _objc_release(uVar1);
        if ((uVar2 & 1) == 0) goto LAB_105514df8;
        goto LAB_105514cb0;
      }
LAB_105514de8:
      _objc_release(uVar1);
      _objc_release(uVar2);
      goto LAB_105514df8;
    }
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_release(uVar1);
LAB_105514cb0:
    uVar1 = param_2;
    func_0x00010c085be0();
    uVar10 = uVar8;
    func_0x00010c085be0();
    if (uVar1 != uVar10) goto LAB_105514df8;
    uVar1 = param_2;
    func_0x00010bf5a660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf5a660();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar10);
    if (uVar1 == uVar10) {
      _objc_release(uVar10);
      _objc_release(uVar1);
      _objc_release(uVar10);
      _objc_release(uVar1);
    }
    else {
      uVar2 = uVar1;
      if (uVar10 == 0) goto LAB_105514de8;
      func_0x00010c071ae0();
      _objc_release(uVar10);
      _objc_release(uVar1);
      _objc_release(uVar10);
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) goto LAB_105514df8;
    }
    uVar1 = param_2;
    func_0x00010bf508e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf508e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar10);
    if (uVar1 == uVar10) {
      _objc_release(uVar10);
      _objc_release(uVar1);
      _objc_release(uVar10);
      _objc_release(uVar1);
    }
    else {
      uVar2 = uVar1;
      if (uVar10 == 0) goto LAB_105514de8;
      func_0x00010c071ae0();
      _objc_release(uVar10);
      _objc_release(uVar1);
      _objc_release(uVar10);
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) goto LAB_105514df8;
    }
    uVar1 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010bf529e0();
    uVar2 = uVar8;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar10 != uVar3) goto LAB_105514df8;
    uVar1 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar10 != 0) {
      uVar10 = 0;
      do {
        uVar2 = param_2;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c0f4a60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0f4a60();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar3);
        _objc_retain(uVar6);
        if (uVar3 == uVar6) {
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          _objc_release(uVar2);
        }
        else {
          if (uVar6 == 0) {
            _objc_release();
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar3);
            goto LAB_105514de8;
          }
          uVar7 = uVar3;
          func_0x00010c071ae0();
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          _objc_release(uVar2);
          if ((uVar7 & 1) == 0) goto LAB_105514df8;
        }
        uVar10 = uVar10 + 1;
        uVar1 = param_2;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
      } while (uVar10 < uVar2);
    }
    uVar9 = 1;
  }
  _objc_release(uVar8);
  _objc_release(param_2);
LAB_105514e0c:
  _objc_release(uVar8);
  _objc_release(param_2);
  return uVar9;
}



/* Entry: 105515054; end: 10551509b;  */

void FUN_105515054(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10551509c; end: 1055151f3; -[SCGroupsDataUpdater _performUpsertGroupsWithConversations:conversationIds:snapchatterUserIdToSnapchatter:completion:] */

void FUN_10551509c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055151f4; end: 10551522b;  */

void FUN_1055151f4(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee61c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10551522c; end: 105515333; -[SCGroupsDataUpdater _handleSnapchattersUpdate:] */

void FUN_10551522c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105515334; end: 10551537b;  */

void FUN_105515334(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10551537c; end: 1055154ab; -[SCGroupsDataUpdater _handleSnapchatterUpdate:forceUpdate:] */

void FUN_10551537c(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    func_0x00010c2448c0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1055154ac; end: 105515503;  */

void FUN_1055154ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105515504; end: 10551570f; -[SCGroupsDataUpdater _updateGroupsForUpdatedSnapchatter:snapchatterUserId:forceUpdate:] */

void FUN_105515504(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be24b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 0) goto LAB_1055156dc;
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108ef3c74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_10550b768();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
LAB_105515638:
    if (param_5 != 0) {
      func_0x00010bdcbe80(param_1);
    }
  }
  else {
    uVar3 = uVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(uVar2);
    if (uVar3 == uVar2) {
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar3);
      goto LAB_105515638;
    }
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar3);
    }
    else {
      uVar5 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) goto LAB_105515638;
    }
    uVar3 = uVar1;
    func_0x00010550afdc(uVar1,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    func_0x00010c11c5e0(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar4);
LAB_1055156dc:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105515710; end: 10551574b;  */

void FUN_105515710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbe80(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10551574c; end: 10551584b; -[SCGroupsDataUpdater _updateGroupsForUpdatedSnapchatters:] */

void FUN_10551574c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_110894520,
                      &PTR___NSConcreteGlobalBlock_110894540);
  lVar1 = param_1;
  func_0x00010be24ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    FUN_10550b7ec(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(lVar2);
      func_0x00010c11c5e0(uVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10551584c; end: 105515853;  */

void FUN_10551584c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105515854; end: 1055158b7;  */

void FUN_105515854(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055158b8; end: 10551597f; -[SCGroupsDataUpdater _groupsToUpdateForSnapchattersUpdate:] */

void FUN_1055158b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105515980;
  puStack_40 = &UNK_110893b70;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x000100504554(uVar2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105515980; end: 105515aeb;  */

void FUN_105515980(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_120;
    unaff_x22 = lVar6;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        puVar2 = *(undefined1 **)(lStack_128 + lVar6 * 8);
        lVar4 = *(long *)(param_1 + 0x20);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = (undefined8 *)puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        if (lVar4 != 0) {
          _objc_retain(param_2);
          lVar6 = param_2;
          goto LAB_105515a9c;
        }
        lVar6 = lVar6 + 1;
      } while (unaff_x22 != lVar6);
      unaff_x22 = lVar1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  lVar6 = 0;
LAB_105515a9c:
  _objc_release(lVar1);
  lVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105515aec;
    lStack_160 = unaff_x22;
    lStack_158 = lVar6;
    lStack_150 = lVar1;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    lVar5 = *(long *)(lVar5 + 0x30);
    func_0x00010bf00160(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_105515bb4;
    puStack_170 = &UNK_110893b70;
    puStack_168 = (undefined1 *)puVar3;
    _objc_retain(puVar3);
    lVar6 = lVar1;
    func_0x000100504554(lVar1,&puStack_188);
    _objc_release(puStack_168);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105515aec; end: 105515bb3; -[SCGroupsDataUpdater _groupsToUpdateForSnapchatterUpdate:] */

void FUN_105515aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105515bb4;
  puStack_40 = &UNK_110893b70;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x000100504554(uVar2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105515bb4; end: 105515d0b;  */

void FUN_105515bb4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar6 = (int)lVar7;
  do {
    if (lVar9 == 0) {
      lVar9 = 0;
LAB_105515cbc:
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
        return;
      }
      ___stack_chk_fail();
      lVar9 = *(long *)(param_2 + 0x28);
      if (iVar6 == 0) {
        if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105515d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar9 + 0x10))(lVar9,0);
          return;
        }
      }
      else if (lVar9 != 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf51e00(uVar5);
        (**(code **)(lVar9 + 0x10))(lVar9,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar10 * 8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      iVar6 = (int)lVar7;
      if ((uVar4 & 1) != 0) {
        _objc_retain(param_2);
        lVar9 = param_2;
        goto LAB_105515cbc;
      }
      lVar10 = lVar10 + 1;
    } while (lVar9 != lVar10);
    lVar9 = lVar2;
    func_0x00010bf52a60();
    iVar6 = (int)lVar7;
  } while( true );
}



/* Entry: 105515d0c; end: 105515dbf;  */

void FUN_105515d0c(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105515d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      return;
    }
  }
  else if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105515dc0; end: 105515eeb;  */

void FUN_105515dc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c84e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar3 = lVar4;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
  else {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar3 = lVar4;
    func_0x00010bf00560(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf00d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be12300(param_1);
    _objc_release(uVar1);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105515eec; end: 105516077; -[SCGroupsDataUpdater _fetchLocalSnapchattersForConversations:completion:] */

void FUN_105515eec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105515fdc;
  puStack_48 = &UNK_110854320;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c244e80(uVar1,param_2,param_3,uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105516078; end: 105516457; -[SCGroupsDataUpdater _fetchLocalAndRemoteSnapchatters:localSnapchatters:conversations:conversationIds:completion:] */

ulong FUN_105516078(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105516458;
  puStack_118 = &UNK_110894470;
  uVar1 = param_5;
  lStack_110 = param_1;
  func_0x0001006372a4(param_5,&puStack_130);
  puStack_158 = (undefined *)ppuVar8;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1055164c8;
  puStack_140 = &UNK_110856a28;
  lVar2 = param_6;
  lStack_138 = param_1;
  func_0x0001006372a4(param_6,&puStack_158);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    if (param_7 != 0) {
      uVar4 = param_4;
      func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_110ad45a0,
                          &PTR___NSConcreteGlobalBlock_110ad45c0);
      (**(code **)(param_7 + 0x10))(param_7,uVar4);
      _objc_release(uVar4);
    }
  }
  else {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar7 = *plStack_190;
      do {
        lVar6 = 0;
        do {
          if (*plStack_190 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x68));
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x3032000000;
    pcStack_1b8 = FUN_1055164ec;
    uStack_1b0 = 0x1055164fc;
    uStack_1a8 = 0;
    _objc_initWeak(auStack_1d8,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = (undefined *)ppuVar8;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_105516504;
    puStack_1f8 = &UNK_110894600;
    puStack_1e0 = &uStack_1d0;
    _objc_retain(param_4);
    uStack_1f0 = param_4;
    _objc_retain(param_7);
    puStack_258 = (undefined *)ppuVar8;
    uStack_250 = 0xc2000000;
    pcStack_248 = FUN_105516598;
    puStack_240 = &UNK_110894630;
    ppuVar8 = &puStack_258;
    lStack_1e8 = param_7;
    _objc_copyWeak(auStack_218,auStack_1d8);
    _objc_retain(lVar2);
    lStack_238 = lVar2;
    puStack_220 = &uStack_1d0;
    _objc_retain(uVar1);
    uStack_230 = uVar1;
    _objc_retain(param_3);
    uStack_228 = param_3;
    func_0x00010c244ec0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
    _objc_release(lStack_238);
    _objc_destroyWeak(auStack_218);
    _objc_release(lStack_1e8);
    _objc_release(uStack_1f0);
    _objc_destroyWeak(auStack_1d8);
    __Block_object_dispose(&uStack_1d0,8);
    _objc_release(uStack_1a8);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 8);
  _objc_destroyWeak(auStack_1d8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_1d0,8);
  __Unwind_Resume();
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x68);
  func_0x00010bf50280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return (ulong)((uint)uVar5 ^ 1);
}



/* Entry: 105516458; end: 1055164c7;  */

uint FUN_105516458(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1055164c8; end: 1055164eb;  */

uint FUN_1055164c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1055164ec; end: 105516503;  */

void FUN_1055164ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105516504; end: 105516597;  */

void FUN_105516504(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf09f80(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010050471c(uVar1,&PTR___NSConcreteGlobalBlock_110ad45a0,
                        &PTR___NSConcreteGlobalBlock_110ad45c0);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105516598; end: 1055166ef;  */

void FUN_105516598(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  undefined **ppuStack_228;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar10 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar10);
    param_4 = auStack_e8;
    param_5 = 0x10;
    lVar3 = lVar10;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar10);
          }
          func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x68));
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        param_4 = auStack_e8;
        param_5 = 0x10;
        lVar3 = lVar10;
        puVar9 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar10);
    puVar8 = (undefined1 *)puVar9;
    if (param_3 == (undefined1 *)0x0) {
      param_4 = *(undefined1 **)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      param_6 = *(undefined8 *)(param_1 + 0x20);
      param_5 = *(undefined8 *)(param_1 + 0x28);
      puVar8 = param_2;
      func_0x00010bee6180(lVar2);
    }
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = puVar8;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010050471c();
  _objc_initWeak(auStack_1b0,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x105516a8c;
  puStack_1c0 = &UNK_110842c58;
  _objc_copyWeak(auStack_1b8,auStack_1b0);
  ppuVar6 = &puStack_1d8;
  _objc_retainBlock();
  puVar7 = PTR_PTR_1126ba388;
  _objc_alloc();
  puStack_218 = puVar1;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_105516ad4;
  puStack_200 = &UNK_110894390;
  _objc_copyWeak(auStack_1e0,auStack_1b0);
  _objc_retain(param_5);
  uStack_1f8 = param_5;
  _objc_retain(puVar5);
  puStack_1f0 = puVar5;
  _objc_retain(ppuVar6);
  puStack_260 = puVar1;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_105516b2c;
  puStack_248 = &UNK_1108946a0;
  ppuStack_1e8 = ppuVar6;
  _objc_copyWeak(auStack_220,auStack_1b0);
  _objc_retain(param_5);
  uStack_240 = param_5;
  _objc_retain(param_6);
  uStack_238 = param_6;
  _objc_retain(puVar5);
  puStack_230 = puVar5;
  _objc_retain(ppuVar6);
  ppuStack_228 = ppuVar6;
  func_0x00010c04f360();
  uVar13 = *(undefined8 *)(param_2 + 8);
  _objc_retain();
  _objc_copyWeak(auStack_268,auStack_1b0);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(puVar5);
  _objc_retain(ppuVar6);
  func_0x00010c297260(uVar13);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_268);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(ppuStack_228);
  _objc_release(puStack_230);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_destroyWeak(auStack_220);
  _objc_release(ppuStack_1e8);
  _objc_release(puStack_1f0);
  _objc_release(uStack_1f8);
  _objc_destroyWeak(auStack_1e0);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  return;
}



/* Entry: 1055166f0; end: 105516a5b; -[SCGroupsDataUpdater _upsertFetchedRemoteSnapchatters:localSnapchatters:conversations:conversationIds:] */

void FUN_1055166f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010050471c();
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x105516a8c;
  puStack_90 = &UNK_110842c58;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar4 = &puStack_a8;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126ba388;
  _objc_alloc();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105516ad4;
  puStack_d0 = &UNK_110894390;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_5);
  uStack_c8 = param_5;
  _objc_retain(uVar3);
  uStack_c0 = uVar3;
  _objc_retain(ppuVar4);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105516b2c;
  puStack_118 = &UNK_1108946a0;
  ppuStack_b8 = ppuVar4;
  _objc_copyWeak(auStack_f0,auStack_80);
  _objc_retain(param_5);
  uStack_110 = param_5;
  _objc_retain(param_6);
  uStack_108 = param_6;
  _objc_retain(uVar3);
  uStack_100 = uVar3;
  _objc_retain(ppuVar4);
  ppuStack_f8 = ppuVar4;
  func_0x00010c04f360();
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_copyWeak(auStack_138,auStack_80);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(uVar3);
  _objc_retain(ppuVar4);
  func_0x00010c297260(uVar6);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(ppuStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_destroyWeak(auStack_f0);
  _objc_release(ppuStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105516a5c; end: 105516a63;  */

void FUN_105516a5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105516a64; end: 105516ad3;  */

void FUN_105516a64(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105516ad4; end: 105516b2b;  */

void FUN_105516ad4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105516b2c; end: 105516b63;  */

void FUN_105516b2c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105516b64; end: 105516bd3;  */

void FUN_105516b64(long param_1,long param_2)

{
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be72de0();
    _objc_release(param_1);
  }
  else {
    func_0x00010c09a1e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105516bd4; end: 105516c2f; -[SCGroupsDataUpdater _announceDidLeaveGroupWithId:] */

void FUN_105516bd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba380;
  func_0x00010c08e320(PTR_PTR_1126ba380);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77240();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105516c30; end: 105516c8b; -[SCGroupsDataUpdater _announceGroupInitialLoad] */

void FUN_105516c30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba380;
  func_0x00010bfaf920(PTR_PTR_1126ba380);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77240();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105516c8c; end: 105516cef; -[SCGroupsDataUpdater _announceGroupUpdateChangeForGroup:] */

void FUN_105516c8c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126ba380;
    func_0x00010c28c7a0(PTR_PTR_1126ba380);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77240();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105516cf0; end: 105516cf3; -[SCGroupsDataUpdater didConfirmConversationServerCreation:] */

void FUN_105516cf0(void)

{
  return;
}



/* Entry: 105516cf4; end: 105516db3; -[SCGroupsDataUpdater .cxx_destruct] */

void FUN_105516cf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105516db4; end: 105516e47; -[SCGroupsStorage groupById:] */

void FUN_105516db4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105516e48; end: 105516f5f; -[SCGroupsStorage putGroup:completionHandler:] */

void FUN_105516e48(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  lVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    puVar1 = param_3;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    lVar6 = param_4;
    func_0x00010c11c5e0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(lVar6);
  _os_unfair_lock_lock(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0d3c80();
  func_0x00010c12d3e0();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = uVar4;
  _objc_release(uVar8);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x10));
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_3 + 0x18);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,1);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105516f60; end: 10551701b; -[SCGroupsStorage removeGroupById:completionHandler:] */

void FUN_105516f60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d3c80();
  func_0x00010c12d3e0();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10551701c; end: 105517077; -[SCGroupsStorage .cxx_destruct] */

void FUN_10551701c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105517078; end: 1055170ff; -[SCGroupsUpdateNotificationPresenter _presentInviteUserToast] */

void FUN_105517078(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_10551a860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105517100; end: 10551713b; -[SCGroupsUpdateNotificationPresenter .cxx_destruct] */

void FUN_105517100(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10551713c; end: 10551730b;  */

/* WARNING: Possible PIC construction at 0x00010551725c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105517260) */

void FUN_10551713c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bc47dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_2;
  if ((param_3 != 0) && (lVar1 = param_2, func_0x00010c06bb60(), (int)lVar1 == 0)) {
    lVar5 = param_3;
  }
  _objc_retain(lVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c089e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bfa3ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = 0;
    if (lVar2 != 0) {
      func_0x00010bfa3ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c272380;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010c089e20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x000100504554();
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126ba390;
  _objc_alloc(PTR_PTR_1126ba390);
  func_0x00010c0217a0();
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
code_r0x00010c272380:
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10551730c; end: 105517313;  */

void FUN_10551730c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 105517314; end: 1055174d3; -[SCTopGroupsDataFetcher initWithTopGroupsIdsObservable:groupsDataTracker:] */

undefined8 *
FUN_105517314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126e8cf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1055174d4;
    puStack_88 = &UNK_110854530;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}


