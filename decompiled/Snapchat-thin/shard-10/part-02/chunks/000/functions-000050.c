/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a9406c; end: 107a940c7; -[SCSingleStoryViewingSession startShowingLoadingStorySnap:] */

void FUN_107a9406c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c137fe0(uVar1);
  *(undefined1 *)(param_1 + 0x90) = 1;
  func_0x00010bed67e0(param_1,param_2,param_3);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x1b9) = 1;
  return;
}



/* Entry: 107a940c8; end: 107a9412b; -[SCSingleStoryViewingSession startShowingLoadedStorySnap:isViewingLongform:isStreaming:] */

void FUN_107a940c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c138160(uVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  func_0x00010bed67e0(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((*(byte *)(param_1 + 0x91) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  return;
}



/* Entry: 107a9412c; end: 107a941e7; -[SCSingleStoryViewingSession _isLastStorySnapInStoriesPlaybackSequence:] */

undefined8 FUN_107a9412c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x1c0);
  _objc_retain(param_3);
  func_0x0001085367d4(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  return uVar4;
}



/* Entry: 107a941e8; end: 107a9426b; -[SCSingleStoryViewingSession _updateCurrentStorySnap:] */

void FUN_107a941e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x1d0);
  if (param_3 == *(long *)(param_1 + 0x1c8)) {
    lVar3 = *(long *)(param_1 + 0x48);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x1d0);
    *(long *)(param_1 + 0x1d0) = param_3;
    _objc_release(uVar2);
    if (lVar3 == 0) goto LAB_107a94258;
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x1d0);
    *(long *)(param_1 + 0x1d0) = param_3;
    _objc_release(uVar2);
  }
  if (lVar1 != param_3) {
    func_0x00010bede900(param_1);
  }
LAB_107a94258:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a9426c; end: 107a9441f; -[SCSingleStoryViewingSession startPlayingStorySnap:lastInteraction:] */

void FUN_107a9426c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (*(long *)(param_1 + 0x48) != param_3) {
    if (*(long *)(param_1 + 0x1d0) == 0) {
      func_0x00010bed67e0(param_1,param_2,param_3);
    }
    else {
      lVar1 = param_3;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x1d0);
      func_0x00010bf3cf60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0720c0(lVar1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar1);
      if ((int)lVar3 == 0) goto LAB_107a94400;
    }
    if ((*(long *)(param_1 + 0x1c0) == 0) ||
       (lVar1 = param_1, func_0x00010be41660(param_1,param_2,*(undefined8 *)(param_1 + 0x1d0)),
       (int)lVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x1ba) = 1;
    }
    *(undefined1 *)(param_1 + 0x1bb) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_3;
    func_0x00010c0c5340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49920(uVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    lVar1 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be52140(param_1,param_2,param_3);
    _objc_release(uVar2);
  }
LAB_107a94400:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a94420; end: 107a94487; -[SCSingleStoryViewingSession skipShowingStorySnap:] */

void FUN_107a94420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1d0) != 0) {
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf3cf60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107a94488; end: 107a9487f; -[SCSingleStoryViewingSession stopShowingStorySnap:page:params:lastInteraction:isShowingStoryInterstitial:includeOperaPauseTime:isPresentingOverOpera:] */

void FUN_107a94488(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 uStack_6c;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar1 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf3cf60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x80));
      if (((*(byte *)(param_1 + 0x90) & 1) == 0) && ((*(byte *)(param_1 + 0xf8) & 1) == 0)) {
        lVar13 = *(long *)(param_1 + 0x100);
        uVar1 = param_3;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(lVar13,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 == 0) {
          uStack_6c = 0;
        }
        else {
          uVar12 = *(undefined8 *)(param_1 + 0x100);
          uVar3 = param_3;
          func_0x00010c15f2e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20(uVar12,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar12;
          func_0x00010c29ea60();
          uStack_6c = (undefined1)uVar2;
          _objc_release(uVar12);
          _objc_release(uVar3);
        }
        _objc_release(lVar13);
        _objc_release(uVar1);
        if ((param_7 & 1) == 0) {
          puVar4 = PTR_PTR_1126b2348;
          func_0x00010bf5fb40(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_5;
          func_0x00010c0e00e0(param_5,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          func_0x00010be5d8a0(param_1,param_2,param_3);
          _objc_release(uVar5);
          _objc_release(puVar4);
        }
        puVar4 = PTR_PTR_1126b2348;
        func_0x00010bfbbde0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
        _objc_release(puVar4);
        uVar5 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf1f3c0();
        _objc_release(uVar7);
        _objc_release(uVar5);
        puVar4 = PTR_PTR_1126b2e48;
        func_0x00010bf4f180(PTR_PTR_1126b2e48);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = PTR_PTR_1126b2348;
        func_0x00010c24d6e0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        FUN_107a93230();
        _objc_release(uVar7);
        _objc_release(puVar4);
        *(ulong *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + uVar9;
        puVar4 = PTR_PTR_1126b2348;
        func_0x00010c156fa0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be904a0(param_1,param_2,param_3,uVar6 & 0xffffffff,param_9,uVar8 & 0xffffffff,
                            uVar5,uVar9,uStack_6c);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar7);
        _objc_release(puVar4);
        uVar6 = param_5;
        func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110dbde38);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c067fc0();
        func_0x00010be8f9c0(param_1,param_2,param_3,uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      func_0x00010bde0240(param_1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a94880; end: 107a9498b; -[SCSingleStoryViewingSession _pauseShowingStorySnap:page:params:lastInteraction:isShowingStoryInterstitial:] */

void FUN_107a94880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((((*(byte *)(param_1 + 0x90) & 1) == 0) && ((param_7 & 1) == 0)) &&
     ((*(byte *)(param_1 + 0xf8) & 1) == 0)) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be9fd20(param_1,param_2,param_3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x80));
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c0f62c0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010bf67aa0(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a9498c; end: 107a9498f; -[SCSingleStoryViewingSession didDismissOptOutInterstitial] */

void FUN_107a9498c(void)

{
  return;
}



/* Entry: 107a94990; end: 107a94a3f; -[SCSingleStoryViewingSession pauseShowingCurrentFriendStoriesWithIsShowingStoryInterstitial:lastInteraction:] */

void FUN_107a94990(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x1d0) != 0) {
    func_0x00010be70f00(param_1,param_2,*(long *)(param_1 + 0x1d0),0,0,param_4,param_3);
  }
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x78));
  if ((param_3 & 1) == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a94a40;
    puStack_40 = &UNK_1109f8940;
    lStack_38 = param_1;
    func_0x00010bdd6d20(param_1,param_2,&puStack_58,0);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107a94a40; end: 107a94a4f;  */

void FUN_107a94a40(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logStoryStoryView_loggingInfo__112609eb0,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 107a94a50; end: 107a94a57; -[SCSingleStoryViewingSession stopShowingFriendStoriesAndCancelRequests:isShowingStoryInterstitial:isPresentingOverOpera:] */

void FUN_107a94a50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopShowingFriendStoriesAndCance_1126734d8);
  return;
}



/* Entry: 107a94a58; end: 107a94b37; -[SCSingleStoryViewingSession stopShowingFriendStoriesAndCancelRequests:isShowingStoryInterstitial:isPresentingOverOpera:isMidrollAd:] */

void FUN_107a94a58(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 0x1d0);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256b00(param_1,param_2,lVar2,0,0,puVar1,param_4,1,(char)param_5);
    _objc_release(puVar1);
  }
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x78));
  if (((param_4 & 1) == 0) && ((param_6 & 1) == 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107a94b38;
    puStack_50 = &UNK_1109f8940;
    lStack_48 = param_1;
    func_0x00010bdd6d20(param_1,param_2,&puStack_68,param_5);
  }
  return;
}



/* Entry: 107a94b38; end: 107a94b47;  */

void FUN_107a94b38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logStoryStoryView_loggingInfo__112609eb0,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 107a94b48; end: 107a94edb; -[SCSingleStoryViewingSession didPassVideoSeekPointWithStorySnap:page:params:] */

void FUN_107a94b48(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 uStack_64;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar11 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf3cf60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c0720c0(uVar11,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar11);
    if ((int)uVar2 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x80));
      uVar11 = *(undefined8 *)(param_1 + 0x80);
      puVar3 = PTR_PTR_1126b2348;
      func_0x00010c0f62c0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_5;
      func_0x00010c0e00e0(param_5,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bf67aa0(uVar11);
      _objc_release(uVar4);
      _objc_release(puVar3);
      if (((*(byte *)(param_1 + 0x90) & 1) == 0) && ((*(byte *)(param_1 + 0xf8) & 1) == 0)) {
        lVar12 = *(long *)(param_1 + 0x100);
        uVar11 = param_3;
        func_0x00010c15f2e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(lVar12,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 == 0) {
          uStack_64 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0x100);
          uVar2 = param_3;
          func_0x00010c15f2e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20(uVar13,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar13;
          func_0x00010c29ea60();
          uStack_64 = (undefined1)uVar1;
          _objc_release(uVar13);
          _objc_release(uVar2);
        }
        _objc_release(lVar12);
        _objc_release(uVar11);
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010bfbbde0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        _objc_release(puVar3);
        uVar4 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf1f3c0();
        _objc_release(uVar6);
        _objc_release(uVar4);
        puVar3 = PTR_PTR_1126b2e48;
        func_0x00010bf4f180(PTR_PTR_1126b2e48);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010c24d6e0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        FUN_107a93230();
        _objc_release(uVar6);
        _objc_release(puVar3);
        *(ulong *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + uVar8;
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010c156fa0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be904a0(param_1,param_2,param_3,uVar5 & 0xffffffff,1,uVar7 & 0xffffffff,uVar4,
                            uVar8,uStack_64);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar6);
        _objc_release(puVar3);
        _objc_release(uVar4);
      }
      func_0x00010c138160(*(undefined8 *)(param_1 + 0x80));
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a94edc; end: 107a94faf; -[SCSingleStoryViewingSession entryEvent] */

long FUN_107a94edc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf972c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x1f0;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c251fe0();
  }
  else {
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      lVar4 = 0xc;
      goto LAB_107a94f54;
    }
    lVar1 = param_1;
    func_0x00010bf972c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c27dd80();
    func_0x000107bc70c8();
  }
  _objc_release(lVar1);
LAB_107a94f54:
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  if (((int)uVar3 == 0) || (*(char *)(param_1 + 0x148) != '\x01')) {
    _objc_release(uVar2);
    lVar1 = lVar4;
  }
  else {
    _objc_release(uVar2);
    lVar1 = 4;
    if (lVar4 != 7) {
      lVar1 = lVar4;
    }
  }
  return lVar1;
}



/* Entry: 107a94fb0; end: 107a9505b; -[SCSingleStoryViewingSession _entryIntent] */

ulong FUN_107a94fb0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf972c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_1 + 0x1f0;
    _objc_loadWeakRetained(uVar1);
    uVar4 = uVar1;
    func_0x00010c251fe0();
    uVar4 = (ulong)(uVar4 == 1);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf972c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c27dd80();
    lVar2 = param_1 + 0x1f0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0ea860();
    func_0x000107cd49e8(uVar4,lVar3,0);
    _objc_release(lVar2);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107a9505c; end: 107a950df; -[SCSingleStoryViewingSession _exitIntent] */

long FUN_107a9505c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  param_1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0ea860();
  FUN_107cd46f8(lVar3,lVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 107a950e0; end: 107a95263; -[SCSingleStoryViewingSession didTakeScreenshotOnCurrentStorySnapWithOperaPage:] */

void FUN_107a950e0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x1d0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + 0x1d0);
    func_0x00010853a244();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x1d0);
      func_0x00010bf5b080(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x1c0);
      func_0x000108538468(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_107cd2a60();
    _objc_release(uVar4);
    uVar5 = *(ulong *)(param_1 + 0x1d0);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      func_0x00010be90480(param_1);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107a95264; end: 107a953a3;  */

void FUN_107a95264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x1d0);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cd207c(0,lVar3,param_2,uVar4,1,0,1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  if (lVar3 != 0) {
    func_0x0001085381ac(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0);
    func_0x000108535b00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1d0);
    func_0x00010853a834(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108539930(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1d0));
    func_0x00010c14af20(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107a953a4; end: 107a956e3; -[SCSingleStoryViewingSession _reportStorySnapScreenshotWithStorySnap:] */

void FUN_107a953a4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d62b8;
  func_0x00010c25b260(PTR_PTR_1126d62b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba680(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bec5100(param_1,param_2,puVar4);
  func_0x00010c2ba700(puVar1,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar5 = param_1;
  func_0x00010bec50e0(param_1,param_2,param_3);
  func_0x00010c2ba720(puVar1,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c27dd80();
  uVar2 = uVar6 + 1;
  if (uVar2 < 0x1c) {
    if ((1L << (uVar2 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar7 = 1;
      if ((uVar6 + 1 < 0x1c) && ((1L << (uVar6 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (uVar6 + 1 < 0x1b) {
          uVar7 = *(undefined8 *)(&UNK_10dee0dd0 + (uVar6 + 1) * 8);
        }
        else {
          uVar7 = 0;
        }
      }
      goto LAB_107a9555c;
    }
    if (uVar2 == 8) {
      uVar7 = 5;
      goto LAB_107a9555c;
    }
    if (uVar2 == 10) {
      uVar7 = 0xe;
      goto LAB_107a9555c;
    }
  }
  uVar7 = 2;
LAB_107a9555c:
  func_0x00010c2b3b00(puVar1,param_2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2bc8e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x000108534aa8(uVar7);
  func_0x00010c2bc940(puVar1,param_2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bebd380(param_1);
  func_0x00010c2b9820(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c2b97e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  if ((uVar3 < 0x1b) && ((1L << (uVar3 & 0x3f) & 0x7e7fc60U) != 0)) {
    _objc_release(uVar2);
    func_0x00010c2b1620(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    _objc_release(uVar2);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b11a0(uVar7,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_3 + 0x1b8) = 1;
  return;
}



/* Entry: 107a956e4; end: 107a956ef; -[SCSingleStoryViewingSession didSwipeUpOnStorySnap:] */

void FUN_107a956e4(long param_1)

{
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  return;
}



/* Entry: 107a956f0; end: 107a95737; -[SCSingleStoryViewingSession _clearCurrentStoryStatus] */

void FUN_107a956f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 0x1b8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  return;
}



/* Entry: 107a95738; end: 107a95747; -[SCSingleStoryViewingSession didChangePanelForStorySnap:storiesPlaybackSequence:toPanelIndex:] */

void FUN_107a95738(long param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c138170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x88),PTR_s_resetAndStart_11262ba78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 107a95748; end: 107a95847; -[SCSingleStoryViewingSession _isStorySnapFullyViewed:currentProgress:] */

ulong FUN_107a95748(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269660();
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x1c0);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c0b50e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x000107d2e490(uVar5,param_3,uVar6);
    _objc_release(uVar2);
    if ((int)uVar5 != 0) {
      uVar3 = param_3;
      func_0x00010c29e300();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c083540();
      if ((uVar4 & 1) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0xf0);
        func_0x00010c269680(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar4 = param_3;
        func_0x000107d2e694(param_3);
        _objc_release(uVar2);
      }
      else {
        uVar4 = 1;
      }
      _objc_release(uVar3);
      goto LAB_107a95824;
    }
  }
  uVar4 = 1;
LAB_107a95824:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107a95848; end: 107a95a53; -[SCSingleStoryViewingSession _sendReadReceiptWithStorySnap:currentProgress:] */

void FUN_107a95848(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  func_0x000108535b00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = param_4;
  func_0x00010853a244();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    func_0x00010bf5b080(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x1c0);
    func_0x000108538468(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = param_2;
  uVar6 = param_1;
  func_0x00010be44500();
  uVar8 = *(undefined8 *)(param_2 + 0x100);
  uVar3 = param_4;
  func_0x00010c15f2e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  iVar1 = (int)*(undefined8 *)(param_2 + 0xf0);
  func_0x00010c269660();
  if ((iVar1 == 0) || (uStack_80 = param_1, (int)lVar5 != 0)) {
    uVar3 = param_4;
    func_0x00010c26f2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    _objc_release(uVar3);
    uStack_80 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 200);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107a95a54;
  puStack_a8 = &UNK_1109f8970;
  uStack_78 = (undefined1)lVar5;
  uStack_a0 = param_4;
  lStack_98 = param_2;
  uStack_90 = uVar2;
  uStack_88 = uVar9;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  FUN_107cd2a60(uVar6,uVar7,uVar4,&puStack_c0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar4);
  return;
}



/* Entry: 107a95a54; end: 107a95bbb;  */

void FUN_107a95a54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cd207c(*(undefined8 *)(param_1 + 0x40),lVar1,param_2,uVar3,0,
                *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48),
                *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  if (lVar1 != 0) {
    func_0x0001085381ac(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1c0));
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010853a834(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108539930(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c14af20(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107a95bbc;
    puStack_58 = &UNK_110848c48;
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107a95bbc; end: 107a95bcf;  */

void FUN_107a95bbc(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0xd0) =
       *(long *)(*(long *)(param_1 + 0x20) + 0xd0) - *(long *)(param_1 + 0x28);
  return;
}



/* Entry: 107a95bd0; end: 107a95d23; -[SCSingleStoryViewingSession _markStoryAsViewedWithStorySnap:currentProgress:] */

void FUN_107a95bd0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  dVar6 = param_1;
  func_0x00010be44500(param_2,param_3,param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x100);
  uVar2 = param_4;
  func_0x00010c15f2e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if ((int)lVar1 != 0) {
    uVar4 = *(ulong *)(param_2 + 0xa0);
    uVar2 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010c26f2a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      *(double *)(param_2 + 0x40) = dVar6 + *(double *)(param_2 + 0x40);
      _objc_release(uVar2);
    }
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    uVar2 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_3,uVar2);
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x98),param_3,param_4);
    *(long *)(param_2 + 0x1e0) = *(long *)(param_2 + 0x1e0) + 1;
  }
  func_0x00010be9fd20(param_1,param_2,param_3,param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a95d24; end: 107a95d27; -[SCSingleStoryViewingSession didLongPressForStorySnap:storiesPlaybackSequence:isTopSnap:] */

void FUN_107a95d24(void)

{
  return;
}



/* Entry: 107a95d28; end: 107a95d2b; -[SCSingleStoryViewingSession willAdvanceToNextStorySnap:storiesPlaybackSequence:lastInteraction:] */

void FUN_107a95d28(void)

{
  return;
}



/* Entry: 107a95d2c; end: 107a95d2f; -[SCSingleStoryViewingSession videoDidStartLoopAfterFullyViewedForStorySnap:page:params:] */

void FUN_107a95d2c(void)

{
  return;
}



/* Entry: 107a95d30; end: 107a95d37; -[SCSingleStoryViewingSession didUpdateIsFullScreen:] */

void FUN_107a95d30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa9) = param_3;
  return;
}



/* Entry: 107a95d38; end: 107a95d3f; -[SCSingleStoryViewingSession extraPropertiesForStorySnap:] */

undefined8 FUN_107a95d38(void)

{
  return 0;
}



/* Entry: 107a95d40; end: 107a95d47; -[SCSingleStoryViewingSession setSkipSnapWithoutViewing:] */

void FUN_107a95d40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 107a95d48; end: 107a95d4f; -[SCSingleStoryViewingSession uniqueViewedSnapsCount] */

void FUN_107a95d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa0),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107a95d50; end: 107a95d57; -[SCSingleStoryViewingSession _snapTimeViewedSec] */

void FUN_107a95d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 107a95d58; end: 107a95e9b; -[SCSingleStoryViewingSession updateShareCountWithParameters:] */

void FUN_107a95d58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b6008;
  _objc_retain(param_3);
  func_0x00010c122f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010bfcf840(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar1 != 0 || uVar3 != 0) {
    uVar4 = uVar1;
    func_0x00010c0b4ca0();
    uVar5 = uVar3;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xd0) = uVar5 + uVar4 + *(long *)(param_1 + 0xd0);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a95e9c; end: 107a95ea3; -[SCSingleStoryViewingSession _viewedStoryTime] */

void FUN_107a95e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 107a95ea4; end: 107a95efb; -[SCSingleStoryViewingSession _totalSnapCount] */

ulong FUN_107a95ea4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x1c0);
  if (uVar1 != 0) {
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    return uVar2;
  }
  return (ulong)(*(long *)(param_1 + 0x1c8) != 0);
}



/* Entry: 107a95efc; end: 107a95f6f; -[SCSingleStoryViewingSession _totalStoryTime] */

undefined8 FUN_107a95efc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x1c0) != 0) {
    uVar2 = 0;
    if (*(long *)(param_2 + 0x30) == 1) {
      uVar2 = *(undefined8 *)(param_2 + 0x40);
    }
    return uVar2;
  }
  lVar1 = *(long *)(param_2 + 0x1c8);
  if (lVar1 != 0) {
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    _objc_release(lVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 107a95f70; end: 107a95feb; -[SCSingleStoryViewingSession _storyAccessTypeForSnapchatter:isFromFanPass:] */

undefined8 FUN_107a95f70(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100bf119c();
  uVar2 = 0;
  if ((int)uVar1 == 0) {
    uVar2 = 4;
  }
  if (((param_4 & 1) == 0) && ((uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010901c5ac();
    if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010901c618(), (int)uVar1 == 0)) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107a95fec; end: 107a9622b; -[SCSingleStoryViewingSession _storyAccessTypeForStorySnap:completion:] */

void FUN_107a95fec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x000108539930();
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x000108539520(param_3,uVar3);
    _objc_release(uVar3);
    if ((int)lVar2 != 0) goto LAB_107a96060;
    lVar2 = param_3;
    func_0x000108539a68();
    if ((int)lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c08fa60();
      lVar5 = lVar4;
      if (lVar2 == 0) {
        lVar5 = *(long *)(param_1 + 0x1c0);
        func_0x000108538468();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      lVar2 = lVar5;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        (**(code **)(param_4 + 0x10))(param_4,2);
      }
      else {
        uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x1c0);
        func_0x000108539154();
        _objc_initWeak(auStack_58,param_1);
        uVar3 = *(undefined8 *)(param_1 + 0xc0);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_68,auStack_58);
        uStack_60 = uVar1;
        _objc_retain(param_4);
        func_0x00010c2448c0(uVar3);
        _objc_release(uVar6);
        _objc_release(uVar3);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_68);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(lVar5);
      goto LAB_107a96070;
    }
    pcVar7 = *(code **)(param_4 + 0x10);
    uVar3 = 2;
  }
  else {
LAB_107a96060:
    pcVar7 = *(code **)(param_4 + 0x10);
    uVar3 = 0;
  }
  (*pcVar7)(param_4,uVar3);
LAB_107a96070:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a9622c; end: 107a96293;  */

void FUN_107a9622c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bec4680();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000107a96290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2);
  return;
}



/* Entry: 107a96294; end: 107a96477; -[SCSingleStoryViewingSession _storyAccessTypeForStoriesPlaybackSequence:completion:] */

void FUN_107a96294(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x000108539018();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x0001085363cc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x000108538468();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        (**(code **)(param_4 + 0x10))(param_4,2);
      }
      else {
        lVar3 = param_3;
        func_0x000108539154();
        _objc_initWeak(auStack_58,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0xc0);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_68,auStack_58);
        uStack_60 = (undefined1)lVar3;
        _objc_retain(param_4);
        func_0x00010c2448c0(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_68);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(lVar2);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    _objc_release(lVar1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a96478; end: 107a964df;  */

void FUN_107a96478(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bec4680();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000107a964dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2);
  return;
}



/* Entry: 107a964e0; end: 107a9660b; -[SCSingleStoryViewingSession _isFullyViewedForStoriesPlaybackSequence:] */

bool FUN_107a964e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar15 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar16 = *plStack_110;
    do {
      lVar17 = 0;
      do {
        if (*plStack_110 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar17 * 8);
        func_0x00010c29e300();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c083540();
        _objc_release(uVar3);
        if ((int)uVar4 == 0) {
          bVar1 = false;
          goto LAB_107a965c8;
        }
        lVar17 = lVar17 + 1;
      } while (lVar2 != lVar17);
      lVar2 = param_3;
      puVar15 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  bVar1 = true;
LAB_107a965c8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  puVar5 = (undefined1 *)puVar15;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)puVar15;
    func_0x00010befd0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)puVar15;
      func_0x00010befd0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c08fa60();
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = (undefined1 *)puVar15;
        func_0x00010bf30da0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf93b00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c08fa60();
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = (undefined1 *)puVar15;
          func_0x00010c2815a0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c08fa60();
          bVar1 = puVar14 != (undefined1 *)0x0;
          _objc_release(puVar13);
        }
        else {
          bVar1 = true;
        }
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      else {
        bVar1 = true;
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    else {
      bVar1 = true;
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    bVar1 = true;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar15);
  return bVar1;
}



/* Entry: 107a9660c; end: 107a9679b; -[SCSingleStoryViewingSession _containsGeofilter:] */

bool FUN_107a9660c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
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
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = param_3;
    func_0x00010befd0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      lVar6 = param_3;
      func_0x00010befd0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fa60();
      if (lVar8 == 0) {
        lVar8 = param_3;
        func_0x00010bf30da0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf93b00();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c08fa60();
        if (lVar10 == 0) {
          lVar10 = param_3;
          func_0x00010c2815a0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          bVar1 = lVar11 != 0;
          _objc_release(lVar10);
        }
        else {
          bVar1 = true;
        }
        _objc_release(lVar9);
        _objc_release(lVar8);
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107a9679c; end: 107a9698f; -[SCSingleStoryViewingSession _storyTypeToLogWithSnaps:] */

undefined8 FUN_107a9679c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bdf40(uVar1);
  uVar1 = puStack_68[3];
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107a96990; end: 107a96a37;  */

void FUN_107a96990(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x000108532f8c();
  }
  else {
    uVar2 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  return;
}



/* Entry: 107a96a38; end: 107a96aaf;  */

void FUN_107a96a38(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  return;
}



/* Entry: 107a96ab0; end: 107a96adf;  */

void FUN_107a96ab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108532f8c();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 107a96ae0; end: 107a96bf3; -[SCSingleStoryViewingSession _storyTypeVariantToLogWithSnaps:] */

undefined8 FUN_107a96ae0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    uVar3 = 1;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00010c25b820();
        if (lVar2 == 1) goto LAB_107a96bac;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar3 = 0xffffffffffffffff;
LAB_107a96bac:
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar3;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107a96bf4;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_107a96d5c;
  uStack_140 = 0x107a96d6c;
  uStack_138 = 0;
  uStack_130 = uVar3;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0bdf40(*(undefined8 *)(lVar1 + 0x1c0));
  uVar3 = puStack_158[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return uVar3;
}



/* Entry: 107a96bf4; end: 107a96d5b; -[SCSingleStoryViewingSession _storyIdToLog] */

void FUN_107a96bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_f8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107a96d5c;
  uStack_30 = 0x107a96d6c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a96d7c;
  puStack_60 = &UNK_11092a400;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x107a96dbc;
  puStack_88 = &UNK_11092a430;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x107a96dfc;
  puStack_b0 = &UNK_110920c78;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x107a96e54;
  puStack_d8 = &UNK_11092a460;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x107a96e94;
  puStack_100 = &UNK_1109215c8;
  puStack_d0 = puStack_f8;
  puStack_a8 = puStack_f8;
  puStack_80 = puStack_f8;
  puStack_58 = puStack_f8;
  puStack_48 = puStack_f8;
  func_0x00010c0bdf40(*(undefined8 *)(param_1 + 0x1c0),param_2,
                      &PTR___NSConcreteGlobalBlock_1109f8a30,&PTR___NSConcreteGlobalBlock_1109f8a50,
                      &puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118,
                      &PTR___NSConcreteGlobalBlock_1109f8a70);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a96d5c; end: 107a96d7b;  */

void FUN_107a96d5c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a96d7c; end: 107a96ed3;  */

void FUN_107a96d7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0ee360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a96ed4; end: 107a96ed7;  */

void FUN_107a96ed4(void)

{
  return;
}



/* Entry: 107a96ed8; end: 107a970cb; -[SCSingleStoryViewingSession _storyTypeSpecificToLogWithSnap:] */

undefined8 FUN_107a96ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bdf40(uVar1);
  uVar1 = puStack_68[3];
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107a970cc; end: 107a971fb;  */

void FUN_107a970cc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x0001085330a8();
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar3;
    _objc_release(uVar1);
  }
  else {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 4;
  }
  lVar2 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf82a80();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c078f60();
    _objc_release(lVar2);
    uVar3 = 0x17;
    if ((int)lVar4 == 0) {
      uVar3 = 0;
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a971fc; end: 107a9723f;  */

void FUN_107a971fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001085330a8();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a97240; end: 107a9728f;  */

void FUN_107a97240(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  return;
}



/* Entry: 107a97290; end: 107a972f7;  */

void FUN_107a97290(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c29d360();
  if (lVar1 == 0x39) {
    uVar2 = 0x18;
  }
  else {
    lVar1 = param_2;
    func_0x00010c29d360();
    uVar2 = 0x18;
    if (lVar1 != 0x67) {
      uVar2 = 0x24;
    }
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a972f8; end: 107a9730b;  */

void FUN_107a972f8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xffffffffffffffff;
  return;
}



/* Entry: 107a9730c; end: 107a97493; -[SCSingleStoryViewingSession _snapTypesToLogWithSnaps:] */

undefined * FUN_107a9730c(long param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 ***pppuVar22;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar16 = *plStack_110;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        lVar12 = param_1;
        func_0x00010bec50e0();
        func_0x00010bb1577c();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar12);
        puVar17 = puVar17 + 1;
      } while (puVar4 != puVar17);
      puVar4 = param_3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_110dbdd98;
  puVar17 = puVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107a97494;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  puVar3 = PTR_PTR_1126d62c0;
  func_0x00010c25b420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x1c0);
  func_0x000108535ec8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar16 = *(long *)(param_3 + 0x98);
  func_0x00010bf529e0();
  puVar17 = param_3;
  puVar4 = param_3;
  if (lVar16 == 0) {
    uStack_190 = *(undefined8 *)(param_3 + 0x1c8);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5100();
    _objc_release(puVar6);
    uStack_198 = *(undefined8 *)(param_3 + 0x1c8);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5120();
    _objc_release(puVar6);
  }
  else {
    func_0x00010bec5100();
    func_0x00010bec5120();
  }
  func_0x00010c2ba700(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba740(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_3 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  if ((uVar8 & 1) == 0) {
    puVar6 = param_3;
    func_0x00010bebd420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9860(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  func_0x00010bec50e0(param_3);
  func_0x00010c2ba720(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bec4a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba460(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar17 == (undefined *)0x6) {
    uVar9 = *(undefined8 *)(param_3 + 0x1c0);
    func_0x0001085363cc(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6440(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
  }
  func_0x00010bee9f00(param_3);
  func_0x00010c2ba6c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9f00((double)*(long *)(param_3 + 0xd8),puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010becda20(param_3);
  func_0x00010c2bb960(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0e60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3[0x15a] == '\x01') {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_3 + 0x178),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab240(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  func_0x00010c2b3b80(*(undefined8 *)(param_3 + 0x178),puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010becd9a0(param_3);
  func_0x00010c2b4a20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4a80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c280700(param_3);
  func_0x00010c2b4a60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf97160(param_3);
  func_0x00010c2ad4a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be0aaa0(param_3);
  func_0x00010c2ad480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_3 + 0x1f0;
  _objc_loadWeakRetained(puVar6);
  func_0x00010bf9ba60();
  func_0x00010c2ad720(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010be0c140(param_3);
  func_0x00010c2ad6c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be40b40(param_3);
  func_0x00010c2aea00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_3 + 0x1f0;
  _objc_loadWeakRetained(puVar6);
  func_0x00010c0ea860();
  func_0x00010c2b4ea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c2b5660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc8e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108534aa8(*(undefined8 *)(param_3 + 0x58));
  func_0x00010c2bc940(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108537c94(*(undefined8 *)(param_3 + 0x1c0));
  func_0x00010c2b1240(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108537f50(*(undefined8 *)(param_3 + 0x1c0));
  func_0x00010c2b0700(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba7c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b09a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfb8ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba820(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  func_0x00010c2b4ec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5400(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  uVar9 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084b00();
  func_0x00010c2b9b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbc20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4920(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  uVar11 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c084e40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c29fa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bca80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c084e40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf32a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa360(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar11);
  func_0x00010c2bbc40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adcc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  func_0x00010c2aaf00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaee0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7c40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7bc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7ba0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7c00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_3 + 0x138) == -1) {
    lVar16 = *(long *)(param_3 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar16 != 0) {
      uVar9 = *(undefined8 *)(param_3 + 0x128);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1e60();
      _objc_release(uVar9);
    }
  }
  func_0x00010c2b5420(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar12 = *(long *)(param_3 + 0x1c8);
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar12;
  func_0x00010c241720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar12);
  puVar6 = param_3;
  func_0x00010be41ba0();
  uVar10 = *(undefined8 *)(param_3 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf1f3c0();
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_3 + 0x1c0);
  FUN_107a97e30();
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x107a98020;
  puStack_1d8 = &UNK_1109f8a90;
  uStack_1a0 = (undefined1)uVar9;
  uStack_19e = SUB81(puVar6,0);
  puStack_1d0 = puVar3;
  uStack_1c8 = uVar5;
  ppuStack_1c0 = ppuVar14;
  puStack_1b8 = puVar17;
  puStack_1b0 = puVar4;
  uStack_1a8 = uVar10;
  uStack_19f = lVar16 != 0;
  _objc_retain(ppuVar14);
  _objc_retain(uVar5);
  _objc_retain(puVar3);
  func_0x00010bec46a0(param_3);
  _objc_release(ppuStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(puStack_1d0);
  _objc_release(ppuVar14);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_107a97e30;
  pppuVar22 = &ppuStack_200;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_200 = &puStack_130;
  _objc_retain();
  puVar6 = puVar3;
  func_0x00010853723c();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar6;
  func_0x00010c08fa60();
  if (puVar15 != (undefined *)0x0) {
    param_3 = puVar6;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_3;
    func_0x00010bf52680();
    if (puVar15 == (undefined *)0x1a) {
      puVar15 = param_3;
      func_0x00010c298be0();
      _objc_release(param_3);
      goto LAB_107a97fcc;
    }
    _objc_release(param_3);
  }
  puVar15 = puVar3;
  func_0x000108536b9c();
  if ((int)puVar15 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    dVar19 = 0.0;
    puVar15 = puVar3;
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    if (puVar13 == (undefined *)0x0) {
      dVar20 = 0.0;
    }
    else {
      dVar20 = 0.0;
      do {
        puVar18 = (undefined *)0x0;
        dVar21 = dVar20;
        do {
          dVar20 = dVar19;
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar15);
            dVar20 = dVar19;
          }
          puVar17 = *(undefined **)((long)puVar18 * 8);
          func_0x00010c26f2a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar17;
          func_0x00010c1058a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          dVar19 = dVar20;
          _objc_release(puVar4);
          _objc_release(puVar17);
          if (dVar20 <= dVar21) {
            dVar20 = dVar21;
          }
          puVar18 = puVar18 + 1;
          dVar21 = dVar20;
        } while (puVar13 != puVar18);
        puVar13 = puVar15;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
      dVar20 = dVar20 * 1000.0;
      param_3 = (undefined *)0x0;
    }
    _objc_release(puVar15);
    puVar15 = (undefined *)(long)dVar20;
  }
LAB_107a97fcc:
  _objc_release(puVar6);
  puVar13 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    uVar5 = 0x107a98020;
    func_0x00010c2ba340(*(undefined8 *)(puVar13 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar18 = *(undefined **)(puVar13 + 0x38);
    func_0x000107a98148(puVar18,param_2,*(undefined8 *)(puVar13 + 0x40),
                        *(undefined8 *)(puVar13 + 0x28),puVar13[0x50],
                        *(undefined8 *)(puVar13 + 0x48),in_x6,in_x7,puVar4,puVar17,param_3,puVar15,
                        puVar6,puVar3,pppuVar22,uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar18 != (undefined *)0x0) {
      func_0x00010c2b1a60(*(undefined8 *)(puVar13 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    bVar1 = puVar13[0x51];
    bVar2 = puVar13[0x52];
    uVar5 = *(undefined8 *)(puVar13 + 0x20);
    _objc_retain(uVar5);
    if (((bVar2 | bVar1) & 1) != 0) {
      func_0x00010c2ba700(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba720(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba340(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar5);
    lVar16 = *(long *)(puVar13 + 0x30);
    uVar5 = *(undefined8 *)(puVar13 + 0x20);
    func_0x00010bf21f60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar16 + 0x10))(lVar16,uVar5);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar18);
    return puVar18;
  }
  return puVar15;
}



/* Entry: 107a97494; end: 107a97e2f; -[SCSingleStoryViewingSession _buildStoryStoryViewLogParametersWithCompletion:isPresentingOverOpera:] */

undefined * FUN_107a97494(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 **ppuVar21;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126d62c0;
  func_0x00010c25b420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000108535ec8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x98);
  func_0x00010bf529e0();
  puVar15 = param_1;
  puVar7 = param_1;
  if (lVar5 == 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x1c8);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5100();
    _objc_release(puVar6);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c8);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5120();
    _objc_release(puVar6);
  }
  else {
    func_0x00010bec5100();
    func_0x00010bec5120();
  }
  func_0x00010c2ba700(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba740(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar8 = *(ulong *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1f3c0();
  _objc_release(uVar8);
  if ((uVar9 & 1) == 0) {
    puVar6 = param_1;
    func_0x00010bebd420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9860(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  func_0x00010bec50e0(param_1);
  func_0x00010c2ba720(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bec4a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba460(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar15 == (undefined *)0x6) {
    uVar10 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x0001085363cc(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6440(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
  }
  func_0x00010bee9f00(param_1);
  func_0x00010c2ba6c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9f00((double)*(long *)(param_1 + 0xd8),puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010becda20(param_1);
  func_0x00010c2bb960(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0e60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_1[0x15a] == '\x01') {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x178),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab240(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  func_0x00010c2b3b80(*(undefined8 *)(param_1 + 0x178),puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010becd9a0(param_1);
  func_0x00010c2b4a20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4a80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c280700(param_1);
  func_0x00010c2b4a60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf97160(param_1);
  func_0x00010c2ad4a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be0aaa0(param_1);
  func_0x00010c2ad480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_1 + 0x1f0;
  _objc_loadWeakRetained(puVar6);
  func_0x00010bf9ba60();
  func_0x00010c2ad720(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010be0c140(param_1);
  func_0x00010c2ad6c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be40b40(param_1);
  func_0x00010c2aea00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_1 + 0x1f0;
  _objc_loadWeakRetained(puVar6);
  func_0x00010c0ea860();
  func_0x00010c2b4ea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c2b5660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc8e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108534aa8(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c2bc940(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108537c94(*(undefined8 *)(param_1 + 0x1c0));
  func_0x00010c2b1240(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108537f50(*(undefined8 *)(param_1 + 0x1c0));
  func_0x00010c2b0700(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba7c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b09a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bfb8ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba820(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar11);
  func_0x00010c2b4ec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5400(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar11);
  uVar10 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084b00();
  func_0x00010c2b9b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbc20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4920(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c084e40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c29fa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bca80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c084e40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf32a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa360(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar12);
  func_0x00010c2bbc40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adcc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar11);
  func_0x00010c2aaf00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaee0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7c40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7bc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7ba0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7c00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x138) == -1) {
    lVar5 = *(long *)(param_1 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1e60();
      _objc_release(uVar10);
    }
  }
  func_0x00010c2b5420(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 0x1c8);
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c241720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar13);
  puVar6 = param_1;
  func_0x00010be41ba0();
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf1f3c0();
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x1c0);
  FUN_107a97e30();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x107a98020;
  puStack_b8 = &UNK_1109f8a90;
  uStack_80 = (undefined1)uVar10;
  uStack_7e = SUB81(puVar6,0);
  puStack_b0 = puVar3;
  uStack_a8 = uVar4;
  uStack_a0 = param_3;
  puStack_98 = puVar15;
  puStack_90 = puVar7;
  uStack_88 = uVar11;
  uStack_7f = lVar5 != 0;
  _objc_retain(param_3);
  _objc_retain(uVar4);
  _objc_retain(puVar3);
  func_0x00010bec46a0(param_1);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(puStack_b0);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_107a97e30;
  ppuVar21 = &puStack_e0;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar6 = puVar3;
  func_0x00010853723c();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  func_0x00010c08fa60();
  if (puVar16 != (undefined *)0x0) {
    param_1 = puVar6;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bf52680();
    if (puVar16 == (undefined *)0x1a) {
      puVar16 = param_1;
      func_0x00010c298be0();
      _objc_release(param_1);
      goto LAB_107a97fcc;
    }
    _objc_release(param_1);
  }
  puVar16 = puVar3;
  func_0x000108536b9c();
  if ((int)puVar16 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    dVar18 = 0.0;
    puVar16 = puVar3;
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar16;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    if (puVar14 == (undefined *)0x0) {
      dVar19 = 0.0;
    }
    else {
      dVar19 = 0.0;
      do {
        puVar17 = (undefined *)0x0;
        dVar20 = dVar19;
        do {
          dVar19 = dVar18;
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(puVar16);
            dVar19 = dVar18;
          }
          puVar15 = *(undefined **)((long)puVar17 * 8);
          func_0x00010c26f2a0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar15;
          func_0x00010c1058a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          dVar18 = dVar19;
          _objc_release(puVar7);
          _objc_release(puVar15);
          if (dVar19 <= dVar20) {
            dVar19 = dVar20;
          }
          puVar17 = puVar17 + 1;
          dVar20 = dVar19;
        } while (puVar14 != puVar17);
        puVar14 = puVar16;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
      dVar19 = dVar19 * 1000.0;
      param_1 = (undefined *)0x0;
    }
    _objc_release(puVar16);
    puVar16 = (undefined *)(long)dVar19;
  }
LAB_107a97fcc:
  _objc_release(puVar6);
  puVar14 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar4 = 0x107a98020;
    func_0x00010c2ba340(*(undefined8 *)(puVar14 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar17 = *(undefined **)(puVar14 + 0x38);
    func_0x000107a98148(puVar17,param_2,*(undefined8 *)(puVar14 + 0x40),
                        *(undefined8 *)(puVar14 + 0x28),puVar14[0x50],
                        *(undefined8 *)(puVar14 + 0x48),in_x6,in_x7,puVar7,puVar15,param_1,puVar16,
                        puVar6,puVar3,ppuVar21,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar17 != (undefined *)0x0) {
      func_0x00010c2b1a60(*(undefined8 *)(puVar14 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    bVar1 = puVar14[0x51];
    bVar2 = puVar14[0x52];
    uVar4 = *(undefined8 *)(puVar14 + 0x20);
    _objc_retain(uVar4);
    if (((bVar2 | bVar1) & 1) != 0) {
      func_0x00010c2ba700(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba720(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba340(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    lVar5 = *(long *)(puVar14 + 0x30);
    uVar4 = *(undefined8 *)(puVar14 + 0x20);
    func_0x00010bf21f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar4);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar17);
    return puVar17;
  }
  return puVar16;
}



/* Entry: 107a97e30; end: 107a9801f;  */

long FUN_107a97e30(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  
  puVar12 = &stack0xfffffffffffffff0;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar7 = param_1;
  func_0x00010853723c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    unaff_x22 = lVar7;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = unaff_x22;
    func_0x00010bf52680();
    if (lVar6 == 0x1a) {
      lVar6 = unaff_x22;
      func_0x00010c298be0();
      _objc_release(unaff_x22);
      goto LAB_107a97fcc;
    }
    _objc_release(unaff_x22);
  }
  lVar6 = param_1;
  func_0x000108536b9c();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    dVar9 = 0.0;
    lVar3 = param_1;
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    if (lVar4 == 0) {
      dVar10 = 0.0;
    }
    else {
      dVar10 = 0.0;
      do {
        lVar8 = 0;
        dVar11 = dVar10;
        do {
          dVar10 = dVar9;
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar3);
            dVar10 = dVar9;
          }
          unaff_x23 = *(undefined8 *)(lVar8 * 8);
          func_0x00010c26f2a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c1058a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          dVar9 = dVar10;
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (dVar10 <= dVar11) {
            dVar10 = dVar11;
          }
          lVar8 = lVar8 + 1;
          dVar11 = dVar10;
        } while (lVar4 != lVar8);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      dVar10 = dVar10 * 1000.0;
      unaff_x22 = 0;
    }
    _objc_release(lVar3);
    lVar6 = (long)dVar10;
  }
LAB_107a97fcc:
  _objc_release(lVar7);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar13 = 0x107a98020;
    func_0x00010c2ba340(*(undefined8 *)(lVar3 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = *(long *)(lVar3 + 0x38);
    func_0x000107a98148(lVar5,param_2,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),
                        *(undefined1 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x48),in_x6,in_x7,
                        unaff_x24,unaff_x23,unaff_x22,lVar6,lVar7,param_1,puVar12,uVar13);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010c2b1a60(*(undefined8 *)(lVar3 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    bVar1 = *(byte *)(lVar3 + 0x51);
    bVar2 = *(byte *)(lVar3 + 0x52);
    uVar13 = *(undefined8 *)(lVar3 + 0x20);
    _objc_retain(uVar13);
    if (((bVar2 | bVar1) & 1) != 0) {
      func_0x00010c2ba700(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba720(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba340(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar13);
    lVar7 = *(long *)(lVar3 + 0x30);
    uVar13 = *(undefined8 *)(lVar3 + 0x20);
    func_0x00010bf21f60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,uVar13);
    _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return lVar5;
  }
  return lVar6;
}



/* Entry: 107a98020; end: 107a9823f;  */

void FUN_107a98020(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c2ba340(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x000107a98148(lVar3,param_2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c2b1a60(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  bVar1 = *(byte *)(param_1 + 0x51);
  bVar2 = *(byte *)(param_1 + 0x52);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  if (((bVar2 | bVar1) & 1) != 0) {
    func_0x00010c2ba700(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba720(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba340(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107a98240; end: 107a99df3; -[SCSingleStoryViewingSession _reportStorySnapViewWithStorySnap:fullyViewed:isPresentingOverOpera:isMusicTrackBlocked:contextSnapViewMetrics:stalledTimeMs:isViewed:seekPointIndex:pageId:pageProperties:] */

void FUN_107a98240(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *in_x6;
  long in_x7;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(in_x6);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  puVar3 = PTR_PTR_1126d62c8;
  func_0x00010c25b2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c15f2e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b99c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf5b080(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_3;
  func_0x00010bec5100();
  _objc_release(puVar20);
  iVar2 = (int)*(undefined8 *)(param_3 + 0x58);
  func_0x000108534aa8();
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0ba060();
    bVar1 = lVar6 != -1;
  }
  func_0x00010c2ba700(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(in_stack_00000018);
  if ((((lVar18 == 5) && (bVar1)) || (iVar2 == 0x66)) || (iVar2 == 0x4b)) {
    puVar20 = (undefined *)0x0;
    if ((param_5 != 0) && (in_stack_00000018 != 0)) {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = 1;
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_stack_00000018);
      uVar4 = in_stack_00000018;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar20);
      _objc_release(uVar4);
      uVar21 = in_stack_00000018;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar21;
      func_0x00010bf1f3c0();
      if ((int)uVar9 != 0) {
        uVar9 = in_stack_00000018;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf1f3c0();
        uVar22 = (uint)uVar10;
        _objc_release(uVar9);
      }
      _objc_release(uVar21);
      if (((uint)uVar5 & (uint)(uVar4 != 0)) == 0) {
        _objc_release(in_stack_00000018);
LAB_107a985b8:
        _objc_retain(in_stack_00000018);
        uVar4 = in_stack_00000018;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        if ((uVar5 & 1) == 0) {
          _objc_release(uVar4);
          _objc_release(in_stack_00000018);
        }
        else {
          uVar5 = in_stack_00000018;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar5;
          func_0x00010bf1f3c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(in_stack_00000018);
          if ((uVar21 & 1) == 0) goto LAB_107a98624;
        }
LAB_107a98668:
        uVar4 = in_stack_00000018;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        if ((int)uVar5 == 0) {
LAB_107a98880:
          _objc_retain(in_stack_00000018);
          uVar4 = in_stack_00000018;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf1f3c0();
          if ((int)uVar5 == 0) {
            uVar5 = in_stack_00000018;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar5;
            func_0x00010bf1f3c0();
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(in_stack_00000018);
            if ((uVar21 & 1) == 0) {
              uVar4 = param_5;
              func_0x00010bf5b080();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c235f00();
              _objc_release(uVar4);
              puVar20 = (undefined *)0x0;
              if ((int)uVar5 == 0) {
                puVar20 = PTR____kCFBooleanTrue_11034ab68;
              }
            }
            else {
              puVar20 = (undefined *)0x0;
            }
            goto LAB_107a988d0;
          }
          _objc_release(uVar4);
          puVar20 = (undefined *)0x0;
          uVar21 = in_stack_00000018;
        }
        else {
          _objc_retain(in_stack_00000018);
          _objc_retain(param_5);
          uVar5 = in_stack_00000018;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar21 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar20);
          uVar4 = uVar5;
          if ((uVar21 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar5);
          uVar21 = in_stack_00000018;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar9 = uVar21;
          _objc_opt_isKindOfClass(uVar21,puVar20);
          uVar5 = uVar21;
          if ((uVar9 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar21);
          uVar9 = param_5;
          func_0x00010853a704();
          uVar21 = uVar5;
          if ((int)uVar9 == 0) {
            uVar9 = param_5;
            func_0x00010853a378();
            if (((int)uVar9 == 0) || (uVar9 = uVar5, func_0x00010c08fa60(), uVar9 != 0)) {
              uVar10 = in_stack_00000018;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
              uVar11 = uVar10;
              _objc_opt_isKindOfClass(uVar10,puVar20);
              uVar9 = uVar10;
              if ((uVar11 & 1) == 0) {
                uVar9 = 0;
              }
              _objc_retain(uVar9);
              _objc_release(uVar10);
              if (uVar4 != 0) {
                uVar21 = uVar4;
              }
              if (uVar9 != 0) {
                uVar21 = uVar9;
              }
              _objc_retain(uVar21);
              _objc_release(uVar9);
            }
            else {
              uVar21 = 0;
            }
          }
          else {
            if (uVar4 != 0) {
              uVar21 = uVar4;
            }
            _objc_retain(uVar21);
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(param_5);
          _objc_release(in_stack_00000018);
          uVar4 = uVar21;
          func_0x000107a9b534(uVar21,param_5);
          puVar20 = PTR____kCFBooleanFalse_11034ab60;
          if ((uVar4 & 1) == 0) {
            puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = in_stack_00000018;
            FUN_107a9b270(in_stack_00000018,param_5,puVar20,puVar8);
            _objc_release(puVar20);
            puVar20 = PTR____kCFBooleanFalse_11034ab60;
            if ((uVar4 & 1) == 0) {
              _objc_release(uVar21);
              goto LAB_107a98880;
            }
          }
        }
        _objc_release(uVar21);
      }
      else {
        uVar4 = in_stack_00000018;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        _objc_release(in_stack_00000018);
        if ((((uint)uVar5 ^ 1) & uVar22 & 1) == 0) goto LAB_107a985b8;
LAB_107a98624:
        uVar4 = in_stack_00000018;
        FUN_107a9b270(in_stack_00000018,param_5,puVar7,puVar8);
        puVar20 = PTR____kCFBooleanFalse_11034ab60;
        if ((uVar4 & 1) == 0) goto LAB_107a98668;
      }
LAB_107a988d0:
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  _objc_release(in_stack_00000018);
  _objc_release(param_5);
  _objc_retain(puVar20);
  func_0x00010c2ab4e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar20);
  if (param_5 != 0) {
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5120();
    _objc_release(puVar20);
  }
  func_0x00010c2ba740(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bec50e0(param_3);
  func_0x00010c2ba720(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar18 = param_3;
  func_0x00010bec4a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba460(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar18);
  uVar4 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010c0c1320(uVar4);
  _objc_release(uVar4);
  func_0x00010c2aea00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be0aaa0(param_3);
  func_0x00010c2ad480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf97160(param_3);
  func_0x00010c2ad4a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar18 = param_3 + 0x1f0;
  _objc_loadWeakRetained(lVar18);
  func_0x00010bf9ba60();
  func_0x00010c2ad720(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar18);
  func_0x00010be0c140(param_3);
  func_0x00010c2ad6c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar18 = param_3 + 0x1f0;
  _objc_loadWeakRetained();
  lVar6 = lVar18;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = lVar6;
  func_0x00010c27dd80();
  if ((((lVar18 == 4) || (lVar18 = lVar6, func_0x00010c27dd80(), lVar18 == 5)) ||
      (lVar18 = lVar6, func_0x00010c27dd80(), lVar18 == 10)) ||
     ((lVar18 = lVar6, func_0x00010c27dd80(), lVar18 == 0xc ||
      (lVar18 = lVar6, func_0x00010c27dd80(), lVar18 == 9)))) {
    func_0x00010c2b3120(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c24f200(lVar6);
  func_0x00010c2baca0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24f200(lVar6);
  func_0x00010c2bace0(param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24f260(lVar6);
  func_0x00010c2bacc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24f280(lVar6);
  func_0x00010c2bad00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc8e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc940(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar18 = param_3 + 0x1f0;
  _objc_loadWeakRetained(lVar18);
  func_0x00010c0ea860();
  func_0x00010c2b4ea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar18);
  func_0x00010bebd380(param_3);
  func_0x00010c2b9820(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c26f2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c2b97e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  dVar24 = (double)in_x7;
  func_0x00010c2b9f00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c26f2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071060();
  func_0x00010c2b9800(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c2b3b00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010becda60(param_3);
  *(double *)(param_3 + 0x178) = dVar24 + *(double *)(param_3 + 0x178);
  func_0x00010c2b0e60(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(param_3 + 0x15a) == '\x01') {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar24,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab240(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar20);
  }
  func_0x00010c2b3b80(dVar24,puVar3);
  fVar23 = SUB84(dVar24,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  if ((uVar5 < 0x1b) && ((1L << (uVar5 & 0x3f) & 0x7e7fc60U) != 0)) {
    _objc_release(uVar4);
    func_0x00010c2b1620(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    _objc_release(uVar4);
  }
  uVar4 = param_5;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  func_0x00010c2b9760(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar12 = *(undefined8 *)(param_3 + 0x1c0);
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  func_0x00010bfecde0(uVar12);
  func_0x00010bf529e0(uVar12);
  func_0x00010c2b9400(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9420(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c2b5740((double)fVar23,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar20);
  uVar4 = param_5;
  func_0x00010c243cc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9020(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((int)uVar21 != 0) {
    uVar4 = param_5;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf7f0c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uVar21 = param_5;
      func_0x00010c0c5340(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar21;
      func_0x00010bf06600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
    }
    else {
      _objc_retain(uVar5);
      uVar9 = uVar5;
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x000107cd32fc(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bae00(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar9);
  }
  func_0x000108537c94(*(undefined8 *)(param_3 + 0x1c0));
  func_0x00010c2b1240(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108537f50(*(undefined8 *)(param_3 + 0x1c0));
  func_0x00010c2b0700(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010befd0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010befd0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c096600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2c20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar21;
  func_0x00010c08fa60();
  _objc_release(uVar21);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (uVar9 != 0) {
    func_0x00010c2af560(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c0802e0(in_x6);
    func_0x00010c2bcc40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (in_x6 == (undefined *)0x0) {
    uVar4 = param_5;
    func_0x00010bf4e860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    puVar20 = PTR_PTR_1126b2378;
    if (uVar5 == 0) goto LAB_107a99408;
    uVar4 = param_5;
    func_0x00010bf4e860(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar7 = puVar20;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfd95a0();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar8 != 0) {
      puVar8 = puVar20;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b43a0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar13);
      goto LAB_107a993f8;
    }
  }
  else {
    func_0x00010c2ab0a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = in_x6;
    func_0x00010c0d30a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar7 == (undefined *)0x0) goto LAB_107a99408;
    puVar7 = in_x6;
    func_0x00010c0d30a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    func_0x00010c14de00(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b43a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar7);
    puVar20 = in_x6;
    func_0x00010c0d30a0(in_x6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar20;
    func_0x00010c0d3040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4380(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
LAB_107a993f8:
    _objc_release(puVar8);
  }
  _objc_release(puVar20);
LAB_107a99408:
  func_0x00010c2b0f80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c24b5a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf95f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9d40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 != 0) {
    uVar5 = param_5;
    func_0x00010befd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar5;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar21;
    func_0x00010c08fa60();
    _objc_release(uVar21);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (uVar9 != 0) {
      uVar4 = param_5;
      func_0x00010befd0c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bc520(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  func_0x00010c2b1380(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar18 = param_3 + 0x1f0;
  _objc_loadWeakRetained(lVar18);
  lVar14 = lVar18;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b39c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar18);
  uVar4 = param_5;
  func_0x00010bf829c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a7a0();
  func_0x00010c2b23e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c2ba7c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 != 0) {
    uVar5 = param_5;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar5;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar21;
    func_0x00010c08fa60();
    _objc_release(uVar21);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (uVar9 != 0) {
      uVar4 = param_5;
      func_0x00010c0b3ae0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2475a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b94a0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  uVar15 = *(undefined8 *)(param_3 + 0x1c8);
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c241720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar15);
  func_0x00010be41ba0();
  uVar16 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar15);
  _objc_release(uVar16);
  func_0x00010c2b09a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    func_0x00010c2b4160(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_5;
    func_0x00010c0d2260(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1581e0();
    func_0x00010c2b4160(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    func_0x00010c2b41a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_5;
    func_0x00010c0d2260(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158380();
    func_0x00010c2b41a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  uVar16 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010bfb8ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba820(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar16);
  func_0x00010c2b4ec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5400(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar16);
  uVar15 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084b00();
  func_0x00010c2b9b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  uVar16 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbc20(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4920(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar16);
  uVar17 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar17;
  func_0x00010c084e40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c29fa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bca80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_3 + 0x128);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar17;
  func_0x00010c084e40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf32a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa360(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar17);
  func_0x00010c2bbc40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaf00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaee0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aaea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7c40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7bc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7ba0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7c00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_3 + 0x138) == -1) {
    lVar18 = *(long *)(param_3 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar18 != 0) {
      uVar15 = *(undefined8 *)(param_3 + 0x128);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1e60();
      _objc_release(uVar15);
    }
  }
  func_0x00010c2b5420(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (in_stack_00000008 != 0) {
    func_0x00010c2b7fe0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x000108539018();
  uVar4 = param_5;
  func_0x00010c2815a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    uVar4 = param_5;
    func_0x00010c2815a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar20 = PTR_PTR_1126c0328;
    func_0x00010c2416c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar20;
    func_0x00010c08bdc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08fa60();
    if (puVar8 != (undefined *)0x0) {
      func_0x00010c2b2540(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    _objc_release(puVar20);
    _objc_release(uVar5);
  }
  uVar15 = *(undefined8 *)(param_3 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar15);
  FUN_107a97e30();
  _objc_retain(puVar3);
  _objc_retain(param_5);
  func_0x00010bec46c0(param_3);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_x6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 107a99df4; end: 107a99df7;  */

void FUN_107a99df4(void)

{
  return;
}



/* Entry: 107a99df8; end: 107a99e17;  */

void FUN_107a99df8(long param_1)

{
  func_0x00010c2b6440(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a99e18; end: 107a99e2b;  */

void FUN_107a99e18(void)

{
  return;
}



/* Entry: 107a99e2c; end: 107a99f5f;  */

void FUN_107a99e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c2ba340(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5b080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a98148(lVar4,param_2,uVar5,uVar3,*(undefined1 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (lVar4 != 0) {
    func_0x00010c2b1a60(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aed60;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  func_0x00010bf5e0c0(puVar1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 107a99f60; end: 107a9a113;  */

void FUN_107a99f60(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010c2b56c0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010c2ba340(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  bVar1 = *(byte *)(param_1 + 0x31);
  bVar2 = *(byte *)(param_1 + 0x32);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  if (((bVar2 | bVar1) & 1) != 0) {
    func_0x00010c2ba700(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba720(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba340(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar7);
  if (*(char *)(param_1 + 0x33) == '\x01') {
    func_0x00010c2ba340(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b11e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
  func_0x00010c08fa60(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x200));
  uVar7 = uVar3;
  func_0x00010c25b960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  uVar4 = uVar3;
  func_0x00010c25b720(uVar3);
  func_0x00010bb15538();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c25b7c0(uVar3);
  func_0x00010bb1577c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0c20(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107a9a114; end: 107a9a6cf; -[SCSingleStoryViewingSession _reportGeofilterStorySnapViewWithStorySnap:snappableInviteAction:] */

void FUN_107a9a114(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde79c0(param_1,param_2,param_3);
  if ((int)lVar1 == 0) goto LAB_107a9a684;
  puVar2 = PTR_PTR_1126d62d0;
  func_0x00010bfc17e0(PTR_PTR_1126d62d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba680(puVar2,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar4 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  uVar3 = uVar5 + 1;
  if (uVar3 < 0x1c) {
    if ((1L << (uVar3 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar3 == 8) {
        uVar11 = 5;
      }
      else {
        if (uVar3 != 10) goto LAB_107a9a6c8;
        uVar11 = 0xe;
      }
    }
    else {
      uVar11 = 1;
      if ((uVar5 + 1 < 0x1c) && ((1L << (uVar5 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (uVar5 + 1 < 0x1b) {
          uVar11 = *(undefined8 *)(&UNK_10dee0dd0 + (uVar5 + 1) * 8);
        }
        else {
          uVar11 = 0;
        }
      }
    }
  }
  else {
LAB_107a9a6c8:
    uVar11 = 2;
  }
  func_0x00010c2b3b00(puVar2,param_2,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = param_3;
  func_0x00010befd0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad180(puVar2,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010befd0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad160(puVar2,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf30da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf93b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad1a0(puVar2,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c2815a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126c0328;
  func_0x00010c2416c0(PTR_PTR_1126c0328,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfade60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adec0(puVar2,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bfaddc0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade80(puVar2,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bfae4e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba200(puVar2,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c08bdc0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2540(puVar2,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bfade20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  if ((undefined *)0x1 < puVar8) {
    puVar7 = puVar6;
    func_0x00010bfade20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2adea0(puVar2,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  func_0x00010c2bbfa0(puVar2,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010bf9ba60();
  func_0x00010c2ad720(puVar2,param_2,lVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  func_0x000108534aa8(uVar11);
  func_0x00010c2bc940(puVar2,param_2,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bebd380(param_1);
  func_0x00010c2b9820(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c2acb40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c071060();
  func_0x00010c2b0620(puVar2,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  puVar7 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a76a0(uVar11,param_2,puVar7);
  _objc_release(puVar7);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bebd380(param_1);
  func_0x00010c0df720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c071060();
  if ((uVar5 & 1) == 0) {
    func_0x00010bebd380(0xbff0000000000000,param_1);
  }
  func_0x00010c0df720(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf30da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf93b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb07e0(uVar11,param_2,puVar7,puVar8,uVar10,uVar4,2,param_4);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(uVar11);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar2);
LAB_107a9a684:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a9a6d0; end: 107a9a7a7; -[SCSingleStoryViewingSession _subscribeToOperaAnalyticsEvents] */

void FUN_107a9a6d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x159) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x150);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107a9a7a8; end: 107a9a863;  */

void FUN_107a9a7a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0be740(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a9a864; end: 107a9a8bb;  */

void FUN_107a9a864(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a9a8bc; end: 107a9a8c7;  */

void FUN_107a9a8bc(void)

{
  return;
}



/* Entry: 107a9a8c8; end: 107a9a98f; -[SCSingleStoryViewingSession _handleOperaPlaybackEventPageId:isPlaying:] */

void FUN_107a9a8c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new(PTR_PTR_1126b46f0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x168),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c0f5b20();
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x160),param_2,param_3);
  }
  else {
    func_0x00010c24d960();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x160),param_2,param_3);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a9a990; end: 107a9ab4b; -[SCSingleStoryViewingSession _totalViewTimeForPageId:] */

ulong FUN_107a9a990(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x159) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x168);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed820();
      iVar2 = (int)*(undefined8 *)(param_1 + 0x160);
      func_0x00010bf4b900();
      if (iVar2 == 0) {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        lVar5 = *(long *)(param_1 + 0x168);
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar7 = *plStack_130;
          do {
            lVar8 = 0;
            do {
              if (*plStack_130 != lVar7) {
                _objc_enumerationMutation(lVar5);
              }
              uVar6 = *(ulong *)(param_1 + 0x160);
              func_0x00010bf4b900();
              if ((uVar6 & 1) == 0) {
                func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x168));
              }
              lVar8 = lVar8 + 1;
            } while (lVar3 != lVar8);
            lVar3 = lVar5;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar5);
      }
      else {
        func_0x00010c138160(uVar4);
      }
      _objc_release(uVar4);
    }
  }
  uVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_148 = FUN_107a9ab4c;
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x2020000000;
    uStack_168 = 0;
    lStack_160 = param_1;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010c0bdf40(*(undefined8 *)(uVar6 + 0x1c0));
    bVar1 = *(byte *)(puStack_178 + 3);
    __Block_object_dispose(&uStack_180,8);
    return (ulong)bVar1;
  }
  return uVar6;
}



/* Entry: 107a9ab4c; end: 107a9ac2b; -[SCSingleStoryViewingSession _isManagedSavedStory] */

undefined1 FUN_107a9ab4c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a9ac44;
  puStack_50 = &UNK_1109215c8;
  puStack_38 = puStack_48;
  func_0x00010c0bdf40(*(undefined8 *)(param_1 + 0x1c0),param_2,
                      &PTR___NSConcreteGlobalBlock_1109f8c40,&PTR___NSConcreteGlobalBlock_1109f8c60,
                      &PTR___NSConcreteGlobalBlock_1109f8c80,&PTR___NSConcreteGlobalBlock_1109f8ca0,
                      &PTR___NSConcreteGlobalBlock_1109f8cc0,&PTR___NSConcreteGlobalBlock_1109f8ce0,
                      &puStack_68,&PTR___NSConcreteGlobalBlock_1109f8d00);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107a9ac2c; end: 107a9ac43;  */

void FUN_107a9ac2c(void)

{
  return;
}



/* Entry: 107a9ac44; end: 107a9ac7f;  */

void FUN_107a9ac44(long param_1,long param_2)

{
  func_0x00010c29d360();
  if (param_2 == 0x67) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 107a9ac80; end: 107a9ac83;  */

void FUN_107a9ac80(void)

{
  return;
}



/* Entry: 107a9ac84; end: 107a9afb3; -[SCSingleStoryViewingSession _logCreatorSubscribeEntryPointImpressionIfNeeded:] */

undefined * FUN_107a9ac84(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
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
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar4 == (undefined *)0x0) goto LAB_107a9af70;
    puVar1 = param_3;
    func_0x00010bf4e860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2378;
    func_0x00010c0f40e0(PTR_PTR_1126b2378,param_2,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfdd280();
    if (((ulong)puVar4 & 1) == 0) {
      _objc_release(puVar3);
LAB_107a9af60:
      _objc_release(puVar2);
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
      puVar4 = puVar3;
      func_0x00010c269920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf8d2c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_130,auStack_f0,0x10);
      if (puVar4 != (undefined *)0x0) {
        lVar10 = *plStack_120;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(puVar5);
            }
            lVar12 = *(long *)(lStack_128 + (long)puVar11 * 8);
            lVar6 = lVar12;
            func_0x00010bfd3a00();
            if ((int)lVar6 != 0) {
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar12;
              func_0x00010bf31ca0();
              if ((int)lVar6 == 0x48) {
LAB_107a9af00:
                _objc_release(lVar12);
                _objc_release(puVar5);
                _objc_release(puVar3);
                _objc_release(puVar2);
                _objc_release(puVar1);
                uVar9 = *(undefined8 *)(param_1 + 8);
                puVar1 = param_3;
                func_0x00010bf5b080(param_3);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar1;
                func_0x00010bf5b440();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0a4240(uVar9,param_2,puVar2);
                goto LAB_107a9af60;
              }
              lVar6 = lVar12;
              func_0x00010bf31ca0();
              if ((int)lVar6 == 1) {
                lVar6 = lVar12;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c08fa60();
                if (lVar7 == 0) {
                  _objc_release(lVar6);
                }
                else {
                  lVar7 = lVar12;
                  func_0x00010c086560();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010c11f440();
                  _objc_release(lVar7);
                  _objc_release(lVar6);
                  if (lVar8 != 0x7fffffffffffffff) goto LAB_107a9af00;
                }
              }
              _objc_release(lVar12);
            }
            puVar11 = puVar11 + 1;
          } while (puVar4 != puVar11);
          puVar4 = puVar5;
          func_0x00010bf52a60(puVar5,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
LAB_107a9af70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(undefined **)(param_3 + 0x1c0);
  }
  return param_3;
}



/* Entry: 107a9afb4; end: 107a9afbb; -[SCSingleStoryViewingSession storiesPlaybackSequence] */

undefined8 FUN_107a9afb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 107a9afbc; end: 107a9afc3; -[SCSingleStoryViewingSession firstStorySnap] */

undefined8 FUN_107a9afbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 107a9afc4; end: 107a9afcb; -[SCSingleStoryViewingSession currentStorySnap] */

undefined8 FUN_107a9afc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 107a9afcc; end: 107a9afd3; -[SCSingleStoryViewingSession didSwipeUp] */

undefined1 FUN_107a9afcc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b8);
}



/* Entry: 107a9afd4; end: 107a9afdb; -[SCSingleStoryViewingSession storyViewingActionContext] */

undefined8 FUN_107a9afd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 107a9afdc; end: 107a9afe3; -[SCSingleStoryViewingSession currentStoryDidShowLoadingScreen] */

undefined1 FUN_107a9afdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b9);
}



/* Entry: 107a9afe4; end: 107a9afeb; -[SCSingleStoryViewingSession isFullyViewed] */

undefined1 FUN_107a9afe4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ba);
}



/* Entry: 107a9afec; end: 107a9aff3; -[SCSingleStoryViewingSession totalViewedSnapsCount] */

undefined8 FUN_107a9afec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 107a9aff4; end: 107a9affb; -[SCSingleStoryViewingSession totalOpenedSnapsCount] */

undefined8 FUN_107a9aff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 107a9affc; end: 107a9b003; -[SCSingleStoryViewingSession currentStoryHasPlayed] */

undefined1 FUN_107a9affc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1bb);
}



/* Entry: 107a9b004; end: 107a9b01b; -[SCSingleStoryViewingSession friendStoryViewingSession] */

void FUN_107a9b004(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a9b01c; end: 107a9b023; -[SCSingleStoryViewingSession entryInteraction] */

undefined8 FUN_107a9b01c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 107a9b024; end: 107a9b02b; -[SCSingleStoryViewingSession storyViewId] */

undefined8 FUN_107a9b024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 107a9b02c; end: 107a9b043; -[SCSingleStoryViewingSession operaControlling] */

void FUN_107a9b02c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a9b044; end: 107a9b04f; -[SCSingleStoryViewingSession setOperaControlling:] */

void FUN_107a9b044(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x208,param_3);
  return;
}


