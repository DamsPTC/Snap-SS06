/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051ea40c; end: 1051ea517; -[SCContextMessagingController _chatRecipientUserId] */

void FUN_1051ea40c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1051e8714;
  uStack_30 = 0x1051e8724;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001084364b8(uVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x118));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c12a0();
  _objc_release(uVar2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051ea518; end: 1051ea56b;  */

void FUN_1051ea518(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051ea56c; end: 1051ea833; -[SCContextMessagingController _presentChatInChatInputContainerView:viewController:] */

void FUN_1051ea56c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c28ba40(param_1);
  lVar7 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_4) {
    lVar1 = lVar7;
    func_0x00010c0f3ca0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b760();
    _objc_release(lVar1);
    func_0x00010bef76e0(param_4);
    lVar1 = lVar7;
    func_0x00010c29bf00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(lVar1);
    lVar1 = lVar7;
    func_0x00010c29bf00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c08de00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar7;
    func_0x00010c29bf00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar7;
    func_0x00010c29bf00(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x68) == 1) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcb038;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb038,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcb60(*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar6);
    _objc_release(ppuVar5);
  }
  _objc_release(lVar7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ea834; end: 1051ea843; -[SCContextMessagingController _replied:] */

void FUN_1051ea834(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be09a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__endFullscreenModeWithCompletion_112560030,0);
    return;
  }
  return;
}



/* Entry: 1051ea844; end: 1051ea847; -[SCContextMessagingController _messageSendEpilogue:] */

void FUN_1051ea844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__replied__112581550);
  return;
}



/* Entry: 1051ea848; end: 1051ea96f; -[SCContextMessagingController _flushStorySnapReadReceiptIfNecessary] */

void FUN_1051ea848(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf5b080(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1051ea970;
    puStack_58 = &UNK_1108622b8;
    _objc_retain(lVar2);
    lStack_50 = lVar2;
    lStack_48 = param_1;
    func_0x000107cd2a60(uVar4,0,lVar5,&puStack_70);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lStack_50);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1051ea970; end: 1051eaa67;  */

void FUN_1051ea970(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cd207c(0,lVar1,param_2,uVar3,0,0,1,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe0))
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010853a834(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108539930(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c14af00(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051eaa68; end: 1051eab57; -[SCContextMessagingController _oneOnOneConversationIdFromSessionParams] */

void FUN_1051eaa68(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1051e8714;
  uStack_30 = 0x1051e8724;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa29a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051eab58; end: 1051eab8f;  */

void FUN_1051eab58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051eab90; end: 1051eab97; -[SCContextMessagingController setChatViewControllerShouldShowBackdrop:] */

void FUN_1051eab90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c202550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setShowsBackdrop__11265e378);
  return;
}



/* Entry: 1051eab98; end: 1051eab9f; -[SCContextMessagingController chatViewControllerShouldShowBackdrop] */

void FUN_1051eab98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_showsBackdrop_11266c6c0);
  return;
}



/* Entry: 1051eaba0; end: 1051eaba7; -[SCContextMessagingController setChatInputControllerShouldIgnoreSafeAreaBottomInsets:] */

void FUN_1051eaba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setIgnoresSafeAreaLayoutGuides__1126481b0);
  return;
}



/* Entry: 1051eaba8; end: 1051eabaf; -[SCContextMessagingController chatInputControllerShouldIgnoreSafeAreaBottomInsets] */

void FUN_1051eaba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_ignoresSafeAreaLayoutGuides_1125d7428);
  return;
}



/* Entry: 1051eabb0; end: 1051eac57; -[SCContextMessagingController shouldPresentPublicStoryReplyModal] */

uint FUN_1051eabb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23a020();
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0xd8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd3960();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c157c60();
    uVar5 = (uint)uVar2 ^ 1;
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1051eac58; end: 1051ead9f; -[SCContextMessagingController _showChatSendTextConfirmationDialogIfNeeded:] */

void FUN_1051eac58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c232020();
  if ((int)lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,1);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    _objc_retain(uVar5);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcb078;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb078,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dcb098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb098,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dcb0b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb0b8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010beb8680(param_1);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051eada0; end: 1051eae37;  */

void FUN_1051eada0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a56e0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x140);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa400();
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051eae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    return;
  }
  return;
}



/* Entry: 1051eae38; end: 1051eb08f; -[SCContextMessagingController _showConfirmationDialogWithTitle:description:confirmButtonText:completion:] */

void FUN_1051eae38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  puVar1 = PTR_PTR_1126af180;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c235c40(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_a8,8);
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1051eb090; end: 1051eb0d7;  */

void FUN_1051eb090(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1051eb0d8; end: 1051eb0db; -[SCContextMessagingController updateUserContext] */

void FUN_1051eb0d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateChatStickerFriendmojiInfo_11267eb50);
  return;
}



/* Entry: 1051eb0dc; end: 1051eb127; -[SCContextMessagingController didPresentInputBarView] */

void FUN_1051eb0dc(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateUserContext_1126808b8);
  return;
}



/* Entry: 1051eb128; end: 1051eb15f; -[SCContextMessagingController didEndPresentingInputBarView] */

void FUN_1051eb128(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x88) = 0;
  func_0x00010c27a900(*(undefined8 *)(param_1 + 0x18),param_2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 1051eb160; end: 1051eb28f; -[SCContextMessagingController interceptMessageSendAttemptForPlugin:] */

void FUN_1051eb160(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b6120;
  _objc_retain(param_3);
  func_0x00010c26c4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae558;
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1051eb290;
    puStack_40 = &UNK_110841f20;
    puStack_38 = puVar3;
    _objc_retain();
    func_0x00010beb84e0(param_1,param_2,&puStack_58);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051eb290; end: 1051eb2d7;  */

void FUN_1051eb290(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051eb2d8; end: 1051eb427; -[SCContextMessagingController _handleInteractiveDrawerEvent:] */

void FUN_1051eb2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1051eb428;
  puStack_58 = &UNK_11086fb88;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c0f80(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1051eb428; end: 1051eb46b;  */

void FUN_1051eb428(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1051eb46c; end: 1051eb4af; -[SCContextMessagingController inputContext:textViewShouldBeginEditing:] */

ulong FUN_1051eb46c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c074120();
  if ((uVar1 & 1) == 0) {
    func_0x00010c10c660(param_1,param_2,1,0,1,0);
  }
  return uVar1;
}



/* Entry: 1051eb4b0; end: 1051eb4f3; -[SCContextMessagingController inputContext:willActivateItem:] */

void FUN_1051eb4b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06ffa0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_presentInFullscreenAnimated_inpu_112620bb8,1,0,0,0);
    return;
  }
  return;
}



/* Entry: 1051eb4f4; end: 1051eb69f; -[SCContextMessagingController pluginDidAttemptToSendMessage:] */

void FUN_1051eb4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010c26c4a0(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b6120;
    func_0x00010bf0f400(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010c277b20(*(undefined8 *)(param_1 + 0x40));
      goto LAB_1051eb59c;
    }
    puVar1 = PTR_PTR_1126b6120;
    func_0x00010bf28e60(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b6120;
      func_0x00010c0f5700(PTR_PTR_1126b6120);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b6120;
        func_0x00010c253e20(PTR_PTR_1126b6120);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        if ((int)uVar2 == 0) {
          puVar3 = PTR_PTR_1126b6120;
          func_0x00010bf37240(PTR_PTR_1126b6120);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) goto LAB_1051eb59c;
        }
        else {
          _objc_release(puVar1);
        }
        func_0x00010c278960(*(undefined8 *)(param_1 + 0x40));
      }
      else {
        func_0x00010c2786e0(*(undefined8 *)(param_1 + 0x40));
      }
      goto LAB_1051eb59c;
    }
    func_0x00010c2788e0(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    func_0x00010c277b60(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x00010be09a40(param_1,param_2,0);
LAB_1051eb59c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051eb6a0; end: 1051eb6a3; -[SCContextMessagingController pluginDidAttemptToEditMessage:] */

void FUN_1051eb6a0(void)

{
  return;
}



/* Entry: 1051eb6a4; end: 1051eb723; -[SCContextMessagingController pluginWillPresentFullscreen:] */

void FUN_1051eb6a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cbcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051eb724; end: 1051eb79b; -[SCContextMessagingController pluginDidDismissFullscreen:] */

void FUN_1051eb724(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cbc80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0cf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_modalAccessoryDidDismiss_112611860);
  return;
}



/* Entry: 1051eb79c; end: 1051eb79f; -[SCContextMessagingController plugin:didEditMessage:] */

void FUN_1051eb79c(void)

{
  return;
}



/* Entry: 1051eb7a0; end: 1051eb947; -[SCContextMessagingController plugin:didSendMessage:] */

void FUN_1051eb7a0(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010c253e20(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((param_4 == 2) && ((int)puVar2 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126b5c68;
    func_0x00010c269ca0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6038;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    _objc_alloc(puVar2);
    func_0x00010bf4eb20(uVar3);
    func_0x00010bf4eae0(uVar3);
    func_0x00010bf4eb00(uVar3);
    func_0x00010c068440(uVar3);
    _objc_release(uVar3);
    func_0x00010bff0a60(puVar2);
    func_0x00010c0a0480(uVar4);
    _objc_release(puVar2);
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1051eb948;
    puStack_80 = &UNK_110844b80;
    lStack_78 = param_1;
    _objc_retain(param_3);
    puStack_70 = param_3;
    lStack_68 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    puVar1 = puStack_70;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1051eb948; end: 1051ebb6b;  */

void FUN_1051eb948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x000107d2bff8();
  _objc_release(uVar8);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c23a020();
    _objc_release(uVar4);
    if ((uVar7 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x28);
      puVar5 = PTR_PTR_1126b6120;
      func_0x00010bf37240(PTR_PTR_1126b6120);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if ((uVar7 & 1) == 0) {
        func_0x000108437064();
      }
    }
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010be8efc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      return;
    }
    (**(code **)(lVar3 + 0x10))();
  }
  else {
    func_0x00010bf37240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064ca0();
  }
  _objc_release(lVar3);
  uVar7 = *(ulong *)(param_1 + 0x28);
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010c253e20(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((uVar7 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = PTR_PTR_1126b6120;
    func_0x00010c26c4a0(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar8);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  func_0x00010be5ff40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be18360(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyOperaReplyWasSent_112576d28);
  return;
}



/* Entry: 1051ebb6c; end: 1051ebb6f; -[SCContextMessagingController pluginDidDetachFromAccessoryContainer] */

void FUN_1051ebb6c(void)

{
  return;
}



/* Entry: 1051ebb70; end: 1051ebb73; -[SCContextMessagingController pluginDidAttachToAccessoryContainer] */

void FUN_1051ebb70(void)

{
  return;
}



/* Entry: 1051ebb74; end: 1051ebb77; -[SCContextMessagingController pluginDidSelectInputItem:] */

void FUN_1051ebb74(void)

{
  return;
}



/* Entry: 1051ebb78; end: 1051ebc53; -[SCContextMessagingController _subscribeToInputStateEvents:] */

void FUN_1051ebb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1051ebc54; end: 1051ebd3f;  */

void FUN_1051ebc54(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051ebd40;
  puStack_60 = &UNK_110859c88;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1a00(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1051ebd40; end: 1051ebdc7;  */

void FUN_1051ebd40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ebdc8; end: 1051ebea3; -[SCContextMessagingController _subscribeToInputSizeEvents:] */

void FUN_1051ebdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1051ebea4; end: 1051ebf0b;  */

void FUN_1051ebea4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c0d9080(param_4);
  _objc_release(param_4);
  func_0x00010be3c1c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ebf0c; end: 1051ebfe7; -[SCContextMessagingController _subscribeToStickerTappedEvents:] */

void FUN_1051ebf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1051ebfe8; end: 1051ec01f;  */

void FUN_1051ebfe8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be09a40(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ec020; end: 1051ec0b7; -[SCContextMessagingController _inputSizeDidChange:] */

void FUN_1051ec020(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010be41260();
  }
  func_0x00010be6de00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceOperaResizeWithHeight_d_112550a20);
  return;
}



/* Entry: 1051ec0b8; end: 1051ec213; -[SCContextMessagingController _isInputDrawerBeingDragged] */

long FUN_1051ec0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  lVar1 = *(long *)(param_5 + 0x18);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  lVar1 = 0;
  if (lVar3 != 0) {
    do {
      lVar1 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(ulong *)(lVar1 * 8);
        puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        if (((uVar5 & 1) != 0) &&
           ((uVar5 = uVar8, func_0x00010c252440(), uVar5 == 1 || (func_0x00010c252440(), uVar8 == 2)
            ))) {
          lVar1 = 1;
          goto LAB_1051ec1d0;
        }
        lVar1 = lVar1 + 1;
      } while (lVar3 != lVar1);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar1 = 0;
  }
LAB_1051ec1d0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar6 = *(long *)(lVar2 + 0x18);
    func_0x00010c065720();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bf20c00(lVar6);
      func_0x00010bf51460(lVar6);
      func_0x00010bf20c00(lVar1);
      _CGRectGetHeight();
      _CGRectGetMinY(uVar9,param_2,param_3,param_4);
      func_0x00010c148fc0(lVar1);
    }
    _objc_release(lVar1);
    _objc_release(lVar6);
    return lVar6;
  }
  return lVar1;
}



/* Entry: 1051ec214; end: 1051ec2e7; -[SCContextMessagingController _operaResizeHeightFromCurrentLayout] */

double FUN_1051ec214(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = *(long *)(param_5 + 0x18);
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_3 = 0.0;
  }
  else {
    func_0x00010bf20c00(lVar1);
    func_0x00010bf51460(lVar1,param_6,lVar2);
    dVar3 = param_1;
    func_0x00010bf20c00(lVar2);
    _CGRectGetHeight();
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    func_0x00010c148fc0(lVar2);
    param_3 = (dVar3 - param_1) - param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return param_3;
}



/* Entry: 1051ec2e8; end: 1051ec47f; -[SCContextMessagingController _announceOperaResizeWithHeight:duration:] */

void FUN_1051ec2e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar2 = (int)*(undefined8 *)(param_3 + 0xa0);
  func_0x000108f4239c();
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_3 + 8);
    func_0x00010c29d360();
    if (((0x19 < lVar3 - 0x49U || (1L << (lVar3 - 0x49U & 0x3f) & 0x2020001U) == 0) &&
        (uVar1 = lVar3 - 0x57U >> 1,
        7 < (uVar1 | lVar3 - 0x57U << 0x3f) || (1L << (uVar1 & 0x3f) & 0xb1U) == 0)) &&
       ((0x29 < lVar3 - 0x42U || ((1L << (lVar3 - 0x42U & 0x3f) & 0x3c000100701U) == 0)))) {
      *(undefined8 *)(param_3 + 0x30) = param_1;
      *(undefined8 *)(param_3 + 0x38) = param_2;
      if ((*(byte *)(param_3 + 0x29) & 1) == 0) {
        *(undefined1 *)(param_3 + 0x29) = 1;
        _objc_initWeak(auStack_38,param_3);
        uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_1051ec480;
        puStack_48 = &UNK_11086fc48;
        _objc_copyWeak(auStack_40,auStack_38);
        _CFRunLoopObserverCreateWithHandler(uVar4,0xa0,0,0,&puStack_60);
        _CFRunLoopGetMain();
        _CFRunLoopAddObserver();
        _CFRelease(uVar4);
        _CFRunLoopGetMain();
        _CFRunLoopWakeUp();
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
    }
  }
  return;
}



/* Entry: 1051ec480; end: 1051ec4b3;  */

void FUN_1051ec480(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be18260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ec4b4; end: 1051ec64b; -[SCContextMessagingController _flushPendingOperaResizeAnnounce] */

void FUN_1051ec4b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  lVar1 = *(long *)(param_1 + 0x118);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c13a260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x118);
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6008;
    func_0x00010c13a2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6008;
    func_0x00010c13a2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar3;
    func_0x00010c0eb7c0(lVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if ((param_4 == 0) && (lVar9 = lVar1, func_0x00010c0799c0(), (int)lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be09a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__endFullscreenModeWithCompletion_112560030,0)
    ;
    return;
  }
  return;
}



/* Entry: 1051ec64c; end: 1051ec687; -[SCContextMessagingController _didTransitionFromState:toState:] */

void FUN_1051ec64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_4 == 0) && (uVar1 = param_1, func_0x00010c0799c0(), (int)uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be09a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__endFullscreenModeWithCompletion_112560030,0);
    return;
  }
  return;
}



/* Entry: 1051ec688; end: 1051ec68b; -[SCContextMessagingController _willTransitionFromState:toState:] */

void FUN_1051ec688(void)

{
  return;
}



/* Entry: 1051ec68c; end: 1051ec7b7; -[SCContextMessagingController replyParameters] */

void FUN_1051ec68c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b5ba8;
  _objc_alloc(PTR_PTR_1126b5ba8);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x000108436154(uVar5,*(undefined8 *)(param_1 + 0xa0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004500(puVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x0001065ee128(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244d60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x0001065ecd38(puVar1,uVar6,1,uVar5,0,0,uVar2,uVar3,*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xa8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051ec7b8; end: 1051ec80f; -[SCContextMessagingController replyParametersWithCompletion:] */

void FUN_1051ec7b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c131e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ec810; end: 1051ec81f; -[SCContextMessagingController isGroupConversation] */

bool FUN_1051ec810(long param_1)

{
  return *(long *)(param_1 + 0x68) == 1;
}



/* Entry: 1051ec820; end: 1051ec893; -[SCContextMessagingController recipient] */

void FUN_1051ec820(long param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x68) == 1) {
    unaff_x19 = *(undefined8 *)(param_1 + 0x180);
    _objc_retain(unaff_x19);
  }
  else if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x0001084364b8(uVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x118));
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = uVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1051ec894; end: 1051ec917; -[SCContextMessagingController recipientUserId] */

void FUN_1051ec894(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x0001084364b8(uVar2,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x118));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051ec918; end: 1051ec9d7; -[SCContextMessagingController isPartiallyVisible] */

bool FUN_1051ec918(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  lVar2 = lVar3;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = *(long *)(param_1 + 0x50);
  _objc_release(lVar4);
  bVar1 = true;
  if ((lVar3 != lVar5) && (lVar2 != lVar4)) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    bVar1 = lVar3 == 0 || lVar3 == param_1;
    _objc_release();
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 1051ec9d8; end: 1051ecb07; -[SCContextMessagingController updateChatStickerFriendmojiInfo] */

void FUN_1051ec9d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2448c0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1051ecb08; end: 1051ecc67;  */

void FUN_1051ecb08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2947e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x0001084364b8(uVar4,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x118));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(uVar1);
    func_0x00010c244960(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1051ecc68; end: 1051ecc7f;  */

void FUN_1051ecc68(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateWithBitmojiUser_bitmojiUse_112680b78,
             param_2,PTR____NSArray0__struct_11034ab48,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051ecc80; end: 1051ecd6f; -[SCContextMessagingController _replyCompletionHandlerWithNotificationType:] */

void FUN_1051ecc80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x68) != 1) {
    uVar4 = 0;
    if (*(long *)(param_1 + 0x68) != 0) goto LAB_1051ecd0c;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x0001084364b8(uVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x118));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  _objc_retain(uVar4);
LAB_1051ecd0c:
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c064d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051ecd70; end: 1051ecdff; -[SCContextMessagingController _notifyOperaReplyWasSent] */

void FUN_1051ecd70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0ea4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6128;
  func_0x00010c15b3c0(PTR_PTR_1126b6128);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0ea8e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar1,param_2,puVar2,uVar3,PTR____NSDictionary0__struct_11034ab58);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ece00; end: 1051ece17; -[SCContextMessagingController plusUpsellNotificationPresentationCompleted] */

void FUN_1051ece00(long param_1)

{
  if (*(long *)(param_1 + 0x128) != 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1051ece18; end: 1051ece1f; -[SCContextMessagingController groupConversationId] */

undefined8 FUN_1051ece18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 1051ece20; end: 1051ece27; -[SCContextMessagingController singleRecipientDisplayName] */

undefined8 FUN_1051ece20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 1051ece28; end: 1051ece2f; -[SCContextMessagingController singleRecipientUsername] */

undefined8 FUN_1051ece28(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 1051ece30; end: 1051ece47; -[SCContextMessagingController delegate] */

void FUN_1051ece30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ece48; end: 1051ece53; -[SCContextMessagingController setDelegate:] */

void FUN_1051ece48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x198,param_3);
  return;
}



/* Entry: 1051ece54; end: 1051ece5b; -[SCContextMessagingController contextActionSource] */

undefined8 FUN_1051ece54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1051ece5c; end: 1051ece8b; -[SCContextMessagingController setContextActionSource:] */

void FUN_1051ece5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ece8c; end: 1051ed0b7; -[SCContextMessagingController .cxx_destruct] */

void FUN_1051ece8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x198);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051ed0b8; end: 1051ed1e7;  */

void FUN_1051ed0b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b5f88;
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c03c9c0();
    _objc_release(param_5);
    _objc_release(param_3);
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051ed1e8; end: 1051edef3; -[SCContextMessagingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ed1e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
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
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  undefined8 uVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar71 = (long)_DAT_11271f31c;
  lVar72 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar1 = lVar72;
  func_0x00010c131e20();
  _objc_release(lVar72);
  lVar72 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar2 = lVar72;
  func_0x00010c131e20();
  _objc_release(lVar72);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010c26c4a0(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010c0f5700(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010bf0f400(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_11271f380;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar72;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010befeec0();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = (long)_DAT_11271f320;
  uVar70 = *(undefined8 *)(param_1 + lVar73);
  *(long *)(param_1 + lVar73) = lVar8;
  _objc_release(uVar70);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar72);
  uVar9 = *(undefined8 *)(param_1 + lVar73);
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar70 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1;
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar72;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar70;
  func_0x00010c06b360();
  _objc_release(lVar6);
  _objc_release(lVar72);
  _objc_release(uVar70);
  _objc_release(uVar9);
  if ((int)uVar10 != 0) {
    puVar5 = PTR_PTR_1126b6120;
    func_0x00010beff100(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010c25ac20(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010bf28e60(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b6120;
  func_0x00010c253e20(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  if (((uint)lVar1 >> 1 & 1) == 0) {
    func_0x00010c280520(puVar5);
  }
  if (((uint)lVar2 >> 2 & 1) == 0) {
    func_0x00010c280520(puVar5);
  }
  puVar11 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar72 = param_1 + _DAT_11271f350;
  _objc_loadWeakRetained();
  lVar1 = param_1 + lVar71;
  _objc_loadWeakRetained(lVar1);
  lVar12 = lVar72;
  func_0x00010bf226c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar72);
  uVar70 = *(undefined8 *)(param_1 + _DAT_11271f324);
  lVar72 = lVar12;
  func_0x00010c150520(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar70);
  _objc_release(lVar72);
  puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar72 = lVar12;
  func_0x00010bf368e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(puVar11);
  _objc_release(puVar13);
  _objc_release(lVar72);
  lVar72 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar14 = lVar72;
  func_0x00010c131e20();
  _objc_release(lVar72);
  lVar72 = param_1 + _DAT_11271f390;
  _objc_loadWeakRetained();
  lVar1 = lVar72;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar72);
  _objc_initWeak(auStack_70,param_1);
  puVar13 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b6130;
  _objc_alloc();
  lVar72 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar17 = lVar72;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11271f330;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271f33c;
  _objc_loadWeakRetained();
  lVar19 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar20 = lVar6;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271f340;
  _objc_loadWeakRetained();
  lVar8 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar21 = lVar8;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar22 = lVar73;
  func_0x00010bf04180();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271f334;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11271f368;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c0dc280();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271f344;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11271f354;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_11271f354;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11271f34c;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c25b0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_11271f358;
  _objc_loadWeakRetained();
  lVar36 = param_1 + _DAT_11271f35c;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c106840();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11271f348;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_11271f364;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_11271f360;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010bfb97e0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c122e00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_11271f36c;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11271f36c;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c28ee80();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_11271f370;
  _objc_loadWeakRetained();
  lVar51 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010bf4e0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_11271f374;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_11271f378;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + _DAT_11271f37c;
  _objc_loadWeakRetained();
  lVar58 = lVar57;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_11271f388;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010bf50160();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + lVar71;
  _objc_loadWeakRetained();
  func_0x00010c264740();
  lVar62 = param_1 + lVar71;
  _objc_loadWeakRetained();
  func_0x00010c131e20();
  lVar63 = param_1 + _DAT_11271f384;
  _objc_loadWeakRetained();
  lVar64 = lVar63;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1 + _DAT_11271f38c;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_11271f338;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar68;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ae20();
  lVar74 = (long)_DAT_11271f32c;
  uVar70 = *(undefined8 *)(param_1 + lVar74);
  *(undefined **)(param_1 + lVar74) = puVar16;
  _objc_release(uVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
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
  _objc_release(lVar73);
  _objc_release(lVar21);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar20);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(lVar1);
  _objc_release(lVar17);
  _objc_release(lVar72);
  lVar72 = param_1 + lVar71;
  _objc_loadWeakRetained();
  func_0x00010c0ec860();
  func_0x00010c17b6a0(*(undefined8 *)(param_1 + lVar74));
  _objc_release(lVar72);
  lVar72 = param_1 + lVar71;
  _objc_loadWeakRetained();
  func_0x00010c0ec860();
  func_0x00010c17be80(*(undefined8 *)(param_1 + lVar74));
  _objc_release(lVar72);
  if (((uint)lVar14 >> 3 & 1) == 0) {
    lVar72 = param_1 + lVar71;
    _objc_loadWeakRetained(lVar72);
    lVar1 = lVar72;
    func_0x00010beeec20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161c00(*(undefined8 *)(param_1 + lVar74));
    _objc_release(lVar1);
    _objc_release(lVar72);
  }
  param_1 = param_1 + lVar71;
  _objc_loadWeakRetained(param_1);
  lVar72 = param_1;
  func_0x00010c0cbc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(lVar72);
  _objc_release(param_1);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar15);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 1051edef4; end: 1051edf17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051edef4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f31c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051edf18; end: 1051edf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051edf18(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11271f328;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c260aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1051edf88; end: 1051edfc3; -[SCContextMessagingEntryPoint end] */

void FUN_1051edf88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6df8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051edfc4; end: 1051ee057; -[SCContextMessagingEntryPoint messagingController:didChangeFullscreenViewController:] */

void FUN_1051edfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbe80(uVar2,param_2,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ee058; end: 1051ee0cf; -[SCContextMessagingEntryPoint messagingControllerDidLeaveFullScreen:] */

void FUN_1051ee058(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1051edef4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbec0(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ee0d0; end: 1051ee147; -[SCContextMessagingEntryPoint messagingControllerWillTransitionToFullScreen:] */

void FUN_1051ee0d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1051edef4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbf00(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ee148; end: 1051ee1d3; -[SCContextMessagingEntryPoint topMostPresentedViewControllerForMessagingController:] */

void FUN_1051ee148(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  FUN_1051edef4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274760(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051ee1d4; end: 1051ee24b; -[SCContextMessagingEntryPoint messagingControllerDidFinishPresentingSnapAccessoryView:] */

void FUN_1051ee1d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1051edef4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbea0(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ee24c; end: 1051ee2c3; -[SCContextMessagingEntryPoint messagingControllerDidWillBeginPresentingSnapAccessoryView:] */

void FUN_1051ee24c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1051edef4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051edef4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbee0(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ee2c4; end: 1051ee457; -[SCContextMessagingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ee2c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f328);
  _objc_destroyWeak(param_1 + _DAT_11271f390);
  _objc_destroyWeak(param_1 + _DAT_11271f38c);
  _objc_destroyWeak(param_1 + _DAT_11271f388);
  _objc_destroyWeak(param_1 + _DAT_11271f384);
  _objc_destroyWeak(param_1 + _DAT_11271f380);
  _objc_destroyWeak(param_1 + _DAT_11271f37c);
  _objc_destroyWeak(param_1 + _DAT_11271f378);
  _objc_destroyWeak(param_1 + _DAT_11271f374);
  _objc_destroyWeak(param_1 + _DAT_11271f370);
  _objc_destroyWeak(param_1 + _DAT_11271f36c);
  _objc_destroyWeak(param_1 + _DAT_11271f368);
  _objc_destroyWeak(param_1 + _DAT_11271f364);
  _objc_destroyWeak(param_1 + _DAT_11271f360);
  _objc_destroyWeak(param_1 + _DAT_11271f35c);
  _objc_destroyWeak(param_1 + _DAT_11271f358);
  _objc_destroyWeak(param_1 + _DAT_11271f354);
  _objc_destroyWeak(param_1 + _DAT_11271f350);
  _objc_storeStrong(param_1 + _DAT_11271f324,0);
  _objc_destroyWeak(param_1 + _DAT_11271f34c);
  _objc_destroyWeak(param_1 + _DAT_11271f348);
  _objc_destroyWeak(param_1 + _DAT_11271f344);
  _objc_destroyWeak(param_1 + _DAT_11271f340);
  _objc_destroyWeak(param_1 + _DAT_11271f33c);
  _objc_destroyWeak(param_1 + _DAT_11271f338);
  _objc_destroyWeak(param_1 + _DAT_11271f334);
  _objc_destroyWeak(param_1 + _DAT_11271f330);
  _objc_destroyWeak(param_1 + _DAT_11271f31c);
  _objc_storeStrong(param_1 + _DAT_11271f320,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f32c,0);
  return;
}



/* Entry: 1051ee458; end: 1051ee55b; -[SCContextMessagingHeader initWithDisplayName:showSwapIcon:swipeDirection:showReplyTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051ee458(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9
             )

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_6);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puStack_58 = PTR_PTR_1126e6e00;
  uStack_60 = param_4;
  _objc_msgSendSuper2(0,0,param_3,param_1 + 56.0,&uStack_60,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(char *)((long)puVar2 + (long)_DAT_11271f394) = (char)param_9;
    func_0x00010beacda0(puVar2);
    func_0x00010beab860(puVar2);
    if (param_9 != 0) {
      func_0x00010beaf6a0(puVar2);
    }
    func_0x00010beb1700(puVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar2;
}



/* Entry: 1051ee55c; end: 1051ee74f; -[SCContextMessagingHeader _setupGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ee55c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  dVar7 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar7,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_11271f398;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar6),0);
  func_0x00010bfb68e0(param_1);
  _CGRectGetWidth();
  dVar9 = dVar7;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  if (dVar9 == 0.0) {
    dVar9 = 0.0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    dVar8 = dVar9;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c2a5040(param_1);
    func_0x00010c013de0(0,0,dVar8,dVar9,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd99999a0000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c066fa0(param_1,param_2,puVar1,0);
    _objc_release(puVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd99999a0000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14db20(0,dVar9,dVar7,0x4059000000000000,uVar5,param_2,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051ee750; end: 1051eeb4f; -[SCContextMessagingHeader _setupCloseButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ee750(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b6138;
  _objc_alloc();
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar18,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar13 = (long)_DAT_11271f39c;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar11);
  if (param_3 == 1) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar13),param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar13),param_2,puVar2);
  }
  else {
    uVar18 = 0x4038000000000000;
    if (*(char *)(param_1 + _DAT_11271f394) == '\0') {
      uVar18 = 0x402c000000000000;
    }
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(uVar18,uVar18,PTR_PTR_1126b0c40,param_2,0x2f4,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar13),param_2,puVar2);
  }
  _objc_release(puVar2);
  uVar16 = 0x3ff199999999999a;
  func_0x00010c1c3c80(0x3ff199999999999a,*(undefined8 *)(param_1 + lVar13));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar13),param_2,4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar13));
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar13),param_2,param_1,
                      PTR_s__exitButtonPressed__112528268);
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bfe6ac0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar11);
  cVar1 = *(char *)(param_1 + _DAT_11271f394);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 16.0;
  lStack_c8 = lVar12;
  uStack_c0 = uVar11;
  func_0x00010bf493c0(0x4030000000000000,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_d0 = uVar11;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    uStack_98 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar11 = uVar3;
    func_0x00010bf493c0(dVar17 + 21.0,uVar3,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_98;
    uStack_90 = uVar11;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    uStack_b8 = uVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf493c0(0xc020000000000000,uVar3,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_b8;
    uStack_b0 = uVar11;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf49420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar15[2] = uVar10;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf49420(uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar15[3] = uVar16;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar15,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(lVar12);
  _objc_release(uVar3);
  _objc_release(uStack_d0);
  _objc_release(lStack_c8);
  _objc_release(uStack_c0);
  lVar6 = *(long *)(param_1 + lVar13);
  func_0x00010c160fc0(lVar6,param_2,&PTR____CFConstantStringClassReference_110dcb0d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1051eeb50;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___UILabel_1126aec30;
  uStack_140 = uVar4;
  puStack_138 = puVar2;
  uStack_130 = uVar11;
  lStack_128 = lVar12;
  lStack_120 = lVar13;
  uStack_118 = uVar10;
  uStack_110 = uVar3;
  uStack_108 = uVar16;
  uStack_100 = uVar5;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  dVar17 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar17,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_11271f3a0;
  uVar11 = *(undefined8 *)(lVar6 + lVar14);
  *(undefined **)(lVar6 + lVar14) = puVar7;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(lVar6 + lVar14),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar6 + lVar14),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(lVar6 + lVar14),param_2,
                      &PTR____CFConstantStringClassReference_110dcb0f8);
  lVar13 = lVar6;
  func_0x00010befbb60(lVar6,param_2,*(undefined8 *)(lVar6 + lVar14));
  uStack_168 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar13;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lStack_158 = lVar12;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_150 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_158,&uStack_168,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar12);
  _objc_release(lVar13);
  puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar8;
  FUN_1051f1ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar8,param_2,puVar2,puVar7);
  _objc_release(puVar2);
  func_0x00010c16b720(*(undefined8 *)(lVar6 + lVar14),param_2,puVar8);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(lVar6 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar11 = uVar16;
  func_0x00010bf493c0(dVar17 + 21.0,uVar16,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar6 + lVar14);
  uStack_178 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar6;
  func_0x00010bf34860(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 2;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_170 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar18);
  _objc_release(lVar12);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(lVar13);
  _objc_release(uVar16);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(lVar6 + lVar14));
  func_0x00010bf199c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar11 = *(undefined8 *)(lVar6 + lVar14);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar2 = puVar9;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar12 = (long)_DAT_11271f3a4;
    uVar11 = *(undefined8 *)(puVar7 + lVar12);
    *(undefined **)(puVar7 + lVar12) = puVar2;
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)(puVar7 + lVar12),param_2,0);
    func_0x00010c213040(*(undefined8 *)(puVar7 + lVar12),param_2,1);
    func_0x00010c160fc0(*(undefined8 *)(puVar7 + lVar12),param_2,
                        &PTR____CFConstantStringClassReference_110dcb118);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar13 = (long)_DAT_11271f3a8;
    uVar11 = *(undefined8 *)(puVar7 + lVar13);
    *(undefined **)(puVar7 + lVar13) = puVar2;
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)(puVar7 + lVar13),param_2,0);
    func_0x00010befbb60(puVar7,param_2,*(undefined8 *)(puVar7 + lVar12));
    func_0x00010c066f80(puVar7,param_2,*(undefined8 *)(puVar7 + lVar13),
                        *(undefined8 *)(puVar7 + lVar12));
    func_0x00010be18a20(puVar7,param_2,puVar9,uVar10);
    if ((int)uVar10 != 0) {
      func_0x00010beb0400(puVar7);
      func_0x00010beacd00(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1051eeb50; end: 1051eee93; -[SCContextMessagingHeader _setupReplyToLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051eeb50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  dVar13 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar13,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar12 = (long)_DAT_11271f3a0;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar12),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12),param_2,
                      &PTR____CFConstantStringClassReference_110dcb0f8);
  lVar10 = param_1;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar12));
  uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lStack_78 = lVar11;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_78,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar1 = puVar3;
  FUN_1051f1ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,puVar1,puVar2);
  _objc_release(puVar1);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar12),param_2,puVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar9 = uVar4;
  func_0x00010bf493c0(dVar13 + 21.0,uVar4,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_98 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 2;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(lVar10);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar12));
  func_0x00010bf199c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar11 = (long)_DAT_11271f3a4;
    uVar9 = *(undefined8 *)(puVar2 + lVar11);
    *(undefined **)(puVar2 + lVar11) = puVar1;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar11),param_2,0);
    func_0x00010c213040(*(undefined8 *)(puVar2 + lVar11),param_2,1);
    func_0x00010c160fc0(*(undefined8 *)(puVar2 + lVar11),param_2,
                        &PTR____CFConstantStringClassReference_110dcb118);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar10 = (long)_DAT_11271f3a8;
    uVar9 = *(undefined8 *)(puVar2 + lVar10);
    *(undefined **)(puVar2 + lVar10) = puVar1;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar10),param_2,0);
    func_0x00010befbb60(puVar2,param_2,*(undefined8 *)(puVar2 + lVar11));
    func_0x00010c066f80(puVar2,param_2,*(undefined8 *)(puVar2 + lVar10),
                        *(undefined8 *)(puVar2 + lVar11));
    func_0x00010be18a20(puVar2,param_2,puVar7,uVar8);
    if ((int)uVar8 != 0) {
      func_0x00010beb0400(puVar2);
      func_0x00010beacd00(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1051eee94; end: 1051eefaf; -[SCContextMessagingHeader _setupWithDisplayName:showSwapIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051eee94(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11271f3a4;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110dcb118);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar3 = (long)_DAT_11271f3a8;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c066f80(param_1,param_2,*(undefined8 *)(param_1 + lVar3),
                        *(undefined8 *)(param_1 + lVar4));
    func_0x00010be18a20(param_1,param_2,param_3,param_4);
    if ((int)param_4 != 0) {
      func_0x00010beb0400(param_1);
      func_0x00010beacd00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051eefb0; end: 1051ef21b; -[SCContextMessagingHeader _formatDisplayNameLabelForName:showSwapIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051eefb0(double param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010bdd1040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be492e0(param_2);
  func_0x00010bea2040(param_2);
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = (long)_DAT_11271f3a8;
  uVar3 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11271f3a4;
  uVar4 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar16);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(lVar2 + _DAT_11271f394);
  lVar19 = (long)_DAT_11271f3a4;
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar15;
  lVar17 = lVar2;
  if (cVar1 == '\x01') {
    uStack_168 = *(long *)(lVar2 + _DAT_11271f3a0);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = *(undefined8 *)(lVar2 + _DAT_11271f39c);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uStack_180;
    func_0x00010bf49480(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar2;
    func_0x00010bf1ff80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_168 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010bf493c0(param_1 + 21.0);
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_11271f39c;
    uStack_188 = *(undefined8 *)(lVar2 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uStack_180;
    func_0x00010bf49480(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = *(long *)(lVar2 + lVar20);
    func_0x00010bf348e0(lVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar16);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar20);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_168);
  _objc_release(uVar15);
  puVar16 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010bf199c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar15);
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_boldAvenirNextFontOfSize__1125a54d8);
  return;
}



/* Entry: 1051ef21c; end: 1051ef5fb; -[SCContextMessagingHeader _layoutLabelShowsSwapIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ef21c(double param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_2 + _DAT_11271f394);
  lVar13 = (long)_DAT_11271f3a4;
  uVar2 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar2;
  lVar6 = param_2;
  if (cVar1 == '\x01') {
    uStack_b8 = *(long *)(param_2 + _DAT_11271f3a0);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = *(undefined8 *)(param_2 + _DAT_11271f39c);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_d0;
    func_0x00010bf49480(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_2;
    func_0x00010bf1ff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_b8 = param_2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010bf493c0(param_1 + 21.0);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11271f39c;
    uStack_d8 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_d0;
    func_0x00010bf49480(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(param_2 + lVar12);
    func_0x00010bf348e0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(uVar2);
  puVar10 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar13));
  func_0x00010bf199c0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_boldAvenirNextFontOfSize__1125a54d8);
  return;
}



/* Entry: 1051ef5fc; end: 1051ef60b; +[SCContextMessagingHeader headerFont] */

void FUN_1051ef5fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_boldAvenirNextFontOfSize__1125a54d8);
  return;
}



/* Entry: 1051ef60c; end: 1051ef76b; -[SCContextMessagingHeader _attributedTextForDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ef60c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_11271f3a0);
  lVar1 = param_3;
  _objc_retain();
  if (lVar5 == 0) {
    _objc_opt_class();
    func_0x00010bfdf500();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f3a4),PTR_s_setAttributedText__1126387e8);
  return;
}



/* Entry: 1051ef76c; end: 1051ef77b; -[SCContextMessagingHeader _setAttributedLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ef76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f3a4),PTR_s_setAttributedText__1126387e8);
  return;
}



/* Entry: 1051ef77c; end: 1051efa0b; -[SCContextMessagingHeader _setupSwapIcon] */

/* WARNING: Possible PIC construction at 0x0001051efa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001051efabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001051efae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001051efac0) */
/* WARNING: Removing unreachable block (ram,0x0001051efa88) */
/* WARNING: Removing unreachable block (ram,0x0001051efaec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ef77c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_11271f3ac;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11271f3a4;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_11271f3ac;
  uVar14 = *(undefined8 *)(lVar2 + lVar17);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar14);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + lVar17),PTR_s_addTarget_action_forControlEvent_11259c900,lVar2,
             PTR_s__swapNameIconTouchUpInside__112528270,0x40);
  return;
}



/* Entry: 1051efa0c; end: 1051efb0f; -[SCContextMessagingHeader _setupGestures] */

/* WARNING: Possible PIC construction at 0x0001051efa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001051efabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001051efae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001051efac0) */
/* WARNING: Removing unreachable block (ram,0x0001051efa88) */
/* WARNING: Removing unreachable block (ram,0x0001051efaec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051efa0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271f3ac;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dcb158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_addTarget_action_forControlEvent_11259c900,
             param_1,PTR_s__swapNameIconTouchUpInside__112528270,0x40);
  return;
}



/* Entry: 1051efb10; end: 1051efb47; -[SCContextMessagingHeader _swapNameIconTouchUpInside:] */

void FUN_1051efb10(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2644c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051efb48; end: 1051efb4f; -[SCContextMessagingHeader _swapNameIconTouchDown:] */

void FUN_1051efb48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scaleUpLabelWithCompletion__112584468,0);
  return;
}



/* Entry: 1051efb50; end: 1051efb57; -[SCContextMessagingHeader _swapNameIconTouchUpOutside:] */

void FUN_1051efb50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scaleDownLabelWithCompletion__1125843e8,0);
  return;
}



/* Entry: 1051efb58; end: 1051efb8f; -[SCContextMessagingHeader _exitButtonPressed:] */

void FUN_1051efb58(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


