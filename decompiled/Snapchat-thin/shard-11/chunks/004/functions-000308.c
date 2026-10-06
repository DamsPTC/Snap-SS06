/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085e51f4; end: 1085e51fb; -[SCTParticipantState username] */

undefined8 FUN_1085e51f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085e51fc; end: 1085e5203; -[SCTParticipantState userId] */

undefined8 FUN_1085e51fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085e5204; end: 1085e520b; -[SCTParticipantState displayName] */

undefined8 FUN_1085e5204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085e520c; end: 1085e5213; -[SCTParticipantState presenceColor] */

undefined8 FUN_1085e520c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085e5214; end: 1085e521b; -[SCTParticipantState bitmojiAvatarId] */

undefined8 FUN_1085e5214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085e521c; end: 1085e5223; -[SCTParticipantState petImageURL] */

undefined8 FUN_1085e521c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1085e5224; end: 1085e522b; -[SCTParticipantState isAiChatbot] */

undefined1 FUN_1085e5224(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1085e522c; end: 1085e528b; -[SCTParticipantState .cxx_destruct] */

void FUN_1085e522c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085e528c; end: 1085e538f; -[SCTChatRemoteParticipantState initWithTypingState:platform:username:userId:displayName:presenceColor:bitmojiAvatarId:petImageURL:uniqueLabel:isPeeking:usingReplyCamera:viewingChatMedia:inGame:birthdayVariant:isAiChatbot:] */

undefined8 *
FUN_1085e528c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fd028;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUsername_userId_displayN_11253bfb8,param_5,param_6,
                      param_7,param_8,param_9,param_10,param_15);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = param_3;
    puVar1[10] = param_4;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 8) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0x41) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 0x42) = param_12._2_1_;
    *(undefined1 *)((long)puVar1 + 0x43) = param_12._3_1_;
    puVar1[0xc] = param_14;
  }
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 1085e5390; end: 1085e539f; -[SCTChatRemoteParticipantState isActionPose] */

void FUN_1085e5390(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126da4c0,PTR_s_isActionPose__1125f8790,param_1);
  return;
}



/* Entry: 1085e53a0; end: 1085e53a7; -[SCTChatRemoteParticipantState typingState] */

undefined8 FUN_1085e53a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1085e53a8; end: 1085e53af; -[SCTChatRemoteParticipantState platform] */

undefined8 FUN_1085e53a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1085e53b0; end: 1085e53b7; -[SCTChatRemoteParticipantState uniqueLabel] */

undefined8 FUN_1085e53b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1085e53b8; end: 1085e53bf; -[SCTChatRemoteParticipantState isPeeking] */

undefined1 FUN_1085e53b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 1085e53c0; end: 1085e53c7; -[SCTChatRemoteParticipantState isUsingReplyCamera] */

undefined1 FUN_1085e53c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 1085e53c8; end: 1085e53cf; -[SCTChatRemoteParticipantState isViewingChatMedia] */

undefined1 FUN_1085e53c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}



/* Entry: 1085e53d0; end: 1085e53d7; -[SCTChatRemoteParticipantState isInGame] */

undefined1 FUN_1085e53d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x43);
}



/* Entry: 1085e53d8; end: 1085e53df; -[SCTChatRemoteParticipantState birthdayVariant] */

undefined8 FUN_1085e53d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1085e53e0; end: 1085e53eb; -[SCTChatRemoteParticipantState .cxx_destruct] */

void FUN_1085e53e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 1085e53ec; end: 1085e548f; -[SCTV3ChatTransportServices initWithIdentityServices:conversationManager:] */

undefined1 *
FUN_1085e53ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1085e5490; end: 1085e5497; -[SCTV3ChatTransportServices messageActionHandler] */

void FUN_1085e5490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beee470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_actionHandler_1125992c0);
  return;
}



/* Entry: 1085e5498; end: 1085e54ef; -[SCTV3ChatTransportServices sendScreenCapturedForConvoId:] */

void FUN_1085e5498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0cb180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e54f0; end: 1085e55e7; -[SCTV3ChatTransportServices sendScreenRecordedForConvoId:afterDelay:] */

void FUN_1085e54f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  double dStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (param_1 <= 0.0) {
    func_0x00010bea0120(param_2);
  }
  else {
    _objc_initWeak(auStack_38,param_2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1085e55e8;
    puStack_58 = &UNK_110842a68;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_4);
    uStack_50 = param_4;
    dStack_40 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1085e55e8; end: 1085e5627;  */

void FUN_1085e55e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f8f40(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085e5628; end: 1085e567f; -[SCTV3ChatTransportServices _sendScreenRecordedForConvoId:] */

void FUN_1085e5628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0cb180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e5680; end: 1085e574f; -[SCTV3ChatTransportServices cancelScreenRecordedForConvoId:] */

void FUN_1085e5680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1085e5750;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e5750; end: 1085e579b;  */

void FUN_1085e5750(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,lVar1,
                        PTR_s__sendScreenRecordedForConvoId__1125859f0,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085e579c; end: 1085e57cb; -[SCTV3ChatTransportServices .cxx_destruct] */

void FUN_1085e579c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085e57cc; end: 1085e58c7; -[SCTV3GlobalConfiguration initWithFilter:enableTask:disableTask:] */

undefined1 *
FUN_1085e57cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085e58c8; end: 1085e5947; -[SCTV3GlobalConfiguration refreshForWrapper:state:] */

void FUN_1085e58c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    if ((int)lVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      goto LAB_1085e592c;
    }
  }
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20));
LAB_1085e592c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e5948; end: 1085e594f; -[SCTV3GlobalConfiguration removeWrapper:] */

void FUN_1085e5948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1085e5950; end: 1085e59d7; -[SCTV3GlobalConfiguration updateConfigurationTask] */

void FUN_1085e5950(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1085e59d8;
  puStack_38 = &UNK_11084d688;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1085e59d8; end: 1085e5b0b;  */

void FUN_1085e59d8(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_1085e5ae8;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (*(byte *)(param_1 + 0x28) == 0) goto LAB_1085e5ad8;
    lVar1 = *(long *)(param_1 + 0x18);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1085e5b2c;
    puStack_78 = &UNK_11084aaa8;
    lStack_70 = param_1;
    _objc_retain(param_2);
    lStack_68 = param_2;
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_90);
    lVar1 = lStack_68;
  }
  else {
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
LAB_1085e5ad8:
      if (param_2 != 0) {
        (**(code **)(param_2 + 0x10))(param_2);
      }
      goto LAB_1085e5ae8;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1085e5b0c;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_2);
    lStack_38 = param_2;
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
    lVar1 = lStack_38;
  }
  _objc_release(lVar1);
LAB_1085e5ae8:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085e5b0c; end: 1085e5b47;  */

void FUN_1085e5b0c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085e5b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085e5b48; end: 1085e5b8f; -[SCTV3GlobalConfiguration .cxx_destruct] */

void FUN_1085e5b48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085e5b90; end: 1085e6027; -[SCTV3GlobalConfigurationUpdater initWithNetworkServices:] */

undefined8 * FUN_1085e5b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_118 = PTR_PTR_1126fd040;
  puVar2 = &uStack_120;
  puVar9 = PTR_s_init_1125d9248;
  uStack_120 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_128,puVar2);
    puVar3 = PTR_PTR_1126c1838;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126da5c8;
    _objc_alloc();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x1085e606c;
    puStack_140 = &UNK_110845c40;
    _objc_copyWeak(auStack_130,auStack_128);
    _objc_retain(puVar3);
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    uStack_178 = 0x1085e60b4;
    puStack_170 = &UNK_110845c40;
    puStack_138 = puVar3;
    _objc_copyWeak(auStack_160,auStack_128);
    _objc_retain(puVar3);
    puStack_168 = puVar3;
    func_0x00010c012f80();
    puVar5 = PTR_PTR_1126da5c8;
    puStack_90 = puVar4;
    _objc_alloc();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x1085e6140;
    puStack_1a0 = &UNK_110845c40;
    _objc_copyWeak(auStack_190,auStack_128);
    _objc_retain(param_3);
    puVar9 = auStack_128;
    uStack_198 = param_3;
    _objc_copyWeak(auStack_1c0,puVar9);
    _objc_retain(param_3);
    func_0x00010c012f80();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar2[1];
    puVar2[1] = puVar6;
    _objc_release(uVar10);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar11 = puVar2[1];
    _objc_retain(lVar11);
    lVar7 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        uVar8 = *(undefined8 *)(lVar12 * 8);
        func_0x00010c2847c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        _objc_retainBlock();
        func_0x00010befa120(puVar4);
        _objc_release(uVar10);
        _objc_release(uVar8);
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
      lVar7 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar5 = PTR_PTR_1126da4a8;
    _objc_alloc();
    _objc_retain(puVar4);
    func_0x00010c050dc0();
    uVar10 = puVar2[2];
    puVar2[2] = puVar5;
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_1c0);
    _objc_release(uStack_198);
    _objc_destroyWeak(auStack_190);
    _objc_release(puStack_168);
    _objc_destroyWeak(auStack_160);
    _objc_release(puStack_138);
    _objc_destroyWeak(auStack_130);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume(param_3);
  func_0x00010c09dd00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf282e0();
  _objc_release(puVar9);
  return (undefined8 *)(ulong)((int)puVar3 != 0);
}



/* Entry: 1085e6028; end: 1085e61c7;  */

bool FUN_1085e6028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c09dd00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf282e0();
  _objc_release(param_2);
  return (int)uVar1 != 0;
}



/* Entry: 1085e61c8; end: 1085e61cf;  */

void FUN_1085e61c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086178d0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e61d0; end: 1085e623b; -[SCTV3GlobalConfigurationUpdater registerSessionWrapper:] */

void FUN_1085e61d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bef8240(param_3,param_2,param_1);
  uVar1 = param_3;
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be88a40(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e623c; end: 1085e6363; -[SCTV3GlobalConfigurationUpdater deregisterSessionWrapper:] */

void FUN_1085e623c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 unaff_x22;
  long lVar6;
  long lVar7;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12c3c0(param_3);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c12f300(*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = auStack_d8;
      lVar1 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c0f8c00(*(undefined8 *)(param_1 + 0x10));
  uVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1085e6364;
  uStack_150 = unaff_x22;
  lStack_148 = lVar5;
  lStack_140 = param_1;
  uStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_initWeak(auStack_158,uVar2);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1085e6464;
  puStack_178 = &UNK_110848218;
  _objc_copyWeak(auStack_160,auStack_158);
  _objc_retain(puVar3);
  puStack_170 = (undefined1 *)puVar3;
  _objc_retain(puVar4);
  puStack_168 = puVar4;
  func_0x000107c312cc("APPSTORE",&puStack_190);
  _objc_release(puStack_168);
  _objc_release(puStack_170);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 1085e6364; end: 1085e6463; -[SCTV3GlobalConfigurationUpdater sessionWrapper:updatedState:] */

void FUN_1085e6364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085e6464;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e6464; end: 1085e64c3;  */

void FUN_1085e6464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be88a40(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085e64c4; end: 1085e65f7; -[SCTV3GlobalConfigurationUpdater _refreshStateForWrapper:state:] */

void FUN_1085e64c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c1252c0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  func_0x00010c0f8c00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1085e65f8; end: 1085e6627; -[SCTV3GlobalConfigurationUpdater .cxx_destruct] */

void FUN_1085e65f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085e6628; end: 1085e66fb; -[SCTV3HeadlessSession initWithSessionWrapper:delegate:] */

undefined1 *
FUN_1085e6628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd048;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    uVar2 = param_3;
    func_0x00010c2688a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)((long)puVar1 + 0x10);
    _objc_loadWeakRetained(puVar3);
    func_0x00010bef9980();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085e66fc; end: 1085e6723; -[SCTV3HeadlessSession talkContext] */

void FUN_1085e66fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085e6724; end: 1085e6727; -[SCTV3HeadlessSession callingController] */

void FUN_1085e6724(void)

{
  return;
}



/* Entry: 1085e6728; end: 1085e676b; -[SCTV3HeadlessSession reportNotificationDisplayType:deliveryMechanism:] */

void FUN_1085e6728(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1334e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e676c; end: 1085e67db; -[SCTV3HeadlessSession reportNotificationFailed:senderUserId:missedCallReason:] */

void FUN_1085e676c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c133500();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e67dc; end: 1085e6a33; -[SCTV3HeadlessSession sessionWrapper:updatedState:] */

void FUN_1085e67dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x0001085f8610();
  lVar5 = lVar3;
  func_0x00010bf0ed00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c078420();
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x0001085f8610();
  if (lVar5 == lVar2) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c078420();
    _objc_release(uVar6);
    if ((int)lVar4 != (int)uVar7) goto LAB_1085e68b8;
  }
  else {
LAB_1085e68b8:
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfe0420();
    _objc_release(lVar2);
  }
  _objc_retain(lVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar3;
  _objc_release(uVar7);
  lVar2 = param_4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf282e0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126da430;
  iVar8 = (int)lVar4;
  if ((*(int *)(param_1 + 0x18) - 5U < 0xfffffffe) && (iVar8 - 3U < 2)) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf27e20();
  }
  else {
    if (iVar8 != 0) goto LAB_1085e6a04;
    lVar2 = param_4;
    func_0x00010c121ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1085e6a34;
    puStack_60 = &UNK_110842e18;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1085e6a70;
    puStack_88 = &UNK_1108c9a88;
    lStack_80 = param_1;
    lStack_58 = param_1;
    func_0x00010bdc24c0(puVar1,param_2,lVar2,&puStack_78,&puStack_a0);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12cf80();
  }
  _objc_release(lVar2);
LAB_1085e6a04:
  *(int *)(param_1 + 0x18) = iVar8;
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1085e6a34; end: 1085e6a6f;  */

void FUN_1085e6a34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf27e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085e6a70; end: 1085e6acb;  */

void FUN_1085e6a70(long param_1,uint param_2)

{
  long lVar1;
  
  if (param_2 < 9) {
    lVar1 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf27e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1085e6acc; end: 1085e6ad7; -[SCTV3HeadlessSession updatePublishedMedia:completion:] */

void FUN_1085e6acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updatePublishedMedia_audioMuted__11267fdf8,param_3,0,param_4);
  return;
}



/* Entry: 1085e6ad8; end: 1085e6b37; -[SCTV3HeadlessSession updatePublishedMedia:audioMuted:completion:] */

void FUN_1085e6ad8(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c288f80();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e6b38; end: 1085e6b63; -[SCTV3HeadlessSession dismissCall] */

void FUN_1085e6b38(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e6b64; end: 1085e6b6b; -[SCTV3HeadlessSession isFullscreen] */

undefined8 FUN_1085e6b64(void)

{
  return 0;
}



/* Entry: 1085e6b6c; end: 1085e6bab; -[SCTV3HeadlessSession .cxx_destruct] */

void FUN_1085e6b6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1085e6bac; end: 1085e7027; -[SCTV3HeadlessSessionController initWithUserId:talkManager:audioServices:identityServices:talkContextFactory:snapchattersSynchronousDataFetcher:groupsDataFetcher:displayNameProvider:grapheneLogger:notificationOSSettingsRetriever:notificationManager:missedCallsCache:plusFeatureGating:watchCallNotificationScheduler:notificationProcessingReporter:defaultCommunicationAppConfig:] */

undefined8 *
FUN_1085e6bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126fd050;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 5,param_4);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0xd,param_13);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_18);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_18);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085e7028; end: 1085e7103;  */

void FUN_1085e7028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126da5d0;
    _objc_alloc(PTR_PTR_1126da5d0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR_PTR_1126da328;
    func_0x00010c22ba80(PTR_PTR_1126da328);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026a00(puVar5,param_2,uVar1,lVar3,lVar3,uVar2,uVar6,puVar4,
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90),
                        *(undefined8 *)(param_1 + 0x58));
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085e7104; end: 1085e7107; -[SCTV3HeadlessSessionController notificationProcessor] */

void FUN_1085e7104(void)

{
  return;
}



/* Entry: 1085e7108; end: 1085e710f; -[SCTV3HeadlessSessionController callKitCallManager] */

void FUN_1085e7108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1085e7110; end: 1085e71db; -[SCTV3HeadlessSessionController _handleUnexpectedVoipNotification:withCompletion:] */

void FUN_1085e7110(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be05a00();
  if ((int)lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf818;
    func_0x00010bfcc5a0(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010beb94c0(param_1,param_2,param_3,1,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e71dc; end: 1085e74f7; -[SCTV3HeadlessSessionController handlePushKitIncomingCallNotification:withCompletionHandler:] */

void FUN_1085e71dc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdcef40(param_1);
  uVar1 = param_3;
  FUN_108616f18();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf818;
    func_0x00010c2a0cc0(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010be447c0(param_1,param_2,param_3);
    if ((int)lVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c2943e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar8 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126cf818;
        func_0x00010c2a0d60(PTR_PTR_1126cf818);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b35a0(uVar7,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar7);
        lVar2 = param_1;
        func_0x00010be05a00();
        if ((int)lVar2 != 0) {
          uVar8 = *(ulong *)(param_1 + 0x20);
          func_0x00010bfe6360();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010bfd4f60();
          _objc_release(uVar8);
          if ((uVar3 & 1) == 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126cf818;
            func_0x00010bfcc620(PTR_PTR_1126cf818);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b35a0(uVar7,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(uVar7);
            func_0x00010beb94c0(param_1,param_2,param_3,1,param_4);
          }
        }
        func_0x00010bf8e0e0(*(undefined8 *)(param_1 + 0x90),param_2,param_3,1);
      }
      else {
        lVar2 = param_1;
        func_0x00010bde9800(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010bfcb040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        lVar5 = param_1;
        func_0x00010be2cf00(param_1,param_2,param_3,uVar7,1,param_4);
        if (lVar5 != 1) {
          uVar9 = *(undefined8 *)(param_1 + 0x80);
          uVar4 = uVar7;
          func_0x00010bf4e8a0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar9,param_2,param_3,uVar4);
          _objc_release(uVar4);
          param_1 = param_1 + 0x68;
          _objc_loadWeakRetained(param_1);
          lVar5 = param_1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbd20();
          _objc_release(lVar5);
          _objc_release(param_1);
        }
        _objc_release(uVar7);
        _objc_release(lVar2);
      }
      goto LAB_1085e73e4;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf818;
    func_0x00010c2a0ce0(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0b35a0(uVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar7);
  func_0x00010bf8e0e0(*(undefined8 *)(param_1 + 0x90),param_2,param_3,3);
  func_0x00010be32660(param_1,param_2,param_3,param_4);
LAB_1085e73e4:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e74f8; end: 1085e7503; -[SCTV3HeadlessSessionController setModularCallLauncher:] */

void FUN_1085e74f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1085e7504; end: 1085e753f; -[SCTV3HeadlessSessionController invalidate] */

void FUN_1085e7504(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x98) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085e7540; end: 1085e76a7; -[SCTV3HeadlessSessionController handleTalkInAppNotificationPressed:] */

bool FUN_1085e7540(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be447c0(param_1,param_2,param_3);
  if ((int)lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c11c420();
    bVar1 = false;
    if ((0x22 < uVar3) || ((1L << (uVar3 & 0x3f) & 0x630000000U) == 0)) goto LAB_1085e7624;
    uVar3 = param_3;
    func_0x00010c07e060();
    if ((uVar3 & 1) != 0) {
      bVar1 = true;
      goto LAB_1085e7624;
    }
    uVar3 = param_3;
    FUN_108616f18();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained();
      bVar1 = lVar2 != 0;
      if (lVar2 != 0) {
        func_0x00010bde9800(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c11c420();
        if (uVar4 - 0x1d < 9) {
          uVar6 = *(undefined8 *)(&UNK_10df36228 + (uVar4 - 0x1d) * 8);
        }
        else {
          uVar6 = 2;
        }
        puVar5 = PTR_PTR_1126b55c0;
        func_0x00010c236480(PTR_PTR_1126b55c0,param_2,uVar6,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b800(lVar2,param_2,uVar3,param_1,puVar5,0,0,0);
        _objc_release(puVar5);
        _objc_release(param_1);
        _objc_release(lVar2);
      }
      _objc_release(uVar3);
      goto LAB_1085e7624;
    }
  }
  bVar1 = false;
LAB_1085e7624:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1085e76a8; end: 1085e77bf; -[SCTV3HeadlessSessionController handleTalkInAppNotificationDismissed:] */

void FUN_1085e76a8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be447c0(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    uVar2 = param_3;
    FUN_108616f18();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bde9800(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfcb040(uVar3,param_2,uVar2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(uVar3);
      uVar5 = param_3;
      func_0x00010c07e060();
      if ((uVar5 & 1) == 0) {
        lVar1 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar1);
        lVar6 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94340();
        _objc_release(lVar6);
        _objc_release(lVar1);
      }
      func_0x00010be8a540(param_1,param_2,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e77c0; end: 1085e7903; -[SCTV3HeadlessSessionController shouldFilterNotification:] */

ulong FUN_1085e77c0(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    func_0x00010c11c420(param_3);
    uVar1 = param_1;
    func_0x00010be447c0(param_1,param_2,param_3);
    uVar2 = param_1;
    func_0x00010be447e0(param_1,param_2,param_3);
    if (((uVar1 & 1) != 0) || ((int)uVar2 != 0)) {
      lVar3 = param_3;
      FUN_108616f18();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
LAB_1085e78d8:
        param_1 = 0;
      }
      else if ((int)uVar2 == 0) {
        if ((int)uVar1 == 0) goto LAB_1085e78d8;
        uVar1 = param_1;
        func_0x00010bde9800(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfcb040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010be2cf00(param_1,param_2,param_3,uVar5,0,0);
        _objc_release(uVar5);
        _objc_release(uVar1);
      }
      else {
        func_0x00010be2ef20(param_1,param_2,param_3,lVar3);
      }
      _objc_release(lVar3);
      goto LAB_1085e78e4;
    }
  }
  param_1 = 0;
LAB_1085e78e4:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1085e7904; end: 1085e7a87; -[SCTV3HeadlessSessionController processNotification:] */

void FUN_1085e7904(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    func_0x00010c11c420(param_3);
    lVar4 = param_1;
    func_0x00010be447c0(param_1,param_2,param_3);
    if ((((int)lVar4 != 0) && (uVar1 = param_3, func_0x00010c11c420(), uVar1 < 0x23)) &&
       ((1L << (uVar1 & 0x3f) & 0x630000000U) != 0)) {
      uVar1 = param_3;
      FUN_108616f18();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        lVar4 = *(long *)(param_1 + 0x38);
        func_0x00010c269d40(lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cf818;
        func_0x00010c0dbb40(PTR_PTR_1126cf818);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b35a0(lVar4,param_2,puVar5);
      }
      else {
        lVar4 = param_1;
        func_0x00010bde9800(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = *(undefined **)(param_1 + 0x60);
        func_0x00010c269d40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010bfcb040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010bf4e8a0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c114ce0(uVar3,param_2,param_3,puVar2);
        _objc_release(puVar2);
        _objc_release(uVar3);
      }
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e7a88; end: 1085e7b1f; -[SCTV3HeadlessSessionController removeNotification:] */

void FUN_1085e7a88(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    func_0x00010c11c420(param_3);
    lVar1 = param_1;
    func_0x00010be447c0(param_1,param_2,param_3);
    if ((((int)lVar1 != 0) && (uVar2 = param_3, func_0x00010c11c420(), uVar2 < 0x23)) &&
       ((1L << (uVar2 & 0x3f) & 0x630000000U) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c114cc0();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e7b20; end: 1085e7b93; -[SCTV3HeadlessSessionController isSessionActiveForTalkContext:] */

long FUN_1085e7b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07da40();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1085e7b94; end: 1085e7d8f; -[SCTV3HeadlessSessionController didStartCallWithTalkContext:media:sourceType:isHangout:completion:] */

void FUN_1085e7b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(in_x6);
  lVar1 = param_1;
  func_0x00010bf27fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1238c0();
  _objc_release(uVar6);
  _objc_release(lVar1);
  *(long *)(param_1 + 0xa0) = lVar2;
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    uVar6 = param_3;
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    _objc_release(uVar5);
  }
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR_PTR_1126cf828;
  func_0x00010c0eeac0(PTR_PTR_1126cf828);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(in_x6);
  lStack_70 = lVar2;
  func_0x00010be79180(param_1);
  _objc_release(puVar4);
  _objc_release(in_x6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(in_x6);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e7d90; end: 1085e7eb3;  */

void FUN_1085e7d90(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1085e7eb4;
      puStack_60 = &UNK_110842a68;
      _objc_copyWeak(auStack_50,param_1 + 0x30);
      uStack_48 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_58 = uVar2;
      func_0x000107c312cc("APPSTORE",&puStack_78);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
      _objc_release(uStack_58);
      _objc_destroyWeak(auStack_50);
    }
    else {
      func_0x00010be96020(lVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085e7eb4; end: 1085e7f33;  */

void FUN_1085e7eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf27fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bd2a0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132820();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e7f34; end: 1085e7f37; -[SCTV3HeadlessSessionController willAnswerCallWithTalkContext:media:] */

void FUN_1085e7f34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeCallKitNotificationForTal_1125807f0);
  return;
}



/* Entry: 1085e7f38; end: 1085e7ff7; -[SCTV3HeadlessSessionController didAnswerCallWithTalkContext:media:] */

void FUN_1085e7f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf83460(lVar2,param_2,param_3);
  func_0x00010be22840(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bf287a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288f60();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085e7ff8; end: 1085e810b; -[SCTV3HeadlessSessionController didEndCallWithTalkContext:] */

void FUN_1085e7ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar3 = param_3;
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      lVar2 = param_1;
      func_0x00010bf27fc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bd2a0();
      _objc_release(lVar2);
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      _objc_release(uVar3);
    }
  }
  lVar2 = param_1;
  func_0x00010be22840(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf287a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288f60();
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bf287a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83420();
  _objc_release(lVar4);
  func_0x00010be8a540(param_1,param_2,param_3);
  func_0x00010be8b940(param_1,param_2,param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e810c; end: 1085e8173; -[SCTV3HeadlessSessionController didUpdateMedia:muteStatus:talkContext:] */

void FUN_1085e810c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x00010be22840(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf287a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288f40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085e8174; end: 1085e81d3; -[SCTV3HeadlessSessionController callKitAudioServices] */

void FUN_1085e8174(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085e81d4; end: 1085e8f2b; -[SCTV3HeadlessSessionController _handleNotification:talkContext:isVoipForCallKit:withCompletion:] */

long FUN_1085e81d4(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  uint param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_268;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_6;
  _objc_retain();
  _dispatch_group_create();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1085e8f2c;
  uStack_88 = 0x1085e8f3c;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1085e8f2c;
  uStack_b8 = 0x1085e8f3c;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1085e8f2c;
  uStack_e8 = 0x1085e8f3c;
  uStack_e0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x2020000000;
  uStack_130 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x2020000000;
  uStack_150 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x2020000000;
  uStack_170 = 0;
  ppuVar4 = param_4;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf51800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c074920();
  _objc_release(ppuVar5);
  puStack_268 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)ppuVar6 == 0) {
    ppuVar6 = ppuVar4;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c12a5a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar5 = ppuVar7;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    puStack_268 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = param_3;
    func_0x00010c15de20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar5);
  _dispatch_group_enter(lVar3);
  ppuVar5 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar8 = PTR_PTR_1126cf828;
  ppuVar5 = param_3;
  func_0x00010c15de20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  func_0x00010c11c420();
  ppuVar5 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar9 = PTR_PTR_1126da558;
  _objc_alloc();
  ppuVar5 = ppuVar4;
  func_0x00010bf517c0(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = param_3;
  func_0x00010c15de20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005140();
  _objc_release(ppuVar10);
  _objc_release(ppuVar5);
  puVar11 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  iVar1 = (int)puVar11;
  _objc_retainAutoreleasedReturnValue();
  iVar2 = iVar1;
  func_0x00010c06c3c0();
  _objc_release();
  if (iVar2 == 0) {
    lVar18 = 2;
  }
  else {
    FUN_108614d48();
    lVar18 = 3;
    if (iVar1 == 0) {
      lVar18 = 0;
    }
  }
  if (param_5 != 0) {
    FUN_108614d48();
    iVar2 = 0;
    if (lVar18 != 3) {
      iVar2 = iVar1;
    }
    if (iVar2 == 1) {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126cf818;
      func_0x00010c2a0ca0(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35a0(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar12);
    }
  }
  _objc_initWeak(auStack_190,param_1);
  lVar13 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_190);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puStack_268);
  lStack_198 = lVar18;
  _objc_retain(lVar3);
  func_0x00010c114d00(lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  lVar15 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010bf61b80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c252440();
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar15);
  if (lVar14 == 3) {
    _dispatch_group_enter(lVar3);
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_4;
    func_0x00010bf5e540(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar5;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    func_0x00010bfa6120(uVar12);
    _objc_release(ppuVar10);
    _objc_release(ppuVar5);
    _objc_release(uVar12);
    _objc_release(lVar3);
  }
  uVar12 = 0;
  _dispatch_time(0,3500000000);
  lVar18 = lVar3;
  _dispatch_group_wait(lVar3,uVar12);
  if (lVar18 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cf818;
    func_0x00010c2a0d40(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar12);
    func_0x00010c1221a0(param_3);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cf818;
    func_0x00010c2a0d20(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35c0(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar12);
    if (*(char *)(puStack_140 + 3) == '\x01') {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126cf818;
      func_0x00010c2a0d00(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35c0(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar12);
    }
    if (lVar14 == 3) {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126cf818;
      func_0x00010c2a0c80(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35c0(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar12);
    }
  }
  uVar16 = puStack_d0[5];
  if (uVar16 == 0) {
    puStack_d0[5] = PTR____kCFBooleanFalse_11034ab60;
    _objc_release();
    uVar16 = puStack_d0[5];
  }
  func_0x00010bf1f3c0();
  iVar2 = (int)uVar16;
  if ((uVar16 & 1) == 0) {
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010bfd4f60();
    _objc_release(uVar17);
    lVar18 = param_1;
    func_0x00010be05a00();
    if ((((uint)uVar12 | param_5 & (uint)lVar18 ^ 0xffffffff) & 1) == 0) {
      ppuVar5 = param_3;
      func_0x00010c11c420();
      func_0x00010beb94c0(param_1);
      puVar11 = PTR_PTR_1126cf818;
      if (((uint)(ppuVar5 < (undefined **)0x23) & (uint)(0x630000000 >> ((ulong)ppuVar5 & 0x3f))) ==
          0) {
        func_0x00010bfcc600(PTR_PTR_1126cf818);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfcc5e0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35a0();
      _objc_release(uVar12);
      _objc_release(puVar11);
    }
    func_0x00010bdd4f00(param_1);
    goto LAB_1085e8d08;
  }
  FUN_108614d48();
  if (iVar2 == 0) {
LAB_1085e8cc4:
    ppuVar5 = param_3;
    func_0x00010c11c420();
    if (1 < (long)ppuVar5 - 0x25U) {
      if (param_5 != 0) {
        func_0x00010be85b40(param_1);
      }
LAB_1085e8d04:
      param_1 = 0;
      goto LAB_1085e8d08;
    }
  }
  else {
    puVar11 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    iVar2 = (int)puVar11;
    func_0x00010c06c3c0();
    _objc_release();
    if (iVar2 == 0) goto LAB_1085e8cc4;
    FUN_108616c68();
    if (((ulong)puVar11 & 1) == 0) {
      ppuVar5 = param_3;
      func_0x00010c11c420();
      if ((ppuVar5 < (undefined **)0x23) && ((1L << ((ulong)ppuVar5 & 0x3f) & 0x630000000U) != 0)) {
        lVar18 = param_1;
        func_0x00010be05a00();
        if ((param_5 & (uint)lVar18) != 1) goto LAB_1085e8cd8;
        uVar12 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126cf818;
        func_0x00010c087a40(PTR_PTR_1126cf818);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b35a0(uVar12);
LAB_1085e8c24:
        _objc_release(puVar11);
        _objc_release(uVar12);
        func_0x00010beb94c0(param_1);
        goto LAB_1085e8cd8;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126cf818;
      func_0x00010c087a20(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35a0(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar12);
      goto LAB_1085e8d04;
    }
    iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010c079e00();
    if (iVar2 == 0) {
LAB_1085e8a24:
      ppuVar5 = param_3;
      func_0x00010c11c420();
      if ((ppuVar5 < (undefined **)0x23) && ((1L << ((ulong)ppuVar5 & 0x3f) & 0x630000000U) != 0)) {
        if (puStack_a0[5] != 0) {
          func_0x00010be8fb40(param_1);
          param_1 = 2;
          goto LAB_1085e8d08;
        }
        lVar18 = param_1;
        func_0x00010be05a00();
        if ((param_5 & (uint)lVar18) == 1) {
          uVar12 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126cf818;
          func_0x00010bfcc5c0(PTR_PTR_1126cf818);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b35a0(uVar12);
          goto LAB_1085e8c24;
        }
      }
      else {
        ppuVar5 = param_3;
        func_0x00010c11c420();
        if (((long)ppuVar5 - 0x1fU & 0xfffffffffffffffa) == 0) goto LAB_1085e8d04;
        ppuVar5 = param_3;
        func_0x00010c11c420();
        if (1 < (long)ppuVar5 - 0x25U) goto LAB_1085e8cc4;
      }
    }
    else {
      if (((param_5 & 1) != 0) ||
         (ppuVar5 = param_3, func_0x00010c247520(), ppuVar5 == (undefined **)0x3)) {
        uVar12 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126cf818;
        func_0x00010c087a80(PTR_PTR_1126cf818);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b35a0(uVar12);
        _objc_release(puVar11);
        _objc_release(uVar12);
        goto LAB_1085e8a24;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126cf818;
      func_0x00010c087a60(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35a0(uVar12);
      _objc_release(puVar11);
      _objc_release(uVar12);
    }
  }
LAB_1085e8cd8:
  func_0x00010bdd4f00(param_1);
LAB_1085e8d08:
  _objc_release(lVar3);
  _objc_release(puStack_268);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_190);
  _objc_release(puVar9);
  _objc_release(ppuVar7);
  _objc_release(puVar8);
  _objc_release(ppuVar6);
  _objc_release(puStack_268);
  _objc_release(ppuVar4);
  __Block_object_dispose(&uStack_188,8);
  __Block_object_dispose(&uStack_168,8);
  __Block_object_dispose(&uStack_148,8);
  __Block_object_dispose(&uStack_128,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1085e8f2c; end: 1085e8f43;  */

void FUN_1085e8f2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1085e8f44; end: 1085e90bf;  */

void FUN_1085e8f44(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _CACurrentMediaTime();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x18) = param_1;
  lVar1 = param_2 + 0x70;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_2 + 0x50) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar2;
    _objc_release(uVar4);
    if (param_3 != 0) {
      uVar3 = *(ulong *)(param_2 + 0x20);
      func_0x00010c11c420();
      if (uVar3 < 0x23 && (1L << (uVar3 & 0x3f) & 0x630000000U) != 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x18) = 1;
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(uVar4);
        uVar6 = *(undefined8 *)(param_2 + 0x40);
        _objc_retain(uVar6);
        func_0x00010be79180(lVar1);
        _objc_release(uVar6);
        _objc_release(uVar4);
        goto LAB_1085e909c;
      }
    }
    _dispatch_group_leave(*(undefined8 *)(param_2 + 0x40));
  }
LAB_1085e909c:
  _objc_release(lVar1);
  return;
}



/* Entry: 1085e90c0; end: 1085e91e7;  */

void FUN_1085e90c0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = param_1;
  if (param_3 == 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = PTR____kCFBooleanFalse_11034ab60;
    _objc_release(uVar1);
  }
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28) != 0) {
    func_0x00010c247520(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c1334e0(param_3);
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e91e8; end: 1085e920b; -[SCTV3HeadlessSessionController _blockSuppressNotification:emitProcessingStepEvents:] */

undefined8 FUN_1085e91e8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010bf8e0e0(*(undefined8 *)(param_1 + 0x90),param_2,param_3,0xc);
  }
  return 1;
}



/* Entry: 1085e920c; end: 1085e93ef; -[SCTV3HeadlessSessionController _handleReplacementNotification:convoId:] */

uint FUN_1085e920c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  _dispatch_group_create();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1085e8f2c;
  uStack_60 = 0x1085e8f3c;
  uStack_58 = 0;
  _dispatch_group_enter();
  uVar4 = param_3;
  func_0x00010c131300(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c115300(lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  uVar4 = 0;
  _dispatch_time(0,3500000000);
  _dispatch_group_wait(uVar1,uVar4);
  lVar5 = puStack_78[5];
  if (lVar5 == 0) {
    uVar6 = 1;
  }
  else {
    func_0x00010bf1f3c0();
    uVar6 = (uint)lVar5 ^ 1;
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1085e93f0; end: 1085e943f;  */

void FUN_1085e93f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085e9440; end: 1085e9483; -[SCTV3HeadlessSessionController _applyWorkaroundForIos13SdkForMultipleVoipsIfNeeded] */

void FUN_1085e9440(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085e9484; end: 1085e94c7; -[SCTV3HeadlessSessionController _doesIosDemandVoipMustTriggerCallKit] */

undefined * FUN_1085e9484(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06c3c0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1085e94c8; end: 1085e95a3; -[SCTV3HeadlessSessionController _notificationWithNewTitle:forNotification:] */

void FUN_1085e94c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long in_x7;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar8 = 1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = 0;
  uVar5 = param_4;
  puVar7 = puVar1;
  func_0x00010bf58480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(in_x7);
  puVar2 = puVar1;
  func_0x00010be22840();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar1 + 0x28;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56780(puVar4);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  else {
    (**(code **)(in_x7 + 0x10))(in_x7,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(in_x7);
  _objc_release(uVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1085e95a4; end: 1085e96df; -[SCTV3HeadlessSessionController _prepareSessionForTalkContext:callIntent:remoteUserIds:sourceType:withCallKit:completion:] */

void FUN_1085e95a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010be22840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56780(lVar3);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  else {
    (**(code **)(param_8 + 0x10))(param_8,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e96e0; end: 1085e9793; -[SCTV3HeadlessSessionController _retainSession:forTalkContext:] */

void FUN_1085e96e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_4;
  func_0x00010bf4e8a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e9794; end: 1085e9877; -[SCTV3HeadlessSessionController _releaseSessionForTalkContext:] */

void FUN_1085e9794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = param_3;
    func_0x00010bf4e8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,0,uVar1);
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e9878; end: 1085e991f; -[SCTV3HeadlessSessionController _getSessionForTalkContext:] */

void FUN_1085e9878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1085e9920; end: 1085e9a0f; -[SCTV3HeadlessSessionController _raiseExceptionIfViolatingIos13SdkRule:] */

void FUN_1085e9920(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4f60();
  _objc_release(uVar1);
  func_0x00010be05a00();
  puVar4 = PTR_PTR_1126b1370;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((int)param_1 != 0) && ((uVar2 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010c11c420(param_3);
    func_0x00010c25d500(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110ee52d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110ee52f8,
                        &PTR____CFConstantStringClassReference_110dc4658);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e9a10; end: 1085e9be7; -[SCTV3HeadlessSessionController _reportIncomingCallNotification:incomingCallRequest:session:customRingtoneId:completion:] */

void FUN_1085e9a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c2688a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3fe0(param_4);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c133020(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085e9be8; end: 1085e9d4f;  */

void FUN_1085e9be8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2688a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be96020(lVar1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c292820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar3 = param_2;
      func_0x00010bf3ec40();
      if (lVar3 == 3) {
        func_0x00010bdd7b40(lVar1);
      }
      lVar3 = lVar1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4880();
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c15de20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133500(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(uVar6);
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085e9d50; end: 1085e9e23; -[SCTV3HeadlessSessionController _cacheMissedCallFromTalkcorePayload:withReason:] */

void FUN_1085e9d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010bdc1900(puVar1,param_2,param_3,1,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee5318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e80a0(uVar2,param_2,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1085e9e24; end: 1085e9ef3; -[SCTV3HeadlessSessionController _showGhostCallForNotification:withUnknownCallerName:completion:] */

void FUN_1085e9e24(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  _objc_retain(param_3);
  lVar2 = param_3;
  if (param_4 != 0) {
    func_0x00010860169c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be644a0(param_1,param_2,lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132f60();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085e9ef4; end: 1085e9fcb; -[SCTV3HeadlessSessionController _isTalkV3Notification:] */

uint FUN_1085e9ef4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c420();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((((uVar1 < 0x23) && ((1L << (uVar1 & 0x3f) & 0x630000000U) != 0)) || (uVar1 - 0x25 < 2)) ||
     ((uVar1 - 0x1f & 0xfffffffffffffffa) == 0)) {
    uVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c078c00(puVar3,param_2,uVar2);
    uVar4 = (uint)puVar3 ^ 1;
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1085e9fcc; end: 1085ea047; -[SCTV3HeadlessSessionController _isTalkV3ReplacementNotification:] */

undefined8 FUN_1085e9fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1313c0();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c131300(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be447c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}


