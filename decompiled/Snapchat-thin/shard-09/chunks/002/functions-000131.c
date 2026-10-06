/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a6b7f0; end: 106a6b9b3; -[SCSpotlightPlaybackManager _generatePlaylistWithStories:] */

void FUN_106a6b7f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f3ab10b;
  func_0x0001000ba800(&UNK_10f3ab10b);
  if (*(long *)(param_1 + 0x1c0) == 0) {
    lVar2 = param_1;
    func_0x00010be7fa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be8d380(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010be5e1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010be5e1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010be5dec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010be3c7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010be17ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010be3b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107af9114(lVar2,lVar3,*(undefined1 *)(param_1 + 0x339));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar2 = lVar4;
    func_0x00010bf51e00(lVar4);
    _objc_release(lVar4);
  }
  else {
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106a6b9b4; end: 106a6ba83; -[SCSpotlightPlaybackManager cancelOperaPresentation:interactionType:ignoreOperaRetainTTLInSecond:] */

void FUN_106a6b9b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf7420();
  _objc_retainAutoreleasedReturnValue();
  if (((int)param_3 != 0) && (lVar2 != 0)) {
    lVar3 = lVar2;
    func_0x00010bf84f40();
    lVar4 = 7;
    if (lVar3 != 1) {
      lVar4 = param_4;
    }
    param_4 = 8;
    if (lVar3 != 3) {
      param_4 = lVar4;
    }
  }
  lVar4 = param_1;
  func_0x00010bee7360();
  if (((((int)lVar4 == 0) || ((int)param_3 == 0)) || (param_4 == 0)) ||
     (*(long *)(param_1 + 0x118) != 0)) {
    func_0x00010c18f580(*(long *)(param_1 + 0x118),param_2,param_4);
    func_0x00010bf84cc0(lVar1,param_2,param_3);
  }
  else {
    func_0x00010bf84d20(lVar1,param_2,param_4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a6ba84; end: 106a6ba8b; -[SCSpotlightPlaybackManager timeBeforeReturningToCamera] */

undefined8 FUN_106a6ba84(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106a6ba8c; end: 106a6bae3; -[SCSpotlightPlaybackManager updateDismissBaseView:] */

void FUN_106a6ba8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c283ba0(param_1,param_2,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6bae4; end: 106a6bb4b; -[SCSpotlightPlaybackManager updateDismissBaseViewFrame:] */

void FUN_106a6bae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    func_0x00010c283c00(param_1,param_2,param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a6bb4c; end: 106a6bb87; -[SCSpotlightPlaybackManager isPresenting] */

undefined8 FUN_106a6bb4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07ab40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106a6bb88; end: 106a6bbb7; -[SCSpotlightPlaybackManager resetDismissalGestureRecognizer] */

void FUN_106a6bb88(undefined8 param_1)

{
  func_0x00010bdf7420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a6bbb8; end: 106a6bbe7; -[SCSpotlightPlaybackManager pausePlaybackWithoutOverlay] */

void FUN_106a6bbb8(undefined8 param_1)

{
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a6bbe8; end: 106a6bc43; -[SCSpotlightPlaybackManager resumePlaybackBySwitchingFeed:] */

void FUN_106a6bbe8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0360();
  _objc_release(lVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf04730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x148),PTR_s_announceWillSwitchFeed_11259eb70);
    return;
  }
  return;
}



/* Entry: 106a6bc44; end: 106a6bc9f; -[SCSpotlightPlaybackManager resumeOperaDidEndModalDismiss:] */

void FUN_106a6bc44(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d540();
  _objc_release(lVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x148),PTR_s_operaDidPauseWithModelDismissedE_112618318);
    return;
  }
  return;
}



/* Entry: 106a6bca0; end: 106a6bd8b; -[SCSpotlightPlaybackManager pauseOperaDidEndModalPresentation:shouldResetState:] */

void FUN_106a6bca0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4e0a0();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bdf6dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5e40();
  _objc_release(lVar2);
  if (param_3 != 0) {
    func_0x00010c0ea420(*(undefined8 *)(param_1 + 0x148));
  }
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x000108f4e118();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x218);
      func_0x00010bef26c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c138da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 106a6bd8c; end: 106a6bf57; -[SCSpotlightPlaybackManager isAtFirstSnapInPlaylist] */

long FUN_106a6bd8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_1 + 0x148);
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = 0;
    goto LAB_106a6bf24;
  }
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_106a6bf10:
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf529e0();
    _objc_release(lVar7);
    lVar7 = 0;
    if (lVar3 != 0) {
      lVar7 = lVar2;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        lVar7 = lVar2;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar7);
        if (lVar4 != 0) {
          lVar7 = lVar2;
          func_0x00010bfcf800();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          lVar7 = lVar3;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          func_0x00010c08fa60();
          _objc_release(lVar7);
          if (lVar4 == 0) {
            lVar7 = 0;
          }
          else {
            lVar4 = lVar2;
            func_0x00010bf5ee40(lVar2);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar3;
            func_0x00010be36bc0(lVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar5;
            func_0x00010c0720c0(lVar5,param_2,lVar6);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
          }
          _objc_release(lVar3);
          goto LAB_106a6bf14;
        }
      }
      goto LAB_106a6bf10;
    }
  }
LAB_106a6bf14:
  _objc_release(lVar2);
LAB_106a6bf24:
  _objc_release(lVar1);
  return lVar7;
}



/* Entry: 106a6bf58; end: 106a6c07b; -[SCSpotlightPlaybackManager _getCurrentStoriesDisplayOrderWithCompletion:] */

void FUN_106a6bf58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x360);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bf18180();
    func_0x00010bf6eac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_3);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x1b8));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a6c07c; end: 106a6c14f;  */

void FUN_106a6c07c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106a6c11c;
  puStack_40 = &UNK_11085b7b0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_38 = param_2;
  uStack_30 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 106a6c150; end: 106a6c21f; -[SCSpotlightPlaybackManager _finishPresentingOperaPresenterWithStories:] */

void FUN_106a6c150(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    lVar3 = param_1 + 0x108;
    _objc_loadWeakRetained();
    if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 0x100), _objc_release(), lVar3 != 0)) {
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0ff880();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x100);
        lVar3 = param_1 + 0x108;
        _objc_loadWeakRetained(lVar3);
        func_0x00010be78780(param_1,param_2,param_3,uVar4,lVar3,*(undefined8 *)(param_1 + 200),
                            *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x458),
                            *(undefined8 *)(param_1 + 0x248),0);
        _objc_release(lVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6c220; end: 106a6c283; -[SCSpotlightPlaybackManager _operaCurrentPlaylistExcludingAds] */

void FUN_106a6c220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bdf6dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c101480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a6c284; end: 106a6c2a7;  */

uint FUN_106a6c284(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,param_2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 106a6c2a8; end: 106a6d407; -[SCSpotlightPlaybackManager _updatePlaylistWithDesiredPlaylistReorderingAndNextStory:switchToDedupeFp:] */

/* WARNING: Possible PIC construction at 0x000106a6c458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a6c840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a6cf04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a6c844) */
/* WARNING: Removing unreachable block (ram,0x000106a6c86c) */
/* WARNING: Removing unreachable block (ram,0x000106a6c87c) */
/* WARNING: Removing unreachable block (ram,0x000106a6c8cc) */
/* WARNING: Removing unreachable block (ram,0x000106a6c8f8) */
/* WARNING: Removing unreachable block (ram,0x000106a6c974) */
/* WARNING: Removing unreachable block (ram,0x000106a6cbc0) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca08) */
/* WARNING: Removing unreachable block (ram,0x000106a6cc44) */
/* WARNING: Removing unreachable block (ram,0x000106a6cc9c) */
/* WARNING: Removing unreachable block (ram,0x000106a6cbd8) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca44) */
/* WARNING: Removing unreachable block (ram,0x000106a6c884) */
/* WARNING: Removing unreachable block (ram,0x000106a6c8b0) */
/* WARNING: Removing unreachable block (ram,0x000106a6cabc) */
/* WARNING: Removing unreachable block (ram,0x000106a6c8c0) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca60) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca68) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca7c) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca84) */
/* WARNING: Removing unreachable block (ram,0x000106a6cb38) */
/* WARNING: Removing unreachable block (ram,0x000106a6ca94) */
/* WARNING: Removing unreachable block (ram,0x000106a6cb3c) */
/* WARNING: Removing unreachable block (ram,0x000106a6cb8c) */
/* WARNING: Removing unreachable block (ram,0x000106a6cb94) */
/* WARNING: Removing unreachable block (ram,0x000106a6c45c) */
/* WARNING: Removing unreachable block (ram,0x000106a6c4e4) */
/* WARNING: Removing unreachable block (ram,0x000106a6c4fc) */
/* WARNING: Removing unreachable block (ram,0x000106a6c470) */
/* WARNING: Removing unreachable block (ram,0x000106a6c480) */
/* WARNING: Removing unreachable block (ram,0x000106a6c520) */
/* WARNING: Removing unreachable block (ram,0x000106a6c488) */
/* WARNING: Removing unreachable block (ram,0x000106a6c494) */
/* WARNING: Removing unreachable block (ram,0x000106a6c524) */
/* WARNING: Removing unreachable block (ram,0x000106a6c4a4) */
/* WARNING: Removing unreachable block (ram,0x000106a6c508) */
/* WARNING: Removing unreachable block (ram,0x000106a6cf08) */
/* WARNING: Removing unreachable block (ram,0x000106a6cf44) */
/* WARNING: Removing unreachable block (ram,0x000106a6cf54) */
/* WARNING: Removing unreachable block (ram,0x000106a6cf68) */
/* WARNING: Removing unreachable block (ram,0x000106a6cdc8) */
/* WARNING: Removing unreachable block (ram,0x000106a6cdd4) */
/* WARNING: Removing unreachable block (ram,0x000106a6ce1c) */
/* WARNING: Removing unreachable block (ram,0x000106a6ce38) */
/* WARNING: Removing unreachable block (ram,0x000106a6cee0) */

void FUN_106a6c2a8(undefined *param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  int iVar25;
  undefined *puStack_240;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x360);
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x1c0) == 0)) {
    puStack_240 = &UNK_10f3ab148;
    func_0x0001000ba800();
    puVar2 = param_1;
    func_0x00010bf5ff00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf6eae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf5fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bdf6dc0();
    _objc_retainAutoreleasedReturnValue();
    if (((param_3 != 0) || (param_1[0x2b0] == '\x01')) &&
       ((((puVar2 != (undefined *)0x0 && (puVar6 = puVar5, func_0x00010c07ab40(), (int)puVar6 != 0))
         && (puVar6 = puVar3, func_0x00010bf529e0(), puVar6 != (undefined *)0x0)) &&
        (puVar4 != (undefined *)0x0)))) {
      puStack_1f8 = param_1;
      func_0x00010be6da00();
      _objc_retainAutoreleasedReturnValue();
      if (param_1[0x2b0] == '\x01') {
        _objc_release(puStack_1f8);
        puStack_1f8 = PTR____NSArray0__struct_11034ab48;
      }
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puStack_1f8;
      func_0x00010bf529e0();
      if (puVar24 != (undefined *)0x0) {
        func_0x00010c0dfd40(puStack_1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107d005a8();
        puVar10 = puStack_1f8;
        goto code_r0x00010c0df880;
      }
      puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      if ((param_1[0x2b0] & 1) != 0) {
        if ((*(long *)(param_1 + 0x2a0) != 0) &&
           (puVar24 = puVar3, func_0x00010bf529e0(), *(undefined **)(param_1 + 0x2a0) < puVar24)) {
          func_0x00010bed2ce0(param_1);
        }
        puVar9 = puVar3;
        func_0x000107af9114(puVar3,puVar2,param_1[0x339]);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = param_1;
        func_0x00010bf5ff00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar24;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x90);
        func_0x00010bfa4340(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010c071f40();
        _objc_release(uVar11);
        _objc_release(puVar10);
        _objc_release(puVar24);
        if (((ulong)puVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar11 = 0;
        }
        puVar13 = param_1;
        func_0x00010bee9d20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
        puVar24 = puVar13;
        func_0x000100504554();
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        puVar14 = puVar12;
        func_0x00010c0d3c80();
        if (param_1[0x33a] == '\x01') {
          uVar15 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010bf00d20(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar14);
          _objc_release(uVar15);
        }
        puVar24 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        uStack_120 = 0x106a6d438;
        puStack_118 = &UNK_110958d48;
        _objc_retain(puVar14);
        puVar10 = puVar9;
        puStack_110 = puVar14;
        puStack_108 = param_1;
        func_0x000100504554(puVar9,&puStack_130);
        func_0x00010be8d760(param_1);
        _objc_release(puVar10);
        puVar16 = param_1;
        func_0x00010be8d380();
        _objc_retainAutoreleasedReturnValue();
        puStack_160 = puVar24;
        uStack_158 = 0xc2000000;
        uStack_150 = 0x106a6d4c0;
        puStack_148 = &UNK_1109462b8;
        puStack_140 = param_1;
        _objc_retain(puVar14);
        puVar10 = puVar16;
        puStack_138 = puVar14;
        func_0x0001006372a4(puVar16,&puStack_160);
        _objc_release(puVar16);
        puStack_188 = puVar24;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_106a6d598;
        puStack_170 = &UNK_110931a08;
        puVar17 = puVar10;
        puStack_168 = param_1;
        func_0x00010050471c(puVar10,&PTR___NSConcreteGlobalBlock_110958ff8,&puStack_188);
        func_0x00010c066720(*(undefined8 *)(param_1 + 0x38));
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar15 = *(undefined8 *)(param_1 + 0x90);
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        puVar24 = puVar10;
        func_0x00010bf529e0();
        if (puVar24 != (undefined *)0x0) {
          func_0x00010c0dfd40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259740();
          goto code_r0x00010c0df880;
        }
        if (*(long *)(param_1 + 1000) == 0) {
          param_2 = (undefined *)0x0;
          puStack_1f0 = puVar6;
          func_0x00010799afc8(puVar6,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar24 = puVar6;
          func_0x00010bfece40();
          puVar18 = puVar6;
          func_0x00010c0d3c80();
          if (puVar24 == (undefined *)0x7fffffffffffffff) {
            puVar24 = *(undefined **)(param_1 + 0x410);
            if (puVar24 != (undefined *)0x0) {
              if ((((param_1[0x418] & 1) == 0) && (*(long *)(param_1 + 0x420) == -1)) &&
                 ((param_1[0x428] & 1) == 0)) {
                _objc_retain(puVar24);
                func_0x00010c0673c0();
              }
              else {
                puVar24 = (undefined *)0x0;
              }
            }
          }
          else {
            func_0x00010c12d3c0(puVar18);
            if (((param_1[0x428] & 1) == 0) && (*(long *)(param_1 + 0x408) != 0)) {
              puVar24 = puVar6;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar24 = (undefined *)0x0;
            }
          }
          param_2 = (undefined *)0x0;
          puVar21 = puVar18;
          func_0x00010799afc8(puVar18,0);
          _objc_retainAutoreleasedReturnValue();
          puStack_1f0 = puVar21;
          func_0x00010c0d3c80();
          _objc_release(puVar21);
          if (puVar24 != (undefined *)0x0) {
            func_0x00010bf529e0();
            func_0x00010c066b00(puStack_1f0);
          }
          _objc_release(puVar24);
          _objc_release(puVar18);
        }
        func_0x00010c2889e0(puVar5);
        uVar15 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010c0d3c80(uVar15);
        _objc_retain(puVar3);
        puVar18 = puVar3;
        func_0x00010bf52a60();
        puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar18 != (undefined *)0x0) {
          puVar10 = puRam0000000000000000;
          func_0x00010c259740(puRam0000000000000000);
          goto code_r0x00010c0df880;
        }
        _objc_release(puVar3);
        puVar24 = puVar7;
        func_0x00010bf51e00(puVar7);
        func_0x00010c1878e0(param_1);
        _objc_release(puVar24);
        uVar23 = uVar15;
        func_0x00010bf09f00(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5e300(param_1);
        _objc_release(uVar23);
        uVar19 = *(ulong *)(param_1 + 0x168);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR_PTR_1126c0e00;
        func_0x00010c24b280(PTR_PTR_1126c0e00);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010bf1f320();
        _objc_release(puVar24);
        _objc_release(uVar19);
        if ((uVar20 & 1) == 0) {
          puVar24 = param_1;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ff9c0();
          _objc_release(puVar24);
        }
        puVar24 = puVar3;
        func_0x00010bf529e0();
        if (*(undefined **)(param_1 + 0x2a0) < puVar24) {
          puVar21 = *(undefined **)(param_1 + 0x168);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR_PTR_1126c0e00;
          func_0x00010c24b280(PTR_PTR_1126c0e00);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar21;
          func_0x00010bf1f320();
          if (((ulong)puVar18 & 1) == 0) {
            _objc_release(puVar24);
LAB_106a6d100:
            _objc_release(puVar21);
          }
          else {
            puVar18 = param_1;
            func_0x00010bf5fae0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar22 = param_1;
            func_0x00010be3f620();
            _objc_release(puVar18);
            _objc_release(puVar24);
            _objc_release(puVar21);
            if (((ulong)puVar22 & 1) == 0) {
              puVar21 = param_1;
              func_0x00010bf6b020(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ff9c0();
              goto LAB_106a6d100;
            }
          }
          puVar24 = param_1;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ff820();
          _objc_release(puVar24);
        }
        puVar24 = puVar3;
        func_0x00010bf529e0();
        *(undefined **)(param_1 + 0x2a0) = puVar24;
        func_0x00010c18c200(param_1);
        lVar1 = *(long *)(param_1 + 0xa8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa8));
          puVar24 = puVar2;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          if (puVar24 != (undefined *)0x0) {
            iVar25 = (int)*(undefined8 *)(param_1 + 0x2c0);
            puVar18 = puVar2;
            func_0x00010bfa4340(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(puVar18);
            _objc_release(puVar24);
            if (iVar25 != 0) {
              uVar23 = *(undefined8 *)(param_1 + 0x2a8);
              *(undefined ***)(param_1 + 0x2a8) =
                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7db0;
              _objc_release(uVar23);
              puVar24 = param_1;
              func_0x00010bf5fae0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be4f940(param_1);
              _objc_release(puVar24);
            }
          }
        }
        _objc_release(uVar15);
        _objc_release(puStack_1f0);
        _objc_release(puVar16);
        _objc_release(0);
        _objc_release(puVar17);
        _objc_release(puVar10);
        _objc_release(puStack_138);
        _objc_release(puStack_110);
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(puVar13);
        _objc_release(uVar11);
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puStack_1f8);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x0001000e2a84(puStack_240);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puStack_240);
  __Unwind_Resume(param_3);
  _objc_terminate();
  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  puVar10 = param_2;
code_r0x00010c0df880:
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar24,PTR_s_numberWithUnsignedLongLong__112615838,puVar10);
  return;
}



/* Entry: 106a6d408; end: 106a6d597;  */

void FUN_106a6d408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106a6d598; end: 106a6d66b;  */

void FUN_106a6d598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = param_2;
  func_0x00010c0ea200(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar4;
  func_0x00010c1561c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a6d66c; end: 106a6d6bb;  */

uint FUN_106a6d66c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d0020;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 106a6d6bc; end: 106a6d85f; -[SCSpotlightPlaybackManager _filterOutViewedPlaylistItems:dedupeFpToKeep:] */

void FUN_106a6d6bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x000108f4c3f0(param_4,uVar1,uVar2,0,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar4;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar3 = param_3;
  func_0x00010bfaea20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a6d860; end: 106a6d95b;  */

void FUN_106a6d860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107d005a8(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x310);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a6d95c; end: 106a6da0f; -[SCSpotlightPlaybackManager _maybeLogGrapheneForDedupedStory:storyType:fromFeedType:] */

void FUN_106a6d95c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x340);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x340));
    FUN_106a7e3b8(*(undefined8 *)(param_1 + 0x318),param_5,param_4,1);
    if ((*(byte *)(param_1 + 0x348) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x348) = 1;
      FUN_106a7e244(*(undefined8 *)(param_1 + 0x318),param_5,1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6da10; end: 106a6dabf; -[SCSpotlightPlaybackManager _updatePlayableViewModel:withSectionKey:] */

void FUN_106a6da10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  if (*(char *)(param_1 + 0x339) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(param_3);
    func_0x00010bfa4340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010799a698(param_3,uVar2,*(undefined8 *)(param_1 + 0x248));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar2;
  }
  else {
    _objc_retain(param_3);
    func_0x00010799a5f0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a6dac0; end: 106a6dbf7; -[SCSpotlightPlaybackManager _buildAllGroupDataModelsWithInitialStory:allStories:initialGroupDataModel:playableViewModelGenerator:] */

void FUN_106a6dac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  if (*(char *)(param_1 + 0x339) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bfa4340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010799ab60(param_3,param_4,param_5,param_6,uVar2,*(undefined8 *)(param_1 + 0x248));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = uVar2;
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010799ad20(param_3,param_4,param_5,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a6dbf8; end: 106a6dcd7; -[SCSpotlightPlaybackManager _viewStateFilteredStoriesWithStories:dedupeFpToKeep:] */

void FUN_106a6dbf8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x000108f4c3f0(param_4,param_3,uVar5,*(undefined8 *)(param_1 + 0x60),1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126cf308;
  func_0x00010c0c3120();
  puVar3 = puVar1;
  func_0x00010bf529e0();
  puVar4 = puVar1;
  if (puVar2 < puVar3) {
    func_0x00010c25e980(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a6dcd8; end: 106a6decf; -[SCSpotlightPlaybackManager _newPaginatedStoriesWithStories:] */

undefined * FUN_106a6dcd8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  double dStack_188;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      uVar9 = *(undefined8 *)(lVar7 * 8);
      puVar3 = param_1;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259740(uVar9);
      func_0x00010c0df880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf4b900();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (((ulong)puVar5 & 1) == 0) {
        uVar10 = *(ulong *)(param_1 + 0x60);
        func_0x00010c259740(uVar9);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar4);
        if ((uVar10 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010be8d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_3 + 0x168);
  _objc_retain(puVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c0f28a0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c067e20();
  _objc_release(puVar1);
  _objc_release(lVar8);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  dStack_188 = 0.0;
  if (0.0 <= (double)lVar2 / 1000.0) {
    dStack_188 = (double)lVar2 / 1000.0;
  }
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc0000000;
  uStack_198 = 0x106a6dff0;
  puStack_190 = &UNK_110959098;
  puVar3 = puVar4;
  func_0x000100504554(puVar4,&puStack_1a8);
  _objc_release(puVar4);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x70);
  *(undefined **)(param_3 + 0x70) = puVar1;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 106a6ded0; end: 106a6e097; -[SCSpotlightPlaybackManager _updateStaleDedupeFpsFromStories:] */

void FUN_106a6ded0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  double dStack_48;
  
  lVar5 = *(long *)(param_1 + 0x168);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c0f28a0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c067e20();
  _objc_release(puVar1);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  dStack_48 = 0.0;
  if (0.0 <= (double)lVar2 / 1000.0) {
    dStack_48 = (double)lVar2 / 1000.0;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  uStack_58 = 0x106a6dff0;
  puStack_50 = &UNK_110959098;
  uVar3 = param_3;
  func_0x000100504554(param_3,&puStack_68);
  _objc_release(param_3);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106a6e098; end: 106a6e35f; -[SCSpotlightPlaybackManager didStartPlayingPlaylistItemDataModel:groupDataModel:] */

void FUN_106a6e098(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be020c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126cff98;
    func_0x00010c06b8a0();
    puVar5 = PTR_PTR_1126b8e08;
    if ((int)puVar4 != 0) {
      _objc_retain(param_4);
      _objc_opt_class(puVar5);
      uVar6 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar5);
      uVar1 = param_4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_4);
      uVar6 = uVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar6 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x68);
        uVar6 = uVar1;
        func_0x00010bfe5ec0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar9);
        _objc_release(uVar6);
      }
      _objc_release(uVar1);
    }
    lVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff760();
    _objc_release(lVar3);
    func_0x00010be56760(param_1);
  }
  else {
    func_0x00010c259740(lVar2);
    func_0x00010c0df880(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x60));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x88));
    lVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff760();
    _objc_release(lVar3);
    func_0x00010be07be0(param_1);
    func_0x00010be56780(param_1);
    if (*(char *)(param_1 + 0x33a) == '\x01') {
      lVar3 = *(long *)(param_1 + 0xb0);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar7 = param_1;
        func_0x00010bf5ff00(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar3);
        lVar7 = lVar3;
      }
      _objc_release(lVar3);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98));
      _objc_release(lVar7);
    }
    if (*(long *)(param_1 + 0x2a8) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c0e00;
      func_0x00010c130a80(PTR_PTR_1126c0e00);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf1f320();
      _objc_release(puVar4);
      _objc_release(uVar8);
      if ((int)uVar9 != 0) {
        func_0x00010bedd700(param_1);
      }
    }
    func_0x00010be87920(param_1);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6e360; end: 106a6e457; -[SCSpotlightPlaybackManager operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_106a6e360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 8,param_3);
  uVar2 = param_4;
  func_0x00010bf38e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010010fab4();
  uVar3 = uVar2;
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bee7360();
  if ((int)lVar4 != 0) {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea3a0();
  _objc_release(uVar3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ffae0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a6e458; end: 106a6e4f3; -[SCSpotlightPlaybackManager updateOperaSize:transitionCoordinator:] */

void FUN_106a6e458(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_1;
  dVar5 = param_2;
  _objc_retain(param_5);
  if (*(long *)(param_3 + 0x18) != 0) {
    if (*(long *)(param_3 + 0x20) != 0) {
      func_0x00010bdc10a0();
      bVar1 = false;
      if ((dVar4 == param_1) && (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
        bVar1 = dVar5 == param_2;
      }
      if (bVar1) goto LAB_106a6e4e0;
    }
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    *(undefined **)(param_3 + 0x20) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1d5780(param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4,param_5);
  }
LAB_106a6e4e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a6e4f4; end: 106a6e56b; -[SCSpotlightPlaybackManager operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_106a6e4f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bee7360();
  if ((int)lVar1 != 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010c28b4e0(*(undefined8 *)(param_1 + 0x10),param_2,7);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea3e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a6e56c; end: 106a6e63f; -[SCSpotlightPlaybackManager operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_106a6e56c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bee7360();
  if ((int)uVar1 != 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb920();
  _objc_release(uVar2);
  uVar1 = param_1;
  func_0x00010bee7360();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ffac0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a6e640; end: 106a6e6cb; -[SCSpotlightPlaybackManager operaPresenterDidCancelDismissing:] */

void FUN_106a6e640(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bee7360();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106a6e6cc; end: 106a6e6cf; -[SCSpotlightPlaybackManager operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_106a6e6cc(void)

{
  return;
}



/* Entry: 106a6e6d0; end: 106a6e6df; -[SCSpotlightPlaybackManager operaPresenterDidFailToPresent:] */

void FUN_106a6e6d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a6e6e0; end: 106a6e713; -[SCSpotlightPlaybackManager operaPresenterDidFinishDismissing:] */

void FUN_106a6e6e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a6e714; end: 106a6e823; -[SCSpotlightPlaybackManager operaPresenterDidTearDown:] */

void FUN_106a6e714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f3ab1af;
  func_0x0001000ba800(&UNK_10f3ab1af);
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x418) = 0;
    func_0x00010c0698c0(*(undefined8 *)(param_1 + 0x378));
  }
  func_0x00010be94080(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x400) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  _objc_release(uVar2);
  func_0x00010be93d00(param_1);
  func_0x00010c188180(param_1,param_2,0);
  func_0x00010c1b8540(param_1,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010c1878e0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bddf8a0(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff960();
  _objc_release(param_1);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6e824; end: 106a6eaa7; -[SCSpotlightPlaybackManager _removeStories:currentlyPlayingStory:] */

void FUN_106a6e824(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  lVar4 = param_3;
  puStack_48 = puVar2;
  if (param_4 == 0) {
    func_0x00010bf00560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8d760(param_1);
  }
  else {
    lVar3 = param_1;
    func_0x00010be46f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      _objc_retain(param_1);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106a6eaa8;
      puStack_88 = &UNK_1108ae320;
      lStack_80 = param_1;
      _objc_retain(param_3);
      lStack_78 = param_3;
      _objc_retain(param_4);
      puStack_68 = &uStack_60;
      lStack_70 = param_4;
      _objc_retainBlock(&puStack_a0);
      uVar6 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ceda0(PTR_PTR_1126c10f8);
      uVar7 = uVar6;
      func_0x00010c15bfa0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x120);
      if ((int)uVar7 == 0) {
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcac60(uVar6);
      }
      else {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcac80(uVar6);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(ppuVar5);
      _objc_release(lStack_70);
      _objc_release(lStack_78);
      lVar4 = param_1;
    }
    else {
      func_0x00010bf00560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8d760(param_1);
    }
  }
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a6eaa8; end: 106a6eb5f;  */

void FUN_106a6eaa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c259740(uVar3);
  func_0x00010c0df880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8d680(uVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a6eb60; end: 106a6ed4b; -[SCSpotlightPlaybackManager _removeStories:currentlyPlayingStoryFp:interactionHistory:] */

void FUN_106a6eb60(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_5);
      if ((*(long *)(param_1 + 0x248) != 0x5f) && (*(long *)(param_1 + 0x248) != 0x61)) {
        uVar4 = *(ulong *)(param_1 + 0x80);
        func_0x00010bf4b900();
        if ((uVar4 & 1) == 0) {
          func_0x00010c12d360(param_3);
          func_0x00010bea5200(param_1);
        }
      }
LAB_106a6ecd0:
      lVar2 = param_3;
      func_0x00010bf00560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8d760(param_1);
      _objc_release(lVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126cc5b0;
      uVar7 = *(ulong *)(param_3 + 0x148);
      _objc_retain(uVar7);
      _objc_opt_class(puVar5);
      uVar3 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar4 = uVar7;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar7);
      uVar3 = uVar4;
      func_0x00010c0ea280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010bf5f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      func_0x00010c259740();
      uVar3 = param_4;
      func_0x00010c282800();
      if (uVar4 == uVar3) {
        func_0x00010c074c20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010c296d80();
        _objc_release(uVar7);
        if ((uVar4 & 1) != 0) {
          _objc_release(param_5);
          goto LAB_106a6ecd0;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106a6ed4c; end: 106a6eddf; -[SCSpotlightPlaybackManager currentOperaPage] */

void FUN_106a6ed4c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126cc5b0;
  uVar4 = *(ulong *)(param_1 + 0x148);
  _objc_retain(uVar4);
  _objc_opt_class(puVar1);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010c0ea280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf5f780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a6ede0; end: 106a6ee47; -[SCSpotlightPlaybackManager _resetTiledInterstitialState] */

void FUN_106a6ede0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x408) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x420) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x428) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x430) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x448) = 0;
  return;
}



/* Entry: 106a6ee48; end: 106a6ef17; -[SCSpotlightPlaybackManager _removeTiledInterstitialFromOperaPlaylist] */

void FUN_106a6ee48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x408);
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x418) = 0;
    func_0x00010c0698c0(*(undefined8 *)(param_1 + 0x378));
    func_0x00010be94080(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106a6ef18;
    puStack_38 = &UNK_110841f80;
    uStack_30 = uVar1;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    _objc_retain(uVar1);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
    _objc_release(uStack_30);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106a6ef18; end: 106a6ef23;  */

void FUN_106a6ef18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removePlaylistItemGroupForID__112629110,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a6ef24; end: 106a6f023; -[SCSpotlightPlaybackManager _insertTiledInterstitialAfterCurrentGroupIfDue] */

void FUN_106a6ef24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x420) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x410) != 0) && (*(char *)(param_1 + 0x3f0) == '\x01')) {
    lVar1 = *(long *)(param_1 + 0x148);
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if ((lVar1 != 0) && (lVar3 != 0)) {
      lVar2 = lVar1;
      func_0x00010bf63e80(lVar1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126cff98;
      func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,lVar2);
      if (((ulong)puVar4 & 1) == 0) {
        uStack_38 = 0;
        lVar5 = lVar1;
        func_0x00010c066bc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x410),lVar3,&uStack_38);
        if ((int)lVar5 != 0) {
          *(undefined8 *)(param_1 + 0x420) = 0xffffffffffffffff;
          *(undefined1 *)(param_1 + 0x428) = 1;
        }
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106a6f024; end: 106a6f203; -[SCSpotlightPlaybackManager operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_106a6f024(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d0020;
  _objc_opt_class(PTR_PTR_1126d0020);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if (0 < *(long *)(param_1 + 0x420)) {
    *(long *)(param_1 + 0x420) = *(long *)(param_1 + 0x420) + -1;
  }
  func_0x00010be3ca80(param_1);
  if (*(long *)(param_1 + 0x408) != 0) {
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x418) == '\x01') {
        func_0x00010be8da60(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x418) = 1;
      func_0x00010c0698e0(*(undefined8 *)(param_1 + 0x378));
    }
  }
  lVar3 = param_1;
  func_0x00010be020c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188180(param_1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf60f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bf60f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8540(param_1);
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_1;
    func_0x00010bf60f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    func_0x00010c0df880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bea5200(param_1);
    if (*(long *)(param_1 + 0x2a8) != 0) {
      func_0x00010be18960(param_1);
    }
    _objc_release(puVar1);
  }
  lVar3 = param_1;
  func_0x00010beb5540();
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff980();
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010bdf7280();
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ffa60();
    _objc_release(lVar3);
    func_0x00010be57780(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a6f204; end: 106a6f423; -[SCSpotlightPlaybackManager operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106a6f204(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be020c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be020c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0020;
  _objc_opt_class(PTR_PTR_1126d0020);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  _objc_release(param_4);
  if ((uVar4 & 1) != 0) {
    puVar3 = PTR_PTR_1126d0020;
    _objc_opt_class(PTR_PTR_1126d0020);
    uVar4 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00010be8da60(param_1);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    func_0x00010c259740(lVar2);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x88));
    func_0x00010c12bde0(*(undefined8 *)(param_1 + 0x288));
    _objc_release(puVar3);
  }
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(lVar1);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb460(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar5);
  }
  if (*(long *)(param_1 + 0x2a8) == 0) {
    func_0x00010be31100(param_1);
    uVar6 = *(ulong *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c130a80(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf1f320();
    _objc_release(puVar3);
    _objc_release(uVar6);
    if ((uVar4 & 1) == 0) {
      func_0x00010bedd700(param_1);
    }
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff7c0();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a6f424; end: 106a6f55f; -[SCSpotlightPlaybackManager _discoverFeedStoryFromGroupDataModel:] */

void FUN_106a6f424(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x000107d005a8();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x310);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x318);
        func_0x00010be0ef00(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        _objc_opt_class(param_3);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        FUN_106a7d294(uVar4,param_1,lVar3,1);
        _objc_release(lVar3);
        _objc_release(param_1);
        lVar3 = 0;
      }
    }
    _objc_retain(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106a6f560; end: 106a6f873; -[SCSpotlightPlaybackManager _handleStoryAdvancementFrom:toStory:] */

void FUN_106a6f560(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  
  _objc_retain(param_4);
  if ((*(char *)(param_1 + 0x339) == '\x01') &&
     (lVar2 = param_4, func_0x00010c259740(), puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570,
     lVar2 != 0)) {
    uVar8 = *(ulong *)(param_1 + 0xb0);
    func_0x00010c259740(param_4);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar9 = uVar8;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 != 0) {
      lVar2 = param_1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        uVar9 = uVar8;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bfa4340(lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c071f40();
        _objc_release(lVar4);
        _objc_release(uVar9);
        if ((uVar7 & 1) == 0) {
          uVar9 = *(ulong *)(param_1 + 0x350);
          lVar4 = lVar2;
          func_0x00010bfa4340(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(lVar4);
          if ((uVar9 & 1) == 0) {
            uVar10 = *(undefined8 *)(param_1 + 0x350);
            lVar4 = lVar2;
            func_0x00010bfa4340(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar10);
            _objc_release(lVar4);
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            lVar4 = lVar2;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            iVar11 = (int)*(undefined8 *)(param_1 + 0x2c0);
            lVar4 = lVar2;
            func_0x00010bfa4340(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(lVar4);
            ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
            if (iVar11 == 0) {
              ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
            }
            FUN_106a7e5e8(*(undefined8 *)(param_1 + 0x318),puVar3,ppuVar1,1);
            _objc_release(puVar3);
          }
          lVar4 = *(long *)(param_1 + 0x460);
          func_0x00010bf529e0();
          if (lVar4 != 0) {
            uVar9 = 0;
            do {
              uVar5 = *(undefined8 *)(param_1 + 0x460);
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar5;
              func_0x00010bfa4340();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar8;
              func_0x00010bfa4340(uVar8);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar10;
              func_0x00010c071f40();
              _objc_release(uVar7);
              _objc_release(uVar10);
              _objc_release(uVar5);
              if ((int)uVar6 != 0) {
                func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98));
                func_0x00010bea3320(param_1);
                break;
              }
              uVar9 = uVar9 + 1;
              uVar7 = *(ulong *)(param_1 + 0x460);
              func_0x00010bf529e0();
            } while (uVar9 < uVar7);
          }
        }
      }
      _objc_release(lVar2);
    }
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a6f874; end: 106a6f92b; -[SCSpotlightPlaybackManager _removeStoriesInDataMutatorWithDedupeFps:] */

void FUN_106a6f874(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5ff00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa4340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c12e660(uVar3,param_2,param_3,lVar4,PTR___dispatch_main_q_11034be20,0);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6f92c; end: 106a6f9f3; -[SCSpotlightPlaybackManager _cleanupOpera] */

/* WARNING: Possible PIC construction at 0x000106a6f944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a6f948) */
/* WARNING: Removing unreachable block (ram,0x000106a6f9b4) */
/* WARNING: Removing unreachable block (ram,0x000106a6f9c4) */
/* WARNING: Removing unreachable block (ram,0x000106a6f9d8) */

void FUN_106a6f92c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_timeIntervalSinceReferenceDate_112679718);
  return;
}



/* Entry: 106a6f9f4; end: 106a6fa73; -[SCSpotlightPlaybackManager _lastExitTimestamp] */

void FUN_106a6f9f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a6fa74; end: 106a6faf3; -[SCSpotlightPlaybackManager _lastExitStoryDedupeFp] */

void FUN_106a6fa74(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a6faf4; end: 106a6fbef; -[SCSpotlightPlaybackManager _setLastStoryExitDedupeFp:] */

void FUN_106a6faf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bdf8c40(param_1,param_2,param_3);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(lVar1);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1d0560(uVar4,param_2,0,&PTR____CFConstantStringClassReference_110e68cb8);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_110e68cb8);
    _objc_release(puVar3);
  }
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(lVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6fbf0; end: 106a6fd4f; -[SCSpotlightPlaybackManager _shouldRequestMoreStories] */

undefined8 FUN_106a6fbf0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    uVar3 = param_1;
    func_0x00010bf5fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      uVar6 = 1;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x1a8);
      lVar2 = *(long *)(param_1 + 0x1b0);
      uVar4 = param_1;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfece40();
      if (uVar3 == 0x7fffffffffffffff) {
LAB_106a6fca0:
        uVar6 = 0;
      }
      else {
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        func_0x00010bf529e0();
        if (uVar3 < uVar5) {
          lVar8 = 0;
          do {
            uVar7 = *(ulong *)(param_1 + 0x70);
            uVar5 = uVar4;
            func_0x00010c0dfd40(uVar4,param_2,uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900(uVar7,param_2,uVar5);
            _objc_release(uVar5);
            if (((uVar7 & 1) == 0) && (lVar8 = lVar8 + 1, lVar2 + lVar1 <= lVar8))
            goto LAB_106a6fca0;
            uVar3 = uVar3 + 1;
            uVar5 = uVar4;
            func_0x00010bf529e0();
          } while (uVar3 < uVar5);
        }
        uVar6 = 1;
      }
      _objc_release(uVar4);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 106a6fd50; end: 106a6fda3;  */

bool FUN_106a6fd50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2827c0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf60f80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c259740();
  _objc_release(lVar1);
  return param_2 == lVar2;
}



/* Entry: 106a6fda4; end: 106a6fe67; -[SCSpotlightPlaybackManager _isCurrentStoryLastInPlaylist:] */

bool FUN_106a6fda4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf60f80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = param_3, func_0x00010bf529e0(), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    func_0x00010bf60f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c259740();
    lVar4 = param_3;
    func_0x00010c089820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c282800();
    bVar1 = lVar3 == lVar5;
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106a6fe68; end: 106a6ff9b; -[SCSpotlightPlaybackManager _currentStoryIsEndOfMultistoryPlaylist] */

ulong FUN_106a6fe68(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24b280(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf1f320(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    if ((uVar5 & 1) == 0) {
      uVar5 = param_1;
      func_0x00010bf60f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == 0) goto LAB_106a6fe84;
      func_0x00010bf60f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c259740();
      func_0x00010bf5fae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c282800();
      uVar5 = (ulong)(uVar5 == uVar4);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    else {
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3f620(param_1,param_2,uVar1);
      uVar5 = param_1;
    }
    _objc_release(uVar1);
  }
  else {
LAB_106a6fe84:
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 106a6ff9c; end: 106a70037; -[SCSpotlightPlaybackManager setSectionKeys:initialIndex:fallbackSectionIndex:] */

void FUN_106a6ff9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x460) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0xf0) = param_4;
  *(undefined8 *)(param_1 + 0x498) = param_4;
  *(undefined8 *)(param_1 + 0x4b0) = param_5;
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a70038; end: 106a701bf; -[SCSpotlightPlaybackManager _prepareRepositoryBackedInterstitialWithCompletion:] */

void FUN_106a70038(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x3f8);
  *(undefined **)(param_1 + 0x3f8) = puVar1;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be3b080();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_1 + 0x270) == 0) || (lVar3 == 0)) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 1000);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    func_0x00010bf5f060(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106a701c0; end: 106a705b7;  */

void FUN_106a701c0(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **unaff_x21;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = param_2;
  _objc_retain(param_2);
  lVar7 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x3f8) == *(long *)(param_1 + 0x20))) {
    unaff_x21 = ppuStack_1e0;
    lStack_1e8 = lVar7;
    func_0x00010bf2f7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x21;
    func_0x00010bf529e0();
    _objc_release(unaff_x21);
    lVar7 = lStack_1e8;
    if (ppuVar1 == (undefined **)0x4) {
      unaff_x21 = *(undefined ***)(lStack_1e8 + 0x270);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa4340(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      ppuVar3 = unaff_x21;
      func_0x00010c24b6a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(unaff_x21);
      ppuVar1 = ppuStack_1e0;
      if (ppuVar3 == (undefined **)0x0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
      }
      else {
        lStack_1f0 = param_1;
        _objc_retain(ppuStack_1e0);
        uVar2 = *(undefined8 *)(lVar7 + 0x400);
        *(undefined ***)(lVar7 + 0x400) = ppuVar1;
        _objc_release();
        *(undefined1 *)(lVar7 + 0x3f0) = 0;
        _dispatch_group_create();
        puStack_120 = &uStack_128;
        uStack_128 = 0;
        uStack_118 = 0x2020000000;
        uStack_110 = 1;
        lStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        plStack_160 = (long *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        func_0x00010bf2f7c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar1;
        func_0x00010bf52a60();
        if (ppuVar4 != (undefined **)0x0) {
          lVar7 = *plStack_160;
          do {
            ppuVar9 = (undefined **)0x0;
            do {
              if (*plStack_160 != lVar7) {
                _objc_enumerationMutation(ppuVar1);
              }
              uVar8 = *(undefined8 *)(lStack_168 + (long)ppuVar9 * 8);
              _dispatch_group_enter(uVar2);
              ppuVar5 = ppuVar3;
              func_0x00010c269d40(ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf2f760(uVar8);
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuStack_1e0;
              func_0x00010c1356e0(ppuStack_1e0);
              _objc_retainAutoreleasedReturnValue();
              puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_198 = 0xc2000000;
              pcStack_190 = FUN_106a705b8;
              puStack_188 = &UNK_1109590b8;
              puStack_178 = &uStack_128;
              _objc_retain(uVar2);
              ppuStack_1f8 = &puStack_1a0;
              uStack_200 = 1;
              uStack_180 = uVar2;
              func_0x00010bfa8600(ppuVar5);
              _objc_release(ppuVar6);
              _objc_release(uVar8);
              _objc_release(ppuVar5);
              _objc_release(uStack_180);
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
            } while (ppuVar4 != ppuVar9);
            ppuVar4 = ppuVar1;
            func_0x00010bf52a60();
          } while (ppuVar4 != (undefined **)0x0);
        }
        _objc_release(ppuVar1);
        puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d0 = 0xc2000000;
        pcStack_1c8 = FUN_106a70650;
        puStack_1c0 = &UNK_110851b50;
        unaff_x21 = &puStack_1d8;
        _objc_copyWeak(auStack_1a8,lStack_1f0 + 0x38);
        ppuVar1 = ppuStack_1e0;
        puStack_1b0 = &uStack_128;
        _objc_retain(ppuStack_1e0);
        ppuStack_1b8 = ppuVar1;
        func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_1d8);
        (**(code **)(*(long *)(lStack_1f0 + 0x30) + 0x10))();
        _objc_release(ppuStack_1b8);
        _objc_destroyWeak(auStack_1a8);
        __Block_object_dispose(&uStack_128,8);
        _objc_release(uVar2);
      }
      _objc_release(ppuVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
  }
  _objc_release();
  ppuVar1 = ppuStack_1e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x21 + 6);
    uVar2 = 8;
    __Block_object_dispose(&uStack_128);
    __Unwind_Resume();
    pcStack_208 = FUN_106a705b8;
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_106a70630;
    puStack_230 = &UNK_11084a858;
    puVar11 = ppuVar1[5];
    puVar10 = ppuVar1[4];
    uStack_218 = uVar2;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    puStack_228 = puVar10;
    puStack_220 = puVar11;
    func_0x000100162d98("APPSTORE",&puStack_248);
    _objc_release(puStack_228);
    return;
  }
  return;
}



/* Entry: 106a705b8; end: 106a7062f;  */

void FUN_106a705b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a70630;
  puStack_30 = &UNK_11084a858;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_18 = param_2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  uStack_20 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106a70630; end: 106a7064f;  */

void FUN_106a70630(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x30) == 2) {
    uVar1 = *(undefined1 *)(lVar2 + 0x18);
  }
  *(undefined1 *)(lVar2 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106a70650; end: 106a706a3;  */

void FUN_106a70650(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01')) &&
     (*(long *)(lVar1 + 0x400) == *(long *)(param_1 + 0x20))) {
    *(undefined1 *)(lVar1 + 0x3f0) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106a706a4; end: 106a70a2f; -[SCSpotlightPlaybackManager switchToSectionKey:] */

undefined8 * FUN_106a706a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar21;
  undefined8 *unaff_x26;
  bool bVar22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar23;
  long lVar24;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_430;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  ulong *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_300;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 *puStack_290;
  uint uStack_284;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar17 = param_1[0x8c];
  puStack_138 = param_1;
  _objc_retain(lVar17);
  puVar6 = &uStack_130;
  puVar10 = auStack_f0;
  puVar15 = (undefined8 *)0x10;
  lVar23 = lVar17;
  func_0x00010bf52a60();
  if (lVar23 != 0) {
    unaff_x28 = (undefined8 *)*puStack_120;
    do {
      lVar16 = 0;
      do {
        if ((undefined8 *)*puStack_120 != unaff_x28) {
          _objc_enumerationMutation(lVar17);
        }
        unaff_x23 = *(undefined8 **)(lStack_128 + lVar16 * 8);
        puVar6 = unaff_x23;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined8 *)0x0) {
          puVar10 = param_3;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x23;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = puVar10;
          func_0x00010c071f40(puVar10,param_2,unaff_x26);
          _objc_release(unaff_x26);
          _objc_release(puVar10);
          _objc_release(puVar6);
          unaff_x24 = puVar6;
          if ((int)unaff_x27 != 0) {
            _objc_retain(unaff_x23);
            _objc_release(param_3);
            param_3 = unaff_x23;
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar23 != lVar16);
      puVar6 = &uStack_130;
      puVar10 = auStack_f0;
      puVar15 = (undefined8 *)0x10;
      lVar23 = lVar17;
      func_0x00010bf52a60();
    } while (lVar23 != 0);
  }
  _objc_release(lVar17);
  puVar3 = puStack_138;
  puVar19 = puStack_138;
  func_0x00010bf5ff00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = (undefined8 *)0x0;
  if (puVar21 == (undefined8 *)0x0) {
LAB_106a709b0:
    puVar21 = (undefined8 *)0x0;
  }
  else {
    puVar21 = param_3;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined8 *)0x0;
    if (puVar21 == (undefined8 *)0x0) goto LAB_106a709b0;
    puVar5 = param_3;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar19;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar5;
    puVar6 = unaff_x23;
    func_0x00010c071f40();
    _objc_release(unaff_x23);
    _objc_release(puVar5);
    if (((ulong)unaff_x24 & 1) == 0) {
      uVar11 = puVar3[0x58];
      unaff_x23 = puVar19;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar11,param_2,unaff_x23);
      if ((uVar11 & 1) == 0) {
        puVar5 = (undefined8 *)puVar3[0x58];
        unaff_x24 = param_3;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(puVar5,param_2,unaff_x24);
        _objc_release(unaff_x24);
      }
      else {
        puVar5 = (undefined8 *)0x1;
      }
      _objc_release(unaff_x23);
      lVar23 = puVar3[0x15];
      puVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = (undefined8 *)(ulong)(lVar23 != 0);
      _objc_release();
      lVar17 = puVar3[0x8c];
      func_0x00010bf529e0();
      if (lVar17 != 0) {
        unaff_x23 = (undefined8 *)0x0;
        do {
          puVar21 = (undefined8 *)puVar3[0x8c];
          puVar6 = unaff_x23;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = puVar21;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar21);
          if (unaff_x24 != (undefined8 *)0x0) {
            puVar21 = param_3;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x24;
            puVar6 = puVar21;
            func_0x00010c071ae0();
            _objc_release(puVar21);
            if (((ulong)unaff_x26 & 1) != 0) {
              func_0x00010bf04720(puVar3[0x29]);
              puVar21 = (undefined8 *)0x1;
              puVar10 = (undefined8 *)(ulong)((uint)(lVar23 != 0) & (uint)puVar5);
              puVar15 = (undefined8 *)0x1;
              puVar6 = unaff_x23;
              func_0x00010bea3320(puVar3);
              _objc_release(unaff_x24);
              goto LAB_106a709b4;
            }
          }
          _objc_release(unaff_x24);
          unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
          puVar21 = (undefined8 *)puVar3[0x8c];
          func_0x00010bf529e0();
        } while (unaff_x23 < puVar21);
      }
      goto LAB_106a709b0;
    }
    puVar21 = (undefined8 *)0x1;
  }
LAB_106a709b4:
  _objc_release(puVar19);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar21;
  }
  ___stack_chk_fail();
  puStack_160 = puVar3;
  pcStack_148 = FUN_106a70a30;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  puVar12 = puVar6;
  puVar14 = puVar10;
  puStack_2a8 = param_3;
  puStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = puVar21;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar19;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  if (puVar6 != (undefined8 *)puVar1[0x93]) {
    puVar2 = (undefined8 *)puVar1[0x8c];
    func_0x00010bf529e0();
    puStack_2a8 = puVar1;
    puVar5 = puVar10;
    unaff_x23 = puVar15;
    unaff_x24 = puVar6;
    if (puVar6 < puVar2) {
      puVar3 = (undefined8 *)puVar1[0x8c];
      func_0x00010c0dfd40(puVar3,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = puVar1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      puVar1[0x93] = puVar6;
      uVar18 = puVar1[0x1d];
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar18,param_2,puVar4);
      _objc_release(puVar4);
      puVar5 = puVar3;
      func_0x00010c155f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187320(puVar1[0x29],param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = (undefined8 *)puVar1[0x13];
      func_0x00010c0e00e0(puVar5,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined8 *)0x0) {
        puVar19 = puVar1;
        func_0x00010be17c20(puVar1,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar5);
        puVar19 = puVar5;
      }
      _objc_release(puVar5);
      puVar21 = (undefined8 *)puVar1[0x2d];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = puVar21;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x26;
      func_0x00010c098520();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x24;
      func_0x00010bf926c0();
      if (((int)puVar6 == 0) || (puVar19 != (undefined8 *)0x0)) {
        _objc_release(unaff_x24);
        _objc_release(unaff_x26);
        _objc_release(puVar21);
      }
      else {
        puVar6 = puVar1;
        func_0x00010bfa0520();
        _objc_release(unaff_x24);
        _objc_release(unaff_x26);
        _objc_release(puVar21);
        if (puVar6 == (undefined8 *)0x7fffffffffffffff) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          puVar6 = puVar1;
          func_0x00010bfa0520(puVar1);
          puVar19 = puVar1;
          func_0x00010be17c20(puVar1,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      if (((ulong)puVar10 & 1) == 0) {
        puVar6 = puVar3;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = puVar1[0x55];
        puVar1[0x55] = puVar6;
        _objc_release(uVar18);
        puVar6 = puVar1;
        func_0x00010be6da00();
        _objc_retainAutoreleasedReturnValue();
        puStack_280 = puVar6;
        puStack_278 = unaff_x28;
        func_0x00010c1d0640(puVar1[0x14],param_2,puVar6,unaff_x28);
        puVar6 = (undefined8 *)puVar1[0x14];
        func_0x00010c0e00e0(puVar6,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
        if (puVar6 != (undefined8 *)0x0) {
          unaff_x26 = puVar6;
        }
        _objc_retain(unaff_x26);
        _objc_release(puVar6);
        unaff_x27 = (undefined8 *)puVar1[0x2d];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = unaff_x27;
        func_0x00010c24afa0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar21;
        func_0x00010c098520();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x24;
        func_0x00010bf926c0();
        puVar6 = puVar19;
        puVar14 = unaff_x27;
        if ((int)puVar5 == 0) {
LAB_106a70e88:
          puStack_290 = puVar14;
          _objc_release(unaff_x24);
          _objc_release(puVar21);
          unaff_x24 = puStack_290;
LAB_106a70e9c:
          _objc_release(unaff_x24);
        }
        else {
          puVar5 = unaff_x26;
          func_0x00010bf529e0();
          _objc_release(unaff_x24);
          _objc_release(puVar21);
          _objc_release(unaff_x27);
          if (puVar5 != (undefined8 *)0x0) {
            unaff_x24 = (undefined8 *)puVar1[0x13];
            func_0x00010c0e00e0(unaff_x24,param_2,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar1;
            func_0x00010be162e0(puVar1,param_2,unaff_x26,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            puVar14 = puVar5;
            func_0x00010bf529e0();
            unaff_x26 = puVar5;
            if (puVar14 != (undefined8 *)0x0) {
              puVar6 = puVar5;
              puStack_290 = unaff_x24;
              uStack_284 = (uint)puVar10;
              func_0x00010bf529e0();
              if (puVar6 != (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
                do {
                  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  puVar10 = puVar5;
                  func_0x00010c0dfd40(puVar5,param_2,puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar21 = puVar10;
                  func_0x000107d005a8();
                  func_0x00010c0df880(puVar4,param_2,puVar21);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar10);
                  puVar7 = puVar4;
                  func_0x00010c2827c0();
                  if (puVar7 != (undefined *)0x0) {
                    puVar21 = (undefined8 *)puVar1[0x16];
                    func_0x00010c0e00e0(puVar21,param_2,puVar4);
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar21;
                    func_0x00010bfa4340();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x27 = puVar3;
                    func_0x00010bfa4340();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(puVar10);
                    _objc_release(puVar21);
                    if (puVar10 != unaff_x27) {
                      func_0x00010c1d0640(puVar1[0x16],param_2,puVar3,puVar4);
                    }
                  }
                  _objc_release(puVar4);
                  puVar6 = (undefined8 *)((long)puVar6 + 1);
                  puVar10 = puVar5;
                  func_0x00010bf529e0();
                } while (puVar6 < puVar10);
              }
              puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar21 = puVar5;
              func_0x00010c0dfd40(puVar5,param_2,0);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar21;
              func_0x000107d005a8();
              func_0x00010c0df880(puVar6,param_2,puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = (undefined8 *)(ulong)uStack_284;
              unaff_x24 = puVar19;
              puVar14 = puStack_290;
              goto LAB_106a70e88;
            }
            goto LAB_106a70e9c;
          }
        }
        puVar5 = unaff_x26;
        func_0x00010bf529e0();
        unaff_x28 = puStack_278;
        if (puVar5 == (undefined8 *)0x0) {
          *(undefined1 *)(puVar1 + 0x56) = 1;
          *(undefined1 *)((long)puVar1 + 0xb9) = 1;
          func_0x00010be18960(puVar1);
        }
        else {
          uStack_284 = (uint)puVar10;
          *(undefined1 *)((long)puVar1 + 0xb9) = 0;
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          _objc_retain(unaff_x26);
          puVar10 = unaff_x26;
          func_0x00010bf52a60(unaff_x26,param_2,&uStack_270,auStack_230,0x10);
          if (puVar10 == (undefined8 *)0x0) {
            puVar21 = (undefined8 *)0x0;
          }
          else {
            puStack_290 = (undefined8 *)CONCAT44(puStack_290._4_4_,(int)puVar15);
            lVar23 = *plStack_260;
            do {
              puVar15 = (undefined8 *)0x0;
              do {
                if (*plStack_260 != lVar23) {
                  _objc_enumerationMutation(unaff_x26);
                }
                unaff_x24 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar21 = *(undefined8 **)(lStack_268 + (long)puVar15 * 8);
                puVar5 = puVar21;
                func_0x000107d005a8(puVar21);
                func_0x00010c0df880(unaff_x24,param_2,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar6;
                func_0x00010c071f40(puVar6,param_2,unaff_x24);
                if ((int)puVar5 != 0) {
                  _objc_retain(puVar21);
                  _objc_release(unaff_x24);
                  goto LAB_106a70fa0;
                }
                _objc_release(unaff_x24);
                puVar15 = (undefined8 *)((long)puVar15 + 1);
              } while (puVar10 != puVar15);
              puVar10 = unaff_x26;
              func_0x00010bf52a60(unaff_x26,param_2,&uStack_270,auStack_230,0x10);
            } while (puVar10 != (undefined8 *)0x0);
            puVar21 = (undefined8 *)0x0;
LAB_106a70fa0:
            puVar15 = (undefined8 *)((ulong)puStack_290 & 0xffffffff);
            unaff_x27 = puVar10;
            unaff_x28 = puStack_278;
          }
          _objc_release(unaff_x26);
          puVar10 = puVar1;
          func_0x00010bdf6dc0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c288a00();
          _objc_release(puVar10);
          _objc_release(puVar21);
          puVar10 = (undefined8 *)(ulong)uStack_284;
        }
        _objc_release(unaff_x26);
        _objc_release(puStack_280);
        puVar19 = puVar6;
      }
      if (((int)puVar10 != 0) && ((int)puVar15 != 0)) {
        func_0x00010bea6160(puVar1,param_2,puVar19);
      }
      puVar5 = puVar1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      puVar14 = puVar5;
      func_0x00010c0ff7e0();
      _objc_release(unaff_x23);
      _objc_release(puVar5);
      _objc_release(puVar19);
      _objc_release(unaff_x28);
      puVar2 = puVar3;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_3c0;
  pcStack_298 = FUN_106a710c0;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)puVar2[0x2d];
  puVar1 = puVar12;
  puStack_2f0 = unaff_x28;
  puStack_2e8 = unaff_x27;
  puStack_2e0 = unaff_x26;
  puStack_2d8 = puVar21;
  puStack_2d0 = unaff_x24;
  puStack_2c8 = unaff_x23;
  puStack_2c0 = puVar5;
  puStack_2b8 = puVar19;
  puStack_2b0 = puVar3;
  ppuStack_2a0 = &puStack_150;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c098520();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010bf926c0();
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar8);
  if ((puVar12 == (undefined8 *)0x0) && (((ulong)puVar15 & 1) == 0)) {
    func_0x00010bf5fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
  }
  else {
    puVar5 = (undefined8 *)puVar2[0x8c];
    func_0x00010bf529e0();
    if (puVar5 <= puVar12) {
      puVar19 = (undefined8 *)0x0;
      goto LAB_106a712d0;
    }
    puVar15 = (undefined8 *)puVar2[0x8c];
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    if (puVar5 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
      puVar1 = puVar12;
      puVar12 = puVar5;
    }
    else {
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      lStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      puStack_3b0 = (ulong *)0x0;
      puVar15 = puVar2;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = (undefined8 *)0x0;
      puVar19 = puVar15;
      func_0x00010bf52a60();
      if (puVar19 != (undefined8 *)0x0) {
        unaff_x27 = (undefined8 *)*puStack_3b0;
        puVar6 = puVar19;
        do {
          unaff_x28 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_3b0 != unaff_x27) {
              _objc_enumerationMutation(puVar15);
            }
            puVar19 = *(undefined8 **)(lStack_3b8 + (long)unaff_x28 * 8);
            puVar10 = (undefined8 *)puVar2[0x16];
            func_0x00010c0e00e0(puVar10,param_2,puVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar10;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puVar21;
            puVar13 = puVar5;
            func_0x00010c071f40();
            _objc_release(puVar21);
            if (((ulong)unaff_x26 & 1) != 0) {
              _objc_retain(puVar19);
              _objc_release(puVar10);
              goto LAB_106a712b8;
            }
            _objc_release(puVar10);
            unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
          } while (puVar6 != unaff_x28);
          puVar14 = (undefined8 *)0x0;
          puVar6 = puVar15;
          puVar13 = &uStack_3c0;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined8 *)0x0);
      }
      puVar19 = (undefined8 *)0x0;
LAB_106a712b8:
      _objc_release(puVar15);
      puVar1 = puVar13;
      puVar12 = puVar5;
    }
  }
  _objc_release();
LAB_106a712d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  ___stack_chk_fail();
  pcStack_3c8 = FUN_106a71310;
  lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puStack_420 = unaff_x28;
  puStack_418 = unaff_x27;
  puStack_410 = unaff_x26;
  puStack_408 = puVar21;
  puStack_400 = puVar10;
  puStack_3f8 = puVar6;
  puStack_3f0 = puVar19;
  puStack_3e8 = puVar15;
  puStack_3e0 = puVar12;
  puStack_3d8 = puVar2;
  pppuStack_3d0 = &ppuStack_2a0;
  _objc_retain(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    lVar17 = puVar5[0x29];
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar17;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    lVar17 = lVar23;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    _objc_retain();
    puVar3 = &uStack_4f0;
    puVar14 = (undefined8 *)0x0;
    lVar16 = lVar17;
    func_0x00010bf52a60();
    if (lVar16 != 0) {
      bVar22 = false;
      lVar24 = *plStack_4e0;
      do {
        lVar20 = 0;
        do {
          if (*plStack_4e0 != lVar24) {
            _objc_enumerationMutation(lVar17);
          }
          uVar9 = puVar5[0x29];
          func_0x00010c1013e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar9;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar9 = uVar18;
          func_0x000107d005a8(uVar18);
          func_0x00010c0df880(puVar4,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 != (undefined *)0x0) {
            puVar7 = puVar4;
            func_0x00010c071f40(puVar4,param_2,puVar1);
            if (((ulong)puVar7 & 1) == 0 && !bVar22) {
              bVar22 = false;
            }
            else {
              puVar10 = (undefined8 *)puVar5[0x29];
              func_0x00010c1013e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar10;
              func_0x00010c064180();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
              if (puVar6 != (undefined8 *)0x0) {
                uVar9 = puVar5[0x29];
                func_0x00010c1013e0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar6;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = (undefined8 *)0x0;
                puVar3 = puVar10;
                func_0x00010c1ddd60(uVar9);
                _objc_release(puVar10);
                _objc_release(uVar9);
                _objc_release(puVar6);
                _objc_release(puVar4);
                _objc_release(uVar18);
                goto LAB_106a71544;
              }
              bVar22 = true;
            }
          }
          _objc_release(puVar4);
          _objc_release(uVar18);
          lVar20 = lVar20 + 1;
        } while (lVar16 != lVar20);
        puVar3 = &uStack_4f0;
        puVar14 = (undefined8 *)0x0;
        lVar16 = lVar17;
        func_0x00010bf52a60();
      } while (lVar16 != 0);
    }
LAB_106a71544:
    _objc_release(lVar17);
    _objc_release(lVar17);
    _objc_release(lVar23);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_430) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (((ulong)puVar14 & 1) != 0) {
    return puVar1;
  }
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined8 *)0x0) {
    uVar11 = puVar1[0x58];
    func_0x00010bf4b900(uVar11,param_2,puVar3);
    if ((uVar11 & 1) == 0) {
      func_0x00010befa120(puVar1[0x58],param_2,puVar3);
      puVar6 = puVar1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar10;
      func_0x00010c071f40();
      _objc_release(puVar10);
      if ((int)puVar15 == 0) {
        func_0x00010be18960(puVar1);
      }
      else {
        func_0x00010be4f960(puVar1,param_2,puVar6);
      }
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 106a70a30; end: 106a710bf; -[SCSpotlightPlaybackManager _setCurrentSectionKeyIndex:keepCurrentPlaylist:updateCurrentlyPlayingStory:] */

void FUN_106a70a30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x22;
  undefined8 *puVar17;
  undefined8 *unaff_x23;
  undefined8 *puVar18;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  bool bVar19;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar20;
  long lVar21;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_2f0;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  uint uStack_144;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  puVar1 = param_1;
  puVar18 = param_3;
  puVar3 = param_4;
  puStack_168 = unaff_x19;
  if (param_3 != (undefined8 *)param_1[0x93]) {
    puVar1 = (undefined8 *)param_1[0x8c];
    func_0x00010bf529e0();
    puStack_168 = param_1;
    unaff_x22 = param_4;
    unaff_x23 = param_5;
    unaff_x24 = param_3;
    if (param_3 < puVar1) {
      unaff_x20 = (undefined8 *)param_1[0x8c];
      func_0x00010c0dfd40(unaff_x20,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = param_1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      param_1[0x93] = param_3;
      uVar15 = param_1[0x1d];
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar15,param_2,puVar2);
      _objc_release(puVar2);
      puVar3 = unaff_x20;
      func_0x00010c155f60(unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187320(param_1[0x29],param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = (undefined8 *)param_1[0x13];
      func_0x00010c0e00e0(puVar3,param_2,unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined8 *)0x0) {
        unaff_x21 = param_1;
        func_0x00010be17c20(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar3);
        unaff_x21 = puVar3;
      }
      _objc_release(puVar3);
      unaff_x25 = (undefined8 *)param_1[0x2d];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x26;
      func_0x00010c098520();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = unaff_x24;
      func_0x00010bf926c0();
      if (((int)puVar3 == 0) || (unaff_x21 != (undefined8 *)0x0)) {
        _objc_release(unaff_x24);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
      }
      else {
        puVar3 = param_1;
        func_0x00010bfa0520();
        _objc_release(unaff_x24);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        if (puVar3 == (undefined8 *)0x7fffffffffffffff) {
          unaff_x21 = (undefined8 *)0x0;
        }
        else {
          puVar3 = param_1;
          func_0x00010bfa0520(param_1);
          unaff_x21 = param_1;
          func_0x00010be17c20(param_1,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      if (((ulong)param_4 & 1) == 0) {
        puVar3 = unaff_x20;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_1[0x55];
        param_1[0x55] = puVar3;
        _objc_release(uVar15);
        puVar3 = param_1;
        func_0x00010be6da00();
        _objc_retainAutoreleasedReturnValue();
        puStack_140 = puVar3;
        puStack_138 = unaff_x28;
        func_0x00010c1d0640(param_1[0x14],param_2,puVar3,unaff_x28);
        puVar3 = (undefined8 *)param_1[0x14];
        func_0x00010c0e00e0(puVar3,param_2,unaff_x20);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
        if (puVar3 != (undefined8 *)0x0) {
          unaff_x26 = puVar3;
        }
        _objc_retain(unaff_x26);
        _objc_release(puVar3);
        unaff_x27 = (undefined8 *)param_1[0x2d];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x27;
        func_0x00010c24afa0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x25;
        func_0x00010c098520();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = unaff_x24;
        func_0x00010bf926c0();
        puVar3 = unaff_x21;
        puVar18 = unaff_x27;
        if ((int)puVar1 == 0) {
LAB_106a70e88:
          puStack_150 = puVar18;
          _objc_release(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x24 = puStack_150;
LAB_106a70e9c:
          _objc_release(unaff_x24);
        }
        else {
          puVar1 = unaff_x26;
          func_0x00010bf529e0();
          _objc_release(unaff_x24);
          _objc_release(unaff_x25);
          _objc_release(unaff_x27);
          if (puVar1 != (undefined8 *)0x0) {
            unaff_x24 = (undefined8 *)param_1[0x13];
            func_0x00010c0e00e0(unaff_x24,param_2,unaff_x20);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_1;
            func_0x00010be162e0(param_1,param_2,unaff_x26,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            puVar18 = puVar1;
            func_0x00010bf529e0();
            unaff_x26 = puVar1;
            if (puVar18 != (undefined8 *)0x0) {
              puVar3 = puVar1;
              puStack_150 = unaff_x24;
              uStack_144 = (uint)param_4;
              func_0x00010bf529e0();
              if (puVar3 != (undefined8 *)0x0) {
                puVar3 = (undefined8 *)0x0;
                do {
                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  puVar18 = puVar1;
                  func_0x00010c0dfd40(puVar1,param_2,puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar18;
                  func_0x000107d005a8();
                  func_0x00010c0df880(puVar2,param_2,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar18);
                  puVar4 = puVar2;
                  func_0x00010c2827c0();
                  if (puVar4 != (undefined *)0x0) {
                    puVar5 = (undefined8 *)param_1[0x16];
                    func_0x00010c0e00e0(puVar5,param_2,puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    puVar18 = puVar5;
                    func_0x00010bfa4340();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x27 = unaff_x20;
                    func_0x00010bfa4340();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(puVar18);
                    _objc_release(puVar5);
                    if (puVar18 != unaff_x27) {
                      func_0x00010c1d0640(param_1[0x16],param_2,unaff_x20,puVar2);
                    }
                  }
                  _objc_release(puVar2);
                  puVar3 = (undefined8 *)((long)puVar3 + 1);
                  puVar18 = puVar1;
                  func_0x00010bf529e0();
                } while (puVar3 < puVar18);
              }
              puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
              unaff_x25 = puVar1;
              func_0x00010c0dfd40(puVar1,param_2,0);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = unaff_x25;
              func_0x000107d005a8();
              func_0x00010c0df880(puVar3,param_2,puVar1);
              _objc_retainAutoreleasedReturnValue();
              param_4 = (undefined8 *)(ulong)uStack_144;
              unaff_x24 = unaff_x21;
              puVar18 = puStack_150;
              goto LAB_106a70e88;
            }
            goto LAB_106a70e9c;
          }
        }
        puVar1 = unaff_x26;
        func_0x00010bf529e0();
        unaff_x28 = puStack_138;
        if (puVar1 == (undefined8 *)0x0) {
          *(undefined1 *)(param_1 + 0x56) = 1;
          *(undefined1 *)((long)param_1 + 0xb9) = 1;
          func_0x00010be18960(param_1);
        }
        else {
          uStack_144 = (uint)param_4;
          *(undefined1 *)((long)param_1 + 0xb9) = 0;
          lStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          _objc_retain(unaff_x26);
          puVar1 = unaff_x26;
          func_0x00010bf52a60(unaff_x26,param_2,&uStack_130,auStack_f0,0x10);
          if (puVar1 == (undefined8 *)0x0) {
            unaff_x25 = (undefined8 *)0x0;
          }
          else {
            puStack_150 = (undefined8 *)CONCAT44(puStack_150._4_4_,(int)param_5);
            lVar20 = *plStack_120;
            do {
              puVar18 = (undefined8 *)0x0;
              do {
                if (*plStack_120 != lVar20) {
                  _objc_enumerationMutation(unaff_x26);
                }
                unaff_x24 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
                unaff_x25 = *(undefined8 **)(lStack_128 + (long)puVar18 * 8);
                puVar5 = unaff_x25;
                func_0x000107d005a8(unaff_x25);
                func_0x00010c0df880(unaff_x24,param_2,puVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar3;
                func_0x00010c071f40(puVar3,param_2,unaff_x24);
                if ((int)puVar5 != 0) {
                  _objc_retain(unaff_x25);
                  _objc_release(unaff_x24);
                  goto LAB_106a70fa0;
                }
                _objc_release(unaff_x24);
                puVar18 = (undefined8 *)((long)puVar18 + 1);
              } while (puVar1 != puVar18);
              puVar1 = unaff_x26;
              func_0x00010bf52a60(unaff_x26,param_2,&uStack_130,auStack_f0,0x10);
            } while (puVar1 != (undefined8 *)0x0);
            unaff_x25 = (undefined8 *)0x0;
LAB_106a70fa0:
            param_5 = (undefined8 *)((ulong)puStack_150 & 0xffffffff);
            unaff_x27 = puVar1;
            unaff_x28 = puStack_138;
          }
          _objc_release(unaff_x26);
          puVar1 = param_1;
          func_0x00010bdf6dc0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c288a00();
          _objc_release(puVar1);
          _objc_release(unaff_x25);
          param_4 = (undefined8 *)(ulong)uStack_144;
        }
        _objc_release(unaff_x26);
        _objc_release(puStack_140);
        unaff_x21 = puVar3;
      }
      if (((int)param_4 != 0) && ((int)param_5 != 0)) {
        func_0x00010bea6160(param_1,param_2,unaff_x21);
      }
      unaff_x22 = param_1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = param_1;
      puVar3 = unaff_x22;
      func_0x00010c0ff7e0();
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      _objc_release(unaff_x28);
      puVar1 = unaff_x20;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_280;
  pcStack_158 = FUN_106a710c0;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)puVar1[0x2d];
  puVar12 = puVar18;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = unaff_x20;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c098520();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bf926c0();
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  if ((puVar18 == (undefined8 *)0x0) && (((ulong)puVar7 & 1) == 0)) {
    func_0x00010bf5fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
  }
  else {
    puVar6 = (undefined8 *)puVar1[0x8c];
    func_0x00010bf529e0();
    if (puVar6 <= puVar18) {
      puVar17 = (undefined8 *)0x0;
      goto LAB_106a712d0;
    }
    puVar7 = (undefined8 *)puVar1[0x8c];
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar6 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
      puVar12 = puVar18;
      puVar18 = puVar6;
    }
    else {
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      puStack_270 = (undefined8 *)0x0;
      puVar7 = puVar1;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined8 *)0x0;
      puVar18 = puVar7;
      func_0x00010bf52a60();
      if (puVar18 != (undefined8 *)0x0) {
        unaff_x27 = (undefined8 *)*puStack_270;
        puVar5 = puVar18;
        do {
          unaff_x28 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_270 != unaff_x27) {
              _objc_enumerationMutation(puVar7);
            }
            puVar17 = *(undefined8 **)(lStack_278 + (long)unaff_x28 * 8);
            puVar8 = (undefined8 *)puVar1[0x16];
            func_0x00010c0e00e0(puVar8,param_2,puVar17);
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar8;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            puVar13 = puVar6;
            func_0x00010c071f40();
            _objc_release(unaff_x25);
            if (((ulong)unaff_x26 & 1) != 0) {
              _objc_retain(puVar17);
              _objc_release(puVar8);
              goto LAB_106a712b8;
            }
            _objc_release(puVar8);
            unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
          } while (puVar5 != unaff_x28);
          puVar3 = (undefined8 *)0x0;
          puVar5 = puVar7;
          puVar13 = &uStack_280;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined8 *)0x0);
      }
      puVar17 = (undefined8 *)0x0;
LAB_106a712b8:
      _objc_release(puVar7);
      puVar12 = puVar13;
      puVar18 = puVar6;
    }
  }
  _objc_release();
LAB_106a712d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_106a71310;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puStack_2e0 = unaff_x28;
  puStack_2d8 = unaff_x27;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  puStack_2c0 = puVar8;
  puStack_2b8 = puVar5;
  puStack_2b0 = puVar17;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar18;
  puStack_298 = puVar1;
  ppuStack_290 = &puStack_160;
  _objc_retain(puVar12);
  if (puVar12 != (undefined8 *)0x0) {
    lVar9 = puVar6[0x29];
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar9;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar20;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    _objc_retain();
    puVar13 = &uStack_3b0;
    puVar3 = (undefined8 *)0x0;
    lVar10 = lVar9;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      bVar19 = false;
      lVar21 = *plStack_3a0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_3a0 != lVar21) {
            _objc_enumerationMutation(lVar9);
          }
          uVar11 = puVar6[0x29];
          func_0x00010c1013e0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar11;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar11 = uVar15;
          func_0x000107d005a8(uVar15);
          func_0x00010c0df880(puVar2,param_2,uVar11);
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 != (undefined *)0x0) {
            puVar4 = puVar2;
            func_0x00010c071f40(puVar2,param_2,puVar12);
            if (((ulong)puVar4 & 1) == 0 && !bVar19) {
              bVar19 = false;
            }
            else {
              puVar3 = (undefined8 *)puVar6[0x29];
              func_0x00010c1013e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar3;
              func_0x00010c064180();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              if (puVar1 != (undefined8 *)0x0) {
                uVar11 = puVar6[0x29];
                func_0x00010c1013e0();
                _objc_retainAutoreleasedReturnValue();
                puVar18 = puVar1;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = (undefined8 *)0x0;
                puVar13 = puVar18;
                func_0x00010c1ddd60(uVar11);
                _objc_release(puVar18);
                _objc_release(uVar11);
                _objc_release(puVar1);
                _objc_release(puVar2);
                _objc_release(uVar15);
                goto LAB_106a71544;
              }
              bVar19 = true;
            }
          }
          _objc_release(puVar2);
          _objc_release(uVar15);
          lVar16 = lVar16 + 1;
        } while (lVar10 != lVar16);
        puVar13 = &uStack_3b0;
        puVar3 = (undefined8 *)0x0;
        lVar10 = lVar9;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
LAB_106a71544:
    _objc_release(lVar9);
    _objc_release(lVar9);
    _objc_release(lVar20);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar13 != (undefined8 *)0x0) {
    uVar14 = puVar12[0x58];
    func_0x00010bf4b900(uVar14,param_2,puVar13);
    if ((uVar14 & 1) == 0) {
      func_0x00010befa120(puVar12[0x58],param_2,puVar13);
      puVar3 = puVar12;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar1;
      func_0x00010c071f40();
      _objc_release(puVar1);
      if ((int)puVar18 == 0) {
        func_0x00010be18960(puVar12);
      }
      else {
        func_0x00010be4f960(puVar12,param_2,puVar3);
      }
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 106a710c0; end: 106a7130f; -[SCSpotlightPlaybackManager _firstDedupeFpInSectionWithIndex:] */

void FUN_106a710c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  bool bVar17;
  long unaff_x27;
  undefined8 *unaff_x28;
  long lVar18;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined8 *puStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar13 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)param_1[0x2d];
  puVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c098520();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010bf926c0();
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((param_3 == (undefined8 *)0x0) && (((ulong)puVar3 & 1) == 0)) {
    func_0x00010bf5fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
  }
  else {
    puVar1 = (undefined8 *)param_1[0x8c];
    func_0x00010bf529e0();
    if (puVar1 <= param_3) {
      puVar16 = (undefined8 *)0x0;
      goto LAB_106a712d0;
    }
    puVar3 = (undefined8 *)param_1[0x8c];
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      puVar4 = param_3;
      param_3 = puVar1;
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar3 = param_1;
      func_0x00010bf5fae0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = 0;
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        unaff_x27 = *plStack_120;
        puVar2 = puVar4;
        do {
          unaff_x28 = (undefined8 *)0x0;
          do {
            if (*plStack_120 != unaff_x27) {
              _objc_enumerationMutation(puVar3);
            }
            puVar16 = *(undefined8 **)(lStack_128 + (long)unaff_x28 * 8);
            puVar12 = (undefined8 *)param_1[0x16];
            func_0x00010c0e00e0(puVar12,param_2,puVar16);
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar12;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            puVar13 = puVar1;
            func_0x00010c071f40();
            _objc_release(unaff_x25);
            if (((ulong)unaff_x26 & 1) != 0) {
              _objc_retain(puVar16);
              _objc_release(puVar12);
              goto LAB_106a712b8;
            }
            _objc_release(puVar12);
            unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
          } while (puVar2 != unaff_x28);
          param_4 = 0;
          puVar2 = puVar3;
          puVar13 = &uStack_130;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined8 *)0x0);
      }
      puVar16 = (undefined8 *)0x0;
LAB_106a712b8:
      _objc_release(puVar3);
      puVar4 = puVar13;
      param_3 = puVar1;
    }
  }
  _objc_release();
LAB_106a712d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106a71310;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar4;
  puStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = puVar12;
  puStack_168 = puVar2;
  puStack_160 = puVar16;
  puStack_158 = puVar3;
  puStack_150 = param_3;
  puStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = puVar1[0x29];
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain();
    puVar13 = &uStack_260;
    param_4 = 0;
    lVar7 = lVar5;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      bVar17 = false;
      lVar18 = *plStack_250;
      do {
        lVar15 = 0;
        do {
          if (*plStack_250 != lVar18) {
            _objc_enumerationMutation(lVar5);
          }
          uVar8 = puVar1[0x29];
          func_0x00010c1013e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar8 = uVar9;
          func_0x000107d005a8(uVar9);
          func_0x00010c0df880(puVar10,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 != (undefined *)0x0) {
            puVar11 = puVar10;
            func_0x00010c071f40(puVar10,param_2,puVar4);
            if (((ulong)puVar11 & 1) == 0 && !bVar17) {
              bVar17 = false;
            }
            else {
              puVar12 = (undefined8 *)puVar1[0x29];
              func_0x00010c1013e0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar12;
              func_0x00010c064180();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              if (puVar2 != (undefined8 *)0x0) {
                uVar8 = puVar1[0x29];
                func_0x00010c1013e0();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar2;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                param_4 = 0;
                puVar13 = puVar12;
                func_0x00010c1ddd60(uVar8);
                _objc_release(puVar12);
                _objc_release(uVar8);
                _objc_release(puVar2);
                _objc_release(puVar10);
                _objc_release(uVar9);
                goto LAB_106a71544;
              }
              bVar17 = true;
            }
          }
          _objc_release(puVar10);
          _objc_release(uVar9);
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        puVar13 = &uStack_260;
        param_4 = 0;
        lVar7 = lVar5;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
LAB_106a71544:
    _objc_release(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  if ((param_4 & 1) == 0) {
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 != (undefined8 *)0x0) {
      uVar14 = puVar4[0x58];
      func_0x00010bf4b900(uVar14,param_2,puVar13);
      if ((uVar14 & 1) == 0) {
        func_0x00010befa120(puVar4[0x58],param_2,puVar13);
        puVar2 = puVar4;
        func_0x00010bf5ff00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar2;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar12;
        func_0x00010c071f40();
        _objc_release(puVar12);
        if ((int)puVar3 == 0) {
          func_0x00010be18960(puVar4);
        }
        else {
          func_0x00010be4f960(puVar4,param_2,puVar2);
        }
        _objc_release(puVar2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar13);
    return;
  }
  return;
}



/* Entry: 106a71310; end: 106a715a3; -[SCSpotlightPlaybackManager _setOperaToPlayStoryWithDedupeFp:] */

void FUN_106a71310(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined8 *)0x0) {
    lVar1 = *(long *)(param_1 + 0x148);
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    puVar8 = &uStack_130;
    param_4 = 0;
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      bVar14 = false;
      lVar15 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != lVar15) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x148);
          func_0x00010c1013e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar4 = uVar5;
          func_0x000107d005a8(uVar5);
          func_0x00010c0df880(puVar6,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            puVar7 = puVar6;
            func_0x00010c071f40(puVar6,param_2,param_3);
            if (((ulong)puVar7 & 1) == 0 && !bVar14) {
              bVar14 = false;
            }
            else {
              puVar8 = *(undefined8 **)(param_1 + 0x148);
              func_0x00010c1013e0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010c064180();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              if (puVar9 != (undefined8 *)0x0) {
                uVar4 = *(undefined8 *)(param_1 + 0x148);
                func_0x00010c1013e0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar9;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                param_4 = 0;
                puVar8 = puVar10;
                func_0x00010c1ddd60(uVar4);
                _objc_release(puVar10);
                _objc_release(uVar4);
                _objc_release(puVar9);
                _objc_release(puVar6);
                _objc_release(uVar5);
                goto LAB_106a71544;
              }
              bVar14 = true;
            }
          }
          _objc_release(puVar6);
          _objc_release(uVar5);
          lVar13 = lVar13 + 1;
        } while (lVar3 != lVar13);
        puVar8 = &uStack_130;
        param_4 = 0;
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
LAB_106a71544:
    _objc_release(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((param_4 & 1) == 0) {
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined8 *)0x0) {
      uVar11 = param_3[0x58];
      func_0x00010bf4b900(uVar11,param_2,puVar8);
      if ((uVar11 & 1) == 0) {
        func_0x00010befa120(param_3[0x58],param_2,puVar8);
        puVar9 = param_3;
        func_0x00010bf5ff00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010c071f40();
        _objc_release(puVar10);
        if ((int)puVar12 == 0) {
          func_0x00010be18960(param_3);
        }
        else {
          func_0x00010be4f960(param_3,param_2,puVar9);
        }
        _objc_release(puVar9);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 106a715a4; end: 106a71667; -[SCSpotlightPlaybackManager _handleSection:hasMoreStories:] */

void FUN_106a715a4(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_4 & 1) != 0) {
    return;
  }
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x2c0);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x2c0),param_2,param_3);
      lVar2 = param_1;
      func_0x00010bf5ff00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c071f40();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        func_0x00010be18960(param_1);
      }
      else {
        func_0x00010be4f960(param_1,param_2,lVar2);
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a71668; end: 106a717b7; -[SCSpotlightPlaybackManager _lockInPlaylistForSectionKey:] */

void FUN_106a71668(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfa4340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf00a20(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a717b8; end: 106a71873;  */

void FUN_106a717b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x4c0);
    *(undefined8 *)(param_1 + 0x4c0) = param_2;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010c089a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd700(param_1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf5fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4f940(param_1);
    _objc_release(lVar2);
    func_0x00010be18960(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a71874; end: 106a71877; -[SCSpotlightPlaybackManager didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106a71874(void)

{
  return;
}



/* Entry: 106a71878; end: 106a7187b; -[SCSpotlightPlaybackManager contextOperaPluginWillPresent:presentationContext:] */

void FUN_106a71878(void)

{
  return;
}



/* Entry: 106a7187c; end: 106a7187f; -[SCSpotlightPlaybackManager contextOperaPluginWillDismiss:] */

void FUN_106a7187c(void)

{
  return;
}



/* Entry: 106a71880; end: 106a71903; -[SCSpotlightPlaybackManager contextOperaPluginReplyViewWillPresent:] */

void FUN_106a71880(ulong param_1)

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
    func_0x00010c0ff800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a71904; end: 106a71987; -[SCSpotlightPlaybackManager contextOperaPluginReplyViewDidDismiss:] */

void FUN_106a71904(ulong param_1)

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
    func_0x00010c0ff800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a71988; end: 106a7198b; -[SCSpotlightPlaybackManager _presentDebugViewControllerForStoryId:debugHtml:] */

void FUN_106a71988(void)

{
  return;
}



/* Entry: 106a7198c; end: 106a71993; -[SCSpotlightPlaybackManager _showStoryDebugViewCallback] */

undefined8 FUN_106a7198c(void)

{
  return 0;
}



/* Entry: 106a71994; end: 106a71997; -[SCSpotlightPlaybackManager discoverFeedDebugViewControllerNeedsToDismiss:animated:] */

void FUN_106a71994(void)

{
  return;
}



/* Entry: 106a71998; end: 106a71a1b; -[SCSpotlightPlaybackManager spotlightOperaUserInteractionDidEngage:] */

void FUN_106a71998(ulong param_1)

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
    func_0x00010c0ff840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a71a1c; end: 106a71a9f; -[SCSpotlightPlaybackManager spotlightOperaUserInteractionDidDisengage:] */

void FUN_106a71a1c(ulong param_1)

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
    func_0x00010c0ff840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a71aa0; end: 106a71aeb; -[SCSpotlightPlaybackManager tiledInterstitialDidBecomeVisible] */

void FUN_106a71aa0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x3f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x400);
    *(undefined8 *)(param_1 + 0x400) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf3b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 1000),PTR_s_clearInterstitialWithCompletionQ_1125ac720,0,
               &PTR___NSConcreteGlobalBlock_110959118);
    return;
  }
  return;
}



/* Entry: 106a71aec; end: 106a71aef;  */

void FUN_106a71aec(void)

{
  return;
}



/* Entry: 106a71af0; end: 106a71ff3; -[SCSpotlightPlaybackManager tiledInterstitialDidSelectCandidate:unchosenDedupeFps:] */

/* WARNING: Possible PIC construction at 0x000106a71f74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a71f78) */

void FUN_106a71af0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if ((*(byte *)(param_1 + 0x448) & 1) == 0) {
    lVar10 = param_1;
    func_0x00010bf5fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar10 = param_3;
    func_0x00010bf2f760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar10 = param_3;
    func_0x00010c23c6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = param_3;
    func_0x00010bf2f760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar10);
    lVar3 = param_3;
    func_0x00010c23c6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(*(undefined8 *)(lVar13 * 8));
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf4b900();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(puVar1);
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      lVar10 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar1 = puVar2;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar14 = *(undefined8 *)((long)puVar12 * 8);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar7;
        func_0x00010c0fed80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        lVar8 = param_1;
        func_0x00010bf5ff00(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bedd280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(lVar8);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 != 0) {
          func_0x00010c259740(uVar14);
          func_0x00010c0df880(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          func_0x00010c1d0640(puVar6);
          func_0x00010befa120(puVar4);
          _objc_release(puVar9);
        }
        _objc_release(lVar3);
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    func_0x00010c066720(*(undefined8 *)(param_1 + 0x38));
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_1 + 0x430);
    *(undefined **)(param_1 + 0x430) = puVar5;
    _objc_release(uVar11);
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_1 + 0x438);
    *(undefined **)(param_1 + 0x438) = puVar6;
    _objc_release(uVar11);
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_1 + 0x440);
    *(undefined **)(param_1 + 0x440) = puVar4;
    _objc_release(uVar11);
    func_0x00010bf2f760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740();
    func_0x00010c0674a0(param_3);
  }
  else {
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010becbe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106a71ff4; end: 106a71ffb; -[SCSpotlightPlaybackManager tiledInterstitialDidSelectStoryWithDedupeFp:unchosenDedupeFps:] */

void FUN_106a71ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010becbe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tiledInterstitialDidSelectStory_112590948,param_3,param_4,0);
  return;
}



/* Entry: 106a71ffc; end: 106a72abb; -[SCSpotlightPlaybackManager _tiledInterstitialDidSelectStoryWithDedupeFp:unchosenDedupeFps:insertionStrategy:] */

/* WARNING: Possible PIC construction at 0x000106a72060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a72064) */
/* WARNING: Removing unreachable block (ram,0x000106a7208c) */
/* WARNING: Removing unreachable block (ram,0x000106a72080) */
/* WARNING: Removing unreachable block (ram,0x000106a720d0) */
/* WARNING: Removing unreachable block (ram,0x000106a72144) */
/* WARNING: Removing unreachable block (ram,0x000106a7223c) */
/* WARNING: Removing unreachable block (ram,0x000106a7214c) */
/* WARNING: Removing unreachable block (ram,0x000106a72264) */
/* WARNING: Removing unreachable block (ram,0x000106a7216c) */
/* WARNING: Removing unreachable block (ram,0x000106a7226c) */
/* WARNING: Removing unreachable block (ram,0x000106a72190) */
/* WARNING: Removing unreachable block (ram,0x000106a721ac) */
/* WARNING: Removing unreachable block (ram,0x000106a72274) */
/* WARNING: Removing unreachable block (ram,0x000106a72278) */
/* WARNING: Removing unreachable block (ram,0x000106a72294) */
/* WARNING: Removing unreachable block (ram,0x000106a723c4) */
/* WARNING: Removing unreachable block (ram,0x000106a722cc) */
/* WARNING: Removing unreachable block (ram,0x000106a723dc) */
/* WARNING: Removing unreachable block (ram,0x000106a72464) */
/* WARNING: Removing unreachable block (ram,0x000106a7244c) */
/* WARNING: Removing unreachable block (ram,0x000106a724b8) */
/* WARNING: Removing unreachable block (ram,0x000106a724e4) */
/* WARNING: Removing unreachable block (ram,0x000106a72600) */
/* WARNING: Removing unreachable block (ram,0x000106a72644) */
/* WARNING: Removing unreachable block (ram,0x000106a72690) */
/* WARNING: Removing unreachable block (ram,0x000106a72680) */
/* WARNING: Removing unreachable block (ram,0x000106a72694) */
/* WARNING: Removing unreachable block (ram,0x000106a726e8) */
/* WARNING: Removing unreachable block (ram,0x000106a726f4) */
/* WARNING: Removing unreachable block (ram,0x000106a72734) */
/* WARNING: Removing unreachable block (ram,0x000106a727a0) */
/* WARNING: Removing unreachable block (ram,0x000106a727cc) */
/* WARNING: Removing unreachable block (ram,0x000106a727e8) */
/* WARNING: Removing unreachable block (ram,0x000106a72824) */
/* WARNING: Removing unreachable block (ram,0x000106a7283c) */
/* WARNING: Removing unreachable block (ram,0x000106a7282c) */
/* WARNING: Removing unreachable block (ram,0x000106a7284c) */
/* WARNING: Removing unreachable block (ram,0x000106a727fc) */
/* WARNING: Removing unreachable block (ram,0x000106a72850) */
/* WARNING: Removing unreachable block (ram,0x000106a728bc) */
/* WARNING: Removing unreachable block (ram,0x000106a728cc) */
/* WARNING: Removing unreachable block (ram,0x000106a728d0) */
/* WARNING: Removing unreachable block (ram,0x000106a728e0) */
/* WARNING: Removing unreachable block (ram,0x000106a728e8) */
/* WARNING: Removing unreachable block (ram,0x000106a72974) */
/* WARNING: Removing unreachable block (ram,0x000106a72924) */
/* WARNING: Removing unreachable block (ram,0x000106a72930) */
/* WARNING: Removing unreachable block (ram,0x000106a729ac) */
/* WARNING: Removing unreachable block (ram,0x000106a72944) */
/* WARNING: Removing unreachable block (ram,0x000106a72978) */
/* WARNING: Removing unreachable block (ram,0x000106a7298c) */
/* WARNING: Removing unreachable block (ram,0x000106a729a8) */
/* WARNING: Removing unreachable block (ram,0x000106a729b4) */
/* WARNING: Removing unreachable block (ram,0x000106a729f0) */
/* WARNING: Removing unreachable block (ram,0x000106a729fc) */
/* WARNING: Removing unreachable block (ram,0x000106a72a00) */
/* WARNING: Removing unreachable block (ram,0x000106a72a10) */
/* WARNING: Removing unreachable block (ram,0x000106a72a18) */
/* WARNING: Removing unreachable block (ram,0x000106a72a34) */
/* WARNING: Removing unreachable block (ram,0x000106a72a50) */
/* WARNING: Removing unreachable block (ram,0x000106a721f0) */
/* WARNING: Removing unreachable block (ram,0x000106a7221c) */
/* WARNING: Removing unreachable block (ram,0x000106a72238) */
/* WARNING: Removing unreachable block (ram,0x000106a722d4) */
/* WARNING: Removing unreachable block (ram,0x000106a722e4) */
/* WARNING: Removing unreachable block (ram,0x000106a722ec) */
/* WARNING: Removing unreachable block (ram,0x000106a7231c) */
/* WARNING: Removing unreachable block (ram,0x000106a72368) */
/* WARNING: Removing unreachable block (ram,0x000106a72ab8) */
/* WARNING: Removing unreachable block (ram,0x000106a723a0) */

void FUN_106a71ffc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x430);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_objectForKeyedSubscript__112615a50,puVar1);
  return;
}



/* Entry: 106a72abc; end: 106a72adb;  */

void FUN_106a72abc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x430),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106a72adc; end: 106a72ce7;  */

void FUN_106a72adc(undefined *param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 == 1) {
    func_0x00010bf529e0(param_1);
    func_0x00010bf529e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010bf52a60();
    if (puVar1 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar8 = (undefined1 *)0x0;
      lVar11 = *plStack_120;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010befa120(puVar9);
          puVar2 = param_2;
          func_0x00010bf529e0();
          if (puVar8 < puVar2) {
            puVar2 = param_2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9);
            _objc_release(puVar2);
            puVar8 = puVar8 + 1;
          }
          puVar12 = puVar12 + 1;
        } while (puVar1 != puVar12);
        puVar1 = param_1;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_1);
    puVar2 = param_2;
    func_0x00010bf529e0();
    if (puVar2 != puVar8) {
      puVar8 = param_2;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar9);
      _objc_release(puVar8);
    }
  }
  else {
    puVar9 = param_1;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_250;
  pcStack_138 = FUN_106a72ce8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar2 = puVar6;
  func_0x00010bf00a40();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain();
  puVar8 = auStack_208;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  puVar4 = puVar2;
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined *)*puStack_240;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if ((undefined *)*puStack_240 != puVar9) {
          _objc_enumerationMutation(puVar2);
        }
        lVar11 = *(long *)(lStack_248 + (long)puVar10 * 8);
        func_0x00010c259740();
        if (lVar11 == *(long *)(param_1 + 0x30)) goto LAB_106a72e64;
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar8 = auStack_208;
      puVar3 = puVar2;
      puVar7 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  func_0x00010c0d3c80();
  puVar9 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfed320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b20(puVar4);
  puVar10 = puVar4;
  func_0x00010bf51e00();
  puVar8 = *(undefined1 **)(param_1 + 0x28);
  puVar7 = (undefined8 *)puVar10;
  func_0x00010c28a4e0(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
LAB_106a72e64:
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_106a72eb4;
  puStack_290 = puVar10;
  puStack_288 = puVar9;
  puStack_280 = puVar4;
  puStack_278 = param_1;
  puStack_270 = puVar2;
  puStack_268 = puVar6;
  ppuStack_260 = &puStack_140;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar7 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_298,puVar3);
    uVar5 = *(undefined8 *)(puVar3 + 0x50);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_2a0,auStack_298);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    func_0x00010c258f00(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_2a0);
    _objc_destroyWeak(auStack_298);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 106a72ce8; end: 106a72eb3;  */

void FUN_106a72ce8(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf00a40();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar7 = auStack_d8;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  puVar4 = puVar1;
  if (puVar2 != (undefined1 *)0x0) {
    puVar8 = (undefined *)*puStack_110;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if ((undefined *)*puStack_110 != puVar8) {
          _objc_enumerationMutation(puVar1);
        }
        lVar3 = *(long *)(lStack_118 + (long)puVar9 * 8);
        func_0x00010c259740();
        if (lVar3 == *(long *)(param_1 + 0x30)) goto LAB_106a72e64;
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar7 = auStack_d8;
      puVar2 = puVar1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  func_0x00010c0d3c80();
  puVar8 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bf529e0();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfed320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b20(puVar4);
  puVar9 = puVar4;
  func_0x00010bf51e00();
  puVar7 = *(undefined1 **)(param_1 + 0x28);
  puVar6 = (undefined8 *)puVar9;
  func_0x00010c28a4e0(param_2);
  _objc_release(puVar9);
  _objc_release(puVar8);
LAB_106a72e64:
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106a72eb4;
  puStack_160 = puVar9;
  puStack_158 = puVar8;
  puStack_150 = puVar4;
  lStack_148 = param_1;
  puStack_140 = puVar1;
  puStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar6 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_168,puVar2);
    uVar5 = *(undefined8 *)(puVar2 + 0x50);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fae0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    func_0x00010c258f00(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 106a72eb4; end: 106a7301f; -[SCSpotlightPlaybackManager removeContentForCreatorId:playlistItemController:] */

void FUN_106a72eb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c258f00(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a73020; end: 106a73077;  */

void FUN_106a73020(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a73078; end: 106a73213; -[SCSpotlightPlaybackManager removeContentForCreatorId:similarStoryIdFpsArray:playlistItemController:] */

void FUN_106a73078(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c258f00(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a73214; end: 106a7326b;  */

void FUN_106a73214(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a7326c; end: 106a73273; -[SCSpotlightPlaybackManager _isRefreshingPlaylist] */

undefined1 FUN_106a7326c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3d0);
}



/* Entry: 106a73274; end: 106a7327b; -[SCSpotlightPlaybackManager _setRefreshingPlaylist:] */

void FUN_106a73274(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3d0) = param_3;
  return;
}



/* Entry: 106a7327c; end: 106a73283; -[SCSpotlightPlaybackManager refreshStories] */

void FUN_106a7327c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshStoriesUserInitiated__11257fc48,1);
  return;
}



/* Entry: 106a73284; end: 106a73443; -[SCSpotlightPlaybackManager _refreshStoriesUserInitiated:] */

void FUN_106a73284(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010c07ab40();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010be432a0(), (uVar1 & 1) == 0)) {
    if (param_3 != 0) {
      *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d8) + 1;
      uVar1 = param_1 + 0x468;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        lVar3 = param_1 + 0x468;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c0ff9a0();
        _objc_release(lVar3);
      }
    }
    func_0x00010bea6b40(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar4);
    func_0x00010c258f00(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106a73444; end: 106a73497;  */

void FUN_106a73444(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


