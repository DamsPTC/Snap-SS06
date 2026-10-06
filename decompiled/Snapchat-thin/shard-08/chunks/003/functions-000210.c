/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105facbc4; end: 105facbcb; -[SCChatTextMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105facbc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105facbcc; end: 105facbe3; -[SCChatTextMessagePlugin renderingContextProvider] */

void FUN_105facbcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105facbe4; end: 105facbef; -[SCChatTextMessagePlugin setRenderingContextProvider:] */

void FUN_105facbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105facbf0; end: 105facc07; -[SCChatTextMessagePlugin uiContainer] */

void FUN_105facbf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105facc08; end: 105facc13; -[SCChatTextMessagePlugin setUiContainer:] */

void FUN_105facc08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 105facc14; end: 105facc2b; -[SCChatTextMessagePlugin presentingViewController] */

void FUN_105facc14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105facc2c; end: 105facc37; -[SCChatTextMessagePlugin setPresentingViewController:] */

void FUN_105facc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 105facc38; end: 105facc3f; -[SCChatTextMessagePlugin messageViewEvents] */

undefined8 FUN_105facc38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105facc40; end: 105facc6f; -[SCChatTextMessagePlugin setMessageViewEvents:] */

void FUN_105facc40(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105facc70; end: 105facd47; -[SCChatTextMessagePlugin .cxx_destruct] */

void FUN_105facc70(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105facd48; end: 105fad03f;  */

void FUN_105facd48(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09ea00();
  puVar3 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar5 < ((ulong)puVar9 & 0xffffffff) + ((ulong)puVar2 & 0xffffffff)) {
    puVar9 = (undefined *)0x0;
    goto LAB_105fad018;
  }
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf0dec0();
  puVar2 = param_2;
  if ((int)puVar1 == 3) {
    func_0x00010c0c4180();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c09ea00(puVar1);
    func_0x00010c08fa60(puVar1);
    puVar3 = puVar2;
    func_0x00010c26c3c0();
    _objc_release(puVar2);
    if ((uint)puVar3 < 3) {
      puVar3 = PTR_PTR_1126c6aa8;
      func_0x00010c0c7280();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126c6ab0;
        _objc_alloc(PTR_PTR_1126c6ab0);
        func_0x00010c03cbe0();
        goto LAB_105facffc;
      }
    }
    puVar9 = (undefined *)0x0;
LAB_105fad000:
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  else {
    if ((int)puVar1 == 4) {
      func_0x00010bdc2c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c11f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010bdc2c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c065360();
      _objc_retain(puVar3);
      _objc_retain(puVar1);
      func_0x00010c09ea00(puVar3);
      func_0x00010c08fa60(puVar3);
      _objc_release(puVar3);
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar7 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR_PTR_1126c6aa8;
        func_0x00010c28fb80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar9 = PTR_PTR_1126c6ab0;
          _objc_alloc(PTR_PTR_1126c6ab0);
          func_0x00010c03cbe0();
        }
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
LAB_105facffc:
      _objc_release(puVar3);
      goto LAB_105fad000;
    }
    puVar9 = (undefined *)0x0;
  }
  _objc_release(param_2);
LAB_105fad018:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105fad040; end: 105fad05b;  */

void FUN_105fad040(long param_1,ulong param_2)

{
  if (param_2 < 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 105fad05c; end: 105fad11b;  */

void FUN_105fad05c(long param_1,undefined1 param_2)

{
  func_0x00010c083ac0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105fad11c; end: 105fad293; -[SCStoryReplyQuoteActionHandler initWithUserSession:bitmojiSelfieFetcher:userProfileIdProvider:replyQuotingCameraScopeLauncher:creatorInfoProvider:messagingMessageProvider:] */

undefined1 *
FUN_105fad11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eea10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fad294; end: 105fad483; -[SCStoryReplyQuoteActionHandler handleTapOnQuoteButtonForMessage:messageSender:viewController:] */

void FUN_105fad294(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar6 = lVar2;
  func_0x00010bf4ce20();
  lVar4 = lVar2;
  if ((int)lVar6 == 7) {
    func_0x00010c242c40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c242940();
    _objc_retainAutoreleasedReturnValue();
LAB_105fad3a0:
    _objc_release(lVar4);
  }
  else {
    lVar6 = lVar2;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bfdcce0();
    _objc_release(lVar6);
    if ((int)lVar3 != 0) {
      func_0x00010bf676a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c25ada0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c242940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      goto LAB_105fad3a0;
    }
    lVar6 = 0;
  }
  lVar4 = lVar6;
  func_0x00010c25b820(lVar6);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar2);
  uVar5 = param_3;
  func_0x000105fa84c4();
  if ((uVar5 & 1) == 0) {
    lVar2 = lVar1;
    FUN_105fa8670();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar6 == 0) {
      lVar2 = lVar1;
      FUN_105fa8548();
      if ((int)lVar2 != 0) {
        func_0x00010be2eac0(param_1,param_2,param_3,param_4,(int)lVar4 == 1,param_5);
      }
      goto LAB_105fad420;
    }
  }
  func_0x00010be2aca0(param_1,param_2,param_3,(int)lVar4 == 1,param_5);
LAB_105fad420:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fad484; end: 105fad643; -[SCStoryReplyQuoteActionHandler _handleInfoStickerQuoteForMessage:isFanPassStoryReply:viewController:] */

void FUN_105fad484(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0cbe00(uVar6,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar1 = uVar6;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6ab8;
  _objc_alloc();
  func_0x00010c061860();
  _objc_release(param_5);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar8);
  uVar8 = param_3;
  func_0x00010c25ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar6;
  FUN_105fa8670(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x000105fa83cc(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105fad644;
  puStack_90 = &UNK_110902c30;
  puStack_88 = puVar3;
  uStack_80 = uVar7;
  uStack_78 = uVar1;
  uStack_70 = uVar2;
  uStack_68 = param_4;
  func_0x00010bfcaae0(puVar3,param_2,uVar8,uVar4,uVar5,&puStack_a8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  return;
}



/* Entry: 105fad644; end: 105fad67f;  */

void FUN_105fad644(long param_1,undefined8 param_2)

{
  func_0x00010c10b720(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,
                      *(undefined1 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110dea458,
                      &PTR____CFConstantStringClassReference_110dea458);
  return;
}



/* Entry: 105fad680; end: 105fad8eb; -[SCStoryReplyQuoteActionHandler _handleQuoteForMessage:messageSender:isFanPassStoryReply:viewController:] */

void FUN_105fad680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar1 = PTR_PTR_1126b0e48;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c061900();
  _objc_release(param_6);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar11);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0cbe00(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uVar11 = uVar2;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2c18;
  uVar5 = param_4;
  func_0x00010901d7c4(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1120(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x000105fa83cc(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf1bae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf1bae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar10 = uVar9;
  func_0x00010bf1c0a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105fad8ec;
  puStack_90 = &UNK_110902c30;
  puStack_88 = puVar1;
  uStack_80 = uVar3;
  uStack_78 = uVar11;
  uStack_70 = uVar4;
  uStack_68 = param_5;
  func_0x00010bfcaac0(puVar1,param_2,puVar6,uVar5,0,0,uVar8,uVar10,&puStack_a8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105fad8ec; end: 105fad92b;  */

void FUN_105fad8ec(long param_1,undefined8 param_2)

{
  func_0x00010c10b740(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,
                      (ulong)*(byte *)(param_1 + 0x40) << 1,
                      &PTR____CFConstantStringClassReference_110dea458,
                      &PTR____CFConstantStringClassReference_110dea458);
  return;
}



/* Entry: 105fad92c; end: 105fad9a3; -[SCStoryReplyQuoteActionHandler .cxx_destruct] */

void FUN_105fad92c(long param_1)

{
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



/* Entry: 105fad9a4; end: 105fad9eb;  */

void FUN_105fad9a4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34c58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e34c58,
                      &PTR____CFConstantStringClassReference_110e34c78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105fad9ec; end: 105fadb5f; -[SCChatWallpapersMessagePlugin initWithUserId:conversationActionHandler:userProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:conversationUpdatesPublisher:] */

undefined1 *
FUN_105fad9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eea18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fadb60; end: 105fadea7; -[SCChatWallpapersMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fadb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c2533e0();
  _objc_release(uVar2);
  if ((int)uVar8 == 0x13) {
    uVar2 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010c071ae0(*(undefined8 *)(param_1 + 8));
    puVar4 = PTR_PTR_1126c6ac0;
    _objc_alloc_init(PTR_PTR_1126c6ac0);
    func_0x00010c1b42e0();
    func_0x00010c1ad020(puVar4);
    uVar8 = param_3;
    func_0x00010bf4df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283300();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar8);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3d40(puVar4);
    _objc_release(puVar12);
    puVar7 = PTR_PTR_1126c6ac8;
    _objc_alloc_init(PTR_PTR_1126c6ac8);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f040(puVar7);
    _objc_release(uVar8);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c1d3f40(puVar7);
    func_0x00010be210a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195280(puVar7);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(param_1);
    puVar12 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar11 = PTR_PTR_1126c6ad0;
    func_0x00010bf44480(PTR_PTR_1126c6ad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar12);
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105fadea8; end: 105fadedb;  */

void FUN_105fadea8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fadedc; end: 105fadfb7; -[SCChatWallpapersMessagePlugin _displayUpdateWallpaperFlowForConversation:] */

void FUN_105fadedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa5f80(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105fadfb8; end: 105fae007;  */

void FUN_105fadfb8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d4c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fae008; end: 105fae047; -[SCChatWallpapersMessagePlugin _exposeUpdateWallpaperFlowForConversation:] */

void FUN_105fae008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfe5d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0d4e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fae048; end: 105fae0fb; -[SCChatWallpapersMessagePlugin _exposeUpdateWallpaperScopeForConversation:] */

void FUN_105fae048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_105fae0fc;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105fae0fc; end: 105fae1bb;  */

void FUN_105fae0fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = lVar1 + 0x68;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x38);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        lVar2 = lVar1 + 0x68;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf22d80(uVar4,param_2,uVar3,0,lVar2,lVar1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x30),param_2,uVar4);
        _objc_release(uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fae1bc; end: 105fae1eb; -[SCChatWallpapersMessagePlugin identifier] */

void FUN_105fae1bc(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeba18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeba18);
  return;
}



/* Entry: 105fae1ec; end: 105fae1f3; -[SCChatWallpapersMessagePlugin pluginType] */

undefined8 FUN_105fae1ec(void)

{
  return 1;
}



/* Entry: 105fae1f4; end: 105fae30f; -[SCChatWallpapersMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fae1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fae310; end: 105fae357;  */

void FUN_105fae310(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be278a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fae358; end: 105fae3d3; -[SCChatWallpapersMessagePlugin _handleConversationId:] */

void FUN_105fae358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x50);
  uVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fae3d4; end: 105fae4af; -[SCChatWallpapersMessagePlugin _getOrCreateConversationEnableTapObservable] */

void FUN_105fae3d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa4cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar6 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar6);
  _os_unfair_lock_unlock(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105fae4b0; end: 105fae543;  */

bool FUN_105fae4b0(undefined8 param_1,long param_2)

{
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 105fae544; end: 105fae547; -[SCChatWallpapersMessagePlugin willDisplayChatCustomizationHubScope:] */

void FUN_105fae544(void)

{
  return;
}



/* Entry: 105fae548; end: 105fae58f; -[SCChatWallpapersMessagePlugin didDismissChatCustomizationHubScope:] */

void FUN_105fae548(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fae590; end: 105fae5e7; -[SCChatWallpapersMessagePlugin didRequestDismissal:] */

void FUN_105fae590(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fae5e8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105fae5e8; end: 105fae63b;  */

void FUN_105fae5e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fae63c; end: 105fae683; -[SCChatWallpapersMessagePlugin dismissPresentedView] */

void FUN_105fae63c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fae684; end: 105fae68b; -[SCChatWallpapersMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fae684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105fae68c; end: 105fae693; -[SCChatWallpapersMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fae68c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105fae694; end: 105fae6c3; -[SCChatWallpapersMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fae694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fae6c4; end: 105fae6db; -[SCChatWallpapersMessagePlugin uiContainer] */

void FUN_105fae6c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fae6dc; end: 105fae6e7; -[SCChatWallpapersMessagePlugin setUiContainer:] */

void FUN_105fae6dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105fae6e8; end: 105fae78b; -[SCChatWallpapersMessagePlugin .cxx_destruct] */

void FUN_105fae6e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105fae78c; end: 105fae977;  */

void FUN_105fae78c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c262520();
  if ((int)uVar1 == 3) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) goto LAB_105fae94c;
    puVar8 = PTR_PTR_1126c6ad8;
    _objc_opt_new(PTR_PTR_1126c6ad8);
    puVar3 = PTR_PTR_1126c6ae0;
    _objc_alloc(PTR_PTR_1126c6ae0);
    uVar1 = param_2;
    func_0x00010c154400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c154400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c26b3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010c154400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c262120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a2c0(puVar3);
    func_0x00010c1f8b20(puVar8);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    if ((int)uVar1 != 1) {
LAB_105fae94c:
      puVar8 = (undefined *)0x0;
      goto LAB_105fae950;
    }
    puVar8 = PTR_PTR_1126c6ad8;
    _objc_opt_new(PTR_PTR_1126c6ad8);
    uVar1 = param_2;
    func_0x00010c132160(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213640(puVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c161e80(puVar8);
LAB_105fae950:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105fae978; end: 105faed17; -[SCMerlinActionSuggestionsAccessoryPlugin initWithCurrentUserId:textSender:conversationDataFetcher:composerBlizzardLogger:composerUrlPreviewProvider:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:navigationDelegate:messagingExperimentService:circumstanceEngine:] */

undefined8 *
FUN_105fae978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126eea20;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_10);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105faed18;
    puStack_a0 = &UNK_11084cac0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105faed58;
    puStack_c8 = &UNK_11084cac0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 105faed18; end: 105faedd7;  */

void FUN_105faed18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be225c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105faedd8; end: 105faeebf; -[SCMerlinActionSuggestionsAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105faedd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010bf41860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105faeec0; end: 105faf07f;  */

void FUN_105faeec0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar3 = param_3;
    func_0x00010bf507c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108ef55a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100bec1f0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105faf054;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar3 = param_3;
  func_0x00010c089600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf490e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    lVar7 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_3;
    func_0x00010bf507c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bde8440(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  puVar6 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
LAB_105faf054:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105faf080; end: 105faf117; -[SCMerlinActionSuggestionsAccessoryPlugin isApplicableToMessage:] */

undefined8 FUN_105faf080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 0x18) {
    uVar3 = 1;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0cb8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105faf118; end: 105faf11b; -[SCMerlinActionSuggestionsAccessoryPlugin adAttachmentHandlerDidComplete:result:] */

void FUN_105faf118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAdAttachmentScope_112580688);
  return;
}



/* Entry: 105faf11c; end: 105faf11f; -[SCMerlinActionSuggestionsAccessoryPlugin adAttachmentHandlerDidPresent:] */

void FUN_105faf11c(void)

{
  return;
}



/* Entry: 105faf120; end: 105faf123; -[SCMerlinActionSuggestionsAccessoryPlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_105faf120(void)

{
  return;
}



/* Entry: 105faf124; end: 105faf127; -[SCMerlinActionSuggestionsAccessoryPlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_105faf124(void)

{
  return;
}



/* Entry: 105faf128; end: 105faf12b; -[SCMerlinActionSuggestionsAccessoryPlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_105faf128(void)

{
  return;
}



/* Entry: 105faf12c; end: 105faf12f; -[SCMerlinActionSuggestionsAccessoryPlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_105faf12c(void)

{
  return;
}



/* Entry: 105faf130; end: 105faf7c7; -[SCMerlinActionSuggestionsAccessoryPlugin _contextParamsForMessage:conversationParticipants:] */

void FUN_105faf130(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  puVar5 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bf676a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010bfd3a40();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar5 == 0) {
LAB_105faf2c4:
    _objc_release(puVar2);
  }
  else {
    puVar5 = puVar2;
    func_0x00010beef140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c262740();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar5 = param_3;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf676a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010beef140();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c262720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010bf529e0();
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (puVar5 != (undefined *)0x0) {
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_98 = (undefined **)0xc2000000;
        pcStack_90 = FUN_105fae78c;
        pcStack_88 = (code *)&UNK_110902cc0;
        _objc_retain(uVar6);
        puVar4 = puVar2;
        uStack_80 = uVar6;
        func_0x000100504554(puVar2,&puStack_a0);
        _objc_release(uStack_80);
      }
      goto LAB_105faf2c4;
    }
  }
  _objc_release(uVar6);
  _objc_release(param_3);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    goto LAB_105faf718;
  }
  ppuStack_98 = &puStack_a0;
  puStack_a0 = (undefined *)0x0;
  pcStack_90 = (code *)0x3032000000;
  pcStack_88 = FUN_105faf7c8;
  uStack_80 = 0x105faf7d8;
  puVar5 = PTR_PTR_1126c6ae8;
  _objc_opt_new();
  puStack_78 = puVar5;
  func_0x00010c162140(ppuStack_98[5]);
  puVar5 = param_3;
  func_0x00010bf026e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167c60(ppuStack_98[5]);
  _objc_release(puVar5);
  func_0x00010c183b80(ppuStack_98[5]);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_e8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105faf7e0;
  puStack_100 = &UNK_110902d20;
  ppuStack_120 = &puStack_a0;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_105faf880;
  puStack_130 = &UNK_11085a6f8;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_f8 = ppuStack_120;
  puStack_d8 = puStack_e8;
  puStack_b8 = puStack_f0;
  _objc_retain(puVar1);
  puStack_128 = puVar1;
  func_0x00010c0bf240(param_4);
  puVar2 = param_3;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)puVar3 != 0) {
    func_0x00010be225a0(param_1);
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8b40(ppuStack_98[5]);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(puStack_b8 + 3) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2210e0(ppuStack_98[5]);
LAB_105faf534:
    _objc_release(puVar2);
    _objc_release(uVar6);
  }
  else {
    if (*(char *)(puStack_d8 + 3) == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0df6e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2210e0(ppuStack_98[5]);
      goto LAB_105faf534;
    }
    func_0x00010c2210e0(ppuStack_98[5]);
  }
  puVar2 = PTR_PTR_1126c6af0;
  _objc_opt_new(PTR_PTR_1126c6af0);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d480(puVar2);
  _objc_release(uVar6);
  _objc_initWeak(auStack_150,param_1);
  puStack_180 = puVar5;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105faf890;
  puStack_168 = &UNK_110859c28;
  _objc_copyWeak(auStack_158,auStack_150);
  _objc_retain(puVar1);
  puStack_160 = puVar1;
  func_0x00010c1fc420(puVar2);
  _objc_copyWeak(auStack_188,auStack_150);
  func_0x00010c1d3d80(puVar2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c17bd60(puVar2);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar3 = PTR_PTR_1126c6af8;
  func_0x00010bf44480(PTR_PTR_1126c6af8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_188);
  _objc_release(puStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar2);
  _objc_release(puStack_128);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&puStack_a0,8);
  _objc_release(puStack_78);
LAB_105faf718:
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105faf7c8; end: 105faf7df;  */

void FUN_105faf7c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105faf7e0; end: 105faf87f;  */

void FUN_105faf7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c184520(uVar1);
  uVar1 = param_2;
  func_0x00010c0720c0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  uVar1 = param_3;
  func_0x000100bec1f0(param_3,param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105faf880; end: 105faf88f;  */

void FUN_105faf880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_setMischiefId__11264fba8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105faf890; end: 105faf8e3;  */

void FUN_105faf890(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105faf8e4; end: 105faf99f;  */

void FUN_105faf8e4(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105faf9a0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105faf9a0; end: 105faf9d3;  */

void FUN_105faf9a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105faf9d4; end: 105fafa1b; -[SCMerlinActionSuggestionsAccessoryPlugin _getSearchSuggestionTrailingElement] */

int FUN_105faf9d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  iVar3 = (int)uVar2;
  if (2 < iVar3 - 2U) {
    iVar3 = 1;
  }
  return iVar3;
}



/* Entry: 105fafa1c; end: 105fafb4f; -[SCMerlinActionSuggestionsAccessoryPlugin _sendTextMessage:conversationId:] */

void FUN_105fafa1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105fafb50;
  puStack_68 = &UNK_110902d80;
  uStack_60 = param_3;
  puStack_58 = puVar1;
  uStack_50 = uVar3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar3);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010bfa5f80(uVar2,param_2,param_4,&puStack_80);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fafb50; end: 105fafd0b;  */

void FUN_105fafb50(undefined *param_1,long param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00010c04e820();
    puVar3 = PTR_PTR_1126b5f98;
    func_0x00010bf37840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2b0420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar5 = param_2;
    func_0x000108606200(param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar3 = PTR_PTR_1126b1a40;
    func_0x00010c0fe200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010c15b620(uVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release();
    param_1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    if ((int)uVar6 != 0) {
      func_0x00010be8b3a0(param_1);
      puVar4 = PTR_PTR_1126bdc78;
      _objc_alloc(PTR_PTR_1126bdc78);
      puVar2 = param_3;
      func_0x00010c262480(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff1740(puVar4);
      _objc_release(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar2 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar7 = PTR_PTR_1126c5530;
      _objc_alloc(PTR_PTR_1126c5530);
      func_0x00010c059ee0();
      puVar8 = PTR_PTR_1126bdc88;
      func_0x00010c2a4560(PTR_PTR_1126bdc88);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c2d50;
      _objc_alloc(PTR_PTR_1126c2d50);
      func_0x00010c032460();
      puVar2 = param_1 + 0x30;
      _objc_loadWeakRetained(puVar2);
      puVar11 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c0cf9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf229e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
      _objc_release(uVar6);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fafd0c; end: 105faff53; -[SCMerlinActionSuggestionsAccessoryPlugin _handleSearchSuggestionTap:] */

void FUN_105fafd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar11 != 0) {
      func_0x00010be8b3a0(param_1);
      puVar3 = PTR_PTR_1126bdc78;
      _objc_alloc(PTR_PTR_1126bdc78);
      uVar11 = param_3;
      func_0x00010c262480(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff1740(puVar3,param_2,uVar11,0,0,3,3,0,0,0,0);
      _objc_release(uVar11);
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar11 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar4,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar5 = PTR_PTR_1126c5530;
      _objc_alloc(PTR_PTR_1126c5530);
      func_0x00010c059ee0();
      puVar6 = PTR_PTR_1126bdc88;
      func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c2d50;
      _objc_alloc(PTR_PTR_1126c2d50);
      func_0x00010c032460();
      lVar8 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0cf9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar8);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf229e0(uVar11,param_2,puVar6,lVar10,puVar7,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar11);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105faff54; end: 105faff9b; -[SCMerlinActionSuggestionsAccessoryPlugin _removeAdAttachmentScope] */

void FUN_105faff54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105faff9c; end: 105fafff7; -[SCMerlinActionSuggestionsAccessoryPlugin _getSearchSuggestionsEnabled] */

void FUN_105faff9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb060();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fafff8; end: 105fb0053; -[SCMerlinActionSuggestionsAccessoryPlugin _getMyAiVerticalSuggestionsEnabled] */

void FUN_105fafff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0785c0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fb0054; end: 105fb00af; -[SCMerlinActionSuggestionsAccessoryPlugin _getThirdPartyBotVerticalSuggestionsEnabled] */

void FUN_105fb0054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c080ea0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fb00b0; end: 105fb00c7; -[SCMerlinActionSuggestionsAccessoryPlugin chatScrollHandler] */

void FUN_105fb00b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb00c8; end: 105fb00d3; -[SCMerlinActionSuggestionsAccessoryPlugin setChatScrollHandler:] */

void FUN_105fb00c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105fb00d4; end: 105fb018b; -[SCMerlinActionSuggestionsAccessoryPlugin .cxx_destruct] */

void FUN_105fb00d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fb018c; end: 105fb03ff; -[SCMerlinDisclaimerAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105fb018c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfad7a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110902dd0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fb0400; end: 105fb042f; -[SCMerlinDisclaimerAccessoryPlugin identifier] */

void FUN_105fb0400(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e35758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e35758);
  return;
}



/* Entry: 105fb0430; end: 105fb047b; -[SCMerlinDisclaimerAccessoryPlugin isApplicableToMessage:] */

undefined8 FUN_105fb0430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105fb047c; end: 105fb0483; -[SCMerlinDisclaimerAccessoryPlugin pluginType] */

undefined8 FUN_105fb047c(void)

{
  return 0;
}



/* Entry: 105fb0484; end: 105fb0527; -[SCMerlinFeedbackMessageAccessoryPlugin initWithCurrentUserId:composerBlizzardLogger:] */

undefined1 *
FUN_105fb0484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eea28;
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



/* Entry: 105fb0528; end: 105fb06eb; -[SCMerlinFeedbackMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105fb0528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105fb06ec;
  puStack_78 = &UNK_110902e30;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = param_3;
  func_0x00010bfad7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c2519e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  puVar5 = puVar4;
  func_0x00010bf41860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105fb06ec; end: 105fb075f;  */

long FUN_105fb06ec(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c075700();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010be5fe20(param_1);
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 105fb0760; end: 105fb087f;  */

void FUN_105fb0760(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf1f3c0();
  if (param_2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    puVar2 = PTR_PTR_1126ae750;
    if (param_1 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_1;
      func_0x00010bde8480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec800(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
  else {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb0880; end: 105fb088f;  */

void FUN_105fb0880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105fb0890; end: 105fb0913; -[SCMerlinFeedbackMessageAccessoryPlugin isApplicableToMessage:] */

ulong FUN_105fb0890(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07bc00(param_3,param_2,*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0cb8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105fb0914; end: 105fb0a2f; -[SCMerlinFeedbackMessageAccessoryPlugin _messageHasValidFeedbackRequest:] */

bool FUN_105fb0914(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bfd4c80();
    if ((int)uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = uVar3;
      func_0x00010bf1fd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfa4520();
      if ((int)uVar4 == 1) {
        uVar4 = uVar2;
        func_0x00010c26d740(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c1185e0();
        bVar1 = uVar5 < 6;
        _objc_release(uVar4);
      }
      else {
        bVar1 = false;
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105fb0a30; end: 105fb0c4f; -[SCMerlinFeedbackMessageAccessoryPlugin _contextParamsForMessage:onDismissal:] */

void FUN_105fb0a30(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126c6b10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf026e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167c60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183b80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf676a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf1fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfa4520();
  if ((int)uVar4 == 1) {
    uVar4 = uVar2;
    func_0x00010c26d740();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1185e0();
    _objc_release(uVar4);
    if (uVar5 < 6) {
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105fb0b64;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_105fb0b64:
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  func_0x00010c1e4f40(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126c6b18;
  _objc_opt_new(PTR_PTR_1126c6b18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar9,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c18f360(puVar9,param_2,param_4);
  _objc_release(param_4);
  puVar7 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar8 = PTR_PTR_1126c6b20;
  func_0x00010bf44480(PTR_PTR_1126c6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar7,param_2,puVar8,puVar1,puVar9);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105fb0c50; end: 105fb0c7f; -[SCMerlinFeedbackMessageAccessoryPlugin .cxx_destruct] */

void FUN_105fb0c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fb0c80; end: 105fb0d23; -[SCMerlinMessageAccessoryPlugin initWithActionSuggestionsAccessoryPlugin:feedbackAccessoryPlugin:] */

undefined1 *
FUN_105fb0c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eea30;
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



/* Entry: 105fb0d24; end: 105fb0eab; -[SCMerlinMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105fb0d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  uVar4 = param_3;
  func_0x00010c268560(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105fb0eac;
  puStack_80 = &UNK_110902e90;
  uStack_78 = uVar2;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uVar5 = uVar4;
  uStack_68 = param_4;
  func_0x00010bfb26a0(uVar4,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105fb0f78;
  puStack_b8 = &UNK_110902ec0;
  uStack_b0 = uVar1;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar4 = uVar5;
  func_0x00010bfb26a0(uVar5,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uVar5);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105fb0eac; end: 105fb1003;  */

void FUN_105fb0eac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06c520(uVar1,param_2,param_2);
  puVar4 = PTR_PTR_1126ae6b8;
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010beed220(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2519e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fb1004; end: 105fb1033; -[SCMerlinMessageAccessoryPlugin identifier] */

void FUN_105fb1004(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e35678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e35678);
  return;
}



/* Entry: 105fb1034; end: 105fb108f; -[SCMerlinMessageAccessoryPlugin isApplicableToMessage:] */

undefined8 FUN_105fb1034(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c06c520(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c06c520(uVar2,param_2,param_3);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105fb1090; end: 105fb1097; -[SCMerlinMessageAccessoryPlugin pluginType] */

undefined8 FUN_105fb1090(void)

{
  return 0;
}



/* Entry: 105fb1098; end: 105fb10db; -[SCMerlinMessageAccessoryPlugin setChatScrollHandler:] */

void FUN_105fb1098(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  func_0x00010c17bd60(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fb10dc; end: 105fb10f3; -[SCMerlinMessageAccessoryPlugin chatScrollHandler] */

void FUN_105fb10dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb10f4; end: 105fb112b; -[SCMerlinMessageAccessoryPlugin .cxx_destruct] */

void FUN_105fb10f4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fb112c; end: 105fb1137; +[SCCChatBotDisclaimerView componentPath] */

undefined ** FUN_105fb112c(void)

{
  return &PTR____CFConstantStringClassReference_110e34cf8;
}


