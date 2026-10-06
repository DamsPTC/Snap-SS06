/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069cd544; end: 1069cd60b; -[SCChatInputStickerPlugin _currentAutosuggestContext] */

undefined8 FUN_1069cd544(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf36840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1069cd60c; end: 1069cd623;  */

void FUN_1069cd60c(void)

{
  return;
}



/* Entry: 1069cd624; end: 1069cd7bb; -[SCChatInputStickerPlugin _bitmojiKeyboardDidPasteBitmojiSticker:] */

void FUN_1069cd624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126bb1d8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c4a18;
  _objc_alloc(PTR_PTR_1126c4a18);
  uVar3 = param_3;
  func_0x00010bf12e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfb7bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7c60(puVar2,param_2,uVar3,uVar4,0,0x11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1e12a0(puVar1,param_2,puVar2,2);
  uVar3 = param_3;
  FUN_1069c8c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010914ead4();
  if ((int)uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c2918c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283fc0();
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  puVar6 = puVar1;
  func_0x00010c10f580(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2721e0(uVar3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea05c0(param_1,param_2,uVar4,0,0,2,0xffffffffffffffff);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069cd7bc; end: 1069cd8cb; -[SCChatInputStickerPlugin _updateQuickSearchIconWithSticker:animationStyle:isQSIRotation:] */

void FUN_1069cd7bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x200) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x178);
    _objc_copyWeak(auStack_60,auStack_48);
    uStack_58 = param_4;
    uStack_50 = param_5;
    _objc_retain(param_3);
    func_0x00010c11e800(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069cd8cc; end: 1069cd9c3;  */

void FUN_1069cd8cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x200) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0be3c0(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069cd9c4; end: 1069cda17;  */

void FUN_1069cd9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1aa000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a0),param_2,param_2,param_3,
                      *(undefined8 *)(param_1 + 0x30),0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf7260();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010be596b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logSuggestionChatDrawerActionFo_112573f48,
             *(undefined8 *)(param_1 + 0x28),uVar1);
  return;
}



/* Entry: 1069cda18; end: 1069cda2f;  */

void FUN_1069cda18(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0) = 0xffffffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010c138d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a0),
             PTR_s_resetImageStateWithAnimationStyl_11262bd68,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069cda30; end: 1069cdb03; -[SCChatInputStickerPlugin _logSuggestionChatDrawerActionForSticker:suggestionSource:] */

void FUN_1069cda30(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c292b20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_release(param_3);
    func_0x00010c0a2f40(uVar4,param_2,param_4,lVar1,lVar3 == 2,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1069cdb04; end: 1069cdc4b; -[SCChatInputStickerPlugin _observeIntentDetection] */

void FUN_1069cdb04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1069cdc4c;
    puStack_68 = &UNK_1108a6c78;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfb26a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar1 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1069cdc4c; end: 1069cdd37;  */

void FUN_1069cdc4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010be3d1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069cdd38; end: 1069cdda7;  */

void FUN_1069cdd38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea1a00(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cdda8; end: 1069cdf0f; -[SCChatInputStickerPlugin _intentDetectionStreamForConversationId:] */

void FUN_1069cdda8(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = PTR_PTR_1126ae6b8;
  if (param_3 == 0) {
    puVar6 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)(param_1 + 0x298);
    _objc_loadWeakRetained(puVar7);
    puVar5 = puVar7;
    func_0x00010c065fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)(param_1 + 0x298);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    puVar6 = puVar2;
    func_0x00010c2519e0(puVar2,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar7);
    puVar5 = *(undefined **)(param_1 + 0x1f8);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf6f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1069cdf10; end: 1069cdf17;  */

void FUN_1069cdf10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_string_112674d78);
  return;
}



/* Entry: 1069cdf18; end: 1069cdf6b; -[SCChatInputStickerPlugin _conversationSupportsSmartSuggestion:] */

undefined8 FUN_1069cdf18(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c27dd80();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c2311d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldIncludeLocationButton_112669e98);
    return param_1;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c231210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldIncludePlanButton_112669ea8);
    return param_1;
  }
  return 0;
}



/* Entry: 1069cdf6c; end: 1069ce1af; -[SCChatInputStickerPlugin _setActiveSmartSuggestion:] */

void FUN_1069cdf6c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bde8d60(param_1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x200);
      _objc_retain(lVar9);
      if (lVar9 != 0) {
        lVar2 = param_3;
        func_0x00010c27dd80();
        lVar3 = lVar9;
        func_0x00010c27dd80();
        _objc_release(lVar9);
        if (lVar2 == lVar3) goto LAB_1069ce194;
      }
      puVar6 = PTR_PTR_1126b0c40;
      lVar9 = param_3;
      func_0x00010c27dd80();
      uVar4 = 0x5f;
      if (lVar9 != 0) {
        uVar4 = 0x195;
      }
      func_0x00010bfe8d40(0x4038000000000000,0x4038000000000000,puVar6,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        _objc_retain(param_3);
        uVar4 = *(undefined8 *)(param_1 + 0x200);
        *(long *)(param_1 + 0x200) = param_3;
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x2a0);
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x000107180460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa060(uVar4,param_2,puVar6,puVar7,puVar8,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar7);
        func_0x00010c138d20(*(undefined8 *)(param_1 + 0x2a0),param_2,2);
        _objc_release(puVar6);
      }
      goto LAB_1069ce194;
    }
    _objc_release(param_3);
  }
  lVar9 = *(long *)(param_1 + 0x200);
  if (lVar9 != 0) {
    *(undefined8 *)(param_1 + 0x200) = 0;
    _objc_release();
    uVar4 = *(undefined8 *)(param_1 + 0x2a0);
    func_0x0001071803f4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000107180460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa060(uVar4,param_2,lVar9,puVar6,puVar7,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar9);
    func_0x00010bede420(param_1,param_2,*(undefined8 *)(param_1 + 0x180),2,0);
  }
  param_3 = 0;
LAB_1069ce194:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ce1b0; end: 1069ce2a7; -[SCChatInputStickerPlugin _buildStickerQuickReplyViewController] */

void FUN_1069ce1b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010beb3480();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126cf9a0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c085260(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254d20(param_1);
    func_0x00010bff7e00();
    uVar5 = *(undefined8 *)(param_1 + 0x168);
    *(undefined **)(param_1 + 0x168) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x168),PTR_s_setDelegate__112640798,param_1);
    return;
  }
  return;
}



/* Entry: 1069ce2a8; end: 1069ce37b; -[SCChatInputStickerPlugin _showStickerQuickReply] */

void FUN_1069ce2a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010beb3480();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x168);
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      if (*(long *)(param_1 + 0x168) == 0) {
        func_0x00010bdd6ce0(param_1);
      }
      lVar1 = param_1 + 0x298;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c274160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c980();
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c235840(*(undefined8 *)(param_1 + 0x168));
      param_1 = param_1 + 0x298;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010beed160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1069ce37c; end: 1069ce437; -[SCChatInputStickerPlugin _hideStickerQuickReply] */

void FUN_1069ce37c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bfe1560(*(undefined8 *)(param_1 + 0x168));
    lVar1 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c274160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + 0x298;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010beed160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069ce438; end: 1069ce59b; -[SCChatInputStickerPlugin _shouldDisplayStickerQuickReply] */

bool FUN_1069ce438(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar3 = param_1;
  func_0x00010be3f240();
  if ((int)lVar3 == 0) {
    return false;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4ef20();
  if ((int)uVar5 == 0) {
    _objc_release(uVar4);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x90);
    func_0x00010c231e20();
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      return false;
    }
  }
  puVar7 = PTR_PTR_1126b2378;
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c25a520(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar7,param_2,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar8 = puVar7;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfdacc0();
  if (((ulong)puVar9 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x90);
    func_0x00010bfdbbc0();
    if (iVar2 != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x90);
      func_0x00010c07a880();
      if (iVar2 == 0) goto LAB_1069ce50c;
    }
    uVar6 = *(ulong *)(param_1 + 0x90);
    func_0x00010c231e20();
    if ((uVar6 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 0x90);
      func_0x00010c11eca0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c11ecc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar10);
      bVar1 = lVar3 == 0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
LAB_1069ce50c:
    bVar1 = false;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  return bVar1;
}



/* Entry: 1069ce59c; end: 1069ce59f; -[SCChatInputStickerPlugin chatNewMessageProvider:didReceiveNewTextMessage:] */

void FUN_1069ce59c(void)

{
  return;
}



/* Entry: 1069ce5a0; end: 1069ce6eb; -[SCChatInputStickerPlugin configureInputItem:] */

void FUN_1069ce5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1071803f4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000107180460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa060(param_3,param_2,uVar1,puVar2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14d460();
  _objc_release(puVar2);
  uVar1 = 9;
  if ((int)puVar3 == 0) {
    uVar1 = 0xb;
  }
  func_0x00010c223c40(param_3,param_2,uVar1);
  func_0x00010c1ad540(param_3,param_2,2);
  func_0x00010c1ba020(param_3,param_2,1000);
  func_0x00010c18ac20(param_3,param_2,&PTR____CFConstantStringClassReference_110f48a98);
  func_0x00010c160fc0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea0df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ce6ec; end: 1069ce91f; -[SCChatInputStickerPlugin setInputContext:] */

void FUN_1069ce6ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x298,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cf990;
  _objc_opt_class(PTR_PTR_1126cf990);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bebb300(param_1);
  }
  _objc_initWeak(auStack_68,param_1);
  lVar4 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c065fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1069ce920;
  puStack_78 = &UNK_110952158;
  _objc_copyWeak(auStack_70,auStack_68);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0660e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bec8020(param_1);
  func_0x00010be663e0(param_1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1069ce920; end: 1069ce997;  */

void FUN_1069ce920(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    uVar1 = param_2;
    func_0x00010c25cd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72040(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069ce998; end: 1069cea63;  */

void FUN_1069ce998(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd4c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069cea64; end: 1069cea93;  */

void FUN_1069cea64(void)

{
  return;
}



/* Entry: 1069cea94; end: 1069ceaeb; -[SCChatInputStickerPlugin setInputItem:] */

void FUN_1069cea94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x2a0),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069ceaec; end: 1069ceaf3; -[SCChatInputStickerPlugin pluginType] */

undefined8 FUN_1069ceaec(void)

{
  return 1;
}



/* Entry: 1069ceaf4; end: 1069ceafb; -[SCChatInputStickerPlugin position] */

undefined8 FUN_1069ceaf4(void)

{
  return 0;
}



/* Entry: 1069ceafc; end: 1069ceccf; -[SCChatInputStickerPlugin createDrawer] */

void FUN_1069ceafc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126cf990;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 0x158);
  uVar8 = *(undefined8 *)(param_1 + 8);
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffdea0(puVar3,*(undefined8 *)(param_1 + 0x260),uVar7,uVar8,param_1,lVar4,uVar2,uVar1,
                      uVar9,uVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 200),param_1,
                      *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x210),
                      *(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1d8),
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x228),
                      *(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x240),
                      *(undefined8 *)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),
                      *(undefined8 *)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x278),
                      *(undefined8 *)(param_1 + 0x288),*(undefined8 *)(param_1 + 0x290),
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x280),
                      *(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1f0),
                      *(undefined8 *)(param_1 + 0x208));
  _objc_release(uVar5);
  _objc_release(lVar4);
  puVar6 = puVar3;
  func_0x00010c254ea0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec85a0(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069cecd0; end: 1069cecd7; -[SCChatInputStickerPlugin createItemController] */

undefined8 FUN_1069cecd0(void)

{
  return 0;
}



/* Entry: 1069cecd8; end: 1069ced17; -[SCChatInputStickerPlugin inputViewDidDisappear] */

void FUN_1069cecd8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2ec20(*(undefined8 *)(param_1 + 0x178));
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069ced18; end: 1069ced57; -[SCChatInputStickerPlugin inputViewDidAppear] */

void FUN_1069ced18(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x180) != 0) {
    func_0x00010bede420(param_1,param_2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010be72050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__performLocalStickerSearchWithIn_11257a1b0,
               *(undefined8 *)(param_1 + 0x1a8));
    return;
  }
  return;
}



/* Entry: 1069ced58; end: 1069ced5b; -[SCChatInputStickerPlugin didSelectInputItem:] */

void FUN_1069ced58(void)

{
  return;
}



/* Entry: 1069ced5c; end: 1069ced5f; -[SCChatInputStickerPlugin didDeselectInputItem:] */

void FUN_1069ced5c(void)

{
  return;
}



/* Entry: 1069ced60; end: 1069ced63; -[SCChatInputStickerPlugin didCollapseInputItem:] */

void FUN_1069ced60(void)

{
  return;
}



/* Entry: 1069ced64; end: 1069ced67; -[SCChatInputStickerPlugin didUncollapseInputItem:] */

void FUN_1069ced64(void)

{
  return;
}



/* Entry: 1069ced68; end: 1069cee1b; -[SCChatInputStickerPlugin stickerQuickReplyViewController:stickerTapped:fromPosition:fromSource:] */

void FUN_1069ced68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x00010bea05c0(param_1,param_2,param_4,0,param_5,param_6,0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010be3f240();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13a0e0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c27a900();
    _objc_release(lVar1);
    param_1 = param_1 + 0x298;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c255100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069cee1c; end: 1069cee23; -[SCChatInputStickerPlugin canDisplayStickerQuickReply] */

undefined8 FUN_1069cee1c(void)

{
  return 0;
}



/* Entry: 1069cee24; end: 1069cee27; -[SCChatInputStickerPlugin shouldAllowSnapchatStickersInSearch] */

void FUN_1069cee24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableStickerQuickReply_11255fda8);
  return;
}



/* Entry: 1069cee28; end: 1069cee67; -[SCChatInputStickerPlugin _enableStickerQuickReply] */

uint FUN_1069cee28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd46e0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1069cee68; end: 1069cee6b; -[SCChatInputStickerPlugin didSelectSticker] */

void FUN_1069cee68(void)

{
  return;
}



/* Entry: 1069cee6c; end: 1069ceea7; -[SCChatInputStickerPlugin stickerReplySourceType] */

undefined8 FUN_1069cee6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x2b;
  if (lVar2 != 0) {
    uVar1 = 0x2c;
  }
  _objc_release();
  return uVar1;
}



/* Entry: 1069ceea8; end: 1069ceeb7; -[SCChatInputStickerPlugin chatQSIRotationStickerProvider:didRotateToNextQSISticker:] */

void FUN_1069ceea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bede430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateQuickSearchIconWithSticke_1125952b0,param_4,2,1);
  return;
}



/* Entry: 1069ceeb8; end: 1069cef1b; -[SCChatInputStickerPlugin accessoryLocation] */

undefined8 FUN_1069ceeb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x90);
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x2b;
    if (lVar1 != 0) {
      uVar2 = 0x2c;
    }
    _objc_release();
  }
  return uVar2;
}



/* Entry: 1069cef1c; end: 1069cef43; -[SCChatInputStickerPlugin currentQSISticker] */

void FUN_1069cef1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069cef44; end: 1069cefeb; -[SCChatInputStickerPlugin inputStickerAccessoryDidResignActive] */

void FUN_1069cef44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010bebb300();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    if (*(long *)(param_1 + 0x1b0) == 1) {
LAB_1069cefc8:
                    /* WARNING: Could not recover jumptable at 0x00010be93270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetLocalSearchResults_112582638);
      return;
    }
    if (*(long *)(param_1 + 0x1b0) == 0) {
      lVar1 = param_1 + 0x298;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)puVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x1a8);
        *(undefined8 *)(param_1 + 0x1a8) = 0;
        _objc_release(uVar4);
        goto LAB_1069cefc8;
      }
    }
  }
  return;
}



/* Entry: 1069cefec; end: 1069cf063; -[SCChatInputStickerPlugin inputStickerAccessoryDidBecomeActive] */

void FUN_1069cefec(long param_1)

{
  undefined *puVar1;
  
  func_0x00010be35d80();
  func_0x00010c256880(*(undefined8 *)(param_1 + 0x198));
  if (*(long *)(param_1 + 0x1a8) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar1 == 0) goto LAB_1069cf02c;
  }
  if (*(char *)(param_1 + 0x1a0) != '\x01') {
    return;
  }
LAB_1069cf02c:
  func_0x00010be06900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cf064; end: 1069cf06b; -[SCChatInputStickerPlugin stickersSuggestionSource] */

undefined8 FUN_1069cf064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 1069cf06c; end: 1069cf103; -[SCChatInputStickerPlugin localSearchStickerResults] */

void FUN_1069cf06c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf376a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  uVar2 = uVar3;
  func_0x00010bf529e0(uVar3);
  func_0x00010be16340(param_1,param_2,uVar3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1069cf104; end: 1069cf12b; -[SCChatInputStickerPlugin currentUserInputText] */

void FUN_1069cf104(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069cf12c; end: 1069cf13b; -[SCChatInputStickerPlugin hasActiveSmartSuggestion] */

bool FUN_1069cf12c(long param_1)

{
  return *(long *)(param_1 + 0x200) != 0;
}



/* Entry: 1069cf13c; end: 1069cf18f; -[SCChatInputStickerPlugin shouldIncludeLocationButton] */

void FUN_1069cf13c(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1d8);
  func_0x00010c06e540();
  if (((iVar1 != 0) && (*(long *)(param_1 + 0x90) != 0)) &&
     (lVar2 = param_1, func_0x00010beed200(), lVar2 == 0)) {
    func_0x00010bf50920(*(undefined8 *)(param_1 + 0x90));
  }
  return;
}



/* Entry: 1069cf190; end: 1069cf2a3; -[SCChatInputStickerPlugin shouldIncludePlanButton] */

undefined8 FUN_1069cf190(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((*(long *)(param_1 + 0x90) == 0) || (lVar2 = param_1, func_0x00010beed200(), lVar2 != 0)) {
    return 0;
  }
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf36840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar1);
  if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010bf50920();
    if (8 < lVar2 - 1U) {
      uVar1 = *(undefined8 *)(param_1 + 0x1d8);
      func_0x00010c06e620(uVar1);
      goto LAB_1069cf268;
    }
  }
  uVar1 = 0;
LAB_1069cf268:
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1069cf2a4; end: 1069cf2bb;  */

void FUN_1069cf2a4(void)

{
  return;
}



/* Entry: 1069cf2bc; end: 1069cf337; -[SCChatInputStickerPlugin shouldIncludePollButton] */

undefined8 FUN_1069cf2bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x90) != 0) && (lVar1 = param_1, func_0x00010beed200(), lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + 0x90);
    func_0x00010bf50920();
    if ((8 < lVar1 - 1U) || ((0x1e7U >> (ulong)((uint)(lVar1 - 1U) & 0x1f) & 1) == 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x1d0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06e640();
      _objc_release(uVar2);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 1069cf338; end: 1069cf527; -[SCChatInputStickerPlugin _subscribeToPasteEvents] */

void FUN_1069cf338(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  _objc_retain(uVar5);
  lVar2 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c0f5680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1069cf598;
  puStack_70 = &UNK_1109522f8;
  _objc_retain(uVar5);
  lVar4 = lVar3;
  uStack_68 = uVar5;
  func_0x00010bfad7a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar6 = *(long *)(param_1 + 0x60);
  lVar2 = lVar4;
  if (lVar6 != 0) {
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1069cf708;
    puStack_98 = &UNK_110952358;
    lStack_90 = lVar6;
    _objc_retain(lVar6);
    func_0x00010bfb26a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  _objc_initWeak(auStack_b8,param_1);
  _objc_copyWeak(auStack_c0,auStack_b8);
  lVar6 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(lVar2);
  _objc_release(uStack_68);
  _objc_release(uVar5);
  return;
}



/* Entry: 1069cf528; end: 1069cf597;  */

void FUN_1069cf528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf9a8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0056e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069cf598; end: 1069cf707;  */

byte FUN_1069cf598(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf50540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar5 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x00010c0f5660(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain();
    _objc_retain(uVar4);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010c0be100(lVar3);
    bVar5 = *(byte *)(puStack_58 + 3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return bVar5 & 1;
}



/* Entry: 1069cf708; end: 1069cf79f;  */

void FUN_1069cf708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069cf7a0; end: 1069cf83f;  */

void FUN_1069cf7a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cf9a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f5660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0056e0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069cf840; end: 1069cf957;  */

void FUN_1069cf840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0f5660(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1069cf958;
  puStack_60 = &UNK_11087b798;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0be100(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1069cf958; end: 1069cf9f7;  */

void FUN_1069cf958(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9fa40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cf9f8; end: 1069cfaeb; -[SCChatInputStickerPlugin _sendPastedData:isAnimated:] */

void FUN_1069cf9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf59220(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069cfaec; end: 1069cfc27;  */

void FUN_1069cfaec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c2721e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cf978;
    _objc_alloc(PTR_PTR_1126cf978);
    func_0x00010c04c680();
    puVar3 = PTR_PTR_1126cf980;
    func_0x00010c2553a0(PTR_PTR_1126cf980);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be75cc0(param_1);
    _objc_release(puVar3);
    func_0x00010be30e20(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c27dd80(uVar1);
    func_0x00010916771c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1328e0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069cfc28; end: 1069cfc3f; -[SCChatInputStickerPlugin inputContext] */

void FUN_1069cfc28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069cfc40; end: 1069cfc47; -[SCChatInputStickerPlugin inputItem] */

undefined8 FUN_1069cfc40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 1069cfc48; end: 1069d0017; -[SCChatInputStickerPlugin .cxx_destruct] */

void FUN_1069cfc48(long param_1)

{
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_destroyWeak(param_1 + 0x298);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x198,0);
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
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 1069d0018; end: 1069d003f;  */

void FUN_1069d0018(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1069d0040; end: 1069d0b93; -[SCChatInputStickerPluginProvider initWithUserSession:cameoServices:ctpRepositoryServices:ctpItemViewService:notificationPool:cameoStickersPresentationServices:stickerSender:textSender:drawerMediaSender:navigationDelegate:groupFetcher:storyReplySender:storyShareSender:userDataFeedServices:circumstanceEngine:bitmojiStickerCategoryIconProvider:stickerSearcher:chatNewMessageProvider:bitmojiAvatarProvider:bitmojiStickerRefresher:friendmojiFilteredContainer:quickReplyDataProvider:quickReplyDataProviderConfiguration:stickerGraphene:userPreferences:bitmojiAppPasteboardObserver:creativeToolsMetricsServices:friendsFeedDataCoordinator:contextNotificationManager:featureSettingsService:ctpSearchServices:bitmojiFriendmojiHintScopeExposer:stickerInjector:messagingExperimentService:creativeToolsABProvider:customStickerManager:customojiServices:aiStickersServiceFactory:plusFeatureGating:spotlightShareSender:discoverFeedBaseDeepLinkProcessor:bitmoji3DContentFetcher:bitmojiClientRenderer:blizzardLogger:appStartExperimentReader:bitmojiAvatarBuilderScopeExposer:stickerContentManager:renderStyleProvider:bitmojiAppEventsEmitter:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:modularStickerCutoutScopeExposer:remixStickerServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:contextExperimentService:mapChatLocationTrayPresenter:snapPlanChatDrawerPresenter:intentDetectionService:pollChatDrawerPresenter:] */

undefined8 *
FUN_1069d0040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62)

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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  puStack_70 = PTR_PTR_1126f4228;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_62;
    _objc_release(uVar2);
  }
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
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



/* Entry: 1069d0b94; end: 1069d0b9b; -[SCChatInputStickerPluginProvider providerType] */

undefined8 FUN_1069d0b94(void)

{
  return 1;
}



/* Entry: 1069d0b9c; end: 1069d0d4b; -[SCChatInputStickerPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1069d0b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = PTR_PTR_1126cf9b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  lVar8 = param_1 + 0x58;
  _objc_loadWeakRetained();
  func_0x00010c05cea0(puVar7,param_2,uVar1,param_3,uVar4,uVar9,uVar2,uVar5,uVar10,uVar11,uVar3,uVar6
                      ,lVar8,*(undefined8 *)(param_1 + 0x60),param_4,*(undefined8 *)(param_1 + 0x70)
                      ,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150),
                      *(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160),
                      *(undefined8 *)(param_1 + 0x168));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1069d0d4c; end: 1069d0d53; -[SCChatInputStickerPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_1069d0d4c(void)

{
  return 0;
}



/* Entry: 1069d0d54; end: 1069d104f; -[SCChatInputStickerPluginProvider .cxx_destruct] */

void FUN_1069d0d54(long param_1)

{
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
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
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 1069d1050; end: 1069d10df; +[SCChatStickerQSIState iconWithImage:selectedImage:] */

void FUN_1069d1050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf950;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069d10e0; end: 1069d112b; +[SCChatStickerQSIState resetIcon] */

void FUN_1069d10e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cf950;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069d112c; end: 1069d114f; -[SCChatStickerQSIState copyWithZone:] */

undefined8 FUN_1069d112c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1069d1150; end: 1069d11c7; -[SCChatStickerQSIState hash] */

void FUN_1069d1150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f4230;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d11c8; end: 1069d120b; -[SCChatStickerQSIState internalInit] */

void FUN_1069d11c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f4230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d120c; end: 1069d12c3; -[SCChatStickerQSIState isEqual:] */

long FUN_1069d120c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1069d129c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1069d12a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1069d12a8;
        }
        goto LAB_1069d129c;
      }
    }
    lVar3 = 0;
  }
LAB_1069d12a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1069d12c4; end: 1069d1347; -[SCChatStickerQSIState matchIcon:resetIcon:] */

void FUN_1069d12c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069d1348; end: 1069d1377; -[SCChatStickerQSIState .cxx_destruct] */

void FUN_1069d1348(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1069d1378; end: 1069d13b7; -[SCChatMediaDrawerBaseMedia init] */

void FUN_1069d1378(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f4238;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x50) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 1069d13b8; end: 1069d15f7; -[SCChatMediaDrawerBaseMedia initWithPHAsset:] */

long FUN_1069d13b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010bfee200();
  if (param_2 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = param_4;
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    _objc_release(uVar4);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1069d15f8;
    puStack_60 = &UNK_1108429c8;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010bf11fe0(puVar3,param_3,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined **)(param_2 + 0x28) = puVar3;
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = puVar2;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1069d167c;
    puStack_90 = &UNK_1109523e8;
    _objc_retain(param_4);
    uStack_88 = param_4;
    uStack_80 = param_1;
    func_0x00010bf11fe0(puVar3,param_3,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar3;
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d0 = puVar2;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1069d1700;
    puStack_b8 = &UNK_110952418;
    _objc_retain(param_4);
    uStack_b0 = param_4;
    func_0x00010bf11fe0(puVar3,param_3,&puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar3;
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_f8 = puVar2;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1069d1768;
    puStack_e0 = &UNK_110885070;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    func_0x00010bf11fe0(puVar3,param_3,&puStack_f8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined **)(param_2 + 0x40) = puVar3;
    _objc_release(uVar1);
    _objc_release(uStack_d8);
    _objc_release(uStack_b0);
    _objc_release(uStack_88);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  return param_2;
}



/* Entry: 1069d15f8; end: 1069d167b;  */

void FUN_1069d15f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c0fcaa0();
  if (uVar1 == 0) {
    dVar5 = 0.0;
  }
  else {
    uVar1 = uVar3;
    func_0x00010c0fce40();
    uVar2 = uVar3;
    func_0x00010c0fcaa0();
    dVar5 = (double)uVar1 / (double)uVar2;
  }
  _objc_release(uVar3);
  dVar4 = 3.0;
  if (dVar5 <= 3.0) {
    dVar4 = dVar5;
  }
  dVar5 = 0.5;
  if (0.5 <= dVar4) {
    dVar5 = dVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar5,PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 1069d167c; end: 1069d1767;  */

void FUN_1069d167c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar6 = *(double *)(param_2 + 0x28);
  dVar5 = 0.0;
  dVar4 = 0.0;
  if (0.0 < dVar6) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    _objc_retain(param_1,0,uVar3);
    uVar2 = uVar3;
    func_0x00010c0fce40(uVar3);
    dVar5 = (double)uVar2 / dVar6;
    uVar2 = uVar3;
    func_0x00010c0fcaa0(uVar3);
    _objc_release(uVar3);
    dVar4 = (double)uVar2 / dVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2971d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar5,dVar4,puVar1,PTR_s_valueWithCGSize__112683698);
  return;
}



/* Entry: 1069d1768; end: 1069d176f;  */

void FUN_1069d1768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_creationDate_1125b4368);
  return;
}



/* Entry: 1069d1770; end: 1069d17b7; -[SCChatMediaDrawerBaseMedia aspectRatio] */

undefined8 FUN_1069d1770(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1069d17b8; end: 1069d1807; -[SCChatMediaDrawerBaseMedia originalSize] */

undefined1  [16] FUN_1069d17b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1069d1808; end: 1069d1857; -[SCChatMediaDrawerBaseMedia originalResolution] */

undefined1  [16] FUN_1069d1808(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1069d1858; end: 1069d185f; -[SCChatMediaDrawerBaseMedia creationDate] */

void FUN_1069d1858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 1069d1860; end: 1069d18bf; -[SCChatMediaDrawerBaseMedia fetchImageWithSize:mediaType:allowLowQuality:completion:] */

void FUN_1069d1860(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  lVar3 = *(long *)(puVar1 + 8);
  if (lVar3 == 0) {
    pcVar2 = *(code **)(param_4 + 0x10);
    _objc_retain(param_4);
    (*pcVar2)(param_4,0);
  }
  else {
    _objc_retain(param_4);
    func_0x000107fe9894(lVar3);
    func_0x00010bfa7920(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069d18c0; end: 1069d1937; -[SCChatMediaDrawerBaseMedia fetchThumbnailImageWithCompletion:completion:] */

void FUN_1069d18c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    pcVar1 = *(code **)(param_4 + 0x10);
    _objc_retain(param_4);
    (*pcVar1)(param_4,0);
  }
  else {
    _objc_retain(param_4);
    func_0x000107fe9894(lVar2);
    func_0x00010bfa7920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069d1938; end: 1069d19e3; -[SCChatMediaDrawerBaseMedia fetchSmallThumbnailImageInSenderBarWithCompletion:] */

void FUN_1069d1938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  func_0x00010c23eac0(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069d19e4;
  puStack_40 = &UNK_11085b810;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa7920(param_1,param_2,param_3,param_4,0,0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1069d19e4; end: 1069d19ef;  */

void FUN_1069d19e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001069d19ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1069d19f0; end: 1069d1a43; -[SCChatMediaDrawerBaseMedia cancelThumbnailFetchRequest] */

void FUN_1069d19f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 8),PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 1069d1a44; end: 1069d1a4b; -[SCChatMediaDrawerBaseMedia mediaIdentifier] */

void FUN_1069d1a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 1069d1a4c; end: 1069d1a9f; -[SCChatMediaDrawerBaseMedia duration] */

undefined8
FUN_1069d1a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  uVar3 = uVar2;
  uVar5 = param_4;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1069d1aa0; end: 1069d1b0b; -[SCChatMediaDrawerBaseMedia prepareUploadDataForMediaId:completion:] */

undefined8
FUN_1069d1aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2;
  uVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1069d1b0c; end: 1069d1b77; -[SCChatMediaDrawerBaseMedia prepareDataToUploadForMediaId:completionHandler:] */

undefined8
FUN_1069d1b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1069d1b78; end: 1069d1bd7; -[SCChatMediaDrawerBaseMedia uploadWithCompletion:] */

undefined8 FUN_1069d1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}


