/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f54258; end: 104f5425f; -[SCFriendMuteConversationAction prominentActionButton] */

undefined8 FUN_104f54258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f54260; end: 104f542cb; -[SCFriendMuteConversationAction .cxx_destruct] */

void FUN_104f54260(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f542cc; end: 104f5459b; -[SCFriendPinConversationAction initWithFriendUserId:context:pinnedConversationsServices:conversationServices:conversationIdServices:friendsFeedDataAccess:withAccessibilityIdentifier:] */

undefined8 *
FUN_104f542cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e5320;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[4];
    puVar1[4] = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar1[8] = 0xd;
    puVar3 = auStack_78;
    _objc_initWeak(puVar3,puVar1);
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000104f62348();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    puVar5 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c195460(puVar5);
    func_0x00010c160fc0(puVar5);
    _objc_retain(puVar5);
    uVar2 = puVar1[10];
    puVar1[10] = puVar5;
    _objc_release(uVar2);
    func_0x00010be130c0(puVar1);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f5459c; end: 104f545e3;  */

void FUN_104f5459c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2df80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f545e4; end: 104f5488f; -[SCFriendPinConversationAction _fetchPinStatusForCell:] */

void FUN_104f545e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_104f54890;
  uStack_110 = 0x104f548a0;
  uStack_108 = 0;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar5 = *(undefined8 *)(lVar4 * 8);
      func_0x00010bf96da0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0020();
      _objc_release(uVar5);
      if (puStack_128[5] != 0) goto LAB_104f5478c;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
LAB_104f5478c:
  _objc_release(lVar2);
  lVar3 = puStack_128[5];
  func_0x00010c0fc580();
  _objc_retainAutoreleasedReturnValue();
  *(char *)(param_1 + 0x38) = lVar3 != 0;
  _objc_release();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104f62360();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104f62348();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216540(param_3);
  func_0x00010c195460(param_3);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 104f54890; end: 104f548a7;  */

void FUN_104f54890(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f548a8; end: 104f54923;  */

void FUN_104f548a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104f54924; end: 104f5492b;  */

void FUN_104f54924(void)

{
  return;
}



/* Entry: 104f5492c; end: 104f54b67; -[SCFriendPinConversationAction _handlePinOrUnpinConversationWithActionSheet:] */

void FUN_104f5492c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10));
  lVar1 = param_1;
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b2a58;
  func_0x00010c2942a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c0fc460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104f54b68;
    puStack_68 = &UNK_11085dbf8;
    puVar6 = auStack_50;
    _objc_copyWeak(puVar6,auStack_48);
    _objc_retain(puVar2);
    puStack_60 = puVar2;
    _objc_retain(param_3);
    puStack_58 = param_3;
    func_0x00010c12da80(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puStack_58);
    puVar5 = puStack_60;
  }
  else {
    func_0x00010c0fc460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_88;
    _objc_copyWeak(puVar6,auStack_48);
    _objc_retain(param_3);
    func_0x00010befa920(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar5 = param_3;
  }
  _objc_release(puVar5);
  _objc_destroyWeak(puVar6);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f54b68; end: 104f54c33;  */

void FUN_104f54b68(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f54c34;
  puStack_58 = &UNK_110844dd0;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 104f54c34; end: 104f54c6b;  */

void FUN_104f54c34(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f54c6c; end: 104f54d1f;  */

void FUN_104f54c6c(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f54d20;
  puStack_50 = &UNK_1108488f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 104f54d20; end: 104f54d57;  */

void FUN_104f54d20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfec40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f54d58; end: 104f54da3; -[SCFriendPinConversationAction _didUnpinConversationSuccess:identifier:actionSheet:] */

void FUN_104f54d58(void)

{
  undefined8 uVar1;
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  uVar1 = in_x4;
  func_0x00010bf6b020(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f54da4; end: 104f55047; -[SCFriendPinConversationAction _didPinConversationSuccess:actionSheet:] */

void FUN_104f54da4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    uVar7 = param_4;
    _objc_retain(param_4);
    func_0x000104f62300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000104f62618();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar4 = puVar3;
    func_0x000104f62630();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c10eda0(param_4);
    _objc_release(param_4);
    func_0x00010beeeee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_4);
    uVar7 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeef20();
    _objc_release(param_4);
    _objc_release(uVar7);
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf504e0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b800(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f55048; end: 104f55087;  */

void FUN_104f55048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b800(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f55088; end: 104f55097;  */

void FUN_104f55088(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f55098; end: 104f5509f; -[SCFriendPinConversationAction _makeConversationShowOnFeed:] */

void FUN_104f55098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_makeLocalConversationShowOnFeedI_11260b6e8);
  return;
}



/* Entry: 104f550a0; end: 104f550a7; -[SCFriendPinConversationAction position] */

undefined8 FUN_104f550a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f550a8; end: 104f550af; -[SCFriendPinConversationAction prominentActionButton] */

undefined8 FUN_104f550a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f550b0; end: 104f550b7; -[SCFriendPinConversationAction actionSheetCell] */

undefined8 FUN_104f550b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f550b8; end: 104f5512f; -[SCFriendPinConversationAction .cxx_destruct] */

void FUN_104f550b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f55130; end: 104f55243; -[SCFriendSnapPostOpenViewingAction initWithFriendSnapchatter:context:withAccessibilityIdentifier:snapPostOpenActionCellProvider:] */

undefined1 *
FUN_104f55130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5328;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0xf;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be1cac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f55244; end: 104f5538b; -[SCFriendSnapPostOpenViewingAction _getActionSheetCellForUser:] */

void FUN_104f55244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b01c0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar1;
  func_0x00010bfc1ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f5538c; end: 104f553b7;  */

void FUN_104f5538c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f553b8; end: 104f553c3; -[SCFriendSnapPostOpenViewingAction _logRetentionPolicyAction] */

void FUN_104f553b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logActionWithName__112605b20,0x68);
  return;
}



/* Entry: 104f553c4; end: 104f553cb; -[SCFriendSnapPostOpenViewingAction position] */

undefined8 FUN_104f553c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f553cc; end: 104f553d3; -[SCFriendSnapPostOpenViewingAction prominentActionButton] */

undefined8 FUN_104f553cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f553d4; end: 104f553db; -[SCFriendSnapPostOpenViewingAction actionSheetCell] */

undefined8 FUN_104f553d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f553dc; end: 104f5542f; -[SCFriendSnapPostOpenViewingAction .cxx_destruct] */

void FUN_104f553dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f55430; end: 104f556c7; -[SCMessagingFriendActionSheetPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f55430(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_112717a8c;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf1f440();
  _objc_release(lVar10);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112717a90;
    lVar1 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2a60;
    _objc_alloc(PTR_PTR_1126b2a60);
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar6 = lVar10;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x000104f623d8();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112717a98;
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004340(puVar5);
    func_0x00010c125b60(lVar4);
    _objc_release(puVar5);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar10);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar1 = lVar9;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf6d820();
    _objc_release(lVar10);
    _objc_release(lVar1);
    _objc_release(lVar9);
    if ((int)lVar2 != 0) {
      func_0x00010be89440(param_1);
    }
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 104f556c8; end: 104f55707;  */

void FUN_104f556c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1cb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f55708; end: 104f559f7; -[SCMessagingFriendActionSheetPluginEntryPoint _getActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f55708(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd5e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar3 = param_1;
  func_0x00010bdd67a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar4 = param_1;
  func_0x00010bdd6560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar5 = param_1;
  func_0x00010be22ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar6 = param_1;
  func_0x00010bdd6c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010befa120(puVar1);
  }
  _objc_initWeak(auStack_68,param_1);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2a60;
  _objc_alloc(PTR_PTR_1126b2a60);
  lVar9 = param_1 + _DAT_112717a90;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x000104f62390();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112717a98;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004340(puVar8);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  func_0x00010befa120(puVar1);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104f559f8; end: 104f55a37;  */

void FUN_104f559f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be20d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f55a38; end: 104f55af3; -[SCMessagingFriendActionSheetPluginEntryPoint _getChatSettingsActions] */

void FUN_104f55a38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd6560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar2);
  }
  func_0x00010be22ae0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010befa120(puVar1,param_2,param_1);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f55af4; end: 104f55bab; -[SCMessagingFriendActionSheetPluginEntryPoint _getDenestedNotificationSettingsActions] */

void FUN_104f55af4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd6c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar2);
  }
  func_0x00010be20d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f55bac; end: 104f55fcb; -[SCMessagingFriendActionSheetPluginEntryPoint _registerDenestedActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f55bac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1;
  func_0x00010bdd5e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1 + _DAT_112717a90;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bdd67a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1 + _DAT_112717a90;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104f55fcc;
  puStack_90 = &UNK_11085dc48;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112717a90;
  lVar3 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2a60;
  _objc_alloc(PTR_PTR_1126b2a60);
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000104f623f0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112717a98;
  lVar10 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004340(puVar7);
  func_0x00010c125b60(lVar6);
  _objc_release(puVar7);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2a60;
  _objc_alloc(PTR_PTR_1126b2a60);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar10 = lVar14;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x000104f62390();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004340(puVar12);
  func_0x00010c125b60(lVar4);
  _objc_release(puVar12);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 104f55fcc; end: 104f5604b;  */

void FUN_104f55fcc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1dc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f5604c; end: 104f56183; -[SCMessagingFriendActionSheetPluginEntryPoint _buildClearConversationAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f5604c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b2a68;
  _objc_alloc(PTR_PTR_1126b2a68);
  lVar8 = (long)_DAT_112717a90;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar5 = lVar8;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112717a9c;
  _objc_loadWeakRetained(lVar6);
  param_1 = param_1 + _DAT_112717aa0;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015dc0(puVar1,param_2,lVar4,lVar5,lVar6,lVar7,
                      &PTR____CFConstantStringClassReference_110dbc3f8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f56184; end: 104f562ff; -[SCMessagingFriendActionSheetPluginEntryPoint _buildPinConversationAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f56184(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b2a70;
  _objc_alloc();
  lVar10 = (long)_DAT_112717a90;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar5 = lVar10;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112717aa4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112717a9c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_112717aa8;
  _objc_loadWeakRetained(lVar8);
  param_1 = param_1 + _DAT_112717aa0;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015de0(puVar1,param_2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,
                      &PTR____CFConstantStringClassReference_110dbc418);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f56300; end: 104f5644f; -[SCMessagingFriendActionSheetPluginEntryPoint _buildMessageRetentionAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f56300(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b2a78;
  _objc_alloc(PTR_PTR_1126b2a78);
  lVar9 = (long)_DAT_112717a90;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112717a9c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112717aa8;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015a80(puVar1,param_2,lVar3,lVar4,lVar7,lVar8,
                      &PTR____CFConstantStringClassReference_110dbc438);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f56450; end: 104f56747; -[SCMessagingFriendActionSheetPluginEntryPoint _buildSnapstreakReminderActionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f56450(long param_1,undefined8 param_2)

{
  long lVar1;
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
  long lVar12;
  int iVar13;
  
  lVar1 = param_1 + _DAT_112717a98;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c0790e0();
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  iVar13 = _DAT_112717a90;
  if ((int)lVar3 == 0) {
    lVar1 = param_1 + _DAT_112717a90;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010901d924();
    lVar12 = (long)(int)lVar12;
  }
  else {
    lVar1 = param_1 + _DAT_112717aac;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c25c100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    iVar13 = _DAT_112717a90;
    lVar3 = param_1 + _DAT_112717a90;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c25bfe0(lVar4,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010c25c060();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar12 < 1) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126b2a80;
    _objc_alloc();
    lVar1 = param_1 + iVar13;
    lVar4 = lVar1;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained(lVar1);
    lVar9 = lVar1;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112717a9c;
    _objc_loadWeakRetained(lVar2);
    lVar12 = param_1 + _DAT_112717ab0;
    _objc_loadWeakRetained(lVar12);
    lVar3 = param_1 + _DAT_112717ab4;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + _DAT_112717ab8;
    _objc_loadWeakRetained();
    lVar10 = param_1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004f40(puVar11,param_2,lVar5,lVar8,lVar9,lVar2,lVar12,lVar3,lVar10);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104f56748; end: 104f56843; -[SCMessagingFriendActionSheetPluginEntryPoint _getSnapPostViewingAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f56748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b2a88;
  _objc_alloc(PTR_PTR_1126b2a88);
  lVar6 = (long)_DAT_112717a90;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112717abc;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c2425c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015ac0(puVar1,param_2,lVar3,lVar4,&PTR____CFConstantStringClassReference_110dbc438,
                      lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f56844; end: 104f56feb; -[SCMessagingFriendActionSheetPluginEntryPoint _getNotificationSettingsActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f56844(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2a90;
  _objc_alloc();
  lVar22 = (long)_DAT_112717a90;
  lVar4 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar7 = lVar24;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112717ab0;
  lVar8 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar8);
  lVar23 = (long)_DAT_112717a9c;
  lVar9 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015e80();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar24);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010befa120(puVar2);
  uVar14 = param_1 + _DAT_112717a98;
  _objc_loadWeakRetained();
  uVar15 = uVar14;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c080e80();
  if ((uVar17 & 1) == 0) {
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
  }
  else {
    uVar17 = param_1 + lVar22;
    _objc_loadWeakRetained();
    uVar18 = uVar17;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x000100bec1f0();
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    if ((uVar19 & 1) != 0) {
      bVar1 = true;
      goto LAB_104f56c04;
    }
  }
  puVar20 = PTR_PTR_1126b2a90;
  _objc_alloc(PTR_PTR_1126b2a90);
  lVar4 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = lVar24;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar21);
  lVar8 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar8);
  lVar7 = lVar8;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015e80(puVar20);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar24);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  func_0x00010befa120(puVar2);
  _objc_release(puVar20);
  bVar1 = false;
LAB_104f56c04:
  lVar24 = (long)_DAT_112717ac0;
  lVar4 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf619c0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar21;
  func_0x00010c252440();
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  if (lVar5 != 0) {
    puVar20 = PTR_PTR_1126b2a98;
    _objc_alloc();
    lVar4 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar10 = lVar4;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar22;
    _objc_loadWeakRetained();
    lVar12 = lVar8;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar9);
    lVar11 = param_1 + _DAT_112717aa8;
    _objc_loadWeakRetained(lVar11);
    lVar21 = param_1 + lVar24;
    _objc_loadWeakRetained(lVar21);
    lVar5 = param_1 + _DAT_112717ac4;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_112717acc;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112717a8c;
    _objc_loadWeakRetained();
    lVar13 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015aa0();
    _objc_release(lVar13);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar21);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar4);
    func_0x00010befa120(puVar2);
    _objc_release(puVar20);
  }
  lVar4 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf61b80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar21;
  func_0x00010c252440();
  if (lVar5 == 0) {
    bVar1 = true;
  }
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  if (!bVar1) {
    puVar20 = PTR_PTR_1126b2a98;
    _objc_alloc(PTR_PTR_1126b2a98);
    lVar4 = param_1 + lVar22;
    _objc_loadWeakRetained(lVar4);
    lVar9 = lVar4;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + lVar22;
    _objc_loadWeakRetained(lVar22);
    lVar11 = lVar22;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar23);
    lVar8 = param_1 + _DAT_112717aa8;
    _objc_loadWeakRetained(lVar8);
    lVar24 = param_1 + lVar24;
    _objc_loadWeakRetained(lVar24);
    param_1 = param_1 + _DAT_112717ac4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c015aa0(puVar20);
    _objc_release(param_1);
    _objc_release(lVar24);
    _objc_release(lVar8);
    _objc_release(lVar23);
    _objc_release(lVar11);
    _objc_release(lVar22);
    _objc_release(lVar9);
    _objc_release(lVar4);
    func_0x00010befa120(puVar2);
    _objc_release(puVar20);
  }
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 104f56fec; end: 104f570df; -[SCMessagingFriendActionSheetPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f56fec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717a94,0);
  _objc_storeStrong(param_1 + _DAT_112717ac8,0);
  _objc_destroyWeak(param_1 + _DAT_112717acc);
  _objc_destroyWeak(param_1 + _DAT_112717ac4);
  _objc_destroyWeak(param_1 + _DAT_112717ab4);
  _objc_destroyWeak(param_1 + _DAT_112717ac0);
  _objc_destroyWeak(param_1 + _DAT_112717aac);
  _objc_destroyWeak(param_1 + _DAT_112717a98);
  _objc_destroyWeak(param_1 + _DAT_112717abc);
  _objc_destroyWeak(param_1 + _DAT_112717a8c);
  _objc_destroyWeak(param_1 + _DAT_112717ab0);
  _objc_destroyWeak(param_1 + _DAT_112717ab8);
  _objc_destroyWeak(param_1 + _DAT_112717aa4);
  _objc_destroyWeak(param_1 + _DAT_112717aa8);
  _objc_destroyWeak(param_1 + _DAT_112717a9c);
  _objc_destroyWeak(param_1 + _DAT_112717aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717a90);
  return;
}



/* Entry: 104f570e0; end: 104f57263; -[SCFriendSaveSnapAction initWithContext:conversationId:messageId:snapchatter:feedItem:conversationActionHandler:friendsFeedActionTextGenerator:] */

undefined1 *
FUN_104f570e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5330;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 7;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f57264; end: 104f573f7; -[SCFriendSaveSnapAction actionSheetCell] */

void FUN_104f57264(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x0001070b06a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010901d430(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010beef180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c16b660(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f573f8; end: 104f5743f;  */

void FUN_104f573f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f57440; end: 104f574b7; -[SCFriendSaveSnapAction _handleSaveSnapTappedWithActionSheet:] */

void FUN_104f57440(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0a0440(uVar1);
  uVar1 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c14a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_saveMessageInConversationId_mess_112630490,
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x29);
  return;
}



/* Entry: 104f574b8; end: 104f574bf; -[SCFriendSaveSnapAction position] */

undefined8 FUN_104f574b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f574c0; end: 104f574c7; -[SCFriendSaveSnapAction prominentActionButton] */

undefined8 FUN_104f574c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f574c8; end: 104f5753f; -[SCFriendSaveSnapAction .cxx_destruct] */

void FUN_104f574c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f57540; end: 104f577ef; -[SCMessagingFriendActionSheetSaveSnapPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f57540(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = (long)_DAT_112717af4;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c14b780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + lVar15;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar16 = (long)_DAT_112717af8;
    lVar1 = param_1 + lVar16;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bfb9e20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfba040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar6 != 0) {
      lVar1 = param_1 + lVar15;
      _objc_loadWeakRetained();
      lVar7 = lVar1;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b2aa0;
      _objc_alloc();
      lVar3 = param_1 + lVar15;
      _objc_loadWeakRetained();
      lVar9 = lVar3;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + lVar15;
      _objc_loadWeakRetained();
      lVar10 = lVar5;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + lVar15;
      _objc_loadWeakRetained();
      lVar11 = lVar15;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1 + _DAT_112717afc;
      _objc_loadWeakRetained(lVar12);
      lVar13 = lVar12;
      func_0x00010bf50600();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010beee460();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + lVar16;
      _objc_loadWeakRetained();
      lVar16 = param_1;
      func_0x00010bfb9ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0041e0(puVar8,param_2,lVar9,lVar10,lVar2,lVar11,lVar6,lVar14,lVar16);
      func_0x00010c125b60(lVar7,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(lVar16);
      _objc_release(param_1);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar15);
      _objc_release(lVar10);
      _objc_release(lVar5);
      _objc_release(lVar9);
      _objc_release(lVar3);
      _objc_release(lVar7);
      _objc_release(lVar1);
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f577f0; end: 104f57833; -[SCMessagingFriendActionSheetSaveSnapPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f577f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717afc);
  _objc_destroyWeak(param_1 + _DAT_112717af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717af4);
  return;
}



/* Entry: 104f57834; end: 104f57a73; -[SCAddMembersAction initWithGroupId:context:groupServices:addToGroupScopeExposer:addToGroupScopeServices:withAccessibilityIdentifer:] */

undefined8 *
FUN_104f57834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5338;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar1[6] = 6;
    puVar3 = auStack_78;
    _objc_initWeak(puVar3,puVar1);
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000104f5febc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_4);
    puVar5 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar1[7]);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f57a74; end: 104f57ac7;  */

void FUN_104f57a74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f57ac8; end: 104f57d2f; -[SCAddMembersAction _handleAddToGroupWithActionSheet:context:] */

void FUN_104f57ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  func_0x00010c0a0440(param_4,param_2,0x33);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c06ecc0();
  uVar4 = uVar2;
  if ((int)uVar1 == 0) {
    func_0x00010c0c2920();
  }
  else {
    func_0x00010c0c2900();
  }
  uVar1 = uVar3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar5 < uVar4) {
    lVar6 = *(long *)(param_1 + 0x18);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar10 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar7 = PTR_PTR_1126b27d8;
    func_0x00010befc1c0(PTR_PTR_1126b27d8,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b2848;
    _objc_alloc(PTR_PTR_1126b2848);
    func_0x00010c056d20();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23820(uVar9,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar10);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
      puVar10 = PTR_PTR_1126b2aa8;
      _objc_alloc();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bfcf8e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c019480(puVar10,param_2,uVar9);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar10;
      _objc_release(uVar11);
      _objc_release(uVar9);
      lVar6 = *(long *)(param_1 + 0x28);
    }
    func_0x00010c10cfa0(lVar6,param_2,uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f57d30; end: 104f57d9b; -[SCAddMembersAction createChatSelectionScopeWantsToDismiss:] */

void FUN_104f57d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f57d9c; end: 104f57de3; -[SCAddMembersAction createChatSelectionScopeDidDismiss:] */

void FUN_104f57d9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f57de4; end: 104f57e1b; -[SCAddMembersAction createChatSelectionScope:wantsToDismissWithNewChat:] */

void FUN_104f57de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f57e1c; end: 104f57e23; -[SCAddMembersAction position] */

undefined8 FUN_104f57e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f57e24; end: 104f57e2b; -[SCAddMembersAction actionSheetCell] */

undefined8 FUN_104f57e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f57e2c; end: 104f57e33; -[SCAddMembersAction prominentActionButton] */

undefined8 FUN_104f57e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f57e34; end: 104f57e9f; -[SCAddMembersAction .cxx_destruct] */

void FUN_104f57e34(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f57ea0; end: 104f5804f; -[SCClearConversationAction initWithGroupId:context:conversationServices:withAccessibilityIdentifier:] */

undefined8 *
FUN_104f57ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e5340;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = 8;
    uVar2 = param_5;
    func_0x00010bf3afa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b10a0;
    uVar3 = uVar2;
    func_0x000104f62378();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    puVar5 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[3];
    puVar1[3] = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010c160fc0(puVar1[3]);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f58050; end: 104f580df;  */

void FUN_104f58050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0a0440(uVar1);
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f580e0; end: 104f580e7; -[SCClearConversationAction position] */

undefined8 FUN_104f580e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f580e8; end: 104f580ef; -[SCClearConversationAction actionSheetCell] */

undefined8 FUN_104f580e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f580f0; end: 104f580f7; -[SCClearConversationAction prominentActionButton] */

undefined8 FUN_104f580f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f580f8; end: 104f58133; -[SCClearConversationAction .cxx_destruct] */

void FUN_104f580f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f58134; end: 104f583bb; -[SCCustomSoundsAction initWithGroupId:context:conversationServices:groupServices:plusServices:pageScopeFactoryServices:soundType:] */

undefined8 *
FUN_104f58134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5348;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar1[8] = param_9;
    if (param_9 == 1) {
      puVar1[10] = 0x13;
      func_0x000104f625e8();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_9 == 0) {
      puVar1[10] = 0xf;
      func_0x000104f623a8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = 0;
    }
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126b10a0;
    func_0x00010c296e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    puVar4 = puVar3;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010bee0600(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f583bc; end: 104f58403;  */

void FUN_104f583bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f58404; end: 104f5859b; -[SCCustomSoundsAction _handleCellTappedWithActionSheet:] */

void FUN_104f58404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return;
  }
  func_0x00010be51640();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcf8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcf8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf85ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2a38;
  _objc_alloc(PTR_PTR_1126b2a38);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0cfc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c247a20(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15ffa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004d00(puVar4,param_2,uVar7,uVar3,uVar1,uVar5,uVar6,param_1,
                      *(undefined8 *)(param_1 + 0x40),0);
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf21f80(uVar7,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f5859c; end: 104f585b7; -[SCCustomSoundsAction _updateSoundName] */

void FUN_104f5859c(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bedec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRingtoneSoundName_1125954b0);
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNotificationSoundName_112594a88);
    return;
  }
  return;
}



/* Entry: 104f585b8; end: 104f58773; -[SCCustomSoundsAction _updateNotificationSoundName] */

void FUN_104f585b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf619c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 3) {
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf50600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa5f20(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
  func_0x000107fd4248();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f58774; end: 104f5882f;  */

void FUN_104f58774(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_104f58830;
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



/* Entry: 104f58830; end: 104f588c3;  */

void FUN_104f58830(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf619a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  if (0xc < uVar2) {
    uVar2 = 0;
  }
  func_0x000107fd4144(uVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f588c4; end: 104f58a8b; -[SCCustomSoundsAction _updateRingtoneSoundName] */

void FUN_104f588c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf61b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 3) {
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf50600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa5f20(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
  puVar8 = PTR_PTR_1126b2a30;
  func_0x00010c09e660(PTR_PTR_1126b2a30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeeee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 104f58a8c; end: 104f58b47;  */

void FUN_104f58a8c(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_104f58b48;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104f58b48; end: 104f58bef;  */

void FUN_104f58b48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b2a30;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf61b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61b20(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2a30;
  func_0x00010c09e660(PTR_PTR_1126b2a30,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340();
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104f58bf0; end: 104f58c17; -[SCCustomSoundsAction _logCellTap] */

void FUN_104f58bf0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = 0xd1;
  }
  else {
    if (*(long *)(param_1 + 0x40) != 1) {
      return;
    }
    uVar1 = 0xe1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logActionWithName__112605b20,uVar1);
  return;
}



/* Entry: 104f58c18; end: 104f58c43; -[SCCustomSoundsAction customNotificationSoundsPageDidDismiss] */

void FUN_104f58c18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSoundName_112595b28);
  return;
}



/* Entry: 104f58c44; end: 104f58c4b; -[SCCustomSoundsAction position] */

undefined8 FUN_104f58c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f58c4c; end: 104f58c53; -[SCCustomSoundsAction prominentActionButton] */

undefined8 FUN_104f58c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104f58c54; end: 104f58c5b; -[SCCustomSoundsAction actionSheetCell] */

undefined8 FUN_104f58c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104f58c5c; end: 104f58ceb; -[SCCustomSoundsAction .cxx_destruct] */

void FUN_104f58c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f58cec; end: 104f58f03; -[SCEditGroupNameAction initWithGroupId:context:editGroupNameScopeExposer:editGroupNameScopeBuilderServices:withAccessibilityIdentifier:] */

undefined8 *
FUN_104f58cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e5350;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = 7;
    puVar3 = auStack_78;
    _objc_initWeak(puVar3,puVar1);
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000104f5fed4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_4);
    puVar5 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c160fc0(puVar1[6]);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f58f04; end: 104f58f57;  */

void FUN_104f58f04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28c20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f58f58; end: 104f5900f; -[SCEditGroupNameAction _handleEditGroupNameWithActionSheet:context:] */

void FUN_104f58f58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  func_0x00010c0a0440(param_4);
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf23180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f59010; end: 104f59013; -[SCEditGroupNameAction willDisplayEditGroupNameScope:] */

void FUN_104f59010(void)

{
  return;
}



/* Entry: 104f59014; end: 104f590c3; -[SCEditGroupNameAction didDismissEditGroupNameScope:didUpdate:] */

void FUN_104f59014(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_4 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010beeef20(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104f590c4; end: 104f590cb; -[SCEditGroupNameAction position] */

undefined8 FUN_104f590c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f590cc; end: 104f590d3; -[SCEditGroupNameAction actionSheetCell] */

undefined8 FUN_104f590cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f590d4; end: 104f590db; -[SCEditGroupNameAction prominentActionButton] */

undefined8 FUN_104f590d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f590dc; end: 104f59137; -[SCEditGroupNameAction .cxx_destruct] */

void FUN_104f590dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f59138; end: 104f592ef; -[SCGroupChatSettingsAction initWithGroupId:context:position:settingsItemText:settingsActionSheetTitle:actionName:withAccessibilityIdentifier:actions:webScopeExposer:messagingExperimentService:] */

undefined8 *
FUN_104f59138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e5358;
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
    puVar1[8] = param_5;
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    puVar1[5] = param_8;
    puVar3 = puVar1;
    func_0x00010bddc540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f592f0; end: 104f59423; -[SCGroupChatSettingsAction _cellWithText:accessibilityId:] */

void FUN_104f592f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x00010c0d0f20(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar2 = puVar1;
  func_0x00010bf1d200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c165e40(puVar2);
  func_0x00010c160fc0(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f59424; end: 104f5946b;  */

void FUN_104f59424(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be271e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f5946c; end: 104f5978b; -[SCGroupChatSettingsAction _handleChatSettingsWithActionSheet:] */

void FUN_104f5946c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  func_0x00010c0a0440(*(undefined8 *)(param_3 + 0x10));
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_11085dcc8);
  puVar3 = PTR_PTR_1126b10a0;
  uVar2 = uVar1;
  func_0x000104f62318();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((*(ulong *)(param_3 + 0x40) < 0x15) &&
     ((1L << (*(ulong *)(param_3 + 0x40) & 0x3f) & 0x130000U) != 0)) {
    puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbc2f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc2f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar5);
    _objc_release(ppuVar6);
    puVar7 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010bff4f40();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bcbeb30();
    func_0x00010c23bba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar7);
    _objc_release(puVar3);
    puVar3 = puVar7;
    func_0x00010bfe6ac0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar9 = puVar7;
    func_0x00010bfe6ac0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1739e0(0,0xc000000000000000,param_1,param_2,puVar7);
    _objc_release(puVar9);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bcbeb30();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010c08fa60(puVar8);
    }
    func_0x00010c066640(puVar8);
    func_0x00010c1a76a0(param_5);
    _objc_initWeak(auStack_78,param_3);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c1d2600(param_5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  func_0x00010c1312e0(param_5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 104f5978c; end: 104f59863;  */

void FUN_104f5978c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


