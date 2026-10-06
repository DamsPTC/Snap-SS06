/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f97ec0; end: 104f97f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f97ec0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d34c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f97f10; end: 104f98013; -[SCMusicPickerViewController pausePlaybackWithIsPaused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f97f10(long param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112718630;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_3;
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104f98014; end: 104f98073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f98014(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0d3540();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f98074; end: 104f980ef; -[SCMusicPickerViewController onLaunchMusicSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f98074(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3018;
  _objc_alloc(PTR_PTR_1126b3018);
  func_0x00010c0390c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127185c4);
  func_0x00010c0d3960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bb00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f980f0; end: 104f98153; -[SCMusicPickerViewController onReportSoundWithTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f980f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127185d0);
  func_0x00010c277e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133c40(uVar1,param_2,param_3,1,*(undefined8 *)(param_1 + _DAT_11271862c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f98154; end: 104f981bb; -[SCMusicPickerViewController musicSyncActionHandlerDidFinishWithCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f98154(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127185c4);
  func_0x00010c0d3960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94be0();
  _objc_release(uVar1);
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onDismiss_112616920);
  return;
}



/* Entry: 104f981bc; end: 104f981cb; -[SCMusicPickerViewController didDismissMusicOperaPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f981bc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112718634) = 0;
  return;
}



/* Entry: 104f981cc; end: 104f982df; -[SCMusicPickerViewController musicOperaPresenter:didSelectTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f981cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + _DAT_112718634) = 0;
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f982e0; end: 104f9831b;  */

void FUN_104f982e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c278800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f9831c; end: 104f983a3; -[SCMusicPickerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104f9831c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_112718620);
  if ((param_5 == uVar1) &&
     (((*(byte *)(param_3 + _DAT_112718634) & 1) != 0 ||
      (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 104f983a4; end: 104f983a7; -[SCMusicPickerViewController cardToExpandTransition] */

void FUN_104f983a4(void)

{
  return;
}



/* Entry: 104f983a8; end: 104f983af; -[SCMusicPickerViewController cardTransitionWillBeginWithView:] */

void FUN_104f983a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be054b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doDismissWithCompletion__11255eec8,0);
  return;
}



/* Entry: 104f983b0; end: 104f983b3; -[SCMusicPickerViewController cardTransitionDidUpdateProgress:] */

void FUN_104f983b0(void)

{
  return;
}



/* Entry: 104f983b4; end: 104f9847b; -[SCMusicPickerViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f983b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    lVar4 = (long)_DAT_112718630;
    uVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_104f98464;
    puVar3 = (undefined *)(param_1 + lVar4);
    _objc_loadWeakRetained(puVar3);
    func_0x00010c0d34a0();
  }
  else {
    if (param_4 != 0) goto LAB_104f98464;
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar3);
  }
  _objc_release(puVar3);
LAB_104f98464:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f9847c; end: 104f9853f; -[SCMusicPickerViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104f9847c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_6,param_4,lVar1);
  _objc_release(param_6);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112718620;
  func_0x00010bf512a0(param_1,param_2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010bf2d520(param_1,param_2,uVar2,param_4,1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104f98540; end: 104f9854b; -[SCMusicPickerViewController defaultProjectNameV2] */

void FUN_104f98540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_music_112612468);
  return;
}



/* Entry: 104f9854c; end: 104f9863f; -[SCMusicPickerViewController trackSelected:] */

void FUN_104f9854c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f98640; end: 104f986d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f98640(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112718630;
    _objc_loadWeakRetained(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_1127185c0);
    func_0x00010c247a20(uVar3);
    FUN_104f97428(uVar4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3460(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f986d8; end: 104f9872b; -[SCMusicPickerViewController _doDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f986d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f9872c; end: 104f98733; -[SCMusicPickerViewController pageViewName] */

undefined8 FUN_104f9872c(void)

{
  return 0x9d;
}



/* Entry: 104f98734; end: 104f9873b; -[SCMusicPickerViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104f98734(void)

{
  return 0;
}



/* Entry: 104f9873c; end: 104f98747; -[SCMusicPickerViewController pushToValdiMarshaller:] */

void FUN_104f9873c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af99cf8(param_3,param_1);
  func_0x00010af99cf0();
  func_0x00010af99ce8();
  func_0x00010af99c50();
  func_0x00010af99c60();
  return;
}



/* Entry: 104f98748; end: 104f98767; -[SCMusicPickerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f98748(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112718630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f98768; end: 104f9877b; -[SCMusicPickerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f98768(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112718630,param_3);
  return;
}



/* Entry: 104f9877c; end: 104f989e3; -[SCMusicPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9877c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718630);
  _objc_storeStrong(param_1 + _DAT_11271861c,0);
  _objc_storeStrong(param_1 + _DAT_112718618,0);
  _objc_storeStrong(param_1 + _DAT_112718614,0);
  _objc_storeStrong(param_1 + _DAT_112718610,0);
  _objc_storeStrong(param_1 + _DAT_11271860c,0);
  _objc_storeStrong(param_1 + _DAT_112718608,0);
  _objc_storeStrong(param_1 + _DAT_112718604,0);
  _objc_storeStrong(param_1 + _DAT_1127185fc,0);
  _objc_storeStrong(param_1 + _DAT_1127185f8,0);
  _objc_storeStrong(param_1 + _DAT_1127185f4,0);
  _objc_storeStrong(param_1 + _DAT_112718638,0);
  _objc_storeStrong(param_1 + _DAT_112718624,0);
  _objc_storeStrong(param_1 + _DAT_1127185e8,0);
  _objc_storeStrong(param_1 + _DAT_1127185ec,0);
  _objc_storeStrong(param_1 + _DAT_1127185e0,0);
  _objc_storeStrong(param_1 + _DAT_11271862c,0);
  _objc_storeStrong(param_1 + _DAT_1127185e4,0);
  _objc_storeStrong(param_1 + _DAT_1127185dc,0);
  _objc_storeStrong(param_1 + _DAT_1127185d8,0);
  _objc_storeStrong(param_1 + _DAT_1127185d4,0);
  _objc_storeStrong(param_1 + _DAT_112718620,0);
  _objc_storeStrong(param_1 + _DAT_112718600,0);
  _objc_storeStrong(param_1 + _DAT_1127185d0,0);
  _objc_storeStrong(param_1 + _DAT_1127185cc,0);
  _objc_storeStrong(param_1 + _DAT_1127185c8,0);
  _objc_storeStrong(param_1 + _DAT_1127185c4,0);
  _objc_storeStrong(param_1 + _DAT_1127185c0,0);
  _objc_storeStrong(param_1 + _DAT_1127185bc,0);
  _objc_storeStrong(param_1 + _DAT_1127185b8,0);
  _objc_storeStrong(param_1 + _DAT_1127185b4,0);
  _objc_storeStrong(param_1 + _DAT_1127185b0,0);
  _objc_storeStrong(param_1 + _DAT_1127185ac,0);
  _objc_storeStrong(param_1 + _DAT_1127185a8,0);
  _objc_storeStrong(param_1 + _DAT_1127185a4,0);
  _objc_storeStrong(param_1 + _DAT_1127185a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271859c);
  return;
}



/* Entry: 104f989e4; end: 104f98b63; -[SCMusicSpotlightOperaPresenter initWithTopicOperaPresenter:musicCameraPresenter:topicPageRequester:baseViewController:blizzardLogger:selectionLoader:delegate:] */

undefined1 *
FUN_104f989e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e55d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_9);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    *(undefined1 *)((long)puVar1 + 0x40) = 1;
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



/* Entry: 104f98b64; end: 104f98cb7; -[SCMusicSpotlightOperaPresenter presentSpotlightSnapFromCard:] */

void FUN_104f98b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar2);
    _objc_retain(param_3);
    func_0x00010be15080(param_1);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f98cb8; end: 104f98daf;  */

void FUN_104f98cb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_2;
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f98db0; end: 104f98f0f;  */

void FUN_104f98db0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    func_0x00010c290a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = lVar2;
      func_0x00010bee6860(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21db00(*(undefined8 *)(lVar2 + 8),param_2,lVar3);
      _objc_release(lVar3);
    }
    uVar8 = *(undefined8 *)(lVar2 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c277900(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar2 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010be38e40(lVar2,param_2,uVar6,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c10e9c0(uVar8,param_2,uVar1,uVar5,uVar9,lVar7,lVar3,0x51,0,0,3);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    *(undefined1 *)(lVar2 + 0x61) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f98f10; end: 104f98f67; -[SCMusicSpotlightOperaPresenter willDismissOperaForTopicStoryId:] */

void FUN_104f98f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f98f68; end: 104f98f6f; -[SCMusicSpotlightOperaPresenter baseViewForTopicStoryId:] */

undefined8 FUN_104f98f68(void)

{
  return 0;
}



/* Entry: 104f98f70; end: 104f9907f; -[SCMusicSpotlightOperaPresenter didBeginPlayingStoryId:] */

void FUN_104f98f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar1 = param_1;
    func_0x00010be38e40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0();
    lVar3 = lVar1;
    func_0x00010c0840e0();
    if ((ulong)(lVar2 - lVar3) < 10) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010be15080(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f99080; end: 104f990bf;  */

void FUN_104f99080(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x00010c28b3a0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f990c0; end: 104f99257; -[SCMusicSpotlightOperaPresenter _fetchTopicsWithCompletion:] */

void FUN_104f990c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe198;
  }
  else {
    if (*(char *)(param_1 + 0x60) != '\x01') {
      func_0x00010c275280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010af28d38();
      func_0x00010c14de00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0x60) = 1;
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bfaa520(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_104f99214;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe1b8;
  }
  func_0x000108091430(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,ppuVar2);
LAB_104f99214:
  _objc_release(ppuVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f99258; end: 104f99507;  */

long FUN_104f99258(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x60) = 0;
    if ((param_6 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(param_1 + 0x20);
      puVar4 = puVar3;
      func_0x000108091430();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar11 + 0x10))(lVar11,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x38) = param_4;
    _objc_release(uVar5);
    *(undefined1 *)(lVar2 + 0x40) = param_5;
    lVar11 = *(long *)(lVar2 + 0x48);
    if (lVar11 == 0) {
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(lVar2 + 0x48);
      *(long *)(lVar2 + 0x48) = param_3;
      _objc_release(uVar5);
    }
    else {
      func_0x00010c0d3c80();
      _objc_retain(param_3);
      lVar6 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          lVar7 = *(long *)(lVar2 + 0x48);
          func_0x00010bfaea20();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf529e0();
          if (lVar8 == 0) {
            func_0x00010befa120(lVar11);
          }
          _objc_release(lVar7);
          lVar10 = lVar10 + 1;
        } while (lVar6 != lVar10);
        lVar6 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      lVar6 = lVar11;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(lVar2 + 0x48);
      *(long *)(lVar2 + 0x48) = lVar6;
      _objc_release(uVar5);
      _objc_release(lVar11);
    }
    lVar11 = 0;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010c2756a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c2756a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c0720c0(lVar11);
  _objc_release(uVar5);
  _objc_release(lVar11);
  return lVar2;
}



/* Entry: 104f99508; end: 104f99577;  */

undefined8 FUN_104f99508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2756a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2756a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104f99578; end: 104f99837; -[SCMusicSpotlightOperaPresenter _indexPathInTopicStoriesForSnapId:storyId:] */

void FUN_104f99578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar8 = 0;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  do {
    uVar3 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf529e0();
    if (uVar3 <= uVar8) break;
    uVar4 = *(ulong *)(param_1 + 0x48);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    do {
      uVar5 = uVar4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      if (uVar6 <= uVar3) break;
      uVar5 = uVar4;
      func_0x00010c245680(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010bf0e700(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(uVar4);
      func_0x00010c0c1340(uVar5);
      _objc_release(uVar5);
      bVar1 = *(byte *)(puStack_b0 + 3);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(uVar6);
      uVar3 = uVar3 + 1;
    } while ((bVar1 & 1) == 0);
    cVar2 = *(char *)(puStack_b0 + 3);
    _objc_release(uVar4);
    uVar8 = uVar8 + 1;
  } while (cVar2 != '\x01');
  puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104f99838; end: 104f9983f;  */

void FUN_104f99838(void)

{
  return;
}



/* Entry: 104f99840; end: 104f998f7;  */

void FUN_104f99840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (iVar3 == 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2756a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(param_2);
    if (iVar3 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
      return;
    }
  }
  else {
    _objc_release(param_2);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f998f8; end: 104f9994b;  */

void FUN_104f998f8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 104f9994c; end: 104f9994f;  */

void FUN_104f9994c(void)

{
  return;
}



/* Entry: 104f99950; end: 104f999d7; -[SCMusicSpotlightOperaPresenter _useSoundBlock] */

void FUN_104f99950(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f999d8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f999d8; end: 104f99ac3;  */

void FUN_104f999d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c160();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104f99ac4; end: 104f99cd3;  */

void FUN_104f99ac4(double param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_4 == 0) && (param_3 != 0)) && (*(long *)(param_2 + 0x20) != 0)) {
    puVar1 = PTR_PTR_1126b2ee8;
    _objc_alloc(PTR_PTR_1126b2ee8);
    lVar2 = param_3;
    func_0x00010841fae8(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_68,lVar5);
    }
    _CMTimeGetSeconds(&uStack_68);
    func_0x00010c054ae0(param_1 * 1000.0,puVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
    func_0x00010c0b3ae0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0700(puVar1);
    _objc_release(uVar6);
    lVar2 = *(long *)(param_2 + 0x20) + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0d3120();
    _objc_release(lVar2);
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
    func_0x00010c0b3ae0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0fbb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b06a0(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f99cd4; end: 104f99cdb; -[SCMusicSpotlightOperaPresenter dismissCameraScope:] */

void FUN_104f99cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchMusicCameraFeature_1125c2c98);
  return;
}



/* Entry: 104f99cdc; end: 104f99d63; -[SCMusicSpotlightOperaPresenter .cxx_destruct] */

void FUN_104f99cdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f99d64; end: 104f99e2b; -[SCMusicPickerCameraRollPresenter initWithPresentingViewController:temporaryFileWriterServices:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:] */

undefined8
FUN_104f99d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aff58;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f60();
  _objc_release(param_3);
  func_0x00010c057480(param_1,param_2,puVar1,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104f99e2c; end: 104f9a073; -[SCMusicPickerCameraRollPresenter initWithUIContainer:temporaryFileWriterServices:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:] */

undefined8 *
FUN_104f99e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e55d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_78,puVar1);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f9a074;
    puStack_90 = &UNK_11084d918;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_3);
    func_0x00010c0311a0();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2f00;
    _objc_alloc();
    func_0x00010c0510a0();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar3 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f9a074; end: 104f9a147;  */

void FUN_104f9a074(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1c8b80(param_2);
    _objc_storeWeak(lVar1 + 0x10,param_2);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f9a148; end: 104f9a367; -[SCMusicPickerCameraRollPresenter presentCameraRollViewWithCallback:] */

void FUN_104f9a148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f9a368;
  puStack_70 = &UNK_11085f778;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126aff70;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000107e48148();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053560();
  _objc_release(puVar3);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f9a3a8;
  puStack_a0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(puVar2);
  puStack_98 = puVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(puStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104f9a368; end: 104f9a3a7;  */

void FUN_104f9a368(long param_1,long param_2)

{
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9a3a8; end: 104f9a45b;  */

void FUN_104f9a3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126aff78;
    func_0x00010bf68ba0(PTR_PTR_1126aff78,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24140(uVar5,param_2,uVar6,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar3 = lVar1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf9d620();
    _objc_release(lVar3);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f9a45c; end: 104f9a467; -[SCMusicPickerCameraRollPresenter onBackPressed] */

void FUN_104f9a45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104f9a468; end: 104f9a623; -[SCMusicPickerCameraRollPresenter memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_104f9a468(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104f9a624;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x104f9a650;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_68);
    ppuVar3 = &puStack_b8;
    _objc_retainBlock();
    lVar2 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    _objc_copyWeak(auStack_c0,auStack_68);
    func_0x00010c297260(lVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_release(ppuVar3);
    _objc_release(lVar2);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f9a624; end: 104f9a67b;  */

void FUN_104f9a624(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec0420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9a67c; end: 104f9a7e7;  */

void FUN_104f9a67c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_104f9a7e8;
  uStack_50 = 0x104f9a7f8;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x00010bfea600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar1);
  if ((param_3 == 0) && (puStack_68[5] != 0)) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bdd1420();
  }
  else {
    lVar2 = 0;
    func_0x0001000c5568(0,0x21,0,*(undefined8 *)(param_1 + 0x20));
    func_0x0001000d76cc("APPSTORE",lVar2);
  }
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f9a7e8; end: 104f9a7ff;  */

void FUN_104f9a7e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f9a800; end: 104f9a837;  */

void FUN_104f9a800(long param_1,undefined8 param_2)

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



/* Entry: 104f9a838; end: 104f9a83b; -[SCMusicPickerCameraRollPresenter memoriesPickerV2DidDismiss] */

void FUN_104f9a838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 104f9a83c; end: 104f9a847; -[SCMusicPickerCameraRollPresenter pushToValdiMarshaller:] */

void FUN_104f9a83c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 104f9a848; end: 104f9a8bf; -[SCMusicPickerCameraRollPresenter _stopLoadingAnimation] */

void FUN_104f9a848(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    func_0x00010c12c960();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f9a8c0; end: 104f9a8fb; -[SCMusicPickerCameraRollPresenter _presentVideoTooLongDialog] */

void FUN_104f9a8c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107e48178();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7afe0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f9a8fc; end: 104f9aa5f; -[SCMusicPickerCameraRollPresenter _presentDialogWithMessage:] */

void FUN_104f9a8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR_PTR_1126aed70;
  if (lVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe218;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbe218,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c4e0(puVar4);
    _objc_release(puVar5);
    func_0x00010c211b40(puVar4);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f9aa60; end: 104f9aa6f;  */

void FUN_104f9aa60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f9aa70; end: 104f9aaf7; -[SCMusicPickerCameraRollPresenter _cleanup] */

void FUN_104f9aa70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar3);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f9aaf8; end: 104f9ac7f; -[SCMusicPickerCameraRollPresenter _audioSelected:] */

void FUN_104f9aaf8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if ((param_4 != 0) && (*(long *)(param_2 + 0x38) != 0)) {
    _objc_initWeak(auStack_38,param_2);
    func_0x00010bf8b160(auStack_50,param_4);
    _CMTimeGetSeconds(auStack_50);
    if (param_1 <= 240.0) {
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      puVar2 = auStack_80;
      _objc_copyWeak(puVar2,auStack_38);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar3);
      lVar1 = param_4;
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104f9ac80;
      puStack_60 = &UNK_1108434b0;
      puVar2 = auStack_58;
      _objc_copyWeak(puVar2,auStack_38);
      lVar1 = 0;
      func_0x0001000c5568(0,0x21,0,&puStack_78);
      func_0x0001000d76cc("APPSTORE",lVar1);
    }
    _objc_release(lVar1);
    _objc_destroyWeak(puVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104f9ac80; end: 104f9ad37;  */

void FUN_104f9ac80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec31c0(param_1);
    func_0x00010be7f4a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9ad38; end: 104f9ad47;  */

void FUN_104f9ad38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),PTR_s_completeWithValue__1125ae900,
             param_2);
  return;
}



/* Entry: 104f9ad48; end: 104f9afc3; -[SCMusicPickerCameraRollPresenter _startLoadingAnimation] */

void FUN_104f9ad48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar2 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar12);
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x30),param_2,0);
    }
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar11 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar11);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar11 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar11);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = uVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar11);
    lVar7 = lVar11;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar11);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    lVar11 = *(long *)(param_1 + 0x30);
    func_0x00010c24dbc0(lVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar11;
  func_0x000107e48160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7afe0(lVar11,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f9afc4; end: 104f9afff; -[SCMusicPickerCameraRollPresenter _presentErrorMessage] */

void FUN_104f9afc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107e48160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7afe0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f9b000; end: 104f9b06f; -[SCMusicPickerCameraRollPresenter .cxx_destruct] */

void FUN_104f9b000(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f9b070; end: 104f9b347; -[SCMusicSyncActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9b070(long param_1)

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
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  
  puVar1 = PTR_PTR_1126b3048;
  _objc_alloc();
  lVar24 = (long)_DAT_112718690;
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c10a900();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112718694;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_112718698;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_11271869c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0c9380();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127186a0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127186a4;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c23ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127186ac;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_1127186b0;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c2781c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127186b4;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_1127186bc;
  _objc_loadWeakRetained();
  lVar21 = param_1 + _DAT_1127186c0;
  _objc_loadWeakRetained();
  lVar22 = param_1 + _DAT_1127186c4;
  _objc_loadWeakRetained();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  func_0x00010c29e240();
  func_0x00010c0390a0();
  lVar25 = (long)_DAT_1127186c8;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar23);
  _objc_release(lVar24);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
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
                    /* WARNING: Could not recover jumptable at 0x00010c10d030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar25),PTR_s_presentMemoriesPicker_112620e28);
  return;
}



/* Entry: 104f9b348; end: 104f9b433; -[SCMusicSyncActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9b348(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127186b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127186bc);
  _objc_destroyWeak(param_1 + _DAT_1127186ac);
  _objc_storeStrong(param_1 + _DAT_1127186a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127186c4);
  _objc_destroyWeak(param_1 + _DAT_1127186c0);
  _objc_destroyWeak(param_1 + _DAT_1127186b4);
  _objc_destroyWeak(param_1 + _DAT_1127186a4);
  _objc_destroyWeak(param_1 + _DAT_1127186b0);
  _objc_destroyWeak(param_1 + _DAT_1127186a0);
  _objc_destroyWeak(param_1 + _DAT_11271869c);
  _objc_destroyWeak(param_1 + _DAT_112718698);
  _objc_destroyWeak(param_1 + _DAT_112718694);
  _objc_destroyWeak(param_1 + _DAT_1127186cc);
  _objc_destroyWeak(param_1 + _DAT_112718690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127186c8,0);
  return;
}



/* Entry: 104f9b434; end: 104f9b50f; -[SCMusicSyncAsset initWithAssetId:mediaInput:metadata:mediaType:] */

undefined1 *
FUN_104f9b434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e55e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f9b510; end: 104f9b517; -[SCMusicSyncAsset assetId] */

undefined8 FUN_104f9b510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f9b518; end: 104f9b547; -[SCMusicSyncAsset setAssetId:] */

void FUN_104f9b518(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104f9b548; end: 104f9b54f; -[SCMusicSyncAsset mediaInput] */

undefined8 FUN_104f9b548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f9b550; end: 104f9b57f; -[SCMusicSyncAsset setMediaInput:] */

void FUN_104f9b550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f9b580; end: 104f9b587; -[SCMusicSyncAsset metadata] */

undefined8 FUN_104f9b580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f9b588; end: 104f9b5b7; -[SCMusicSyncAsset setMetadata:] */

void FUN_104f9b588(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104f9b5b8; end: 104f9b5bf; -[SCMusicSyncAsset mediaType] */

undefined4 FUN_104f9b5b8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 104f9b5c0; end: 104f9b5c7; -[SCMusicSyncAsset setMediaType:] */

void FUN_104f9b5c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104f9b5c8; end: 104f9b603; -[SCMusicSyncAsset .cxx_destruct] */

void FUN_104f9b5c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f9b604; end: 104f9b9f3; -[SCMusicSyncActionHandler initWithPresentingViewController:delegate:preselectedCameraRollAssets:snapDocEditorServices:mediaImportServices:memoriesPreviewPresenterBuilder:temporaryFileWriter:smartTemplateService:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:musicSyncTrackLoader:composerCoreUIServices:progressOverlayScopeExposer:progressOverlayScopeServices:musicLoggingServices:cameraConfigurationServices:viewSourceType:] */

undefined8 *
FUN_104f9b604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_70 = PTR_PTR_1126e55e8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
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
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_18;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x19) = param_19;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
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



/* Entry: 104f9b9f4; end: 104f9be23; -[SCMusicSyncActionHandler presentMemoriesPicker] */

void FUN_104f9b9f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126b3048;
    func_0x00010be209e0(PTR_PTR_1126b3048,param_2,*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126aff60;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar3;
    func_0x000104f9f364();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062a00(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,60000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c36c0(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126b3050;
    _objc_alloc();
    puVar2 = puVar4;
    func_0x000104f9f37c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039ee0(puVar4,param_2,puVar2);
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126b3058;
    _objc_alloc(PTR_PTR_1126b3058);
    func_0x00010c006100(0x4010000000000000);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = puVar5;
    func_0x000104f9f334();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6e00(puVar5,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar6);
    func_0x00010c1c7c00(puVar4,param_2,puVar5);
    puVar6 = PTR_PTR_1126b3058;
    _objc_alloc(PTR_PTR_1126b3058);
    func_0x00010c006100(0x4034000000000000);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = puVar6;
    func_0x000104f9f34c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6e00(puVar6,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar7);
    func_0x00010c1c33a0(puVar4,param_2,puVar6);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar8 = *(ulong *)(param_1 + 0x18);
      func_0x00010bf529e0();
      if (0x13 < uVar8) {
        uVar8 = 0x14;
      }
      func_0x00010c25e980(*(undefined8 *)(param_1 + 0x18),param_2,0,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0b8600(uVar10,param_2,&PTR___NSConcreteGlobalBlock_11085f848);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aff70;
    _objc_alloc(PTR_PTR_1126aff70);
    puVar7 = puVar2;
    func_0x000104f9f31c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053560(puVar2,param_2,puVar7,0,1,1,0,1,0,0x1000101);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f60(puVar7,param_2,lVar1,1,0);
    _objc_release(lVar1);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    puVar9 = PTR_PTR_1126aff78;
    func_0x00010bf68ba0(PTR_PTR_1126aff78,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24140(uVar11,param_2,puVar7,puVar2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,uVar11);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 104f9be24; end: 104f9be33;  */

void FUN_104f9be24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3060,PTR_s_cameraRollAssetWithAsset__1125a8370,param_2);
  return;
}



/* Entry: 104f9be34; end: 104f9be37; -[SCMusicSyncActionHandler memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_104f9be34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreviewWithMediaSegments_11257d028);
  return;
}



/* Entry: 104f9be38; end: 104f9be97; -[SCMusicSyncActionHandler memoriesPickerV2DidDismiss] */

void FUN_104f9be38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d3940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9be98; end: 104f9be9b; -[SCMusicSyncActionHandler didCancelFromPreview:] */

void FUN_104f9be98(void)

{
  return;
}



/* Entry: 104f9be9c; end: 104f9becb; -[SCMusicSyncActionHandler didSendSnapsAndPostToStory:storyTypes:] */

void FUN_104f9be9c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d3940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9becc; end: 104f9beff; -[SCMusicSyncActionHandler progressOverlayScopeDidCancel:] */

void FUN_104f9becc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be03260(param_1,param_2,0);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f9bf00; end: 104f9c3d3; -[SCMusicSyncActionHandler _presentPreviewWithMediaSegments:] */

void FUN_104f9bf00(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar3;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf529e0();
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puVar6 = PTR_PTR_1126ae820;
    _objc_opt_new();
    func_0x00010be7dd00(param_1);
    puVar7 = PTR_PTR_1126b25c0;
    _objc_opt_new(PTR_PTR_1126b25c0);
    puVar8 = PTR_PTR_1126b3068;
    _objc_alloc_init(PTR_PTR_1126b3068);
    puVar9 = PTR_PTR_1126b25e8;
    _objc_alloc_init(PTR_PTR_1126b25e8);
    func_0x00010c1ac2a0(puVar8);
    _objc_release(puVar9);
    puVar9 = puVar7;
    func_0x00010c0fee00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500();
    _objc_release(puVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    _objc_release(uVar15);
    _objc_release(uVar10);
    puVar9 = puVar3;
    func_0x00010c06e0e0();
    if (((ulong)puVar9 & 1) == 0) {
      _objc_initWeak(auStack_a0,param_1);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_104f9c3d4;
      puStack_c8 = &UNK_11085f898;
      _objc_copyWeak(auStack_b0,auStack_a0);
      puStack_b8 = &uStack_98;
      fStack_a8 = 1.0 / (float)(lVar5 + 2);
      _objc_retain(puVar6);
      ppuVar11 = &puStack_e0;
      puStack_c0 = puVar6;
      _objc_retainBlock();
      _objc_copyWeak(auStack_e8,auStack_a0);
      _objc_retain(puVar3);
      _objc_retain(ppuVar11);
      lVar5 = param_3;
      func_0x00010c0b8620(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c06e0e0();
      if (((ulong)puVar9 & 1) == 0) {
        puVar9 = PTR_PTR_1126b3048;
        func_0x00010bee0140();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010c06e0e0();
        if (((ulong)puVar12 & 1) == 0) {
          puVar12 = PTR_PTR_1126b3048;
          func_0x00010bee0160();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar6);
          puVar13 = puVar12;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          puVar12 = puVar3;
          func_0x00010c06e0e0();
          if (((ulong)puVar12 & 1) == 0) {
            puVar12 = PTR_PTR_1126b3048;
            func_0x00010bee01c0(PTR_PTR_1126b3048);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar6);
            puVar14 = puVar12;
            func_0x00010c0b8600(puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar12 = puVar3;
            func_0x00010c06e0e0();
            if (((ulong)puVar12 & 1) == 0) {
              func_0x00010be7da80(param_1);
            }
            _objc_release(puVar14);
            _objc_release(puVar6);
          }
          _objc_release(puVar13);
          _objc_release(puVar6);
        }
        _objc_release(puVar9);
      }
      _objc_release(lVar5);
      _objc_release(ppuVar11);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_e8);
      _objc_release(ppuVar11);
      _objc_release(puStack_c0);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a0);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f9c3d4; end: 104f9c4af;  */

void FUN_104f9c3d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f9c4b0; end: 104f9c573;  */

void FUN_104f9c4b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(float *)(lVar3 + 0x18) = *(float *)(param_1 + 0x38) + *(float *)(lVar3 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar2);
    func_0x00010bdd7b80(lVar1);
    _objc_retain(param_2);
    uVar4 = param_2;
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f9c574; end: 104f9c657;  */

void FUN_104f9c574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = param_2;
  func_0x00010bfb2660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f9c658; end: 104f9c83b;  */

void FUN_104f9c658(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_104f9c83c;
    uStack_50 = 0x104f9c84c;
    uStack_48 = 0;
    lVar6 = *(long *)(lVar1 + 0xa8);
    uVar2 = param_2;
    func_0x00010bfea5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uVar2 = param_2;
      func_0x00010c0c5900(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010c0bcda0(uVar2);
      _objc_release(uVar2);
    }
    else {
      puVar3 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puStack_68[5];
      puStack_68[5] = puVar3;
    }
    _objc_release(uVar5);
    if (puStack_68[5] == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28);
      (**(code **)(lVar4 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar6);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104f9c83c; end: 104f9c853;  */

void FUN_104f9c83c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f9c854; end: 104f9c997;  */

void FUN_104f9c854(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c0c6c20();
  puVar4 = PTR_PTR_1126b3048;
  if (lVar6 == 1) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010bfe7f20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be618e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
  }
  else {
    if (lVar6 != 2) goto LAB_104f9c980;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c29a4c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
    func_0x00010bf45e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7f840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61900();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_104f9c980:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f9c998; end: 104f9ca83;  */

void FUN_104f9c998(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(float *)(lVar3 + 0x18) = *(float *)(param_1 + 0x30) + *(float *)(lVar3 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104f9ca84; end: 104f9ccef; +[SCMusicSyncActionHandler _musicSyncAssetForVideoAsset:videoImporter:directorModeVideoOptimizationConfig:temporaryFileWriter:cancelGroup:] */

void FUN_104f9ca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bfacf60(param_6,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b3070;
  _objc_alloc(PTR_PTR_1126b3070);
  func_0x00010c060d60();
  uVar1 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = uVar1;
  func_0x00010bf8ef40(uVar1);
  func_0x00010c1ab060(puVar2,param_2,uVar4);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
  uVar4 = uVar1;
  func_0x00010bf9d3e0(uVar1,param_2,param_3,puVar2,0,
                      &PTR____CFConstantStringClassReference_110dbe278,&uStack_80,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bf2f5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(param_7,param_2,uVar1);
  _objc_release(param_7);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104f9ccf0;
  puStack_90 = &UNK_11085f9b8;
  uStack_88 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_88);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}


