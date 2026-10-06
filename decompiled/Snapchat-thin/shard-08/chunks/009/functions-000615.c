/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067a73f0; end: 1067a7547; -[SCPreviewSnapSender _statusMessageDisplayHandlerForMedia:] */

void FUN_1067a73f0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_successMessageBackgroundColor_112676018);
  puVar4 = puVar1;
  if (((ulong)puVar3 & 1) != 0) {
    puVar4 = param_3;
    func_0x00010c2617c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_successMessageTextColor_112676020);
  puVar3 = puVar2;
  if (((ulong)puVar1 & 1) != 0) {
    puVar3 = param_3;
    func_0x00010c2617e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067a7548;
  puStack_60 = &UNK_110906090;
  uStack_58 = param_1;
  puStack_50 = puVar3;
  puStack_48 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  ppuVar5 = &puStack_78;
  _objc_retainBlock(ppuVar5);
  _objc_release(puStack_48);
  _objc_release(puStack_50);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1067a7548; end: 1067a755f;  */

void FUN_1067a7548(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showStatusMessageWithTextColor__11258c660,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2 == 0);
  return;
}



/* Entry: 1067a7560; end: 1067a78ff; -[SCPreviewSnapSender sendDiscoverMedia:toRecipientUsernames:recipientUserIds:snapId:compositeStoryId:mischiefs:loggingParameters:sendToSessionId:additionalText:isForwarded:isBitmojiStory:] */

void FUN_1067a7560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_5;
  func_0x00010bf529e0();
  lVar2 = param_8;
  func_0x00010bf529e0();
  if (lVar1 + lVar2 != 0) {
    lVar1 = param_8;
    func_0x000108605534();
    lVar2 = param_5;
    func_0x00010bf529e0();
    lVar3 = param_8;
    func_0x000107e3271c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x000107e327a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf09f80(lVar3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c246920();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1067a7800;
    puStack_b8 = &UNK_11093b850;
    lStack_b0 = param_1;
    _objc_retain(param_3);
    uStack_a8 = param_3;
    _objc_retain(param_6);
    uStack_a0 = param_6;
    _objc_retain(param_7);
    uStack_98 = param_7;
    _objc_retain(param_9);
    uStack_90 = param_9;
    _objc_retain(param_10);
    uStack_88 = param_10;
    uVar8 = param_11;
    _objc_retain(param_11);
    uStack_70 = param_12;
    uStack_80 = param_11;
    lStack_78 = lVar2 + lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar7,param_2,&puStack_d0,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1067a7900; end: 1067a7c9b; -[SCPreviewSnapSender _sendDiscoverMedia:snapId:compositeStoryId:conversationIds:loggingParameters:sendToSessionId:additionalText:isForwarded:isBitmojiStory:destinationInfo:] */

void FUN_1067a7900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126be938;
    _objc_alloc();
    uVar2 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dc60();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bddd060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (param_9 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar1;
      func_0x000108604db4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c15bb40(param_1);
    _objc_loadWeakRetained(param_1 + 0xb8);
    _objc_release();
    uVar9 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    uVar10 = uVar9;
    _objc_opt_respondsToSelector();
    _objc_release(uVar9);
    if ((uVar10 & 1) != 0) {
      param_1 = param_1 + 0xb8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf7b440();
      _objc_release(param_1);
    }
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067a7c9c; end: 1067a7f1b; -[SCPreviewSnapSender sendDiscoverShareMedia:snapId:compositeStoryId:isBitmojiStory:conversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:completion:] */

void FUN_1067a7c9c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,long param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_7;
  func_0x00010bf529e0();
  if ((param_12 != 0) && (lVar1 == 0)) {
    (**(code **)(param_12 + 0x10))(param_12,0);
  }
  lVar1 = param_7;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cdef0;
    _objc_alloc();
    uVar3 = param_3;
    FUN_1067ae6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028f60();
    _objc_release(uVar3);
    uVar3 = param_3;
    if (param_6 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    uVar7 = 0;
    if (param_6 != 0) {
      uVar7 = param_3;
      FUN_1067ae6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126b5bc8;
    _objc_alloc(PTR_PTR_1126b5bc8);
    func_0x00010c000be0();
    if (param_12 == 0) {
      ppuVar5 = param_1;
      func_0x00010bec2820(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1067a7f1c;
      puStack_70 = &UNK_110852668;
      _objc_retain(param_12);
      lStack_68 = param_12;
      ppuVar5 = &puStack_88;
      _objc_retainBlock(ppuVar5);
      _objc_release(lStack_68);
    }
    puVar6 = param_1[0x10];
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c420();
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067a7f1c; end: 1067a7f2f;  */

void FUN_1067a7f1c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001067a7f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 1067a7f30; end: 1067a82a7; -[SCPreviewSnapSender _sendArroyoChatMessageWithChatMedia:conversationIds:massSnapRecipients:shouldShowStatusMessage:additionalText:platformAnalytics:additionalTextPlatformAnalytics:provenance:timing:] */

void FUN_1067a7f30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_d0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_6 == 0) {
    ppuStack_d0 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1067a82a8;
    puStack_98 = &UNK_110864d98;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_5);
    ppuStack_d0 = &puStack_b0;
    uStack_90 = param_5;
    _objc_retainBlock();
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  lVar1 = param_3;
  func_0x000106e0c1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5280();
  func_0x00010c216040(lVar1);
  puVar2 = PTR_PTR_1126cdef8;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_8;
  func_0x00010c0c8ec0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c242160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c23f880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028fc0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126cdf00;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016f80();
  _objc_release(puVar6);
  func_0x00010be5f180();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2421a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15bea0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(ppuStack_d0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bebb2c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067a82a8; end: 1067a82ff;  */

void FUN_1067a82a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bebb2c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067a8300; end: 1067a831f; -[SCPreviewSnapSender _memoriesMediaChatSendingFormat] */

undefined8 FUN_1067a8300(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb5940();
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1067a8320; end: 1067a835b; -[SCPreviewSnapSender _shouldSendAsSnaps] */

undefined8 FUN_1067a8320(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c06df60();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c077a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isMemoriesSnap_1125fb8a0);
  return uVar2;
}



/* Entry: 1067a835c; end: 1067a84cf; -[SCPreviewSnapSender _storyFraming] */

void FUN_1067a835c(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 8);
  func_0x00010bfbafc0();
  lVar2 = *(long *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x00010bfbaf20();
    lVar3 = *(long *)(param_2 + 8);
    if ((int)lVar2 != 0) {
      func_0x00010bf5a7c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1067a83cc;
    }
    func_0x00010bfbab00();
    lVar2 = *(long *)(param_2 + 8);
    if ((int)lVar3 == 0) {
      func_0x00010bfbade0();
      lVar3 = *(long *)(param_2 + 8);
      if ((int)lVar2 == 0) {
        func_0x00010c070760();
        if ((int)lVar3 == 0) {
          puVar5 = (undefined *)0x0;
          goto LAB_1067a8414;
        }
        lVar3 = *(long *)(param_2 + 8);
        func_0x00010bf5aac0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1067a83cc;
      }
      func_0x00010bf5a7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 4;
    }
    else {
      func_0x00010bf5a740();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 3;
      lVar3 = lVar2;
    }
  }
  else {
    func_0x00010bf5a760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      func_0x00010bf5a780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = (undefined *)0x0;
      if (lVar3 == 0) goto LAB_1067a8414;
      lVar3 = *(long *)(param_2 + 8);
      func_0x00010bf5a780(lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 2;
      goto LAB_1067a83d4;
    }
    func_0x00010bf5a760();
    _objc_retainAutoreleasedReturnValue();
LAB_1067a83cc:
    uVar4 = 1;
  }
LAB_1067a83d4:
  puVar5 = PTR_PTR_1126c3340;
  _objc_alloc(PTR_PTR_1126c3340);
  func_0x00010c26f320(lVar3);
  func_0x00010c0066c0(puVar5,param_3,(long)(param_1 * 1000.0),uVar4);
  _objc_release(lVar3);
LAB_1067a8414:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067a84d0; end: 1067a85ab; -[SCPreviewSnapSender _userPostedTimestampsWithCount:] */

void FUN_1067a84d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  for (uVar1 = param_3; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x00010befa120(puVar3,param_2,puVar2);
    puVar4 = puVar2;
    if (1 < param_3) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655c0(0x3f847ae147ae147b,PTR__OBJC_CLASS___NSDate_1126ae770,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = puVar4;
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067a85ac; end: 1067a8877; -[SCPreviewSnapSender postStory:storiesPostingConfig:lensAssetsUploadOperation:lensMetadataFuture:galleryStorySaver:businessIds:captureSessionId:fromPreview:fromSendTo:fromRecommend:isSendToPagePresentedFromPreview:isSnapEditor:snapDocModifyBlock:] */

void FUN_1067a85ac(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5,undefined *param_6,ulong param_7,ulong param_8,undefined4 param_9,
                  undefined4 param_10,uint param_11,byte param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_1e0;
  long lStack_1d8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar7 = param_4;
  uVar10 = param_7;
  uVar11 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_13);
  if (param_3 != (undefined *)0x0) {
    _objc_retain(param_7);
    func_0x00010bed7960(param_1);
    puVar2 = PTR_PTR_1126c4290;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010853f31c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010720();
    _objc_release(param_7);
    _objc_release(puVar7);
    _objc_release(puVar3);
    func_0x00010bfbafc0(*(undefined8 *)(param_1 + 8));
    func_0x00010c1b13a0(puVar2);
    param_6 = (undefined *)(ulong)(param_11 >> 0x10 & 0xff ^ 1);
    _objc_retain(puVar2);
    puVar7 = puVar2;
    FUN_1067ac43c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = puVar2;
    if (puVar7 == (undefined *)0x0) {
      puVar7 = puVar2;
      func_0x0001067aca80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar13 = puVar2;
      _objc_release();
      if (puVar7 != (undefined *)0x0) goto LAB_1067a8740;
      FUN_1067ad554();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)0x0;
      param_5 = 0;
      uVar11 = 0;
      param_6 = param_4;
      uVar10 = param_8;
      func_0x00010be9f740(param_1);
      _objc_release(puVar13);
    }
    else {
      _objc_release();
LAB_1067a8740:
      uVar11 = (ulong)param_12;
      uVar10 = (ulong)param_11._3_1_;
      puVar7 = param_4;
      param_5 = param_8;
      func_0x00010bdcffc0(param_1);
    }
    uVar4 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) {
      param_1 = param_1 + 0xb8;
      _objc_loadWeakRetained();
      puVar13 = param_4;
      func_0x00010846ba3c();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar13;
      func_0x00010bf78540(param_1);
      _objc_release(puVar13);
      _objc_release(param_1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar3;
  puVar8 = puVar7;
  puVar9 = param_6;
  uVar4 = uVar10;
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  _objc_retain(param_6);
  _objc_retain(uVar10);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) goto LAB_1067a8a90;
  lVar6 = *(long *)(param_3 + 8);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) goto LAB_1067a8a90;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar1 = uStack_1e0;
  while (puVar2 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      lStack_1d8 = 0;
      uStack_1e0 = (undefined *)CONCAT71((uint7)(byte)uVar11,1);
      func_0x00010bed7960(param_3);
      puVar13 = puVar13 + 1;
    } while (puVar2 != puVar13);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    puVar1 = uStack_1e0;
  }
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126c4290;
  _objc_alloc();
  puVar13 = puVar2;
  func_0x00010853f31c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010720();
  _objc_release(puVar13);
  func_0x00010bfbafc0(*(undefined8 *)(param_3 + 8));
  func_0x00010c1b13a0(puVar2);
  _objc_retain(puVar2);
  puVar8 = puVar2;
  FUN_1067ac43c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar13 = puVar2;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar2;
    func_0x0001067aca80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uStack_1e0 = puVar2;
    _objc_release();
    if (puVar8 != (undefined *)0x0) goto LAB_1067a8a68;
    FUN_1067ad554();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8._2_6_ = (undefined6)((ulong)lStack_1d8 >> 0x10);
    lStack_1d8 = (ulong)CONCAT61(lStack_1d8._2_6_,(byte)uVar11) << 8;
    puVar8 = (undefined *)0x0;
    param_5 = 0;
    puVar9 = puVar7;
    uVar11 = uVar10;
    func_0x00010be9f740(param_3);
    _objc_release(uStack_1e0);
  }
  else {
    _objc_release();
LAB_1067a8a68:
    puVar9 = (undefined *)0x0;
    puVar8 = puVar7;
    param_5 = uVar10;
    func_0x00010bdcffc0(param_3);
    uStack_1e0 = puVar1;
  }
  _objc_release(puVar2);
  uVar4 = uVar11;
LAB_1067a8a90:
  _objc_release(uVar10);
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lStack_1d8);
  _objc_retain(uVar4);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  puVar3 = puVar13;
  func_0x00010bf42a00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bf0d6a0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar2 = puVar7;
  func_0x00010c08fa60(puVar7);
  FUN_1067adba8(puVar3,puVar8,param_5,puVar9,uVar4,(ulong)uStack_1e0 & 0xff,uStack_1e0._1_1_,
                puVar2 != (undefined *)0x0,lStack_1d8);
  _objc_release(lStack_1d8);
  _objc_release(uVar4);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1067a8878; end: 1067a8b37; -[SCPreviewSnapSender postStoryFromMemories:storiesPostingConfig:lensAssetsUploadOperation:galleryStorySaver:businessIds:isSendToPagePresentedFromPreview:isSnapEditor:] */

void FUN_1067a8878(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_150;
  long lStack_148;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  uVar5 = param_4;
  uVar6 = param_6;
  uVar7 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) goto LAB_1067a8a90;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_1067a8a90;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar4 = uStack_150;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      lStack_148 = 0;
      uStack_150 = (undefined *)CONCAT71((uint7)(byte)param_8,1);
      func_0x00010bed7960(param_1);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar4 = uStack_150;
  }
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c4290;
  _objc_alloc();
  puVar9 = puVar1;
  func_0x00010853f31c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010720();
  _objc_release(puVar9);
  func_0x00010bfbafc0(*(undefined8 *)(param_1 + 8));
  func_0x00010c1b13a0(puVar1);
  _objc_retain(puVar1);
  puVar3 = puVar1;
  FUN_1067ac43c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar9 = puVar1;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x0001067aca80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uStack_150 = puVar1;
    _objc_release();
    if (puVar3 != (undefined *)0x0) goto LAB_1067a8a68;
    FUN_1067ad554();
    _objc_retainAutoreleasedReturnValue();
    lStack_148._2_6_ = (undefined6)((ulong)lStack_148 >> 0x10);
    lStack_148 = (ulong)CONCAT61(lStack_148._2_6_,(byte)param_8) << 8;
    uVar5 = 0;
    param_5 = 0;
    uVar6 = param_4;
    param_8 = param_7;
    func_0x00010be9f740(param_1);
    _objc_release(uStack_150);
  }
  else {
    _objc_release();
LAB_1067a8a68:
    uVar6 = 0;
    uVar5 = param_4;
    param_5 = param_7;
    func_0x00010bdcffc0(param_1);
    uStack_150 = puVar4;
  }
  _objc_release(puVar1);
  uVar7 = param_8;
LAB_1067a8a90:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lStack_148);
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  _objc_retain(uVar5);
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf42a00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010bf0d6a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar4;
  func_0x00010c08fa60(puVar4);
  FUN_1067adba8(puVar1,uVar5,param_5,uVar6,uVar7,(ulong)uStack_150 & 0xff,uStack_150._1_1_,
                puVar9 != (undefined *)0x0,lStack_148);
  _objc_release(lStack_148);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067a8b38; end: 1067a8c5f; -[SCPreviewSnapSender _updateEphemeralCommonLoggingParameters:destinationInfo:storiesPostingConfig:businessIds:mischiefs:fromPreview:fromSendTo:isSendToPagePresentedFromPreview:importedContentId:] */

void FUN_1067a8b38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_11);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf0d6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c08fa60(lVar2);
  FUN_1067adba8(lVar1,param_4,param_5,param_6,param_7,(undefined1)param_9,param_9._1_1_,lVar3 != 0,
                param_11);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067a8c60; end: 1067a915b; -[SCPreviewSnapSender _sendMediaWithEphemeralMedia:arroyoConversationIds:phoneNumbers:storiesPostingConfig:businessIds:messagingLocalMediaReferences:destinationInfo:showToastWhenComplete:isSendToPagePresentedFromPreview:snapDocModifyBlock:] */

void FUN_1067a8c60(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uStack_148;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  uVar10 = param_3;
  func_0x00010c078080();
  if ((int)uVar10 == 0) {
    uStack_148 = 0;
  }
  else {
    uStack_148 = *(ulong *)(param_1 + 0x40);
    func_0x00010bf1f440();
    if ((int)uStack_148 != 0) {
      uStack_148 = param_3;
      func_0x00010bf98360();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uStack_148;
      func_0x00010bf529e0();
      _objc_release();
      if (uVar10 < 2) {
        uStack_148 = 0;
        goto LAB_1067a8d88;
      }
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1067a8d88:
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c23fbe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c23fbe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain();
  uVar10 = param_6;
  func_0x00010c105440();
  if ((uVar10 & 1) == 0) {
    uVar10 = param_6;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar10 == 0) && (lVar1 = param_7, func_0x00010bf529e0(), lVar1 == 0)) {
      func_0x000107d6fc14();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25aac0();
      _objc_release(lVar8);
      _objc_release(lVar1);
    }
    _objc_release(uVar10);
  }
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar9);
  func_0x00010bf4b940();
  uVar10 = param_6;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (uVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c28ec40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c23fe00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28eb80(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar5);
    uVar6 = uVar4;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c23fe00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x000107d6ae7c(uVar6,uVar7,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_3;
  func_0x00010bf98360(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar10);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(uStack_148);
  func_0x00010bf97e80(uVar6);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(uVar10);
  _objc_release(param_8);
  _objc_release(param_12);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(uStack_148);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_12);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_148);
  return;
}



/* Entry: 1067a915c; end: 1067a9d2b;  */

void FUN_1067a915c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  double dVar35;
  undefined8 uVar36;
  long lStack_628;
  undefined *puStack_620;
  undefined *puStack_5e0;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  ulong uStack_2e8;
  double dStack_2e0;
  undefined1 uStack_2d8;
  undefined1 uStack_2d7;
  undefined1 uStack_2d6;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_197;
  undefined1 uStack_196;
  undefined1 auStack_190 [264];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar2 = param_2;
    func_0x00010bf42a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4140();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  if (*(char *)(param_1 + 0x91) == '\x01') {
    lVar2 = param_2;
    func_0x00010bf42a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab720(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x00010c159d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar2 = lVar19;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    func_0x00010bf1f440();
    if (iVar1 != 0) {
      func_0x00010c2208c0(param_2);
    }
  }
  lVar2 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  dVar35 = *(double *)(param_1 + 0x88);
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c077a40();
  if ((uVar4 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010c06df60();
    uStack_1a8 = 1;
    if (iVar1 == 0) {
      uStack_1a8 = 2;
    }
  }
  else {
    uStack_1a8 = 0;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c2421a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_190,*(undefined8 *)(param_1 + 0x30));
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_1067a9d2c;
  puStack_238 = &UNK_11093b8e0;
  _objc_copyWeak(auStack_1b8,auStack_190);
  dVar35 = dVar35 + (double)param_3 * 0.01;
  uVar26 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar26);
  uVar27 = *(undefined8 *)(param_1 + 0x40);
  uStack_230 = uVar26;
  _objc_retain(uVar27);
  uStack_228 = uVar27;
  _objc_retain(lVar2);
  uVar26 = *(undefined8 *)(param_1 + 0x48);
  lStack_220 = lVar2;
  uStack_1b0 = param_3;
  _objc_retain(uVar26);
  uStack_218 = uVar26;
  _objc_retain(lVar18);
  uStack_198 = *(undefined1 *)(param_1 + 0x92);
  lStack_210 = lVar18;
  _objc_retain(param_2);
  uVar26 = *(undefined8 *)(param_1 + 0x28);
  lStack_208 = param_2;
  _objc_retain(uVar26);
  uStack_197 = *(undefined1 *)(param_1 + 0x90);
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  uStack_200 = uVar26;
  _objc_retain(uVar27);
  uVar26 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f8 = uVar27;
  _objc_retain(uVar26);
  uVar27 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = uVar26;
  dStack_1a0 = dVar35;
  _objc_retain(uVar27);
  uStack_1c0 = uVar27;
  _objc_retain(uVar5);
  uStack_196 = *(undefined1 *)(param_1 + 0x91);
  uVar30 = *(undefined8 *)(param_1 + 0x60);
  uVar27 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e8 = uVar5;
  _objc_retain(*(undefined8 *)(param_1 + 0x60));
  uVar26 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e0 = uVar27;
  uStack_1d8 = uVar30;
  _objc_retain(uVar26);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x70);
  ppuVar6 = &puStack_250;
  uStack_1d0 = uVar26;
  _objc_retainBlock();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c105440();
  if (iVar1 != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    if (lVar3 != 0) {
      uVar27 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0d4ce0(uVar27);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar27;
      func_0x00010c067fc0();
      _objc_release(uVar27);
      uVar27 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0d4bc0(uVar27);
      func_0x00010846a47c(uVar26,uVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar8);
      _objc_release(uVar26);
    }
    _objc_release(lVar3);
  }
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar32 = *plStack_280;
    do {
      lVar34 = 0;
      do {
        if (*plStack_280 != lVar32) {
          _objc_enumerationMutation(lVar9);
        }
        uVar30 = *(undefined8 *)(lStack_288 + lVar34 * 8);
        uVar26 = uVar30;
        func_0x00010c11ac00(uVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62820(uVar30);
        uVar27 = uVar26;
        func_0x00010846a570(uVar26,uVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar8);
        _objc_release(uVar27);
        _objc_release(uVar26);
        lVar34 = lVar34 + 1;
      } while (lVar3 != lVar34);
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar9);
  uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar27;
  func_0x00010bfdac40();
  _objc_release(uVar27);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar9 = param_2;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar9;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar32;
    func_0x00010bf0cb00();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar3;
    func_0x00010846a70c(lVar3,lVar34,uVar26);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar31;
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(lVar21);
    _objc_release(lVar31);
    _objc_release(lVar34);
    _objc_release(lVar32);
    _objc_release(lVar9);
  }
  uVar26 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  lVar32 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar32);
  lVar9 = lVar32;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar34 = *plStack_2c0;
    do {
      lVar31 = 0;
      do {
        if (*plStack_2c0 != lVar34) {
          _objc_enumerationMutation(lVar32);
        }
        puVar29 = *(undefined **)(lStack_2c8 + lVar31 * 8);
        puVar10 = puVar29;
        func_0x00010c08fa60();
        if (puVar10 != (undefined *)0x0) {
          lVar11 = *(long *)(param_1 + 0x28);
          func_0x00010bf252c0();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar21 == 0) {
            _objc_retain(puVar29);
            puVar10 = puVar29;
          }
          else {
            puVar10 = PTR_PTR_1126c3320;
            func_0x00010c271d40();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar21);
          _objc_release();
          func_0x000108f49898();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf24f40();
          _objc_retainAutoreleasedReturnValue();
          uVar27 = uVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf252c0();
          _objc_retainAutoreleasedReturnValue();
          uVar30 = uVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010846b038(puVar29,lVar11,uVar27,uVar30);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar29);
          _objc_release(uVar30);
          _objc_release(uVar13);
          _objc_release(uVar27);
          _objc_release(uVar12);
          _objc_release(lVar11);
          _objc_release(puVar10);
        }
        lVar31 = lVar31 + 1;
      } while (lVar9 != lVar31);
      lVar9 = lVar32;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar32);
  puVar10 = puVar8;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    lVar9 = 0;
    puVar10 = puVar7;
    (*(code *)ppuVar6[2])();
  }
  else {
    uVar27 = *(undefined8 *)(param_1 + 0x28);
    uVar30 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0ee3a0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar27;
    func_0x00010c24c6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99fa0(uVar30);
    _objc_release(uVar12);
    _objc_release(uVar27);
    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_350 = 0xc2000000;
    pcStack_348 = FUN_1067aa648;
    puStack_340 = &UNK_11093b940;
    uStack_2d8 = *(undefined1 *)(param_1 + 0x90);
    uVar27 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar27);
    uVar30 = *(undefined8 *)(param_1 + 0x50);
    uStack_338 = uVar27;
    uStack_2e8 = param_3;
    _objc_retain(uVar30);
    uStack_328 = *(undefined8 *)(param_1 + 0x30);
    uStack_330 = uVar30;
    _objc_retain(param_2);
    uVar27 = *(undefined8 *)(param_1 + 0x28);
    lStack_320 = param_2;
    dStack_2e0 = dVar35;
    _objc_retain(uVar27);
    uVar30 = *(undefined8 *)(param_1 + 0x78);
    uStack_318 = uVar27;
    _objc_retain(uVar30);
    uStack_2d7 = *(undefined1 *)(param_1 + 0x91);
    uStack_310 = uVar30;
    _objc_retain(lVar3);
    uStack_2d6 = *(undefined1 *)(param_1 + 0x92);
    lStack_308 = lVar3;
    _objc_retain(puVar7);
    puStack_300 = puVar7;
    _objc_retain(ppuVar6);
    ppuStack_2f0 = ppuVar6;
    _objc_retain(puVar8);
    ppuVar14 = &puStack_358;
    puStack_2f8 = puVar8;
    _objc_retainBlock();
    puVar29 = PTR_PTR_1126c32f0;
    _objc_alloc();
    puVar10 = puVar29;
    func_0x000107a0478c();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar10;
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0106c0();
    _objc_release(puVar15);
    _objc_release(puVar10);
    lVar9 = 1;
    ppuVar16 = ppuVar14;
    (*(code *)ppuVar14[2])();
    func_0x000107a0478c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar29;
    func_0x00010c066ea0();
    _objc_release(ppuVar17);
    _objc_release(ppuVar16);
    _objc_release(puVar29);
    _objc_release(ppuVar14);
    _objc_release(puStack_2f8);
    _objc_release(ppuStack_2f0);
    _objc_release(puStack_300);
    _objc_release(lStack_308);
    _objc_release(uStack_310);
    _objc_release(uStack_318);
    _objc_release(lStack_320);
    _objc_release(uStack_330);
    _objc_release(uStack_338);
  }
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  _objc_release(lStack_208);
  _objc_release(lStack_210);
  _objc_release(uStack_218);
  _objc_release(lStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_release(uVar5);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(lVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  __Unwind_Resume();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = lVar9;
  _objc_retain(lVar9);
  _objc_retain(puVar10);
  lVar2 = param_2 + 0x98;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_1067aa540;
  lVar18 = *(long *)(param_2 + 0x20);
  func_0x00010bf529e0();
  if ((lVar18 == 0) && (lVar18 = lVar9, func_0x00010bf529e0(), lVar18 == 0)) {
    lVar18 = *(long *)(param_2 + 0x28);
    func_0x00010bf529e0();
    if (lVar18 == 0) goto LAB_1067aa540;
  }
  func_0x00010bf529e0(lVar9);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c3300;
  _objc_alloc();
  func_0x00010c00bb80();
  lVar18 = lVar2;
  func_0x00010bec4940();
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 0x48);
    func_0x00010c2311e0();
    if ((uVar4 & 1) != 0) goto LAB_1067a9e40;
    lVar19 = *(long *)(param_2 + 0x50);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar19 != 0) goto LAB_1067a9e40;
    uVar26 = 0;
  }
  else {
LAB_1067a9e40:
    uVar27 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c1048c0(uVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar27;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar5);
    _objc_release(uVar27);
  }
  lVar32 = *(long *)(param_2 + 0x48);
  if ((*(byte *)(param_2 + 0xb9) & 1) == 0) {
    uVar27 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c15a0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x000107a05454(uVar27,uVar26,lVar32,lVar18,uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar19 = *(long *)(param_2 + 0x58);
    uVar30 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c0d2360(uVar30);
    uVar12 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c0d2380(uVar12);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bf98360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar5;
    func_0x00010bf529e0();
    uVar28 = *(undefined8 *)(param_2 + 0xa0);
    uVar13 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c27c860(uVar13);
    uVar36 = *(undefined8 *)(param_2 + 0xb0);
    uVar20 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107a06358(uVar36,uVar26,lVar32,lVar19,uVar30,uVar12,uVar27,uVar28,uVar13,lVar18,uVar20
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
  }
  _objc_release(uVar5);
  lVar34 = *(long *)(param_2 + 0x90);
  if (lVar34 != 0) {
    lVar19 = lVar32;
    (**(code **)(lVar34 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar32);
    lVar32 = lVar34;
  }
  lVar31 = *(long *)(param_2 + 0x48);
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar31;
  func_0x00010bf529e0();
  if (lVar34 == 0) {
    puStack_620 = (undefined *)0x0;
  }
  else {
    puStack_620 = PTR_PTR_1126be7b0;
    _objc_alloc_init();
  }
  _objc_release(lVar31);
  lVar34 = *(long *)(param_2 + 0x48);
  func_0x00010c09dd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar34 == 0) {
    lVar31 = *(long *)(param_2 + 0x48);
    func_0x00010bf9dee0();
    _objc_retainAutoreleasedReturnValue();
    lStack_628 = lVar31;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar31);
  }
  else {
    _objc_retain(lVar34);
    lStack_628 = lVar34;
  }
  _objc_release(lVar34);
  puVar29 = PTR_PTR_1126c3308;
  func_0x00010c241d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9520();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar2 + 8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar26;
  func_0x00010c25ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba600(puVar29);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar34 = lVar32;
  func_0x000107d66158();
  if ((int)lVar34 != 0) {
    func_0x00010c2b3e20(puVar29);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar15 = puVar29;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c60a0();
  func_0x00010846b19c();
  _objc_release(uVar5);
  if (*(char *)(param_2 + 0xba) == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    puStack_5e0 = *(undefined **)(param_2 + 0x48);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puStack_5e0;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar12;
    func_0x00010c0ef740();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf5caa0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar13;
    func_0x00010c25a3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5cae0(uVar5);
    _objc_release(uVar30);
    _objc_release(uVar13);
    _objc_release(uVar27);
    _objc_release(uVar12);
  }
  else {
    puStack_5e0 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lVar21 = *(long *)(param_2 + 0x50);
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar21;
    func_0x00010bf52a60();
    lVar31 = lRam0000000000000000;
    while (lVar34 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar31) {
          _objc_enumerationMutation(lVar21);
        }
        lVar33 = *(long *)(lVar11 * 8);
        lVar22 = lVar33;
        func_0x00010c27dd80();
        if (lVar22 == 10) {
          lVar22 = lVar33;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          lVar23 = lVar22;
          func_0x00010c08fa60();
          _objc_release(lVar22);
          if (lVar23 != 0) {
            func_0x00010c11ac00(lVar33);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_5e0);
            _objc_release(lVar33);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar34 != lVar11);
      lVar34 = lVar21;
      func_0x00010bf52a60();
    }
    _objc_release(lVar21);
    puVar24 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(lVar9);
    func_0x00010bf71fe0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar9);
    lVar34 = lVar9;
    func_0x00010bf52a60();
    lVar31 = lRam0000000000000000;
    while (lVar34 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar31) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010bf4b900();
        puVar25 = PTR_PTR_1126c3310;
        _objc_alloc(PTR_PTR_1126c3310);
        lVar11 = lVar9;
        func_0x00010c0e00e0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02bae0(puVar25);
        func_0x00010c1d0640(puVar24);
        _objc_release(puVar25);
        _objc_release(lVar11);
        lVar21 = lVar21 + 1;
      } while (lVar34 != lVar21);
      lVar34 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ca40();
    _objc_release(uVar5);
  }
  _objc_release(puVar24);
  _objc_release(puStack_5e0);
  _objc_release(puVar15);
  _objc_release(uVar26);
  _objc_release(puVar29);
  _objc_release(lStack_628);
  _objc_release(puStack_620);
  _objc_release(lVar32);
  _objc_release(lVar18);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_1067aa540:
  _objc_release(lVar2);
  _objc_release(puVar10);
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar19 + 0x20));
  _objc_retain(*(undefined8 *)(lVar19 + 0x28));
  _objc_retain(*(undefined8 *)(lVar19 + 0x30));
  _objc_retain(*(undefined8 *)(lVar19 + 0x38));
  _objc_retain(*(undefined8 *)(lVar19 + 0x40));
  _objc_retain(*(undefined8 *)(lVar19 + 0x48));
  _objc_retain(*(undefined8 *)(lVar19 + 0x50));
  _objc_retain(*(undefined8 *)(lVar19 + 0x58));
  _objc_retain(*(undefined8 *)(lVar19 + 0x60));
  _objc_retain(*(undefined8 *)(lVar19 + 0x68));
  _objc_retain(*(undefined8 *)(lVar19 + 0x70));
  _objc_retain(*(undefined8 *)(lVar19 + 0x78));
  _objc_retain(*(undefined8 *)(lVar19 + 0x80));
  _objc_retain(*(undefined8 *)(lVar19 + 0x88));
  __Block_object_assign(lVar9 + 0x90,*(undefined8 *)(lVar19 + 0x90),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(lVar9 + 0x98,lVar19 + 0x98);
  return;
}



/* Entry: 1067a9d2c; end: 1067aa59f;  */

void FUN_1067a9d2c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_210;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x98;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1067aa540;
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = *(long *)(param_2 + 0x28);
    func_0x00010bf529e0();
    if (lVar2 == 0) goto LAB_1067aa540;
  }
  func_0x00010bf529e0(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3300;
  _objc_alloc();
  func_0x00010c00bb80();
  lVar2 = lVar1;
  func_0x00010bec4940();
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + 0x48);
    func_0x00010c2311e0();
    if ((uVar5 & 1) != 0) goto LAB_1067a9e40;
    lVar6 = *(long *)(param_2 + 0x50);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) goto LAB_1067a9e40;
    param_1 = 0;
  }
  else {
LAB_1067a9e40:
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c1048c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar10);
    _objc_release(uVar7);
  }
  lVar25 = *(long *)(param_2 + 0x48);
  if ((*(byte *)(param_2 + 0xb9) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0xb0);
    uVar10 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c15a0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x000107a05454(uVar7,param_1,lVar25,lVar2,uVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = *(long *)(param_2 + 0x58);
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c0d2360(uVar8);
    uVar9 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c0d2380(uVar9);
    uVar10 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bf98360(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010bf529e0();
    uVar24 = *(undefined8 *)(param_2 + 0xa0);
    uVar11 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c27c860(uVar11);
    uVar27 = *(undefined8 *)(param_2 + 0xb0);
    uVar12 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107a06358(uVar27,param_1,lVar25,lVar6,uVar8,uVar9,uVar7,uVar24,uVar11,lVar2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  _objc_release(uVar10);
  lVar13 = *(long *)(param_2 + 0x90);
  if (lVar13 != 0) {
    lVar6 = lVar25;
    (**(code **)(lVar13 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar25);
    lVar25 = lVar13;
  }
  lVar14 = *(long *)(param_2 + 0x48);
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010bf529e0();
  if (lVar13 == 0) {
    puStack_250 = (undefined *)0x0;
  }
  else {
    puStack_250 = PTR_PTR_1126be7b0;
    _objc_alloc_init();
  }
  _objc_release(lVar14);
  lVar13 = *(long *)(param_2 + 0x48);
  func_0x00010c09dd60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar14 = *(long *)(param_2 + 0x48);
    func_0x00010bf9dee0();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = lVar14;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
  }
  else {
    _objc_retain(lVar13);
    lStack_258 = lVar13;
  }
  _objc_release(lVar13);
  puVar15 = PTR_PTR_1126c3308;
  func_0x00010c241d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9520();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c25ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba600(puVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  lVar13 = lVar25;
  func_0x000107d66158();
  if ((int)lVar13 != 0) {
    func_0x00010c2b3e20(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar16 = puVar15;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c60a0();
  func_0x00010846b19c();
  _objc_release(uVar10);
  if (*(char *)(param_2 + 0xba) == '\x01') {
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    puStack_210 = *(undefined **)(param_2 + 0x48);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puStack_210;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010c0ef740();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf5caa0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010c25a3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5cae0(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar11);
  }
  else {
    puStack_210 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lVar17 = *(long *)(param_2 + 0x50);
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar17;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(lVar17);
        }
        lVar26 = *(long *)(lVar23 * 8);
        lVar18 = lVar26;
        func_0x00010c27dd80();
        if (lVar18 == 10) {
          lVar18 = lVar26;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar18;
          func_0x00010c08fa60();
          _objc_release(lVar18);
          if (lVar19 != 0) {
            func_0x00010c11ac00(lVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_210);
            _objc_release(lVar26);
          }
        }
        lVar23 = lVar23 + 1;
      } while (lVar13 != lVar23);
      lVar13 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar13 = param_3;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bf4b900();
        puVar21 = PTR_PTR_1126c3310;
        _objc_alloc(PTR_PTR_1126c3310);
        lVar23 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02bae0(puVar21);
        func_0x00010c1d0640(puVar20);
        _objc_release(puVar21);
        _objc_release(lVar23);
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
      lVar13 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar10 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ca40();
    _objc_release(uVar10);
  }
  _objc_release(puVar20);
  _objc_release(puStack_210);
  _objc_release(puVar16);
  _objc_release(uVar7);
  _objc_release(puVar15);
  _objc_release(lStack_258);
  _objc_release(puStack_250);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1067aa540:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar6 + 0x20));
  _objc_retain(*(undefined8 *)(lVar6 + 0x28));
  _objc_retain(*(undefined8 *)(lVar6 + 0x30));
  _objc_retain(*(undefined8 *)(lVar6 + 0x38));
  _objc_retain(*(undefined8 *)(lVar6 + 0x40));
  _objc_retain(*(undefined8 *)(lVar6 + 0x48));
  _objc_retain(*(undefined8 *)(lVar6 + 0x50));
  _objc_retain(*(undefined8 *)(lVar6 + 0x58));
  _objc_retain(*(undefined8 *)(lVar6 + 0x60));
  _objc_retain(*(undefined8 *)(lVar6 + 0x68));
  _objc_retain(*(undefined8 *)(lVar6 + 0x70));
  _objc_retain(*(undefined8 *)(lVar6 + 0x78));
  _objc_retain(*(undefined8 *)(lVar6 + 0x80));
  _objc_retain(*(undefined8 *)(lVar6 + 0x88));
  __Block_object_assign(param_3 + 0x90,*(undefined8 *)(lVar6 + 0x90),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_3 + 0x98,lVar6 + 0x98);
  return;
}



/* Entry: 1067aa5a0; end: 1067aa647;  */

void FUN_1067aa5a0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x98,param_2 + 0x98);
  return;
}



/* Entry: 1067aa648; end: 1067aa7e3;  */

void FUN_1067aa648(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar1 = &puStack_a0;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    puVar2 = PTR_PTR_1126c32f8;
    _objc_alloc(PTR_PTR_1126c32f8);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf98360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bff9aa0(puVar2);
    _objc_release(uVar3);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010be3c9a0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x30));
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1067aa7e4;
  puStack_88 = &UNK_11093b910;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = uVar3;
  _objc_retain(uVar4);
  uStack_48 = *(undefined1 *)(param_1 + 0x82);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar4;
  _objc_retain(uVar3);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = uVar4;
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar5;
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  _objc_retainBlock();
  (**(code **)((long)ppuVar1 + 0x10))();
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(puVar2);
  return;
}



/* Entry: 1067aa7e4; end: 1067aa97b;  */

void FUN_1067aa7e4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  
  uVar2 = param_2;
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar2 = param_2;
    func_0x00010c08fa60();
    if (uVar2 < 0x4001) goto LAB_1067aa884;
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(param_2);
    func_0x00010c0b0d00(uVar2);
    _objc_release(uVar2);
  }
  func_0x000107a30ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac880();
  _objc_release(uVar2);
LAB_1067aa884:
  if (*(long *)(param_1 + 0x28) == 0) {
    bVar8 = *(byte *)(param_1 + 0x58);
  }
  else {
    bVar8 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107a30ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfcd340(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c24c6e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a0667c(uVar7,param_2,bVar8 & 1,uVar3,uVar4,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
            (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067aa97c; end: 1067aa97f;  */

void FUN_1067aa97c(void)

{
  return;
}



/* Entry: 1067aa980; end: 1067ab3cf; -[SCPreviewSnapSender _insertStorySnapsIntoStoriesWithEphemeralMedia:creationTimestamp:storiesPostingConfig:businessIds:multiSnapInfo:isEligibleForCrossPostingSpotlightToStories:] */

void FUN_1067aa980(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_8 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = puVar1;
    func_0x000109175acc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010bec4940();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010c105440();
    if (((int)lVar5 != 0) &&
       (lVar5 = lVar4, func_0x00010c08fa60(), puVar6 = PTR_PTR_1126c2fc8, lVar5 != 0)) {
      _objc_retain(lVar4);
      _objc_alloc(puVar6);
      func_0x00010c0d4bc0(param_5);
      func_0x00010c0559e0(puVar6);
      puVar23 = PTR_PTR_1126c2fd0;
      func_0x00010c293b20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      func_0x00010c0d4bc0(param_5);
      func_0x00010846b274();
      lVar7 = param_5;
      func_0x00010c15a0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      func_0x000107a06ccc(param_1,param_4,lVar3,lVar4,puVar2,lVar4,puVar23,lVar5,param_7,lVar7,
                          *(undefined8 *)(param_2 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(lVar4);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(lVar7);
      _objc_release(puVar23);
      _objc_release(puVar6);
    }
    lVar10 = param_5;
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar10);
        }
        uVar22 = *(undefined8 *)(lVar21 * 8);
        uVar8 = uVar22;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c3328;
        _objc_alloc();
        func_0x00010c27dd80(uVar22);
        func_0x00010bf62820(uVar22);
        func_0x00010c1143e0(uVar22);
        func_0x00010c04dca0();
        puVar23 = PTR_PTR_1126c2fd0;
        func_0x00010bf62300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62820(uVar22);
        func_0x00010846b274();
        lVar14 = param_5;
        func_0x00010c15a0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_4;
        func_0x000107a06ccc(param_1,param_4,lVar3,uVar8,puVar2,lVar4,puVar23,uVar22,param_7,lVar14,
                            *(undefined8 *)(param_2 + 0x40));
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar9);
        _objc_release(uVar11);
        _objc_release(lVar14);
        _objc_release(puVar23);
        _objc_release(puVar6);
        _objc_release(uVar8);
        lVar21 = lVar21 + 1;
      } while (lVar5 != lVar21);
      lVar5 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    lVar5 = param_5;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    if ((lVar5 != 0) && (lVar10 == 0)) {
      lVar7 = lVar5;
      func_0x00010c259bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar5;
      func_0x00010c0ee300(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108f41ba8();
      _objc_release(lVar10);
      lVar10 = lVar5;
      func_0x00010c0ee300(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108f41bb4();
      _objc_release(lVar10);
      puVar6 = PTR_PTR_1126c3330;
      _objc_alloc();
      func_0x00010c04d900();
      puVar23 = PTR_PTR_1126c2fd0;
      func_0x00010c0ee380();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uRam000000011325c068;
      lVar10 = param_5;
      func_0x00010c15a0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_4;
      func_0x000107a06ccc(param_1,param_4,lVar3,lVar7,puVar2,lVar4,puVar23,uVar8,param_7,lVar10,
                          *(undefined8 *)(param_2 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar9);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(puVar23);
      _objc_release(puVar6);
      _objc_release(lVar7);
    }
    puVar6 = puVar1;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107a0478c();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ca0();
      _objc_release(puVar23);
      _objc_release(puVar6);
    }
    lVar7 = param_6;
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      uVar8 = param_4;
      FUN_1067ab3d0(param_4,3,3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      _objc_retain(param_6);
      lVar7 = param_6;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar21 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(param_6);
          }
          puVar23 = *(undefined **)(lVar21 * 8);
          _objc_retain(puVar23);
          lVar14 = param_5;
          func_0x00010bf252c0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
            _objc_retain(puVar23);
            puVar9 = puVar23;
          }
          else {
            puVar9 = PTR_PTR_1126c3320;
            func_0x00010c271d40();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar12);
          _objc_release(lVar14);
          lVar14 = param_5;
          func_0x00010bf24f40();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar14);
          if (lVar12 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_5;
            func_0x00010bf24f40(param_5);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            _objc_release(lVar12);
            _objc_release(lVar14);
            lVar12 = param_5;
            func_0x00010bf24f40(param_5);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010c067ec0();
            lVar14 = (long)(int)lVar14;
            func_0x00010846b274(lVar14);
            _objc_release(lVar13);
            _objc_release(lVar12);
          }
          puVar15 = PTR_PTR_1126c2fc8;
          _objc_alloc();
          func_0x00010c0559e0();
          puVar16 = PTR_PTR_1126c2fd0;
          func_0x00010c293b20();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_5;
          func_0x00010c15a0e0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_4;
          func_0x000107a06ccc(param_1,param_4,lVar3,puVar23,puVar2,lVar4,puVar16,lVar14,param_7,
                              lVar12,*(undefined8 *)(param_2 + 0x40));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          puVar17 = PTR_PTR_1126c3338;
          _objc_alloc();
          uVar22 = param_4;
          func_0x00010bf3cf60(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_opt_new();
          uVar19 = param_4;
          func_0x00010bf30620(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = param_5;
          func_0x00010bfcd340(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bffefc0();
          _objc_release(lVar14);
          _objc_release(uVar19);
          _objc_release(puVar18);
          _objc_release(uVar22);
          func_0x00010c1d0640(puVar6);
          _objc_release(puVar17);
          _objc_release(uVar11);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar9);
          _objc_release(puVar23);
          lVar21 = lVar21 + 1;
        } while (lVar7 != lVar21);
        lVar7 = param_6;
        func_0x00010bf52a60();
      }
      lVar7 = param_6;
      _objc_release(param_6);
      func_0x000107a0478c();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066c80();
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(uVar8);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar8 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126bfca8;
  _objc_retain(param_4);
  _objc_retain(uVar11);
  _objc_alloc(puVar1);
  uVar8 = param_4;
  func_0x00010bf98340(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010bf98320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar1);
  _objc_release(uVar22);
  _objc_release(uVar8);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  func_0x00010c27dd80(param_4);
  uVar8 = param_4;
  func_0x00010c0c3fe0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0efce0(uVar8);
  func_0x00010bffa840(puVar6);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067ab3d0; end: 1067ab5bb;  */

void FUN_1067ab3d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bfca8;
  _objc_retain(param_1);
  _objc_retain(uVar2);
  _objc_alloc(puVar3);
  uVar1 = param_1;
  func_0x00010bf98340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf98320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  func_0x00010c27dd80(param_1);
  uVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0efce0(uVar1);
  func_0x00010bffa840(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067ab5bc; end: 1067ab79b; -[SCPreviewSnapSender _saveStoryThumbnailDataToThumbnailCoordinatorIfPossible:spotlightCoverTile:] */

void FUN_1067ab5bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c4980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = param_3;
    FUN_1067ab3d0(param_3,1,3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c26e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbec0(uVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x000108faa2d8();
    if (iVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar2 = param_3;
      FUN_1067ab3d0(param_3,3,2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010c130480(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbec0(uVar6);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ab79c; end: 1067ab893; -[SCPreviewSnapSender _loadStoryThumbnailDataWithMedia:completion:] */

void FUN_1067ab79c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  FUN_1067ab3d0(param_3,1,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c11da60(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ab894; end: 1067ab90b;  */

void FUN_1067ab894(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107a30ee0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b0ce0(param_1 - *(double *)(param_2 + 0x30),uVar1);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ab90c; end: 1067ab9d3; -[SCPreviewSnapSender _showStatusMessage:toMassSnap:] */

void FUN_1067ab90c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  if (param_3 == 0) {
    if (param_4 != 0) {
      param_1 = *(long *)(param_1 + 0xa0);
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86140();
      goto LAB_1067ab9c0;
    }
    func_0x000108edeed0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edeee8();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c238720(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
LAB_1067ab9c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067ab9d4; end: 1067aba9f; -[SCPreviewSnapSender _showStatusMessageWithTextColor:backgroundColor:success:] */

void FUN_1067ab9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afca8;
  if (param_5 == 0) {
    func_0x000108edeed0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238720(puVar1,param_2,uVar2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x000108edeee8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar1,param_2,uVar2,param_4,param_3);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067abaa0; end: 1067abd77; -[SCPreviewSnapSender sendQuickGroupChatMedia:conversationId:commonLoggingParams:destinationInfo:provenance:timing:] */

void FUN_1067abaa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long lVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bddd060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x000106e0c1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5280();
  _objc_release(param_7);
  func_0x00010c216040(uVar1);
  _objc_release(param_8);
  puVar3 = PTR_PTR_1126cdef8;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028fc0();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126cdf00;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016f80();
  _objc_release(puVar5);
  lVar6 = param_1;
  func_0x00010be5f180();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  uVar17 = 0;
  puVar11 = puVar4;
  puVar12 = puVar5;
  lVar15 = lVar2;
  func_0x00010c15be80(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar7);
  uVar8 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  _objc_opt_respondsToSelector();
  _objc_release(param_4);
  _objc_release(uVar8);
  if ((uVar9 & 1) != 0) {
    param_1 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    func_0x00010bf7b400();
    _objc_release(param_1);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  puVar3 = PTR_PTR_1126b4470;
  _objc_retain(lVar6);
  _objc_retain(uVar17);
  _objc_retain(lVar15);
  _objc_retain(uVar13);
  _objc_retain(puVar12);
  _objc_opt_class(puVar3);
  puVar4 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar3);
  puVar3 = puVar11;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf982c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c4290;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010853f31c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010720();
  _objc_release(lVar6);
  _objc_release(puVar10);
  _objc_release(puVar5);
  func_0x00010c1b13a0(puVar3);
  puVar5 = puVar3;
  puVar10 = puVar12;
  uVar1 = uVar13;
  lVar6 = lVar15;
  uVar7 = uVar17;
  func_0x00010c15bc20(lVar2);
  uVar16 = (undefined1)uVar7;
  uVar14 = (undefined1)lVar6;
  _objc_release(uVar17);
  _objc_release(lVar15);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  uVar7 = uVar1;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1067ac110;
  puStack_198 = &UNK_110842e18;
  _objc_retain(uVar7);
  uStack_190 = uVar7;
  func_0x00010bdf1ae0(puVar11);
  _dispatch_group_enter(uVar7);
  puStack_1d8 = puVar3;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x1067ac118;
  puStack_1c0 = &UNK_110842e18;
  uStack_1b8 = uVar7;
  _objc_retain(uVar7);
  func_0x00010bdf4180(puVar11);
  puStack_220 = puVar3;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_1067ac120;
  puStack_208 = &UNK_110865268;
  puStack_200 = puVar11;
  puStack_1f8 = puVar5;
  puStack_1f0 = puVar10;
  uStack_1e8 = uVar1;
  uStack_1e0 = uVar14;
  uStack_1df = uVar16;
  _objc_retain(uVar1);
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  func_0x000100bc0718(uVar7,PTR___dispatch_main_q_11034be20,&puStack_220);
  _objc_release(uStack_1e8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1f8);
  _objc_release(uStack_1b8);
  _objc_release(uStack_190);
  _objc_release(uVar1);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(uVar7);
  return;
}



/* Entry: 1067abd78; end: 1067abf5f; -[SCPreviewSnapSender postStoryFromDiscover:snapSenderDataModel:lensAssetsUploadInfo:lensMetadataFuture:mischiefs:galleryStorySaver:] */

void FUN_1067abd78(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4470;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf982c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c4290;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010853f31c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010720();
  _objc_release(param_8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1b13a0(puVar2);
  puVar4 = puVar2;
  uVar7 = param_4;
  uVar8 = param_5;
  uVar6 = param_6;
  uVar11 = param_7;
  func_0x00010c15bc20(param_1);
  uVar10 = (undefined1)uVar11;
  uVar9 = (undefined1)uVar6;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(uVar7);
  uVar6 = uVar8;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1067ac110;
  puStack_118 = &UNK_110842e18;
  _objc_retain(uVar6);
  uStack_110 = uVar6;
  func_0x00010bdf1ae0(param_3);
  _dispatch_group_enter(uVar6);
  puStack_158 = puVar2;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x1067ac118;
  puStack_140 = &UNK_110842e18;
  uStack_138 = uVar6;
  _objc_retain(uVar6);
  func_0x00010bdf4180(param_3);
  puStack_1a0 = puVar2;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1067ac120;
  puStack_188 = &UNK_110865268;
  uStack_180 = param_3;
  puStack_178 = puVar4;
  uStack_170 = uVar7;
  uStack_168 = uVar8;
  uStack_160 = uVar9;
  uStack_15f = uVar10;
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(puVar4);
  func_0x000100bc0718(uVar6,PTR___dispatch_main_q_11034be20,&puStack_1a0);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(puStack_178);
  _objc_release(uStack_138);
  _objc_release(uStack_110);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  return;
}



/* Entry: 1067abf60; end: 1067ac10f; -[SCPreviewSnapSender _asyncStickerTasksWithEphemeralMedia:storiesPostingConfig:businessIds:showToastWhenComplete:isSendToPagePresentedFromPreview:isSnapEditor:] */

void FUN_1067abf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1067ac110;
  puStack_88 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_80 = uVar2;
  func_0x00010bdf1ae0(param_1);
  _dispatch_group_enter(uVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1067ac118;
  puStack_b0 = &UNK_110842e18;
  uStack_a8 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bdf4180(param_1);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1067ac120;
  puStack_f8 = &UNK_110865268;
  uStack_f0 = param_1;
  uStack_e8 = param_3;
  uStack_e0 = param_4;
  uStack_d8 = param_5;
  uStack_d0 = param_6;
  uStack_cf = param_7;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_110);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1067ac110; end: 1067ac11f;  */

void FUN_1067ac110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067ac120; end: 1067ac19f;  */

void FUN_1067ac120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar5 = param_1;
  FUN_1067ad554();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f740(uVar1,param_2,uVar3,0,0,uVar2,uVar4,0,lVar5,*(undefined2 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1067ac1a0; end: 1067ac43b; -[SCPreviewSnapSender _createPollWithEphemeralMediaList:isSnapEditor:completion:] */

void FUN_1067ac1a0(long param_1,undefined8 param_2,long param_3,undefined1 param_4,long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  FUN_1067ac43c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1067ac58c;
    puStack_90 = &UNK_11093b9f0;
    uStack_78 = param_4;
    _objc_retain(lVar1);
    lStack_88 = lVar1;
    _objc_retain(param_3);
    ppuVar2 = &puStack_a8;
    lStack_80 = param_3;
    _objc_retainBlock();
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2,0);
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5);
      }
    }
    else {
      lVar4 = lVar1;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c1032e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c1032c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010bfb1160(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar8;
      func_0x00010c1032a0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar2);
      _objc_retain(param_5);
      _objc_retain(lVar8);
      func_0x00010bf58380(lVar3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar8);
      _objc_release(param_5);
      _objc_release(ppuVar2);
      _objc_release(lVar8);
    }
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(lStack_80);
    _objc_release(lStack_88);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ac43c; end: 1067ac58b;  */

void FUN_1067ac43c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      lVar8 = 0;
LAB_1067ac544:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
        return;
      }
      ___stack_chk_fail();
      if (*(char *)(param_1 + 0x30) == '\x01') {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(param_2);
        func_0x00010841fa68(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dea00();
        _objc_release(param_2);
        param_2 = uVar7;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(param_2);
        func_0x00010c1dea00(uVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar3 = lVar8;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c103300();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar5 != 0) {
        _objc_retain(lVar8);
        goto LAB_1067ac544;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1067ac58c; end: 1067ac607;  */

void FUN_1067ac58c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010841fa68(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dea00();
    _objc_release(param_2);
    param_2 = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c1dea00(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067ac608; end: 1067ac6e7;  */

void FUN_1067ac608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067ac6e8;
  puStack_60 = &UNK_11093ba20;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1067ac6e8; end: 1067ac757;  */

void FUN_1067ac6e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar3 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
  }
  else {
    func_0x00010c1deac0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c2242c0(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar3 = *(code **)(lVar1 + 0x10);
  }
  (*pcVar3)(lVar1,uVar2);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067ac748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067ac758; end: 1067acbcf; -[SCPreviewSnapSender _createStoryInviteWithEphemeralMediaList:isSnapEditor:completion:] */

void FUN_1067ac758(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    lVar1 = param_3;
    func_0x0001067aca80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5);
      }
    }
    else {
      lVar2 = lVar1;
      func_0x00010841fa68();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c259de0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar5 == 0) {
        func_0x00010c20d360(lVar2,param_2,0,0,0,0);
        lVar4 = param_3;
        func_0x00010bfb1160(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c269920();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf8d2c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(lVar4);
        lVar4 = lVar1;
        FUN_1067acbd0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c12d360(lVar8,param_2,lVar4);
        }
        if (param_5 != 0) {
          (**(code **)(param_5 + 0x10))(param_5);
        }
      }
      else {
        lVar4 = lVar1;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c259fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010c25b800(lVar5,param_2,lVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1067acd60;
        puStack_90 = &UNK_11093ba80;
        _objc_retain(lVar2);
        lStack_88 = lVar2;
        lStack_80 = lVar8;
        lStack_78 = lVar4;
        _objc_retain(lVar1);
        lStack_70 = lVar1;
        _objc_retain(param_5);
        lStack_68 = param_5;
        _objc_retain(lVar4);
        _objc_retain(lVar8);
        func_0x00010bf59300(lVar5,param_2,lVar8,lVar3,&puStack_a8);
        _objc_release(lVar3);
        _objc_release(lStack_68);
        _objc_release(lStack_70);
        _objc_release(lStack_78);
        _objc_release(lStack_80);
        _objc_release(lStack_88);
      }
      _objc_release(lVar4);
      _objc_release(lVar8);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1067acbd0; end: 1067acd5f;  */

void FUN_1067acbd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c269920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_retain(lVar2);
  lVar5 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      uVar7 = 0;
LAB_1067acd14:
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
        return;
      }
      ___stack_chk_fail();
      _objc_retain(param_2);
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = param_2;
      func_0x00010c11ac00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c06a860(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      func_0x00010c25a5c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20d360(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar5 = *(long *)(lVar2 + 0x38);
      FUN_1067acbd0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar3 = param_2;
        func_0x00010c11ac00(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar5;
        func_0x00010beedca0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40();
        _objc_release(lVar1);
        _objc_release(uVar3);
      }
      if (*(long *)(lVar2 + 0x40) != 0) {
        (**(code **)(*(long *)(lVar2 + 0x40) + 0x10))();
      }
      _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      uVar3 = uVar7;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf31ca0();
      _objc_release(uVar3);
      if ((int)uVar4 == 0x13) {
        _objc_retain(uVar7);
        goto LAB_1067acd14;
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1067acd60; end: 1067ace7b;  */

void FUN_1067acd60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c06a860(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a5c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d360(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x38);
  FUN_1067acbd0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar1 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010beedca0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40();
    _objc_release(lVar5);
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067ace7c; end: 1067ad07f; -[SCPreviewSnapSender getDestinationInfoWithRecipientUserIds:recipientUsernames:mischiefs:usesDetailedRecipientInfo:completion:] */

void FUN_1067ace7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x000108605670(param_5,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar7);
  func_0x000108605534();
  func_0x00010bf529e0();
  uVar7 = param_5;
  func_0x000107e3271c(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = param_3;
  func_0x000107e327a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar7;
  func_0x00010bf09f80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  uVar6 = param_7;
  _objc_retain(param_7);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  return;
}



/* Entry: 1067ad080; end: 1067ad10f;  */

void FUN_1067ad080(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = param_2;
  func_0x0001086063f4(param_2,*(undefined8 *)(param_1 + 0x30),uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067ad110; end: 1067ad2eb; -[SCPreviewSnapSender _chatSendPlatformAnalyticsWithSource:commonLoggingParams:destinationInfo:contentShareInfo:isForwardMessage:sendToSessionId:uuid:] */

void FUN_1067ad110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0820(puVar1,param_2,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bddd040(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2b3c60(puVar1,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c2bc480(puVar1,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = param_8;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c2b8260(puVar1,param_2,param_8);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_6 != 0) {
    func_0x00010c2aaec0(puVar1,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067ad2ec; end: 1067ad407; -[SCPreviewSnapSender _chatSendMemoriesMetricsInfo:] */

void FUN_1067ad2ec(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bfbafc0();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c0792a0();
      if (iVar1 == 0) goto LAB_1067ad3cc;
    }
    puVar3 = PTR_PTR_1126c3358;
    _objc_alloc();
    func_0x00010c04a720();
    puVar4 = PTR_PTR_1126c3360;
    _objc_alloc(PTR_PTR_1126c3360);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048240(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
LAB_1067ad3cc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + 0xb8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067ad408; end: 1067ad41f; -[SCPreviewSnapSender delegate] */

void FUN_1067ad408(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067ad420; end: 1067ad42b; -[SCPreviewSnapSender setDelegate:] */

void FUN_1067ad420(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 1067ad42c; end: 1067ad553; -[SCPreviewSnapSender .cxx_destruct] */

void FUN_1067ad42c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 1067ad554; end: 1067ad59f;  */

void FUN_1067ad554(void)

{
  _objc_alloc(PTR_PTR_1126b5be8);
  func_0x00010bff40a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067ad5a0; end: 1067ad9ff; -[SCPreviewSnapSenderFactoryImpl initWithConversationParser:discoverSender:userProfileIdProvider:storiesThumbnailCoordinator:circumstanceEngine:snapchatterFetcher:networkConnectivityMonitor:mediaDataIngestor:storiesMediaCoordinator:snapSender:pollsCreationManager:userTrackedBlizzardLogger:memoriesMediaSender:bitmojiMessageSender:premiumStoryShareSender:memoriesExperimentService:snapVideoFilterCoordinator:storyInviteSendingServices:sendToMassSnapNotificationService:spotlightAutoShareService:spotlightTileServices:] */

undefined8 *
FUN_1067ad5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126f3150;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 1067ada00; end: 1067ada93; -[SCPreviewSnapSenderFactoryImpl snapSenderWithConfiguration:] */

void FUN_1067ada00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cdf08;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0017a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067ada94; end: 1067adba7; -[SCPreviewSnapSenderFactoryImpl .cxx_destruct] */

void FUN_1067ada94(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 1067adba8; end: 1067ae0bf;  */

void FUN_1067adba8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000000;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  func_0x00010846b750();
  func_0x00010bf529e0();
  lVar1 = param_2;
  func_0x00010bfbb520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bf0a3a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2bd100(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    func_0x00010c2bd100(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  func_0x00010c105440();
  lVar1 = param_3;
  func_0x00010c0d4ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(ulong *)(lVar6 * 8);
      uVar4 = uVar7;
      func_0x00010c071ae0();
      if ((uVar4 & 1) == 0) {
        func_0x00010c071ae0(uVar7);
      }
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c2ba560(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd000(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcfe0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd140(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcfa0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c105440(param_3);
  func_0x00010c2bcf60(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c105460(param_3);
  func_0x00010c2bd0a0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd160(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010846b638(param_3);
  func_0x00010c2bd080(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010846b6bc(param_3);
  func_0x00010c2bd040(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba380(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0d4ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd020(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0ee3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd060(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfbb520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x000108605534(param_5);
  lVar2 = param_2;
  func_0x00010bf0a3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2b68e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c2bcf20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae860(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd0e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c22dd20(param_3);
  func_0x00010c2b6ba0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afb40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067ae0c0; end: 1067ae0ff;  */

void FUN_1067ae0c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067ae100; end: 1067ae583; -[SCPreviewSnapSenderServiceProvider _makeSnapSenderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ae100(long param_1,undefined8 param_2)

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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  
  puVar1 = PTR_PTR_1126cdf18;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127502cc;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127502d0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf828a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127502d4;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = (long)_DAT_1127502d8;
  lVar8 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127502dc;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127502e0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127502e4;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127502e8;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0c4860();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar18 = lVar40;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127502ec;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c2431e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_1127502f0;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c103760();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_1127502f4;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_1127502f8;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfbd1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_1127502fc;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf1bd60();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112750300;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c108ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112750304;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112750308;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c243b00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_11275030c;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c259f40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112750310;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010c15d360();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112750314;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112750318;
  _objc_loadWeakRetained();
  func_0x00010c005880(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar18,
                      lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar32,lVar34,lVar36,lVar38,lVar39,
                      param_1);
  _objc_release(param_1);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar40);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
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



/* Entry: 1067ae584; end: 1067ae69f; -[SCPreviewSnapSenderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ae584(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750318);
  _objc_destroyWeak(param_1 + _DAT_112750314);
  _objc_destroyWeak(param_1 + _DAT_112750310);
  _objc_destroyWeak(param_1 + _DAT_11275030c);
  _objc_destroyWeak(param_1 + _DAT_112750300);
  _objc_destroyWeak(param_1 + _DAT_112750304);
  _objc_destroyWeak(param_1 + _DAT_1127502fc);
  _objc_destroyWeak(param_1 + _DAT_1127502f8);
  _objc_destroyWeak(param_1 + _DAT_1127502f4);
  _objc_destroyWeak(param_1 + _DAT_1127502ec);
  _objc_destroyWeak(param_1 + _DAT_1127502f0);
  _objc_destroyWeak(param_1 + _DAT_1127502d8);
  _objc_destroyWeak(param_1 + _DAT_1127502e0);
  _objc_destroyWeak(param_1 + _DAT_1127502e4);
  _objc_destroyWeak(param_1 + _DAT_112750308);
  _objc_destroyWeak(param_1 + _DAT_1127502e8);
  _objc_destroyWeak(param_1 + _DAT_1127502dc);
  _objc_destroyWeak(param_1 + _DAT_1127502d4);
  _objc_destroyWeak(param_1 + _DAT_1127502d0);
  _objc_destroyWeak(param_1 + _DAT_1127502cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275031c);
  return;
}



/* Entry: 1067ae6a0; end: 1067ae83f;  */

void FUN_1067ae6a0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  
  puVar1 = PTR_PTR_1126cb278;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c2a5040(param_2);
  dVar9 = param_1;
  func_0x00010bfe0640(param_2);
  func_0x00010c0630e0(param_1,dVar9,puVar1);
  puVar2 = PTR_PTR_1126c6bf0;
  func_0x00010bf8b160(param_2);
  func_0x00010bf8b4e0(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6bf8;
  _objc_alloc(PTR_PTR_1126c6bf8);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0c4660(param_2);
  _objc_release(param_2);
  func_0x0001085439dc(uVar5);
  puVar6 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_3,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_3,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar6,param_3,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c029720(puVar3,param_3,puVar4,uVar5,0,puVar1,puVar6,puVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067ae840; end: 1067ae8b3; -[SCGrapheneSnapDocSaveMetric2 init] */

undefined1 * FUN_1067ae840(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3158;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067ae8b4; end: 1067aea27;  */

void FUN_1067ae8b4(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
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
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11093bb10,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1067aea28;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11093bb60,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1067aea28; end: 1067aea9f;  */

void FUN_1067aea28(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11093bb60,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067aeaa0; end: 1067aeb17;  */

void FUN_1067aeaa0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11093bbb0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067aeb18; end: 1067aed8f;  */

/* WARNING: Removing unreachable block (ram,0x0001067aed60) */

long *****
FUN_1067aeb18(long param_1,long *****param_2,char *param_3,long *****param_4,long *****param_5)

{
  char *pcVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  int iVar6;
  undefined *puVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long lVar11;
  long ****pppplVar12;
  long *plVar13;
  long ****unaff_x23;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  long ****pppplStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long ***ppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long ****pppplStack_118;
  long ****apppplStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppppplVar4 = (long *****)&ppplStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = param_2;
  ppppplVar5 = (long *****)param_3;
  ppppplVar10 = param_4;
  _objc_retain(param_2);
  iVar6 = (int)ppppplVar2;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (long *****)0x0) {
      param_3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    ppplStack_c0 = (long ***)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&ppplStack_c0,auStack_a0,&lStack_58,3);
    puVar7 = &UNK_11093bc00;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093bc00,&ppplStack_c0,param_5);
    puStack_a8 = (undefined1 *)&ppplStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    ppppplVar5 = ppppplVar4;
    ppppplVar10 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      iVar6 = (int)puVar7;
      lVar11 = lVar11 + -0x18;
      unaff_x23 = &ppplStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  ppppplVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppplVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = (long ****)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (long ****)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  ppppplVar3 = ppppplVar2;
  __Unwind_Resume();
  ppppplVar8 = (long *****)&ppplStack_130;
  pcStack_c8 = FUN_1067aed90;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = (long *****)0x0;
  ppppplVar9 = ppppplVar5;
  puStack_f0 = auStack_a0;
  pppplStack_e8 = (long ****)ppppplVar2;
  pppplStack_e0 = (long ****)param_4;
  pppplStack_d8 = (long ****)param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (ppppplVar3 != (long *****)0x0) {
    param_4 = (long *****)ppppplVar3[1];
    pcVar1 = "true";
    if (iVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(apppplStack_110,pcVar1);
    ppplStack_130 = (long ***)0x0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x00010007e1e8(&ppplStack_130,apppplStack_110,&lStack_f8,1);
    iVar6 = 0x1093bc50;
    (*(code *)(*param_4)[3])(param_4,&UNK_11093bc50,&ppplStack_130,ppppplVar5);
    ppppplVar4 = &pppplStack_118;
    pppplStack_118 = &ppplStack_130;
    func_0x00010007e5dc();
    ppppplVar9 = ppppplVar8;
    ppppplVar10 = ppppplVar5;
    ppppplVar2 = (long *****)&ppplStack_130;
    if (cStack_f9 < '\0') {
      ppppplVar4 = (long *****)apppplStack_110[0];
      __ZdlPv();
      ppppplVar9 = ppppplVar8;
      ppppplVar10 = ppppplVar5;
      ppppplVar2 = (long *****)&ppplStack_130;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return ppppplVar4;
  }
  ___stack_chk_fail();
  pppplStack_118 = (long ****)ppppplVar2;
  func_0x00010007e5dc(&pppplStack_118);
  if (cStack_f9 < '\0') {
    __ZdlPv(apppplStack_110[0]);
  }
  ppppplVar5 = ppppplVar4;
  __Unwind_Resume();
  pcStack_138 = FUN_1067aeea8;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_170 = (long ****)param_3;
  puStack_168 = (undefined1 *)unaff_x23;
  puStack_160 = auStack_a0;
  pppplStack_158 = (long ****)ppppplVar2;
  pppplStack_150 = (long ****)param_4;
  pppplStack_148 = (long ****)ppppplVar4;
  ppuStack_140 = &puStack_d0;
  _objc_retain(ppppplVar9);
  if (ppppplVar5 != (long *****)0x0) {
    pppplVar12 = ppppplVar5[1];
    pcVar1 = "true";
    if (iVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1a8,pcVar1);
    _objc_retain(ppppplVar9);
    if (ppppplVar9 == (long *****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppplVar9);
      pcVar1 = (char *)ppppplVar9;
      func_0x00010bdc3520(ppppplVar9);
    }
    _objc_release(ppppplVar9);
    func_0x00010002b838(auStack_190,pcVar1);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    func_0x00010007e1e8(&uStack_1c8,auStack_1a8,&lStack_178,2);
    (*(code *)(*pppplVar12)[3])(pppplVar12,&UNK_11093bca0,&uStack_1c8,ppppplVar10);
    puStack_1b0 = &uStack_1c8;
    func_0x00010007e5dc(&puStack_1b0);
    lVar11 = 0;
    do {
      if ((&cStack_179)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  ppppplVar2 = ppppplVar9;
  _objc_release(ppppplVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_release(ppppplVar9);
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    _objc_release(ppppplVar9);
    __Unwind_Resume(ppppplVar2);
    return (long *****)&PTR____CFConstantStringClassReference_110e5f2d8;
  }
  return ppppplVar2;
}



/* Entry: 1067aed90; end: 1067aeea7;  */

undefined1 ** FUN_1067aed90(long param_1,int param_2,undefined1 **param_3,undefined1 **param_4)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long lVar6;
  undefined1 **unaff_x21;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar3 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  ppuVar4 = param_3;
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if (param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    puStack_70 = (undefined1 *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x1093bc50;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11093bc50,&puStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    ppuVar4 = ppuVar3;
    param_4 = param_3;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      ppuVar4 = ppuVar3;
      param_4 = param_3;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar4);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar5 = (long *)ppuVar1[1];
    pcVar2 = "true";
    if (param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_e8,pcVar2);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar4);
      pcVar2 = (char *)ppuVar4;
      func_0x00010bdc3520(ppuVar4);
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_d0,pcVar2);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010007e1e8(&uStack_108,auStack_e8,&lStack_b8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11093bca0,&uStack_108,param_4);
    puStack_f0 = &uStack_108;
    func_0x00010007e5dc(&puStack_f0);
    lVar6 = 0;
    do {
      if ((&cStack_b9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  ppuVar1 = ppuVar4;
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  _objc_release(ppuVar4);
  __Unwind_Resume(ppuVar1);
  return &PTR____CFConstantStringClassReference_110e5f2d8;
}



/* Entry: 1067aeea8; end: 1067af093;  */

undefined ** FUN_1067aeea8(long param_1,int param_2,undefined **param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
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
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11093bca0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  ppuVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110e5f2d8;
}



/* Entry: 1067af094; end: 1067af09f; +[SCCSendflowCreateSendService modulePath] */

undefined ** FUN_1067af094(void)

{
  return &PTR____CFConstantStringClassReference_110e5f2d8;
}



/* Entry: 1067af0a0; end: 1067af0a7; +[SCCSendflowCreateSendService asyncStrictMode] */

undefined8 FUN_1067af0a0(void)

{
  return 0;
}



/* Entry: 1067af0a8; end: 1067af0ef; -[SCCSendflowCreateSendService createSendService] */

void FUN_1067af0a8(long param_1)

{
  long lVar1;
  
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067af0f0; end: 1067af1a3; +[SCCSendflowCreateSendService invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_1067af0f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1067af1a4;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067af1a4; end: 1067af22b;  */

void FUN_1067af1a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cdf20;
  func_0x00010bfbc0e0(PTR_PTR_1126cdf20,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067af22c; end: 1067af24f; +[SCCSendflowCreateSendService valdiMarshallableObjectDescriptor] */

void FUN_1067af22c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093bd60;
  param_1[1] = &PTR_DAT_11093bd90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1067af250; end: 1067af2df; -[SCOperaPreviewToolbarServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067af250(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_112750324;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c112000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cdf28;
  _objc_alloc(PTR_PTR_1126cdf28);
  func_0x00010c039cc0();
  puVar3 = PTR_PTR_1126cdf30;
  _objc_alloc(PTR_PTR_1126cdf30);
  func_0x00010c031de0();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067af2e0; end: 1067af317; -[SCOperaPreviewToolbarServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067af2e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750324);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750328);
  return;
}



/* Entry: 1067af318; end: 1067af3ef; -[SCOperaPreviewToolbarLayerView initWithPreviewToolbarFactory:previewToolbarActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067af318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f3160;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275032c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112750330),param_4);
    func_0x00010c1fbe00(puVar1);
    func_0x00010bdee0a0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067af3f0; end: 1067af6f7; -[SCOperaPreviewToolbarLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067af3f0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  ushort uVar17;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar15 = param_7;
  func_0x00010bf926c0();
  if ((int)lVar15 != 0) {
    lVar15 = param_7;
    func_0x00010c273ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar15;
    func_0x00010bf529e0();
    _objc_release(lVar15);
    if (lVar13 != 0) {
      lVar13 = (long)_DAT_112750334;
      uVar12 = *(ulong *)(param_5 + lVar13);
      lVar15 = param_7;
      func_0x00010c273ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar12,param_6,lVar15);
      _objc_release(lVar15);
      if ((uVar12 & 1) == 0) {
        lVar15 = param_7;
        func_0x00010c273ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_5 + lVar13);
        *(long *)(param_5 + lVar13) = lVar15;
        _objc_release(uVar10);
        lVar14 = (long)_DAT_112750338;
        func_0x00010c12c960(*(undefined8 *)(param_5 + lVar14));
        uVar10 = *(undefined8 *)(param_5 + _DAT_11275032c);
        lVar13 = param_7;
        func_0x00010c273ae0(param_7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_7;
        func_0x00010c273b20(param_7);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_7;
        func_0x00010bfe34c0(param_7);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_5 + _DAT_112750330;
        _objc_loadWeakRetained(lVar15);
        dVar16 = 0.0;
        func_0x00010bf57fa0(0,0,uVar10,param_6,lVar13,lVar3,lVar4,0,lVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_5 + lVar14);
        *(undefined8 *)(param_5 + lVar14) = uVar10;
        _objc_release(uVar11);
        _objc_release(lVar15);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar13);
        func_0x00010c1fbe00(*(undefined8 *)(param_5 + lVar14),param_6,3);
        func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar14));
        func_0x00010c219b60(*(undefined8 *)(param_5 + lVar14),param_6,0);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar5 = *(undefined8 *)(param_5 + lVar14);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = (long)_DAT_11275033c;
        uVar6 = *(undefined8 *)(param_5 + lVar15);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9eb40(param_7);
        param_2 = 12.0;
        uVar10 = uVar5;
        func_0x00010bf493c0(dVar16 + 12.0,uVar5,param_6,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_5 + lVar14);
        uStack_78 = uVar10;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_5 + lVar15);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = -12.0;
        uVar11 = uVar7;
        func_0x00010bf493c0(uVar7,param_6,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_70 = uVar11;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_78,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2,param_6,puVar9);
        _objc_release(puVar9);
        _objc_release(uVar11);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pdVar1 = (double *)(param_7 + _DAT_112750340);
  uVar17 = NEON_uminv(CONCAT26(-(ushort)(param_4 == pdVar1[3]),
                               CONCAT24(-(ushort)(param_3 == pdVar1[2]),
                                        CONCAT22(-(ushort)(param_2 == pdVar1[1]),
                                                 -(ushort)(param_1 == *pdVar1)))),2);
  if ((uVar17 & 1) == 0) {
    func_0x00010c181140(*(undefined8 *)(param_7 + _DAT_112750344));
    func_0x00010c181140(param_3,*(undefined8 *)(param_7 + _DAT_112750348));
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
  }
  return;
}



/* Entry: 1067af6f8; end: 1067af79b; -[SCOperaPreviewToolbarLayerView setFullPageSafeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067af6f8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  ushort uVar2;
  
  pdVar1 = (double *)(param_5 + _DAT_112750340);
  uVar2 = NEON_uminv(CONCAT26(-(ushort)(param_4 == pdVar1[3]),
                              CONCAT24(-(ushort)(param_3 == pdVar1[2]),
                                       CONCAT22(-(ushort)(param_2 == pdVar1[1]),
                                                -(ushort)(param_1 == *pdVar1)))),2);
  if ((uVar2 & 1) == 0) {
    func_0x00010c181140(*(undefined8 *)(param_5 + _DAT_112750344));
    func_0x00010c181140(param_3,*(undefined8 *)(param_5 + _DAT_112750348));
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
  }
  return;
}



/* Entry: 1067af79c; end: 1067af84b; -[SCOperaPreviewToolbarLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067af79c(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c082800();
  if ((((int)uVar1 == 0) || (uVar1 = param_3, func_0x00010c074c20(), (uVar1 & 1) != 0)) ||
     (func_0x00010bf01b40(param_3), dVar4 <= 0.0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = (long)_DAT_112750338;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe3a40(uVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067af84c; end: 1067af91b; -[SCOperaPreviewToolbarLayerView setVisible:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067af84c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  ppuVar1 = &puStack_70;
  lVar4 = (long)_DAT_11275034c;
  func_0x00010c2559c0(*(undefined8 *)(param_2 + lVar4),param_3,1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067af91c;
  puStack_58 = &UNK_110845ce0;
  lStack_50 = param_2;
  uStack_48 = param_4;
  _objc_retainBlock(&puStack_70);
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  func_0x00010c142dc0(param_1,0,PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0,param_3,0x30000,
                      ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar2;
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1067af91c; end: 1067af937;  */

void FUN_1067af91c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1067af938; end: 1067afb9b; -[SCOperaPreviewToolbarLayerView _createFullPageSafeLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067af938(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar9 = (long)_DAT_11275033c;
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar1;
  _objc_release(uVar7);
  func_0x00010bef9680(param_2,param_3,*(undefined8 *)(param_2 + lVar9));
  uVar2 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c274200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112750344;
  uVar8 = *(undefined8 *)(param_2 + lVar10);
  *(undefined8 *)(param_2 + lVar10) = uVar7;
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf1ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112750348;
  uVar8 = *(undefined8 *)(param_2 + lVar11);
  *(undefined8 *)(param_2 + lVar11) = uVar7;
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_2 + lVar9);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c08e400(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf493a0(lVar4,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar9);
  lStack_88 = lVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c1408a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_2 + lVar10);
  uStack_70 = *(undefined8 *)(param_2 + lVar11);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(lVar4 + _DAT_112750340);
}



/* Entry: 1067afb9c; end: 1067afbb3; -[SCOperaPreviewToolbarLayerView fullPageSafeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067afb9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112750340);
}



/* Entry: 1067afbb4; end: 1067afc4f; -[SCOperaPreviewToolbarLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067afbb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750334,0);
  _objc_storeStrong(param_1 + _DAT_11275034c,0);
  _objc_storeStrong(param_1 + _DAT_112750348,0);
  _objc_storeStrong(param_1 + _DAT_112750344,0);
  _objc_storeStrong(param_1 + _DAT_11275033c,0);
  _objc_storeStrong(param_1 + _DAT_112750338,0);
  _objc_storeStrong(param_1 + _DAT_11275032c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750330);
  return;
}



/* Entry: 1067afc50; end: 1067afd0b; +[SCOperaPreviewToolbarLayerViewController layerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:previewToolbarFactory:] */

void FUN_1067afc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cdf38;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010be3ab80();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067afd0c; end: 1067afe0b; -[SCOperaPreviewToolbarLayerViewController _initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:previewToolbarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067afd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3168;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112750350;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ec180();
    *(char *)((long)puVar1 + (long)_DAT_112750354) = (char)uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1067afe0c; end: 1067afe67; -[SCOperaPreviewToolbarLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067afe0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cdf40;
  _objc_alloc();
  func_0x00010c039ce0();
  lVar3 = (long)_DAT_112750358;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1067afe68; end: 1067afebf; -[SCOperaPreviewToolbarLayerViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067afe68(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3168;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  func_0x00010be19d00(param_1);
  func_0x00010c1a1600(*(undefined8 *)(param_1 + _DAT_112750358));
  return;
}



/* Entry: 1067afec0; end: 1067aff5b; -[SCOperaPreviewToolbarLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067afec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf926c0(param_4);
  lVar2 = (long)_DAT_112750358;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,(uint)uVar1 ^ 1);
  uVar1 = param_4;
  func_0x00010bf926c0();
  if ((int)uVar1 != 0) {
    func_0x00010c2298c0(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_60);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1067aff5c; end: 1067b002f; -[SCOperaPreviewToolbarLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067aff5c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_112750358));
  return;
}



/* Entry: 1067b0030; end: 1067b015b; -[SCOperaPreviewToolbarLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b0030(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c112080(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c29efc0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9410;
  if (lVar2 == 0) {
    if (lVar3 == 0) goto LAB_1067b0144;
    func_0x00010c29efc0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c112080(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010c223860(0x3fb999999999999a,*(undefined8 *)(param_1 + _DAT_112750358),param_2,
                      (uint)lVar3 ^ 1);
LAB_1067b0144:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067b015c; end: 1067b032f; -[SCOperaPreviewToolbarLayerViewController didTapOnItemType:] */

void FUN_1067b015c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 == 0x13) || (param_3 == 0xe)) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110eaffb8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eaffb8);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010c01e540();
    ppuStack_48 = &PTR____CFConstantStringClassReference_110eaffd8;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110eaff98;
    _objc_retain(&PTR____CFConstantStringClassReference_110eaff98);
    _objc_release(puVar1);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1067b02c4;
  puStack_68 = &UNK_110848ba8;
  uStack_60 = param_1;
  ppuStack_58 = ppuVar4;
  puStack_50 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(ppuVar4);
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(puStack_50);
  _objc_release(ppuStack_58);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar5 + 0x20);
  func_0x00010bf99b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar5 + 0x20);
  func_0x00010c0f0be0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067b0330; end: 1067b0333; -[SCOperaPreviewToolbarLayerViewController didLongPressOnItemType:] */

void FUN_1067b0330(void)

{
  return;
}



/* Entry: 1067b0334; end: 1067b034f; -[SCOperaPreviewToolbarLayerViewController layerViewContainerOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067b0334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + _DAT_112750354) == '\0') {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1067b0350; end: 1067b05c3; -[SCOperaPreviewToolbarLayerViewController _fullPageInsetsForLayerView] */

double FUN_1067b0350(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = param_5;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar5 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar3 = param_5;
  func_0x00010c0f3ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar1,param_6,uVar4);
  dVar6 = dVar5;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c08c520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  _objc_release(uVar1);
  dVar7 = dVar5;
  _CGRectGetMinY(dVar5,uVar8,uVar9,uVar10);
  _CGRectGetMinX(dVar5,uVar8,uVar9,uVar10);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectGetMinY(dVar5,uVar8,uVar9,uVar10);
  _objc_release(uVar1);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _CGRectGetMinX(dVar5,uVar8,uVar9,uVar10);
  _objc_release(param_5);
  return -(dVar7 - dVar6);
}



/* Entry: 1067b05c4; end: 1067b05e3; -[SCOperaPreviewToolbarLayerViewController _layerAlphaForHorizontalPageOffset:] */

double FUN_1067b05c4(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(param_1) * -2.0 + 1.0;
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 1067b05e4; end: 1067b0653; -[SCOperaPreviewToolbarLayerViewController _layerTransformForHorizontalPageOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b05e4(undefined8 param_1,double param_2,long param_3)

{
  double dVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar1 = param_2;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_112750358));
  _CGRectGetWidth();
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(param_1,-(dVar1 * param_2),0,&uStack_60);
  return;
}



/* Entry: 1067b0654; end: 1067b0693; -[SCOperaPreviewToolbarLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b0654(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750350,0);
  return;
}



/* Entry: 1067b0694; end: 1067b0707; -[SCOperaPreviewToolbarProvider initWithPreviewToolbarFactory:] */

undefined1 * FUN_1067b0694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3170;
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



/* Entry: 1067b0708; end: 1067b081b; -[SCOperaPreviewToolbarProvider layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1067b0708(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126c9878;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126cdf38;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067b081c; end: 1067b0827; -[SCOperaPreviewToolbarProvider .cxx_destruct] */

void FUN_1067b081c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b0828; end: 1067b089b; -[SCOperaPreviewToolbarServices initWithOperaPreviewToolbarProvider:] */

undefined1 * FUN_1067b0828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3178;
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


