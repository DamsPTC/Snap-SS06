/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070a1694; end: 1070a1843; -[SCArroyoChatLogger logChatChatErase:reaction:recipient:isGroupConversation:type:source:] */

void FUN_1070a1694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_6;
  func_0x00010be10480(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070a1844; end: 1070a189f;  */

void FUN_1070a1844(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a18a0; end: 1070a1e27; -[SCArroyoChatLogger _logChatChatErase:reaction:recipient:isGroupConversation:cellPosition:type:source:] */

void FUN_1070a18a0(long param_1,undefined8 param_2,long param_3,long param_4,undefined **param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  uVar17 = (undefined4)(param_6 >> 0x20);
  uVar15 = (undefined4)param_6;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = param_5;
  uVar16 = uVar15;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4638;
  _objc_opt_new();
  func_0x00010c17a580();
  func_0x00010c206c40(puVar3);
  lVar12 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c14b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1f5840(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar12);
  func_0x00010c196e20(puVar3);
  _objc_retain(param_3);
  func_0x00010c27dd80(param_3);
  func_0x00010c083520(param_3);
  _objc_release(param_3);
  func_0x00010c2044c0(puVar3);
  if (param_4 == 0) {
    FUN_10708f988(lVar2);
    lVar12 = lVar2;
    FUN_10708f360();
  }
  else {
    lVar12 = param_4;
    func_0x00010c120b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b600(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar12);
    lVar12 = param_4;
    func_0x00010c120a80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar12);
    if (lVar5 == 0) {
      lVar12 = param_4;
      func_0x00010c120a80(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar12;
      func_0x00010c0682a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7c60(puVar3);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar12);
    }
    lVar12 = 1;
  }
  func_0x00010c1c7160(puVar3);
  func_0x00010c1c5440(puVar3);
  func_0x00010c0deb00(param_3);
  func_0x00010c1e7bc0(puVar3);
  func_0x00010c0dece0(param_3);
  func_0x00010c1e7c00(puVar3);
  lVar4 = param_3;
  func_0x00010bf6e760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined **)0x0) {
    ppuVar13 = (undefined **)PTR____NSArray0__struct_11034ab48;
    FUN_1070985dc(puVar3,uVar15,lVar6,PTR____NSArray0__struct_11034ab48);
  }
  else {
    ppuVar7 = param_5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_88 = ppuVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar8;
    FUN_1070985dc(puVar3,uVar15,lVar6,ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  if ((param_6 & 1) == 0) {
    _objc_retain(puVar3);
    _objc_retain(param_5);
    func_0x00010c07a6a0(param_5);
    func_0x00010c184500(puVar3);
    ppuVar7 = param_5;
    func_0x00010c06d560();
    if ((int)ppuVar7 == 0) {
      ppuVar7 = param_5;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_1070a3130;
      puStack_98 = &UNK_11098b3d8;
      _objc_retain(puVar3);
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x1070a313c;
      puStack_c0 = &UNK_11098b408;
      puStack_90 = puVar3;
      _objc_retain(puVar3);
      puStack_100 = puVar1;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x1070a3148;
      puStack_e8 = &UNK_11098b438;
      puStack_b8 = puVar3;
      _objc_retain(puVar3);
      ppuVar13 = &puStack_d8;
      ppuVar14 = &puStack_100;
      puStack_e0 = puVar3;
      func_0x00010c0bdea0(ppuVar8);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(puStack_e0);
      _objc_release(puStack_b8);
      _objc_release(puStack_90);
    }
    else {
      func_0x00010c1a0ce0(puVar3);
    }
    _objc_release(param_5);
    _objc_release(puVar3);
  }
  FUN_107099368(puVar3,lVar2);
  func_0x00010709957c(puVar3,lVar2);
  FUN_107098a4c(puVar3,lVar2);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar9);
  func_0x0001070a5c90(*(undefined8 *)(param_1 + 0x20),lVar12);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(param_9);
    _objc_retain(ppuVar14);
    _objc_retain(ppuVar13);
    uVar9 = param_9;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4640;
    _objc_opt_new(PTR_PTR_1126d4640);
    func_0x00010c206c40();
    FUN_10708f360(uVar9);
    func_0x00010c1c7160(puVar3);
    FUN_10708f988(uVar9);
    func_0x00010c1c5440(puVar3);
    uVar11 = uVar9;
    func_0x00010bf4ce20();
    if ((int)uVar11 == 2) {
      uVar11 = uVar9;
      func_0x00010c26b700(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c17ac60(puVar3);
      _objc_release(uVar10);
      _objc_release(uVar11);
    }
    uVar11 = param_9;
    func_0x00010c0cb200(param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cda0(puVar3);
    _objc_release(uVar10);
    _objc_release(uVar11);
    FUN_1070985dc(puVar3,CONCAT44(uVar17,uVar16),ppuVar14,ppuVar13);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    uVar11 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar11);
    _objc_release(puVar3);
    _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_9);
    return;
  }
  return;
}



/* Entry: 1070a1e28; end: 1070a1fd3; -[SCArroyoChatLogger logChatChatPrioritySendWithMessage:recipientUserIds:conversationId:isGroupConversation:source:] */

void FUN_1070a1e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4640;
  _objc_opt_new(PTR_PTR_1126d4640);
  func_0x00010c206c40();
  FUN_10708f360(uVar1);
  func_0x00010c1c7160(puVar2);
  FUN_10708f988(uVar1);
  func_0x00010c1c5440(puVar2);
  uVar4 = uVar1;
  func_0x00010bf4ce20();
  if ((int)uVar4 == 2) {
    uVar4 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c17ac60(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  uVar4 = param_3;
  func_0x00010c0cb200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cda0(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  FUN_1070985dc(puVar2,param_6,param_5,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a1fd4; end: 1070a20a7; -[SCArroyoChatLogger logChatEraseModeUpdate:source:correspondentId:isSnapRetentionUpdate:] */

void FUN_1070a1fd4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c06a8;
  _objc_opt_new(PTR_PTR_1126c06a8);
  if (param_3 - 1U < 5) {
    uVar2 = *(undefined8 *)(&UNK_10de1f290 + (param_3 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  func_0x00010c21c940(puVar1,param_2,uVar2);
  func_0x00010c21c7c0(puVar1,param_2,param_4);
  func_0x00010c1b46e0(puVar1,param_2,param_6);
  if (param_5 != 0) {
    func_0x00010c184460(puVar1,param_2,param_5);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1070a20a8; end: 1070a217b; -[SCArroyoChatLogger logChatSnapBatchSave:isGroupConversation:recipientIds:snapCount:] */

void FUN_1070a20a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4648;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c203cc0();
  func_0x00010c206c40(puVar1);
  FUN_1070985dc(puVar1,param_4,param_3,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  FUN_1070a5a40(*(undefined8 *)(param_1 + 0x20),0x17,0x29,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a217c; end: 1070a2243; -[SCArroyoChatLogger logOneOnOneChatNotificationMuteWithCorrespondentGuid:muteAction:source:] */

void FUN_1070a217c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba368;
  _objc_opt_new(PTR_PTR_1126ba368);
  func_0x00010c1ce740();
  func_0x00010c184460(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ca600(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a2244; end: 1070a230b; -[SCArroyoChatLogger logOneOnOneCallingWithcorrespondentGuid:muteAction:source:] */

void FUN_1070a2244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba370;
  _objc_opt_new(PTR_PTR_1126ba370);
  func_0x00010c1ce740();
  func_0x00010c1844c0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ca600(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a230c; end: 1070a2613; -[SCArroyoChatLogger _logSendMessageStoryPostWithSendMessageAttemptId:snapSendInfo:analyticsDataModel:isAsyncRetry:] */

void FUN_1070a230c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined4 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4650;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_4;
  func_0x00010c23f880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (uVar3 == 0) {
    uVar4 = param_5;
    func_0x00010c294d60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar3);
    uVar4 = uVar3;
  }
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf44740(uVar4,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf529e0();
  uVar6 = uVar4;
  if (uVar5 == 2) {
    uVar6 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = uVar2;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar5 = param_5;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar4);
    uVar5 = uVar4;
  }
  _objc_release(uVar4);
  uVar4 = param_5;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x00010c11e6e0();
    if (uVar4 == 1) {
      uVar8 = 2;
      goto LAB_1070a24e8;
    }
    uVar4 = uVar2;
    func_0x00010bfbaf40();
    if ((uVar4 & 1) != 0) {
      uVar8 = 3;
      goto LAB_1070a24e8;
    }
    uVar4 = uVar2;
    func_0x00010c11e6e0();
    if ((uVar4 == 0) || (uVar7 = uVar2, func_0x00010c11e6e0(), uVar4 = uVar2, uVar7 == 2)) {
      uVar8 = 1;
      goto LAB_1070a24e8;
    }
  }
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = 3;
  }
LAB_1070a24e8:
  uVar4 = uVar2;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar7 != 0) {
    uVar4 = uVar2;
    func_0x00010bf31200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_2,uVar4);
    _objc_release(uVar4);
  }
  uVar4 = uVar6;
  func_0x00010c08fa60();
  if (uVar4 != 0) {
    func_0x00010c17d120(puVar1,param_2,uVar6);
    func_0x00010c1df360(puVar1,param_2,uVar6);
  }
  func_0x00010c1fc200(puVar1,param_2,param_3);
  uVar4 = uVar5;
  func_0x00010c08fa60();
  if (uVar4 != 0) {
    func_0x00010c1fcc00(puVar1,param_2,uVar5);
  }
  func_0x00010c20d6c0(puVar1,param_2,uVar8);
  func_0x00010c225c60(puVar1,param_2,param_6);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a2614; end: 1070a26c7; -[SCArroyoChatLogger logVoiceNoteCreateWithRecordType:endState:duration:previewCount:] */

void FUN_1070a2614(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4658;
  _objc_opt_new(PTR_PTR_1126d4658);
  func_0x00010c1c5440();
  func_0x00010c1e8e00(puVar1,param_3,param_4);
  func_0x00010c196100(puVar1,param_3,param_5);
  func_0x00010c1cdda0(param_1,puVar1);
  func_0x00010c1e1b40(puVar1,param_3,param_6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a26c8; end: 1070a27e3; -[SCArroyoChatLogger logSCAChatDirectStoryViewForMemoriesStoryWithMediaId:viewTimeSec:lastInteraction:isLaguna:numberOfSnaps:numberOfSnapsViewed:conversationId:] */

void FUN_1070a26c8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2eb0;
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c1c8600();
  _objc_release(param_9);
  func_0x00010c2156e0((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c205ae0(puVar1,param_3,param_8);
  func_0x00010c203cc0(puVar1,param_3,param_7);
  func_0x00010c20ddc0(puVar1,param_3,2);
  uVar2 = 10;
  if (param_6 == 0) {
    uVar2 = 1;
  }
  func_0x00010c20de00(puVar1,param_3,uVar2);
  func_0x00010c27dd80(param_5);
  _objc_release(param_5);
  func_0x00010c198340(puVar1,param_3,0xffffffffffffffff);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a27e4; end: 1070a28b7; -[SCArroyoChatLogger logDWebUpsellStatusDisplayedUnseen:isGroupConversation:conversationId:] */

void FUN_1070a27e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x000100bc5a10();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2533e0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0x11) {
    puVar2 = PTR_PTR_1126d4660;
    _objc_opt_new(PTR_PTR_1126d4660);
    if (param_4 != 0) {
      func_0x00010c1c8600(puVar2,param_2,param_5);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1070a28b8; end: 1070a2a87; -[SCArroyoChatLogger logClearConversationWithCorrespondentId:groupId:source:conversationSubtypeMetadata:] */

void FUN_1070a28b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d4668;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c184460();
  _objc_release(param_3);
  func_0x00010c1c8600(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c206c40(puVar1,param_2,param_5);
  lVar2 = param_6;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010bf2c1e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef4a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0f3e20(uVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010c15ed20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd160(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010bef2c20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1070a2a88; end: 1070a2b03; -[SCArroyoChatLogger logDeleteStoryMediaForMessageAnalyticsId:] */

void FUN_1070a2a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4670;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c17b600();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a2b04; end: 1070a2b9b; -[SCArroyoChatLogger _fetchCellPositionWithConversationId:completion:] */

void FUN_1070a2b04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3880(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070a2b9c; end: 1070a2c33; -[SCArroyoChatLogger _fetchFeedMetadata:completion:] */

void FUN_1070a2b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ba0(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070a2c34; end: 1070a2d57; -[SCArroyoChatLogger logSCAChatHeaderWithCorrespondentId:isGroupConversation:conversationId:locationAvailable:locationRendered:friendshipFlashbackAvailable:friendshipFlashbackRendered:saturnEventAvailable:saturnEventRendered:] */

void FUN_1070a2c34(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4678;
  _objc_opt_new(PTR_PTR_1126d4678);
  if (param_4 == 0) {
    func_0x00010c1844c0();
  }
  else {
    func_0x00010c1c8600();
  }
  func_0x00010c1bf800(puVar1,param_2,param_6);
  func_0x00010c1bfb40(puVar1,param_2,param_7);
  func_0x00010c1a0c40(puVar1,param_2,param_8);
  func_0x00010c1a0c60(puVar1,param_2,(undefined1)param_9);
  func_0x00010c1f55a0(puVar1,param_2,param_9._1_1_);
  func_0x00010c1f55c0(puVar1,param_2,param_9._2_1_);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a2d58; end: 1070a2e5f; -[SCArroyoChatLogger .cxx_destruct] */

void FUN_1070a2d58(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 1070a2e60; end: 1070a2eef;  */

bool FUN_1070a2e60(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf0d0a0();
  if ((int)lVar2 == 3) {
    lVar2 = param_2;
    func_0x00010c2a3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1070a2ef0; end: 1070a2f33;  */

bool FUN_1070a2ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf31ca0();
  _objc_release(param_2);
  return (int)uVar1 == 0x50;
}



/* Entry: 1070a2f34; end: 1070a2f53;  */

bool FUN_1070a2f34(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0d0a0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 1070a2f54; end: 1070a2f5b;  */

void FUN_1070a2f54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf026f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_analyticsMessageId_11259e360);
  return;
}



/* Entry: 1070a2f5c; end: 1070a301f;  */

void FUN_1070a2f5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != 0) {
    _objc_retain();
    _objc_opt_new();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1070a30b8;
    puStack_30 = &UNK_11098b3a8;
    puStack_28 = puVar1;
    _objc_retain();
    func_0x00010bf97e80(param_1,param_2,&puStack_48);
    _objc_release(param_1);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_28);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070a3020; end: 1070a312f;  */

ulong FUN_1070a3020(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0e8a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0e8a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c13e040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1218e0();
    uVar4 = (ulong)(lVar3 != 0);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1070a3130; end: 1070a3153;  */

void FUN_1070a3130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a0cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setFriendshipStatus__112645d58,1);
  return;
}



/* Entry: 1070a3154; end: 1070a31a7;  */

undefined8 FUN_1070a3154(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar1 = param_1, func_0x00010c067fc0(), 0x1b < uVar1)) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(&UNK_10de1f308 + uVar1 * 8);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070a31a8; end: 1070a31c7;  */

undefined * FUN_1070a31a8(ulong param_1)

{
  if (param_1 < 0x44) {
    return (&PTR_PTR_11098b548)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1070a31c8; end: 1070a32ef;  */

ulong FUN_1070a31c8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c3300;
  _objc_opt_class(PTR_PTR_1126c3300);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c25a920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c06c700(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1070a32f0; end: 1070a35db;  */

void FUN_1070a32f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ccde0();
  FUN_1070a31a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100bc5a10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = param_2;
  FUN_1070a35dc(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x0001070a3678(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cda0(lVar5);
  _objc_release(lVar6);
  lVar6 = param_2;
  FUN_1070a376c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010c21dde0(lVar5);
  }
  lVar7 = param_2;
  FUN_1070a3860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d9a0(lVar5);
  _objc_release(lVar7);
  uVar1 = uVar4;
  FUN_10708f988(uVar4);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(lVar5);
  _objc_release(uVar1);
  func_0x00010c1c7160(lVar5);
  lVar7 = param_2;
  FUN_1070a38f4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8920(lVar5);
  _objc_release(lVar7);
  lVar7 = param_2;
  func_0x0001070a3ad4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d880(lVar5);
  _objc_release(lVar7);
  lVar7 = param_2;
  FUN_1070a3d28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1769e0(lVar5);
  _objc_release(lVar7);
  func_0x00010c15c200();
  func_0x00010c1fc220(lVar5);
  func_0x00010c1fc2c0(lVar5);
  uVar1 = param_1;
  func_0x00010bfeb3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1691e0(lVar5);
  _objc_release(uVar1);
  if ((param_5 & 1) == 0) {
    func_0x00010c291080(param_1);
    func_0x00010c21de00(lVar5);
  }
  func_0x0001070a3254(lVar5,param_4);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1070a35dc; end: 1070a376b;  */

void FUN_1070a35dc(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar3 = param_1;
  FUN_1070a4cfc();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    lVar4 = param_1;
    func_0x0001070a4df0(param_1);
    bVar2 = lVar4 != 0;
  }
  else {
    bVar2 = false;
  }
  lVar4 = lVar3;
  FUN_10708ffd0(lVar3,bVar2);
  ppuVar1 = &PTR_PTR_1126d4698;
  if ((int)lVar4 == 0) {
    ppuVar1 = &PTR_PTR_1126d46a0;
  }
  puVar5 = *ppuVar1;
  _objc_opt_new(puVar5);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1070a376c; end: 1070a385f;  */

void FUN_1070a376c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar3 = PTR_PTR_1126d4598;
  _objc_opt_class(PTR_PTR_1126d4598);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010c15cde0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3300;
  if (uVar4 == 0) {
    _objc_retain(param_1);
    _objc_opt_class(puVar3);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar5 = uVar2;
    func_0x00010c15cde0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    _objc_retain(uVar4);
    uVar5 = uVar4;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1070a3860; end: 1070a38f3;  */

void FUN_1070a3860(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c3300;
  _objc_opt_class(PTR_PTR_1126c3300);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c23f880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf31200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070a38f4; end: 1070a3d27;  */

void FUN_1070a38f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_1070a4cfc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x0001070a4df0();
  _objc_release(param_1);
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf0a320();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  lVar5 = lVar1;
  func_0x00010bfbb480();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010bf0a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  lVar7 = lVar1;
  func_0x00010bfbb520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar8 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar3);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (lVar6 + lVar4 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110de8378);
    _objc_release(puVar10);
  }
  if (lVar8 + lVar5 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar8 + lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110e9c098);
    _objc_release(puVar10);
  }
  if (lVar2 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110e9c0b8);
    _objc_release(puVar10);
  }
  puVar10 = puVar9;
  func_0x00010c085d00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1070a3d28; end: 1070a3dc3;  */

undefined ** FUN_1070a3d28(ulong param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126c3300;
  _objc_opt_class(PTR_PTR_1126c3300);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar4 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010c23f880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0811a0();
  _objc_release(uVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29ef8;
  if ((int)uVar4 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_release(param_1);
  return ppuVar1;
}



/* Entry: 1070a3dc4; end: 1070a4ac3;  */

void FUN_1070a3dc4(float param_1,undefined *param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c252d60();
  if (puVar2 == (undefined *)0x5) {
    _objc_release(param_2);
  }
  else {
    puVar2 = param_2;
    func_0x00010c252d60();
    _objc_release(param_2);
    if (puVar2 != (undefined *)0x4) {
      puVar2 = param_2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c0fe1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      func_0x00010c0ccde0();
      FUN_1070a31a8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c0fe1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x00010c0ccde0();
      _objc_retain(param_3);
      if ((((undefined *)0x1 < puVar4 + -5) && (puVar4 != (undefined *)0x17)) &&
         (puVar4 == (undefined *)0x3)) {
        puVar4 = PTR_PTR_1126c3300;
        _objc_opt_class(PTR_PTR_1126c3300);
        uVar14 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar4);
        uVar5 = param_3;
        if ((uVar14 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        if (uVar5 != 0) {
          uVar14 = param_3;
          func_0x00010c23f880(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c247520();
          _objc_release(uVar14);
        }
        _objc_release(uVar5);
      }
      _objc_release(param_3);
      _objc_release(puVar15);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x000100bc5a10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar2);
      uVar14 = param_3;
      FUN_1070a35dc(param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      func_0x00010c15c1e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fc200(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar2);
      func_0x00010c15c200();
      func_0x00010c1fc220(uVar14);
      puVar2 = param_2;
      func_0x00010c13da20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010c067fc0();
      }
      _objc_release(puVar2);
      func_0x00010c1ed6c0(uVar14);
      _objc_release(puVar2);
      uVar5 = param_3;
      func_0x0001070a3678(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17cda0(uVar14);
      _objc_release(uVar5);
      uVar6 = param_3;
      FUN_1070a376c();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 != 0) {
        func_0x00010c21dde0(uVar14);
      }
      uVar5 = param_3;
      FUN_1070a3860(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19d9a0(uVar14);
      _objc_release(uVar5);
      func_0x00010c1c7160(uVar14);
      func_0x00010c19ac00(uVar14);
      puVar2 = puVar4;
      FUN_10708f988(puVar4);
      func_0x00010bc90ccc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5440(uVar14);
      _objc_release(puVar2);
      func_0x00010c2510e0(param_2);
      func_0x00010c1fc2a0(uVar14);
      func_0x00010bf957e0(param_2);
      func_0x00010c1fc240(uVar14);
      if ((param_6 & 1) == 0) {
        func_0x00010c291080(param_2);
        func_0x00010c21de00(uVar14);
      }
      func_0x00010bf957e0(param_2);
      func_0x00010c2510e0(param_2);
      func_0x00010c218500(uVar14);
      func_0x00010c218520(uVar14);
      uVar5 = param_3;
      FUN_1070a38f4(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e8920(uVar14);
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x0001070a3ad4(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20d880(uVar14);
      _objc_release(uVar5);
      uVar5 = param_3;
      FUN_1070a3d28(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1769e0(uVar14);
      _objc_release(uVar5);
      puVar2 = param_2;
      func_0x00010bf9fbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar15 = puVar2;
      func_0x00010bf529e0();
      if (puVar15 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        uVar18 = 0;
        _objc_retain(puVar2);
        puVar15 = puVar2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        param_1 = (float)uVar18;
        puVar12 = puVar2;
        if (puVar15 == (undefined *)0x0) {
LAB_1070a439c:
          _objc_release(puVar12);
        }
        else {
          lVar13 = 0;
          lVar17 = 0;
          do {
            puVar12 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar2);
              }
              lVar8 = *(long *)((long)puVar12 * 8);
              func_0x00010c27dd80();
              if (lVar8 == 1) {
                lVar17 = lVar17 + 1;
              }
              else if (lVar8 == 0) {
                lVar13 = lVar13 + 1;
              }
              puVar12 = puVar12 + 1;
            } while (puVar15 != puVar12);
            puVar15 = puVar2;
            func_0x00010bf52a60();
            param_1 = (float)uVar18;
          } while (puVar15 != (undefined *)0x0);
          _objc_release(puVar2);
          if (lVar13 != 0) {
            puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar15);
          }
          if (lVar17 != 0) {
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            goto LAB_1070a439c;
          }
        }
        puVar15 = puVar7;
        func_0x00010c085d00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      _objc_release(puVar2);
      func_0x00010c199ee0(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010c270960(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010bd869d0();
      puVar7 = puVar15;
      func_0x00010c085d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      func_0x00010c20a700(uVar14);
      _objc_release(puVar7);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bfa00c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010c067fc0();
      }
      _objc_release(puVar2);
      func_0x00010c1fc260(uVar14);
      _objc_release(puVar2);
      func_0x00010c252d60();
      func_0x00010c1fc2c0(uVar14);
      puVar2 = param_2;
      func_0x00010bfeb3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1691e0(uVar14);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bf9fd20(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_1070a3154();
      func_0x00010c199f20(uVar14);
      _objc_release(puVar2);
      func_0x00010c0cb480();
      func_0x00010c195c20(uVar14);
      puVar2 = param_2;
      func_0x00010bf938a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010c067fc0();
      }
      _objc_release(puVar2);
      func_0x00010c1958c0(uVar14);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bf93940();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010c067fc0();
      }
      _objc_release(puVar2);
      func_0x00010c195920(uVar14);
      _objc_release(puVar2);
      func_0x00010bf8cc80(param_2);
      func_0x00010c193c80(uVar14);
      puVar2 = param_2;
      func_0x00010c122d20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e89e0(uVar14);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bf50640();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar15 = puVar2;
      func_0x00010bf529e0();
      if (puVar15 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_11098b508);
        puVar15 = puVar7;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      _objc_release(puVar2);
      func_0x00010c167c80(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar2);
      _objc_retain(param_3);
      puVar2 = PTR_PTR_1126d4598;
      _objc_opt_class(PTR_PTR_1126d4598);
      uVar9 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      uVar5 = param_3;
      if ((uVar9 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      uVar9 = uVar5;
      func_0x00010bf374a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c11eb80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar9);
      _objc_release(param_3);
      func_0x00010c1afee0(uVar14);
      puVar15 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bf4bc60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c0fe1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60();
      _objc_release(puVar12);
      _objc_release(puVar7);
      _objc_release(puVar2);
      func_0x00010c1ec620(puVar15);
      puVar7 = puVar15;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c3300;
      _objc_opt_class(PTR_PTR_1126c3300);
      puVar12 = puVar7;
      _objc_opt_isKindOfClass(puVar7,puVar2);
      puVar2 = puVar7;
      if (((ulong)puVar12 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar7);
      puVar7 = puVar2;
      func_0x00010c23f880();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        puVar12 = puVar7;
        func_0x00010c0c6c20();
        if ((((undefined *)0x1b < puVar12 + 1) ||
            ((1L << ((ulong)(puVar12 + 1) & 0x3f) & 0xb4b5dbbU) == 0)) ||
           (((undefined *)0x1a < puVar12 + 1 ||
            ((1L << ((ulong)(puVar12 + 1) & 0x3f) & 0x6c6bd77U) == 0)))) {
          func_0x00010c0c4ba0(puVar7);
          func_0x00010c1c4600((double)param_1,uVar14);
        }
      }
      puVar12 = puVar7;
      func_0x00010c0d20e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = puVar7;
        func_0x00010c0d20e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c96c0(uVar14);
        _objc_release(puVar12);
        func_0x00010c0d22c0(puVar7);
        func_0x00010c1fa9e0(uVar14);
        func_0x00010c0d22e0(puVar7);
        func_0x00010c1faa60(uVar14);
      }
      puVar12 = param_2;
      func_0x00010c0c5a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar16 = puVar12;
      func_0x00010bf529e0();
      if (puVar16 == (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar10 = puVar12;
        func_0x000100504554(puVar12,&PTR___NSConcreteGlobalBlock_11098b528);
        puVar16 = puVar10;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
      }
      _objc_release(puVar12);
      func_0x00010c1c4c40(uVar14);
      _objc_release(puVar16);
      _objc_release(puVar12);
      puVar12 = param_2;
      func_0x00010bf71100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = param_2;
        func_0x00010bf71100();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c18cee0(uVar14);
        _objc_release(puVar12);
      }
      uVar5 = param_5;
      func_0x0001070a3254(uVar14);
      _objc_retain(uVar14);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar15);
      _objc_release(uVar6);
      _objc_release(uVar14);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_1070a4a54;
    }
  }
  uVar14 = 0;
LAB_1070a4a54:
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    puVar2 = param_2;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar15;
    func_0x00010c0ccde0();
    _objc_release(puVar15);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x3) {
      puVar2 = param_2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      func_0x000100bc5a10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2950;
      func_0x00010c15c240(PTR_PTR_1126b2950);
      _objc_retainAutoreleasedReturnValue();
      FUN_10708f988();
      puVar15 = puVar2;
      func_0x00010c2ac460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010bf9fd20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      FUN_107091678();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c2ac460(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010c252d60(param_2);
      FUN_107091650();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar7;
      func_0x00010c2ac460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar2);
      uVar14 = uVar5;
      func_0x00010bf366a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar3);
    }
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070a4ac4; end: 1070a4cfb;  */

void FUN_1070a4ac4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ccde0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 3) {
      lVar1 = param_1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000100bc5a10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b2950;
      func_0x00010c15c240(PTR_PTR_1126b2950);
      _objc_retainAutoreleasedReturnValue();
      FUN_10708f988();
      puVar5 = puVar4;
      func_0x00010c2ac460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar1 = param_1;
      func_0x00010bf9fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_107091678();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c2ac460(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c252d60(param_1);
      FUN_107091650();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2ac460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bf366a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(lVar1);
      _objc_release(puVar5);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a4cfc; end: 1070a4efb;  */

void FUN_1070a4cfc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar3 = PTR_PTR_1126d4598;
  _objc_opt_class(PTR_PTR_1126d4598);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3300;
  if (uVar4 == 0) {
    _objc_retain(param_1);
    _objc_opt_class(puVar3);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar5 = uVar2;
    func_0x00010bf6eca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    _objc_retain(uVar4);
    uVar5 = uVar4;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1070a4efc; end: 1070a4f87;  */

void FUN_1070a4efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c067fc0(param_3);
  uVar1 = param_2;
  func_0x00010c23f880(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c25a8c0(uVar1);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070a4f88; end: 1070a4f9f;  */

undefined * FUN_1070a4f88(undefined8 param_1,ulong param_2)

{
  FUN_1070a3154();
  if (param_2 < 0x1c) {
    return (&PTR_PTR_110d870a8)[param_2];
  }
  return (undefined *)0x0;
}



/* Entry: 1070a4fa0; end: 1070a4fc7;  */

void FUN_1070a4fa0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1070a4fc8; end: 1070a4fd7;  */

void FUN_1070a4fc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf026f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_analyticsMessageId_11259e360);
  return;
}



/* Entry: 1070a4fd8; end: 1070a514b;  */

void FUN_1070a4fd8(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11098b768;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b768,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1070a514c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3fc9b9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_11098b7b8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b7b8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1070a52c0;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11098b808,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 1070a514c; end: 1070a52bf;  */

void FUN_1070a514c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11098b7b8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11098b7b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1070a52c0;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11098b808,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1070a52c0; end: 1070a5337;  */

void FUN_1070a52c0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11098b808,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1070a5338; end: 1070a54ab;  */

void FUN_1070a5338(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11098b858;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b858,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3fc9b9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_11098b8a8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b8a8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_11098b8f8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b8f8,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar2 = (undefined *)puVar5;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar5;
      param_4 = puVar6;
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3fc9b9;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1f8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3fc9b9;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b948,&uStack_218,param_4);
    puStack_200 = &uStack_218;
    func_0x00010007e5dc(&puStack_200);
    lVar8 = 0;
    do {
      if ((&cStack_1c9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 1070a54ac; end: 1070a561f;  */

void FUN_1070a54ac(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11098b8a8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b8a8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3fc9b9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_11098b8f8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b8f8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11098b948,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x00010007e5dc(&puStack_180);
    lVar8 = 0;
    do {
      if ((&cStack_149)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar6);
  puVar1 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1070a5620; end: 1070a5793;  */

void FUN_1070a5620(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11098b8f8;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11098b8f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar4;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3fc9b9;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f3fc9b9;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar2 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11098b948,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1070a5794; end: 1070a59c3;  */

void FUN_1070a5794(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3fc9b9;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11098b948,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1070a59c4; end: 1070a59cf; -[SCArroyoChatLoggingServices .cxx_destruct] */

void FUN_1070a59c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070a59d0; end: 1070a5a3f;  */

void FUN_1070a59d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain();
  func_0x00010bf37500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070a5af0(param_1,puVar1,param_2,param_3,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a5a40; end: 1070a5c1f;  */

void FUN_1070a5a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain();
  func_0x00010bf37500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070a5af0(param_1,puVar1,param_2,param_3,param_4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c23f5a0(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070a5af0(param_1,puVar1,0xffffffffffffffff,0xffffffffffffffff,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a5c20; end: 1070a5ddf;  */

void FUN_1070a5c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain();
  func_0x00010bf37940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070a5af0(param_1,puVar1,param_2,param_3,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a5de0; end: 1070a5e1f;  */

undefined ** FUN_1070a5de0(long param_1)

{
  if (param_1 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_11098ba08)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd32f8;
}



/* Entry: 1070a5e20; end: 1070a600b;  */

uint FUN_1070a5e20(double param_1,double param_2,double param_3,double param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lRam00000001136ca028 != -1) {
    func_0x00010002a2fc(0x1136ca028,&PTR___NSConcreteGlobalBlock_11098ba60);
  }
  lVar6 = lRam00000001136ca030;
  _objc_retain(lRam00000001136ca030);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar8 = 0;
  if (lVar5 != 0) {
    dVar11 = -param_2;
    dVar12 = dVar11;
    if (0.0 <= param_2) {
      dVar12 = param_2;
    }
    do {
      lVar9 = 0;
      do {
        fVar10 = SUB84(dVar11,0);
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010bfb2c80(*(undefined8 *)(lVar9 * 8));
        dVar11 = (double)fVar10;
        if (dVar12 <= dVar11) {
          bVar2 = true;
        }
        else {
          param_3 = ABS(dVar12 + dVar11) * 2.220446049250313e-16;
          param_4 = 2.2250738585072014e-308;
          if (param_3 <= 2.2250738585072014e-308) {
            param_3 = 2.2250738585072014e-308;
          }
          bVar2 = ABS(dVar11 - dVar12) < param_3;
        }
        if ((dVar11 < ABS(param_1)) && (bVar2)) {
LAB_1070a5fa0:
          uVar8 = 1;
          goto LAB_1070a5fa4;
        }
        if (dVar11 <= dVar12) {
          bVar2 = true;
        }
        else {
          param_3 = ABS(dVar12 + dVar11) * 2.220446049250313e-16;
          param_4 = 2.2250738585072014e-308;
          if (param_3 <= 2.2250738585072014e-308) {
            param_3 = 2.2250738585072014e-308;
          }
          bVar2 = ABS(dVar11 - dVar12) < param_3;
        }
        if ((ABS(param_1) < dVar11) && (bVar2)) goto LAB_1070a5fa0;
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    uVar8 = 0;
  }
LAB_1070a5fa4:
  _objc_release(lVar6);
  _objc_release(lVar6);
  uVar4 = (uint)lVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  bVar2 = true;
  if ((param_4 != 1.0) && (bVar2 = false, !NAN(param_4))) {
    bVar2 = param_4 == 0.5;
  }
  bVar3 = true;
  if ((!bVar2) && (bVar3 = false, !NAN(param_4))) {
    bVar3 = param_4 == 10.0;
  }
  if (bVar3) {
    return 0;
  }
  dVar12 = -param_3;
  if (0.0 <= param_3) {
    dVar12 = param_3;
  }
  if (50.0 <= dVar12) {
    uVar8 = 1;
  }
  else {
    dVar11 = ABS(dVar12 + 50.0) * 2.220446049250313e-16;
    if (dVar11 <= 2.2250738585072014e-308) {
      dVar11 = 2.2250738585072014e-308;
    }
    uVar8 = (uint)(ABS(dVar12 + -50.0) < dVar11);
  }
  FUN_1070a5e20();
  return uVar8 & uVar4;
}



/* Entry: 1070a600c; end: 1070a6123;  */

uint FUN_1070a600c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  bVar1 = true;
  if ((param_4 != 1.0) && (bVar1 = false, !NAN(param_4))) {
    bVar1 = param_4 == 0.5;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(param_4))) {
    bVar2 = param_4 == 10.0;
  }
  if (bVar2) {
    return 0;
  }
  dVar4 = -param_3;
  if (0.0 <= param_3) {
    dVar4 = param_3;
  }
  if (50.0 <= dVar4) {
    uVar3 = 1;
  }
  else {
    dVar5 = ABS(dVar4 + 50.0) * 2.220446049250313e-16;
    if (dVar5 <= 2.2250738585072014e-308) {
      dVar5 = 2.2250738585072014e-308;
    }
    uVar3 = (uint)(ABS(dVar4 + -50.0) < dVar5);
  }
  FUN_1070a5e20();
  return uVar3 & param_5;
}



/* Entry: 1070a6124; end: 1070a628f;  */

void FUN_1070a6124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 auStack_150 [35];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c0daae0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  lVar6 = 0;
  auStack_150[1] = 0x70;
  auStack_150[0] = 0x300;
  auStack_150[3] = 0x70;
  auStack_150[2] = 0x590;
  auStack_150[5] = 0x100;
  auStack_150[4] = 0x600;
  auStack_150[7] = 0x30;
  auStack_150[6] = 0x750;
  auStack_150[9] = 0x60;
  auStack_150[8] = 0x8a0;
  auStack_150[0xb] = 0x500;
  auStack_150[10] = 0x900;
  auStack_150[0xd] = 0x200;
  auStack_150[0xc] = 0xe00;
  auStack_150[0xf] = 0xa0;
  auStack_150[0xe] = 0x1000;
  auStack_150[0x11] = 0x80;
  auStack_150[0x10] = 0x1780;
  auStack_150[0x13] = 0x20;
  auStack_150[0x12] = 0x19e0;
  auStack_150[0x15] = 0x50;
  auStack_150[0x14] = 0x1ab0;
  auStack_150[0x17] = 0x40;
  auStack_150[0x16] = 0x1dc0;
  auStack_150[0x19] = 0x60;
  auStack_150[0x18] = 0x1ea0;
  auStack_150[0x1b] = 0x30;
  auStack_150[0x1a] = 0x20d0;
  auStack_150[0x1d] = 0x20;
  auStack_150[0x1c] = 0xaa60;
  auStack_150[0x1f] = 0x20;
  auStack_150[0x1e] = 0xa9e0;
  auStack_150[0x21] = 0x10;
  auStack_150[0x20] = 0xfe20;
  do {
    func_0x00010bef7600(puVar2,param_2,*(undefined8 *)((long)auStack_150 + lVar6),
                        *(undefined8 *)((long)auStack_150 + lVar6 + 8));
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x110);
  puVar1 = puVar2;
  func_0x00010bf51e00();
  uVar3 = puRam00000001136ca038;
  puRam00000001136ca038 = puVar1;
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1070a6290; end: 1070a62f3; -[SCNMessagingMessage bloopsStoryShare] */

void FUN_1070a6290(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070a62f4; end: 1070a638f; -[SCMessagingBloopsStoryShare compositeStoryId] */

void FUN_1070a62f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd58a0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c258f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x000108f52130(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070a6390; end: 1070a645b; -[SCMessagingBloopsStoryShare snapId] */

void FUN_1070a6390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc360();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c258f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar3,param_2,uVar2,4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070a645c; end: 1070a64d3; -[SCMessagingBloopsStoryShare _storyCorpus] */

undefined8 FUN_1070a645c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x000108f521b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52680();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1070a64d4; end: 1070a64ef; -[SCMessagingBloopsStoryShare isDiscoverStory] */

bool FUN_1070a64d4(long param_1)

{
  func_0x00010bec47a0();
  return param_1 == 0x10;
}



/* Entry: 1070a64f0; end: 1070a650f; -[SCMessagingBloopsStoryShare isSpotlightStory] */

bool FUN_1070a64f0(ulong param_1)

{
  func_0x00010bec47a0();
  return (param_1 & 0xfffffffffffffffe) == 0x22;
}



/* Entry: 1070a6510; end: 1070a654f;  */

undefined8 FUN_1070a6510(ulong param_1)

{
  if (param_1 < 0x28) {
    return *(undefined8 *)(&UNK_10de1f7c0 + param_1 * 8);
  }
  return 0;
}



/* Entry: 1070a6550; end: 1070a6a2b;  */

void FUN_1070a6550(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d46a8;
  _objc_retain();
  _objc_opt_new(puVar2);
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1a4a80(puVar2);
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c17b1c0(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070a6a2c; end: 1070a6d87;  */

void FUN_1070a6a2c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1a4a80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a6d88; end: 1070a6ec3;  */

void FUN_1070a6d88(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x0001070a6810(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e240(param_1);
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c067fc0(uVar3);
    func_0x00010c16a960(param_1);
  }
  uVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  func_0x00010c206580(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a6ec4; end: 1070a70d7;  */

void FUN_1070a6ec4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x0001070a6810(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e240(param_1);
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c1b9f20(param_1);
  }
  uVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010c067fc0(uVar5);
    func_0x00010c1b9f80(param_1);
  }
  uVar6 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  if (uVar5 != 0) {
    func_0x00010bf885a0(uVar6);
    func_0x00010c1a3cc0(param_1);
  }
  uVar7 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  if (uVar6 != 0) {
    func_0x00010c0b4ca0(uVar7);
    func_0x00010c19ff80(param_1);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a70d8; end: 1070a7293;  */

void FUN_1070a70d8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c067fc0(uVar2);
    FUN_1070a6510();
    func_0x00010c206c40(param_1);
  }
  uVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    func_0x00010c067fc0(uVar4);
    func_0x00010c1c5440(param_1);
  }
  uVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if (uVar4 != 0) {
    func_0x00010bf885a0(uVar5);
    func_0x00010c18ffa0(param_1);
  }
  uVar5 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  func_0x00010c20f8a0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a7294; end: 1070a73b3;  */

void FUN_1070a7294(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    func_0x00010c17e200(param_1);
  }
  uVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    func_0x00010c067fc0(uVar4);
    func_0x00010c199e20(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a73b4; end: 1070a75bf;  */

void FUN_1070a73b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x0001070a6ccc(param_1);
  func_0x0001070a6ba4(param_1,param_2);
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c2827c0(uVar2);
    func_0x0001070a6530();
    func_0x00010c182d40(param_1);
  }
  uVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c08fa60();
  if (uVar4 != 0) {
    func_0x00010c1fecc0(param_1);
  }
  uVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if (uVar4 != 0) {
    func_0x00010c2827c0(uVar5);
    func_0x0001070a6530();
    func_0x00010c1feec0(param_1);
  }
  uVar6 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  if (uVar5 != 0) {
    func_0x00010c067fc0(uVar6);
    func_0x00010c17e2c0(param_1);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a75c0; end: 1070a7633;  */

void FUN_1070a75c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x0001070a6ccc(param_1);
  uVar1 = param_2;
  func_0x0001070a6810(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c17e240(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070a7634; end: 1070a7753; +[SCCognacBlizzardLogger logGameAlertOpenEventWithParamDict:userLogger:] */

void FUN_1070a7634(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d46c8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c21acc0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    if (lVar3 != -1) {
      func_0x00010c207200(puVar1);
    }
  }
  func_0x0001070a6ba4(puVar1,param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a7754; end: 1070a7843; +[SCCognacBlizzardLogger logGameAlertDismissEventWithParamDict:userLogger:] */

void FUN_1070a7754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d46d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c21acc0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c225480(puVar1);
  _objc_release(uVar2);
  func_0x0001070a6ba4(puVar1,param_3);
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a7844; end: 1070a78f3; +[SCCognacBlizzardLogger logGameTooltipDisplayEventWithParamDict:userLogger:] */

void FUN_1070a7844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d46d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e9d658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c067fc0(uVar2);
  func_0x00010c217280(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a78f4; end: 1070a7a23; +[SCCognacBlizzardLogger logGameDrawerOpenEventWithParamDict:userLogger:] */

void FUN_1070a78f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d46e0;
  _objc_opt_new(PTR_PTR_1126d46e0);
  FUN_1070a6a2c();
  func_0x0001070a6ccc(puVar1);
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    func_0x00010c1af700(puVar1);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e200(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010c0b2e60(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a7a24; end: 1070a7bbf; +[SCCognacBlizzardLogger logGameDrawerCloseEventWithParamDict:userLogger:] */

void FUN_1070a7a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d46e8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  FUN_1070a6a2c();
  lVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(lVar2);
    func_0x00010c1f7a60(puVar1);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    func_0x00010c1af6e0(puVar1);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar2);
    func_0x00010c18ffc0(param_1,puVar1);
  }
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_5);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070a7bc0; end: 1070a7e07; +[SCCognacBlizzardLogger logGameDrawerTileTapEventWithParamDict:userLogger:] */

void FUN_1070a7bc0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d46f0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  FUN_1070a6a2c();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar2);
    func_0x00010c214720(puVar1);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    func_0x00010c1b2ca0(puVar1);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    func_0x00010c1b5600(puVar1);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar2);
    func_0x00010c1e7280(puVar1);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  func_0x00010c17e200(puVar1);
  _objc_release(uVar2);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a7e08; end: 1070a7e83; +[SCCognacBlizzardLogger logGameChatDockClickEventWithParamDict:userLogger:] */

void FUN_1070a7e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d46f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6ad0();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a7e84; end: 1070a7f67; +[SCCognacBlizzardLogger logGameChatDockHideEventWithParamDict:userLogger:] */

void FUN_1070a7e84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4700;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x0001070a6ad0();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(lVar2);
    func_0x00010c17e1c0(puVar1);
  }
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a7f68; end: 1070a80fb; +[SCCognacBlizzardLogger logGameOpenEventWithParamDict:userLogger:] */

void FUN_1070a7f68(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d4708;
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c2827c0(uVar3);
    func_0x0001070a6530();
    func_0x00010c182d40(puVar2);
    func_0x00010c2827c0(uVar3);
    func_0x0001070a6510();
    func_0x00010c206c40(puVar2);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c211b60(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c168ee0(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c17b1a0(puVar2);
  _objc_release(uVar3);
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a80fc; end: 1070a840b; +[SCCognacBlizzardLogger logGameReadyToPlayEventWithParamDict:userLogger:] */

void FUN_1070a80fc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d4710;
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010bf885a0(uVar3);
    func_0x00010c1be900(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010c2827c0(uVar5);
    func_0x0001070a6530();
    func_0x00010c182d40(puVar2);
    func_0x00010c2827c0(uVar5);
    func_0x0001070a6510();
    func_0x00010c206c40(puVar2);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  if (uVar5 != 0) {
    func_0x00010bf885a0(uVar6);
    func_0x00010c1ec140(puVar2);
  }
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  if (uVar6 != 0) {
    func_0x00010bf885a0(uVar7);
    func_0x00010c225300(puVar2);
  }
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  if (uVar7 != 0) {
    func_0x00010bf885a0(uVar8);
    func_0x00010c16a800(puVar2);
  }
  uVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  if (uVar8 != 0) {
    func_0x00010bf885a0(uVar9);
    func_0x00010c18c6e0(puVar2);
  }
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a840c; end: 1070a84e7; +[SCCognacBlizzardLogger logCustomDebugEventWithParamDict:userLogger:] */

void FUN_1070a840c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d4718;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c18c680(puVar2);
  }
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1070a84e8; end: 1070a88e3; +[SCCognacBlizzardLogger logGamePerfOnStartEventWithParamDict:userLogger:] */

void FUN_1070a84e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d4720;
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c067fc0(uVar3);
    func_0x00010c180de0(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010c2827c0(uVar5);
    FUN_1070a6510();
    func_0x00010c206c40(puVar2);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  if (uVar5 != 0) {
    func_0x00010bf885a0(uVar6);
    func_0x00010c1be900(puVar2);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  func_0x00010c1e07c0(puVar2);
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  if (uVar6 != 0) {
    func_0x00010bf885a0(uVar7);
    func_0x00010c1ec140(puVar2);
  }
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  if (uVar7 != 0) {
    func_0x00010bf885a0(uVar8);
    func_0x00010c225300(puVar2);
  }
  uVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  if (uVar8 != 0) {
    func_0x00010bf885a0(uVar9);
    func_0x00010c16a800(puVar2);
  }
  uVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar11 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar4);
  uVar9 = uVar10;
  if ((uVar11 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar10);
  if (uVar9 != 0) {
    func_0x00010bf885a0(uVar10);
    func_0x00010c18c6e0(puVar2);
  }
  uVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar4);
  uVar10 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar11);
  if (uVar10 != 0) {
    func_0x00010bf885a0(uVar11);
    func_0x00010c1751e0(puVar2);
  }
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a88e4; end: 1070a895f; +[SCCognacBlizzardLogger logInGameCloseAttemptEventWithParamDict:userLogger:] */

void FUN_1070a88e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4728;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6ba4();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a8960; end: 1070a8d87; +[SCCognacBlizzardLogger logGamePerfOnCloseEventWithParamDict:userLogger:] */

void FUN_1070a8960(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d4730;
  _objc_retain(param_5);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  func_0x00010c17e2e0(param_1,puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1c34c0(puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c187800(puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c2827c0(uVar3);
    FUN_1070a6510();
    func_0x00010c206c40(puVar2);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010c067fc0(uVar5);
    func_0x00010c198340(puVar2);
  }
  uVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  if (uVar5 != 0) {
    func_0x00010bf885a0(uVar6);
    func_0x00010c1a2680(puVar2);
  }
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  if (uVar6 != 0) {
    func_0x00010bf885a0(uVar7);
    func_0x00010c227360(puVar2);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  func_0x00010c2827c0(uVar7);
  _objc_release(uVar7);
  func_0x00010c1bee60(puVar2);
  uVar7 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  func_0x00010c1e07c0(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0772e0();
  func_0x00010c1c1080(puVar2);
  _objc_release(puVar4);
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_5);
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070a8d88; end: 1070a901b; +[SCCognacBlizzardLogger logInGameCloseSuccessEventWithParamDict:userLogger:] */

void FUN_1070a8d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d4738;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  func_0x00010c17e2e0(param_1,puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1e62a0(param_1,puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1c34c0(puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c187800(puVar2);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c2827c0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1bee60(puVar2);
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1070a901c; end: 1070a9097; +[SCCognacBlizzardLogger logInGameChatSentEventWithParamDict:userLogger:] */

void FUN_1070a901c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4740;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6ba4();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a9098; end: 1070a91f7; +[SCCognacBlizzardLogger logInGameInviteSentEventWithParamDict:userLogger:] */

void FUN_1070a9098(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d4748;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1aed40(puVar2);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c067fc0(uVar3);
    func_0x00010c1f9160(puVar2);
  }
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1070a91f8; end: 1070a9273; +[SCCognacBlizzardLogger logInGameVoicePartyStartEventWithParamDict:userLogger:] */

void FUN_1070a91f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4750;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6ba4();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a9274; end: 1070a9367; +[SCCognacBlizzardLogger logInGameVoicePartyEndEventWithParamDict:userLogger:] */

void FUN_1070a9274(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d4758;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x0001070a6ba4();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  func_0x00010c224080(param_1,puVar2);
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1070a9368; end: 1070a941f; +[SCCognacBlizzardLogger logInGameButtonTapEventWithParamDict:userLogger:] */

void FUN_1070a9368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4760;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6ba4();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c067fc0(uVar2);
  func_0x00010c174ae0(puVar1);
  _objc_release(uVar2);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a9420; end: 1070a95af; +[SCCognacBlizzardLogger logInGameSettingsSelectionEventWithParamDict:userLogger:] */

void FUN_1070a9420(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4768;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x0001070a6ba4();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c1fb7a0(puVar1);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    func_0x00010bf1f3c0(uVar3);
    func_0x00010c1687e0(puVar1);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010bf1f3c0(uVar5);
    func_0x00010c1b1ac0(puVar1);
  }
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a95b0; end: 1070a964b; +[SCCognacBlizzardLogger logInGamePlaySoloEventWithParamDict:userLogger:] */

void FUN_1070a95b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4770;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x0001070a6810(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c17e240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a964c; end: 1070a96e7; +[SCCognacBlizzardLogger logInGamePlayWithFriendsPromptEventWithParamDict:userLogger:] */

void FUN_1070a964c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4778;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x0001070a6810(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c17e240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a96e8; end: 1070a97f3; +[SCCognacBlizzardLogger logInGamePlayWithFriendsSelectedEventWithParamDict:userLogger:] */

void FUN_1070a96e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126d4780;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x0001070a6810(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e240(puVar1);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  func_0x00010c0b4fe0(uVar2);
  _objc_release(uVar2);
  func_0x00010c1fb0c0(puVar1);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a97f4; end: 1070a98d3; +[SCCognacBlizzardLogger logAdInitializeEventWithParamDict:userLogger:] */

void FUN_1070a97f4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126d4788;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x0001070a6c38();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c203340(puVar2);
  _objc_release(uVar1);
  func_0x0001070a6ccc(puVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1070a98d4; end: 1070a994f; +[SCCognacBlizzardLogger logAdPlaybackEventWithParamDict:userLogger:] */

void FUN_1070a98d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6c38();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a9950; end: 1070a99c3; +[SCCognacBlizzardLogger logAdViewEventWithParamDict:userLogger:] */

void FUN_1070a9950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4798;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6c38();
  _objc_release(param_3);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a99c4; end: 1070a9a3f; +[SCCognacBlizzardLogger logAdConsumeEventWithParamDict:userLogger:] */

void FUN_1070a99c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d47a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x0001070a6c38();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070a9a40; end: 1070a9abb; +[SCCognacBlizzardLogger logSnippetSendAttemptEventWithParamDict:userLogger:] */

void FUN_1070a9a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d47a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  FUN_1070a6d88();
  _objc_release(param_3);
  func_0x0001070a6ccc(puVar1);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


