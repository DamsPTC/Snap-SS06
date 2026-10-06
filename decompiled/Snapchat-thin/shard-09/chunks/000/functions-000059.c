/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068f34f8; end: 1068f3683;  */

void FUN_1068f34f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1068f3684; end: 1068f37cf; -[SCChatMediaRequestManager _boostDownloadRequestForHandler:downloableItem:] */

void FUN_1068f3684(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cedc8;
  _objc_opt_class(PTR_PTR_1126cedc8);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar2 = PTR_PTR_1126cedc8;
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2ee0();
    _objc_release(uVar4);
    uVar5 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec220();
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2ee0();
    _objc_release(uVar4);
    func_0x00010bf1f6a0(uVar5);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f37d0; end: 1068f37db; -[SCChatMediaRequestManager _startDownloadHandler:downloableItem:] */

void FUN_1068f37d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebfd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__startDownloadHandler_downloable_11258d8e8,param_3,param_4,0,0);
  return;
}



/* Entry: 1068f37dc; end: 1068f388b; -[SCChatMediaRequestManager _removeDownloadableItem:] */

void FUN_1068f37dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110e648d8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068f388c; end: 1068f391f; -[SCChatMediaRequestManager _isDownloadingForMediaId:] */

bool FUN_1068f388c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0();
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 1068f3920; end: 1068f3a4b; -[SCChatMediaRequestManager _insertDownloadableItem:] */

void FUN_1068f3920(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ee0(uVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e64918);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be3fc40(param_1,param_2,uVar2);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2ee0(uVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e64938);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f3a4c; end: 1068f3b7f; -[SCChatMediaRequestManager _insertDownloadCompletionHandler:failureHandler:mediaId:] */

void FUN_1068f3a4c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0(puVar1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_5);
    }
    lVar2 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  if (param_4 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x18);
    func_0x00010c0e00e0(puVar1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_5);
    }
    lVar2 = param_4;
    _objc_retainBlock(param_4);
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f3b80; end: 1068f3cdf; -[SCChatMediaRequestManager _dispatchCompletionHandlersWithSuccess:mediaId:] */

void FUN_1068f3b80(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar3 = 0x10;
  if (param_3 == 0) {
    lVar3 = 0x18;
  }
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))();
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x50,0);
  _objc_storeStrong(param_4 + 0x48,0);
  _objc_storeStrong(param_4 + 0x40,0);
  _objc_storeStrong(param_4 + 0x38,0);
  _objc_storeStrong(param_4 + 0x30,0);
  _objc_storeStrong(param_4 + 0x28,0);
  _objc_storeStrong(param_4 + 0x20,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 1068f3ce0; end: 1068f3d6f; -[SCChatMediaRequestManager .cxx_destruct] */

void FUN_1068f3ce0(long param_1)

{
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



/* Entry: 1068f3d70; end: 1068f3ec7; -[SCChatMediaStateManager updateAllMessagesForMediaId:messageId:conversationId:messageBodyType:mediaLoadState:] */

void FUN_1068f3d70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_68 = param_6;
  uStack_60 = param_7;
  func_0x00010c124f60(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f3ec8; end: 1068f3f23;  */

void FUN_1068f3ec8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f3f24; end: 1068f416b; -[SCChatMediaStateManager _updateAllMessagesForMediaId:messageId:conversationId:messageBodyType:mediaLoadState:conversationAndMessageIdentifiers:] */

void FUN_1068f3f24(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_6;
  uVar10 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_8);
  puVar7 = &uStack_130;
  puVar5 = auStack_f0;
  uVar8 = 0x10;
  lVar2 = param_8;
  func_0x00010bf52a60(param_8,param_2,puVar7,puVar5,0x10);
  if (lVar2 == 0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)0x0;
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_8);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        uVar8 = uVar11;
        func_0x00010c0cb5e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar11;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        if (param_6 == 0x10) {
          lVar4 = param_1 + 8;
          _objc_loadWeakRetained();
          func_0x00010c287a20();
          _objc_release(lVar4);
        }
        if (((ulong)puVar14 & 1) == 0) {
          puVar5 = param_4;
          func_0x00010c0720c0(param_4,param_2,uVar8);
          if ((int)puVar5 == 0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            puVar14 = param_5;
            func_0x00010c0720c0(param_5,param_2,uVar3);
          }
        }
        else {
          puVar14 = (undefined8 *)0x1;
        }
        func_0x00010befa120(puVar1,param_2,uVar11);
        _objc_release(uVar3);
        _objc_release(uVar8);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar7 = &uStack_130;
      puVar5 = auStack_f0;
      uVar8 = 0x10;
      lVar2 = param_8;
      func_0x00010bf52a60(param_8,param_2,puVar7,puVar5,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_8);
  if ((param_6 == 0x10) && (((ulong)puVar14 & 1) == 0)) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    puVar7 = param_5;
    puVar5 = param_4;
    func_0x00010c287a20();
    _objc_release(param_1);
    uVar8 = param_7;
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    puVar6 = param_4 + 0x10;
    _objc_loadWeakRetained(puVar6);
    func_0x00010befade0();
    _objc_release(puVar6);
    func_0x00010c283520(param_4,param_2,puVar7,puVar5,uVar8,lVar9,uVar10);
    _objc_release(uVar8);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 1068f416c; end: 1068f421f; -[SCChatMediaStateManager addReferenceAndUpdateAllMessagesForMediaId:messageId:conversationId:messageBodyType:mediaLoadState:] */

void FUN_1068f416c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010befade0();
  _objc_release(lVar1);
  func_0x00010c283520(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f4220; end: 1068f4247; -[SCChatMediaStateManager .cxx_destruct] */

void FUN_1068f4220(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1068f4248; end: 1068f4373; -[SCChatMessageLoader loadMessageContentForConversationId:loadMessageId:isGroupConversation:requestContext:requestSource:] */

void FUN_1068f4248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_5;
  func_0x00010bfa89a0(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068f4374; end: 1068f43cb;  */

void FUN_1068f4374(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09b9e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f43cc; end: 1068f4617; -[SCChatMessageLoader loadMessageContent:isGroupConversation:requestContext:requestSource:] */

void FUN_1068f43cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c07f260();
    if ((int)lVar2 == 0) goto LAB_1068f45f0;
    uVar6 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b920(uVar6,param_2,lVar2,lVar5,0,param_4,param_5,param_6,0);
  }
  else {
    _objc_retain();
    lVar5 = param_3;
    func_0x00010c0c72c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1068f4728;
    puStack_88 = &UNK_1109492b0;
    lStack_80 = param_3;
    uStack_78 = param_5;
    _objc_retain(param_3);
    lVar2 = lVar5;
    func_0x00010bfaea20(lVar5,param_2,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_80);
    _objc_release(param_3);
    _objc_release(lVar5);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1068f4618;
    puStack_d0 = &UNK_110949280;
    _objc_retain(param_3);
    uStack_a8 = (undefined1)param_4;
    lStack_c8 = param_3;
    lStack_c0 = param_1;
    uStack_b8 = param_5;
    uStack_b0 = param_6;
    func_0x00010bf97e80(lVar2,param_2,&puStack_e8);
    lVar5 = param_3;
    func_0x00010c131d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c09c240();
      _objc_release(lVar3);
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar3 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bf490e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c3a0(uVar6,param_2,lVar3,lVar5,lVar4,param_4,param_5,param_6);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar5);
    lVar5 = lStack_c8;
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
LAB_1068f45f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f4618; end: 1068f46d7;  */

void FUN_1068f4618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  lVar3 = lVar3 + 0x18;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c09c240();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010bf50280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b920(uVar4);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068f46d8; end: 1068f46ef; -[SCChatMessageLoader delegate] */

void FUN_1068f46d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f46f0; end: 1068f4777; -[SCChatMessageLoader .cxx_destruct] */

void FUN_1068f46f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068f4778; end: 1068f483f; -[SCChatViewModelVerticalLayoutProperties initWithTableHeight:heightOfContentBelowTheFold:belowTheFoldOffset:firstBelowTheFoldIndexPath:firstUnseenIndexPath:] */

undefined1 *
FUN_1068f4778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f3c00;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1068f4840; end: 1068f4847; -[SCChatViewModelVerticalLayoutProperties tableHeight] */

undefined8 FUN_1068f4840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068f4848; end: 1068f484f; -[SCChatViewModelVerticalLayoutProperties heightOfContentBelowTheFold] */

undefined8 FUN_1068f4848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068f4850; end: 1068f4857; -[SCChatViewModelVerticalLayoutProperties belowTheFoldOffset] */

undefined8 FUN_1068f4850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068f4858; end: 1068f485f; -[SCChatViewModelVerticalLayoutProperties firstBelowTheFoldIndexPath] */

undefined8 FUN_1068f4858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068f4860; end: 1068f4867; -[SCChatViewModelVerticalLayoutProperties firstUnseenIndexPath] */

undefined8 FUN_1068f4860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068f4868; end: 1068f4897; -[SCChatViewModelVerticalLayoutProperties .cxx_destruct] */

void FUN_1068f4868(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1068f4898; end: 1068f4a1f; +[SCChatViewModelVerticalLayoutCalculator layoutPropertiesForMessageViewModels:] */

void FUN_1068f4898(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  uVar6 = param_4;
  func_0x00010bf529e0();
  if (uVar6 == 0) {
    puVar5 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar8 = 0.0;
  }
  else {
    uVar6 = 0;
    puVar4 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
    dVar8 = 0.0;
    dVar10 = 0.0;
    dVar9 = 0.0;
    do {
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      uVar2 = uVar1;
      dVar7 = param_1;
      func_0x00010c082140();
      if (((int)uVar2 != 0) && (dVar10 = dVar10 + param_1, puVar4 == (undefined *)0x0)) {
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,uVar6,0);
        _objc_retainAutoreleasedReturnValue();
      }
      if (puVar5 == (undefined *)0x0) {
        uVar2 = uVar1;
        func_0x00010c22f340();
        dVar7 = dVar9 + param_1;
        if ((int)uVar2 == 0) {
          dVar9 = dVar7;
        }
        uVar2 = uVar1;
        func_0x00010c22f340();
        if ((int)uVar2 == 0) {
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,uVar6,0);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      dVar8 = dVar8 + param_1;
      _objc_release(uVar1);
      uVar6 = uVar6 + 1;
      uVar1 = param_4;
      func_0x00010bf529e0();
      param_1 = dVar7;
    } while (uVar6 < uVar1);
  }
  puVar3 = PTR_PTR_1126cedd8;
  _objc_alloc(PTR_PTR_1126cedd8);
  func_0x00010c050340(dVar8,dVar10,dVar9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068f4a20; end: 1068f4b3f; +[SCChatViewModelVerticalLayoutCalculator updateHeightForMessageViewModels:] */

long FUN_1068f4a20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      puVar3 = PTR_PTR_1126c6d00;
      _objc_opt_class(PTR_PTR_1126c6d00);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010bf27920(uVar6);
        func_0x00010c1a7d00(uVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x10);
}



/* Entry: 1068f4b40; end: 1068f4b47; -[SCChatMessageViewModelConfig snapshot] */

undefined8 FUN_1068f4b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068f4b48; end: 1068f4b77; -[SCChatMessageViewModelConfig setSnapshot:] */

void FUN_1068f4b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068f4b78; end: 1068f4b7f; -[SCChatMessageViewModelConfig dateHeaderHeight] */

undefined8 FUN_1068f4b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068f4b80; end: 1068f4b87; -[SCChatMessageViewModelConfig setDateHeaderHeight:] */

void FUN_1068f4b80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1068f4b88; end: 1068f4b8f; -[SCChatMessageViewModelConfig topMargin] */

undefined8 FUN_1068f4b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068f4b90; end: 1068f4b97; -[SCChatMessageViewModelConfig setTopMargin:] */

void FUN_1068f4b90(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1068f4b98; end: 1068f4b9f; -[SCChatMessageViewModelConfig payloadHorizontalMargin] */

undefined8 FUN_1068f4b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068f4ba0; end: 1068f4ba7; -[SCChatMessageViewModelConfig setPayloadHorizontalMargin:] */

void FUN_1068f4ba0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 1068f4ba8; end: 1068f4baf; -[SCChatMessageViewModelConfig isFirstViewModel] */

undefined1 FUN_1068f4ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1068f4bb0; end: 1068f4bb7; -[SCChatMessageViewModelConfig setIsFirstViewModel:] */

void FUN_1068f4bb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1068f4bb8; end: 1068f4bc3; -[SCChatMessageViewModelConfig .cxx_destruct] */

void FUN_1068f4bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068f4bc4; end: 1068f4c73; -[SCChatBaseTableView init] */

undefined1 * FUN_1068f4bc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1974c0(0,puVar1);
    func_0x00010c197500(0,puVar1);
    func_0x00010c1974e0(0,puVar1);
    func_0x00010c181fc0(puVar1);
    func_0x00010c16d380(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c0f36c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1068f4c74; end: 1068f4c93; -[SCChatBaseTableView setTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f4c74(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_1127533a8) != param_1) {
    *(double *)(param_2 + _DAT_1127533a8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c284930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_updateContentInset_11267ec70);
    return;
  }
  return;
}



/* Entry: 1068f4c94; end: 1068f4d37; -[SCChatBaseTableView setMinBottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f4c94(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  if (*(double *)(param_2 + _DAT_1127533b8) != param_1) {
    dVar4 = 0.0;
    if (0.0 <= param_1) {
      dVar4 = param_1;
    }
    *(double *)(param_2 + _DAT_1127533b8) = dVar4;
    _CFAbsoluteTimeGetCurrent();
    lVar3 = 0;
    lVar1 = (long)_DAT_1127533bc;
    lVar2 = (long)_DAT_1127533c0;
    dVar5 = *(double *)(param_2 + lVar1);
    if ((0.0 < dVar5) && (dVar4 - dVar5 < 0.05)) {
      lVar3 = *(long *)(param_2 + lVar2);
      if (lVar3 == 0) {
        *(double *)(param_2 + _DAT_1127533c4) = dVar5;
        lVar3 = 1;
      }
      else {
        lVar3 = lVar3 + 1;
      }
    }
    *(long *)(param_2 + lVar2) = lVar3;
    *(double *)(param_2 + lVar1) = dVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bed6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateContentInsetAndScrollIfNe_1125931b8)
    ;
    return;
  }
  return;
}



/* Entry: 1068f4d38; end: 1068f4dff; -[SCChatBaseTableView _updateContentInsetAndScrollIfNecessary] */

void FUN_1068f4d38(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010bf363a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f8220(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1068f4e00; end: 1068f4e2b;  */

void FUN_1068f4e00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c284920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f4e2c; end: 1068f4eb7; -[SCChatBaseTableView layoutSubviews] */

void FUN_1068f4e2c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x00010c112700();
  dVar1 = param_1;
  func_0x00010bfb68e0(param_2);
  _CGRectGetHeight();
  if (0.01 < ABS(param_1 - dVar1)) {
    func_0x00010bed6040(param_2);
    func_0x00010bfb68e0(param_2);
    _CGRectGetHeight();
    func_0x00010c1e25e0(param_2);
  }
  puStack_38 = PTR_PTR_1126f3c08;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 1068f4eb8; end: 1068f4f77; -[SCChatBaseTableView isScrollViewAtBottom] */

bool FUN_1068f4eb8(double param_1,double param_2,double param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar4 = param_1;
  func_0x00010c112700(param_4);
  param_1 = param_1 - dVar4;
  func_0x00010bf4c7c0(param_4);
  dVar1 = dVar4;
  func_0x00010bf4cdc0(param_4);
  dVar4 = dVar4 + param_2;
  dVar2 = dVar1;
  if (0.0 < param_1) {
    func_0x00010be67360(param_4);
    dVar2 = param_1;
    if (dVar1 <= param_1) {
      dVar2 = dVar1;
    }
    dVar4 = dVar4 + dVar2;
  }
  func_0x00010c110200(param_4);
  dVar1 = dVar2;
  func_0x00010bf4c7c0(param_4);
  dVar3 = dVar1;
  func_0x00010bf4c7c0(param_4);
  func_0x00010c112700(param_4);
  return ABS((dVar2 + dVar1 + param_3) - (dVar4 + dVar3)) <= 5.0;
}



/* Entry: 1068f4f78; end: 1068f4fcb; -[SCChatBaseTableView isScrollViewAtFoldEdge] */

bool FUN_1068f4f78(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  
  func_0x00010be67360();
  dVar1 = param_1;
  func_0x00010bf4cdc0(param_3);
  func_0x00010bf4c7c0(param_3);
  return ABS(param_1 - (param_2 + dVar1)) <= 5.0;
}



/* Entry: 1068f4fcc; end: 1068f5083; -[SCChatBaseTableView updateContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f4fcc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  func_0x00010be67360();
  lVar1 = param_2;
  dVar3 = param_1;
  func_0x00010bf363a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267de0();
  dVar3 = dVar3 - param_1;
  lVar2 = (long)_DAT_1127533a8;
  dVar6 = dVar3 + *(double *)(param_2 + lVar2);
  _objc_release(lVar1);
  func_0x00010c0cd580(param_2);
  dVar4 = dVar3;
  func_0x00010bfb68e0(param_2);
  _CGRectGetHeight();
  dVar4 = dVar4 - dVar6;
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  uVar5 = 0;
  func_0x00010c181f80(*(undefined8 *)(param_2 + lVar2),0,dVar4,0,param_2);
  func_0x00010bf4d5e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1e17b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,param_2,PTR_s_setPrevContentHeight__112656010);
  return;
}



/* Entry: 1068f5084; end: 1068f50c7; -[SCChatBaseTableView _offsetForFirstViewableChat] */

undefined8 FUN_1068f5084(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf363a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1fe0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068f50c8; end: 1068f5123; -[SCChatBaseTableView _chatScrollPanDiagnostic:] */

void FUN_1068f50c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 - 4U < 2) {
    func_0x00010c252440(param_3);
  }
  else if (lVar1 == 1) {
    func_0x00010c07d3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f5124; end: 1068f5143; -[SCChatBaseTableView chatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f5124(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127533ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f5144; end: 1068f5157; -[SCChatBaseTableView setChatDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f5144(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127533ac,param_3);
  return;
}



/* Entry: 1068f5158; end: 1068f5167; -[SCChatBaseTableView minBottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f5158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533b8);
}



/* Entry: 1068f5168; end: 1068f5177; -[SCChatBaseTableView topInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f5168(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533a8);
}



/* Entry: 1068f5178; end: 1068f5187; -[SCChatBaseTableView prevContentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f5178(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533b0);
}



/* Entry: 1068f5188; end: 1068f5197; -[SCChatBaseTableView setPrevContentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f5188(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127533b0) = param_1;
  return;
}



/* Entry: 1068f5198; end: 1068f51a7; -[SCChatBaseTableView previousHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f5198(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533b4);
}



/* Entry: 1068f51a8; end: 1068f51b7; -[SCChatBaseTableView setPreviousHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f51a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127533b4) = param_1;
  return;
}



/* Entry: 1068f51b8; end: 1068f51c7; -[SCChatBaseTableView lastMinBottomInsetUpdateTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f51b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533bc);
}



/* Entry: 1068f51c8; end: 1068f51d7; -[SCChatBaseTableView setLastMinBottomInsetUpdateTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f51c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127533bc) = param_1;
  return;
}



/* Entry: 1068f51d8; end: 1068f51e7; -[SCChatBaseTableView rapidInsetUpdateCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f51d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533c0);
}



/* Entry: 1068f51e8; end: 1068f51f7; -[SCChatBaseTableView setRapidInsetUpdateCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f51e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127533c0) = param_3;
  return;
}



/* Entry: 1068f51f8; end: 1068f5207; -[SCChatBaseTableView firstRapidInsetUpdateTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068f51f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127533c4);
}



/* Entry: 1068f5208; end: 1068f5217; -[SCChatBaseTableView setFirstRapidInsetUpdateTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f5208(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127533c4) = param_1;
  return;
}



/* Entry: 1068f5218; end: 1068f5227; -[SCChatBaseTableView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f5218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127533ac);
  return;
}



/* Entry: 1068f5228; end: 1068f523b; -[SCMultiScrollTableView init] */

void FUN_1068f5228(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1068f523c; end: 1068f528b; -[SCMultiScrollTableView initWithFrame:] */

undefined1 * FUN_1068f523c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3c10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf47460(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1068f528c; end: 1068f5317; -[SCMultiScrollTableView configureSettings] */

void FUN_1068f528c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c177ba0(param_1,param_2,0);
  func_0x00010c198080(param_1);
  func_0x00010c1f7e20(param_1);
  func_0x00010c1fce40(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1,
             PTR_s_setSeparatorInset__11265cda8);
  return;
}



/* Entry: 1068f5318; end: 1068f531f; -[SCMultiScrollTableView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1068f5318(void)

{
  return 1;
}



/* Entry: 1068f5320; end: 1068f663f; -[SCChatConversationViewModelV3 initWithConversation:group:earlierContentExists:chatViewHeaderViewModel:messageViewModels:reactionMetadata:verticalLayoutProperties:activeChatMetadata:currentUserSnapchatter:recipientSnapchatter:userId:displayName:snapshot:isNonFriendConversation:isLockedConversation:groupsCustomColorsFetcher:campaignAdResponse:isEligibleForAnchorAboveInputBar:openChatToFirstUnreadEligible:] */

undefined8 *
FUN_1068f5320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puStack_358;
  undefined *puStack_340;
  undefined *puStack_300;
  undefined8 *puStack_2a8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  puVar3 = &UNK_10f3a0ec0;
  func_0x0001000ba800();
  puStack_178 = PTR_PTR_1126f3c18;
  puVar4 = &uStack_180;
  puVar7 = PTR_s_init_1125d9248;
  uStack_180 = param_2;
  _objc_msgSendSuper2();
  if (puVar4 == (undefined8 *)0x0) goto LAB_1068f64f8;
  puVar5 = param_4;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puVar4[1];
  puVar4[1] = puVar5;
  _objc_release(uVar33);
  _objc_retain(param_8);
  uVar33 = puVar4[2];
  puVar4[2] = param_8;
  _objc_release(uVar33);
  *(undefined1 *)(puVar4 + 6) = param_6;
  puVar5 = param_4;
  func_0x00010bfddd80();
  *(char *)(puVar4 + 0x15) = (char)puVar5;
  puVar5 = param_4;
  func_0x00010bfdde00();
  *(char *)((long)puVar4 + 0xa9) = (char)puVar5;
  if ((param_21._1_1_ == '\0') || (*(char *)(puVar4 + 0x15) != '\x01')) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = param_4;
    func_0x00010bfa44c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar33 = puVar4[0x22];
  puVar4[0x22] = puVar5;
  _objc_release(uVar33);
  puVar5 = param_4;
  func_0x00010c074920();
  *(char *)(puVar4 + 0x14) = (char)puVar5;
  puVar5 = param_4;
  func_0x00010c0886e0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puVar4[0x21];
  puVar4[0x21] = puVar5;
  _objc_release(uVar33);
  _objc_retain(param_9);
  uVar33 = puVar4[0x11];
  puVar4[0x11] = param_9;
  _objc_release(uVar33);
  func_0x00010bf194e0(param_10);
  puVar4[7] = param_1;
  func_0x00010c267de0(param_10);
  puVar4[8] = param_1;
  func_0x00010bfe0940(param_10);
  puVar4[9] = param_1;
  uVar33 = param_10;
  func_0x00010bfb0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = puVar4[4];
  puVar4[4] = uVar33;
  _objc_release(uVar34);
  uVar33 = param_10;
  func_0x00010bfb1f20();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = puVar4[5];
  puVar4[5] = uVar33;
  _objc_release(uVar34);
  puVar5 = param_4;
  func_0x00010c0cb860();
  puVar4[0xd] = puVar5;
  _objc_retain(param_7);
  uVar33 = puVar4[0x17];
  puVar4[0x17] = param_7;
  _objc_release(uVar33);
  _objc_retain(param_15);
  uVar33 = puVar4[3];
  puVar4[3] = param_15;
  _objc_release(uVar33);
  _objc_retain(param_4);
  uVar33 = puVar4[0x1a];
  puVar4[0x1a] = param_4;
  _objc_release(uVar33);
  _objc_retain(param_12);
  uVar33 = puVar4[0x12];
  puVar4[0x12] = param_12;
  _objc_release(uVar33);
  _objc_retain(param_13);
  uVar33 = puVar4[0x1c];
  puVar4[0x1c] = param_13;
  _objc_release(uVar33);
  *(undefined1 *)((long)puVar4 + 0xa1) = (undefined1)param_17;
  puVar5 = param_4;
  func_0x00010c261400();
  puVar4[0x1d] = puVar5;
  *(undefined1 *)((long)puVar4 + 0xa2) = (undefined1)param_21;
  puVar5 = param_4;
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puVar4[0x13];
  puVar4[0x13] = puVar5;
  _objc_release(uVar33);
  *(undefined1 *)((long)puVar4 + 0xa5) = param_17._1_1_;
  puVar5 = param_4;
  func_0x00010c06b500();
  *(char *)((long)puVar4 + 0xa6) = (char)puVar5;
  puVar5 = param_4;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)((long)puVar4 + 0xa7) = puVar5 != (undefined8 *)0x0;
  _objc_release();
  puVar5 = param_4;
  func_0x00010c25c080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf9ca60();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puVar4[0x1e];
  puVar4[0x1e] = puVar6;
  _objc_release(uVar33);
  _objc_release(puVar5);
  puVar5 = param_4;
  func_0x00010bf5a660();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puVar4[0x1f];
  puVar4[0x1f] = puVar5;
  _objc_release(uVar33);
  puVar5 = param_4;
  func_0x00010c064040();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puVar4[0x20];
  puVar4[0x20] = puVar5;
  _objc_release(uVar33);
  if (*(char *)(puVar4 + 0x14) == '\x01') {
    _objc_retain(param_5);
    uVar33 = puVar4[10];
    puVar4[10] = param_5;
    _objc_release(uVar33);
    uVar33 = param_5;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar33;
    func_0x000108ef4364();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = puVar4[0x16];
    puVar4[0x16] = uVar34;
    _objc_release(uVar35);
    _objc_release(uVar33);
  }
  else {
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_1068f6640;
    uStack_190 = 0x1068f6650;
    uStack_188 = 0;
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x3032000000;
    pcStack_1c8 = FUN_1068f6640;
    uStack_1c0 = 0x1068f6650;
    uStack_1b8 = 0;
    func_0x00010c0be1a0(param_11);
    uVar33 = puStack_1a8[5];
    func_0x00010bf51e00();
    uVar34 = puVar4[0xb];
    puVar4[0xb] = uVar33;
    _objc_release(uVar34);
    uVar33 = puStack_1d8[5];
    func_0x00010bf51e00();
    uVar34 = puVar4[0xc];
    puVar4[0xc] = uVar33;
    _objc_release(uVar34);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = puVar4[0x16];
    puVar4[0x16] = puVar7;
    _objc_release(uVar33);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(uStack_1b8);
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(uStack_188);
  }
  puVar5 = param_4;
  func_0x00010c0cbb60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bd869d0();
  uVar33 = puVar4[0xf];
  puVar4[0xf] = puVar6;
  _objc_release(uVar33);
  _objc_release(puVar5);
  _objc_retain(param_16);
  uVar33 = puVar4[0x1b];
  puVar4[0x1b] = param_16;
  _objc_release(uVar33);
  _objc_retain(param_4);
  puVar7 = PTR_PTR_1126cba40;
  _objc_opt_class();
  puVar6 = param_4;
  _objc_opt_isKindOfClass();
  puVar5 = param_4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  _objc_retain();
  _objc_release(param_4);
  *(undefined2 *)((long)puVar4 + 0xa3) = 0;
  puVar6 = puVar4;
  puVar14 = param_7;
  if (puVar5 == (undefined8 *)0x0) {
LAB_1068f636c:
    puStack_340 = (undefined *)0x0;
  }
  else {
    puVar8 = param_4;
    func_0x00010c0886e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined8 *)0x0) goto LAB_1068f636c;
    puStack_340 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar9 = param_4;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar8 != (undefined8 *)0x0) {
      puStack_358 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar9);
        }
        puVar37 = *(undefined8 **)((long)puStack_358 * 8);
        puVar10 = puVar37;
        func_0x00010c07bc00();
        puVar6 = puVar37;
        func_0x00010c0cb8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010c0720c0();
        _objc_release(puVar6);
        puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar6 = puVar37;
        func_0x00010bf6e760(puVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cb5a0();
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = param_4;
        func_0x00010c0886e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010bf433a0();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar6);
        if ((undefined *)0xfffffffffffffffd < (undefined *)((long)puVar14 + -1) &&
            (((uint)puVar11 | (uint)puVar10) & 1) == 0) {
          puVar15 = PTR_PTR_1126cede0;
          _objc_alloc();
          puVar12 = puVar37;
          func_0x00010c0cb340();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar12;
          func_0x00010bf4bc60();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar37;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar37;
          func_0x00010c0cb9a0();
          _objc_retainAutoreleasedReturnValue();
          puVar36 = puVar37;
          func_0x00010c0cb200();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar36;
          func_0x00010bf026e0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar37;
          func_0x00010bf6e760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb5a0();
          puVar19 = puVar37;
          func_0x00010c0cb340();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar19;
          func_0x00010c11ec40();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar20;
          func_0x00010bf4bc60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb5a0();
          puVar22 = puVar37;
          func_0x00010c0cb340();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar22;
          func_0x00010c11ec40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252d60();
          puVar24 = puVar37;
          func_0x00010c0cb340();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar24;
          func_0x00010c11ec40();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar25;
          func_0x00010bf4bc60();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar26;
          func_0x00010bf026e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar37;
          func_0x00010c0cb200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07c0c0();
          puVar28 = puVar37;
          func_0x00010c0cb200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb480();
          puVar29 = puVar37;
          func_0x00010bf4df40(puVar37);
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar29;
          func_0x00010bf9e280();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar30;
          func_0x00010c245400();
          _objc_retainAutoreleasedReturnValue();
          puVar31 = puVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar32 = puVar31;
          func_0x00010c1197a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c243160();
          func_0x00010c02b580(puVar15);
          _objc_release(puVar32);
          _objc_release(puVar31);
          _objc_release(puVar6);
          _objc_release(puVar30);
          _objc_release(puVar29);
          _objc_release(puVar28);
          _objc_release(puVar14);
          _objc_release(puVar27);
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar22);
          _objc_release(puVar21);
          _objc_release(puVar20);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_release(puVar36);
          _objc_release(puVar16);
          _objc_release(puVar13);
          _objc_release(puVar10);
          _objc_release(puVar12);
          func_0x00010befa120(puStack_340);
          _objc_release(puVar15);
        }
        if (((uint)puVar11 != 0) &&
           (puVar12 = puVar37, func_0x00010c07f920(), ((ulong)puVar12 & 1) == 0)) {
          *(undefined1 *)((long)puVar4 + 0xa3) = 1;
        }
        if (*(char *)((long)puVar4 + 0xa4) == '\x01') {
          *(undefined1 *)((long)puVar4 + 0xa4) = 1;
        }
        else {
          puVar12 = puVar37;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar12;
          func_0x00010bf1fdc0();
          _objc_retainAutoreleasedReturnValue();
          *(bool *)((long)puVar4 + 0xa4) = puVar10 != (undefined8 *)0x0;
          _objc_release();
          _objc_release(puVar12);
        }
        puVar10 = param_4;
        func_0x00010c08b1a0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar37;
        func_0x00010c120dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar12 != (undefined8 *)0x0) {
          puStack_2a8 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar11);
            }
            puVar36 = *(undefined8 **)((long)puStack_2a8 * 8);
            puVar13 = puVar36;
            func_0x00010c1209e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar36;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar6;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar36);
            puVar6 = puVar13;
            func_0x00010c120b60();
            _objc_retainAutoreleasedReturnValue();
            puVar36 = puVar6;
            func_0x00010bf433a0();
            _objc_release(puVar6);
            if (((ulong)puVar16 & 1) == 0 && puVar36 == (undefined8 *)0x1) {
              puVar6 = puVar13;
              func_0x00010c120a80();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar6;
              func_0x00010bf8e2c0();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar14;
              func_0x00010c08fa60();
              _objc_release(puVar14);
              _objc_release(puVar6);
              if (puVar16 == (undefined8 *)0x0) {
                puVar6 = puVar13;
                func_0x00010c120a80();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = puVar6;
                func_0x00010c0682a0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar6);
                puStack_300 = PTR_PTR_1126cede8;
                if (puVar14 == (undefined8 *)0x0) {
                  puStack_300 = (undefined *)0x0;
                }
                else {
                  puVar6 = puVar13;
                  func_0x00010c120a80(puVar13);
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar6;
                  func_0x00010c0682a0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf1bf80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar14);
                  _objc_release(puVar6);
                }
              }
              else {
                puStack_300 = PTR_PTR_1126cede8;
                func_0x00010bf8e2c0();
                _objc_retainAutoreleasedReturnValue();
              }
              puVar14 = (undefined8 *)PTR_PTR_1126cede0;
              _objc_alloc();
              puVar16 = puVar37;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              puVar36 = puVar16;
              func_0x00010bf4bc60();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar37;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar13;
              func_0x00010c120b60();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar18;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar37;
              func_0x00010bf6e760();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0cb5a0();
              puVar21 = puVar37;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar21;
              func_0x00010c11ec40();
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar22;
              func_0x00010bf4bc60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0cb5a0(puVar23);
              puVar24 = puVar37;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              puVar25 = puVar24;
              func_0x00010c11ec40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c252d60();
              puVar26 = puVar37;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar26;
              func_0x00010c11ec40();
              _objc_retainAutoreleasedReturnValue();
              puVar28 = puVar27;
              func_0x00010bf4bc60();
              _objc_retainAutoreleasedReturnValue();
              puVar29 = puVar28;
              func_0x00010bf026e0();
              _objc_retainAutoreleasedReturnValue();
              puVar30 = puVar37;
              func_0x00010c0cb200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c07c0c0();
              puVar6 = puVar37;
              func_0x00010c0cb200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0cb480();
              func_0x00010c02b580(puVar14);
              _objc_release(puVar6);
              _objc_release(puVar30);
              _objc_release(puVar29);
              _objc_release(puVar28);
              _objc_release(puVar27);
              _objc_release(puVar26);
              _objc_release(puVar25);
              _objc_release(puVar24);
              _objc_release(puVar23);
              _objc_release(puVar22);
              _objc_release(puVar21);
              _objc_release(puVar20);
              _objc_release(puVar19);
              _objc_release(puVar18);
              _objc_release(puVar17);
              _objc_release(puVar36);
              _objc_release(puVar16);
              func_0x00010befa120(puStack_340);
              _objc_release(puVar14);
              _objc_release(puStack_300);
            }
            _objc_release(puVar13);
            puStack_2a8 = (undefined8 *)((long)puStack_2a8 + 1);
          } while (puVar12 != puStack_2a8);
          puVar12 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        _objc_release(puVar10);
        puStack_358 = (undefined8 *)((long)puStack_358 + 1);
      } while (puStack_358 != puVar8);
      puVar8 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
  }
  puVar15 = PTR_PTR_1126cedf0;
  _objc_alloc();
  puVar8 = param_4;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined8 *)0x0) {
    puVar6 = param_4;
    func_0x00010bf37ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
    func_0x00010bf1cf40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1920();
  }
  func_0x00010c02b7e0();
  uVar33 = puVar4[0x10];
  puVar4[0x10] = puVar15;
  _objc_release(uVar33);
  if (puVar8 != (undefined8 *)0x0) {
    _objc_release(puVar14);
    _objc_release(puVar6);
  }
  _objc_release(puVar8);
  if (*(char *)((long)puVar4 + 0xa5) == '\x01') {
    puVar15 = PTR_PTR_1126cedf8;
    func_0x00010c09ff00();
    _objc_retainAutoreleasedReturnValue();
LAB_1068f6480:
    uVar33 = puVar4[0x18];
    puVar4[0x18] = puVar15;
    _objc_release(uVar33);
  }
  else {
    puVar6 = puVar5;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
    func_0x00010c06e060();
    _objc_release(puVar6);
    if ((int)puVar14 != 0) {
      puVar15 = PTR_PTR_1126cedf8;
      func_0x00010bf2c340();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1068f6480;
    }
  }
  puVar15 = PTR_PTR_1126cb3a8;
  uVar33 = param_20;
  func_0x00010c15ed20(param_20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf220a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = puVar4[0x19];
  puVar4[0x19] = puVar15;
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(puStack_340);
  _objc_release(puVar5);
LAB_1068f64f8:
  func_0x0001000e2a84(puVar3);
  _objc_release(param_20);
  _objc_release(param_19);
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
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar3);
  __Unwind_Resume();
  param_4[5] = *(undefined8 *)(puVar7 + 0x28);
  *(undefined8 *)(puVar7 + 0x28) = 0;
  return param_4;
}



/* Entry: 1068f6640; end: 1068f6657;  */

void FUN_1068f6640(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068f6658; end: 1068f66cf;  */

void FUN_1068f6658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068f66d0; end: 1068f66f7;  */

void FUN_1068f66d0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068f66f8; end: 1068f66ff;  */

void FUN_1068f66f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf026f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_analyticsMessageId_11259e360);
  return;
}



/* Entry: 1068f6700; end: 1068f6bab; -[SCChatConversationViewModelV3 initLoadingViewModelWithConversationId:loadingSpinnerViewModel:group:isGroup:recipientSnapchatter:recipientUsername:recipientUserId:cursorColor:verticalLayoutProperies:isLockedConversation:isInitialLoad:] */

undefined8 *
FUN_1068f6700(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,ulong param_6,int param_7,ulong param_8,ulong param_9,ulong param_10
             ,undefined8 param_11,undefined8 param_12,undefined4 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126f3c18;
  puVar8 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 == (undefined8 *)0x0) goto LAB_1068f6b2c;
  _objc_retain(param_4);
  uVar1 = puVar8[1];
  puVar8[1] = param_4;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puVar8[2];
  puVar8[2] = puVar2;
  _objc_release(uVar1);
  if (param_7 == 0) {
    uVar3 = param_8;
    func_0x00010901d8b4(param_8,param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar8[3];
    puVar8[3] = uVar3;
    _objc_release(uVar1);
    uVar4 = param_8;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_9;
    if (uVar4 != 0) {
      uVar3 = uVar4;
    }
    _objc_retain(uVar3);
    uVar1 = puVar8[0xb];
    puVar8[0xb] = uVar3;
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar4 = param_8;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_10;
    if (uVar4 != 0) {
      uVar3 = uVar4;
    }
    _objc_retain(uVar3);
    uVar9 = puVar8[0xc];
    puVar8[0xc] = uVar3;
LAB_1068f6920:
    _objc_release(uVar9);
  }
  else {
    _objc_retain(param_6);
    uVar1 = puVar8[10];
    puVar8[10] = param_6;
    _objc_release(uVar1);
    *(undefined1 *)(puVar8 + 0x14) = 1;
    uVar3 = param_6;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar8[3];
    puVar8[3] = uVar3;
    _objc_release(uVar1);
    uVar4 = param_6;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf529e0();
    if (uVar3 < 4) {
      uVar9 = param_6;
      func_0x00010c0ecc20(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      goto LAB_1068f6920;
    }
  }
  _objc_release(uVar4);
  _objc_retain(param_11);
  uVar1 = puVar8[0x16];
  puVar8[0x16] = param_11;
  _objc_release(uVar1);
  func_0x00010bf194e0(param_12);
  puVar8[7] = param_1;
  func_0x00010c267de0(param_12);
  puVar8[8] = param_1;
  func_0x00010bfe0940(param_12);
  puVar8[9] = param_1;
  uVar1 = param_12;
  func_0x00010bfb0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puVar8[4];
  puVar8[4] = uVar1;
  _objc_release(uVar7);
  uVar1 = param_12;
  func_0x00010bfb1f20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puVar8[5];
  puVar8[5] = uVar1;
  _objc_release(uVar7);
  *(undefined1 *)((long)puVar8 + 0xa5) = (undefined1)param_13;
  if (param_7 == 0) {
    puVar2 = PTR_PTR_1126ce410;
    func_0x00010c0fdb40(PTR_PTR_1126ce410);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cee00;
    _objc_alloc();
    func_0x00010c050980();
    puVar6 = PTR_PTR_1126c56e8;
    func_0x00010bf1aea0(PTR_PTR_1126c56e8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126c93b0;
    func_0x00010c0fdb80(PTR_PTR_1126c93b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c93a8;
    _objc_alloc();
    func_0x00010c0509a0();
    puVar6 = PTR_PTR_1126c56e8;
    func_0x00010bfce640(PTR_PTR_1126c56e8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cee08;
  _objc_alloc();
  func_0x00010c00d520();
  uVar1 = puVar8[0x17];
  puVar8[0x17] = puVar2;
  _objc_release(uVar1);
  *(undefined1 *)((long)puVar8 + 0xaa) = param_13._1_1_;
  puVar2 = PTR_PTR_1126cedf0;
  _objc_alloc();
  func_0x00010c02b7e0();
  uVar1 = puVar8[0x10];
  puVar8[0x10] = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar6);
LAB_1068f6b2c:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar8 = *(undefined8 **)(param_4 + 8);
    _objc_retain(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 1068f6bac; end: 1068f6bd3; -[SCChatConversationViewModelV3 conversationId] */

void FUN_1068f6bac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068f6bd4; end: 1068f6ccf; -[SCChatConversationViewModelV3 indexPathForIdentifier:] */

void FUN_1068f6bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1068f6640;
  uStack_40 = 0x1068f6650;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068f6cd0; end: 1068f6d6b;  */

void FUN_1068f6cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
    *param_4 = 1;
  }
  return;
}



/* Entry: 1068f6d6c; end: 1068f6df3; -[SCChatConversationViewModelV3 viewModelAtIndexPath:] */

void FUN_1068f6d6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c142240();
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 < lVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_3;
      func_0x00010c142240(param_3);
      func_0x00010c0dfd40(uVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1068f6dd8;
    }
  }
  uVar3 = 0;
LAB_1068f6dd8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068f6df4; end: 1068f6e27; -[SCChatConversationViewModelV3 lastIndexPath] */

void FUN_1068f6df4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfed070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForRow_inSection__1125d8de0,lVar2 + -1,0);
  return;
}



/* Entry: 1068f6e28; end: 1068f6e2f; -[SCChatConversationViewModelV3 canLoadMoreMessagesByRetrying:] */

undefined1 FUN_1068f6e28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 1068f6e30; end: 1068f6e57; -[SCChatConversationViewModelV3 recipientUsername] */

void FUN_1068f6e30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068f6e58; end: 1068f6e7f; -[SCChatConversationViewModelV3 recipientUserId] */

void FUN_1068f6e58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068f6e80; end: 1068f6ed7; -[SCChatConversationViewModelV3 messageTrackingIds] */

void FUN_1068f6e80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068f6ed8; end: 1068f6edf; -[SCChatConversationViewModelV3 firstBelowTheFoldIndexPath] */

undefined8 FUN_1068f6ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068f6ee0; end: 1068f6ee7; -[SCChatConversationViewModelV3 firstUnseenIndexPath] */

undefined8 FUN_1068f6ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068f6ee8; end: 1068f6eef; -[SCChatConversationViewModelV3 belowTheFoldOffset] */

undefined8 FUN_1068f6ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1068f6ef0; end: 1068f6ef7; -[SCChatConversationViewModelV3 messageViewModels] */

undefined8 FUN_1068f6ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068f6ef8; end: 1068f6eff; -[SCChatConversationViewModelV3 tableHeight] */

undefined8 FUN_1068f6ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1068f6f00; end: 1068f6f07; -[SCChatConversationViewModelV3 heightOfContentBelowTheFold] */

undefined8 FUN_1068f6f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1068f6f08; end: 1068f6f0f; -[SCChatConversationViewModelV3 isGroupConversation] */

undefined1 FUN_1068f6f08(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 1068f6f10; end: 1068f6f17; -[SCChatConversationViewModelV3 cursorColor] */

undefined8 FUN_1068f6f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1068f6f18; end: 1068f6f1f; -[SCChatConversationViewModelV3 group] */

undefined8 FUN_1068f6f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1068f6f20; end: 1068f6f27; -[SCChatConversationViewModelV3 chatViewHeaderViewModel] */

undefined8 FUN_1068f6f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1068f6f28; end: 1068f6f2f; -[SCChatConversationViewModelV3 chatDisabledInputFooterViewModel] */

undefined8 FUN_1068f6f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1068f6f30; end: 1068f6f37; -[SCChatConversationViewModelV3 conversationSubtypeMetadata] */

undefined8 FUN_1068f6f30(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1068f6f38; end: 1068f6f3f; -[SCChatConversationViewModelV3 messageRetentionInMinutes] */

undefined8 FUN_1068f6f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1068f6f40; end: 1068f6f47; -[SCChatConversationViewModelV3 displayName] */

undefined8 FUN_1068f6f40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068f6f48; end: 1068f6f4f; -[SCChatConversationViewModelV3 debugConversation] */

undefined8 FUN_1068f6f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}


