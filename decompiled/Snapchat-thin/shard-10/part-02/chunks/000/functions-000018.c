/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079ef6bc; end: 1079ef70b; -[SCImpalaQuotingCameraPresenter .cxx_destruct] */

void FUN_1079ef6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079ef70c; end: 1079ef783; -[SCImpalaArroyoConversationDataUpdateCallbackListener initWithCallback:] */

undefined1 * FUN_1079ef70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079ef784; end: 1079ef787; -[SCImpalaArroyoConversationDataUpdateCallbackListener didCreateConversation:] */

void FUN_1079ef784(void)

{
  return;
}



/* Entry: 1079ef788; end: 1079ef7ab; -[SCImpalaArroyoConversationDataUpdateCallbackListener didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_1079ef788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079ef7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



/* Entry: 1079ef7ac; end: 1079ef7af; -[SCImpalaArroyoConversationDataUpdateCallbackListener didRemoveConversation:] */

void FUN_1079ef7ac(void)

{
  return;
}



/* Entry: 1079ef7b0; end: 1079ef7b3; -[SCImpalaArroyoConversationDataUpdateCallbackListener didSendStart:] */

void FUN_1079ef7b0(void)

{
  return;
}



/* Entry: 1079ef7b4; end: 1079ef7b7; -[SCImpalaArroyoConversationDataUpdateCallbackListener didSendComplete:] */

void FUN_1079ef7b4(void)

{
  return;
}



/* Entry: 1079ef7b8; end: 1079ef7bb; -[SCImpalaArroyoConversationDataUpdateCallbackListener didConfirmConversationServerCreation:] */

void FUN_1079ef7b8(void)

{
  return;
}



/* Entry: 1079ef7bc; end: 1079ef853; -[SCImpalaArroyoConversationDataUpdateCallbackListener didConversationReset:messages:] */

void FUN_1079ef7bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,param_3,param_4,PTR____NSArray0__struct_11034ab48);
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1079ef854; end: 1079ef85f; -[SCImpalaArroyoConversationDataUpdateCallbackListener .cxx_destruct] */

void FUN_1079ef854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079ef860; end: 1079ef9cb; -[SCImpalaSnapInsightsChatActionHandler initWithUserSession:chatPresenter:conversationManager:arroyoConversationDataUpdateAnnouncer:conversationIdResolver:viewController:friendsFeedEntryStore:] */

undefined1 *
FUN_1079ef860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f9370;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
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



/* Entry: 1079ef9cc; end: 1079efad3; -[SCImpalaSnapInsightsChatActionHandler openChatWithUserId:conversationId:] */

void FUN_1079ef9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1079efa84;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079efad4; end: 1079efcb7; -[SCImpalaSnapInsightsChatActionHandler sendScreenCaptureNotificationWithUserId:conversationId:type:] */

void FUN_1079efad4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_5;
  func_0x00010bf504e0(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar5 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x28);
      _objc_retain(puVar7);
    }
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    func_0x00010beee460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380();
    _objc_release(uVar2);
    _objc_release(puVar7);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1079efcb8; end: 1079efd67;  */

void FUN_1079efcb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar3);
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010beee460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380();
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079efd68; end: 1079f01e7; -[SCImpalaSnapInsightsChatActionHandler observeConversationUpdatesByCompositeIdsWithCompositeConversationIds:callback:] */

void FUN_1079efd68(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 unaff_x27;
  undefined **ppuVar19;
  undefined *unaff_x28;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  undefined *puStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_270;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_1f8 = param_4;
  _objc_retain(param_4);
  puVar13 = PTR_PTR_1126b0cd8;
  lVar17 = param_1 + 8;
  lStack_1e8 = param_1;
  _objc_loadWeakRetained(lVar17);
  lVar2 = lVar17;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar13;
  _objc_release(lVar2);
  _objc_release(lVar17);
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  ppuStack_1e0 = param_3;
  func_0x00010bf52a60();
  if (param_3 != (undefined **)0x0) {
    lVar17 = *plStack_140;
    do {
      ppuVar16 = (undefined **)0x0;
      do {
        if (*plStack_140 != lVar17) {
          _objc_enumerationMutation(ppuStack_1e0);
        }
        puVar5 = PTR_PTR_1126b0cd8;
        unaff_x27 = *(undefined8 *)(lStack_148 + (long)ppuVar16 * 8);
        uVar4 = unaff_x27;
        func_0x00010c15df40(unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc35c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = puVar5;
        func_0x00010bfe5d80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar13);
        _objc_release(puVar6);
        unaff_x28 = PTR_PTR_1126b0cd8;
        uVar4 = unaff_x27;
        func_0x00010c08ede0(unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc35c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = unaff_x28;
        func_0x00010bfe5d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 != (undefined *)0x0) {
          puVar6 = unaff_x28;
          func_0x00010bfe5d80(unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar6);
        }
        _objc_release(unaff_x28);
        _objc_release(puVar5);
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (param_3 != ppuVar16);
      param_3 = ppuStack_1e0;
      func_0x00010bf52a60();
    } while (param_3 != (undefined **)0x0);
  }
  _objc_release(ppuStack_1e0);
  lVar17 = lStack_1e8;
  ppuVar12 = ppuStack_1e0;
  uVar4 = uStack_1f8;
  func_0x00010be3af80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d5c78;
  _objc_alloc();
  uVar1 = uStack_1f8;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1079f01e8;
  puStack_180 = &UNK_1109f4718;
  _objc_retain(uStack_1f8);
  puVar6 = puStack_1f0;
  uStack_158 = uVar1;
  _objc_retain(puStack_1f0);
  puStack_178 = puVar6;
  _objc_retain(puVar13);
  ppuVar16 = ppuStack_1e0;
  puStack_170 = puVar13;
  _objc_retain(ppuStack_1e0);
  ppuStack_168 = ppuVar16;
  _objc_retain(puVar3);
  puStack_160 = puVar3;
  func_0x00010bffada0();
  ppuVar8 = *(undefined ***)(lStack_1e8 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(ppuVar8);
  _objc_initWeak(&puStack_1a0,lStack_1e8);
  ppuVar18 = (undefined **)PTR_PTR_1126b2f30;
  _objc_alloc();
  puStack_1d8 = puVar5;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1079f066c;
  puStack_1c0 = &UNK_110848218;
  ppuVar16 = &puStack_1a0;
  _objc_copyWeak(auStack_1a8);
  _objc_retain(lVar17);
  lStack_1b8 = lVar17;
  _objc_retain(puVar7);
  ppuVar11 = &puStack_1d8;
  puStack_1b0 = puVar7;
  func_0x00010bffae00();
  _objc_release(puStack_1b0);
  _objc_release(lStack_1b8);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(&puStack_1a0);
  _objc_release(puVar7);
  _objc_release(puStack_160);
  _objc_release(ppuStack_168);
  _objc_release(puStack_170);
  _objc_release(puStack_178);
  _objc_release(uStack_158);
  _objc_release(lVar17);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puStack_1f0);
  _objc_release(uStack_1f8);
  ppuVar9 = ppuStack_1e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(&puStack_1a0);
  ppuVar10 = ppuVar9;
  __Unwind_Resume();
  pcStack_208 = FUN_1079f01e8;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = ppuVar16;
  ppuVar19 = ppuVar11;
  puStack_260 = unaff_x28;
  uStack_258 = unaff_x27;
  puStack_250 = puVar7;
  lStack_248 = lVar17;
  ppuStack_240 = ppuVar18;
  puStack_238 = puVar3;
  puStack_230 = puVar13;
  ppuStack_228 = ppuVar8;
  ppuStack_220 = &puStack_1d8;
  ppuStack_218 = ppuVar9;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar12);
  _objc_retain(uVar4);
  if ((ppuVar10[8] != (undefined *)0x0) &&
     (ppuVar9 = ppuVar11, func_0x00010bf509a0(), ppuVar9 == (undefined **)0x0)) {
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_328 = 0;
    puStack_330 = (undefined *)0x0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    ppuStack_350 = ppuVar12;
    ppuStack_348 = ppuVar11;
    uStack_340 = uVar4;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &puStack_330;
    ppuVar12 = ppuVar11;
    func_0x00010bf52a60();
    if (ppuVar12 == (undefined **)0x0) {
      _objc_release(ppuVar11);
LAB_1079f0418:
      ppuVar12 = ppuStack_350;
      ppuVar9 = ppuStack_350;
      func_0x00010bf529e0();
      uVar4 = uStack_340;
      ppuVar11 = ppuStack_348;
      if (ppuVar9 != (undefined **)0x0) {
        puVar13 = ppuVar10[6];
        func_0x00010bf529e0();
        if (puVar13 != (undefined *)0x0) {
          ppuVar18 = ppuVar12;
          func_0x00010c0dfd40(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar18;
          func_0x00010bf6e760();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar9;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          _objc_release(ppuVar18);
          ppuVar18 = (undefined **)ppuVar10[7];
          ppuVar9 = ppuVar14;
          func_0x00010bfe5d80(ppuVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          puVar13 = ppuVar10[8];
          ppuVar8 = ppuVar18;
          ppuVar19 = ppuVar12;
          FUN_1079f0560(ppuVar18,ppuVar10[4],ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar8;
          (**(code **)(puVar13 + 0x10))(puVar13);
          _objc_release(ppuVar8);
          goto LAB_1079f04f0;
        }
      }
    }
    else {
      ppuVar18 = (undefined **)0x0;
      lVar17 = *plStack_320;
      ppuStack_358 = ppuVar16;
      ppuStack_338 = ppuVar11;
      do {
        ppuVar16 = (undefined **)0x0;
        ppuVar11 = ppuVar18;
        do {
          if (*plStack_320 != lVar17) {
            _objc_enumerationMutation(ppuStack_338);
          }
          ppuVar19 = *(undefined ***)(lStack_328 + (long)ppuVar16 * 8);
          ppuVar18 = ppuVar19;
          func_0x00010c0f4a60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar18;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = ppuVar10[4];
          func_0x00010bfe5d80(puVar13);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar9;
          func_0x00010c071cc0();
          _objc_release(puVar13);
          _objc_release(ppuVar9);
          _objc_release(ppuVar18);
          ppuVar18 = ppuVar11;
          if (((ulong)ppuVar8 & 1) == 0) {
            ppuVar18 = (undefined **)ppuVar10[5];
            func_0x00010c0f4a60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar19;
            func_0x00010bfe5d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar11);
            _objc_release(ppuVar9);
            _objc_release(ppuVar19);
            ppuVar8 = ppuVar19;
          }
          ppuVar9 = ppuStack_338;
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
          ppuVar11 = ppuVar18;
        } while (ppuVar12 != ppuVar16);
        ppuVar19 = &puStack_330;
        ppuVar12 = ppuStack_338;
        func_0x00010bf52a60();
      } while (ppuVar12 != (undefined **)0x0);
      _objc_release(ppuVar9);
      ppuVar12 = ppuStack_350;
      ppuVar16 = ppuStack_358;
      if (ppuVar18 == (undefined **)0x0) goto LAB_1079f0418;
      puVar13 = ppuVar10[8];
      ppuVar14 = ppuVar18;
      ppuVar19 = ppuStack_350;
      FUN_1079f0560(ppuVar18,ppuVar10[4],ppuStack_350);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar14;
      (**(code **)(puVar13 + 0x10))(puVar13);
      ppuVar11 = ppuStack_348;
LAB_1079f04f0:
      _objc_release(ppuVar14);
      _objc_release(ppuVar18);
      uVar4 = uStack_340;
    }
  }
  _objc_release(uVar4);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  ppuVar12 = ppuVar16;
  _objc_release(ppuVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_1079f0560;
  ppuStack_3a0 = ppuVar18;
  ppuStack_398 = ppuVar10;
  ppuStack_390 = ppuVar11;
  ppuStack_388 = ppuVar8;
  ppuStack_380 = ppuVar16;
  uStack_378 = uVar4;
  ppuStack_370 = &puStack_210;
  _objc_retain(ppuVar15);
  ppuVar18 = (undefined **)PTR_PTR_1126d5c80;
  _objc_retain(ppuVar19);
  _objc_retain(ppuVar12);
  _objc_alloc(ppuVar18);
  ppuVar16 = ppuVar12;
  func_0x00010c08ede0(ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  puStack_3c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3c0 = 0xc2000000;
  pcStack_3b8 = FUN_1079f0e10;
  puStack_3b0 = &UNK_1109f4778;
  ppuStack_3a8 = ppuVar15;
  _objc_retain(ppuVar15);
  ppuVar11 = ppuVar19;
  func_0x000100504554(ppuVar19,&puStack_3c8);
  _objc_release(ppuVar19);
  func_0x00010c0052e0(ppuVar18);
  _objc_release(ppuVar11);
  _objc_release(ppuStack_3a8);
  _objc_release(ppuVar15);
  _objc_release(ppuVar16);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar18);
  return;
}



/* Entry: 1079f01e8; end: 1079f055f;  */

void FUN_1079f01e8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar9 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (puVar1 = param_3, func_0x00010bf509a0(), puVar1 != (undefined8 *)0x0)) goto LAB_1079f0504;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puStack_150 = param_4;
  puStack_148 = param_3;
  uStack_140 = param_5;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_130;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 == (undefined8 *)0x0) {
    _objc_release(param_3);
LAB_1079f0418:
    param_4 = puStack_150;
    puVar1 = puStack_150;
    func_0x00010bf529e0();
    param_5 = uStack_140;
    param_3 = puStack_148;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1079f0504;
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar8 == 0) goto LAB_1079f0504;
    puVar9 = param_4;
    func_0x00010c0dfd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf6e760();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar9);
    unaff_x24 = *(undefined8 **)(param_1 + 0x38);
    puVar9 = puVar1;
    func_0x00010bfe5d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    lVar8 = *(long *)(param_1 + 0x40);
    unaff_x21 = unaff_x24;
    puVar9 = param_4;
    FUN_1079f0560(unaff_x24,*(undefined8 *)(param_1 + 0x20),param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x21;
    (**(code **)(lVar8 + 0x10))(lVar8);
    _objc_release(unaff_x21);
  }
  else {
    unaff_x24 = (undefined8 *)0x0;
    lVar8 = *plStack_120;
    puStack_158 = param_2;
    puStack_138 = param_3;
    do {
      puVar9 = (undefined8 *)0x0;
      puVar7 = unaff_x24;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puStack_138);
        }
        puVar10 = *(undefined8 **)(lStack_128 + (long)puVar9 * 8);
        puVar2 = puVar10;
        func_0x00010c0f4a60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfe5d80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfe5d80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = puVar3;
        func_0x00010c071cc0();
        _objc_release(uVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        unaff_x24 = puVar7;
        if (((ulong)unaff_x21 & 1) == 0) {
          unaff_x24 = *(undefined8 **)(param_1 + 0x28);
          func_0x00010c0f4a60();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar10;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar2);
          _objc_release(puVar10);
          unaff_x21 = puVar10;
        }
        puVar2 = puStack_138;
        puVar9 = (undefined8 *)((long)puVar9 + 1);
        puVar7 = unaff_x24;
      } while (puVar1 != puVar9);
      puVar9 = &uStack_130;
      puVar1 = puStack_138;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
    _objc_release(puVar2);
    param_4 = puStack_150;
    param_2 = puStack_158;
    if (unaff_x24 == (undefined8 *)0x0) goto LAB_1079f0418;
    lVar8 = *(long *)(param_1 + 0x40);
    puVar1 = unaff_x24;
    puVar9 = puStack_150;
    FUN_1079f0560(unaff_x24,*(undefined8 *)(param_1 + 0x20),puStack_150);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    (**(code **)(lVar8 + 0x10))(lVar8);
    param_3 = puStack_148;
  }
  _objc_release(puVar1);
  _objc_release(unaff_x24);
  param_5 = uStack_140;
LAB_1079f0504:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1079f0560;
  puStack_1a0 = unaff_x24;
  lStack_198 = param_1;
  puStack_190 = param_3;
  puStack_188 = unaff_x21;
  puStack_180 = param_2;
  uStack_178 = param_5;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar6 = PTR_PTR_1126d5c80;
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  _objc_alloc(puVar6);
  puVar7 = puVar1;
  func_0x00010c08ede0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_1079f0e10;
  puStack_1b0 = &UNK_1109f4778;
  puStack_1a8 = puVar5;
  _objc_retain(puVar5);
  puVar1 = puVar9;
  func_0x000100504554(puVar9,&puStack_1c8);
  _objc_release(puVar9);
  func_0x00010c0052e0(puVar6);
  _objc_release(puVar1);
  _objc_release(puStack_1a8);
  _objc_release(puVar5);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1079f0560; end: 1079f066b;  */

void FUN_1079f0560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d5c80;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c08ede0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079f0e10;
  puStack_50 = &UNK_1109f4778;
  uStack_48 = param_2;
  _objc_retain(param_2);
  uVar3 = param_3;
  func_0x000100504554(param_3,&puStack_68);
  _objc_release(param_3);
  func_0x00010c0052e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079f066c; end: 1079f06cf;  */

void FUN_1079f066c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079f06d0; end: 1079f087b; -[SCImpalaSnapInsightsChatActionHandler _initialFeedEntriesObserverWithCurrentUUID:compositeConversationIds:callback:] */

void FUN_1079f06d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfba320();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079f087c; end: 1079f0a1b;  */

void FUN_1079f087c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar10 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar10);
    param_5 = &uStack_130;
    param_6 = auStack_f0;
    param_7 = 0x10;
    lVar1 = lVar10;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar10);
          }
          lVar13 = *(long *)(param_3 + 0x30);
          lVar2 = param_3 + 0x38;
          _objc_loadWeakRetained();
          uVar3 = param_4;
          func_0x00010c28d320();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar2;
          func_0x00010be104c0();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar13 + 0x10))(lVar13,lVar14);
          _objc_release(lVar14);
          _objc_release(uVar3);
          _objc_release(lVar2);
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        param_5 = &uStack_130;
        param_6 = auStack_f0;
        param_7 = 0x10;
        lVar1 = lVar10;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar10);
  }
  _objc_release();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_7);
      }
      lVar14 = *(long *)(lVar12 * 8);
      lVar2 = lVar14;
      func_0x00010bf509a0();
      if (lVar2 == 0) {
        puVar5 = param_5;
        func_0x00010c08ede0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar14;
        func_0x00010bf50280(lVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar2;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c071ae0();
        _objc_release(lVar13);
        _objc_release(lVar2);
        _objc_release(puVar5);
        if ((int)puVar6 != 0) {
          lVar2 = lVar14;
          func_0x00010c088aa0();
          lVar13 = lVar14;
          func_0x00010bf858c0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar13;
          func_0x00010bf866a0();
          param_2 = (double)lVar7;
          func_0x00010bf858c0(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar14;
          func_0x00010bfa3ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_4;
          func_0x00010be10520((double)lVar2,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar14);
          _objc_release(lVar13);
          func_0x00010befa120(puVar4);
          _objc_release(uVar3);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = param_7;
    func_0x00010bf52a60();
  }
  _objc_release(param_7);
  puVar8 = PTR_PTR_1126d5c80;
  _objc_alloc();
  puVar5 = param_5;
  func_0x00010c08ede0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  puVar9 = puVar4;
  func_0x00010c0052e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126d5c88;
    _objc_retain(puVar9);
    _objc_retain(puVar6);
    _objc_alloc(puVar8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar6);
    func_0x00010c044760(0,param_2,0,puVar8);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1079f0a1c; end: 1079f0cd3; -[SCImpalaSnapInsightsChatActionHandler _fetchChatConversationWithConversationId:currentUserUUID:feedEntries:] */

void FUN_1079f0a1c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010bf52a60(param_7,param_4,&uStack_140,auStack_100,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_7);
        }
        lVar12 = *(long *)(lStack_138 + lVar11 * 8);
        lVar3 = lVar12;
        func_0x00010bf509a0();
        if (lVar3 == 0) {
          uVar4 = param_5;
          func_0x00010c08ede0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar12;
          func_0x00010bf50280(lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c071ae0(uVar4,param_4,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar3);
          _objc_release(uVar4);
          if ((int)uVar6 != 0) {
            lVar3 = lVar12;
            func_0x00010c088aa0();
            dVar13 = (double)lVar3;
            lVar3 = lVar12;
            func_0x00010bf858c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar3;
            func_0x00010bf866a0();
            param_2 = (double)lVar5;
            func_0x00010bf858c0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar12;
            func_0x00010bfa3ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = param_3;
            func_0x00010be10520(dVar13,param_2,param_3,param_4,param_6,lVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar12);
            _objc_release(lVar3);
            func_0x00010befa120(puVar1,param_4,uVar4);
            _objc_release(uVar4);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_7;
      func_0x00010bf52a60(param_7,param_4,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_7);
  puVar7 = PTR_PTR_1126d5c80;
  _objc_alloc();
  uVar4 = param_5;
  func_0x00010c08ede0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  puVar9 = puVar1;
  func_0x00010c0052e0(puVar7,param_4,uVar4,puVar1);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126d5c88;
    _objc_retain(puVar9);
    _objc_retain(uVar6);
    _objc_alloc(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,(long)dVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c071ae0(puVar9,param_4,uVar6);
    _objc_release(puVar9);
    _objc_release(uVar6);
    func_0x00010c044760(0,param_2,0,puVar7,param_4,puVar1,puVar8);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1079f0cd4; end: 1079f0d9f; -[SCImpalaSnapInsightsChatActionHandler _fetchChatMessageFromConversationWithCurrentUserUUID:lastEventUpdateTimestamp:displayTimestamp:chatInitiatorId:] */

void FUN_1079f0cd4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5c88;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c071ae0(param_6,param_4,param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c044760(0,param_2,0,puVar1,param_4,puVar2,uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079f0da0; end: 1079f0dab; -[SCImpalaSnapInsightsChatActionHandler pushToValdiMarshaller:] */

void FUN_1079f0da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1079f0dac; end: 1079f0e0f; -[SCImpalaSnapInsightsChatActionHandler .cxx_destruct] */

void FUN_1079f0dac(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079f0e10; end: 1079f0f7b;  */

void FUN_1079f0e10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c157500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b900();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0cc0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1211c0();
    func_0x00010c0df7c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126d5c88;
  _objc_alloc(PTR_PTR_1126d5c88);
  lVar1 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5a4a0();
  lVar3 = param_2;
  func_0x00010c15de20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  func_0x00010c044760(0,(double)lVar2,0,puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079f0f7c; end: 1079f0f83; -[SCImpalaSnapInsightsMassSnapContext initWithBundleId:snaps:] */

void FUN_1079f0f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithBundleId_snaps_profileId_1125dc078,param_3,param_4,0);
  return;
}



/* Entry: 1079f0f84; end: 1079f10ab; -[SCImpalaSnapInsightsMassSnapContext initWithBundleId:snaps:profileId:] */

undefined1 *
FUN_1079f0f84(undefined1 *param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126f9378;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined1 **)0x0) {
      lVar2 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar6 + 8);
      *(long *)((long)ppuVar6 + 8) = lVar2;
      _objc_release(uVar4);
      puVar3 = param_4;
      func_0x00010bf51e00();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar3;
      }
      _objc_retain(puVar1);
      uVar4 = *(undefined8 *)((long)ppuVar6 + 0x10);
      *(undefined **)((long)ppuVar6 + 0x10) = puVar1;
      _objc_release(uVar4);
      _objc_release(puVar3);
      uVar4 = param_5;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar6 + 0x18);
      *(undefined8 *)((long)ppuVar6 + 0x18) = uVar4;
      _objc_release(uVar5);
    }
    _objc_retain(ppuVar6);
    param_1 = (undefined1 *)ppuVar6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1079f10ac; end: 1079f10af; -[SCImpalaSnapInsightsMassSnapContext primaryIdentifier] */

void FUN_1079f10ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bundleId_1125a6c38);
  return;
}



/* Entry: 1079f10b0; end: 1079f10d7; -[SCImpalaSnapInsightsMassSnapContext snaps] */

void FUN_1079f10b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079f10d8; end: 1079f10ff; -[SCImpalaSnapInsightsMassSnapContext bundleId] */

void FUN_1079f10d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079f1100; end: 1079f1127; -[SCImpalaSnapInsightsMassSnapContext profileId] */

void FUN_1079f1100(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079f1128; end: 1079f112b; -[SCImpalaSnapInsightsMassSnapContext snapId] */

void FUN_1079f1128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bundleId_1125a6c38);
  return;
}



/* Entry: 1079f112c; end: 1079f1133; -[SCImpalaSnapInsightsMassSnapContext playbackSequence] */

undefined8 FUN_1079f112c(void)

{
  return 0;
}



/* Entry: 1079f1134; end: 1079f122b; -[SCImpalaSnapInsightsMassSnapContext description] */

void FUN_1079f1134(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea93b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079f122c; end: 1079f1267; -[SCImpalaSnapInsightsMassSnapContext .cxx_destruct] */

void FUN_1079f122c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079f1268; end: 1079f12db; -[SCImpalaSnapInsightsOperaActionHandler initWithEventAnnouncer:] */

undefined1 * FUN_1079f1268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9380;
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



/* Entry: 1079f12dc; end: 1079f136b; -[SCImpalaSnapInsightsOperaActionHandler setSnapWithSnap:] */

void FUN_1079f12dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1079f136c;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079f136c; end: 1079f1453;  */

void FUN_1079f136c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e6680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  }
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_1079f1454;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1079f14ac;
  puStack_70 = &UNK_110842e18;
  lStack_68 = lVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
  return;
}



/* Entry: 1079f1454; end: 1079f14ab; -[SCImpalaSnapInsightsOperaActionHandler pause] */

void FUN_1079f1454(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079f14ac;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1079f14ac; end: 1079f14c3;  */

void FUN_1079f14ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_operaViewDidSendEvent__1126187f8,
             &PTR____CFConstantStringClassReference_110ea94d8);
  return;
}



/* Entry: 1079f14c4; end: 1079f151b; -[SCImpalaSnapInsightsOperaActionHandler resume] */

void FUN_1079f14c4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079f151c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1079f151c; end: 1079f1533;  */

void FUN_1079f151c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_operaViewDidSendEvent__1126187f8,
             &PTR____CFConstantStringClassReference_110ea94f8);
  return;
}



/* Entry: 1079f1534; end: 1079f153f; -[SCImpalaSnapInsightsOperaActionHandler pushToValdiMarshaller:] */

void FUN_1079f1534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1079f1540; end: 1079f1547; -[SCImpalaSnapInsightsOperaActionHandler onSetSnap] */

undefined8 FUN_1079f1540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079f1548; end: 1079f154f; -[SCImpalaSnapInsightsOperaActionHandler setOnSetSnap:] */

void FUN_1079f1548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079f1550; end: 1079f157f; -[SCImpalaSnapInsightsOperaActionHandler .cxx_destruct] */

void FUN_1079f1550(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079f1580; end: 1079f163b; -[SCImpalaSnapInsightsPresentationHandler initWithViewController:snapInsightsScopeDelegate:valdiRuntimeProvider:] */

undefined1 *
FUN_1079f1580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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



/* Entry: 1079f163c; end: 1079f1693; -[SCImpalaSnapInsightsPresentationHandler dismiss] */

void FUN_1079f163c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079f1694;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1079f1694; end: 1079f1733;  */

void FUN_1079f1694(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c241780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1079f1734; end: 1079f18a3; -[SCImpalaSnapInsightsPresentationHandler pushWithModuleName:componentPath:viewModel:] */

void FUN_1079f1734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1079f1810;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079f18a4; end: 1079f18fb; -[SCImpalaSnapInsightsPresentationHandler pop] */

void FUN_1079f18a4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079f18fc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1079f18fc; end: 1079f194f;  */

void FUN_1079f18fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079f1950; end: 1079f195b; -[SCImpalaSnapInsightsPresentationHandler pushToValdiMarshaller:] */

void FUN_1079f1950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1079f195c; end: 1079f198f; -[SCImpalaSnapInsightsPresentationHandler .cxx_destruct] */

void FUN_1079f195c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079f1990; end: 1079f1a83; -[SCImpalaSnapInsightsQuotingActionHandler initWithViewController:userSession:bitmojiSelfieFetcher:creatorInfoProvider:] */

undefined1 *
FUN_1079f1990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9390;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126c9118;
    _objc_alloc();
    func_0x00010c05d560();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079f1a84; end: 1079f1c23; -[SCImpalaSnapInsightsQuotingActionHandler presentCameraWithProfileId:userId:conversationId:stickerImage:quotedStickerType:pageType:pageTypeSpecific:] */

void FUN_1079f1a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126d5c98;
  _objc_opt_class(PTR_PTR_1126d5c98);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1079f1c24;
  puStack_a8 = &UNK_1109f47a8;
  uStack_70 = param_9;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_5;
  uStack_80 = uVar1;
  uStack_78 = param_8;
  uStack_68 = param_7;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 1079f1c24; end: 1079f1cd7;  */

void FUN_1079f1c24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c10f1e0(uVar6,param_2,uVar2,uVar1,uVar3,uVar4,lVar5,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(int *)(param_1 + 0x58) == 1,
                      *(int *)(param_1 + 0x58) == 2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1079f1cd8; end: 1079f1e03; -[SCImpalaSnapInsightsQuotingActionHandler getStickerImageWithDisplayName:messageText:hasEverSentGift:giftThumbnailUrl:bitmojiAvatarId:bitmojiSelfieId:callback:] */

void FUN_1079f1cd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_9);
  if (param_9 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1079f1e04;
    puStack_60 = &UNK_11085b810;
    _objc_retain(param_9);
    lStack_58 = param_9;
    func_0x000108ea6ec8(uVar2,param_3,param_4,param_7,param_8,0,uVar1,&puStack_78);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_9);
  return;
}



/* Entry: 1079f1e04; end: 1079f1e6b;  */

void FUN_1079f1e04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d5c98;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079f1e6c; end: 1079f2033; -[SCImpalaSnapInsightsQuotingActionHandler getQandAStickerImageWithDisplayName:questionText:messageText:callback:] */

void FUN_1079f1e6c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1079f1f4c;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(in_x3);
    uStack_48 = in_x3;
    _objc_retain(in_x4);
    uStack_40 = in_x4;
    _objc_retain(in_x5);
    lStack_38 = in_x5;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 1079f2034; end: 1079f203f; -[SCImpalaSnapInsightsQuotingActionHandler pushToValdiMarshaller:] */

void FUN_1079f2034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1079f2040; end: 1079f2077; -[SCImpalaSnapInsightsQuotingActionHandler .cxx_destruct] */

void FUN_1079f2040(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079f2078; end: 1079f20eb; -[SCImpalaSnapInsightsSnapActionHandler initWithEventAnnouncer:] */

undefined1 * FUN_1079f2078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9398;
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



/* Entry: 1079f20ec; end: 1079f217b; -[SCImpalaSnapInsightsSnapActionHandler deleteSnapWithSnap:] */

void FUN_1079f20ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1079f217c;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079f217c; end: 1079f222f;  */

void FUN_1079f217c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ea9418;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ea9418;
  pcStack_58 = FUN_1079f2230;
  uStack_68 = uVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  if (ppuVar3 != (undefined **)0x0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1079f22c0;
    puStack_88 = &UNK_110841f80;
    puStack_80 = puVar1;
    _objc_retain(ppuVar3);
    ppuStack_78 = ppuVar3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
    _objc_release(ppuStack_78);
  }
  _objc_release(ppuVar3);
  return;
}



/* Entry: 1079f2230; end: 1079f22bf; -[SCImpalaSnapInsightsSnapActionHandler saveSnapWithSnap:] */

void FUN_1079f2230(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1079f22c0;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079f22c0; end: 1079f2373;  */

void FUN_1079f22c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ea9458;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ea9458;
  pcStack_58 = FUN_1079f2374;
  uStack_68 = uVar3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  ppuVar2 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1079f240c;
    puStack_88 = &UNK_110841f80;
    puStack_80 = puVar1;
    _objc_retain(ppuVar4);
    ppuStack_78 = ppuVar4;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
    _objc_release(ppuStack_78);
  }
  _objc_release(ppuVar4);
  return;
}



/* Entry: 1079f2374; end: 1079f240b; -[SCImpalaSnapInsightsSnapActionHandler saveSnapsWithSnaps:] */

void FUN_1079f2374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1079f240c;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079f240c; end: 1079f24bf;  */

void FUN_1079f240c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ea9478;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ea9478;
  pcStack_58 = FUN_1079f24c0;
  uStack_68 = uVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  if (ppuVar3 != (undefined **)0x0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1079f2550;
    puStack_88 = &UNK_110841f80;
    puStack_80 = puVar1;
    _objc_retain(ppuVar3);
    ppuStack_78 = ppuVar3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
    _objc_release(ppuStack_78);
  }
  _objc_release(ppuVar3);
  return;
}



/* Entry: 1079f24c0; end: 1079f254f; -[SCImpalaSnapInsightsSnapActionHandler sendSnapWithSnap:] */

void FUN_1079f24c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1079f2550;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079f2550; end: 1079f2603;  */

void FUN_1079f2550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ea9498;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ea9498;
  pcStack_58 = FUN_1079f2604;
  uStack_68 = uVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  if (ppuVar3 != (undefined **)0x0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1079f2694;
    puStack_88 = &UNK_110841f80;
    puStack_80 = puVar1;
    _objc_retain(ppuVar3);
    ppuStack_78 = ppuVar3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
    _objc_release(ppuStack_78);
  }
  _objc_release(ppuVar3);
  return;
}



/* Entry: 1079f2604; end: 1079f2693; -[SCImpalaSnapInsightsSnapActionHandler copyLinkWithSnap:] */

void FUN_1079f2604(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1079f2694;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079f2694; end: 1079f2747;  */

undefined ** FUN_1079f2694(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ea94b8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  func_0x00010b046e08(ppuVar3,ppuVar1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return &PTR____CFConstantStringClassReference_110ea94b8;
}



/* Entry: 1079f2748; end: 1079f2753; -[SCImpalaSnapInsightsSnapActionHandler pushToValdiMarshaller:] */

void FUN_1079f2748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1079f2754; end: 1079f275f; -[SCImpalaSnapInsightsSnapActionHandler .cxx_destruct] */

void FUN_1079f2754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079f2760; end: 1079f27fb; -[SCImpalaSnapInsightsUserReportingActionHandler initWithReportPagePresenter:viewController:] */

undefined1 *
FUN_1079f2760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f93a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079f27fc; end: 1079f2883; -[SCImpalaSnapInsightsUserReportingActionHandler presentReportScreenWithUserId:] */

void FUN_1079f27fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1079f2884;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1079f2884; end: 1079f28cb;  */

void FUN_1079f2884(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  lVar2 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c10dfa0(uVar3,param_2,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079f28cc; end: 1079f28d7; -[SCImpalaSnapInsightsUserReportingActionHandler pushToValdiMarshaller:] */

void FUN_1079f28cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1079f28d8; end: 1079f2903; -[SCImpalaSnapInsightsUserReportingActionHandler .cxx_destruct] */

void FUN_1079f28d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079f2904; end: 1079f2927;  */

undefined * FUN_1079f2904(long param_1)

{
  if (param_1 - 1U < 6) {
    return (&PTR_PTR_1109f47d8)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 1079f2928; end: 1079f31cf; -[SCImpalaSnapInsightsOperaLayerViewController initWithUserSession:circumstanceEngine:operaDelegate:profileId:snapId:snaps:snapViewerDataCoordinator:snapDeletionHandler:chatPresenter:conversationIdResolver:profilePresenterProvider:payoutsPresenterProvider:snapTokenProvider:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:snapchatterObservableRepository:blockedSnapchattersDataFetcher:snapchatterPublicInfoFetcher:arroyoConversationDataUpdateAnnouncer:bitmojiSelfieFetcher:snapProManagedProfilesProvider:composerBlizzardLogger:cofStore:reportPagePresenter:valdiRuntimeProvider:simpleContentFetcher:composerNetworkingClient:conversationManager:startInSwipedUpState:useNativeDeleteModal:contentModerationStatus:composerPeopleBridgeFriendServices:composerCoreUIServices:featureSettingsService:playbackSequence:showSnapPromote:friendsFeedEntryStore:showSwipeUpOnly:contentType:chatReactionServices:deckContainerConverter:storyReplyMutingService:creatorInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1079f2928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined1 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined1 param_40,
             undefined4 param_41,undefined8 param_42,undefined1 param_43,undefined4 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_42);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  puStack_70 = PTR_PTR_1126f93a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112767930,param_3);
    lVar4 = (long)_DAT_112767934;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112767938,param_5);
    lVar4 = (long)_DAT_11276793c;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_46;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767940;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_47;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767944);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767944) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767948);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767948) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276794c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276794c) = uVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112767950;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767954;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767958;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276795c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767960;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767964;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767968;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276796c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767970;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767974;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767978;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_19;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276797c;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767980;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_21;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767984;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_22;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767988;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_23;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276798c;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_24;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767990;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_25;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767994;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_26;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767998;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_27;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276799c;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_28;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679a0;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_29;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679a4;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_32;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679a8;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_31;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679ac;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_30;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127679b0) = param_33;
    lVar5 = (long)_DAT_1127679b4;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_35;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679b8;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_36;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679bc;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_37;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679c0;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_38;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127679c4;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_39;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127679c8) = param_40;
    lVar5 = (long)_DAT_1127679cc;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_42;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_46;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127679d0) = param_43;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127679d4) = param_45;
    lVar4 = (long)_DAT_1127679d8;
    _objc_retain(param_48);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_48;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127679dc;
    _objc_retain(param_49);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_49;
    _objc_release(uVar2);
  }
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_42);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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



/* Entry: 1079f31d0; end: 1079f380b; -[SCImpalaSnapInsightsOperaLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f31d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_148 = PTR_PTR_1126f93a8;
  puVar10 = PTR_s_loadView_112604be0;
  lStack_150 = param_1;
  _objc_msgSendSuper2(&lStack_150);
  lVar13 = *(long *)(param_1 + _DAT_11276794c);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112767948);
  _objc_retain(lVar13);
  _objc_retain(uVar15);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar14 = lVar13;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar17 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(lVar13);
        }
        uVar12 = *(ulong *)(lStack_138 + lVar17 * 8);
        uVar1 = uVar12;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          _objc_retain(uVar12);
          goto LAB_1079f32fc;
        }
        lVar17 = lVar17 + 1;
      } while (lVar14 != lVar17);
      lVar14 = lVar13;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  uVar12 = 0;
LAB_1079f32fc:
  _objc_release(uVar15);
  _objc_release(lVar13);
  if (uVar12 != 0) {
    puVar3 = PTR_PTR_1126d5ca0;
    _objc_opt_new();
    func_0x00010c204680();
    func_0x00010c195720(puVar3);
    func_0x00010c182a00(puVar3);
    puVar4 = PTR_PTR_1126d5ca8;
    _objc_alloc(PTR_PTR_1126d5ca8);
    func_0x00010c046de0();
    puVar5 = PTR_PTR_1126cffb8;
    _objc_alloc_init(PTR_PTR_1126cffb8);
    func_0x00010c1c8de0(puVar4);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c0d0280(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2059c0();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_188 = puVar3;
    puStack_f8 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0d0280(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195740();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d900(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201e20(puVar4);
    _objc_release(puVar3);
    lVar14 = (long)_DAT_1127679d4;
    uVar15 = *(undefined8 *)(param_1 + lVar14);
    FUN_1079f2904(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a00(puVar4);
    _objc_release(uVar15);
    if (*(long *)(param_1 + lVar14) != 0) {
      func_0x00010c21b6c0(puVar4);
    }
    puVar3 = PTR_PTR_1126d5cb0;
    _objc_alloc();
    lVar16 = (long)_DAT_112767938;
    lVar14 = param_1 + lVar16;
    _objc_loadWeakRetained(lVar14);
    lVar13 = lVar14;
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010a20();
    puStack_180 = puVar3;
    _objc_release(lVar13);
    _objc_release(lVar14);
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127679bc);
    func_0x00010beff660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d5cb8;
    _objc_alloc();
    lVar14 = param_1 + lVar16;
    lStack_190 = lVar16;
    _objc_loadWeakRetained(lVar14);
    lVar13 = lVar14;
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010a20();
    _objc_release(lVar13);
    _objc_release(lVar14);
    lVar14 = *(long *)(param_1 + _DAT_112767994);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 != 0) {
      puVar8 = PTR_PTR_1126d5cc0;
      _objc_alloc(PTR_PTR_1126d5cc0);
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_1079f380c;
      puStack_160 = &UNK_1108450c8;
      lStack_158 = param_1;
      func_0x00010c031bc0();
      puVar9 = PTR_PTR_1126afe50;
      _objc_alloc(PTR_PTR_1126afe50);
      lVar13 = (long)_DAT_11276799c;
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      puStack_1a0 = puVar3;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar6;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = puVar5;
      func_0x00010c040b80(puVar9);
      _objc_release(uVar15);
      _objc_release(uVar6);
      func_0x00010c1c1bc0(puVar9);
      func_0x00010c1cba60(puVar8);
      puVar3 = PTR_PTR_1126d5cc8;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar6;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40();
      uVar11 = *(undefined8 *)(param_1 + _DAT_1127679e0);
      *(undefined **)(param_1 + _DAT_1127679e0) = puVar3;
      _objc_release(uVar11);
      _objc_release(uVar15);
      _objc_release(uVar6);
      lVar13 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puStack_198;
      func_0x00010befbb60();
      _objc_release(lVar13);
      lVar13 = param_1 + lStack_190;
      _objc_loadWeakRetained(lVar13);
      func_0x00010bef9980();
      _objc_release(lVar13);
      puVar3 = puStack_1a0;
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(lVar14);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puStack_180);
    _objc_release(puVar4);
    _objc_release(puStack_188);
  }
  uVar1 = uVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_1079f380c;
  uStack_1c0 = uVar12;
  lStack_1b8 = param_1;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x1079f3898;
  puStack_1d8 = &UNK_110841f80;
  uStack_1d0 = *(undefined8 *)(uVar1 + 0x20);
  puStack_1c8 = puVar10;
  _objc_retain(puVar10);
  func_0x000100162d98("APPSTORE",&puStack_1f0);
  _objc_release(puStack_1c8);
  _objc_release(puVar10);
  return;
}



/* Entry: 1079f380c; end: 1079f391b;  */

void FUN_1079f380c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1079f3898;
  puStack_38 = &UNK_110841f80;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1079f391c; end: 1079f3b93; -[SCImpalaSnapInsightsOperaLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f391c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *unaff_x20;
  long lVar5;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f93a8;
  puStack_88 = param_1;
  _objc_msgSendSuper2(&puStack_88,PTR_s_viewWillAppear__1126853f0);
  lVar5 = (long)_DAT_1127679e4;
  if (*(long *)(param_1 + lVar5) == 0) {
    _objc_retain(param_1);
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = param_1;
    while ((unaff_x20 = param_1, puVar1 != (undefined *)0x0 &&
           ((puVar1 = puVar3, func_0x00010010fab4(puVar3,PTR_DAT_1126a4f48),
            puVar3 == (undefined *)0x0 || (unaff_x20 = puVar3, ((ulong)puVar1 & 1) == 0))))) {
      puVar2 = puVar3;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar1 = puVar2;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = puVar2;
    }
    _objc_retain(unaff_x20);
    _objc_release(puVar3);
    _objc_release(param_1);
    puVar3 = PTR_PTR_1126b0f00;
    _objc_alloc();
    puVar1 = unaff_x20;
    func_0x00010c29bf00(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04fc60();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(unaff_x20);
  }
  puVar3 = *(undefined **)(param_1 + _DAT_1127679a4);
  func_0x00010bfec280();
  if ((int)puVar3 == 1) {
    unaff_x20 = param_1 + _DAT_112767938;
    _objc_loadWeakRetained();
    puVar3 = unaff_x20;
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110ddd998;
    puVar1 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110ea9578;
    uStack_60 = *(undefined8 *)(param_1 + lVar5);
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(puVar3);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar3 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_1079f3b94;
  puStack_b8 = PTR_PTR_1126f93a8;
  puStack_c0 = puVar3;
  puStack_b0 = unaff_x20;
  puStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_viewDidLayoutSubviews_112684cc8);
  puVar1 = puVar3;
  func_0x00010c29bf00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(puVar3 + _DAT_1127679e0));
  _objc_release(puVar1);
  return;
}



/* Entry: 1079f3b94; end: 1079f3c03; -[SCImpalaSnapInsightsOperaLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f3b94(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127679e0));
  _objc_release(lVar1);
  return;
}



/* Entry: 1079f3c04; end: 1079f3c97; -[SCImpalaSnapInsightsOperaLayerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f3c04(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f93a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06d1e0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    param_1 = param_1 + _DAT_112767938;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1c0f60();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1079f3c98; end: 1079f3d0f; -[SCImpalaSnapInsightsOperaLayerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f3c98(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f93a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + (long)_DAT_112767938;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1c0f60();
    _objc_release(lVar2);
  }
  func_0x00010bfd22c0(param_1);
  return;
}



/* Entry: 1079f3d10; end: 1079f3df3; -[SCImpalaSnapInsightsOperaLayerViewController handlePushNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f3d10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + _DAT_112767938;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_40 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_1079f3df4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1079f3e4c;
  puStack_70 = &UNK_110842e18;
  lStack_68 = lVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
  return;
}



/* Entry: 1079f3df4; end: 1079f3e4b; -[SCImpalaSnapInsightsOperaLayerViewController presentInsights] */

void FUN_1079f3df4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079f3e4c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1079f3e4c; end: 1079f3f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f3e4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar4 = (long)_DAT_1127679e4;
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + lVar4);
      func_0x00010c29c100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10eda0(uVar3,param_2,lVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1079f3f0c; end: 1079f43d3; -[SCImpalaSnapInsightsOperaLayerViewController viewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f3f0c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276794c);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1079f43d4;
  puStack_88 = &UNK_1109f4808;
  lStack_80 = param_1;
  func_0x0001006372a4(uVar1,&puStack_a0);
  puVar2 = PTR_PTR_1126d5cb0;
  _objc_alloc();
  lVar30 = (long)_DAT_112767938;
  lVar3 = param_1 + lVar30;
  _objc_loadWeakRetained(lVar3);
  lVar29 = lVar3;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010a20();
  _objc_release(lVar29);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126d5cb8;
  _objc_alloc();
  lVar3 = param_1 + lVar30;
  _objc_loadWeakRetained(lVar3);
  lVar29 = lVar3;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010a20();
  _objc_release(lVar29);
  _objc_release(lVar3);
  lVar29 = (long)_DAT_1127679bc;
  uVar5 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126b1040;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112767930;
  _objc_loadWeakRetained();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112767934);
  uVar21 = *(undefined8 *)(param_1 + _DAT_112767944);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112767948);
  uVar22 = *(undefined8 *)(param_1 + _DAT_112767950);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112767958);
  uVar23 = *(undefined8 *)(param_1 + _DAT_11276795c);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112767960);
  uVar24 = *(undefined8 *)(param_1 + _DAT_112767964);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112767968);
  uVar25 = *(undefined8 *)(param_1 + _DAT_11276796c);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112767970);
  uVar26 = *(undefined8 *)(param_1 + _DAT_112767974);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112767978);
  uVar27 = *(undefined8 *)(param_1 + _DAT_11276797c);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112767980);
  uVar20 = *(undefined8 *)(param_1 + _DAT_112767984);
  uVar28 = *(undefined8 *)(param_1 + _DAT_112767988);
  uVar31 = *(undefined8 *)(param_1 + _DAT_11276798c);
  uVar34 = *(undefined8 *)(param_1 + _DAT_112767990);
  uVar35 = *(undefined8 *)(param_1 + _DAT_112767994);
  uVar32 = *(undefined8 *)(param_1 + _DAT_112767998);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11276799c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + _DAT_1127679ac);
  uVar5 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d2e0(puVar7,*(undefined8 *)(param_1 + _DAT_1127679dc),lVar3,uVar12,uVar21,uVar13,
                      uVar1,uVar22,puVar2,puVar4,uVar14,uVar23,uVar15,uVar24,uVar16,uVar25,uVar17,
                      uVar26,uVar18,uVar27,uVar19,uVar20,uVar28,uVar31,uVar34,uVar35,uVar32,uVar8,
                      uVar33,uVar5,uVar6,*(undefined8 *)(param_1 + _DAT_1127679a0),0,
                      *(undefined8 *)(param_1 + _DAT_1127679a8),0);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126aefc0;
  _objc_alloc();
  func_0x00010c0402e0();
  puVar10 = PTR_PTR_1126d5cd0;
  _objc_alloc();
  func_0x00010c0402e0();
  _objc_initWeak(auStack_a8,param_1);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1b9720(puVar7);
  puVar11 = PTR_PTR_1126d5cd8;
  _objc_alloc();
  param_1 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061840(puVar11);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1079f43d4; end: 1079f442b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1079f43d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112767954);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c241800(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1079f442c; end: 1079f44ef;  */

void FUN_1079f442c(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079f44f0;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1079f44f0; end: 1079f4627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f44f0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar2 = lVar2 + _DAT_112767938;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0x10eaa9f8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 2;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(lVar3);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    uVar6 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar1 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1079f4628; end: 1079f473f; -[SCImpalaSnapInsightsOperaLayerViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1079f4628(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    uVar2 = param_5;
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
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1079f4740; end: 1079f479f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079f4740(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3f800000;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127679e0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079f47a0; end: 1079f47a3; -[SCImpalaSnapInsightsOperaLayerViewController showProfilePresenterDidStartPresenting:withSwipeDirection:] */

void FUN_1079f47a0(void)

{
  return;
}



/* Entry: 1079f47a4; end: 1079f47a7; -[SCImpalaSnapInsightsOperaLayerViewController showProfilePresenterDidFinishDismissing:] */

void FUN_1079f47a4(void)

{
  return;
}



/* Entry: 1079f47a8; end: 1079f4803; -[SCImpalaSnapInsightsOperaLayerViewController showProfilePresenterSwipeUpEnabled:withDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1079f47a8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_1127679d4) == 5) {
    return 0;
  }
  param_1 = param_1 + _DAT_112767938;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c083820();
  _objc_release(param_1);
  return lVar1;
}


