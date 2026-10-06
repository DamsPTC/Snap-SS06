/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10699cfb8; end: 10699d10b;  */

void FUN_10699cfb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cf648;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar5 = param_2;
  func_0x00010c262240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083540();
  func_0x00010c040f80(puVar1);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a57e0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = puVar1;
  func_0x00010c290fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar5);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4280(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699d10c; end: 10699d163; -[SCComposerPeopleSuggestedFriendStore _handleSuggestions:isFromUserTriggeredRefresh:error:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:] */

void FUN_10699d10c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reorderAndPublishSuggestions_is_1125813b8,param_3,param_4,param_6,
             param_7);
  return;
}



/* Entry: 10699d164; end: 10699d2d7; -[SCComposerPeopleSuggestedFriendStore _reorderAndPublishSuggestions:isFromUserTriggeredRefresh:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:] */

void FUN_10699d164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1253e0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10699d2d8; end: 10699d32b;  */

void FUN_10699d2d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5f7e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699d32c; end: 10699d60f; -[SCComposerPeopleSuggestedFriendStore _mergeBadgedSuggestionsAndPublishReorderedSuggestions:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:] */

void FUN_10699d32c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_11094fea0);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10699d618;
  puStack_80 = &UNK_11085a548;
  puStack_78 = puVar3;
  func_0x0001006372a4(uVar4,&puStack_98);
  uVar1 = uVar4;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c0fc500();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    func_0x00010be844a0(param_1);
  }
  else {
    _objc_initWeak(auStack_a0,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(uVar1);
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf00220(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar1);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10699d610; end: 10699d617;  */

void FUN_10699d610(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10699d618; end: 10699d637;  */

uint FUN_10699d618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10699d638; end: 10699d897;  */

/* WARNING: Possible PIC construction at 0x00010699d770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010699d774) */
/* WARNING: Removing unreachable block (ram,0x00010699d79c) */
/* WARNING: Removing unreachable block (ram,0x00010699d7b4) */
/* WARNING: Removing unreachable block (ram,0x00010699d75c) */

void FUN_10699d638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR___NSConcreteGlobalBlock_11094fec0;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11094fec0);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  func_0x00010c0ce860();
  puVar10 = *(undefined **)(param_1 + 0x28);
  _objc_retain(puVar10);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    _objc_retain(puVar10);
    puVar6 = puVar10;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    puVar6 = puVar10;
    func_0x00010bf52a60();
    ppuVar7 = ppuRam0000000000000000;
    if (puVar6 != (undefined *)0x0) goto code_r0x00010c2923e0;
    _objc_release(puVar10);
    puVar6 = puVar4;
    func_0x00010bf09f80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(puVar10);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be844a0();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = ppuVar8;
code_r0x00010c2923e0:
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar7,PTR_s_userId_112682320);
  return;
}



/* Entry: 10699d898; end: 10699d89f;  */

void FUN_10699d898(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10699d8a0; end: 10699d9cb; -[SCComposerPeopleSuggestedFriendStore _pinSuggestionFromPopover:] */

void FUN_10699d8a0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fc560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_3;
  if (lVar2 == 0) {
    _objc_retain();
  }
  else {
    func_0x00010c0d3c80();
    uVar7 = uVar3;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar4 = uVar3;
        func_0x00010c0dfd40(uVar3,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((int)uVar6 != 0) {
          func_0x00010c12d3c0(uVar3,param_2,uVar7);
          func_0x00010c066b00(uVar3,param_2,uVar4,0);
          _objc_release(uVar4);
          break;
        }
        _objc_release(uVar4);
        uVar7 = uVar7 + 1;
        uVar4 = uVar3;
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10699d9cc; end: 10699dd97; -[SCComposerPeopleSuggestedFriendStore _publishSuggestionsToComposerReorderedSuggestions:badgedSuggestionUserIds:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:] */

void FUN_10699d9cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x10699db6c;
  puStack_90 = &UNK_11094fee0;
  uStack_58 = 0;
  lStack_88 = param_1;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_4;
  uStack_68 = uVar4;
  uStack_60 = uVar1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  uVar2 = param_3;
  func_0x00010c0b8620(param_3,param_2,&puStack_a8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10699dd98; end: 10699de27; -[SCComposerPeopleSuggestedFriendStore _shouldHideSuggestion:hiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:] */

bool FUN_10699dd98(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beb5fa0(param_1,param_2,param_3,param_5);
  if ((param_1 & 1) == 0) {
    lVar2 = param_4;
    func_0x00010c0dff20(param_4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10699de28; end: 10699de33; -[SCComposerPeopleSuggestedFriendStore _shouldShowFeedback:lastHiddenSuggestionUserIdPendingFeedback:] */

void FUN_10699de28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isEqualToString__1125fa240,param_4);
  return;
}



/* Entry: 10699de34; end: 10699de37; -[SCComposerPeopleSuggestedFriendStore didStartSnapchattersUpdateDataRequest:] */

void FUN_10699de34(void)

{
  return;
}



/* Entry: 10699de38; end: 10699de3b; -[SCComposerPeopleSuggestedFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10699de38(void)

{
  return;
}



/* Entry: 10699de3c; end: 10699de3f; -[SCComposerPeopleSuggestedFriendStore didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_10699de3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endFetchingSuggestionsWithSugge_112560020);
  return;
}



/* Entry: 10699de40; end: 10699de8f; -[SCComposerPeopleSuggestedFriendStore _endFetchingSuggestionsWithSuggestDataRequest:] */

void FUN_10699de40(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,0,0);
    return;
  }
  return;
}



/* Entry: 10699de90; end: 10699de97; -[SCComposerPeopleSuggestedFriendStore suggestionsObservable] */

undefined8 FUN_10699de90(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10699de98; end: 10699dec7; -[SCComposerPeopleSuggestedFriendStore setSuggestionsObservable:] */

void FUN_10699de98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10699dec8; end: 10699decf; -[SCComposerPeopleSuggestedFriendStore suggestionsObservableV2] */

undefined8 FUN_10699dec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10699ded0; end: 10699deff; -[SCComposerPeopleSuggestedFriendStore setSuggestionsObservableV2:] */

void FUN_10699ded0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10699df00; end: 10699df07; -[SCComposerPeopleSuggestedFriendStore quickAddSnapchattersObservable] */

undefined8 FUN_10699df00(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10699df08; end: 10699df37; -[SCComposerPeopleSuggestedFriendStore setQuickAddSnapchattersObservable:] */

void FUN_10699df08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10699df38; end: 10699df43; -[SCComposerPeopleSuggestedFriendStore pinnedSuggestedSnapchatterUserIds] */

void FUN_10699df38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xc0,1);
  return;
}



/* Entry: 10699df44; end: 10699df4b; -[SCComposerPeopleSuggestedFriendStore setPinnedSuggestedSnapchatterUserIds:] */

void FUN_10699df44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10699df4c; end: 10699e06b; -[SCComposerPeopleSuggestedFriendStore .cxx_destruct] */

void FUN_10699df4c(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10699e06c; end: 10699e097; +[SCGrapheneSuggestedFriendStoreMetric timeout] */

void FUN_10699e06c(void)

{
  _objc_alloc(PTR_PTR_1126cf708);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10699e098; end: 10699e0c3; +[SCGrapheneSuggestedFriendStoreMetric abandoned] */

void FUN_10699e098(void)

{
  _objc_alloc(PTR_PTR_1126cf708);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10699e0c4; end: 10699e163; -[SCGrapheneSuggestedFriendStoreMetric description] */

void FUN_10699e0c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e66a38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e66a38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f3fe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10699e164; end: 10699e2af; -[SCGrapheneRegistry suggestedFriendStoreGraphene] */

void FUN_10699e164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10699e1ec;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4810 != -1) {
    func_0x00010002a2fc(0x1136c4810,&puStack_48);
  }
  uVar1 = uRam00000001136c4808;
  _objc_retain(uRam00000001136c4808);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10699e2b0; end: 10699e3bb; -[SCSuggestedFriendStoreCombinedDataUpdates initWithActiveStoryInfos:cachedHiddenSuggestions:dataUpdates:inFetchingSuggestions:] */

undefined1 *
FUN_10699e2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f3ff0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699e3bc; end: 10699e3df; -[SCSuggestedFriendStoreCombinedDataUpdates copyWithZone:] */

undefined8 FUN_10699e3bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10699e3e0; end: 10699e46b; -[SCSuggestedFriendStoreCombinedDataUpdates hash] */

undefined8 * FUN_10699e3e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10699e51c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10699e528;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10699e528;
            }
            goto LAB_10699e51c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10699e528:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10699e46c; end: 10699e543; -[SCSuggestedFriendStoreCombinedDataUpdates isEqual:] */

long FUN_10699e46c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10699e51c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10699e528;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10699e528;
            }
            goto LAB_10699e51c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10699e528:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10699e544; end: 10699e54b; -[SCSuggestedFriendStoreCombinedDataUpdates activeStoryInfos] */

undefined8 FUN_10699e544(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10699e54c; end: 10699e553; -[SCSuggestedFriendStoreCombinedDataUpdates cachedHiddenSuggestions] */

undefined8 FUN_10699e54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10699e554; end: 10699e55b; -[SCSuggestedFriendStoreCombinedDataUpdates dataUpdates] */

undefined8 FUN_10699e554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10699e55c; end: 10699e563; -[SCSuggestedFriendStoreCombinedDataUpdates inFetchingSuggestions] */

undefined8 FUN_10699e55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10699e564; end: 10699e5ab; -[SCSuggestedFriendStoreCombinedDataUpdates .cxx_destruct] */

void FUN_10699e564(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10699e5ac; end: 10699e653; -[SCComposerPeopleCachedGroup initWithInput:converted:] */

undefined1 *
FUN_10699e5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3ff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699e654; end: 10699e677; -[SCComposerPeopleCachedGroup copyWithZone:] */

undefined8 FUN_10699e654(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10699e678; end: 10699e6eb; -[SCComposerPeopleCachedGroup hash] */

undefined8 * FUN_10699e678(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10699e76c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10699e778;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10699e778;
        }
        goto LAB_10699e76c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10699e778:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10699e6ec; end: 10699e793; -[SCComposerPeopleCachedGroup isEqual:] */

long FUN_10699e6ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10699e76c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10699e778;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10699e778;
        }
        goto LAB_10699e76c;
      }
    }
    lVar3 = 0;
  }
LAB_10699e778:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10699e794; end: 10699e79b; -[SCComposerPeopleCachedGroup input] */

undefined8 FUN_10699e794(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10699e79c; end: 10699e7a3; -[SCComposerPeopleCachedGroup converted] */

undefined8 FUN_10699e79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10699e7a4; end: 10699e7d3; -[SCComposerPeopleCachedGroup .cxx_destruct] */

void FUN_10699e7a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10699e7d4; end: 10699e897; -[SCAddFriendsRecentlyActionPageScope initWithDelegate:pageContext:uiContainer:] */

undefined1 *
FUN_10699e7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699e898; end: 10699e89f; -[SCAddFriendsRecentlyActionPageScope pageContext] */

undefined8 FUN_10699e898(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10699e8a0; end: 10699e8a7; -[SCAddFriendsRecentlyActionPageScope uiContainer] */

undefined8 FUN_10699e8a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10699e8a8; end: 10699e8bf; -[SCAddFriendsRecentlyActionPageScope delegate] */

void FUN_10699e8a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10699e8c0; end: 10699e8f7; -[SCAddFriendsRecentlyActionPageScope .cxx_destruct] */

void FUN_10699e8c0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10699e8f8; end: 10699e93f; -[SCAddFriendsRecentlyActionPageContext initWithPageType:] */

void FUN_10699e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10699e940; end: 10699e963; -[SCAddFriendsRecentlyActionPageContext copyWithZone:] */

undefined8 FUN_10699e940(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10699e964; end: 10699e973; -[SCAddFriendsRecentlyActionPageContext hash] */

long FUN_10699e964(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10699e974; end: 10699e9fb; -[SCAddFriendsRecentlyActionPageContext isEqual:] */

bool FUN_10699e974(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10699e9fc; end: 10699ea03; -[SCAddFriendsRecentlyActionPageContext pageType] */

undefined8 FUN_10699e9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10699ea04; end: 10699ebf7;  */

void FUN_10699ea04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb3f8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c04f5a0();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  func_0x00010c05c0e0();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10699ebf8; end: 10699ef57;  */

void FUN_10699ebf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar2 = param_1;
  FUN_10699ef58(param_1,param_4,param_18,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10699effc(param_1,param_5,param_4,param_6,param_7,param_8,param_20,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_20);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bb6a8;
  _objc_alloc(PTR_PTR_1126bb6a8);
  func_0x00010c039000();
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  uVar2 = param_1;
  FUN_10699ef58(param_1,param_4,param_18,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10699ef58; end: 10699effb;  */

void FUN_10699ef58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf710;
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c015960();
  _objc_release(param_5);
  _objc_release(param_2);
  func_0x00010c1e1580(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699effc; end: 10699f403;  */

void FUN_10699effc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2d80;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c015460();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c1e1580(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699f404; end: 10699f4df;  */

void FUN_10699f404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b3530;
  if (param_4 == 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar2);
    func_0x00010c038f40();
    _objc_release(param_1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126c2898;
  _objc_alloc(PTR_PTR_1126c2898);
  func_0x00010bffde00();
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699f4e0; end: 10699f793;  */

void FUN_10699f4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_10);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  FUN_10699effc(param_1,param_3,param_2,param_4,param_5,param_6,param_10,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c2890;
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_alloc(puVar3);
  func_0x00010bffd9a0();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_9);
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  uVar2 = param_1;
  FUN_10699f404(param_1,param_6,param_10,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_6);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10699ef58(param_1,param_2,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10699ef58(param_1,param_2,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10699f794; end: 10699f7a3; -[SCAddFriendsOpenChatActionHandler initWithChatScopeExposer:chatScopeServices:uiContainer:] */

void FUN_10699f794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bffde10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithChatScopeExposer_chatSco_1125dd148,param_3,param_4,0,0,param_5);
  return;
}



/* Entry: 10699f7a4; end: 10699f8a7; -[SCAddFriendsOpenChatActionHandler initWithChatScopeExposer:chatScopeServices:actionSource:deckContainerFactory:uiContainer:] */

undefined1 *
FUN_10699f7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f4010;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699f8a8; end: 10699f983; -[SCAddFriendsOpenChatActionHandler initWithPageLauncher:actionSource:deckContainerFactory:uiContainer:] */

undefined1 *
FUN_10699f8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4010;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699f984; end: 10699fcef; -[SCAddFriendsOpenChatActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_10699f984(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2988;
    _objc_opt_class(PTR_PTR_1126c2988);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    bVar1 = uVar2 != 0;
    if (uVar2 != 0) {
      puVar4 = PTR_PTR_1126b3520;
      _objc_alloc();
      func_0x00010bffdd20();
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_10699fcf0;
      uStack_70 = 0x10699fd00;
      uStack_68 = 0;
      uVar5 = uVar3;
      func_0x00010bf36840(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c11e0();
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126b15c0;
      _objc_alloc();
      func_0x00010c008d20();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
      if (*(long *)(param_1 + 0x28) == 1) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0cfcc0(uVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar7);
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        puVar9 = *(undefined **)(param_1 + 0x10);
        func_0x00010bf36840(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf22b00(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      }
      else {
        puVar9 = PTR_PTR_1126cc148;
        _objc_alloc(PTR_PTR_1126cc148);
        func_0x00010bf36840(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffdb00(puVar9);
        _objc_release(uVar3);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08c080();
        _objc_release(uVar8);
      }
      _objc_release(puVar9);
      _objc_release(uVar7);
      _objc_release(puVar6);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10699fcf0; end: 10699fd07;  */

void FUN_10699fcf0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10699fd08; end: 10699fd77;  */

void FUN_10699fd08(long param_1,undefined8 param_2)

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



/* Entry: 10699fd78; end: 10699fd97; -[SCAddFriendsOpenChatActionHandler chatScopeDidDismiss:] */

void FUN_10699fd78(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10699fd98; end: 10699fd9f; -[SCAddFriendsOpenChatActionHandler addFriendsActionEventObservable] */

undefined8 FUN_10699fd98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10699fda0; end: 10699fdcf; -[SCAddFriendsOpenChatActionHandler setAddFriendsActionEventObservable:] */

void FUN_10699fda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10699fdd0; end: 10699fe2f; -[SCAddFriendsOpenChatActionHandler .cxx_destruct] */

void FUN_10699fdd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10699fe30; end: 10699fe3b; -[SCAddFriendsOpenChatCameraActionHandler initWithChatCameraScopeExposer:chatCameraScopeServices:presentingViewController:] */

void FUN_10699fe30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bffd9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithChatCameraScopeExposer_c_1125dd030);
  return;
}



/* Entry: 10699fe3c; end: 10699ff37; -[SCAddFriendsOpenChatCameraActionHandler initWithChatCameraScopeExposer:chatCameraScopeServices:presentingViewController:actionSource:deckContainerFactory:] */

undefined1 *
FUN_10699fe3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f4018;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_5);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699ff38; end: 10699ffd7; -[SCAddFriendsOpenChatCameraActionHandler initWithPageLauncher:presentingViewController:] */

undefined1 *
FUN_10699ff38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_4);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699ffd8; end: 1069a0267; -[SCAddFriendsOpenChatCameraActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_10699ffd8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(uVar2);
    if (lVar4 != 0) {
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c2980;
      _objc_opt_class(PTR_PTR_1126c2980);
      uVar6 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar5);
      uVar2 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      bVar1 = uVar2 != 0;
      if (uVar2 != 0) {
        puStack_e0 = &uStack_a0;
        uStack_a0 = 0;
        uStack_90 = 0x3032000000;
        pcStack_88 = FUN_1069a0268;
        uStack_80 = 0x1069a0278;
        uStack_78 = 0;
        puStack_d8 = &uStack_d0;
        uStack_d0 = 0;
        uStack_c0 = 0x3032000000;
        pcStack_b8 = FUN_1069a0268;
        uStack_b0 = 0x1069a0278;
        uStack_a8 = 0;
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_1069a0280;
        puStack_e8 = &UNK_11094ff10;
        puStack_c8 = puStack_d8;
        puStack_98 = puStack_e0;
        func_0x00010c0bffe0(uVar3);
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
        _objc_initWeak(auStack_108,param_1);
        puStack_138 = puVar5;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_1069a0414;
        puStack_120 = &UNK_110850308;
        _objc_copyWeak(auStack_110,auStack_108);
        puStack_118 = &uStack_a0;
        func_0x0001000d76cc("APPSTORE",&puStack_138);
        _objc_destroyWeak(auStack_110);
        _objc_destroyWeak(auStack_108);
        __Block_object_dispose(&uStack_d0,8);
        _objc_release(uStack_a8);
        __Block_object_dispose(&uStack_a0,8);
        _objc_release(uStack_78);
      }
      _objc_release(uVar2);
      goto LAB_1069a01ec;
    }
  }
  bVar1 = false;
LAB_1069a01ec:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1069a0268; end: 1069a027f;  */

void FUN_1069a0268(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069a0280; end: 1069a040f;  */

void FUN_1069a0280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ae6c0;
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010c294300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  func_0x00010c03e6c0();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar4 = PTR_PTR_1126cf720;
  _objc_alloc(PTR_PTR_1126cf720);
  func_0x00010bffd320();
  puVar5 = PTR_PTR_1126b1bb0;
  func_0x00010bfa4160();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b15c0;
  _objc_alloc();
  func_0x00010c008d20();
  _objc_release(param_2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar5;
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069a0410; end: 1069a0413;  */

void FUN_1069a0410(void)

{
  return;
}



/* Entry: 1069a0414; end: 1069a05d3;  */

void FUN_1069a0414(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x30;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    if (*(long *)(lVar1 + 0x38) == 1 && lVar2 != 0) {
      _objc_retain(lVar2);
      lVar3 = lVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      while (lVar3 != 0) {
        lVar4 = lVar7;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar3 = lVar4;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar7 = lVar4;
      }
      _objc_release(lVar2);
    }
    if (*(long *)(lVar1 + 0x18) == 0) {
      puVar5 = *(undefined **)(lVar1 + 0x10);
      func_0x00010bf23680(puVar5,param_2,lVar7,
                          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),lVar1,1,0
                          ,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,puVar5);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_opt_new();
      uVar6 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined **)(lVar1 + 0x20) = puVar5;
      _objc_release(uVar6);
      puVar5 = PTR_PTR_1126cf728;
      _objc_alloc(PTR_PTR_1126cf728);
      func_0x00010c039360();
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c080();
      _objc_release(uVar6);
    }
    _objc_release(puVar5);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069a05d4; end: 1069a0637; -[SCAddFriendsOpenChatCameraActionHandler dismissCameraScope:] */

void FUN_1069a05d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069a0638; end: 1069a063f; -[SCAddFriendsOpenChatCameraActionHandler addFriendsActionEventObservable] */

undefined8 FUN_1069a0638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1069a0640; end: 1069a066f; -[SCAddFriendsOpenChatCameraActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a0640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069a0670; end: 1069a06d7; -[SCAddFriendsOpenChatCameraActionHandler .cxx_destruct] */

void FUN_1069a0670(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1069a06d8; end: 1069a06f7; -[SCAddFriendsOpenFriendActionMenuActionHandler initWithFriendActionSheetScopeExposer:friendProfileScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:chatScopeExposer:chatScopeServices:] */

void FUN_1069a06d8(void)

{
  func_0x00010c015460();
  return;
}



/* Entry: 1069a06f8; end: 1069a081f; -[SCAddFriendsOpenFriendActionMenuActionHandler initWithFriendActionSheetScopeExposer:friendProfileScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:pageLauncher:] */

undefined1 *
FUN_1069a06f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f4020;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a0820; end: 1069a09a3; -[SCAddFriendsOpenFriendActionMenuActionHandler initWithFriendActionSheetScopeExposer:friendProfileScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:chatScopeExposer:chatScopeServices:actionSource:deckContainerFactory:] */

undefined1 *
FUN_1069a0820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f4020;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069a09a4; end: 1069a0c07; -[SCAddFriendsOpenFriendActionMenuActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1069a09a4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf730;
    _objc_opt_class(PTR_PTR_1126cf730);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar6);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar5);
    if (*(long *)(param_1 + 0x48) == 1) {
      puVar6 = *(undefined **)(param_1 + 0x50);
      func_0x00010c0cfcc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar7 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c038f40(puVar6);
      _objc_release(lVar7);
    }
    puVar8 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c244280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247a20(*(undefined8 *)(param_1 + 0x18));
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c247b60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0daca0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c0dac60();
    func_0x00010c0589a0(puVar8);
    _objc_release(uVar9);
    _objc_release(uVar5);
    puVar10 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c244280(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008d20(puVar10);
    _objc_release(uVar5);
    _objc_release(uVar9);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 1069a0c08; end: 1069a0dd7; -[SCAddFriendsOpenFriendActionMenuActionHandler friendActionSheetOpenProfile:] */

void FUN_1069a0c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) == 1) {
    puVar1 = *(undefined **)(param_1 + 0x50);
    func_0x00010c0cfcc0(puVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c247a20();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0daca0();
  puVar5 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0x22;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar3;
  uStack_90 = uVar4;
  func_0x00010c244280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c0159e0(puVar5,param_2,&uStack_a0,puVar1,uVar6,param_1);
  }
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126b15c0;
  _objc_alloc(PTR_PTR_1126b15c0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c244280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d20(puVar7,param_2,0,uVar3,0,9,0);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,puVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar5);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069a0dd8; end: 1069a1017; -[SCAddFriendsOpenFriendActionMenuActionHandler friendActionSheetShowCameraForSnap:] */

void FUN_1069a0dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c244280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6c0;
    uVar2 = uVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294300(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae6c8;
    _objc_alloc(PTR_PTR_1126ae6c8);
    uVar2 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010901d7c4(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901cdb0(uVar1,puVar6);
    func_0x00010c03e6c0(puVar4);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    func_0x00010c03e5a0();
    puVar7 = PTR_PTR_1126b1bb0;
    func_0x00010bf165e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1069a1018;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar7);
    puStack_68 = puVar7;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(puStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069a1018; end: 1069a11b7;  */

void FUN_1069a1018(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x60;
    _objc_loadWeakRetained();
    lVar9 = lVar2;
    if (*(long *)(lVar1 + 0x48) == 1 && lVar2 != 0) {
      _objc_retain(lVar2);
      lVar3 = lVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      while (lVar3 != 0) {
        lVar4 = lVar9;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        lVar3 = lVar4;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar9 = lVar4;
      }
      _objc_release(lVar2);
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf23680(uVar5,param_2,lVar9,*(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c244280(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008d20(puVar6,param_2,0,uVar8,0,0xd,0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x58),param_2,puVar6);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x20),param_2,uVar5);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069a11b8; end: 1069a13f7; -[SCAddFriendsOpenFriendActionMenuActionHandler friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:] */

void FUN_1069a11b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x48) == 1) {
    puVar1 = *(undefined **)(param_1 + 0x50);
    func_0x00010c0cfcc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b3530;
    _objc_alloc();
    lVar8 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c038f40();
    _objc_release(lVar8);
  }
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(param_5);
  func_0x00010c13a640(PTR_PTR_1126b41f8);
  puVar3 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  if (*(long *)(param_1 + 0x40) == 0) {
    puVar6 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained();
    puVar7 = puVar6;
    func_0x00010bf22b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    puVar7 = PTR_PTR_1126cc148;
    _objc_alloc(PTR_PTR_1126cc148);
    puVar6 = PTR_PTR_1126b3530;
    _objc_retain(puVar1);
    _objc_opt_class(puVar6);
    puVar4 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar6);
    puVar6 = puVar1;
    if (((ulong)puVar4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar1);
    func_0x00010bffdb00(puVar7);
    _objc_release(puVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar5);
  }
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069a13f8; end: 1069a143f; -[SCAddFriendsOpenFriendActionMenuActionHandler friendActionSheetDidDismiss:] */

void FUN_1069a13f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069a1440; end: 1069a145f; -[SCAddFriendsOpenFriendActionMenuActionHandler friendProfileDidDismiss:] */

void FUN_1069a1440(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069a1460; end: 1069a14a7; -[SCAddFriendsOpenFriendActionMenuActionHandler dismissCameraScope:] */

void FUN_1069a1460(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069a14a8; end: 1069a14c7; -[SCAddFriendsOpenFriendActionMenuActionHandler chatScopeDidDismiss:] */

void FUN_1069a14a8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069a14c8; end: 1069a14df; -[SCAddFriendsOpenFriendActionMenuActionHandler presentingViewController] */

void FUN_1069a14c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069a14e0; end: 1069a14eb; -[SCAddFriendsOpenFriendActionMenuActionHandler setPresentingViewController:] */

void FUN_1069a14e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1069a14ec; end: 1069a14f3; -[SCAddFriendsOpenFriendActionMenuActionHandler addFriendsActionEventObservable] */

undefined8 FUN_1069a14ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1069a14f4; end: 1069a1523; -[SCAddFriendsOpenFriendActionMenuActionHandler setAddFriendsActionEventObservable:] */

void FUN_1069a14f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


