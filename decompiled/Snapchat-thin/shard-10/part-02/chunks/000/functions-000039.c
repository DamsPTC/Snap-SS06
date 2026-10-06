/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a5d9cc; end: 107a5dabb; -[SCMusicOperaAudioLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5d9cc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f97c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107a5da98;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112768a44);
    *(undefined8 *)(param_1 + _DAT_112768a44) = 0;
    _objc_release(uVar2);
    func_0x00010bedd380(param_1);
  }
LAB_107a5da98:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a5dabc; end: 107a5dacf; -[SCMusicOperaAudioLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5dabc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112768a48) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a5dad0; end: 107a5db13; -[SCMusicOperaAudioLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5dad0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768a44);
  *(undefined8 *)(param_1 + _DAT_112768a44) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112768a48) = 0;
  *(undefined1 *)(param_1 + _DAT_112768a4c) = 0;
  return;
}



/* Entry: 107a5db14; end: 107a5db27; -[SCMusicOperaAudioLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5db14(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112768a4c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a5db28; end: 107a5db37; -[SCMusicOperaAudioLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5db28(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112768a4c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a5db38; end: 107a5dc83; -[SCMusicOperaAudioLayerViewController _updatePlaybackIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5db38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(char *)(param_1 + _DAT_112768a48) == '\x01') &&
     (*(char *)(param_1 + _DAT_112768a4c) != '\x01')) {
    lVar6 = (long)_DAT_112768a44;
    if (*(long *)(param_1 + lVar6) == 0) {
      lVar1 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf0b560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126c47f0;
        _objc_alloc();
        puVar4 = PTR_PTR_1126aed60;
        func_0x00010c15fac0(PTR_PTR_1126aed60);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf0b560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff54a0();
        uVar5 = *(undefined8 *)(param_1 + lVar6);
        *(undefined **)(param_1 + lVar6) = puVar3;
        _objc_release(uVar5);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(puVar4);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar6),PTR_s_play_11261d2f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768a44),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 107a5dc84; end: 107a5dcb3; -[SCMusicOperaAudioLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5dc84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768a44,0);
  return;
}



/* Entry: 107a5dcb4; end: 107a5dd5f; -[SCMusicOperaUseSoundLayer initWithPage:] */

undefined1 * FUN_107a5dcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f97c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a5dd60; end: 107a5ddab; +[SCMusicOperaUseSoundLayer layerWithPage:] */

void FUN_107a5dd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6000;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a5ddac; end: 107a5ddb3; -[SCMusicOperaUseSoundLayer type] */

undefined8 FUN_107a5ddac(void)

{
  return 0x19;
}



/* Entry: 107a5ddb4; end: 107a5ddbf; -[SCMusicOperaUseSoundLayer layerViewControllerClass] */

void FUN_107a5ddb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d6088);
  return;
}



/* Entry: 107a5ddc0; end: 107a5de1f; -[SCMusicOperaUseSoundLayer isEqual:] */

bool FUN_107a5ddc0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class(param_3);
  puVar2 = PTR_PTR_1126d6000;
  _objc_opt_class(PTR_PTR_1126d6000);
  _objc_release(param_3);
  return param_1 == param_3 && puVar1 == puVar2;
}



/* Entry: 107a5de20; end: 107a5de27; -[SCMusicOperaUseSoundLayer useUpdatedCTAButtonStyle] */

undefined1 FUN_107a5de20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a5de28; end: 107a5de9b; -[SCMusicOperaPassThroughView hitTest:withEvent:] */

void FUN_107a5de28(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f97d0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a5de9c; end: 107a5df4f; -[SCMusicOperaUseSoundLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5de9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6090;
  _objc_alloc(PTR_PTR_1126d6090);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290da0();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126d6098;
  _objc_alloc();
  func_0x00010c01a3c0(0x4042000000000000);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768a58);
  *(undefined **)(param_1 + _DAT_112768a58) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107a5df50; end: 107a5df97; -[SCMusicOperaUseSoundLayerViewController viewDidFullyAppear] */

void FUN_107a5df50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f97d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010bdcc6e0(param_1);
  return;
}



/* Entry: 107a5df98; end: 107a5df9b; -[SCMusicOperaUseSoundLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_107a5df98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__evaluateMuteBypassConditions_1125606e0);
  return;
}



/* Entry: 107a5df9c; end: 107a5dfff; -[SCMusicOperaUseSoundLayerViewController setMuted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5df9c(long param_1,undefined8 param_2,int param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f97d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setMuted__1126503d0);
  if ((param_3 != 0) && (*(char *)(param_1 + _DAT_112768a54) == '\x01')) {
    func_0x00010bdcc6e0(param_1);
  }
  return;
}



/* Entry: 107a5e000; end: 107a5e07f; -[SCMusicOperaUseSoundLayerViewController _evaluateMuteBypassConditions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e000(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_1 + _DAT_112768a54) = lVar3 == 0;
  _objc_release();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a5e080; end: 107a5e0d7; -[SCMusicOperaUseSoundLayerViewController _announceUnmuteIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e080(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_112768a54) == '\x01') {
    uVar1 = 1;
    func_0x000107a5dc98(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107a5e0d8; end: 107a5e1df; -[SCMusicOperaUseSoundLayerViewController didTapUseSoundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c288220(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb290;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = 0;
  func_0x000107a5dc98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(lVar4 + _DAT_112768a58);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107a5e1e0; end: 107a5e20f; -[SCMusicOperaUseSoundLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e1e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768a58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a5e210; end: 107a5e24f; -[SCMusicOperaUseSoundLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e210(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768a5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768a58,0);
  return;
}



/* Entry: 107a5e250; end: 107a5e307; -[SCMusicOperaUseSoundView initWithHeight:delegate:useUpdatedCTAButtonStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a5e250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f97e0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112768a60),param_4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112768a64) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112768a68) = param_5;
    func_0x00010beb1160(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a5e308; end: 107a5e483; -[SCMusicOperaUseSoundView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25ce0(PTR_PTR_1126aec40,param_2,3,&PTR___NSConcreteGlobalBlock_1109f7eb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c20eaa0();
  FUN_107a800f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1);
  _objc_release(puVar2);
  uVar3 = 3;
  FUN_107a6ed80(3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1);
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d3960(puVar1);
  func_0x00010c219b60(puVar1);
  lVar4 = (long)_DAT_112768a6c;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 107a5e484; end: 107a5e48f;  */

void FUN_107a5e484(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setTypeStyle__112664568,0x16);
  return;
}



/* Entry: 107a5e490; end: 107a5e4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e490(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112768a60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7d7a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a5e4dc; end: 107a5e787; -[SCMusicOperaUseSoundView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e4dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112768a70;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar17));
  lVar16 = (long)_DAT_112768a6c;
  uVar1 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_90 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_112768a64));
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf49480(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf49520(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar14;
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(lVar16);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puStack_98 = PTR_PTR_1126f97e0;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_updateConstraints_11267ec30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107a5e788; end: 107a5e78b; -[SCMusicOperaUseSoundView updateWithConfiguration:] */

void FUN_107a5e788(void)

{
  return;
}



/* Entry: 107a5e78c; end: 107a5e79b; -[SCMusicOperaUseSoundView isFixedDuringPageTransitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a5e78c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112768a68);
}



/* Entry: 107a5e79c; end: 107a5e7e7; -[SCMusicOperaUseSoundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a5e79c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768a70,0);
  _objc_storeStrong(param_1 + _DAT_112768a6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112768a60);
  return;
}



/* Entry: 107a5e7e8; end: 107a5e853; -[SCTopicViewerActionHandler initWithActionDelegate:] */

undefined1 * FUN_107a5e7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f97e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a5e854; end: 107a5eeeb; -[SCTopicViewerActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107a5e854(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x00010c0720c0();
  if ((int)ppuVar6 == 0) {
    ppuVar6 = ppuVar1;
    func_0x00010c0720c0();
    if ((int)ppuVar6 != 0) {
      ppuVar6 = (undefined **)(param_1 + 8);
      _objc_loadWeakRetained(ppuVar6);
      func_0x00010befc440();
      goto LAB_107a5ee58;
    }
    ppuVar6 = ppuVar1;
    func_0x00010c0720c0();
    if ((int)ppuVar6 != 0) {
      ppuVar6 = (undefined **)(param_1 + 8);
      _objc_loadWeakRetained(ppuVar6);
      func_0x00010c085b80();
      goto LAB_107a5ee58;
    }
    ppuVar6 = ppuVar1;
    func_0x00010c0720c0();
    if ((int)ppuVar6 == 0) {
      ppuVar6 = ppuVar1;
      func_0x00010c0720c0();
      if ((int)ppuVar6 == 0) {
        ppuVar6 = ppuVar1;
        func_0x00010c0720c0();
        if ((int)ppuVar6 == 0) {
          ppuVar2 = ppuVar1;
          func_0x00010c0720c0();
          ppuVar6 = param_4;
          if ((int)ppuVar2 == 0) {
            ppuVar2 = ppuVar1;
            func_0x00010c0720c0();
            if ((int)ppuVar2 == 0) {
              ppuVar2 = ppuVar1;
              func_0x00010c0720c0();
              if ((int)ppuVar2 == 0) {
                ppuVar2 = ppuVar1;
                func_0x00010c0720c0();
                if ((int)ppuVar2 == 0) {
                  ppuVar6 = ppuVar1;
                  func_0x00010c0720c0();
                  if ((int)ppuVar6 == 0) {
                    ppuVar6 = ppuVar1;
                    func_0x00010c0720c0();
                    if ((int)ppuVar6 == 0) {
                      uVar7 = 0;
                      goto LAB_107a5ee64;
                    }
                    ppuVar6 = (undefined **)(param_1 + 8);
                    _objc_loadWeakRetained(ppuVar6);
                    func_0x00010c2399c0();
                  }
                  else {
                    ppuVar6 = (undefined **)(param_1 + 8);
                    _objc_loadWeakRetained(ppuVar6);
                    func_0x00010bf84520();
                  }
                  goto LAB_107a5ee58;
                }
                func_0x00010beee2e0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                ppuVar4 = ppuVar6;
                _objc_opt_isKindOfClass(ppuVar6,puVar3);
                ppuVar2 = ppuVar6;
                if (((ulong)ppuVar4 & 1) == 0) {
                  ppuVar2 = (undefined **)0x0;
                }
                _objc_retain(ppuVar2);
                _objc_release(ppuVar6);
                if (ppuVar2 != (undefined **)0x0) {
                  ppuVar4 = ppuVar6;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR_PTR_1126c0e18;
                  _objc_opt_class(PTR_PTR_1126c0e18);
                  ppuVar5 = ppuVar4;
                  _objc_opt_isKindOfClass(ppuVar4,puVar3);
                  ppuVar2 = ppuVar4;
                  if (((ulong)ppuVar5 & 1) == 0) {
                    ppuVar2 = (undefined **)0x0;
                  }
                  _objc_retain(ppuVar2);
                  _objc_release(ppuVar4);
                  if (ppuVar2 == (undefined **)0x0) goto LAB_107a5e9b0;
                  ppuVar4 = (undefined **)(param_1 + 8);
                  _objc_loadWeakRetained(ppuVar4);
                  func_0x00010c239e60();
                  goto LAB_107a5ed80;
                }
              }
              else {
                func_0x00010beee2e0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                ppuVar4 = ppuVar6;
                _objc_opt_isKindOfClass(ppuVar6,puVar3);
                ppuVar2 = ppuVar6;
                if (((ulong)ppuVar4 & 1) == 0) {
                  ppuVar2 = (undefined **)0x0;
                }
                _objc_retain(ppuVar2);
                _objc_release(ppuVar6);
                if (ppuVar2 != (undefined **)0x0) {
                  ppuVar4 = ppuVar6;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR_PTR_1126c0e18;
                  _objc_opt_class(PTR_PTR_1126c0e18);
                  ppuVar5 = ppuVar4;
                  _objc_opt_isKindOfClass(ppuVar4,puVar3);
                  ppuVar2 = ppuVar4;
                  if (((ulong)ppuVar5 & 1) == 0) {
                    ppuVar2 = (undefined **)0x0;
                  }
                  _objc_retain(ppuVar2);
                  _objc_release(ppuVar4);
                  ppuVar4 = ppuVar6;
                  func_0x00010c0e00e0(ppuVar6);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067ec0();
                  _objc_release(ppuVar4);
                  ppuVar5 = ppuVar6;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb2a8;
                  if (ppuVar5 != (undefined **)0x0) {
                    ppuVar4 = ppuVar5;
                  }
                  _objc_retain(ppuVar4);
                  _objc_release(ppuVar5);
                  if (ppuVar2 != (undefined **)0x0) {
                    param_1 = param_1 + 8;
                    _objc_loadWeakRetained(param_1);
                    func_0x00010c067ec0(ppuVar4);
                    func_0x00010c2399a0(param_1);
                    goto LAB_107a5ed74;
                  }
                  goto LAB_107a5ed80;
                }
              }
            }
            else {
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              ppuVar4 = ppuVar6;
              _objc_opt_isKindOfClass(ppuVar6,puVar3);
              ppuVar2 = ppuVar6;
              if (((ulong)ppuVar4 & 1) == 0) {
                ppuVar2 = (undefined **)0x0;
              }
              _objc_retain(ppuVar2);
              _objc_release(ppuVar6);
              if (ppuVar2 != (undefined **)0x0) {
                ppuVar4 = ppuVar6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_PTR_1126c0e18;
                _objc_opt_class(PTR_PTR_1126c0e18);
                ppuVar5 = ppuVar4;
                _objc_opt_isKindOfClass(ppuVar4,puVar3);
                ppuVar2 = ppuVar4;
                if (((ulong)ppuVar5 & 1) == 0) {
                  ppuVar2 = (undefined **)0x0;
                }
                _objc_retain(ppuVar2);
                _objc_release(ppuVar4);
                ppuVar4 = ppuVar6;
                func_0x00010c0e00e0(ppuVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
                _objc_release(ppuVar4);
                ppuVar5 = ppuVar6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb2a8;
                if (ppuVar5 != (undefined **)0x0) {
                  ppuVar4 = ppuVar5;
                }
                _objc_retain(ppuVar4);
                _objc_release(ppuVar5);
                if (ppuVar2 != (undefined **)0x0) {
                  param_1 = param_1 + 8;
                  _objc_loadWeakRetained(param_1);
                  func_0x00010c067ec0(ppuVar4);
                  func_0x00010c10e4a0(param_1);
LAB_107a5ed74:
                  _objc_release(param_1);
                }
LAB_107a5ed80:
                _objc_release(ppuVar4);
                goto LAB_107a5e9b0;
              }
            }
          }
          else {
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            ppuVar4 = ppuVar6;
            _objc_opt_isKindOfClass(ppuVar6,puVar3);
            ppuVar2 = ppuVar6;
            if (((ulong)ppuVar4 & 1) == 0) {
              ppuVar2 = (undefined **)0x0;
            }
            _objc_retain(ppuVar2);
            _objc_release(ppuVar6);
            if (ppuVar2 != (undefined **)0x0) {
              ppuVar2 = ppuVar6;
              func_0x00010c0e00e0(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067ec0();
              _objc_release(ppuVar2);
              ppuVar2 = ppuVar6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb2a8;
              if (ppuVar2 != (undefined **)0x0) {
                ppuVar4 = ppuVar2;
              }
              _objc_retain(ppuVar4);
              _objc_release(ppuVar2);
              ppuVar2 = (undefined **)(param_1 + 8);
              _objc_loadWeakRetained(ppuVar2);
              func_0x00010c067ec0(ppuVar4);
              _objc_release(ppuVar4);
              func_0x00010c0fe9c0(ppuVar2);
              goto LAB_107a5e9b0;
            }
          }
          ppuVar6 = (undefined **)0x0;
        }
        else {
          ppuVar6 = (undefined **)(param_1 + 8);
          _objc_loadWeakRetained(ppuVar6);
          func_0x00010bf82fa0();
        }
      }
      else {
        ppuVar6 = (undefined **)(param_1 + 8);
        _objc_loadWeakRetained(ppuVar6);
        func_0x00010c2388e0();
      }
      goto LAB_107a5ee58;
    }
    ppuVar6 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar4 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar3);
    ppuVar2 = ppuVar6;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar2 = (undefined **)(param_1 + 8);
      _objc_loadWeakRetained(ppuVar2);
      func_0x00010c23a740();
LAB_107a5e9b0:
      _objc_release(ppuVar2);
      goto LAB_107a5ee58;
    }
    uVar7 = 0;
  }
  else {
    ppuVar6 = (undefined **)(param_1 + 8);
    _objc_loadWeakRetained(ppuVar6);
    func_0x00010bf84860();
LAB_107a5ee58:
    uVar7 = 1;
  }
  _objc_release(ppuVar6);
LAB_107a5ee64:
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 107a5eeec; end: 107a5eef3; -[SCTopicViewerActionHandler .cxx_destruct] */

void FUN_107a5eeec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a5eef4; end: 107a5ef77; -[SCTopicViewerSnapCellActionMenuDataProvider initWithTopicStory:position:] */

undefined1 *
FUN_107a5eef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f97f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a5ef78; end: 107a5f257; -[SCTopicViewerSnapCellActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_107a5ef78(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x000108f5824c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x000108f58234();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000107d4bde8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b1210;
    _objc_alloc(PTR_PTR_1126b1210);
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    ppuVar6 = &PTR____CFConstantStringClassReference_110eab418;
    func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eab418);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f60(puVar4);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    (**(code **)(param_3 + 0x10))(param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a5f258; end: 107a5f26f; -[SCTopicViewerSnapCellActionMenuDataProvider delegate] */

void FUN_107a5f258(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a5f270; end: 107a5f27b; -[SCTopicViewerSnapCellActionMenuDataProvider setDelegate:] */

void FUN_107a5f270(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107a5f27c; end: 107a5f2a7; -[SCTopicViewerSnapCellActionMenuDataProvider .cxx_destruct] */

void FUN_107a5f27c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a5f2a8; end: 107a5f333; -[SCTopicViewerViewActionMenuDataProvider initWithTopicStoryType:actionMenuActionModel:soundReportingEnabled:] */

undefined1 *
FUN_107a5f2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f97f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a5f334; end: 107a5f55b; -[SCTopicViewerViewActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_107a5f334(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *unaff_x21;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf09f00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(param_1 + 8);
    if ((long)uVar6 < 3) {
      if (uVar6 < 2) {
        unaff_x21 = puVar1;
        func_0x000108f5821c();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (uVar6 == 2) {
        unaff_x21 = puVar1;
        func_0x000107a80120();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (uVar6 - 3 < 2) {
      unaff_x21 = puVar1;
      func_0x000107a800f0();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar6 == 5) {
      unaff_x21 = puVar1;
      func_0x000107a80108();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar6 == 8) {
      unaff_x21 = puVar1;
      func_0x000107a80240();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = unaff_x21;
    func_0x000107d4bc38(unaff_x21,*(undefined8 *)(param_1 + 0x10),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    if ((*(long *)(param_1 + 8) - 3U < 2) && (*(char *)(param_1 + 0x18) == '\x01')) {
      puVar2 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar3 = puVar2;
      func_0x000107a80198();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000107d4bde8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b1210;
    _objc_alloc(PTR_PTR_1126b1210);
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    ppuVar5 = &PTR____CFConstantStringClassReference_110eab378;
    func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eab378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f60(puVar2);
    _objc_release(ppuVar5);
    _objc_release(puVar3);
    (**(code **)(param_3 + 0x10))(param_3,puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(unaff_x21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107a5f55c; end: 107a5f573; -[SCTopicViewerViewActionMenuDataProvider delegate] */

void FUN_107a5f55c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a5f574; end: 107a5f57f; -[SCTopicViewerViewActionMenuDataProvider setDelegate:] */

void FUN_107a5f574(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107a5f580; end: 107a5f5ab; -[SCTopicViewerViewActionMenuDataProvider .cxx_destruct] */

void FUN_107a5f580(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a5f5ac; end: 107a5f74b; -[JTCTopicViewerCTAProviderImpl additionalCTAButtons] */

undefined1 * FUN_107a5f5ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b0c40;
  ppuVar8 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d60a0;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x000107a802b8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  uVar11 = 2;
  uVar13 = 0;
  puVar10 = puVar4;
  puVar12 = puVar5;
  func_0x00010c0530e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar1 = puStack_50;
  ppuVar6 = &puStack_b0;
  _objc_retain(ppuVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar11);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  _objc_retain(puVar1);
  puStack_a8 = PTR_PTR_1126f9800;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(ppuVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined ***)((long)ppuVar6 + 8) = ppuVar8;
    _objc_release(uVar7);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined8 *)((long)ppuVar6 + 0x10) = uVar9;
    _objc_release(uVar7);
    *(undefined **)((long)ppuVar6 + 0x18) = puVar10;
    _objc_retain(uVar11);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x20);
    *(undefined8 *)((long)ppuVar6 + 0x20) = uVar11;
    _objc_release(uVar7);
    _objc_retain(puVar12);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x28);
    *(undefined **)((long)ppuVar6 + 0x28) = puVar12;
    _objc_release(uVar7);
    _objc_retain(uVar13);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x30);
    *(undefined8 *)((long)ppuVar6 + 0x30) = uVar13;
    _objc_release(uVar7);
    _objc_retain(puVar1);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x38);
    *(undefined **)((long)ppuVar6 + 0x38) = puVar1;
    _objc_release(uVar7);
  }
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(ppuVar8);
  return (undefined1 *)ppuVar6;
}



/* Entry: 107a5f74c; end: 107a5f8a7; -[SCTopicLensModularCameraPresenterImpl initWithLensId:lensIconURL:sourcePageType:cameraConfigurationServices:directorModeLaunchServices:directorModeScopeServices:modularCameraPresenter:] */

undefined1 *
FUN_107a5f74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f9800;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a5f8a8; end: 107a5f8af; -[SCTopicLensModularCameraPresenterImpl modularCameraPresenter] */

void FUN_107a5f8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 107a5f8b0; end: 107a5fcbf; -[SCTopicLensModularCameraPresenterImpl presentCameraWorkflowWithPresentingViewController:] */

void FUN_107a5f8b0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be8f100();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) == 0x5c) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf926c0();
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar2);
    puVar12 = PTR_PTR_1126b1bb0;
    if ((int)uVar3 != 0) {
      puVar13 = puVar1;
      func_0x00010bf16600();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c0967e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bfbe400(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bfea1c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010bf4efc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c275580(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c091be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0967c0(puVar12,param_2,puVar13,puVar9,puVar4,puVar5,puVar6,puVar7,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126b5b70;
      _objc_alloc();
      uStack_70 = *(undefined8 *)(param_1 + 8);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045f20(0,puVar13,param_2,0,0,0,puVar9,0,0x36);
      _objc_release(puVar9);
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar9 = *(undefined **)(param_1 + 0x30);
      func_0x00010bf235e0(puVar9,param_2,puVar4,0x60,6,puVar12,param_1,0,param_1,0,puVar13,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf7f580();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c076220();
      _objc_release(uVar10);
      if ((int)uVar11 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf7f580(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94c20();
        _objc_release(uVar11);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf7f580(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar11);
      param_1 = puVar4;
      goto LAB_107a5fc54;
    }
  }
  puVar12 = PTR_PTR_1126ae6a8;
  func_0x00010c0fdac0(PTR_PTR_1126ae6a8,param_2,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ae6b0;
  _objc_alloc(PTR_PTR_1126ae6b0);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025e20(puVar13,param_2,puVar9,puVar12);
  _objc_release(puVar9);
  func_0x00010c0d0940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b600(param_1,param_2,param_3,puVar9,puVar1,&PTR___NSConcreteGlobalBlock_1109f7ee8);
LAB_107a5fc54:
  _objc_release(puVar9);
  _objc_release(param_1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107a5fcc0; end: 107a5fcc3;  */

void FUN_107a5fcc0(void)

{
  return;
}



/* Entry: 107a5fcc4; end: 107a5fd3b; -[SCTopicLensModularCameraPresenterImpl directorModeScopeDidComplete] */

void FUN_107a5fcc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107a5fd3c; end: 107a5fd3f; -[SCTopicLensModularCameraPresenterImpl didCancelFromPreview:] */

void FUN_107a5fd3c(void)

{
  return;
}



/* Entry: 107a5fd40; end: 107a5fd43; -[SCTopicLensModularCameraPresenterImpl didSendSnapsAndPostToStory:storyTypes:] */

void FUN_107a5fd40(void)

{
  return;
}



/* Entry: 107a5fd44; end: 107a5fe57; -[SCTopicLensModularCameraPresenterImpl _replyParameters] */

void FUN_107a5fd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c20e0;
  _objc_alloc(PTR_PTR_1126c20e0);
  func_0x00010c054660();
  puVar2 = PTR_PTR_1126ae6c0;
  func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,0
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar4 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar5 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a5fe58; end: 107a5feb7; -[SCTopicLensModularCameraPresenterImpl .cxx_destruct] */

void FUN_107a5fe58(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a5feb8; end: 107a5ff83; -[SCTopicViewerHashtagCameraPresenter initWithHashtag:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:] */

undefined1 *
FUN_107a5feb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9808;
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



/* Entry: 107a5ff84; end: 107a6014b; -[SCTopicViewerHashtagCameraPresenter presentCameraWorkflowWithPresentingViewController:] */

void FUN_107a5ff84(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar7 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar7);
    puVar2 = puVar7;
    func_0x00010bfda7c0(puVar7,param_2,&PTR____CFConstantStringClassReference_110dbf518);
    puVar3 = puVar7;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e28078);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    puVar2 = PTR_PTR_1126c0e38;
    _objc_alloc(PTR_PTR_1126c0e38);
    func_0x00010c019f00();
    puVar7 = PTR_PTR_1126c20e0;
    _objc_alloc(PTR_PTR_1126c20e0);
    func_0x00010c054660();
    puVar4 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    puVar5 = PTR_PTR_1126ae6c0;
    func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e5a0(puVar4,param_2,puVar5,0x35,10,0,0);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b1bb0;
    func_0x00010c275ae0(PTR_PTR_1126b1bb0,param_2,puVar4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf237e0(uVar6,param_2,puVar5,param_3,param_1,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a6014c; end: 107a6014f; -[SCTopicViewerHashtagCameraPresenter captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_107a6014c(void)

{
  return;
}



/* Entry: 107a60150; end: 107a60153; -[SCTopicViewerHashtagCameraPresenter captureWorkflowWillDismissWithDidSendSnap:] */

void FUN_107a60150(void)

{
  return;
}



/* Entry: 107a60154; end: 107a6019b; -[SCTopicViewerHashtagCameraPresenter dismissCameraScope:] */

void FUN_107a60154(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a6019c; end: 107a601d7; -[SCTopicViewerHashtagCameraPresenter .cxx_destruct] */

void FUN_107a6019c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a601d8; end: 107a604af; -[SCTopicViewerLensHeaderInteractor initWithLensInfo:lensIconRepository:lensFavoritesObservable:lensFavoritesUpdater:lensFavoriteNotifications:lensFavoritesButtonLogger:lensExplorerNavigation:lensCreatorProfilePresenter:studySettings:presentingController:] */

undefined8 *
FUN_107a601d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f9810;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[3];
    puVar1[3] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_13);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar1[0xe] = param_1;
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
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
  return puVar1;
}



/* Entry: 107a604b0; end: 107a605ff; -[SCTopicViewerLensHeaderInteractor lensHeaderViewModel] */

void FUN_107a604b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar3 = PTR_PTR_1126d60a8;
  _objc_alloc(PTR_PTR_1126d60a8);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c095760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5b580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bdef560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be0e6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be67300(param_1);
  func_0x00010bdf5fe0(param_1);
  func_0x00010c025200(puVar3,param_2,uVar4,uVar5,lVar6,lVar7,lVar8,param_1,puVar1,puVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a60600; end: 107a606ab; -[SCTopicViewerLensHeaderInteractor handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_107a60600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110eab458);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      goto LAB_107a60690;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10bd20(uVar1,param_2,uVar2,param_1);
    _objc_release(param_1);
  }
  else {
    func_0x00010c2729e0(param_1);
  }
  uVar1 = 1;
LAB_107a60690:
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 107a606ac; end: 107a606b3; -[SCTopicViewerLensHeaderInteractor _lensIconRepository] */

void FUN_107a606ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 107a606b4; end: 107a607ab; -[SCTopicViewerLensHeaderInteractor _createLensIconObservable] */

void FUN_107a606b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010be4af60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a607ac;
  puStack_50 = &UNK_110853e70;
  lStack_48 = lVar1;
  _objc_retain();
  func_0x00010bfe8340(puVar2,param_2,uVar4,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4af40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c09d1a0(PTR_PTR_1126ae6b8,param_2,puVar2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(lStack_48);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a607ac; end: 107a607b3;  */

void FUN_107a607ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensIconPlaceholder_112602b28);
  return;
}



/* Entry: 107a607b4; end: 107a6089f; -[SCTopicViewerLensHeaderInteractor _lensIconObservable] */

void FUN_107a607b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a608a0; end: 107a609cf;  */

void FUN_107a608a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4afa0(0x4054000000000000,0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c297260(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a609d0; end: 107a60a73;  */

void FUN_107a609d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a60a74; end: 107a60c0f; -[SCTopicViewerLensHeaderInteractor _lensIconScaledToSize:] */

void FUN_107a60a74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b5928;
  _objc_alloc(PTR_PTR_1126b5928);
  uVar2 = *(undefined8 *)(param_3 + 8);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010bfe5b40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024560(puVar1,param_4,uVar2,uVar8,0,0,0,0,0);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = param_3;
  func_0x00010be4af60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0943c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uStack_58 = *(undefined8 *)(param_3 + 0x70);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a60c10;
  puStack_78 = &UNK_110857008;
  uVar8 = *(undefined8 *)(param_3 + 0x78);
  puStack_70 = puVar6;
  uStack_68 = param_1;
  uStack_60 = param_2;
  _objc_retain();
  func_0x00010c297260(lVar5,param_4,&puStack_90,uVar8);
  puVar7 = puVar6;
  func_0x00010bfbc3e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_70);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107a60c10; end: 107a60c6b;  */

void FUN_107a60c10(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010c14e6c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a60c6c; end: 107a60cff; -[SCTopicViewerLensHeaderInteractor _creatorNameInteractable] */

undefined * FUN_107a60c6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5b600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5b440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar4,param_2,uVar3);
    _objc_release(uVar3);
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  _objc_release(uVar1);
  return puVar4;
}



/* Entry: 107a60d00; end: 107a60d33; -[SCTopicViewerLensHeaderInteractor _officialBadgeForCreator] */

ulong FUN_107a60d00(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c078fa0(uVar1);
  func_0x00010c06d940(*(undefined8 *)(param_1 + 8));
  return uVar1 & 0xffffffff;
}



/* Entry: 107a60d34; end: 107a60ddb; -[SCTopicViewerLensHeaderInteractor toggleLensFavoriteState] */

void FUN_107a60d34(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a60ddc; end: 107a60e07;  */

void FUN_107a60ddc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becccc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a60e08; end: 107a60e5f; -[SCTopicViewerLensHeaderInteractor setLensFavoritesButtonState:] */

void FUN_107a60e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a60e60; end: 107a60f17; -[SCTopicViewerLensHeaderInteractor _favoriteStatusObservable] */

void FUN_107a60e60(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a60f18; end: 107a60fab;  */

void FUN_107a60f18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x60);
    func_0x00010c25fd20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd37e0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a60fac; end: 107a6118f; -[SCTopicViewerLensHeaderInteractor _beginObservingFavoriteStatusIfNeeded] */

void FUN_107a60fac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 0x68) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c093c00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107a61190;
    puStack_68 = &UNK_1109f7f08;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c093ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar2 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 107a61190; end: 107a6121f;  */

void FUN_107a61190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126d60b0;
  func_0x00010bfe1300(PTR_PTR_1126d60b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be295a0(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a61220; end: 107a61267;  */

void FUN_107a61220(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a61268; end: 107a61483; -[SCTopicViewerLensHeaderInteractor _toggleLensFavoriteState] */

void FUN_107a61268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x107a61488;
  puStack_80 = &UNK_1109f7f58;
  puStack_68 = puStack_78;
  func_0x00010c0be320(*(undefined8 *)(param_1 + 0x58),param_2,&PTR___NSConcreteGlobalBlock_1109f7f38
                      ,&puStack_98);
  func_0x00010be530a0(param_1);
  puVar1 = PTR_PTR_1126d60b0;
  func_0x00010c2a01c0(PTR_PTR_1126d60b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb9a0(param_1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(puStack_68 + 3) == '\x01') {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa1080(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c27faa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_a0,param_1);
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010c297260(uVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_70,8);
  return;
}



/* Entry: 107a61484; end: 107a6149b;  */

void FUN_107a61484(void)

{
  return;
}



/* Entry: 107a6149c; end: 107a614e3;  */

void FUN_107a6149c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb9120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a614e4; end: 107a61597; -[SCTopicViewerLensHeaderInteractor _handleFavoritesResult:error:fallbackState:] */

void FUN_107a614e4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  if ((param_4 == 0) && (func_0x00010c252d60(), 1 < param_3)) {
    if (param_3 == 3) {
      uVar2 = 0;
    }
    else {
      if (param_3 != 2) goto LAB_107a6151c;
      uVar2 = 1;
    }
    puVar1 = PTR_PTR_1126d60b0;
    func_0x00010c2a01c0(PTR_PTR_1126d60b0,param_2,uVar2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb9a0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1bb9a0(param_1,param_2,param_5);
  }
LAB_107a6151c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107a61598; end: 107a616d7; -[SCTopicViewerLensHeaderInteractor _receiveFavoritesDifference:] */

void FUN_107a61598(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c247520();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010bfa10a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf04920();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c27f100();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf04920();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) goto LAB_107a616b8;
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    puVar3 = PTR_PTR_1126d60b0;
    func_0x00010c2a01c0(PTR_PTR_1126d60b0,param_2,uVar4,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb9a0(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
LAB_107a616b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a616d8; end: 107a617bf;  */

undefined8 FUN_107a616d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107a617c0; end: 107a6192b; -[SCTopicViewerLensHeaderInteractor _showFavoriteNotificationWithFavoritesResult:] */

void FUN_107a617c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be4afa0(0x4045000000000000,0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_48;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a6192c; end: 107a619cb;  */

void FUN_107a6192c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  func_0x00010c10d360(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a619cc; end: 107a619f7;  */

void FUN_107a619cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a619f8; end: 107a61a77; -[SCTopicViewerLensHeaderInteractor _presentLensExplorer] */

void FUN_107a619f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf9b3e0();
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10cb40(uVar2,param_2,param_1,6,0);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a61a78; end: 107a61ba3; -[SCTopicViewerLensHeaderInteractor _logFavoriteAction:] */

void FUN_107a61a78(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c89d0;
  _objc_alloc(PTR_PTR_1126c89d0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11fc00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11fc20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef2c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef4d20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0248c0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c2a7180();
  }
  else {
    func_0x00010c2a6520();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a61ba4; end: 107a61c5b; -[SCTopicViewerLensHeaderInteractor .cxx_destruct] */

void FUN_107a61ba4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 107a61c5c; end: 107a61c67; +[SCTopicViewerLensHeaderSectionDataProvider announcerIdentifier] */

undefined ** FUN_107a61c5c(void)

{
  return &PTR____CFConstantStringClassReference_110eaabb8;
}



/* Entry: 107a61c68; end: 107a61c6f; -[SCTopicViewerLensHeaderSectionDataProvider addListener:] */

void FUN_107a61c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a61c70; end: 107a61c77; -[SCTopicViewerLensHeaderSectionDataProvider removeListener:] */

void FUN_107a61c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a61c78; end: 107a61ceb; -[SCTopicViewerLensHeaderSectionDataProvider initWithLensHeaderInteractor:] */

undefined1 * FUN_107a61c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a61cec; end: 107a61daf; -[SCTopicViewerLensHeaderSectionDataProvider setSectionDataModel:] */

void FUN_107a61cec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 == 0) {
LAB_107a61d6c:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  else {
    _objc_retain(uVar3);
    _objc_retain(param_3);
    if (uVar3 != param_3) {
      if (param_3 == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar1 = uVar3;
        func_0x00010c071ae0(uVar3,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar3);
        if ((uVar1 & 1) != 0) goto LAB_107a61d9c;
      }
      goto LAB_107a61d6c;
    }
    _objc_release(param_3);
  }
  _objc_release(uVar3);
LAB_107a61d9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a61db0; end: 107a61e7b; -[SCTopicViewerLensHeaderSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107a61db0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0942a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_initWeak(auStack_c0,puVar1);
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110eaab98;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_107a62018;
      puStack_d0 = &UNK_1109f7f88;
      puVar5 = auStack_c0;
      _objc_copyWeak(auStack_c8,puVar5);
      ppuVar3 = &puStack_e8;
      _objc_retainBlock();
      ppuStack_b0 = ppuVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_destroyWeak(auStack_c8);
      puVar4 = auStack_c0;
      _objc_destroyWeak();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_c0);
        __Unwind_Resume(puVar4);
        _objc_retain(puVar5);
        puVar4 = puVar4 + 0x20;
        _objc_loadWeakRetained(puVar4);
        func_0x00010bde4d40();
        _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a61e7c; end: 107a61efb; -[SCTopicViewerLensHeaderSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_107a61e7c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110eaab98;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107a62018;
    puStack_90 = &UNK_1109f7f88;
    puVar4 = auStack_80;
    _objc_copyWeak(auStack_88,puVar4);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_70 = ppuVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar3 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar3);
      _objc_retain(puVar4);
      puVar3 = puVar3 + 0x20;
      _objc_loadWeakRetained(puVar3);
      func_0x00010bde4d40();
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


