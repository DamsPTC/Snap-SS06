/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085be8ac; end: 1085be8bb; -[SCTChatPresenceParticipant setMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be8ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112776f0c) = param_3;
  return;
}



/* Entry: 1085be8bc; end: 1085be8cb; -[SCTChatPresenceParticipant typingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085be8bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776ef4);
}



/* Entry: 1085be8cc; end: 1085be8db; -[SCTChatPresenceParticipant setTypingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112776ef4) = param_3;
  return;
}



/* Entry: 1085be8dc; end: 1085be8eb; -[SCTChatPresenceParticipant platform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085be8dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776f10);
}



/* Entry: 1085be8ec; end: 1085be8fb; -[SCTChatPresenceParticipant setPlatform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112776f10) = param_3;
  return;
}



/* Entry: 1085be8fc; end: 1085be90b; -[SCTChatPresenceParticipant isUsingReplyCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085be8fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776ef8);
}



/* Entry: 1085be90c; end: 1085be91b; -[SCTChatPresenceParticipant setUsingReplyCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be90c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112776ef8) = param_3;
  return;
}



/* Entry: 1085be91c; end: 1085be92b; -[SCTChatPresenceParticipant isViewingChatMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085be91c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776efc);
}



/* Entry: 1085be92c; end: 1085be93b; -[SCTChatPresenceParticipant setViewingChatMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be92c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112776efc) = param_3;
  return;
}



/* Entry: 1085be93c; end: 1085be94b; -[SCTChatPresenceParticipant isInGame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085be93c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776f00);
}



/* Entry: 1085be94c; end: 1085be95b; -[SCTChatPresenceParticipant setInGame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be94c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112776f00) = param_3;
  return;
}



/* Entry: 1085be95c; end: 1085be96b; -[SCTChatPresenceParticipant pill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085be95c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776f08);
}



/* Entry: 1085be96c; end: 1085be97b; -[SCTChatPresenceParticipant birthdayVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085be96c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776f04);
}



/* Entry: 1085be97c; end: 1085be98f; -[SCTChatPresenceParticipant .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085be97c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f08,0);
  return;
}



/* Entry: 1085be990; end: 1085bea6b; -[SCTChatPresencePeekingParticipant initWithUsername:userId:displayName:uniqueLabel:presenceColor:bitmojiAvatarId:petImageURL:isAiChatbot:pill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085be990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fcf40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUsername_userId_displayN_11253bf48,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9,param_10);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112776f14;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  return puVar1;
}



/* Entry: 1085bea6c; end: 1085bea6f; -[SCTChatPresencePeekingParticipant bitmojiForPresencePill:] */

void FUN_1085bea6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presenceBitmoji_112620528);
  return;
}



/* Entry: 1085bea70; end: 1085beaa3; -[SCTChatPresencePeekingParticipant hasAvatarId] */

bool FUN_1085bea70(long param_1)

{
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1085beaa4; end: 1085beab3; -[SCTChatPresencePeekingParticipant needsAvatarUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085beaa4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776f18);
}



/* Entry: 1085beab4; end: 1085beac3; -[SCTChatPresencePeekingParticipant pill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085beab4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776f14);
}



/* Entry: 1085beac4; end: 1085bead7; -[SCTChatPresencePeekingParticipant .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085beac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f14,0);
  return;
}



/* Entry: 1085bead8; end: 1085bebab; -[SCTChatPresencePeekingPill animatePeeking:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bead8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cfd08;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_1 + _DAT_112776f20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfd46e0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    if (*(long *)(param_1 + _DAT_112776f24) == 0) {
      func_0x00010beac880(param_1);
    }
    func_0x00010bdcac00(param_1,param_2,param_3,puVar1);
  }
  else {
    func_0x00010c283a80(param_1);
    func_0x00010bdca940(param_1,param_2,param_3,puVar1);
  }
  func_0x00010bf42780(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085bebac; end: 1085bec73; -[SCTChatPresencePeekingPill _animateBitmojiPeeking:withAnimator:] */

void FUN_1085bebac(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1085bf11c;
    puStack_48 = &UNK_110846710;
    uStack_40 = param_1;
    func_0x00010bef8520(0x3fc99999a0000000,0x405a400000000000,0,param_4,param_2,0,&puStack_60);
  }
  else {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1085bec74;
    puStack_20 = &UNK_110846710;
    uStack_18 = param_1;
    func_0x00010bef72c0(0x3f9eb851e0000000,0x3fd99999a0000000,0,0x405a400000000000,param_4,param_2,
                        &puStack_38);
  }
  return;
}



/* Entry: 1085bec74; end: 1085becf7;  */

void FUN_1085bec74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1c640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085becf8; end: 1085bf11b;  */

void FUN_1085becf8(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "d";
  func_0x0001085bed94("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bf11c; end: 1085bf1af;  */

void FUN_1085bf11c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1c640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  return;
}



/* Entry: 1085bf1b0; end: 1085bf28b;  */

void FUN_1085bf1b0(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "@";
  func_0x0001085bed94("@");
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bf28c; end: 1085bf3bb; -[SCTChatPresencePeekingPill _animateEyesPeeking:withAnimator:] */

void FUN_1085bf28c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1085bf458;
    puStack_48 = &UNK_110846710;
    uStack_40 = param_1;
    func_0x00010bef8520(0x3fc99999a0000000,0x4052c00000000000,0,param_4,param_2,0,&puStack_60);
  }
  else {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    uStack_28 = 0x1085bf354;
    puStack_20 = &UNK_110846710;
    uStack_18 = param_1;
    func_0x00010bef72c0(0x3f9eb851e0000000,0x3fd99999a0000000,0,0x4052c00000000000,param_4,param_2,
                        &puStack_38);
  }
  return;
}



/* Entry: 1085bf3bc; end: 1085bf457;  */

void FUN_1085bf3bc(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "d";
  func_0x0001085bed94("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bf458; end: 1085bf4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bf458(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *(long *)(param_2 + 0x20);
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1085bf4c4;
  puStack_28 = &UNK_11084fc28;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(lStack_20 + _DAT_112776f24),param_3,&puStack_40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1085bf4c4; end: 1085bf59f;  */

void FUN_1085bf4c4(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "@";
  func_0x0001085bed94("@");
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bf5a0; end: 1085bf5d3; -[SCTChatPresencePeekingPill updateAvatar] */

void FUN_1085bf5a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb59e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beaaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBitmojiView_112588578);
    return;
  }
  return;
}



/* Entry: 1085bf5d4; end: 1085bf657; -[SCTChatPresencePeekingPill _shouldSetupBitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085bf5d4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = param_1 + _DAT_112776f20;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf1b660();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1085bf658; end: 1085bfa4f; -[SCTChatPresencePeekingPill _setupBitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bf658(long param_1,long param_2)

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
  undefined *puVar11;
  char *pcVar12;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126da4c8;
  _objc_alloc(PTR_PTR_1126da4c8);
  lVar2 = param_1 + _DAT_112776f20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf1b660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7a80(puVar1);
  func_0x00010c171800(param_1);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  _CGAffineTransformMakeRotation(&uStack_c8,0x3ffb5de4288e80bf);
  lVar2 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uStack_c0;
  uStack_140 = uStack_c8;
  uStack_128 = uStack_b0;
  uStack_130 = uStack_b8;
  uStack_118 = uStack_a0;
  uStack_120 = uStack_a8;
  func_0x00010c219960();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_140,lVar2);
  }
  _CGAffineTransformScale(&uStack_f8,0xbff0000000000000,0x3ff0000000000000,&uStack_140);
  lVar3 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uStack_f0;
  uStack_140 = uStack_f8;
  uStack_128 = uStack_e0;
  uStack_130 = uStack_e8;
  uStack_118 = uStack_d0;
  uStack_120 = uStack_d8;
  func_0x00010c219960();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = 0x3fc851eb851eb852;
  uStack_140 = 0x3ff3333333333333;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0x3ff199999999999a;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0x3fe6666666666666;
  func_0x00010c28b2a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172d80();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_98 = lVar5;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar8;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = "i";
  func_0x0001085bed94("i");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar12);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bfa50; end: 1085bfae3;  */

void FUN_1085bfa50(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "i";
  func_0x0001085bed94("i");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bfae4; end: 1085bfd53; -[SCTChatPresencePeekingPill _setupEyesEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bfae4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_c0 [48];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4059000000000000,0x4059000000000000);
  lVar11 = (long)_DAT_112776f24;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x403e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010befbb60(param_1);
  _CGAffineTransformMakeRotation(auStack_c0,0x3ff921fb54442d18);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c0bc060(*(undefined8 *)(param_1 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_90 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_88 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = "i";
  func_0x0001085bed94("i");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,pcVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar9);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bfd54; end: 1085bfde7;  */

void FUN_1085bfd54(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "i";
  func_0x0001085bed94("i");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085bfde8; end: 1085bfe7f; -[SCTChatPresencePeekingPill needsAvatarUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085bfde8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c079cc0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      param_1 = param_1 + _DAT_112776f20;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010bf1b660();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 != 0;
      _objc_release();
      _objc_release(param_1);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 1085bfe80; end: 1085bff5b; -[SCTChatPresencePeekingPill height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085bfe80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_d3;
  
  lVar1 = param_1 + _DAT_112776f20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfd46e0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112776f24));
  }
  else {
    lVar1 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      in_d3 = 0;
    }
    else {
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      in_d3 = 0x3fe6666666666666;
      func_0x00010c23d360();
      _objc_release(param_1);
    }
  }
  return in_d3;
}



/* Entry: 1085bff5c; end: 1085bff6b; -[SCTChatPresencePeekingPill isPeeking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085bff5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776f1c);
}



/* Entry: 1085bff6c; end: 1085bff7b; -[SCTChatPresencePeekingPill setIsPeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bff6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112776f1c) = param_3;
  return;
}



/* Entry: 1085bff7c; end: 1085bff9b; -[SCTChatPresencePeekingPill delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bff7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085bff9c; end: 1085bffaf; -[SCTChatPresencePeekingPill setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bff9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776f20,param_3);
  return;
}



/* Entry: 1085bffb0; end: 1085bffeb; -[SCTChatPresencePeekingPill .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085bffb0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112776f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f24,0);
  return;
}



/* Entry: 1085bffec; end: 1085bfff7; -[SCTAnimator addSizeAnimationWithPill:targetSize:] */

void FUN_1085bffec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befb510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0x3fd3333340000000,param_3,
             PTR_s_addSizeAnimationWithPill_targetS_11259c6e8);
  return;
}



/* Entry: 1085bfff8; end: 1085c00c7; -[SCTAnimator addSizeAnimationWithPill:targetSize:duration:] */

void FUN_1085bfff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_3;
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1085c00c8;
  puStack_60 = &UNK_110a59b30;
  uStack_58 = param_7;
  _objc_retain(param_7);
  func_0x00010befb480(param_3,uVar1,param_4,param_1,param_2,param_5,param_6,0,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_7);
  return;
}



/* Entry: 1085c00c8; end: 1085c0123;  */

void FUN_1085c00c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_1085c0124;
  puStack_28 = &UNK_110a59b10;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c0bc060(*(undefined8 *)(param_3 + 0x20),param_4,&puStack_40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1085c0124; end: 1085c023f;  */

void FUN_1085c0124(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c0240; end: 1085c02eb; -[SCTChatPresencePill init] */

undefined1 * FUN_1085c0240(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcf48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126da4d0;
    _objc_alloc(PTR_PTR_1126da4d0);
    func_0x00010bff9320(0x3ff0000000000000);
    func_0x00010c1ee940(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c141e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085c02ec; end: 1085c036f; -[SCTChatPresencePill needsAvatarUpdate] */

bool FUN_1085c02ec(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1b660();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1085c0370; end: 1085c03bf; -[SCTChatPresencePill timeIntervalSinceChatVisibleChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1085c0370(double param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_112776f28) != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    return param_1 - *(double *)(param_2 + _DAT_112776f2c);
  }
  return 0.0;
}



/* Entry: 1085c03c0; end: 1085c0413; -[SCTChatPresencePill updateLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c03c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(uVar3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(puVar2 + _DAT_112776f28);
  func_0x00010c071ae0();
  if (iVar1 == 0) {
    _objc_retain(uVar3);
    _objc_retain(param_4);
    func_0x00010bdcb220(puVar2);
    _objc_release(param_4);
    _objc_release(uVar3);
  }
  else if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1085c0414; end: 1085c04fb; -[SCTChatPresencePill animateToState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c0414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776f28);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085c04fc;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010bdcb220(param_1,param_2,param_3,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  else if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c04fc; end: 1085c0603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c04fc(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112776f28;
  iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar7);
  func_0x00010c159240();
  iVar3 = (int)*(undefined8 *)(param_2 + 0x28);
  func_0x00010c159240();
  iVar4 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010be3ede0();
  if (iVar4 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112776f2c) = param_1;
  }
  lVar1 = *(long *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(lVar1 + lVar7);
  *(undefined8 *)(lVar1 + lVar7) = uVar6;
  _objc_release(uVar5);
  if (iVar2 != iVar3) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c15a800(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c252440(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159240();
    func_0x00010c10ad40(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085c05ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085c0604; end: 1085c0743; -[SCTChatPresencePill updateToState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c0604(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar8 = (long)_DAT_112776f28;
  uVar2 = *(ulong *)(param_2 + lVar8);
  func_0x00010c071ae0(uVar2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + lVar8);
    func_0x00010c159240();
    uVar3 = param_4;
    func_0x00010c159240();
    lVar4 = param_2;
    func_0x00010be3ede0(param_2,param_3,*(undefined8 *)(param_2 + lVar8),param_4);
    if ((int)lVar4 != 0) {
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      *(undefined8 *)(param_2 + _DAT_112776f2c) = param_1;
    }
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)(param_2 + lVar8);
    *(undefined8 *)(param_2 + lVar8) = param_4;
    _objc_release(uVar5);
    lVar4 = param_2;
    func_0x00010beb4500();
    if ((int)lVar4 != 0) {
      puVar6 = PTR_PTR_1126da4c0;
      func_0x00010c06d480(PTR_PTR_1126da4c0,param_3,*(undefined8 *)(param_2 + lVar8));
      if ((int)puVar6 != 0) {
        func_0x00010be4cac0(param_2);
      }
    }
    func_0x00010bee2a80(param_2);
    if (iVar1 != (int)uVar3) {
      lVar8 = param_2;
      func_0x00010c15a800(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c252440(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c159240();
      func_0x00010c10ad40(lVar8,param_3,param_2,lVar7);
      _objc_release(lVar4);
      _objc_release(lVar8);
    }
    func_0x00010bed5820(param_2);
    func_0x00010bee2a20(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085c0744; end: 1085c07a3; -[SCTChatPresencePill animateAvatarUpdateWithCompletion:] */

void FUN_1085c0744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be73df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1085c07a4; end: 1085c07a7; -[SCTChatPresencePill widthForState:] */

void FUN_1085c07a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pillWidthForState__11257a918);
  return;
}



/* Entry: 1085c07a8; end: 1085c07ab; -[SCTChatPresencePill heightForState:] */

void FUN_1085c07a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pillHeightForState__11257a8d0);
  return;
}



/* Entry: 1085c07ac; end: 1085c0837; -[SCTChatPresencePill isNonBitmojiInActionPose:] */

undefined8 FUN_1085c07ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf1b660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c06b5e0(param_3);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1085c0838; end: 1085c088b; -[SCTChatPresencePill _updateUI] */

void FUN_1085c0838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  pcStack_28 = FUN_1085c088c;
  uStack_40 = param_2;
  puStack_38 = puVar1;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  puVar3 = puVar1;
  _objc_exception_throw();
  pcStack_48 = FUN_1085c08f8;
  puStack_68 = PTR_PTR_1126fcf48;
  puStack_70 = puVar3;
  uStack_60 = uVar2;
  puStack_58 = puVar1;
  ppuStack_50 = &puStack_30;
  _objc_msgSendSuper2(&puStack_70,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed5820(puVar3);
  return;
}



/* Entry: 1085c088c; end: 1085c08f7; -[SCTChatPresencePill _animateToState:completion:] */

void FUN_1085c088c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  puVar2 = puVar1;
  _objc_exception_throw();
  pcStack_28 = FUN_1085c08f8;
  puStack_48 = PTR_PTR_1126fcf48;
  puStack_50 = puVar2;
  uStack_40 = param_2;
  puStack_38 = puVar1;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed5820(puVar2);
  return;
}



/* Entry: 1085c08f8; end: 1085c093f; -[SCTChatPresencePill traitCollectionDidChange:] */

void FUN_1085c08f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcf48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed5820(param_1);
  return;
}



/* Entry: 1085c0940; end: 1085c0993; -[SCTChatPresencePill _updateColors] */

uint FUN_1085c0940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  _objc_retain(uVar4);
  puVar2 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar2);
  func_0x00010c078ca0();
  _objc_release(param_4);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0);
    uVar7 = (uint)puVar5 ^ 1;
  }
  _objc_release(uVar4);
  return ((uint)puVar2 | uVar7) & 1;
}



/* Entry: 1085c0994; end: 1085c09e7; -[SCTChatPresencePill _updateTypingIndicator] */

uint FUN_1085c0994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2803a0();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw();
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar2);
  func_0x00010c078ca0();
  _objc_release(param_4);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0);
    uVar7 = (uint)puVar5 ^ 1;
  }
  _objc_release(uVar3);
  return ((uint)puVar2 | uVar7) & 1;
}



/* Entry: 1085c09e8; end: 1085c0a3b; -[SCTChatPresencePill _didLoadAvatarView] */

uint FUN_1085c09e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar4;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  _objc_retain(uVar4);
  puVar2 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar2);
  func_0x00010c078ca0();
  _objc_release(param_4);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0);
    uVar7 = (uint)puVar5 ^ 1;
  }
  _objc_release(uVar4);
  return ((uint)puVar2 | uVar7) & 1;
}



/* Entry: 1085c0a3c; end: 1085c0a9b; -[SCTChatPresencePill _pillWidthForState:] */

uint FUN_1085c0a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  uVar4 = uVar3;
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  _objc_retain(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2803a0();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw();
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar2);
  func_0x00010c078ca0();
  _objc_release(param_4);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0);
    uVar7 = (uint)puVar5 ^ 1;
  }
  _objc_release(uVar3);
  return ((uint)puVar2 | uVar7) & 1;
}



/* Entry: 1085c0a9c; end: 1085c0afb; -[SCTChatPresencePill _pillHeightForState:] */

uint FUN_1085c0a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  _objc_retain(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2803a0();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  _objc_retain(uVar5);
  puVar2 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar2);
  func_0x00010c078ca0();
  _objc_release(param_4);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    puVar4 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0);
    uVar6 = (uint)puVar4 ^ 1;
  }
  _objc_release(uVar5);
  return ((uint)puVar2 | uVar6) & 1;
}



/* Entry: 1085c0afc; end: 1085c0b5b; -[SCTChatPresencePill _bitmojiStateForState:] */

uint FUN_1085c0afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  iVar1 = (int)puVar2;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(uVar4);
  puVar2 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar2);
  func_0x00010c078ca0();
  _objc_release(param_4);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0);
    uVar5 = (uint)puVar3 ^ 1;
  }
  _objc_release(uVar4);
  return ((uint)puVar2 | uVar5) & 1;
}



/* Entry: 1085c0b5c; end: 1085c0bff; -[SCTChatPresencePill _isChatVisibleEmergenceWithOldState:newState:] */

uint FUN_1085c0b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da4c0;
  _objc_retain(param_4);
  func_0x00010bfd53e0(puVar1,param_2,param_3,param_4);
  func_0x00010c078ca0(param_1,param_2,param_4);
  _objc_release(param_4);
  if ((int)param_1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0,param_2,param_3);
    uVar3 = (uint)puVar2 ^ 1;
  }
  _objc_release(param_3);
  return ((uint)puVar1 | uVar3) & 1;
}



/* Entry: 1085c0c00; end: 1085c0c83; -[SCTChatPresencePill _shouldLoadAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085c0c00(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = param_1 + _DAT_112776f30;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf1b660();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1085c0c84; end: 1085c0d13; -[SCTChatPresencePill _loadBitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c0c84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_112776f30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126da4c8;
  _objc_alloc(PTR_PTR_1126da4c8);
  func_0x00010bff7a80();
  func_0x00010c171800(param_1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bdfe6c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085c0d14; end: 1085c0dcf; -[SCTChatPresencePill setHorizontalStretch:] */

void FUN_1085c0d14(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c252440(&uStack_70,lVar1);
    }
    _objc_release(lVar1);
    uStack_60 = param_1;
    func_0x00010bf1c640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b2a0();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1085c0dd0; end: 1085c0e3f; -[SCTChatPresencePill _colorForPresenceState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c0dd0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)(param_1 + _DAT_112776f30);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bf40f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085c0e40; end: 1085c0e9f; -[SCTChatPresencePill _pillSizeForState:] */

undefined1  [16]
FUN_1085c0e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_4);
  func_0x00010be73de0(param_2,param_3,param_4);
  uVar1 = param_1;
  func_0x00010be73cc0(param_2,param_3,param_4);
  _objc_release(param_4);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1085c0ea0; end: 1085c1167; -[SCTChatPresencePill _animateBitmojiToTypingState:completion:] */

void FUN_1085c0ea0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c27e300();
    if (lVar2 == 1) {
      uVar1 = param_1;
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c172d80();
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c081ba0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c2524e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4aa0(&uStack_a0,param_1,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    uVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    if ((lVar2 - 1U < 2) && ((uVar3 & 1) != 0)) {
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        func_0x00010c252440(&uStack_e0,uVar4);
      }
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      uStack_108 = uStack_88;
      uStack_110 = uStack_90;
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      func_0x00010bef71c0(0,0x3fd3333340000000,puVar5,param_2,uVar1,0,&uStack_e0,&uStack_120);
    }
    else {
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        func_0x00010c252440(&uStack_e0,uVar4);
      }
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      uStack_108 = uStack_88;
      uStack_110 = uStack_90;
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      func_0x00010bef71a0(0x3fb0e56040000000,0,0x3fd3333340000000,puVar5,param_2,uVar1,&uStack_e0,
                          &uStack_120);
    }
    _objc_release(uVar4);
    _objc_release(uVar1);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1085c1168;
    puStack_148 = &UNK_110845188;
    uStack_140 = param_1;
    lStack_128 = lVar2;
    _objc_retain(param_3);
    lStack_138 = param_3;
    _objc_retain(param_4);
    lStack_130 = param_4;
    func_0x00010bf42780(puVar5,param_2,&puStack_160);
    _objc_release(lStack_130);
    _objc_release(lStack_138);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c1168; end: 1085c11af;  */

void FUN_1085c1168(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x38) != 1) {
    func_0x00010bf45e40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085c11a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085c11b0; end: 1085c12c7; -[SCTChatPresencePill configBitmojiBodyStyleByState:] */

void FUN_1085c11b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c082a20();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c083620();
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c075460();
      if ((int)lVar1 == 0) {
        lVar1 = param_3;
        func_0x00010c27e300();
        if (lVar1 == 1) {
          func_0x00010bf1c640(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf1a900();
          func_0x00010bf1c640(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010bf1c640(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c172d80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c12c8; end: 1085c146b; -[SCTChatPresencePill animateBitmojiToState:completion:] */

void FUN_1085c12c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_c0 [64];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beb4500();
  if ((int)lVar1 != 0) {
    func_0x00010be4cac0(param_1);
    func_0x00010bee2a80(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar2 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    func_0x00010bf45e40(param_1,param_2,param_3);
    func_0x00010be73d60(param_1,param_2,param_3);
    func_0x00010befb4e0(puVar2,param_2,param_1);
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c252440(&uStack_80,lVar3);
    }
    func_0x00010bdd4aa0(auStack_c0,param_1,param_2,param_3);
    func_0x00010bef71a0(0x3fc74538e0000000,0,0x3fcdd2f1a0000000,puVar2,param_2,lVar1,&uStack_80,
                        auStack_c0);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bf42780(puVar2,param_2,param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c146c; end: 1085c148b; -[SCTChatPresencePill delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c146c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c148c; end: 1085c149f; -[SCTChatPresencePill setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c148c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776f30,param_3);
  return;
}



/* Entry: 1085c14a0; end: 1085c14af; -[SCTChatPresencePill state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085c14a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776f28);
}



/* Entry: 1085c14b0; end: 1085c14fb; -[SCTChatPresencePill .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c14b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776f28,0);
  _objc_destroyWeak(param_1 + _DAT_112776f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f34,0);
  return;
}



/* Entry: 1085c14fc; end: 1085c157f; -[SCTChatPresencePillState initWithPlatform:selected:typingState:usingReplyCamera:viewingChatMedia:inGame:birthdayVariant:] */

void FUN_1085c14fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fcf50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
  }
  return;
}



/* Entry: 1085c1580; end: 1085c15f7; +[SCTChatPresencePillState stateWithPlatform:selected:typingState:usingReplyCamera:viewingChatMedia:inGame:birthdayVariant:] */

void FUN_1085c1580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_alloc();
  func_0x00010c036a20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c15f8; end: 1085c162f; -[SCTChatPresencePillState isTypingOrPaused] */

void FUN_1085c15f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c27e300();
  if (lVar1 != 1) {
    func_0x00010c27e300(param_1);
  }
  return;
}



/* Entry: 1085c1630; end: 1085c163f; -[SCTChatPresencePillState isActionPose] */

void FUN_1085c1630(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126da4c0,PTR_s_isActionPose__1125f8790,param_1);
  return;
}



/* Entry: 1085c1640; end: 1085c1683; -[SCTChatPresencePillState stateByReplacingSelected:] */

void FUN_1085c1640(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c252900(PTR_PTR_1126da4d8,param_2,*(undefined8 *)(param_1 + 0x18),param_3,
                      *(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 9),
                      *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                      *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085c1684; end: 1085c16df; -[SCTChatPresencePillState stateByReplacingPlatform:] */

void FUN_1085c1684(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  if (param_3 == 0) {
    uVar3 = 0;
    uVar1 = 0;
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined1 *)(param_1 + 9);
    uVar3 = *(undefined1 *)(param_1 + 10);
    uVar4 = *(undefined1 *)(param_1 + 0xb);
  }
  func_0x00010c252900(PTR_PTR_1126da4d8,param_2,param_3,*(undefined1 *)(param_1 + 8),uVar1,uVar2,
                      uVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085c16e0; end: 1085c1723; -[SCTChatPresencePillState stateByReplacingTypingState:] */

void FUN_1085c16e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c252900(PTR_PTR_1126da4d8,param_2,*(undefined8 *)(param_1 + 0x18),
                      *(undefined1 *)(param_1 + 8),param_3,*(undefined1 *)(param_1 + 9),
                      *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                      *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085c1724; end: 1085c17f3; -[SCTChatPresencePillState stateByReplacingPresenceState:] */

void FUN_1085c1724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126da4d8;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0fe180(param_3);
  uVar1 = *(undefined1 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010c27e300(param_3);
  uVar5 = param_3;
  func_0x00010c082a20(param_3);
  uVar6 = param_3;
  func_0x00010c083620(param_3);
  uVar7 = param_3;
  func_0x00010c075460(param_3);
  uVar8 = param_3;
  func_0x00010bf1a900();
  _objc_release(param_3);
  func_0x00010c252900(puVar2,param_2,uVar3,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Entry: 1085c17f4; end: 1085c18a7; -[SCTChatPresencePillState isEqual:] */

undefined * FUN_1085c17f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    puVar3 = (undefined *)0x1;
  }
  else {
    puVar3 = PTR_PTR_1126da4d8;
    _objc_opt_class(PTR_PTR_1126da4d8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      _objc_retain(param_3);
      bVar1 = *(byte *)(param_1 + 8);
      uVar2 = param_3;
      func_0x00010c159240();
      if ((uint)bVar1 == (uint)uVar2) {
        puVar3 = PTR_PTR_1126da4c0;
        func_0x00010bf09b20(PTR_PTR_1126da4c0);
      }
      else {
        puVar3 = (undefined *)0x0;
      }
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1085c18a8; end: 1085c1923; -[SCTChatPresencePillState hash] */

ulong * FUN_1085c18a8(long param_1)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  auVar2 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_1 + 0x10),8,
                    1);
  uStack_40 = auVar2._8_8_;
  uStack_48 = auVar2._0_8_;
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_28 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3191c(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (ulong *)(ulong)*(byte *)((long)puVar1 + 8);
}



/* Entry: 1085c1924; end: 1085c192b; -[SCTChatPresencePillState selected] */

undefined1 FUN_1085c1924(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1085c192c; end: 1085c1933; -[SCTChatPresencePillState typingState] */

undefined8 FUN_1085c192c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085c1934; end: 1085c193b; -[SCTChatPresencePillState platform] */

undefined8 FUN_1085c1934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085c193c; end: 1085c1943; -[SCTChatPresencePillState isUsingReplyCamera] */

undefined1 FUN_1085c193c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1085c1944; end: 1085c194b; -[SCTChatPresencePillState isViewingChatMedia] */

undefined1 FUN_1085c1944(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1085c194c; end: 1085c1953; -[SCTChatPresencePillState isInGame] */

undefined1 FUN_1085c194c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1085c1954; end: 1085c195b; -[SCTChatPresencePillState birthdayVariant] */

undefined8 FUN_1085c1954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085c195c; end: 1085c1c4f; -[SCTDirectChatPresenceController initWithParticipants:avatarServices:chatServices:talkUIController:plusFeatureLogger:peekAPeekEnabled:presenceRenderGrapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085c195c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9
             )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fcf58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithAvatarServices_chatServi_11253bf28,param_4,param_5,
                      param_6,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    lVar14 = (long)_DAT_112776f54;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_7;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bdf10a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776f58);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112776f58) = puVar4;
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf529e0();
    if (1 < uVar3) {
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bdf10a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776f5c);
      *(undefined8 **)((long)puVar1 + (long)_DAT_112776f5c) = puVar4;
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    if (param_8 != 0) {
      uVar3 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126da4e0;
      _objc_alloc();
      uVar6 = uVar3;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c2805c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c10ac40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bf1acc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010c0fa800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06bb80();
      puVar13 = PTR_PTR_1126da4e8;
      _objc_opt_new();
      func_0x00010c05f740();
      lVar14 = (long)_DAT_112776f60;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      *(undefined **)((long)puVar1 + lVar14) = puVar5;
      _objc_release(uVar2);
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c0fbcc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085c1c50; end: 1085c2227; -[SCTDirectChatPresenceController _initView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c1c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126fcf58;
  lStack_b8 = param_5;
  _objc_msgSendSuper2(&lStack_b8,PTR_s__initView_11256c418);
  lVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112776f58;
  uVar3 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c0fbcc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bea4b00();
  uVar3 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c0fbcc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7300(0x401c000000000000,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c0fbcc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  func_0x00010c0b6f80(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar3);
  lVar13 = (long)_DAT_112776f60;
  lVar4 = *(long *)(param_5 + lVar13);
  if (lVar4 != 0) {
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c0fbcc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar13);
    uStack_a8 = uVar12;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = -2.0;
    uVar9 = uVar8;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a0 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(lVar13);
    _objc_release(lVar4);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  lVar4 = (long)_DAT_112776f5c;
  uVar15 = (uint)lVar2;
  if (*(long *)(param_5 + lVar4) != 0) {
    lVar2 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c0fbcc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010bea4b00();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c0fbcc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar16 = 0.0;
    func_0x00010c0b6f80(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126da4c0;
    uVar11 = *(undefined8 *)(param_5 + lVar14);
    func_0x00010c0fbcc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07aac0(puVar1);
    func_0x00010bed9b40(param_5);
    _objc_release(uVar3);
    _objc_release(uVar11);
    uVar15 = ((uint)lVar2 | uVar15) & 1;
  }
  if (uVar15 != 0) {
    func_0x00010be9b8a0(param_5);
  }
  uVar11 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c0fbcc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c0fbcc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe07e0(uVar11);
  dVar17 = dVar16;
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c0fbcc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c0fbcc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe07e0(uVar11);
  dVar18 = dVar17;
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar11);
  if (dVar17 <= dVar16) {
    dVar17 = dVar16;
  }
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc850d8();
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar18,param_2,param_3,param_4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bee2420(dVar17,param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    _objc_opt_new(PTR_PTR_1126da4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}


