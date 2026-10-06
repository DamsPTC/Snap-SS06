/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057d94c4; end: 1057d9593; -[SCChatDisplayReadyLogger onConversationResumedWithConversationId:chatIdentifier:isGroup:] */

void FUN_1057d94c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057d9594;
  puStack_70 = &UNK_1108b0960;
  lStack_68 = param_2;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057d9594; end: 1057d95ab;  */

void FUN_1057d9594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__onConversationResumedWithConver_112577bb0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 1057d95ac; end: 1057d9643; -[SCChatDisplayReadyLogger onConversationExitedWithConversationId:] */

void FUN_1057d95ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057d9644;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1057d9644; end: 1057d9653;  */

void FUN_1057d9644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be687f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__onConversationExitedWithConvers_112577b98,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d9654; end: 1057d96e3; -[SCChatDisplayReadyLogger recordMessagesBelowTheFold:] */

void FUN_1057d9654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057d96e4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057d96e4; end: 1057d96ef;  */

void FUN_1057d96e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordMessagesBelowTheFold__11257f7a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d96f0; end: 1057d977f; -[SCChatDisplayReadyLogger recordConversationMetadata:] */

void FUN_1057d96f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057d9780;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057d9780; end: 1057d978b;  */

void FUN_1057d9780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordConversationMetadata__11257f728,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d978c; end: 1057d97e3; -[SCChatDisplayReadyLogger recordNumberOfMessagesFetched:] */

void FUN_1057d978c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1057d97e4;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 1057d97e4; end: 1057d97ef;  */

void FUN_1057d97e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be878d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordNumberOfMessagesFetched__11257f7d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d97f0; end: 1057d9867; -[SCChatDisplayReadyLogger _onConversationEnteredWithConversationId:chatIdentifier:isGroup:] */

void FUN_1057d97f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x60) = param_5;
  return;
}



/* Entry: 1057d9868; end: 1057d986f; -[SCChatDisplayReadyLogger _setIsViewControllerCached:] */

void FUN_1057d9868(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1057d9870; end: 1057d98cf; -[SCChatDisplayReadyLogger _onConversationResumedWithConversationId:chatIdentifier:isGroup:stepTime:] */

void FUN_1057d9870(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x58);
    func_0x00010c0720c0(uVar2,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      func_0x00010be50b60(param_1,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057d98d0; end: 1057d9913; -[SCChatDisplayReadyLogger _onConversationExitedWithConversationId:stepTime:] */

void FUN_1057d98d0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x58);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    func_0x00010be50b60(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 1057d9914; end: 1057d9b03; -[SCChatDisplayReadyLogger _subscribeToConversationUpdates] */

void FUN_1057d9914(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(byte *)(param_1 + 0xa9) & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf509e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1057d9b04;
    puStack_68 = &UNK_11085bab8;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf50840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1057d9b04; end: 1057d9be3;  */

void FUN_1057d9b04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68860();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057d9be4; end: 1057d9c27; -[SCChatDisplayReadyLogger _onConversationUpdated:] */

void FUN_1057d9be4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d9c28; end: 1057d9c6b; -[SCChatDisplayReadyLogger _onConversationRemoved:] */

void FUN_1057d9c28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d9c6c; end: 1057d9d6b; -[SCChatDisplayReadyLogger _subscribeToCurrentPageObservable:] */

void FUN_1057d9c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057d9d6c; end: 1057d9e27;  */

void FUN_1057d9d6c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c02c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1057d9e28; end: 1057d9e2b;  */

void FUN_1057d9e28(void)

{
  return;
}



/* Entry: 1057d9e2c; end: 1057d9e87;  */

void FUN_1057d9e2c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69020(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057d9e88; end: 1057d9e8f;  */

void FUN_1057d9e88(void)

{
  return;
}



/* Entry: 1057d9e90; end: 1057d9f0f; -[SCChatDisplayReadyLogger _onEndPageViewWithNextPage:] */

void FUN_1057d9e90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5a858);
  if ((((uVar1 & 1) != 0) ||
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e1f6b8),
      (uVar1 & 1) != 0)) ||
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5a878),
     (int)uVar1 != 0)) {
    _CACurrentMediaTime();
    func_0x00010be50b60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d9f10; end: 1057d9f97; -[SCChatDisplayReadyLogger _beginChatDisplayReadyLoggingFlowWithStartTime:chatIdentifier:source:] */

void FUN_1057d9f10(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_2 + 0x68);
  if (((uVar1 != param_4 && param_4 != 0) && uVar1 != 0) &&
     (func_0x00010c071ae0(uVar1,param_3,param_4), (uVar1 & 1) == 0)) {
    func_0x00010be50b60(param_1,param_2);
  }
  func_0x00010bec07a0(param_1,param_2,param_3,param_4,0,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057d9f98; end: 1057da077; -[SCChatDisplayReadyLogger _startNewFlowWithChatIdentifier:conversationId:source:startTime:] */

void FUN_1057d9f98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = param_4;
  _objc_release(uVar1);
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(long *)(param_2 + 0x58) = param_5;
    _objc_release(uVar1);
  }
  *(undefined8 *)(param_2 + 0x70) = param_6;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x88),param_3,puVar3,
                      &PTR____CFConstantStringClassReference_110e03958);
  _objc_release(puVar3);
  func_0x00010bec75e0(param_2,param_3,*(undefined8 *)(param_2 + 0x10));
  func_0x00010bec7560(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057da078; end: 1057da1f7; -[SCChatDisplayReadyLogger _recordChatDisplayReadyStep:stepTime:] */

void FUN_1057da078(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  if ((*(char *)(param_2 + 0xa8) == '\x01') &&
     ((0xc < param_4 || ((1L << (param_4 & 0x3f) & 0x1605U) == 0)))) {
    return;
  }
  uVar1 = param_4;
  FUN_1057d8e10(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 < 0xd) {
    uVar2 = *(undefined8 *)(&UNK_10ddbe798 + param_4 * 8);
  }
  else {
    uVar2 = 3;
  }
  FUN_1057d8e10(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x88);
  func_0x00010c0e00e0(lVar3,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    if ((0xc < param_4) || ((1L << (param_4 & 0x3f) & 0x1eafU) == 0)) {
      func_0x00010be09ec0(param_2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x88),param_3,puVar4,uVar2);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x88),param_3,puVar4,uVar1);
    _objc_release(puVar4);
    if (param_4 == 0xb) {
      *(undefined1 *)(param_2 + 0xa8) = 1;
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057da1f8; end: 1057da373; -[SCChatDisplayReadyLogger _endTimestampOfMostRecentSerialStep] */

double FUN_1057da1f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar4 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    dVar10 = 0.0;
  }
  else {
    lVar7 = *plStack_130;
    dVar10 = 0.0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lStack_138 + lVar8 * 8);
        uVar2 = uVar6;
        func_0x0001057d8e4c();
        if (0xc < uVar2 || (1L << (uVar2 & 0x3f) & 0x1605U) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          func_0x00010c0e00e0(uVar3,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          if (dVar10 < dVar9) {
            func_0x00010bf885a0(uVar3);
            dVar10 = dVar9;
          }
          _objc_release(uVar3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      puVar4 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return dVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar3 = *(undefined8 *)(lVar5 + 0x90);
  *(undefined8 **)(lVar5 + 0x90) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return dVar9;
}



/* Entry: 1057da374; end: 1057da3a3; -[SCChatDisplayReadyLogger _recordMessagesBelowTheFold:] */

void FUN_1057da374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057da3a4; end: 1057da3d3; -[SCChatDisplayReadyLogger _recordConversationMetadata:] */

void FUN_1057da3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057da3d4; end: 1057da3db; -[SCChatDisplayReadyLogger _recordNumberOfMessagesFetched:] */

void FUN_1057da3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1057da3dc; end: 1057da3e3; -[SCChatDisplayReadyLogger _completeFlowWithFailureReason:endTime:] */

void FUN_1057da3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be50b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logBlizzardMetricWithEndTimeIfN_112571c78);
  return;
}



/* Entry: 1057da3e4; end: 1057da41b; -[SCChatDisplayReadyLogger _logBlizzardMetricWithEndTimeIfNecessary:] */

void FUN_1057da3e4(long param_1)

{
  if ((*(long *)(param_1 + 0x68) != 0) || (*(long *)(param_1 + 0x58) != 0)) {
    func_0x00010be50b40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 1057da41c; end: 1057da943; -[SCChatDisplayReadyLogger _logBlizzardMetricWithEndTime:] */

void FUN_1057da41c(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  puVar2 = PTR_PTR_1126be818;
  _objc_opt_new(PTR_PTR_1126be818);
  func_0x00010c17b260();
  func_0x00010c1afb60(puVar2,param_3,*(undefined1 *)(param_2 + 0x48));
  func_0x00010c183b80(puVar2,param_3,*(undefined8 *)(param_2 + 0x58));
  func_0x00010c1cfd80(puVar2,param_3,*(undefined8 *)(param_2 + 0x80));
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  FUN_1057d8d54(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c71a0(puVar2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c0f4a40(uVar3);
  func_0x00010c1d92c0(puVar2,param_3,uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bfde640(uVar3);
  func_0x00010c1a73e0(puVar2,param_3,uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar14 = param_1;
  if (param_1 <= 0.0) {
    dVar14 = 0.0;
  }
  dVar14 = dVar14 * 1000.0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)dVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211de0(puVar2,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar15 = dVar14;
  if (dVar14 <= 0.0) {
    dVar15 = 0.0;
  }
  dVar15 = dVar15 * 1000.0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)dVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b280(puVar2,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar16 = dVar15;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e039b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar16 = dVar16 - dVar15;
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  dVar16 = dVar16 * 1000.0;
  lVar8 = (long)dVar16;
  func_0x00010c183b60(puVar2,param_3,lVar8);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e039d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar15 = dVar16;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e039f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar15 = dVar15 - dVar16;
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  dVar15 = dVar15 * 1000.0;
  lVar9 = (long)dVar15;
  func_0x00010c183b00(puVar2,param_3,lVar9);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03a18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar16 = dVar15;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar16 = dVar16 - dVar15;
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  dVar16 = dVar16 * 1000.0;
  lVar10 = (long)dVar16;
  func_0x00010c2228c0(puVar2,param_3,lVar10);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar15 = dVar16 - param_1;
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  dVar15 = dVar15 * 1000.0;
  lVar11 = (long)dVar15;
  func_0x00010c1acc40(puVar2,param_3,lVar11);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar17 = dVar15 - param_1;
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
  dVar17 = dVar17 * 1000.0;
  lVar12 = (long)dVar17;
  func_0x00010c1b6e80(puVar2,param_3,lVar12);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110e03a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  dVar17 = dVar17 - param_1;
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x78);
  func_0x00010bfde640();
  if (iVar1 != 0) {
    func_0x00010c224680(puVar2,param_3,(long)(dVar17 * 1000.0));
  }
  dVar18 = dVar15;
  if (dVar15 <= dVar16) {
    dVar18 = dVar16;
  }
  dVar18 = dVar18 - param_1;
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  lVar13 = (long)(dVar18 * 1000.0);
  func_0x00010c218500(puVar2,param_3,lVar13);
  if (lVar13 < 10000) {
    if ((*(long *)(param_2 + 0x50) != 0) || ((uVar3 = 5, dVar16 != 0.0 && (dVar15 != 0.0))))
    goto LAB_1057da850;
  }
  else {
    uVar3 = 6;
  }
  *(undefined8 *)(param_2 + 0x50) = uVar3;
LAB_1057da850:
  lVar6 = *(long *)(param_2 + 0x78);
  func_0x00010c0f4a40();
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_2 + 0x58);
    func_0x00010c08fa60();
    if ((lVar6 != 0) && ((*(byte *)(param_2 + 0xa9) & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0xa0);
      func_0x00010bf4b900(uVar3,param_3,*(undefined8 *)(param_2 + 0x58));
      uVar7 = *(ulong *)(param_2 + 0x98);
      func_0x00010bf4b900(uVar7,param_3,*(undefined8 *)(param_2 + 0x58));
      if (((int)uVar3 != 0) || ((uVar7 & 1) == 0)) {
        *(undefined8 *)(param_2 + 0x50) = 7;
      }
    }
  }
  dVar14 = dVar14 - param_1;
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  FUN_1057d8d10(uVar3);
  func_0x00010c19a060(puVar2,param_3,uVar3);
  func_0x00010be54460(param_2,param_3,(long)(dVar14 * 1000.0),lVar8,lVar9,lVar10,lVar11,lVar12,
                      (long)(dVar17 * 1000.0),lVar13);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1057da944; end: 1057daba3; -[SCChatDisplayReadyLogger _logGrapheneMetricsWithChatEntryLatency:conversationFetchLatency:conversationDataFetchLatency:viewModelGenerationLatency:initialRenderLatency:keyboardReadyLatency:wallpaperLoadLatency:totalLatency:] */

void FUN_1057da944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfde640(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x0001057d8d30(uVar4);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = *(long *)(param_1 + 0x50) == 0;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x000100c6f294(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dc424(*(undefined8 *)(param_1 + 0xb8),uVar3,*(undefined1 *)(param_1 + 0x48),
                *(undefined1 *)(param_1 + 0x60),uVar4,uVar5,param_10);
  FUN_1057db030(*(undefined8 *)(param_1 + 0xb0),uVar3,*(undefined1 *)(param_1 + 0x48),
                *(undefined1 *)(param_1 + 0x60),uVar4,uVar5,1);
  FUN_1057dc6dc(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,param_3)
  ;
  FUN_1057db2e8(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,1);
  bVar1 = *(long *)(param_1 + 0x50) - 5U < 0xfffffffffffffffd;
  FUN_1057dc8fc(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x60),uVar5,bVar1,param_4)
  ;
  FUN_1057db508(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar1,1);
  FUN_1057dcb1c(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,param_5)
  ;
  FUN_1057db728(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,1);
  FUN_1057dcd3c(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,param_6)
  ;
  FUN_1057db948(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,1);
  FUN_1057dcf5c(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,param_7)
  ;
  FUN_1057dbb68(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,1);
  FUN_1057dd17c(*(undefined8 *)(param_1 + 0xb8),uVar5,bVar2,param_8);
  FUN_1057dbd88(*(undefined8 *)(param_1 + 0xb0),uVar5,bVar2,1);
  FUN_1057dd364(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,param_9)
  ;
  FUN_1057dbf70(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,1);
  FUN_1057dc190(*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0x60),uVar5,bVar2,
                *(undefined8 *)(param_1 + 0x80));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1057daba4; end: 1057dac6f; -[SCChatDisplayReadyLogger _reset] */

/* WARNING: Possible PIC construction at 0x0001057dac48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057dac4c) */

void FUN_1057daba4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar2;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1057dac70; end: 1057dad93; -[SCChatDisplayReadyLogger .cxx_destruct] */

void FUN_1057dac70(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1057dad94; end: 1057daf53; -[SCChatDisplayReadyLoggingServiceProvider _logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057dad94(long param_1,undefined8 param_2)

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
  undefined *puVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126be828;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112729de8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5f7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112729dec;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112729df0;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112729df4;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112729df8;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126be830;
  _objc_opt_new(PTR_PTR_1126be830);
  puVar13 = PTR_PTR_1126be838;
  _objc_opt_new();
  func_0x00010c007100(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar11,puVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057daf54; end: 1057dafbb; -[SCChatDisplayReadyLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057daf54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729df0);
  _objc_destroyWeak(param_1 + _DAT_112729dec);
  _objc_destroyWeak(param_1 + _DAT_112729df8);
  _objc_destroyWeak(param_1 + _DAT_112729de8);
  _objc_destroyWeak(param_1 + _DAT_112729df4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729dfc);
  return;
}



/* Entry: 1057dafbc; end: 1057db02f; -[SCGrapheneChatDisplayReadyCountersMetric2 init] */

undefined1 * FUN_1057dafbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057db030; end: 1057db2e7;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dbb40) */
/* WARNING: Removing unreachable block (ram,0x0001057db700) */
/* WARNING: Removing unreachable block (ram,0x0001057db2b8) */
/* WARNING: Removing unreachable block (ram,0x0001057db4e0) */
/* WARNING: Removing unreachable block (ram,0x0001057db920) */
/* WARNING: Removing unreachable block (ram,0x0001057dbd60) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057db030(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *unaff_x26;
  undefined8 *puStack_710;
  undefined *puStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 *puStack_6c8;
  undefined8 auStack_6c0 [3];
  undefined1 auStack_6a8 [24];
  undefined8 auStack_690 [2];
  char cStack_679;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 auStack_600 [3];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [3];
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [3];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [3];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar3 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar11 = param_3;
  puVar6 = param_4;
  puVar5 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    unaff_x26 = (undefined8 *)&UNK_10f2fb6ca;
    puVar2 = (undefined8 *)&UNK_10f2fb6c5;
    if ((int)param_2 == 0) {
      puVar2 = unaff_x26;
    }
    func_0x00010002b838(auStack_e0,puVar2);
    puVar2 = (undefined8 *)&UNK_10f2fb6c5;
    if ((int)param_3 == 0) {
      puVar2 = unaff_x26;
    }
    func_0x00010002b838(auStack_c8,puVar2);
    param_3 = auStack_e0;
    puVar2 = (undefined8 *)&UNK_10f2fb6c5;
    if ((int)param_4 == 0) {
      puVar2 = unaff_x26;
    }
    func_0x00010002b838(auStack_b0,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      param_4 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_6);
      param_4 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_80,param_4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
    puVar2 = (undefined8 *)&UNK_1108b3410;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    lVar19 = 0;
    param_2 = auStack_e0;
    puVar11 = puVar3;
    puVar6 = param_7;
    do {
      if ((&cStack_69)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x78);
  }
  _objc_release(param_6);
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puStack_138 = auStack_e0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_138);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar13 = &uStack_1c0;
  pcStack_108 = FUN_1057db2e8;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar7 = puVar11;
  puVar10 = puVar6;
  puVar8 = puVar5;
  puStack_150 = unaff_x26;
  puStack_148 = param_3;
  puStack_140 = param_4;
  puStack_130 = param_2;
  puStack_128 = puVar3;
  puStack_120 = param_6;
  puStack_118 = param_5;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  if (puVar4 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar4[1];
    param_3 = (undefined8 *)&UNK_10f2fb6ca;
    unaff_x26 = (undefined8 *)&UNK_10f2fb6c5;
    puVar3 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar3 = param_3;
    }
    func_0x00010002b838(auStack_1a0,puVar3);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_188,puVar2);
    param_4 = auStack_1a0;
    puVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_170,puVar2);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    puVar9 = (undefined8 *)&UNK_1108b3460;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar19 = 0;
    puVar7 = puVar13;
    puVar10 = puVar5;
    do {
      if ((&cStack_159)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar2 = &uStack_1c0;
    } while (lVar19 != -0x48);
  }
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_1e8 = auStack_1a0;
  do {
    puVar2 = puVar2 + -3;
  } while (puVar2 != puStack_1e8);
  _objc_release(puVar11);
  puVar4 = puVar5;
  __Unwind_Resume();
  puVar14 = &uStack_280;
  pcStack_1c8 = FUN_1057db508;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar13 = puVar7;
  puVar17 = puVar10;
  puVar18 = puVar8;
  puStack_210 = unaff_x26;
  puStack_208 = param_3;
  puStack_200 = param_4;
  puStack_1f8 = puVar6;
  puStack_1f0 = puVar2;
  puStack_1e0 = puVar5;
  puStack_1d8 = puVar11;
  ppuStack_1d0 = &puStack_110;
  _objc_retain(puVar7);
  if (puVar4 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar4[1];
    param_3 = (undefined8 *)&UNK_10f2fb6ca;
    unaff_x26 = (undefined8 *)&UNK_10f2fb6c5;
    puVar2 = unaff_x26;
    if ((int)puVar9 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_260,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_248,puVar2);
    param_4 = auStack_260;
    puVar2 = unaff_x26;
    if ((int)puVar10 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_230,puVar2);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_218,3);
    puVar3 = (undefined8 *)&UNK_1108b34b0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar19 = 0;
    puVar13 = puVar14;
    puVar17 = puVar8;
    do {
      if ((&cStack_219)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar9 = &uStack_280;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_2a8 = auStack_260;
  do {
    puVar9 = puVar9 + -3;
  } while (puVar9 != puStack_2a8);
  _objc_release(puVar7);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_340;
  pcStack_288 = FUN_1057db728;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar3;
  puVar5 = puVar13;
  puVar4 = puVar17;
  puVar8 = puVar18;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = param_3;
  puStack_2c0 = param_4;
  puStack_2b8 = puVar10;
  puStack_2b0 = puVar9;
  puStack_2a0 = puVar2;
  puStack_298 = puVar7;
  pppuStack_290 = &ppuStack_1d0;
  _objc_retain(puVar13);
  if (puVar6 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar6[1];
    param_3 = (undefined8 *)&UNK_10f2fb6ca;
    unaff_x26 = (undefined8 *)&UNK_10f2fb6c5;
    puVar2 = unaff_x26;
    if ((int)puVar3 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_320,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_308,puVar2);
    param_4 = auStack_320;
    puVar2 = unaff_x26;
    if ((int)puVar17 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_2f0,puVar2);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    puVar11 = (undefined8 *)&UNK_1108b3500;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar19 = 0;
    puVar5 = puVar14;
    puVar4 = puVar18;
    do {
      if ((&cStack_2d9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar3 = &uStack_340;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  puStack_368 = auStack_320;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puStack_368);
  _objc_release(puVar13);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_400;
  pcStack_348 = FUN_1057db948;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar11;
  puVar10 = puVar5;
  puVar9 = puVar4;
  puVar18 = puVar8;
  puStack_390 = unaff_x26;
  puStack_388 = param_3;
  puStack_380 = param_4;
  puStack_378 = puVar17;
  puStack_370 = puVar3;
  puStack_360 = puVar2;
  puStack_358 = puVar13;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(puVar5);
  if (puVar7 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar7[1];
    param_3 = (undefined8 *)&UNK_10f2fb6ca;
    unaff_x26 = (undefined8 *)&UNK_10f2fb6c5;
    puVar2 = unaff_x26;
    if ((int)puVar11 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_3e0,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_3c8,puVar2);
    param_4 = auStack_3e0;
    puVar2 = unaff_x26;
    if ((int)puVar4 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_3b0,puVar2);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_398,3);
    puVar6 = (undefined8 *)&UNK_1108b3550;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar19 = 0;
    puVar10 = puVar14;
    puVar9 = puVar8;
    do {
      if ((&cStack_399)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar11 = &uStack_400;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  puStack_428 = auStack_3e0;
  do {
    puVar11 = puVar11 + -3;
  } while (puVar11 != puStack_428);
  _objc_release(puVar5);
  puVar8 = puVar2;
  __Unwind_Resume();
  puVar14 = &uStack_4c0;
  pcStack_408 = FUN_1057dbb68;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar7 = puVar10;
  puVar13 = puVar9;
  puVar17 = puVar18;
  puStack_450 = unaff_x26;
  puStack_448 = param_3;
  puStack_440 = param_4;
  puStack_438 = puVar4;
  puStack_430 = puVar11;
  puStack_420 = puVar2;
  puStack_418 = puVar5;
  pppuStack_410 = &pppuStack_350;
  _objc_retain(puVar10);
  if (puVar8 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar8[1];
    param_3 = (undefined8 *)&UNK_10f2fb6ca;
    unaff_x26 = (undefined8 *)&UNK_10f2fb6c5;
    puVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_4a0,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_488,puVar2);
    param_4 = auStack_4a0;
    puVar2 = unaff_x26;
    if ((int)puVar9 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_470,puVar2);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_458,3);
    puVar3 = (undefined8 *)&UNK_1108b35a0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    lVar19 = 0;
    puVar7 = puVar14;
    puVar13 = puVar18;
    do {
      if ((&cStack_459)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar6 = &uStack_4c0;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    puStack_4e8 = auStack_4a0;
    do {
      puVar6 = puVar6 + -3;
    } while (puVar6 != puStack_4e8);
    _objc_release(puVar10);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_4c8 = FUN_1057dbd88;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar3;
    puVar5 = puVar7;
    puVar8 = puVar13;
    puStack_500 = param_4;
    puStack_4f8 = puVar9;
    puStack_4f0 = puVar6;
    puStack_4e0 = puVar2;
    puStack_4d8 = puVar10;
    pppuStack_4d0 = &pppuStack_410;
    _objc_retain(puVar3);
    puVar2 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar4[1];
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        puVar9 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      param_4 = auStack_538;
      func_0x00010002b838(auStack_538,puVar9);
      puVar1 = &UNK_10f2fb6c5;
      if ((int)puVar7 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_520,puVar1);
      uStack_558 = 0;
      uStack_550 = 0;
      uStack_548 = 0;
      func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
      puVar11 = (undefined8 *)&UNK_1108b35f0;
      puVar7 = &uStack_558;
      puVar5 = &uStack_558;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_540 = puVar7;
      func_0x00010007e5dc(&puStack_540);
      lVar19 = 0;
      puVar2 = auStack_538;
      puVar8 = puVar13;
      do {
        if ((&cStack_509)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x30);
    }
    puVar6 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return puVar6;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar10 = puVar6;
    __Unwind_Resume();
    puVar15 = &uStack_620;
    pcStack_568 = FUN_1057dbf70;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar11;
    puVar13 = puVar5;
    puVar18 = puVar8;
    puVar14 = puVar17;
    puStack_5b0 = unaff_x26;
    puStack_5a8 = param_3;
    puStack_5a0 = param_4;
    puStack_598 = puVar9;
    puStack_590 = puVar7;
    puStack_588 = puVar2;
    puStack_580 = puVar6;
    puStack_578 = puVar3;
    pppuStack_570 = &pppuStack_4d0;
    _objc_retain(puVar5);
    iVar16 = (int)puVar18;
    if (puVar10 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar10[1];
      param_3 = (undefined8 *)&UNK_10f2fb6ca;
      unaff_x26 = (undefined8 *)&UNK_10f2fb6c5;
      puVar2 = unaff_x26;
      if ((int)puVar11 == 0) {
        puVar2 = param_3;
      }
      func_0x00010002b838(auStack_600,puVar2);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar2 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_5e8,puVar2);
      param_4 = auStack_600;
      puVar2 = unaff_x26;
      if ((int)puVar8 == 0) {
        puVar2 = param_3;
      }
      func_0x00010002b838(auStack_5d0,puVar2);
      uStack_620 = 0;
      uStack_618 = 0;
      uStack_610 = 0;
      func_0x00010007e1e8(&uStack_620,auStack_600,&lStack_5b8,3);
      puVar4 = (undefined8 *)&UNK_1108b3640;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_608 = (undefined1 *)&uStack_620;
      func_0x00010007e5dc(&puStack_608);
      lVar19 = 0;
      puVar13 = puVar15;
      do {
        if ((&cStack_5b9)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar19));
        }
        iVar16 = (int)puVar17;
        lVar19 = lVar19 + -0x18;
        puVar11 = &uStack_620;
      } while (lVar19 != -0x48);
    }
    puVar2 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    puStack_648 = auStack_600;
    do {
      puVar11 = puVar11 + -3;
    } while (puVar11 != puStack_648);
    _objc_release(puVar5);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_628 = FUN_1057dc190;
    lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_670 = unaff_x26;
    puStack_668 = param_3;
    puStack_660 = param_4;
    puStack_658 = puVar8;
    puStack_650 = puVar11;
    puStack_640 = puVar2;
    puStack_638 = puVar5;
    pppuStack_630 = &pppuStack_570;
    _objc_retain(puVar13);
    if (puVar6 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar6[1];
      puVar1 = &UNK_10f2fb6c5;
      if ((int)puVar4 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_6c0,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_6a8,puVar2);
      puVar1 = &UNK_10f2fb6c5;
      if (iVar16 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_690,puVar1);
      uStack_6e0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      func_0x00010007e1e8(&uStack_6e0,auStack_6c0,&lStack_678,3);
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_1108b3690,&uStack_6e0,puVar14);
      puStack_6c8 = (undefined1 *)&uStack_6e0;
      func_0x00010007e5dc(&puStack_6c8);
      lVar19 = 0;
      do {
        if ((&cStack_679)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_690 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
        puVar4 = &uStack_6e0;
      } while (lVar19 != -0x48);
    }
    puVar2 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_678) {
      ___stack_chk_fail();
      _objc_release(puVar13);
      do {
        puVar4 = puVar4 + -3;
      } while (puVar4 != auStack_6c0);
      _objc_release(puVar13);
      puVar11 = puVar2;
      __Unwind_Resume();
      ppuVar12 = &puStack_710;
      pcStack_6e8 = FUN_1057dc3b0;
      puStack_708 = PTR_PTR_1126ea570;
      puStack_710 = puVar11;
      puStack_700 = puVar2;
      puStack_6f8 = puVar13;
      pppuStack_6f0 = &pppuStack_630;
      _objc_msgSendSuper2(&puStack_710,PTR_s_init_1125d9248);
      if (ppuVar12 != (undefined8 **)0x0) {
        puVar2 = ppuVar12;
        (*(code *)PTR_DAT_113403208)();
        ppuVar12[1] = puVar2;
      }
      return ppuVar12;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1057db2e8; end: 1057db507;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dbb40) */
/* WARNING: Removing unreachable block (ram,0x0001057db700) */
/* WARNING: Removing unreachable block (ram,0x0001057db4e0) */
/* WARNING: Removing unreachable block (ram,0x0001057db920) */
/* WARNING: Removing unreachable block (ram,0x0001057dbd60) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057db2e8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puStack_610;
  undefined *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [3];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [3];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [3];
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [3];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar9 = param_3;
  puVar8 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    unaff_x24 = auStack_a0;
    puVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = (undefined8 *)&UNK_1108b3460;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar19 = 0;
    puVar9 = puVar3;
    puVar8 = param_5;
    do {
      if ((&cStack_59)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar19 != -0x48);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_e8);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar13 = &uStack_180;
  pcStack_c8 = FUN_1057db508;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar2;
  puVar6 = puVar9;
  puVar10 = puVar8;
  puVar7 = puVar5;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = param_2;
  puStack_e0 = puVar3;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar4[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_148,puVar2);
    unaff_x24 = auStack_160;
    puVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar12 = (undefined8 *)&UNK_1108b34b0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar19 = 0;
    puVar6 = puVar13;
    puVar10 = puVar5;
    do {
      if ((&cStack_119)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar2 = &uStack_180;
    } while (lVar19 != -0x48);
  }
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    puStack_1a8 = auStack_160;
    do {
      puVar2 = puVar2 + -3;
    } while (puVar2 != puStack_1a8);
    _objc_release(puVar9);
    puVar4 = puVar5;
    __Unwind_Resume();
    puVar14 = &uStack_240;
    pcStack_188 = FUN_1057db728;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar12;
    puVar13 = puVar6;
    puVar17 = puVar10;
    puVar18 = puVar7;
    puStack_1d0 = unaff_x26;
    puStack_1c8 = unaff_x25;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar8;
    puStack_1b0 = puVar2;
    puStack_1a0 = puVar5;
    puStack_198 = puVar9;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar6);
    if (puVar4 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar4[1];
      unaff_x25 = &UNK_10f2fb6ca;
      unaff_x26 = &UNK_10f2fb6c5;
      puVar1 = unaff_x26;
      if ((int)puVar12 == 0) {
        puVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_220,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar2 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_208,puVar2);
      unaff_x24 = auStack_220;
      puVar1 = unaff_x26;
      if ((int)puVar10 == 0) {
        puVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_1f0,puVar1);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar3 = (undefined8 *)&UNK_1108b3500;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar19 = 0;
      puVar13 = puVar14;
      puVar17 = puVar7;
      do {
        if ((&cStack_1d9)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
        puVar12 = &uStack_240;
      } while (lVar19 != -0x48);
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    puStack_268 = auStack_220;
    do {
      puVar12 = puVar12 + -3;
    } while (puVar12 != puStack_268);
    _objc_release(puVar6);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar14 = &uStack_300;
    pcStack_248 = FUN_1057db948;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar3;
    puVar4 = puVar13;
    puVar8 = puVar17;
    puVar7 = puVar18;
    puStack_290 = unaff_x26;
    puStack_288 = unaff_x25;
    puStack_280 = unaff_x24;
    puStack_278 = puVar10;
    puStack_270 = puVar12;
    puStack_260 = puVar2;
    puStack_258 = puVar6;
    pppuStack_250 = &ppuStack_190;
    _objc_retain(puVar13);
    if (puVar5 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar5[1];
      unaff_x25 = &UNK_10f2fb6ca;
      unaff_x26 = &UNK_10f2fb6c5;
      puVar1 = unaff_x26;
      if ((int)puVar3 == 0) {
        puVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_2e0,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_2c8,puVar2);
      unaff_x24 = auStack_2e0;
      puVar1 = unaff_x26;
      if ((int)puVar17 == 0) {
        puVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_2b0,puVar1);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
      puVar9 = (undefined8 *)&UNK_1108b3550;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar19 = 0;
      puVar4 = puVar14;
      puVar8 = puVar18;
      do {
        if ((&cStack_299)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
        puVar3 = &uStack_300;
      } while (lVar19 != -0x48);
    }
    puVar2 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    puStack_328 = auStack_2e0;
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != puStack_328);
    _objc_release(puVar13);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar14 = &uStack_3c0;
    pcStack_308 = FUN_1057dbb68;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar9;
    puVar12 = puVar4;
    puVar10 = puVar8;
    puVar18 = puVar7;
    puStack_350 = unaff_x26;
    puStack_348 = unaff_x25;
    puStack_340 = unaff_x24;
    puStack_338 = puVar17;
    puStack_330 = puVar3;
    puStack_320 = puVar2;
    puStack_318 = puVar13;
    pppuStack_310 = &pppuStack_250;
    _objc_retain(puVar4);
    if (puVar6 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar6[1];
      unaff_x25 = &UNK_10f2fb6ca;
      unaff_x26 = &UNK_10f2fb6c5;
      puVar1 = unaff_x26;
      if ((int)puVar9 == 0) {
        puVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_3a0,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_388,puVar2);
      unaff_x24 = auStack_3a0;
      puVar1 = unaff_x26;
      if ((int)puVar8 == 0) {
        puVar1 = unaff_x25;
      }
      func_0x00010002b838(auStack_370,puVar1);
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
      puVar5 = (undefined8 *)&UNK_1108b35a0;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_3a8 = (undefined1 *)&uStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      lVar19 = 0;
      puVar12 = puVar14;
      puVar10 = puVar7;
      do {
        if ((&cStack_359)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
        puVar9 = &uStack_3c0;
      } while (lVar19 != -0x48);
    }
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      puStack_3e8 = auStack_3a0;
      do {
        puVar9 = puVar9 + -3;
      } while (puVar9 != puStack_3e8);
      _objc_release(puVar4);
      puVar7 = puVar2;
      __Unwind_Resume();
      pcStack_3c8 = FUN_1057dbd88;
      lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = puVar5;
      puVar6 = puVar12;
      puVar13 = puVar10;
      puStack_400 = unaff_x24;
      puStack_3f8 = puVar8;
      puStack_3f0 = puVar9;
      puStack_3e0 = puVar2;
      puStack_3d8 = puVar4;
      pppuStack_3d0 = &pppuStack_310;
      _objc_retain(puVar5);
      puVar2 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        plVar20 = (long *)puVar7[1];
        _objc_retain(puVar5);
        if (puVar5 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&UNK_10f2fb6d0;
        }
        else {
          puVar8 = puVar5;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        unaff_x24 = auStack_438;
        func_0x00010002b838(auStack_438,puVar8);
        puVar1 = &UNK_10f2fb6c5;
        if ((int)puVar12 == 0) {
          puVar1 = &UNK_10f2fb6ca;
        }
        func_0x00010002b838(auStack_420,puVar1);
        uStack_458 = 0;
        uStack_450 = 0;
        uStack_448 = 0;
        func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
        puVar3 = (undefined8 *)&UNK_1108b35f0;
        puVar12 = &uStack_458;
        puVar6 = &uStack_458;
        (**(code **)(*plVar20 + 0x18))(plVar20);
        puStack_440 = puVar12;
        func_0x00010007e5dc(&puStack_440);
        lVar19 = 0;
        puVar2 = auStack_438;
        puVar13 = puVar10;
        do {
          if ((&cStack_409)[lVar19] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar19));
          }
          lVar19 = lVar19 + -0x18;
        } while (lVar19 != -0x30);
      }
      puVar9 = puVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
        return puVar9;
      }
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      puVar10 = puVar9;
      __Unwind_Resume();
      puVar15 = &uStack_520;
      pcStack_468 = FUN_1057dbf70;
      lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar3;
      puVar7 = puVar6;
      puVar17 = puVar13;
      puVar14 = puVar18;
      puStack_4b0 = unaff_x26;
      puStack_4a8 = unaff_x25;
      puStack_4a0 = unaff_x24;
      puStack_498 = puVar8;
      puStack_490 = puVar12;
      puStack_488 = puVar2;
      puStack_480 = puVar9;
      puStack_478 = puVar5;
      pppuStack_470 = &pppuStack_3d0;
      _objc_retain(puVar6);
      iVar16 = (int)puVar17;
      if (puVar10 != (undefined8 *)0x0) {
        plVar20 = (long *)puVar10[1];
        unaff_x25 = &UNK_10f2fb6ca;
        unaff_x26 = &UNK_10f2fb6c5;
        puVar1 = unaff_x26;
        if ((int)puVar3 == 0) {
          puVar1 = unaff_x25;
        }
        func_0x00010002b838(auStack_500,puVar1);
        _objc_retain(puVar6);
        if (puVar6 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f2fb6d0;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar2 = puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_4e8,puVar2);
        unaff_x24 = auStack_500;
        puVar1 = unaff_x26;
        if ((int)puVar13 == 0) {
          puVar1 = unaff_x25;
        }
        func_0x00010002b838(auStack_4d0,puVar1);
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_510 = 0;
        func_0x00010007e1e8(&uStack_520,auStack_500,&lStack_4b8,3);
        puVar4 = (undefined8 *)&UNK_1108b3640;
        (**(code **)(*plVar20 + 0x18))(plVar20);
        puStack_508 = (undefined1 *)&uStack_520;
        func_0x00010007e5dc(&puStack_508);
        lVar19 = 0;
        puVar7 = puVar15;
        do {
          if ((&cStack_4b9)[lVar19] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar19));
          }
          iVar16 = (int)puVar18;
          lVar19 = lVar19 + -0x18;
          puVar3 = &uStack_520;
        } while (lVar19 != -0x48);
      }
      puVar2 = puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
        ___stack_chk_fail();
        _objc_release(puVar6);
        puStack_548 = auStack_500;
        do {
          puVar3 = puVar3 + -3;
        } while (puVar3 != puStack_548);
        _objc_release(puVar6);
        puVar9 = puVar2;
        __Unwind_Resume();
        pcStack_528 = FUN_1057dc190;
        lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_570 = unaff_x26;
        puStack_568 = unaff_x25;
        puStack_560 = unaff_x24;
        puStack_558 = puVar13;
        puStack_550 = puVar3;
        puStack_540 = puVar2;
        puStack_538 = puVar6;
        pppuStack_530 = &pppuStack_470;
        _objc_retain(puVar7);
        if (puVar9 != (undefined8 *)0x0) {
          plVar20 = (long *)puVar9[1];
          puVar1 = &UNK_10f2fb6c5;
          if ((int)puVar4 == 0) {
            puVar1 = &UNK_10f2fb6ca;
          }
          func_0x00010002b838(auStack_5c0,puVar1);
          _objc_retain(puVar7);
          if (puVar7 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f2fb6d0;
          }
          else {
            _objc_retainAutorelease(puVar7);
            puVar2 = puVar7;
            func_0x00010bdc3520(puVar7);
          }
          _objc_release(puVar7);
          func_0x00010002b838(auStack_5a8,puVar2);
          puVar1 = &UNK_10f2fb6c5;
          if (iVar16 == 0) {
            puVar1 = &UNK_10f2fb6ca;
          }
          func_0x00010002b838(auStack_590,puVar1);
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          func_0x00010007e1e8(&uStack_5e0,auStack_5c0,&lStack_578,3);
          (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_1108b3690,&uStack_5e0,puVar14);
          puStack_5c8 = (undefined1 *)&uStack_5e0;
          func_0x00010007e5dc(&puStack_5c8);
          lVar19 = 0;
          do {
            if ((&cStack_579)[lVar19] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar19));
            }
            lVar19 = lVar19 + -0x18;
            puVar4 = &uStack_5e0;
          } while (lVar19 != -0x48);
        }
        puVar2 = puVar7;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
          ___stack_chk_fail();
          _objc_release(puVar7);
          do {
            puVar4 = puVar4 + -3;
          } while (puVar4 != auStack_5c0);
          _objc_release(puVar7);
          puVar9 = puVar2;
          __Unwind_Resume();
          ppuVar11 = &puStack_610;
          pcStack_5e8 = FUN_1057dc3b0;
          puStack_608 = PTR_PTR_1126ea570;
          puStack_610 = puVar9;
          puStack_600 = puVar2;
          puStack_5f8 = puVar7;
          pppuStack_5f0 = &pppuStack_530;
          _objc_msgSendSuper2(&puStack_610,PTR_s_init_1125d9248);
          if (ppuVar11 != (undefined8 **)0x0) {
            puVar2 = ppuVar11;
            (*(code *)PTR_DAT_113403208)();
            ppuVar11[1] = puVar2;
          }
          return ppuVar11;
        }
        return puVar2;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar5;
}



/* Entry: 1057db508; end: 1057db727;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dbb40) */
/* WARNING: Removing unreachable block (ram,0x0001057db700) */
/* WARNING: Removing unreachable block (ram,0x0001057db920) */
/* WARNING: Removing unreachable block (ram,0x0001057dbd60) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057db508(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puStack_550;
  undefined *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [3];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [3];
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar9 = param_3;
  puVar14 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    unaff_x24 = auStack_a0;
    puVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = (undefined8 *)&UNK_1108b34b0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar19 = 0;
    puVar9 = puVar3;
    puVar14 = param_5;
    do {
      if ((&cStack_59)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar19 != -0x48);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_e8);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_1057db728;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar7 = puVar9;
  puVar17 = puVar14;
  puVar8 = puVar5;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = param_2;
  puStack_e0 = puVar3;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar4[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_148,puVar2);
    unaff_x24 = auStack_160;
    puVar1 = unaff_x26;
    if ((int)puVar14 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar11 = (undefined8 *)&UNK_1108b3500;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar19 = 0;
    puVar7 = puVar6;
    puVar17 = puVar5;
    do {
      if ((&cStack_119)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar2 = &uStack_180;
    } while (lVar19 != -0x48);
  }
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puStack_1a8 = auStack_160;
  do {
    puVar2 = puVar2 + -3;
  } while (puVar2 != puStack_1a8);
  _objc_release(puVar9);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar13 = &uStack_240;
  pcStack_188 = FUN_1057db948;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar12 = puVar7;
  puVar4 = puVar17;
  puVar18 = puVar8;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar14;
  puStack_1b0 = puVar2;
  puStack_1a0 = puVar5;
  puStack_198 = puVar9;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar7);
  if (puVar6 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar6[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar11 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_220,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_208,puVar2);
    unaff_x24 = auStack_220;
    puVar1 = unaff_x26;
    if ((int)puVar17 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar3 = (undefined8 *)&UNK_1108b3550;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar19 = 0;
    puVar12 = puVar13;
    puVar4 = puVar8;
    do {
      if ((&cStack_1d9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar11 = &uStack_240;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_268 = auStack_220;
  do {
    puVar11 = puVar11 + -3;
  } while (puVar11 != puStack_268);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar13 = &uStack_300;
  pcStack_248 = FUN_1057dbb68;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar14 = puVar12;
  puVar8 = puVar4;
  puVar6 = puVar18;
  puStack_290 = unaff_x26;
  puStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = puVar17;
  puStack_270 = puVar11;
  puStack_260 = puVar2;
  puStack_258 = puVar7;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar12);
  if (puVar5 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar5[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar3 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_2e0,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar2 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_2c8,puVar2);
    unaff_x24 = auStack_2e0;
    puVar1 = unaff_x26;
    if ((int)puVar4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_2b0,puVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    puVar9 = (undefined8 *)&UNK_1108b35a0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar19 = 0;
    puVar14 = puVar13;
    puVar8 = puVar18;
    do {
      if ((&cStack_299)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar3 = &uStack_300;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    puStack_328 = auStack_2e0;
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != puStack_328);
    _objc_release(puVar12);
    puVar7 = puVar2;
    __Unwind_Resume();
    pcStack_308 = FUN_1057dbd88;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar9;
    puVar11 = puVar14;
    puVar17 = puVar8;
    puStack_340 = unaff_x24;
    puStack_338 = puVar4;
    puStack_330 = puVar3;
    puStack_320 = puVar2;
    puStack_318 = puVar12;
    pppuStack_310 = &pppuStack_250;
    _objc_retain(puVar9);
    puVar2 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar7[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        puVar4 = puVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x24 = auStack_378;
      func_0x00010002b838(auStack_378,puVar4);
      puVar1 = &UNK_10f2fb6c5;
      if ((int)puVar14 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_360,puVar1);
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_388 = 0;
      func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
      puVar5 = (undefined8 *)&UNK_1108b35f0;
      puVar14 = &uStack_398;
      puVar11 = &uStack_398;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      puStack_380 = puVar14;
      func_0x00010007e5dc(&puStack_380);
      lVar19 = 0;
      puVar2 = auStack_378;
      puVar17 = puVar8;
      do {
        if ((&cStack_349)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x30);
    }
    puVar3 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      _objc_release(puVar9);
      puVar8 = puVar3;
      __Unwind_Resume();
      puVar15 = &uStack_460;
      pcStack_3a8 = FUN_1057dbf70;
      lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar5;
      puVar12 = puVar11;
      puVar18 = puVar17;
      puVar13 = puVar6;
      puStack_3f0 = unaff_x26;
      puStack_3e8 = unaff_x25;
      puStack_3e0 = unaff_x24;
      puStack_3d8 = puVar4;
      puStack_3d0 = puVar14;
      puStack_3c8 = puVar2;
      puStack_3c0 = puVar3;
      puStack_3b8 = puVar9;
      pppuStack_3b0 = &pppuStack_310;
      _objc_retain(puVar11);
      iVar16 = (int)puVar18;
      if (puVar8 != (undefined8 *)0x0) {
        plVar20 = (long *)puVar8[1];
        unaff_x25 = &UNK_10f2fb6ca;
        unaff_x26 = &UNK_10f2fb6c5;
        puVar1 = unaff_x26;
        if ((int)puVar5 == 0) {
          puVar1 = unaff_x25;
        }
        func_0x00010002b838(auStack_440,puVar1);
        _objc_retain(puVar11);
        if (puVar11 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f2fb6d0;
        }
        else {
          _objc_retainAutorelease(puVar11);
          puVar2 = puVar11;
          func_0x00010bdc3520(puVar11);
        }
        _objc_release(puVar11);
        func_0x00010002b838(auStack_428,puVar2);
        unaff_x24 = auStack_440;
        puVar1 = unaff_x26;
        if ((int)puVar17 == 0) {
          puVar1 = unaff_x25;
        }
        func_0x00010002b838(auStack_410,puVar1);
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_3f8,3);
        puVar7 = (undefined8 *)&UNK_1108b3640;
        (**(code **)(*plVar20 + 0x18))(plVar20);
        puStack_448 = (undefined1 *)&uStack_460;
        func_0x00010007e5dc(&puStack_448);
        lVar19 = 0;
        puVar12 = puVar15;
        do {
          if ((&cStack_3f9)[lVar19] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar19));
          }
          iVar16 = (int)puVar6;
          lVar19 = lVar19 + -0x18;
          puVar5 = &uStack_460;
        } while (lVar19 != -0x48);
      }
      puVar2 = puVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
        ___stack_chk_fail();
        _objc_release(puVar11);
        puStack_488 = auStack_440;
        do {
          puVar5 = puVar5 + -3;
        } while (puVar5 != puStack_488);
        _objc_release(puVar11);
        puVar9 = puVar2;
        __Unwind_Resume();
        pcStack_468 = FUN_1057dc190;
        lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_4b0 = unaff_x26;
        puStack_4a8 = unaff_x25;
        puStack_4a0 = unaff_x24;
        puStack_498 = puVar17;
        puStack_490 = puVar5;
        puStack_480 = puVar2;
        puStack_478 = puVar11;
        pppuStack_470 = &pppuStack_3b0;
        _objc_retain(puVar12);
        if (puVar9 != (undefined8 *)0x0) {
          plVar20 = (long *)puVar9[1];
          puVar1 = &UNK_10f2fb6c5;
          if ((int)puVar7 == 0) {
            puVar1 = &UNK_10f2fb6ca;
          }
          func_0x00010002b838(auStack_500,puVar1);
          _objc_retain(puVar12);
          if (puVar12 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f2fb6d0;
          }
          else {
            _objc_retainAutorelease(puVar12);
            puVar2 = puVar12;
            func_0x00010bdc3520(puVar12);
          }
          _objc_release(puVar12);
          func_0x00010002b838(auStack_4e8,puVar2);
          puVar1 = &UNK_10f2fb6c5;
          if (iVar16 == 0) {
            puVar1 = &UNK_10f2fb6ca;
          }
          func_0x00010002b838(auStack_4d0,puVar1);
          uStack_520 = 0;
          uStack_518 = 0;
          uStack_510 = 0;
          func_0x00010007e1e8(&uStack_520,auStack_500,&lStack_4b8,3);
          (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_1108b3690,&uStack_520,puVar13);
          puStack_508 = (undefined1 *)&uStack_520;
          func_0x00010007e5dc(&puStack_508);
          lVar19 = 0;
          do {
            if ((&cStack_4b9)[lVar19] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar19));
            }
            lVar19 = lVar19 + -0x18;
            puVar7 = &uStack_520;
          } while (lVar19 != -0x48);
        }
        puVar2 = puVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
          ___stack_chk_fail();
          _objc_release(puVar12);
          do {
            puVar7 = puVar7 + -3;
          } while (puVar7 != auStack_500);
          _objc_release(puVar12);
          puVar9 = puVar2;
          __Unwind_Resume();
          ppuVar10 = &puStack_550;
          pcStack_528 = FUN_1057dc3b0;
          puStack_548 = PTR_PTR_1126ea570;
          puStack_550 = puVar9;
          puStack_540 = puVar2;
          puStack_538 = puVar12;
          pppuStack_530 = &pppuStack_470;
          _objc_msgSendSuper2(&puStack_550,PTR_s_init_1125d9248);
          if (ppuVar10 != (undefined8 **)0x0) {
            puVar2 = ppuVar10;
            (*(code *)PTR_DAT_113403208)();
            ppuVar10[1] = puVar2;
          }
          return ppuVar10;
        }
        return puVar2;
      }
      return puVar2;
    }
    return puVar3;
  }
  return puVar2;
}



/* Entry: 1057db728; end: 1057db947;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dbb40) */
/* WARNING: Removing unreachable block (ram,0x0001057db920) */
/* WARNING: Removing unreachable block (ram,0x0001057dbd60) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057db728(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puStack_490;
  undefined *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [3];
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar9 = param_3;
  puVar13 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    unaff_x24 = auStack_a0;
    puVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = (undefined8 *)&UNK_1108b3500;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar19 = 0;
    puVar9 = puVar3;
    puVar13 = param_5;
    do {
      if ((&cStack_59)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar19 != -0x48);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_e8);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_1057db948;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar8 = puVar9;
  puVar7 = puVar13;
  puVar17 = puVar5;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = param_2;
  puStack_e0 = puVar3;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar4[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_148,puVar2);
    unaff_x24 = auStack_160;
    puVar1 = unaff_x26;
    if ((int)puVar13 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar11 = (undefined8 *)&UNK_1108b3550;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar19 = 0;
    puVar8 = puVar6;
    puVar7 = puVar5;
    do {
      if ((&cStack_119)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar2 = &uStack_180;
    } while (lVar19 != -0x48);
  }
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puStack_1a8 = auStack_160;
  do {
    puVar2 = puVar2 + -3;
  } while (puVar2 != puStack_1a8);
  _objc_release(puVar9);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar12 = &uStack_240;
  pcStack_188 = FUN_1057dbb68;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar4 = puVar8;
  puVar16 = puVar7;
  puVar18 = puVar17;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar13;
  puStack_1b0 = puVar2;
  puStack_1a0 = puVar5;
  puStack_198 = puVar9;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar8);
  if (puVar6 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar6[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar11 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_220,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_208,puVar2);
    unaff_x24 = auStack_220;
    puVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar3 = (undefined8 *)&UNK_1108b35a0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar19 = 0;
    puVar4 = puVar12;
    puVar16 = puVar17;
    do {
      if ((&cStack_1d9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar11 = &uStack_240;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_268 = auStack_220;
  do {
    puVar11 = puVar11 + -3;
  } while (puVar11 != puStack_268);
  _objc_release(puVar8);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_1057dbd88;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar13 = puVar4;
  puVar17 = puVar16;
  puStack_280 = unaff_x24;
  puStack_278 = puVar7;
  puStack_270 = puVar11;
  puStack_260 = puVar2;
  puStack_258 = puVar8;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar3);
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar5[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      puVar7 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar7);
    puVar1 = &UNK_10f2fb6c5;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar9 = (undefined8 *)&UNK_1108b35f0;
    puVar4 = &uStack_2d8;
    puVar13 = &uStack_2d8;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_2c0 = puVar4;
    func_0x00010007e5dc(&puStack_2c0);
    lVar19 = 0;
    puVar2 = auStack_2b8;
    puVar17 = puVar16;
    do {
      if ((&cStack_289)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar5;
  __Unwind_Resume();
  puVar14 = &uStack_3a0;
  pcStack_2e8 = FUN_1057dbf70;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar9;
  puVar6 = puVar13;
  puVar16 = puVar17;
  puVar12 = puVar18;
  puStack_330 = unaff_x26;
  puStack_328 = unaff_x25;
  puStack_320 = unaff_x24;
  puStack_318 = puVar7;
  puStack_310 = puVar4;
  puStack_308 = puVar2;
  puStack_300 = puVar5;
  puStack_2f8 = puVar3;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar13);
  iVar15 = (int)puVar16;
  if (puVar8 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar8[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar9 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_380,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_368,puVar2);
    unaff_x24 = auStack_380;
    puVar1 = unaff_x26;
    if ((int)puVar17 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_350,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_338,3);
    puVar11 = (undefined8 *)&UNK_1108b3640;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar19 = 0;
    puVar6 = puVar14;
    do {
      if ((&cStack_339)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar19));
      }
      iVar15 = (int)puVar18;
      lVar19 = lVar19 + -0x18;
      puVar9 = &uStack_3a0;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    puStack_3c8 = auStack_380;
    do {
      puVar9 = puVar9 + -3;
    } while (puVar9 != puStack_3c8);
    _objc_release(puVar13);
    puVar5 = puVar2;
    __Unwind_Resume();
    pcStack_3a8 = FUN_1057dc190;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3f0 = unaff_x26;
    puStack_3e8 = unaff_x25;
    puStack_3e0 = unaff_x24;
    puStack_3d8 = puVar17;
    puStack_3d0 = puVar9;
    puStack_3c0 = puVar2;
    puStack_3b8 = puVar13;
    pppuStack_3b0 = &pppuStack_2f0;
    _objc_retain(puVar6);
    if (puVar5 != (undefined8 *)0x0) {
      plVar20 = (long *)puVar5[1];
      puVar1 = &UNK_10f2fb6c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_440,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar2 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_428,puVar2);
      puVar1 = &UNK_10f2fb6c5;
      if (iVar15 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_410,puVar1);
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_3f8,3);
      (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_1108b3690,&uStack_460,puVar12);
      puStack_448 = (undefined1 *)&uStack_460;
      func_0x00010007e5dc(&puStack_448);
      lVar19 = 0;
      do {
        if ((&cStack_3f9)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
        puVar11 = &uStack_460;
      } while (lVar19 != -0x48);
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      do {
        puVar11 = puVar11 + -3;
      } while (puVar11 != auStack_440);
      _objc_release(puVar6);
      puVar9 = puVar2;
      __Unwind_Resume();
      ppuVar10 = &puStack_490;
      pcStack_468 = FUN_1057dc3b0;
      puStack_488 = PTR_PTR_1126ea570;
      puStack_490 = puVar9;
      puStack_480 = puVar2;
      puStack_478 = puVar6;
      pppuStack_470 = &pppuStack_3b0;
      _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
      if (ppuVar10 != (undefined8 **)0x0) {
        puVar2 = ppuVar10;
        (*(code *)PTR_DAT_113403208)();
        ppuVar10[1] = puVar2;
      }
      return ppuVar10;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1057db948; end: 1057dbb67;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dbb40) */
/* WARNING: Removing unreachable block (ram,0x0001057dbd60) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057db948(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [3];
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  puVar7 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    unaff_x24 = auStack_a0;
    puVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = (undefined8 *)&UNK_1108b3550;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar19 = 0;
    puVar8 = puVar3;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar19 != -0x48);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_e8);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_1057dbb68;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar12 = puVar8;
  puVar9 = puVar7;
  puVar17 = puVar5;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = param_2;
  puStack_e0 = puVar3;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar4 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar4[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_148,puVar2);
    unaff_x24 = auStack_160;
    puVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar11 = (undefined8 *)&UNK_1108b35a0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar19 = 0;
    puVar12 = puVar6;
    puVar9 = puVar5;
    do {
      if ((&cStack_119)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar2 = &uStack_180;
    } while (lVar19 != -0x48);
  }
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_1a8 = auStack_160;
  do {
    puVar2 = puVar2 + -3;
  } while (puVar2 != puStack_1a8);
  _objc_release(puVar8);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_188 = FUN_1057dbd88;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar4 = puVar12;
  puVar15 = puVar9;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar7;
  puStack_1b0 = puVar2;
  puStack_1a0 = puVar5;
  puStack_198 = puVar8;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar11);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar6[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      puVar7 = puVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar7);
    puVar1 = &UNK_10f2fb6c5;
    if ((int)puVar12 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_1e0,puVar1);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar3 = (undefined8 *)&UNK_1108b35f0;
    puVar12 = &uStack_218;
    puVar4 = &uStack_218;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_200 = puVar12;
    func_0x00010007e5dc(&puStack_200);
    lVar19 = 0;
    puVar2 = auStack_1f8;
    puVar15 = puVar9;
    do {
      if ((&cStack_1c9)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x30);
  }
  puVar8 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(puVar11);
  puVar9 = puVar8;
  __Unwind_Resume();
  puVar13 = &uStack_2e0;
  pcStack_228 = FUN_1057dbf70;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar6 = puVar4;
  puVar16 = puVar15;
  puVar18 = puVar17;
  puStack_270 = unaff_x26;
  puStack_268 = unaff_x25;
  puStack_260 = unaff_x24;
  puStack_258 = puVar7;
  puStack_250 = puVar12;
  puStack_248 = puVar2;
  puStack_240 = puVar8;
  puStack_238 = puVar11;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar4);
  iVar14 = (int)puVar16;
  if (puVar9 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar9[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar3 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_2c0,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_2a8,puVar2);
    unaff_x24 = auStack_2c0;
    puVar1 = unaff_x26;
    if ((int)puVar15 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_290,puVar1);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
    puVar5 = (undefined8 *)&UNK_1108b3640;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar19 = 0;
    puVar6 = puVar13;
    do {
      if ((&cStack_279)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar19));
      }
      iVar14 = (int)puVar17;
      lVar19 = lVar19 + -0x18;
      puVar3 = &uStack_2e0;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  puStack_308 = auStack_2c0;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puStack_308);
  _objc_release(puVar4);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1057dc190;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_330 = unaff_x26;
  puStack_328 = unaff_x25;
  puStack_320 = unaff_x24;
  puStack_318 = puVar15;
  puStack_310 = puVar3;
  puStack_300 = puVar2;
  puStack_2f8 = puVar4;
  pppuStack_2f0 = &pppuStack_230;
  _objc_retain(puVar6);
  if (puVar7 != (undefined8 *)0x0) {
    plVar20 = (long *)puVar7[1];
    puVar1 = &UNK_10f2fb6c5;
    if ((int)puVar5 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_380,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_368,puVar2);
    puVar1 = &UNK_10f2fb6c5;
    if (iVar14 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_350,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_338,3);
    (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_1108b3690,&uStack_3a0,puVar18);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    lVar19 = 0;
    do {
      if ((&cStack_339)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
      puVar5 = &uStack_3a0;
    } while (lVar19 != -0x48);
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      puVar5 = puVar5 + -3;
    } while (puVar5 != auStack_380);
    _objc_release(puVar6);
    puVar7 = puVar2;
    __Unwind_Resume();
    ppuVar10 = &puStack_3d0;
    pcStack_3a8 = FUN_1057dc3b0;
    puStack_3c8 = PTR_PTR_1126ea570;
    puStack_3d0 = puVar7;
    puStack_3c0 = puVar2;
    puStack_3b8 = puVar6;
    pppuStack_3b0 = &pppuStack_2f0;
    _objc_msgSendSuper2(&puStack_3d0,PTR_s_init_1125d9248);
    if (ppuVar10 != (undefined8 **)0x0) {
      puVar2 = ppuVar10;
      (*(code *)PTR_DAT_113403208)();
      ppuVar10[1] = puVar2;
    }
    return ppuVar10;
  }
  return puVar2;
}



/* Entry: 1057dbb68; end: 1057dbd87;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dbd60) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057dbb68(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  puVar16 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    unaff_x24 = auStack_a0;
    puVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = (undefined8 *)&UNK_1108b35a0;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar18 = 0;
    puVar7 = puVar3;
    puVar5 = param_5;
    do {
      if ((&cStack_59)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar18 != -0x48);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_e8);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1057dbd88;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar10 = puVar7;
  puVar14 = puVar5;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = param_2;
  puStack_e0 = puVar3;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      param_4 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      param_4 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,param_4);
    puVar1 = &UNK_10f2fb6c5;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_120,puVar1);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar9 = (undefined8 *)&UNK_1108b35f0;
    puVar7 = &uStack_158;
    puVar10 = &uStack_158;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_140 = puVar7;
    func_0x00010007e5dc(&puStack_140);
    lVar18 = 0;
    puVar3 = auStack_138;
    puVar14 = puVar5;
    do {
      if ((&cStack_109)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar12 = &uStack_220;
  pcStack_168 = FUN_1057dbf70;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar9;
  puVar11 = puVar10;
  puVar15 = puVar14;
  puVar17 = puVar16;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  puStack_198 = param_4;
  puStack_190 = puVar7;
  puStack_188 = puVar3;
  puStack_180 = puVar5;
  puStack_178 = puVar2;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar10);
  iVar13 = (int)puVar15;
  if (puVar6 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar6[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar9 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_200,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1e8,puVar2);
    unaff_x24 = auStack_200;
    puVar1 = unaff_x26;
    if ((int)puVar14 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_1d0,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar4 = (undefined8 *)&UNK_1108b3640;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar18 = 0;
    puVar11 = puVar12;
    do {
      if ((&cStack_1b9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar18));
      }
      iVar13 = (int)puVar16;
      lVar18 = lVar18 + -0x18;
      puVar9 = &uStack_220;
    } while (lVar18 != -0x48);
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  puStack_248 = auStack_200;
  do {
    puVar9 = puVar9 + -3;
  } while (puVar9 != puStack_248);
  _objc_release(puVar10);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_1057dc190;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_270 = unaff_x26;
  puStack_268 = unaff_x25;
  puStack_260 = unaff_x24;
  puStack_258 = puVar14;
  puStack_250 = puVar9;
  puStack_240 = puVar2;
  puStack_238 = puVar10;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar11);
  if (puVar7 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar7[1];
    puVar1 = &UNK_10f2fb6c5;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_2c0,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_2a8,puVar2);
    puVar1 = &UNK_10f2fb6c5;
    if (iVar13 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_290,puVar1);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1108b3690,&uStack_2e0,puVar17);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar18 = 0;
    do {
      if ((&cStack_279)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar4 = &uStack_2e0;
    } while (lVar18 != -0x48);
  }
  puVar2 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    do {
      puVar4 = puVar4 + -3;
    } while (puVar4 != auStack_2c0);
    _objc_release(puVar11);
    puVar7 = puVar2;
    __Unwind_Resume();
    ppuVar8 = &puStack_310;
    pcStack_2e8 = FUN_1057dc3b0;
    puStack_308 = PTR_PTR_1126ea570;
    puStack_310 = puVar7;
    puStack_300 = puVar2;
    puStack_2f8 = puVar11;
    pppuStack_2f0 = &pppuStack_230;
    _objc_msgSendSuper2(&puStack_310,PTR_s_init_1125d9248);
    if (ppuVar8 != (undefined8 **)0x0) {
      puVar2 = ppuVar8;
      (*(code *)PTR_DAT_113403208)();
      ppuVar8[1] = puVar2;
    }
    return ppuVar8;
  }
  return puVar2;
}



/* Entry: 1057dbd88; end: 1057dbf6f;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined8 *
FUN_1057dbd88(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    puVar1 = &UNK_10f2fb6c5;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_1108b35f0;
    puVar5 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_160;
  pcStack_a8 = FUN_1057dbf70;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar5;
  uVar11 = uVar10;
  uVar12 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  iVar9 = (int)uVar11;
  if (puVar3 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar3[1];
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_140,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_128,puVar2);
    unaff_x24 = auStack_140;
    puVar1 = unaff_x26;
    if ((int)uVar10 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_110,puVar1);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar7 = (undefined8 *)&UNK_1108b3640;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar13 = 0;
    puVar8 = puVar4;
    do {
      if ((&cStack_f9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar13));
      }
      iVar9 = (int)param_5;
      lVar13 = lVar13 + -0x18;
      puVar2 = &uStack_160;
    } while (lVar13 != -0x48);
  }
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    puStack_188 = auStack_140;
    do {
      puVar2 = puVar2 + -3;
    } while (puVar2 != puStack_188);
    _objc_release(puVar5);
    puVar4 = puVar3;
    __Unwind_Resume();
    pcStack_168 = FUN_1057dc190;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1b0 = unaff_x26;
    puStack_1a8 = unaff_x25;
    puStack_1a0 = unaff_x24;
    uStack_198 = uVar10;
    puStack_190 = puVar2;
    puStack_180 = puVar3;
    puStack_178 = puVar5;
    ppuStack_170 = &puStack_b0;
    _objc_retain(puVar8);
    if (puVar4 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar4[1];
      puVar1 = &UNK_10f2fb6c5;
      if ((int)puVar7 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_200,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2fb6d0;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar2 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1e8,puVar2);
      puVar1 = &UNK_10f2fb6c5;
      if (iVar9 == 0) {
        puVar1 = &UNK_10f2fb6ca;
      }
      func_0x00010002b838(auStack_1d0,puVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108b3690,&uStack_220,uVar12);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar13 = 0;
      do {
        if ((&cStack_1b9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        puVar7 = &uStack_220;
      } while (lVar13 != -0x48);
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      do {
        puVar7 = puVar7 + -3;
      } while (puVar7 != auStack_200);
      _objc_release(puVar8);
      puVar5 = puVar2;
      __Unwind_Resume();
      ppuVar6 = &puStack_250;
      pcStack_228 = FUN_1057dc3b0;
      puStack_248 = PTR_PTR_1126ea570;
      puStack_250 = puVar5;
      puStack_240 = puVar2;
      puStack_238 = puVar8;
      pppuStack_230 = &ppuStack_170;
      _objc_msgSendSuper2(&puStack_250,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined8 **)0x0) {
        puVar2 = ppuVar6;
        (*(code *)PTR_DAT_113403208)();
        ppuVar6[1] = puVar2;
      }
      return ppuVar6;
    }
    return puVar2;
  }
  return puVar3;
}



/* Entry: 1057dbf70; end: 1057dc18f;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc168) */
/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined *
FUN_1057dbf70(long param_1,undefined8 *param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  puVar1 = param_3;
  uVar8 = param_4;
  uVar9 = param_5;
  _objc_retain(param_3);
  iVar7 = (int)uVar8;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb6ca;
    unaff_x26 = &UNK_10f2fb6c5;
    puVar1 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    unaff_x24 = auStack_a0;
    puVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar12 = (undefined8 *)&UNK_1108b3640;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    puVar1 = (undefined *)puVar6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      iVar7 = (int)param_5;
      lVar10 = lVar10 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)puStack_e8);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1057dc190;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  uStack_f8 = param_4;
  puStack_f0 = (undefined *)param_2;
  puStack_e0 = puVar2;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_10f2fb6c5;
    if ((int)puVar12 == 0) {
      puVar2 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_160,puVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_148,puVar2);
    puVar2 = &UNK_10f2fb6c5;
    if (iVar7 == 0) {
      puVar2 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108b3690,&uStack_180,uVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar10 = 0;
    do {
      if ((&cStack_119)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      puVar12 = &uStack_180;
    } while (lVar10 != -0x48);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    do {
      puVar12 = (undefined8 *)((long)puVar12 + -0x18);
    } while (puVar12 != (undefined8 *)auStack_160);
    _objc_release(puVar1);
    puVar3 = puVar2;
    __Unwind_Resume();
    ppuVar4 = &puStack_1b0;
    pcStack_188 = FUN_1057dc3b0;
    puStack_1a8 = PTR_PTR_1126ea570;
    puStack_1b0 = puVar3;
    puStack_1a0 = puVar2;
    puStack_198 = puVar1;
    ppuStack_190 = &puStack_d0;
    _objc_msgSendSuper2(&puStack_1b0,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined **)0x0) {
      puVar5 = (undefined1 *)ppuVar4;
      (*(code *)PTR_DAT_113403208)();
      *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
    }
    return (undefined *)ppuVar4;
  }
  return puVar2;
}



/* Entry: 1057dc190; end: 1057dc3af;  */

/* WARNING: Removing unreachable block (ram,0x0001057dc388) */

undefined *
FUN_1057dc190(long param_1,undefined8 *param_2,undefined *param_3,int param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f2fb6c5;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2fb6d0;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    puVar1 = &UNK_10f2fb6c5;
    if (param_4 == 0) {
      puVar1 = &UNK_10f2fb6ca;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108b3690,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar5 != -0x48);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    do {
      param_2 = (undefined8 *)((long)param_2 + -0x18);
    } while (param_2 != (undefined8 *)auStack_a0);
    _objc_release(param_3);
    puVar2 = puVar1;
    __Unwind_Resume();
    ppuVar3 = &puStack_f0;
    pcStack_c8 = FUN_1057dc3b0;
    puStack_e8 = PTR_PTR_1126ea570;
    puStack_f0 = puVar2;
    puStack_e0 = puVar1;
    puStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_f0,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      puVar4 = (undefined1 *)ppuVar3;
      (*(code *)PTR_DAT_113403208)();
      *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
    }
    return (undefined *)ppuVar3;
  }
  return puVar1;
}



/* Entry: 1057dc3b0; end: 1057dc423; -[SCGrapheneChatDisplayReadyTimersMetric2 init] */

undefined1 * FUN_1057dc3b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057dc424; end: 1057dc6db;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd154) */
/* WARNING: Removing unreachable block (ram,0x0001057dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001057dc8d4) */
/* WARNING: Removing unreachable block (ram,0x0001057dc6ac) */
/* WARNING: Removing unreachable block (ram,0x0001057dcaf4) */
/* WARNING: Removing unreachable block (ram,0x0001057dcf34) */
/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dc424(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *unaff_x26;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 auStack_600 [3];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [3];
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [3];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [3];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar2 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar11 = param_3;
  puVar5 = param_4;
  puVar4 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
    unaff_x26 = (undefined8 *)&UNK_10f2fb7af;
    puVar1 = (undefined8 *)&UNK_10f2fb7aa;
    if ((int)param_2 == 0) {
      puVar1 = unaff_x26;
    }
    func_0x00010002b838(auStack_e0,puVar1);
    puVar1 = (undefined8 *)&UNK_10f2fb7aa;
    if ((int)param_3 == 0) {
      puVar1 = unaff_x26;
    }
    func_0x00010002b838(auStack_c8,puVar1);
    param_3 = auStack_e0;
    puVar1 = (undefined8 *)&UNK_10f2fb7aa;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x26;
    }
    func_0x00010002b838(auStack_b0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      param_4 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_6);
      param_4 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_80,param_4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
    puVar1 = (undefined8 *)&UNK_1108b38a0;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    lVar18 = 0;
    param_2 = auStack_e0;
    puVar11 = puVar2;
    puVar5 = param_7;
    do {
      if ((&cStack_69)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x78);
  }
  _objc_release(param_6);
  puVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puStack_138 = auStack_e0;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puStack_138);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_1c0;
  pcStack_108 = FUN_1057dc6dc;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar6 = puVar11;
  puVar14 = puVar5;
  puVar7 = puVar4;
  puStack_150 = unaff_x26;
  puStack_148 = param_3;
  puStack_140 = param_4;
  puStack_130 = param_2;
  puStack_128 = puVar2;
  puStack_120 = param_6;
  puStack_118 = param_5;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  if (puVar3 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar3[1];
    param_3 = (undefined8 *)&UNK_10f2fb7af;
    unaff_x26 = (undefined8 *)&UNK_10f2fb7aa;
    puVar2 = unaff_x26;
    if ((int)puVar1 == 0) {
      puVar2 = param_3;
    }
    func_0x00010002b838(auStack_1a0,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_188,puVar1);
    param_4 = auStack_1a0;
    puVar1 = unaff_x26;
    if ((int)puVar5 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_170,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    puVar8 = (undefined8 *)&UNK_1108b38f0;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar18 = 0;
    puVar6 = puVar12;
    puVar14 = puVar4;
    do {
      if ((&cStack_159)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar1 = &uStack_1c0;
    } while (lVar18 != -0x48);
  }
  puVar4 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puStack_1e8 = auStack_1a0;
  do {
    puVar1 = puVar1 + -3;
  } while (puVar1 != puStack_1e8);
  _objc_release(puVar11);
  puVar3 = puVar4;
  __Unwind_Resume();
  puVar13 = &uStack_280;
  pcStack_1c8 = FUN_1057dc8fc;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar12 = puVar6;
  puVar16 = puVar14;
  puVar17 = puVar7;
  puStack_210 = unaff_x26;
  puStack_208 = param_3;
  puStack_200 = param_4;
  puStack_1f8 = puVar5;
  puStack_1f0 = puVar1;
  puStack_1e0 = puVar4;
  puStack_1d8 = puVar11;
  ppuStack_1d0 = &puStack_110;
  _objc_retain(puVar6);
  if (puVar3 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar3[1];
    param_3 = (undefined8 *)&UNK_10f2fb7af;
    unaff_x26 = (undefined8 *)&UNK_10f2fb7aa;
    puVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_260,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_248,puVar1);
    param_4 = auStack_260;
    puVar1 = unaff_x26;
    if ((int)puVar14 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_230,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_218,3);
    puVar2 = (undefined8 *)&UNK_1108b3940;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar18 = 0;
    puVar12 = puVar13;
    puVar16 = puVar7;
    do {
      if ((&cStack_219)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar8 = &uStack_280;
    } while (lVar18 != -0x48);
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  puStack_2a8 = auStack_260;
  do {
    puVar8 = puVar8 + -3;
  } while (puVar8 != puStack_2a8);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar13 = &uStack_340;
  pcStack_288 = FUN_1057dcb1c;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar4 = puVar12;
  puVar3 = puVar16;
  puVar7 = puVar17;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = param_3;
  puStack_2c0 = param_4;
  puStack_2b8 = puVar14;
  puStack_2b0 = puVar8;
  puStack_2a0 = puVar1;
  puStack_298 = puVar6;
  pppuStack_290 = &ppuStack_1d0;
  _objc_retain(puVar12);
  if (puVar5 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar5[1];
    param_3 = (undefined8 *)&UNK_10f2fb7af;
    unaff_x26 = (undefined8 *)&UNK_10f2fb7aa;
    puVar1 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_320,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar1 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_308,puVar1);
    param_4 = auStack_320;
    puVar1 = unaff_x26;
    if ((int)puVar16 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_2f0,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    puVar11 = (undefined8 *)&UNK_1108b3990;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar18 = 0;
    puVar4 = puVar13;
    puVar3 = puVar17;
    do {
      if ((&cStack_2d9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar2 = &uStack_340;
    } while (lVar18 != -0x48);
  }
  puVar1 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  puStack_368 = auStack_320;
  do {
    puVar2 = puVar2 + -3;
  } while (puVar2 != puStack_368);
  _objc_release(puVar12);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar13 = &uStack_400;
  pcStack_348 = FUN_1057dcd3c;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar11;
  puVar14 = puVar4;
  puVar8 = puVar3;
  puVar17 = puVar7;
  puStack_390 = unaff_x26;
  puStack_388 = param_3;
  puStack_380 = param_4;
  puStack_378 = puVar16;
  puStack_370 = puVar2;
  puStack_360 = puVar1;
  puStack_358 = puVar12;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(puVar4);
  if (puVar6 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar6[1];
    param_3 = (undefined8 *)&UNK_10f2fb7af;
    unaff_x26 = (undefined8 *)&UNK_10f2fb7aa;
    puVar1 = unaff_x26;
    if ((int)puVar11 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_3e0,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_3c8,puVar1);
    param_4 = auStack_3e0;
    puVar1 = unaff_x26;
    if ((int)puVar3 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_3b0,puVar1);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_398,3);
    puVar5 = (undefined8 *)&UNK_1108b39e0;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar18 = 0;
    puVar14 = puVar13;
    puVar8 = puVar7;
    do {
      if ((&cStack_399)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar11 = &uStack_400;
    } while (lVar18 != -0x48);
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  puStack_428 = auStack_3e0;
  do {
    puVar11 = puVar11 + -3;
  } while (puVar11 != puStack_428);
  _objc_release(puVar4);
  puVar7 = puVar1;
  __Unwind_Resume();
  puVar13 = &uStack_4c0;
  pcStack_408 = FUN_1057dcf5c;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar6 = puVar14;
  puVar12 = puVar8;
  puVar16 = puVar17;
  puStack_450 = unaff_x26;
  puStack_448 = param_3;
  puStack_440 = param_4;
  puStack_438 = puVar3;
  puStack_430 = puVar11;
  puStack_420 = puVar1;
  puStack_418 = puVar4;
  pppuStack_410 = &pppuStack_350;
  _objc_retain(puVar14);
  if (puVar7 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar7[1];
    param_3 = (undefined8 *)&UNK_10f2fb7af;
    unaff_x26 = (undefined8 *)&UNK_10f2fb7aa;
    puVar1 = unaff_x26;
    if ((int)puVar5 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_4a0,puVar1);
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar1 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_488,puVar1);
    param_4 = auStack_4a0;
    puVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      puVar1 = param_3;
    }
    func_0x00010002b838(auStack_470,puVar1);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_458,3);
    puVar2 = (undefined8 *)&UNK_1108b3a30;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    lVar18 = 0;
    puVar6 = puVar13;
    puVar12 = puVar17;
    do {
      if ((&cStack_459)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar5 = &uStack_4c0;
    } while (lVar18 != -0x48);
  }
  puVar1 = puVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  puStack_4e8 = auStack_4a0;
  do {
    puVar5 = puVar5 + -3;
  } while (puVar5 != puStack_4e8);
  _objc_release(puVar14);
  puVar3 = puVar1;
  __Unwind_Resume();
  iVar15 = (int)puVar12;
  pcStack_4c8 = FUN_1057dd17c;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar4 = puVar6;
  puStack_500 = param_4;
  puStack_4f8 = puVar8;
  puStack_4f0 = puVar5;
  puStack_4e0 = puVar1;
  puStack_4d8 = puVar14;
  pppuStack_4d0 = &pppuStack_410;
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      puVar8 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    param_4 = auStack_538;
    func_0x00010002b838(auStack_538,puVar8);
    puVar10 = &UNK_10f2fb7aa;
    if ((int)puVar6 == 0) {
      puVar10 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_520,puVar10);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
    puVar11 = (undefined8 *)&UNK_1108b3a80;
    puVar6 = &uStack_558;
    puVar4 = &uStack_558;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_540 = puVar6;
    func_0x00010007e5dc(&puStack_540);
    lVar18 = 0;
    puVar1 = auStack_538;
    do {
      if ((&cStack_509)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar18));
      }
      iVar15 = (int)puVar12;
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar3 = puVar5;
  __Unwind_Resume();
  pcStack_568 = FUN_1057dd364;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5b0 = unaff_x26;
  puStack_5a8 = param_3;
  puStack_5a0 = param_4;
  puStack_598 = puVar8;
  puStack_590 = puVar6;
  puStack_588 = puVar1;
  puStack_580 = puVar5;
  puStack_578 = puVar2;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(puVar4);
  if (puVar3 != (undefined8 *)0x0) {
    plVar19 = (long *)puVar3[1];
    puVar10 = &UNK_10f2fb7aa;
    if ((int)puVar11 == 0) {
      puVar10 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_600,puVar10);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_5e8,puVar1);
    puVar10 = &UNK_10f2fb7aa;
    if (iVar15 == 0) {
      puVar10 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_5d0,puVar10);
    uStack_620 = 0;
    uStack_618 = 0;
    uStack_610 = 0;
    func_0x00010007e1e8(&uStack_620,auStack_600,&lStack_5b8,3);
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1108b3ad0,&uStack_620,puVar16);
    puStack_608 = (undefined1 *)&uStack_620;
    func_0x00010007e5dc(&puStack_608);
    lVar18 = 0;
    do {
      if ((&cStack_5b9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      puVar11 = &uStack_620;
    } while (lVar18 != -0x48);
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      puVar11 = puVar11 + -3;
    } while (puVar11 != auStack_600);
    _objc_release(puVar4);
    __Unwind_Resume();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar9 = puVar1[4];
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080e80();
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 1057dc6dc; end: 1057dc8fb;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd154) */
/* WARNING: Removing unreachable block (ram,0x0001057dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001057dc8d4) */
/* WARNING: Removing unreachable block (ram,0x0001057dcaf4) */
/* WARNING: Removing unreachable block (ram,0x0001057dcf34) */
/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dc6dc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined *puStack_498;
  undefined8 *puStack_490;
  undefined1 *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined1 auStack_438 [24];
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined1 *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined1 *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar1 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_2;
  puVar20 = param_3;
  puVar4 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar4 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar4);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar17 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar17);
    unaff_x24 = auStack_a0;
    puVar4 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar4);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar17 = (undefined8 *)&UNK_1108b38f0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar20 = puVar1;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)puStack_e8);
  _objc_release(param_3);
  puVar19 = puVar1;
  __Unwind_Resume();
  puVar2 = &uStack_180;
  pcStack_c8 = FUN_1057dc8fc;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar17;
  puVar3 = puVar20;
  puVar8 = puVar4;
  puVar6 = puVar5;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined *)param_2;
  puStack_e0 = puVar1;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar20);
  if (puVar19 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar19[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar8 = unaff_x26;
    if ((int)puVar17 == 0) {
      puVar8 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar8);
    _objc_retain(puVar20);
    if (puVar20 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar20);
      puVar17 = puVar20;
      func_0x00010bdc3520(puVar20);
    }
    _objc_release(puVar20);
    func_0x00010002b838(auStack_148,puVar17);
    unaff_x24 = auStack_160;
    puVar8 = unaff_x26;
    if ((int)puVar4 == 0) {
      puVar8 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar8);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar18 = (undefined8 *)&UNK_1108b3940;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar3 = puVar2;
    puVar8 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar17 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  puVar1 = puVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar20);
  puStack_1a8 = auStack_160;
  do {
    puVar17 = (undefined8 *)((long)puVar17 + -0x18);
  } while (puVar17 != (undefined8 *)puStack_1a8);
  _objc_release(puVar20);
  puVar2 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_188 = FUN_1057dcb1c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = puVar18;
  puVar9 = puVar3;
  puVar5 = puVar8;
  puVar12 = puVar6;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar4;
  puStack_1b0 = (undefined *)puVar17;
  puStack_1a0 = puVar1;
  puStack_198 = puVar20;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar4 = unaff_x26;
    if ((int)puVar18 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_220,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar17 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_208,puVar17);
    unaff_x24 = auStack_220;
    puVar4 = unaff_x26;
    if ((int)puVar8 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_1f0,puVar4);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar19 = (undefined8 *)&UNK_1108b3990;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    puVar9 = puVar10;
    puVar5 = puVar6;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar18 = &uStack_240;
    } while (lVar14 != -0x48);
  }
  puVar17 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  puStack_268 = auStack_220;
  do {
    puVar18 = (undefined8 *)((long)puVar18 + -0x18);
  } while (puVar18 != (undefined8 *)puStack_268);
  _objc_release(puVar3);
  puVar1 = puVar17;
  __Unwind_Resume();
  puVar10 = &uStack_300;
  pcStack_248 = FUN_1057dcd3c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = puVar19;
  puVar2 = puVar9;
  puVar4 = puVar5;
  puVar6 = puVar12;
  puStack_290 = unaff_x26;
  puStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  puStack_270 = (undefined *)puVar18;
  puStack_260 = puVar17;
  puStack_258 = puVar3;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar9);
  if (puVar1 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar1[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar4 = unaff_x26;
    if ((int)puVar19 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_2e0,puVar4);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar17 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_2c8,puVar17);
    unaff_x24 = auStack_2e0;
    puVar4 = unaff_x26;
    if ((int)puVar5 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_2b0,puVar4);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    puVar20 = (undefined8 *)&UNK_1108b39e0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar14 = 0;
    puVar2 = puVar10;
    puVar4 = puVar12;
    do {
      if ((&cStack_299)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar19 = &uStack_300;
    } while (lVar14 != -0x48);
  }
  puVar17 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puStack_328 = auStack_2e0;
  do {
    puVar19 = (undefined8 *)((long)puVar19 + -0x18);
  } while (puVar19 != (undefined8 *)puStack_328);
  _objc_release(puVar9);
  puVar18 = puVar17;
  __Unwind_Resume();
  puVar3 = &uStack_3c0;
  pcStack_308 = FUN_1057dcf5c;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined *)puVar20;
  puVar1 = puVar2;
  puVar12 = puVar4;
  puVar13 = puVar6;
  puStack_350 = unaff_x26;
  puStack_348 = unaff_x25;
  puStack_340 = unaff_x24;
  puStack_338 = puVar5;
  puStack_330 = (undefined *)puVar19;
  puStack_320 = puVar17;
  puStack_318 = puVar9;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(puVar2);
  if (puVar18 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar18[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar5 = unaff_x26;
    if ((int)puVar20 == 0) {
      puVar5 = unaff_x25;
    }
    func_0x00010002b838(auStack_3a0,puVar5);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar17 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_388,puVar17);
    unaff_x24 = auStack_3a0;
    puVar5 = unaff_x26;
    if ((int)puVar4 == 0) {
      puVar5 = unaff_x25;
    }
    func_0x00010002b838(auStack_370,puVar5);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
    puVar8 = &UNK_1108b3a30;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar14 = 0;
    puVar1 = puVar3;
    puVar12 = puVar6;
    do {
      if ((&cStack_359)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar20 = &uStack_3c0;
    } while (lVar14 != -0x48);
  }
  puVar17 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    puStack_3e8 = auStack_3a0;
    do {
      puVar20 = (undefined8 *)((long)puVar20 + -0x18);
    } while (puVar20 != (undefined8 *)puStack_3e8);
    _objc_release(puVar2);
    puVar3 = puVar17;
    __Unwind_Resume();
    iVar11 = (int)puVar12;
    pcStack_3c8 = FUN_1057dd17c;
    lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar18 = (undefined8 *)puVar8;
    puVar19 = puVar1;
    puStack_400 = unaff_x24;
    puStack_3f8 = puVar4;
    puStack_3f0 = (undefined *)puVar20;
    puStack_3e0 = puVar17;
    puStack_3d8 = puVar2;
    pppuStack_3d0 = &pppuStack_310;
    _objc_retain(puVar8);
    puVar16 = (undefined1 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar4 = &UNK_10f2fb7b5;
      }
      else {
        puVar4 = puVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      unaff_x24 = auStack_438;
      func_0x00010002b838(auStack_438,puVar4);
      puVar5 = &UNK_10f2fb7aa;
      if ((int)puVar1 == 0) {
        puVar5 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_420,puVar5);
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
      puVar18 = (undefined8 *)&UNK_1108b3a80;
      puVar1 = &uStack_458;
      puVar19 = &uStack_458;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_440 = puVar1;
      func_0x00010007e5dc(&puStack_440);
      lVar14 = 0;
      puVar16 = auStack_438;
      do {
        if ((&cStack_409)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
        }
        iVar11 = (int)puVar12;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar5 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar6 = puVar5;
    __Unwind_Resume();
    pcStack_468 = FUN_1057dd364;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_4b0 = unaff_x26;
    puStack_4a8 = unaff_x25;
    puStack_4a0 = unaff_x24;
    puStack_498 = puVar4;
    puStack_490 = puVar1;
    puStack_488 = puVar16;
    puStack_480 = puVar5;
    puStack_478 = puVar8;
    pppuStack_470 = &pppuStack_3d0;
    _objc_retain(puVar19);
    if (puVar6 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar6 + 8);
      puVar4 = &UNK_10f2fb7aa;
      if ((int)puVar18 == 0) {
        puVar4 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_500,puVar4);
      _objc_retain(puVar19);
      if (puVar19 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)&UNK_10f2fb7b5;
      }
      else {
        _objc_retainAutorelease(puVar19);
        puVar17 = puVar19;
        func_0x00010bdc3520(puVar19);
      }
      _objc_release(puVar19);
      func_0x00010002b838(auStack_4e8,puVar17);
      puVar4 = &UNK_10f2fb7aa;
      if (iVar11 == 0) {
        puVar4 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_4d0,puVar4);
      uStack_520 = 0;
      uStack_518 = 0;
      uStack_510 = 0;
      func_0x00010007e1e8(&uStack_520,auStack_500,&lStack_4b8,3);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108b3ad0,&uStack_520,puVar13);
      puStack_508 = (undefined1 *)&uStack_520;
      func_0x00010007e5dc(&puStack_508);
      lVar14 = 0;
      do {
        if ((&cStack_4b9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        puVar18 = &uStack_520;
      } while (lVar14 != -0x48);
    }
    puVar17 = puVar19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
      ___stack_chk_fail();
      _objc_release(puVar19);
      do {
        puVar18 = (undefined8 *)((long)puVar18 + -0x18);
      } while (puVar18 != (undefined8 *)auStack_500);
      _objc_release(puVar19);
      __Unwind_Resume();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = puVar17[4];
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080e80();
      func_0x00010c0df6e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1057dc8fc; end: 1057dcb1b;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd154) */
/* WARNING: Removing unreachable block (ram,0x0001057dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001057dcaf4) */
/* WARNING: Removing unreachable block (ram,0x0001057dcf34) */
/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dc8fc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined1 *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined1 auStack_378 [24];
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined1 *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar20 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_2;
  puVar8 = param_3;
  puVar7 = param_4;
  puVar3 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar7 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar17 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar17);
    unaff_x24 = auStack_a0;
    puVar7 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar7);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar17 = (undefined8 *)&UNK_1108b3940;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar8 = puVar20;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  puVar20 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)puStack_e8);
  _objc_release(param_3);
  puVar19 = puVar20;
  __Unwind_Resume();
  puVar1 = &uStack_180;
  pcStack_c8 = FUN_1057dcb1c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar17;
  puVar2 = puVar8;
  puVar4 = puVar7;
  puVar5 = puVar3;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined *)param_2;
  puStack_e0 = puVar20;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar19 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar19[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar4 = unaff_x26;
    if ((int)puVar17 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar4);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar17 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_148,puVar17);
    unaff_x24 = auStack_160;
    puVar4 = unaff_x26;
    if ((int)puVar7 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar18 = (undefined8 *)&UNK_1108b3990;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar2 = puVar1;
    puVar4 = puVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar17 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  puVar20 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puStack_1a8 = auStack_160;
  do {
    puVar17 = (undefined8 *)((long)puVar17 + -0x18);
  } while (puVar17 != (undefined8 *)puStack_1a8);
  _objc_release(puVar8);
  puVar1 = puVar20;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_188 = FUN_1057dcd3c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = puVar18;
  puVar9 = puVar2;
  puVar3 = puVar4;
  puVar12 = puVar5;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar7;
  puStack_1b0 = (undefined *)puVar17;
  puStack_1a0 = puVar20;
  puStack_198 = puVar8;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar2);
  if (puVar1 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar1[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar7 = unaff_x26;
    if ((int)puVar18 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_220,puVar7);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar17 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_208,puVar17);
    unaff_x24 = auStack_220;
    puVar7 = unaff_x26;
    if ((int)puVar4 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_1f0,puVar7);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar19 = (undefined8 *)&UNK_1108b39e0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    puVar9 = puVar10;
    puVar3 = puVar5;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar18 = &uStack_240;
    } while (lVar14 != -0x48);
  }
  puVar17 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    puStack_268 = auStack_220;
    do {
      puVar18 = (undefined8 *)((long)puVar18 + -0x18);
    } while (puVar18 != (undefined8 *)puStack_268);
    _objc_release(puVar2);
    puVar20 = puVar17;
    __Unwind_Resume();
    puVar1 = &uStack_300;
    pcStack_248 = FUN_1057dcf5c;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = (undefined *)puVar19;
    puVar8 = puVar9;
    puVar5 = puVar3;
    puVar13 = puVar12;
    puStack_290 = unaff_x26;
    puStack_288 = unaff_x25;
    puStack_280 = unaff_x24;
    puStack_278 = puVar4;
    puStack_270 = (undefined *)puVar18;
    puStack_260 = puVar17;
    puStack_258 = puVar2;
    pppuStack_250 = &ppuStack_190;
    _objc_retain(puVar9);
    if (puVar20 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar20[1];
      unaff_x25 = &UNK_10f2fb7af;
      unaff_x26 = &UNK_10f2fb7aa;
      puVar7 = unaff_x26;
      if ((int)puVar19 == 0) {
        puVar7 = unaff_x25;
      }
      func_0x00010002b838(auStack_2e0,puVar7);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)&UNK_10f2fb7b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar17 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_2c8,puVar17);
      unaff_x24 = auStack_2e0;
      puVar7 = unaff_x26;
      if ((int)puVar3 == 0) {
        puVar7 = unaff_x25;
      }
      func_0x00010002b838(auStack_2b0,puVar7);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
      puVar7 = &UNK_1108b3a30;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar14 = 0;
      puVar8 = puVar1;
      puVar5 = puVar12;
      do {
        if ((&cStack_299)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        puVar19 = &uStack_300;
      } while (lVar14 != -0x48);
    }
    puVar17 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    puStack_328 = auStack_2e0;
    do {
      puVar19 = (undefined8 *)((long)puVar19 + -0x18);
    } while (puVar19 != (undefined8 *)puStack_328);
    _objc_release(puVar9);
    puVar2 = puVar17;
    __Unwind_Resume();
    iVar11 = (int)puVar5;
    pcStack_308 = FUN_1057dd17c;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar20 = (undefined8 *)puVar7;
    puVar18 = puVar8;
    puStack_340 = unaff_x24;
    puStack_338 = puVar3;
    puStack_330 = (undefined *)puVar19;
    puStack_320 = puVar17;
    puStack_318 = puVar9;
    pppuStack_310 = &pppuStack_250;
    _objc_retain(puVar7);
    puVar16 = (undefined1 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar2[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar3 = &UNK_10f2fb7b5;
      }
      else {
        puVar3 = puVar7;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_378;
      func_0x00010002b838(auStack_378,puVar3);
      puVar4 = &UNK_10f2fb7aa;
      if ((int)puVar8 == 0) {
        puVar4 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_360,puVar4);
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_388 = 0;
      func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
      puVar20 = (undefined8 *)&UNK_1108b3a80;
      puVar8 = &uStack_398;
      puVar18 = &uStack_398;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_380 = puVar8;
      func_0x00010007e5dc(&puStack_380);
      lVar14 = 0;
      puVar16 = auStack_378;
      do {
        if ((&cStack_349)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar14));
        }
        iVar11 = (int)puVar5;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar4 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar5 = puVar4;
      __Unwind_Resume();
      pcStack_3a8 = FUN_1057dd364;
      lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_3f0 = unaff_x26;
      puStack_3e8 = unaff_x25;
      puStack_3e0 = unaff_x24;
      puStack_3d8 = puVar3;
      puStack_3d0 = puVar8;
      puStack_3c8 = puVar16;
      puStack_3c0 = puVar4;
      puStack_3b8 = puVar7;
      pppuStack_3b0 = &pppuStack_310;
      _objc_retain(puVar18);
      if (puVar5 != (undefined *)0x0) {
        plVar15 = *(long **)(puVar5 + 8);
        puVar7 = &UNK_10f2fb7aa;
        if ((int)puVar20 == 0) {
          puVar7 = &UNK_10f2fb7af;
        }
        func_0x00010002b838(auStack_440,puVar7);
        _objc_retain(puVar18);
        if (puVar18 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)&UNK_10f2fb7b5;
        }
        else {
          _objc_retainAutorelease(puVar18);
          puVar17 = puVar18;
          func_0x00010bdc3520(puVar18);
        }
        _objc_release(puVar18);
        func_0x00010002b838(auStack_428,puVar17);
        puVar7 = &UNK_10f2fb7aa;
        if (iVar11 == 0) {
          puVar7 = &UNK_10f2fb7af;
        }
        func_0x00010002b838(auStack_410,puVar7);
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_3f8,3);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108b3ad0,&uStack_460,puVar13);
        puStack_448 = (undefined1 *)&uStack_460;
        func_0x00010007e5dc(&puStack_448);
        lVar14 = 0;
        do {
          if ((&cStack_3f9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          puVar20 = &uStack_460;
        } while (lVar14 != -0x48);
      }
      puVar17 = puVar18;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
        ___stack_chk_fail();
        _objc_release(puVar18);
        do {
          puVar20 = (undefined8 *)((long)puVar20 + -0x18);
        } while (puVar20 != (undefined8 *)auStack_440);
        _objc_release(puVar18);
        __Unwind_Resume();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar6 = puVar17[4];
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c080e80();
        func_0x00010c0df6e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1057dcb1c; end: 1057dcd3b;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd154) */
/* WARNING: Removing unreachable block (ram,0x0001057dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001057dcf34) */
/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dcb1c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 *puStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined1 *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined1 auStack_2b8 [24];
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar1 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_2;
  puVar19 = param_3;
  puVar5 = param_4;
  puVar8 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar5 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar5 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar5);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar17 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar17);
    unaff_x24 = auStack_a0;
    puVar5 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar5 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar5);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar17 = (undefined8 *)&UNK_1108b3990;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar19 = puVar1;
    puVar5 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)puStack_e8);
  _objc_release(param_3);
  puVar2 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_180;
  pcStack_c8 = FUN_1057dcd3c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar17;
  puVar9 = puVar19;
  puVar4 = puVar5;
  puVar6 = puVar8;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined *)param_2;
  puStack_e0 = puVar1;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar19);
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar4 = unaff_x26;
    if ((int)puVar17 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar4);
    _objc_retain(puVar19);
    if (puVar19 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar19);
      puVar17 = puVar19;
      func_0x00010bdc3520(puVar19);
    }
    _objc_release(puVar19);
    func_0x00010002b838(auStack_148,puVar17);
    unaff_x24 = auStack_160;
    puVar4 = unaff_x26;
    if ((int)puVar5 == 0) {
      puVar4 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar18 = (undefined8 *)&UNK_1108b39e0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar9 = puVar3;
    puVar4 = puVar8;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar17 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  puVar1 = puVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar19);
    puStack_1a8 = auStack_160;
    do {
      puVar17 = (undefined8 *)((long)puVar17 + -0x18);
    } while (puVar17 != (undefined8 *)puStack_1a8);
    _objc_release(puVar19);
    puVar3 = puVar1;
    __Unwind_Resume();
    puVar10 = &uStack_240;
    pcStack_188 = FUN_1057dcf5c;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = (undefined *)puVar18;
    puVar2 = puVar9;
    puVar12 = puVar4;
    puVar13 = puVar6;
    puStack_1d0 = unaff_x26;
    puStack_1c8 = unaff_x25;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar5;
    puStack_1b0 = (undefined *)puVar17;
    puStack_1a0 = puVar1;
    puStack_198 = puVar19;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar9);
    if (puVar3 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar3[1];
      unaff_x25 = &UNK_10f2fb7af;
      unaff_x26 = &UNK_10f2fb7aa;
      puVar5 = unaff_x26;
      if ((int)puVar18 == 0) {
        puVar5 = unaff_x25;
      }
      func_0x00010002b838(auStack_220,puVar5);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)&UNK_10f2fb7b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar17 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_208,puVar17);
      unaff_x24 = auStack_220;
      puVar5 = unaff_x26;
      if ((int)puVar4 == 0) {
        puVar5 = unaff_x25;
      }
      func_0x00010002b838(auStack_1f0,puVar5);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar8 = &UNK_1108b3a30;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar14 = 0;
      puVar2 = puVar10;
      puVar12 = puVar6;
      do {
        if ((&cStack_1d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        puVar18 = &uStack_240;
      } while (lVar14 != -0x48);
    }
    puVar17 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    puStack_268 = auStack_220;
    do {
      puVar18 = (undefined8 *)((long)puVar18 + -0x18);
    } while (puVar18 != (undefined8 *)puStack_268);
    _objc_release(puVar9);
    puVar3 = puVar17;
    __Unwind_Resume();
    iVar11 = (int)puVar12;
    pcStack_248 = FUN_1057dd17c;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar19 = (undefined8 *)puVar8;
    puVar1 = puVar2;
    puStack_280 = unaff_x24;
    puStack_278 = puVar4;
    puStack_270 = (undefined *)puVar18;
    puStack_260 = puVar17;
    puStack_258 = puVar9;
    pppuStack_250 = &ppuStack_190;
    _objc_retain(puVar8);
    puVar16 = (undefined1 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar4 = &UNK_10f2fb7b5;
      }
      else {
        puVar4 = puVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      unaff_x24 = auStack_2b8;
      func_0x00010002b838(auStack_2b8,puVar4);
      puVar5 = &UNK_10f2fb7aa;
      if ((int)puVar2 == 0) {
        puVar5 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_2a0,puVar5);
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
      puVar19 = (undefined8 *)&UNK_1108b3a80;
      puVar2 = &uStack_2d8;
      puVar1 = &uStack_2d8;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_2c0 = puVar2;
      func_0x00010007e5dc(&puStack_2c0);
      lVar14 = 0;
      puVar16 = auStack_2b8;
      do {
        if ((&cStack_289)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
        }
        iVar11 = (int)puVar12;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar5 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar6 = puVar5;
      __Unwind_Resume();
      pcStack_2e8 = FUN_1057dd364;
      lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_330 = unaff_x26;
      puStack_328 = unaff_x25;
      puStack_320 = unaff_x24;
      puStack_318 = puVar4;
      puStack_310 = puVar2;
      puStack_308 = puVar16;
      puStack_300 = puVar5;
      puStack_2f8 = puVar8;
      pppuStack_2f0 = &pppuStack_250;
      _objc_retain(puVar1);
      if (puVar6 != (undefined *)0x0) {
        plVar15 = *(long **)(puVar6 + 8);
        puVar5 = &UNK_10f2fb7aa;
        if ((int)puVar19 == 0) {
          puVar5 = &UNK_10f2fb7af;
        }
        func_0x00010002b838(auStack_380,puVar5);
        _objc_retain(puVar1);
        if (puVar1 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)&UNK_10f2fb7b5;
        }
        else {
          _objc_retainAutorelease(puVar1);
          puVar17 = puVar1;
          func_0x00010bdc3520(puVar1);
        }
        _objc_release(puVar1);
        func_0x00010002b838(auStack_368,puVar17);
        puVar5 = &UNK_10f2fb7aa;
        if (iVar11 == 0) {
          puVar5 = &UNK_10f2fb7af;
        }
        func_0x00010002b838(auStack_350,puVar5);
        uStack_3a0 = 0;
        uStack_398 = 0;
        uStack_390 = 0;
        func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_338,3);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108b3ad0,&uStack_3a0,puVar13);
        puStack_388 = (undefined1 *)&uStack_3a0;
        func_0x00010007e5dc(&puStack_388);
        lVar14 = 0;
        do {
          if ((&cStack_339)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          puVar19 = &uStack_3a0;
        } while (lVar14 != -0x48);
      }
      puVar17 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
        ___stack_chk_fail();
        _objc_release(puVar1);
        do {
          puVar19 = (undefined8 *)((long)puVar19 + -0x18);
        } while (puVar19 != (undefined8 *)auStack_380);
        _objc_release(puVar1);
        __Unwind_Resume();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = puVar17[4];
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c080e80();
        func_0x00010c0df6e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1057dcd3c; end: 1057dcf5b;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd154) */
/* WARNING: Removing unreachable block (ram,0x0001057dcf34) */
/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dcd3c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined1 auStack_1f8 [24];
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar1 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_2;
  puVar8 = param_3;
  puVar3 = param_4;
  puVar4 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar3 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar3 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar16 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar16);
    unaff_x24 = auStack_a0;
    puVar3 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar3 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar16 = (undefined8 *)&UNK_1108b39e0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    puVar8 = puVar1;
    puVar3 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)puStack_e8);
  _objc_release(param_3);
  puVar17 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_c8 = FUN_1057dcf5c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined *)puVar16;
  puVar9 = puVar8;
  puVar5 = puVar3;
  puVar12 = puVar4;
  puStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined *)param_2;
  puStack_e0 = puVar1;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar17 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar17[1];
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar7 = unaff_x26;
    if ((int)puVar16 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_160,puVar7);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar16 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_148,puVar16);
    unaff_x24 = auStack_160;
    puVar7 = unaff_x26;
    if ((int)puVar3 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_130,puVar7);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar7 = &UNK_1108b3a30;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    puVar9 = puVar10;
    puVar5 = puVar4;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      puVar16 = &uStack_180;
    } while (lVar13 != -0x48);
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    puStack_1a8 = auStack_160;
    do {
      puVar16 = (undefined8 *)((long)puVar16 + -0x18);
    } while (puVar16 != (undefined8 *)puStack_1a8);
    _objc_release(puVar8);
    puVar2 = puVar1;
    __Unwind_Resume();
    iVar11 = (int)puVar5;
    pcStack_188 = FUN_1057dd17c;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = (undefined8 *)puVar7;
    puVar10 = puVar9;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar3;
    puStack_1b0 = (undefined *)puVar16;
    puStack_1a0 = puVar1;
    puStack_198 = puVar8;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar7);
    puVar15 = (undefined1 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar2[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar3 = &UNK_10f2fb7b5;
      }
      else {
        puVar3 = puVar7;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_1f8;
      func_0x00010002b838(auStack_1f8,puVar3);
      puVar4 = &UNK_10f2fb7aa;
      if ((int)puVar9 == 0) {
        puVar4 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_1e0,puVar4);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
      puVar17 = (undefined8 *)&UNK_1108b3a80;
      puVar9 = &uStack_218;
      puVar10 = &uStack_218;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_200 = puVar9;
      func_0x00010007e5dc(&puStack_200);
      lVar13 = 0;
      puVar15 = auStack_1f8;
      do {
        if ((&cStack_1c9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
        }
        iVar11 = (int)puVar5;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    puVar4 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar5 = puVar4;
      __Unwind_Resume();
      pcStack_228 = FUN_1057dd364;
      lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_270 = unaff_x26;
      puStack_268 = unaff_x25;
      puStack_260 = unaff_x24;
      puStack_258 = puVar3;
      puStack_250 = puVar9;
      puStack_248 = puVar15;
      puStack_240 = puVar4;
      puStack_238 = puVar7;
      pppuStack_230 = &ppuStack_190;
      _objc_retain(puVar10);
      if (puVar5 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar5 + 8);
        puVar3 = &UNK_10f2fb7aa;
        if ((int)puVar17 == 0) {
          puVar3 = &UNK_10f2fb7af;
        }
        func_0x00010002b838(auStack_2c0,puVar3);
        _objc_retain(puVar10);
        if (puVar10 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)&UNK_10f2fb7b5;
        }
        else {
          _objc_retainAutorelease(puVar10);
          puVar16 = puVar10;
          func_0x00010bdc3520(puVar10);
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_2a8,puVar16);
        puVar3 = &UNK_10f2fb7aa;
        if (iVar11 == 0) {
          puVar3 = &UNK_10f2fb7af;
        }
        func_0x00010002b838(auStack_290,puVar3);
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108b3ad0,&uStack_2e0,puVar12);
        puStack_2c8 = (undefined1 *)&uStack_2e0;
        func_0x00010007e5dc(&puStack_2c8);
        lVar13 = 0;
        do {
          if ((&cStack_279)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
          puVar17 = &uStack_2e0;
        } while (lVar13 != -0x48);
      }
      puVar16 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
        ___stack_chk_fail();
        _objc_release(puVar10);
        do {
          puVar17 = (undefined8 *)((long)puVar17 + -0x18);
        } while (puVar17 != (undefined8 *)auStack_2c0);
        _objc_release(puVar10);
        __Unwind_Resume();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar6 = puVar16[4];
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c080e80();
        func_0x00010c0df6e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1057dcf5c; end: 1057dd17b;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd154) */
/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dcf5c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined *)param_2;
  puVar1 = param_3;
  puVar4 = param_4;
  puVar10 = param_5;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    unaff_x25 = &UNK_10f2fb7af;
    unaff_x26 = &UNK_10f2fb7aa;
    puVar7 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_a0,puVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    unaff_x24 = auStack_a0;
    puVar7 = unaff_x26;
    if ((int)param_4 == 0) {
      puVar7 = unaff_x25;
    }
    func_0x00010002b838(auStack_70,puVar7);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar7 = &UNK_1108b3a30;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar1 = puVar2;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_e8 = auStack_a0;
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)puStack_e8);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  iVar9 = (int)puVar4;
  pcStack_c8 = FUN_1057dd17c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = (undefined8 *)puVar7;
  puVar8 = puVar1;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined *)param_2;
  puStack_e0 = puVar2;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar13 = (undefined1 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar12 = (long *)puVar3[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      param_4 = &UNK_10f2fb7b5;
    }
    else {
      param_4 = puVar7;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,param_4);
    puVar5 = &UNK_10f2fb7aa;
    if ((int)puVar1 == 0) {
      puVar5 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar14 = (undefined8 *)&UNK_1108b3a80;
    puVar1 = &uStack_158;
    puVar8 = &uStack_158;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_140 = puVar1;
    func_0x00010007e5dc(&puStack_140);
    lVar11 = 0;
    puVar13 = auStack_138;
    do {
      if ((&cStack_109)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
      }
      iVar9 = (int)puVar4;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  puVar4 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar5 = puVar4;
    __Unwind_Resume();
    pcStack_168 = FUN_1057dd364;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1b0 = unaff_x26;
    puStack_1a8 = unaff_x25;
    puStack_1a0 = unaff_x24;
    puStack_198 = param_4;
    puStack_190 = puVar1;
    puStack_188 = puVar13;
    puStack_180 = puVar4;
    puStack_178 = puVar7;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar8);
    if (puVar5 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar5 + 8);
      puVar7 = &UNK_10f2fb7aa;
      if ((int)puVar14 == 0) {
        puVar7 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_200,puVar7);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f2fb7b5;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1e8,puVar1);
      puVar7 = &UNK_10f2fb7aa;
      if (iVar9 == 0) {
        puVar7 = &UNK_10f2fb7af;
      }
      func_0x00010002b838(auStack_1d0,puVar7);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b3ad0,&uStack_220,puVar10);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar11 = 0;
      do {
        if ((&cStack_1b9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        puVar14 = &uStack_220;
      } while (lVar11 != -0x48);
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      do {
        puVar14 = (undefined8 *)((long)puVar14 + -0x18);
      } while (puVar14 != (undefined8 *)auStack_200);
      _objc_release(puVar8);
      __Unwind_Resume();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar6 = puVar1[4];
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080e80();
      func_0x00010c0df6e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1057dd17c; end: 1057dd363;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dd17c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  iVar5 = (int)param_4;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2fb7b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    puVar1 = &UNK_10f2fb7aa;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar8 = (undefined8 *)&UNK_1108b3a80;
    puVar4 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      iVar5 = (int)param_4;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  if (puVar1 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar1 + 8);
    puVar1 = &UNK_10f2fb7aa;
    if ((int)puVar8 == 0) {
      puVar1 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_140,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar8 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_128,puVar8);
    puVar1 = &UNK_10f2fb7aa;
    if (iVar5 == 0) {
      puVar1 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_110,puVar1);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108b3ad0,&uStack_160,param_5);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar6 = 0;
    do {
      if ((&cStack_f9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      puVar8 = &uStack_160;
    } while (lVar6 != -0x48);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      puVar8 = (undefined8 *)((long)puVar8 + -0x18);
    } while (puVar8 != (undefined8 *)auStack_140);
    _objc_release(puVar4);
    __Unwind_Resume();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = puVar2[4];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080e80();
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1057dd364; end: 1057dd583;  */

/* WARNING: Removing unreachable block (ram,0x0001057dd55c) */

void FUN_1057dd364(long param_1,undefined8 *param_2,undefined *param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f2fb7aa;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2fb7b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    puVar1 = &UNK_10f2fb7aa;
    if (param_4 == 0) {
      puVar1 = &UNK_10f2fb7af;
    }
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108b3ad0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar4 != -0x48);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    do {
      param_2 = (undefined8 *)((long)param_2 + -0x18);
    } while (param_2 != (undefined8 *)auStack_a0);
    _objc_release(param_3);
    __Unwind_Resume();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080e80();
    func_0x00010c0df6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1057dd584; end: 1057dd613;  */

void FUN_1057dd584(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c080e80();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057dd614; end: 1057dd62b; -[SCChatEligibilityProvider isCurrentUserNonFriendMessagingEligible] */

uint FUN_1057dd614(uint param_1)

{
  func_0x00010bf60980();
  return param_1 ^ 1;
}



/* Entry: 1057dd62c; end: 1057dd693; -[SCChatEligibilityProvider isSnapchatterContactBookMessagingEligible:] */

bool FUN_1057dd62c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c07ee60(param_1,param_2,param_3);
  if ((int)param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf4a3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1057dd694; end: 1057dd77b; -[SCChatEligibilityProvider _setupProfileIdObserver] */

void FUN_1057dd694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c116a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057dd77c; end: 1057dd7c3;  */

void FUN_1057dd77c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4d20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057dd7c4; end: 1057dd847; -[SCChatEligibilityProvider _updateWithSnapProfileId:] */

void FUN_1057dd7c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c187f20(param_1,param_2,0);
    _os_unfair_lock_lock(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x38) = 0;
    _os_unfair_lock_unlock(param_1 + 0x48);
  }
  else {
    func_0x00010c187f20(param_1,param_2,1);
    func_0x00010be22b40(param_1,param_2,param_3);
  }
  func_0x00010bdcc780(param_1,param_2,&PTR____CFConstantStringClassReference_110e03ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057dd848; end: 1057dd9fb; -[SCChatEligibilityProvider _getSnapProStatusWithProfileId:] */

void FUN_1057dd848(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **unaff_x25;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c1176c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1057dd9fc;
    puStack_80 = &UNK_110856f50;
    unaff_x25 = &puStack_98;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70,param_2);
    _objc_retain(param_3);
    uVar4 = uVar5;
    lStack_78 = param_3;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1057ddb00;
  puStack_f0 = &UNK_110842c58;
  _objc_copyWeak(auStack_e8,param_3 + 0x28);
  _objc_copyWeak(auStack_110,param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar5);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_2);
  return;
}



/* Entry: 1057dd9fc; end: 1057ddaff;  */

void FUN_1057dd9fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057ddb00;
  puStack_50 = &UNK_110842c58;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1057ddb00; end: 1057ddb77;  */

void FUN_1057ddb00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c078f60(uVar1);
  func_0x00010be88680(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ddb78; end: 1057ddb7b;  */

void FUN_1057ddb78(void)

{
  return;
}



/* Entry: 1057ddb7c; end: 1057ddbdb; -[SCChatEligibilityProvider _refreshIsSnapProOfficial:] */

void FUN_1057ddb7c(long param_1,undefined8 param_2,uint param_3)

{
  _os_unfair_lock_lock(param_1 + 0x48);
  if (*(byte *)(param_1 + 0x38) != param_3) {
    *(char *)(param_1 + 0x38) = (char)param_3;
    func_0x00010bdcc780(param_1,param_2,&PTR____CFConstantStringClassReference_110e03af8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x48);
  return;
}



/* Entry: 1057ddbdc; end: 1057ddbe7; -[SCChatEligibilityProvider currentUserIsSnapPro] */

byte FUN_1057ddbdc(long param_1)

{
  return *(byte *)(param_1 + 0x4c) & 1;
}



/* Entry: 1057ddbe8; end: 1057ddbef; -[SCChatEligibilityProvider setCurrentUserIsSnapPro:] */

void FUN_1057ddbe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4c) = param_3;
  return;
}



/* Entry: 1057ddbf0; end: 1057ddbfb; -[SCChatEligibilityProvider hasSyncedFriends] */

byte FUN_1057ddbf0(long param_1)

{
  return *(byte *)(param_1 + 0x4d) & 1;
}



/* Entry: 1057ddbfc; end: 1057ddc97; -[SCChatEligibilityProvider .cxx_destruct] */

void FUN_1057ddbfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1057ddc98; end: 1057ddcff; -[SCChatEligibilityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ddc98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729e48);
  _objc_destroyWeak(param_1 + _DAT_112729e44);
  _objc_destroyWeak(param_1 + _DAT_112729e40);
  _objc_destroyWeak(param_1 + _DAT_112729e3c);
  _objc_destroyWeak(param_1 + _DAT_112729e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729e34);
  return;
}



/* Entry: 1057ddd00; end: 1057ddd73; -[SCComposerChatEligibilityProvider initWithChatEligibilityProvider:] */

undefined1 * FUN_1057ddd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea580;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057ddd74; end: 1057dddcf; -[SCComposerChatEligibilityProvider isCurrentUserNonFriendMessagingEligibleWithCallback:] */

void FUN_1057ddd74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c06fd80();
  (**(code **)(param_3 + 0x10))(param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057dddd0; end: 1057dddd7; -[SCComposerChatEligibilityProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1057dddd0(void)

{
  return 0;
}



/* Entry: 1057dddd8; end: 1057ddde3; -[SCComposerChatEligibilityProvider pushToValdiMarshaller:] */

undefined8 FUN_1057dddd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df470;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b048e10();
  return param_3;
}



/* Entry: 1057ddde4; end: 1057dddef; -[SCComposerChatEligibilityProvider .cxx_destruct] */

void FUN_1057ddde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057dddf0; end: 1057ddebb; -[SCChatTooltipsServiceImpl initWithUserSegmentsProvider:featureSettingsService:userPreferences:] */

undefined1 *
FUN_1057dddf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea588;
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



/* Entry: 1057ddebc; end: 1057ddf37; -[SCChatTooltipsServiceImpl shouldDisplayChatHeaderLocationContextTooltip] */

uint FUN_1057ddebc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf36760();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf36780();
  FUN_1057ddf38((double)lVar1);
  _objc_release(lVar3);
  return (uint)(lVar2 < 2) & ((uint)lVar1 ^ 1);
}



/* Entry: 1057ddf38; end: 1057ddf8f;  */

undefined * FUN_1057ddf38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x1;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c083d40(puVar1,param_2,1);
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1057ddf90; end: 1057de027; -[SCChatTooltipsServiceImpl incrementChatHeaderLocationContextTooltipSeenCount] */

void FUN_1057ddf90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf36760();
  func_0x00010c17b520(lVar1,param_2,lVar2 + 1);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b540();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1057de028; end: 1057de0b7; -[SCChatTooltipsServiceImpl maximizeChatHeaderLocationContextTooltipSeenCount] */

void FUN_1057de028(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b520();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b540();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1057de0b8; end: 1057de283; -[SCChatTooltipsServiceImpl incrementFlashbackHintViewedCountForConversation:] */

void FUN_1057de0b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1057de268;
  puVar1 = *(undefined **)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf517a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar4;
  func_0x00010c0e00e0(puVar4,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined *)0x0) || (puVar3 = puVar2, func_0x00010c29eba0(), 0 < (long)puVar3)) {
    puVar3 = puVar2;
    func_0x00010c2709c0();
    FUN_1057ddf38();
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR_PTR_1126be868;
      _objc_alloc(PTR_PTR_1126be868);
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c052a40(puVar3,param_3,1);
      _objc_release(puVar1);
      goto LAB_1057de208;
    }
  }
  else {
    puVar3 = PTR_PTR_1126be868;
    _objc_alloc(PTR_PTR_1126be868);
    func_0x00010c2709c0(puVar2);
    puVar1 = puVar2;
    func_0x00010c29eba0(puVar2);
    func_0x00010c052a40(param_1,puVar3,param_3,puVar1 + 1);
LAB_1057de208:
    func_0x00010c1d0640(puVar4,param_3,puVar3,param_4);
    puVar1 = puVar4;
    func_0x00010bf51e00(puVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183e80();
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
LAB_1057de268:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057de284; end: 1057de33b; -[SCChatTooltipsServiceImpl shouldDisplayFlashbackHintForConversation:] */

uint FUN_1057de284(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf517a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = lVar3;
    func_0x00010c2709c0(lVar3);
    uVar1 = (uint)lVar2;
    FUN_1057ddf38();
    uVar1 = uVar1 ^ 1;
    lVar2 = lVar3;
    func_0x00010c29eba0();
    if (lVar2 < 1) {
      uVar1 = 1;
    }
  }
  _objc_release(lVar3);
  return uVar1;
}



/* Entry: 1057de33c; end: 1057de377; -[SCChatTooltipsServiceImpl .cxx_destruct] */

void FUN_1057de33c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057de378; end: 1057de467; -[SCChatTooltipsServiceProvider provide] */

void FUN_1057de378(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beade20(param_1);
  puVar2 = PTR_PTR_1126be870;
  _objc_alloc(PTR_PTR_1126be870);
  func_0x00010c054180();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057de468; end: 1057de4a7;  */

void FUN_1057de468(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bddd180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057de4a8; end: 1057de5bb; -[SCChatTooltipsServiceProvider _chatTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057de4a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126be878;
  _objc_alloc(PTR_PTR_1126be878);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112729e68;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c293640(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1057de5bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112729e6c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010c1067a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cde0(puVar1,param_2,lVar2,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057de5bc; end: 1057de5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057de5bc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112729e64);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057de5e0; end: 1057de62b; -[SCChatTooltipsServiceProvider _setupLocalTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057de5e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729e5c);
  *(undefined8 *)(param_1 + _DAT_112729e5c) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057de62c; end: 1057de6d7; -[SCChatTooltipsServiceProvider _clearLocationContextTooltipSettings] */

void FUN_1057de62c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1057de5bc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  func_0x00010c17b520(uVar2,param_3,0);
  func_0x00010c17b540(uVar2,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057de6d8; end: 1057de737; -[SCChatTooltipsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057de6d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729e6c);
  _objc_destroyWeak(param_1 + _DAT_112729e68);
  _objc_destroyWeak(param_1 + _DAT_112729e64);
  _objc_destroyWeak(param_1 + _DAT_112729e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729e5c,0);
  return;
}



/* Entry: 1057de738; end: 1057de743; -[SCFeatureSettingsService hasChatBackButtonHasMovedTooltipSeenCount] */

void FUN_1057de738(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e03b58);
  return;
}



/* Entry: 1057de744; end: 1057de74f; -[SCFeatureSettingsService chatBackButtonHasMovedTooltipSeenCountServerParam] */

undefined ** FUN_1057de744(void)

{
  return &PTR____CFConstantStringClassReference_110e03b58;
}



/* Entry: 1057de750; end: 1057de75f; -[SCFeatureSettingsService setChatBackButtonHasMovedTooltipSeenCount:] */

void FUN_1057de750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e03b58,param_3);
  return;
}



/* Entry: 1057de760; end: 1057de767; -[SCFeatureSettingsService CHAT_BACK_BUTTON_HAS_MOVED_TOOLTIP_SEEN_COUNT_client_value:] */

void FUN_1057de760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1057de768; end: 1057de76f; -[SCFeatureSettingsService CHAT_BACK_BUTTON_HAS_MOVED_TOOLTIP_SEEN_COUNT_server_value:] */

void FUN_1057de768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1057de770; end: 1057de77f; -[SCFeatureSettingsService chatBackButtonHasMovedTooltipSeenCount] */

void FUN_1057de770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e03b58,0);
  return;
}


