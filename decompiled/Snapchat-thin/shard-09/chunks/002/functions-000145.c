/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106abbe40; end: 106abbe97; -[SCShakePromptCoordinator tweakViewControllerPressedDone:] */

void FUN_106abbe40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106abbe98;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf84b00(param_3,param_2,1,&puStack_38);
  return;
}



/* Entry: 106abbe98; end: 106abbe9f;  */

void FUN_106abbe98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__tearDownShakeWindow_112590540);
  return;
}



/* Entry: 106abbea0; end: 106abbea3; -[SCShakePromptCoordinator dialogDidDismiss:] */

void FUN_106abbea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106abbea4; end: 106abbea7; -[SCShakePromptCoordinator actionSheetDidDismiss:] */

void FUN_106abbea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106abbea8; end: 106abbfbb; -[SCShakePromptCoordinator trayDidDismiss:] */

void FUN_106abbea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x138) == '\x01') {
    *(undefined1 *)(param_1 + 0x138) = 0;
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf84b00();
    _objc_release(param_1);
  }
  else {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf84b00();
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release(uVar2);
      _objc_storeWeak(param_1 + 0x38,0);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar2);
      *(undefined8 *)(param_1 + 0x50) = 0;
      func_0x00010be0c1e0(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106abbfbc; end: 106abc023;  */

void FUN_106abbfbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x38,0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106abc024; end: 106abc027; -[SCShakePromptCoordinator tray:positionDidChange:] */

void FUN_106abc024(void)

{
  return;
}



/* Entry: 106abc028; end: 106abc10b; -[SCShakePromptCoordinator shakePromptDidSelectWithResult:] */

void FUN_106abc028(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  if (param_3 == 1) {
    *(undefined8 *)(param_1 + 0x130) = 1;
    *(undefined1 *)(param_1 + 0x138) = 1;
    func_0x00010bf83180(*(undefined8 *)(param_1 + 0x30),param_2,1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106abc10c;
    puStack_68 = &UNK_110844fe0;
    lStack_60 = param_1;
    lStack_50 = param_3;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    uStack_48 = uVar3;
    func_0x00010bf84b00(lVar1,param_2,0,&puStack_80);
    _objc_release(lVar1);
    _objc_release(uStack_58);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 106abc10c; end: 106abc203;  */

void FUN_106abc10c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x38,0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__exitShakePrompt_112560a18);
    return;
  }
  func_0x00010be57f80(*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126d0260;
  _objc_alloc(PTR_PTR_1126d0260);
  func_0x00010beb2c20();
  func_0x00010c0620e0(puVar2);
  func_0x00010be48940(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106abc204; end: 106abc207; -[SCShakePromptCoordinator shakePromptDidDismiss] */

void FUN_106abc204(void)

{
  return;
}



/* Entry: 106abc208; end: 106abc28f; -[SCShakePromptCoordinator _logS2RButtonTap:] */

void FUN_106abc208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0168;
  _objc_retain(param_3);
  func_0x00010c142f80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0xc0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106abc290; end: 106abc343; -[SCShakePromptCoordinator _logShakeReportCancelWithSource:] */

void FUN_106abc290(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d0170;
    _objc_alloc_init(PTR_PTR_1126d0170);
    func_0x00010c1af5a0();
    func_0x00010c226d00(puVar2,param_2,1);
    puVar3 = PTR_PTR_1126d02b0;
    _objc_alloc_init(PTR_PTR_1126d02b0);
    func_0x00010c1fe880();
    func_0x00010c1fe900(puVar3,param_2,puVar2);
    func_0x00010c0b2800(lVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106abc344; end: 106abc44f; -[SCShakePromptCoordinator _logShakeReportCreateWithFeature:withVideo:shakeId:] */

void FUN_106abc344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  param_1 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d0170;
    _objc_alloc_init(PTR_PTR_1126d0170);
    func_0x00010c1fe8e0();
    func_0x00010c1af5a0(puVar2,param_2,0);
    func_0x00010c226d00(puVar2,param_2,1);
    puVar3 = PTR_PTR_1126d02b8;
    _objc_alloc_init(PTR_PTR_1126d02b8);
    func_0x00010c1a0ee0();
    func_0x00010c1fe900(puVar3,param_2,puVar2);
    func_0x00010c227160(puVar3,param_2,param_4);
    func_0x00010c0b2800(lVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106abc450; end: 106abc4cb; -[SCShakePromptCoordinator _logShakePromptClickWithCell:] */

void FUN_106abc450(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d02c0;
    _objc_alloc_init(PTR_PTR_1126d02c0);
    func_0x00010c1fe920();
    func_0x00010c0b2800(lVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106abc4cc; end: 106abc55b; -[SCShakePromptCoordinator didDismissInternalShakeMenuWithoutOptionWithViewController:] */

void FUN_106abc4cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010be587c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106abc55c; end: 106abc603; -[SCShakePromptCoordinator _showSpeedTestSelectionAlert] */

void FUN_106abc55c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d02c8;
    _objc_alloc_init(PTR_PTR_1126d02c8);
    puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    func_0x00010c0402e0();
    func_0x00010c1c8b80();
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106abc604; end: 106abc697; -[SCShakePromptCoordinator shakeReportValdiDidDismiss] */

void FUN_106abc604(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be587c0(param_1,param_2,1);
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  func_0x00010bddfbc0(param_1);
  func_0x00010bddfbe0(param_1);
  func_0x00010bddf5a0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x198,0);
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106abc698; end: 106abc74b; -[SCShakePromptCoordinator shakeReportValdiDidRequestGoBack] */

void FUN_106abc698(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  func_0x00010bddfbc0();
  func_0x00010bddfbe0(param_1);
  func_0x00010bddf5a0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x198;
  _objc_loadWeakRetained();
  _objc_release();
  _objc_storeWeak(param_1 + 0x198,0);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitShakePrompt_112560a18);
    return;
  }
  return;
}



/* Entry: 106abc74c; end: 106abc7b7; -[SCShakePromptCoordinator shakeReportValdiDidTapRecordVideo] */

void FUN_106abc74c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  puVar1 = PTR_PTR_1126d02d0;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  *(undefined **)(param_1 + 0x150) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x150));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x150));
  func_0x00010c1fea00(*(undefined8 *)(param_1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x150),PTR_s_show_11266b038);
  return;
}



/* Entry: 106abc7b8; end: 106abc873; -[SCShakePromptCoordinator shakeReportValdiDidTapAddVideoFromRoll] */

void FUN_106abc7b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + 0x158) = 1;
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878;
  _objc_alloc_init(PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878);
  func_0x00010c1fb9a0();
  puVar2 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
  func_0x00010c29bee0(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bd60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1dfe20(puVar1,param_2,2);
  puVar2 = PTR__OBJC_CLASS___PHPickerViewController_1126bd888;
  _objc_alloc(PTR__OBJC_CLASS___PHPickerViewController_1126bd888);
  func_0x00010c001640();
  func_0x00010c18b5e0();
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar2,1,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106abc874; end: 106abc8ab; -[SCShakePromptCoordinator shakeReportValdiDidTapRemoveVideo] */

void FUN_106abc874(long param_1)

{
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  func_0x00010bddfbe0();
                    /* WARNING: Could not recover jumptable at 0x00010c28beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_updateVideoThumbnailWithPath__1126809d0,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106abc8ac; end: 106abc99b; -[SCShakePromptCoordinator screenRecordingMenuWindow:didFinishRecordingVideoAtPath:thumbnailImage:] */

void FUN_106abc8ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bddfbe0(param_1);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_4;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106abc99c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_5;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  func_0x00010be85fc0(param_1,param_2,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 106abc99c; end: 106abc9b3;  */

void FUN_106abc99c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__updateValdiVideoThumbnailWithIm_112596620);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__generateVideoThumbnail__112564ac0,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106abc9b4; end: 106abc9e3; -[SCShakePromptCoordinator screenRecordingMenuWindowDidCancelCapture:] */

void FUN_106abc9b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be85fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rePresentValdiReportVCWithCompl_11257f190,0)
  ;
  return;
}



/* Entry: 106abc9e4; end: 106abcaeb; -[SCShakePromptCoordinator _rePresentValdiReportVCWithCompletion:] */

void FUN_106abc9e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 400),param_2,0);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0xf8);
  }
  _objc_retain(lVar3);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010be7f9a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10eda0();
      _objc_release(param_1);
      goto LAB_106abcacc;
    }
  }
  else {
    _objc_release();
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_106abcacc:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106abcaec; end: 106abcc8f; -[SCShakePromptCoordinator _updateValdiVideoThumbnailWithImage:] */

void FUN_106abcaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_3;
  _objc_retain();
  if (*(long *)(param_1 + 0x148) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    _objc_release();
  }
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e6b0b8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25ce00(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar5 = param_3;
  _UIImageJPEGRepresentation(0x3fe999999999999a,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e020();
  uVar6 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  _objc_retain(uVar4);
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e6b038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bea0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar1);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106abcc90; end: 106abcd3b; -[SCShakePromptCoordinator _cleanupValdiVideoTempFiles] */

void FUN_106abcc90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x140) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106abcd3c; end: 106abcf63; +[SCShakePromptCoordinator _compressVideoAtPath:toPath:progress:completion:] */

void FUN_106abcd3c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if ((param_3 == 0) || (param_4 == 0)) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    func_0x00010bf9d200();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7200(puVar1);
      _objc_release(puVar3);
      func_0x00010c1d6fc0(puVar1);
      func_0x00010c200aa0(puVar1);
      if (param_5 != 0) {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_106abcf64;
        puStack_68 = &UNK_11084aaa8;
        _objc_retain(puVar1);
        puStack_60 = puVar1;
        _objc_retain(param_5);
        lStack_58 = param_5;
        func_0x000100162d98("APPSTORE",&puStack_80);
        _objc_release(lStack_58);
        _objc_release(puStack_60);
      }
      _objc_retain(param_6);
      _objc_retain(puVar1);
      func_0x00010bf9cee0(puVar1);
      _objc_release(puVar1);
      _objc_release(param_6);
    }
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106abcf64; end: 106abd0b3;  */

void FUN_106abcf64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106abd050;
  puStack_48 = &UNK_1108e4f00;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar4;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010c270920(0x3fd0000000000000,puVar1,param_2,1,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106abd0b4; end: 106abd0e3;  */

void FUN_106abd0b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000106abd0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2 == 3);
  return;
}



/* Entry: 106abd0e4; end: 106abd1ef; -[SCShakePromptCoordinator _showVideoTooLargeAlert] */

void FUN_106abd0e4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6b0d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e6b0d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e6b0f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e6b0f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6b118;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e6b118,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef340(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106abd1f0; end: 106abd29f; -[SCShakePromptCoordinator _generateVideoThumbnail:] */

void FUN_106abd1f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106abd2a0;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_40 = param_3;
    uStack_38 = param_1;
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(uVar1);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106abd2a0; end: 106abd59f;  */

void FUN_106abd2a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  func_0x00010c1c3cc0(0x4064000000000000,0x405e000000000000,puVar3);
  puVar1 = PTR__kCMTimeZero_110348670;
  if (puVar2 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    func_0x00010bf8b160(&uStack_68,puVar2);
    uStack_80 = *(undefined8 *)puVar1;
    uStack_78 = *(undefined8 *)(puVar1 + 8);
    uStack_70 = *(undefined8 *)(puVar1 + 0x10);
    if ((uStack_60._4_4_ & 0x1d) == 1) {
      uStack_98 = uStack_60;
      uStack_a0 = uStack_68;
      uStack_90 = uStack_58;
      dVar7 = (double)_CMTimeGetSeconds(&uStack_a0);
      if (0.0 < dVar7) {
        uStack_98 = uStack_60;
        uStack_a0 = uStack_68;
        uStack_90 = uStack_58;
        dVar7 = (double)_CMTimeGetSeconds(&uStack_a0);
        _CMTimeMakeWithSeconds(&uStack_80,dVar7 * 0.5,600);
      }
    }
  }
  uStack_a8 = 0;
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_90 = uStack_70;
  puVar4 = puVar3;
  func_0x00010bf51e60();
  uVar5 = uStack_a8;
  _objc_retain(uStack_a8);
  if (puVar4 == (undefined *)0x0) {
    uStack_b0 = uVar5;
    uStack_a0 = *(undefined8 *)puVar1;
    uStack_98 = *(undefined8 *)(puVar1 + 8);
    uStack_90 = *(undefined8 *)(puVar1 + 0x10);
    puVar4 = puVar3;
    func_0x00010bf51e60();
    uVar6 = uStack_b0;
    _objc_retain(uStack_b0);
    _objc_release(uVar5);
    uVar5 = uVar6;
    if (puVar4 == (undefined *)0x0) {
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      uStack_108 = 0x106abd5e0;
      puStack_100 = &UNK_110841f80;
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x20);
      _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
      auVar8 = NEON_ext(auVar8,auVar8,8,1);
      puStack_f0 = auVar8._8_8_;
      uStack_f8 = auVar8._0_8_;
      func_0x000100162d98("APPSTORE",&puStack_118);
      puVar1 = puStack_f0;
      goto LAB_106abd508;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240();
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(puVar4);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106abd5a0;
  puStack_d0 = &UNK_110848ba8;
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x20);
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
  auVar8 = NEON_ext(auVar8,auVar8,8,1);
  uStack_c0 = auVar8._8_8_;
  uStack_c8 = auVar8._0_8_;
  puStack_b8 = puVar1;
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_e8);
  _objc_release(puStack_b8);
  _objc_release(uStack_c0);
  uVar6 = uVar5;
LAB_106abd508:
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106abd5a0; end: 106abd62f;  */

void FUN_106abd5a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140);
  func_0x00010c0720c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateValdiVideoThumbnailWithIm_112596620,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 106abd630; end: 106abdf17; -[SCShakePromptCoordinator shakeReportValdiDidSubmit:] */

void FUN_106abd630(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lStack_118;
  long lStack_b8;
  undefined *puStack_90;
  long lStack_80;
  long lStack_70;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2752a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c2752a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (((-1 < lVar3) && (lVar2 = *(long *)(param_1 + 0x128), lVar2 != 0)) &&
       (func_0x00010bf529e0(), lVar3 < lVar2)) {
      lVar3 = *(long *)(param_1 + 0x128);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        lStack_70 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar2);
        lStack_70 = lVar2;
      }
      lVar1 = param_3;
      func_0x00010c25e8e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar21 = -1;
      }
      else {
        lVar20 = param_3;
        func_0x00010c25e8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar20;
        func_0x00010c067fc0();
        _objc_release(lVar20);
      }
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_80 = 0;
      if ((-1 < lVar21) && (lVar1 != 0)) {
        lVar20 = lVar1;
        func_0x00010bf529e0();
        if (lVar21 < lVar20) {
          lStack_80 = lVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lStack_80 = 0;
        }
      }
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar3);
      goto LAB_106abd70c;
    }
  }
  lStack_80 = 0;
  lStack_70 = 0;
LAB_106abd70c:
  puVar4 = PTR_PTR_1126d0148;
  func_0x00010bfc2dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0420();
  puVar5 = PTR_PTR_1126d0198;
  _objc_alloc();
  lVar2 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar2);
  lVar1 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffea60();
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfdb7a0();
  if ((int)lVar2 == 0) {
    puStack_90 = PTR_PTR_1126d0260;
    _objc_alloc();
    puVar6 = *(undefined **)(param_1 + 0x100);
    func_0x00010c29e280();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c29c360(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0620e0();
    _objc_release(uVar19);
    _objc_release();
  }
  else {
    puStack_90 = *(undefined **)(param_1 + 0x100);
    puVar6 = puStack_90;
    _objc_retain();
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d0230;
  lVar2 = param_1 + 0xf0;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar9);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (*(long *)(param_1 + 0x148) != 0) {
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b6c20;
    puVar8 = puVar4;
    func_0x00010c2bd3c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14aae0(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c087920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c087920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c078980();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(puVar9);
  }
  func_0x00010c246780();
  lVar1 = param_3;
  func_0x00010bf41e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ac60();
  puVar7 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c085480();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar3;
  if (lVar3 == 0) {
    lStack_118 = param_1 + 8;
    _objc_loadWeakRetained();
    lStack_b8 = param_1;
    func_0x00010be1fde0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar21 = param_1 + 0x98;
  _objc_loadWeakRetained();
  lVar14 = lVar21;
  func_0x00010c088860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar16 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bface00(puVar5);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar20);
  _objc_release(uVar19);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar21);
  if (lVar3 == 0) {
    _objc_release(lStack_b8);
    _objc_release(lStack_118);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar1);
  lVar2 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    puVar7 = PTR_PTR_1126d0170;
    _objc_alloc_init(PTR_PTR_1126d0170);
    func_0x00010c1fe8e0();
    func_0x00010c1af5a0(puVar7);
    func_0x00010c226d00(puVar7);
    puVar8 = PTR_PTR_1126d02b8;
    _objc_alloc_init(PTR_PTR_1126d02b8);
    func_0x00010c1a0ee0();
    func_0x00010c1fe900(puVar8);
    func_0x00010c227160(puVar8);
    func_0x00010c0b2800(lVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfc25e0();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    func_0x00010bf85360(PTR_PTR_1126d0238);
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_release(puVar7);
    uVar19 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    _objc_release(uVar19);
  }
  uVar19 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar19);
  _objc_storeWeak(param_1 + 0x198,0);
  func_0x00010be0c1e0(param_1);
  _objc_release(lVar1);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puStack_90);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lStack_80);
  _objc_release(lStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106abdf18; end: 106abdf23;  */

void FUN_106abdf18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 106abdf24; end: 106abdfeb; -[SCShakePromptCoordinator shakeReportValdiDidTapImage] */

void FUN_106abdf24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c151860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d0258;
    _objc_alloc(PTR_PTR_1126d0258);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c151860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010c16b1a0(puVar2,param_2,0);
    func_0x00010c193540(puVar2,param_2,param_1);
    func_0x00010c1c8b80(puVar2,param_2,5);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106abdfec; end: 106abe1c3; -[SCShakePromptCoordinator drawOnAttachmentViewController:didChangeAttachmentImage:index:] */

void FUN_106abdfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d0260;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c29e280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c29c360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0620e0(puVar1,param_2,uVar2,uVar3,param_4);
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar1;
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bddfbc0();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e6b018);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c25ce00(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = param_4;
  _UIImagePNGRepresentation(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14e020(uVar2,param_2,lVar6,1);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  *(long *)(param_1 + 0x118) = lVar6;
  _objc_retain(lVar6);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e6b038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2866c0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar1);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106abe1c4; end: 106abe25f; -[SCShakePromptCoordinator drawOnAttachmentViewControllerDidDeleteImage:index:] */

void FUN_106abe1c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0260;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c29e280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c29c360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0620e0();
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c2866d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_updateImageWithPath__11267f3d8,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106abe260; end: 106abe327; -[SCShakePromptCoordinator shakeReportValdiDidTapReplaceAttachment] */

void FUN_106abe260(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x158) = 0;
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878;
    _objc_alloc_init(PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878);
    func_0x00010c1fb9a0();
    puVar2 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
    func_0x00010bfe9960(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bd60(puVar1);
    _objc_release(puVar2);
    func_0x00010c1dfe20(puVar1);
    puVar2 = PTR__OBJC_CLASS___PHPickerViewController_1126bd888;
    _objc_alloc();
    func_0x00010c001640();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_presentViewController_animated_c_112621588,lVar3,
             1,0);
  return;
}



/* Entry: 106abe328; end: 106abe577; -[SCShakePromptCoordinator picker:didFinishPicking:] */

void FUN_106abe328(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  lVar2 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x158) = 0;
    func_0x00010bf84b00(param_3);
  }
  else {
    if (*(char *)(param_1 + 0x158) == '\x01') {
      *(undefined1 *)(param_1 + 0x158) = 0;
      lVar4 = *(long *)(param_1 + 0x160) + 1;
      *(long *)(param_1 + 0x160) = lVar4;
      func_0x00010bf84b00(param_3);
      func_0x00010c28bea0(*(undefined8 *)(param_1 + 0xf8));
      _objc_initWeak(auStack_48,param_1);
      lVar3 = lVar2;
      func_0x00010c0849c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106abe578;
      puStack_60 = &UNK_11095b420;
      _objc_copyWeak(auStack_58,auStack_48);
      lStack_50 = lVar4;
      func_0x00010c09b500(lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_58);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      lVar4 = lVar2;
      func_0x00010c0849c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_80,auStack_48);
      func_0x00010c09bd40(lVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_destroyWeak(auStack_80);
      _objc_release(param_3);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106abe578; end: 106abe947;  */

void FUN_106abe578(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_106abec3c;
    puStack_128 = &UNK_110846540;
    _objc_copyWeak(auStack_120,param_1 + 0x20);
    uStack_118 = *(undefined8 *)(param_1 + 0x28);
    func_0x000100162d98("APPSTORE",&puStack_140);
    _objc_destroyWeak(auStack_120);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bfad040();
    if (puVar2 < (undefined *)0x12c00001) {
      func_0x0001005c6500();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c0f5800(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52000(puVar5);
      _objc_release(lVar3);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar1 = PTR_PTR_1126d0180;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_106abe98c;
      puStack_b8 = &UNK_11095b3f0;
      _objc_copyWeak(auStack_b0,param_1 + 0x20);
      uStack_a8 = *(undefined8 *)(param_1 + 0x28);
      puStack_110 = puVar5;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_106abeaa4;
      puStack_f8 = &UNK_11085e528;
      _objc_retain(puVar7);
      puStack_f0 = puVar7;
      _objc_retain(puVar8);
      puStack_e8 = puVar8;
      _objc_copyWeak(auStack_e0,param_1 + 0x20);
      uStack_d8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bde4220(puVar1);
      _objc_destroyWeak(auStack_e0);
      _objc_release(puStack_e8);
      _objc_release(puStack_f0);
      _objc_destroyWeak(auStack_b0);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106abe948;
      puStack_88 = &UNK_1108434b0;
      _objc_copyWeak(auStack_80,param_1 + 0x20);
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106abe948; end: 106abe98b;  */

void FUN_106abe948(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c28bea0(*(undefined8 *)(param_1 + 0xf8),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    func_0x00010bebbc20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106abe98c; end: 106abea1b;  */

void FUN_106abe98c(undefined4 param_1,long param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106abea1c;
  puStack_50 = &UNK_11095b3c0;
  _objc_copyWeak(auStack_48,param_2 + 0x20);
  uStack_40 = *(undefined8 *)(param_2 + 0x28);
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106abea1c; end: 106abeaa3;  */

void FUN_106abea1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x160) == *(long *)(param_1 + 0x28))) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b1b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28bea0(*(undefined8 *)(lVar1 + 0xf8),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106abeaa4; end: 106abec3b;  */

void FUN_106abeaa4(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0x28;
  if (param_2 == 0) {
    lVar1 = 0x20;
  }
  func_0x00010c12cc40();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106abeb98;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar3);
  return;
}



/* Entry: 106abec3c; end: 106abec8b;  */

void FUN_106abec3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x160) == *(long *)(param_1 + 0x28))) {
    func_0x00010c28bea0(*(undefined8 *)(lVar1 + 0xf8),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106abec8c; end: 106abedcb;  */

void FUN_106abec8c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106abf050;
    puStack_78 = &UNK_110842e18;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_90);
    uVar1 = uStack_70;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106abedcc;
    puStack_50 = &UNK_110848218;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106abedcc; end: 106abee7b;  */

void FUN_106abedcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf84b00(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106abee7c; end: 106abf04f;  */

void FUN_106abee7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d0260;
    _objc_alloc();
    uVar3 = *(undefined8 *)(lVar1 + 0x100);
    func_0x00010c29e280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x100);
    func_0x00010c29c360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0620e0(puVar2,param_2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
    uVar8 = *(undefined8 *)(lVar1 + 0x100);
    *(undefined **)(lVar1 + 0x100) = puVar2;
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = lVar1;
    func_0x00010bddfbc0();
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b018);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c25ce00(lVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _UIImagePNGRepresentation(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e020();
    uVar4 = *(undefined8 *)(lVar1 + 0x118);
    *(long *)(lVar1 + 0x118) = lVar7;
    _objc_retain(lVar7);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2866c0(*(undefined8 *)(lVar1 + 0xf8),param_2,puVar2);
    _objc_release(lVar7);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106abf050; end: 106abf05f;  */

void FUN_106abf050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106abf060; end: 106abf277; -[SCShakePromptCoordinator imagePickerController:didFinishPickingMediaWithInfo:] */

void FUN_106abf060(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,
                      *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_110345cc0);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126d0260;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c29e280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c29c360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0620e0(puVar1,param_2,uVar2,uVar3,param_4);
    uVar8 = *(undefined8 *)(param_1 + 0x100);
    *(undefined **)(param_1 + 0x100) = puVar1;
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = param_1;
    func_0x00010bddfbc0();
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b018);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c25ce00(lVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar7 = param_4;
    _UIImagePNGRepresentation(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e020();
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(long *)(param_1 + 0x118) = lVar6;
    _objc_retain(lVar6);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2866c0(*(undefined8 *)(param_1 + 0xf8),param_2,puVar1);
    _objc_release(lVar6);
    _objc_release(puVar1);
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  func_0x00010bf84b00(param_3,param_2,1,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106abf278; end: 106abf287; -[SCShakePromptCoordinator imagePickerControllerDidCancel:] */

void FUN_106abf278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106abf288; end: 106abf30b; -[SCShakePromptCoordinator _cleanupValdiScreenshotTempFile] */

void FUN_106abf288(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x118) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_retain(0);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = 0;
    _objc_release(uVar2);
    _objc_release(0);
  }
  return;
}



/* Entry: 106abf30c; end: 106abf33b; -[SCShakePromptCoordinator _cleanupCachedImagePicker] */

void FUN_106abf30c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106abf33c; end: 106abf50f; -[SCShakePromptCoordinator .cxx_destruct] */

void FUN_106abf33c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x198);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106abf510; end: 106abf5cb; +[SCShakeToastProvider displayInternalTicketCreateSuccessToast] */

void FUN_106abf510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc25e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126afca8;
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6b238,puVar2,puVar3)
  ;
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106abf5cc; end: 106abf62b; +[SCShakeToastProvider displayInternalTicketCreateFailToast] */

void FUN_106abf5cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc25e0();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c237530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126afca8,PTR_s_showErrorWithText__11266b770,
             &PTR____CFConstantStringClassReference_110e6b258);
  return;
}



/* Entry: 106abf62c; end: 106abf6c3; +[SCShakeToastProvider displayBetaTicketCreateSuccessToast] */

void FUN_106abf62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  func_0x000106ac122c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2387a0(0x4004000000000000,puVar1,param_2,param_1,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106abf6c4; end: 106abf6db;  */

undefined ** FUN_106abf6c4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106abf6dc; end: 106ac0433; -[SCSpeedTestViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106abf6dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = PTR_PTR_1126f4a28;
  lStack_100 = param_1;
  _objc_msgSendSuper2(&lStack_100,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar28);
  _objc_release(puVar1);
  lVar28 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar28;
  func_0x00010c10f380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  _objc_release(lVar28);
  puVar3 = PTR_PTR_1126af078;
  _objc_alloc();
  uVar29 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
  puVar4 = PTR_PTR_1126af080;
  _objc_alloc_init();
  func_0x00010c216240();
  func_0x00010c20eaa0(puVar4);
  func_0x00010c18f820(puVar4);
  func_0x00010c18b5e0(puVar4);
  lVar28 = param_1;
  func_0x00010c10f380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar28);
  func_0x00010c187440(puVar3);
  lVar28 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar28);
  func_0x00010c219b60(puVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar28;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_a8 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_a0 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar28);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
  func_0x00010c219b60();
  lVar28 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar28);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  puStack_c8 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar28;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  puStack_c0 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar5;
  puStack_b8 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar22);
  _objc_release(puVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar2);
  _objc_release(lVar28);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
  func_0x00010c16e060();
  func_0x00010c207380(0x4038000000000000,puVar7);
  func_0x00010c219b60(puVar7);
  func_0x00010befbb60(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  puStack_f0 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  puStack_e8 = puVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar7;
  puStack_e0 = puVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493c0(0xc048000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar7;
  puStack_d8 = puVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar5;
  func_0x00010bf1ff80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  lVar28 = param_1;
  func_0x00010bdf4ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010bef6d60(puVar7);
  _objc_release(lVar28);
  uVar29 = *(undefined8 *)(param_1 + _DAT_1127575bc);
  *(undefined8 *)(param_1 + _DAT_1127575bc) = 0;
  _objc_retain(0);
  _objc_release(uVar29);
  lVar28 = param_1;
  func_0x00010bdf4ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010bef6d60(puVar7);
  _objc_release(lVar28);
  uVar29 = *(undefined8 *)(param_1 + _DAT_1127575c0);
  *(undefined8 *)(param_1 + _DAT_1127575c0) = 0;
  _objc_retain(0);
  _objc_release(uVar29);
  lVar28 = param_1;
  func_0x00010bdf4ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010bef6d60(puVar7);
  _objc_release(lVar28);
  uVar29 = *(undefined8 *)(param_1 + _DAT_1127575c4);
  *(undefined8 *)(param_1 + _DAT_1127575c4) = 0;
  _objc_retain(0);
  _objc_release(uVar29);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_1127575c8;
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar29);
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar28));
  puVar27 = (undefined8 *)PTR_s__runTests_112532fa0;
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar28));
  func_0x00010bef6d60(puVar7);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar28 = (long)_DAT_1127575cc;
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar29);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar28));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar7);
  puVar1 = PTR__OBJC_CLASS___UIProgressView_1126c14e0;
  _objc_alloc();
  func_0x00010c03b440();
  lVar28 = (long)_DAT_1127575d0;
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219180(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar7);
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_alloc_init();
  lVar28 = (long)_DAT_1127575d4;
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar29);
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar28));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar29);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c2131e0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,
                      *(undefined8 *)(param_1 + lVar28));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0d0e20(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightRegular_110345c40,
                      PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar1);
  func_0x00010bef6d60(puVar7);
  uVar30 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  uVar29 = uVar30;
  func_0x00010bf49420(0x4072c00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = 1;
  func_0x00010c162480();
  _objc_release(uVar29);
  _objc_release(uVar30);
  _objc_release(0);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_retain(uVar31);
  _objc_alloc_init(puVar1);
  func_0x00010c16e060();
  func_0x00010c190b80(puVar1);
  func_0x00010c166c00(puVar1);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c212f20();
  _objc_release(uVar31);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(puVar4);
  _objc_release(puVar5);
  _objc_retainAutorelease(puVar4);
  *puVar27 = puVar4;
  func_0x00010bef6d60(puVar1);
  func_0x00010bef6d60(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ac0434; end: 106ac0593; -[SCSpeedTestViewController _createToggleRow:switchControl:] */

void FUN_106ac0434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c16e060();
  func_0x00010c190b80(puVar1,param_2,3);
  func_0x00010c166c00(puVar1,param_2,3);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c212f20();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_retainAutorelease(puVar3);
  *param_4 = puVar3;
  func_0x00010bef6d60(puVar1,param_2,puVar2);
  func_0x00010bef6d60(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ac0594; end: 106ac07f7; -[SCSpeedTestViewController _runTests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0594(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = (long)_DAT_1127575d8;
  if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127575bc);
    func_0x00010c079040();
    if (iVar2 != 0) {
      func_0x00010befa120(puVar3);
    }
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127575c0);
    func_0x00010c079040();
    if (iVar2 != 0) {
      func_0x00010befa120(puVar3);
    }
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127575c4);
    func_0x00010c079040();
    if (iVar2 != 0) {
      func_0x00010befa120(puVar3);
    }
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127575cc));
    }
    else {
      *(undefined1 *)(param_1 + lVar5) = 1;
      func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127575c8));
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127575d4));
      func_0x00010c1e4680(0,*(undefined8 *)(param_1 + _DAT_1127575d0));
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127575cc));
      _objc_initWeak(auStack_58,param_1);
      puVar1 = PTR_PTR_1126d02d8;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106ac07f8;
      puStack_68 = &UNK_11095b470;
      _objc_copyWeak(auStack_60,auStack_58);
      puStack_a8 = puVar4;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106ac0938;
      puStack_90 = &UNK_110843540;
      _objc_copyWeak(auStack_88,auStack_58);
      _objc_copyWeak(auStack_b0,auStack_58);
      func_0x00010c142a60(puVar1);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106ac07f8; end: 106ac08d7;  */

void FUN_106ac07f8(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_2 + 0x20);
  uStack_48 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 106ac08d8; end: 106ac0937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac08d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e4680(*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(lVar1 + _DAT_1127575d0));
    func_0x00010c212f20(*(undefined8 *)(lVar1 + _DAT_1127575cc),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ac0938; end: 106ac0a07;  */

void FUN_106ac0938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106ac0a08; end: 106ac0aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0a08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_1127575d4;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cde0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be9bf60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ac0aa8; end: 106ac0b4f;  */

void FUN_106ac0aa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ac0b50; end: 106ac0bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0b50(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127575d8) = 0;
    func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127575c8),param_2,1);
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127575cc),param_2,
                        &PTR____CFConstantStringClassReference_110e6b398);
    func_0x00010c1e4680(0x3f800000,*(undefined8 *)(param_1 + _DAT_1127575d0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ac0bc0; end: 106ac0c53; -[SCSpeedTestViewController _scrollToBottom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0bc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127575d4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c26b700(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1521b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar3),PTR_s_scrollRangeToVisible__112632288,lVar2 + -1,1);
    return;
  }
  return;
}



/* Entry: 106ac0c54; end: 106ac0c9b; -[SCSpeedTestViewController _dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0c54(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127575d8) == '\x01') {
    func_0x00010bf2dc20(PTR_PTR_1126d02d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106ac0c9c; end: 106ac0c9f; -[SCSpeedTestViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_106ac0c9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptDismissal_112551c88);
  return;
}



/* Entry: 106ac0ca0; end: 106ac0cb7; -[SCSpeedTestViewController presentationControllerShouldDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106ac0ca0(long param_1)

{
  return (*(byte *)(param_1 + _DAT_1127575d8) ^ 0xff) & 1;
}



/* Entry: 106ac0cb8; end: 106ac0cbb; -[SCSpeedTestViewController presentationControllerDidAttemptToDismiss:] */

void FUN_106ac0cb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptDismissal_112551c88);
  return;
}



/* Entry: 106ac0cbc; end: 106ac0e57; -[SCSpeedTestViewController _attemptDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0cbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + _DAT_1127575d8) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    func_0x00010beff3e0(PTR__OBJC_CLASS___UIAlertController_1126aeb78,param_2,
                        &PTR____CFConstantStringClassReference_110e6b3b8,
                        &PTR____CFConstantStringClassReference_110e6b3d8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    func_0x00010beef340(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010beef340(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6960(puVar1);
    func_0x00010bef6960(puVar1);
    func_0x00010c10eda0(param_1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
    _objc_release(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 106ac0e58; end: 106ac0e83;  */

void FUN_106ac0e58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ac0e84; end: 106ac0f13; -[SCSpeedTestViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ac0e84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127575cc,0);
  _objc_storeStrong(param_1 + _DAT_1127575d0,0);
  _objc_storeStrong(param_1 + _DAT_1127575d4,0);
  _objc_storeStrong(param_1 + _DAT_1127575c8,0);
  _objc_storeStrong(param_1 + _DAT_1127575c4,0);
  _objc_storeStrong(param_1 + _DAT_1127575c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127575bc,0);
  return;
}



/* Entry: 106ac0f14; end: 106ac1dfb;  */

void FUN_106ac0f14(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6b438;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e6b438,
                      &PTR____CFConstantStringClassReference_110e6b458,0);
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



/* Entry: 106ac1dfc; end: 106ac1e77;  */

void FUN_106ac1dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126d02e0;
  _objc_opt_class(PTR_PTR_1126d02e0);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6c778,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ac1e78; end: 106ac1ea3; +[SCGrapheneS2rMetric s2rPromptDisplayed] */

void FUN_106ac1e78(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1ea4; end: 106ac1ecf; +[SCGrapheneS2rMetric s2rPromptAttempt] */

void FUN_106ac1ea4(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1ed0; end: 106ac1efb; +[SCGrapheneS2rMetric s2rLoguploadStatus] */

void FUN_106ac1ed0(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1efc; end: 106ac1f27; +[SCGrapheneS2rMetric s2rMetadataUpload] */

void FUN_106ac1efc(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1f28; end: 106ac1f53; +[SCGrapheneS2rMetric s2rUploadLatency] */

void FUN_106ac1f28(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1f54; end: 106ac1f7f; +[SCGrapheneS2rMetric s2rMetadataLatency] */

void FUN_106ac1f54(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1f80; end: 106ac1fab; +[SCGrapheneS2rMetric s2rButtonTap] */

void FUN_106ac1f80(void)

{
  _objc_alloc(PTR_PTR_1126d0168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ac1fac; end: 106ac204b; -[SCGrapheneS2rMetric description] */

void FUN_106ac1fac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6c798;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e6c798,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f4a30;
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



/* Entry: 106ac204c; end: 106ac20f7; -[SCInternalShakeMenuSection initWithTitle:options:] */

undefined1 *
FUN_106ac204c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ac20f8; end: 106ac211b; -[SCInternalShakeMenuSection copyWithZone:] */

undefined8 FUN_106ac20f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ac211c; end: 106ac2123; -[SCInternalShakeMenuSection title] */

undefined8 FUN_106ac211c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ac2124; end: 106ac212b; -[SCInternalShakeMenuSection options] */

undefined8 FUN_106ac2124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ac212c; end: 106ac215b; -[SCInternalShakeMenuSection .cxx_destruct] */

void FUN_106ac212c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ac215c; end: 106ac21d3;  */

void FUN_106ac215c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b570,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac21d4; end: 106ac224b;  */

void FUN_106ac21d4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b5c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac224c; end: 106ac247b;  */

void FUN_106ac224c(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11095b610;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095b610,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_106ac247c;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_11095b6b0,&uStack_e0,puVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 106ac247c; end: 106ac24f3;  */

void FUN_106ac247c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b6b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac24f4; end: 106ac256b;  */

void FUN_106ac24f4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b700,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac256c; end: 106ac279b;  */

void FUN_106ac256c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  lVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11095b7a0;
    unaff_x23 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095b7a0,puVar7,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar4 = auStack_78;
    lVar12 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106ac279c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar8 = puVar7;
  lVar10 = lVar12;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = (undefined8 *)&UNK_11095b7f0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095b7f0,puVar8,lVar12);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar11 = 0;
    puVar4 = auStack_118;
    lVar10 = lVar12;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_106ac29cc;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar2;
  puStack_160 = puVar7;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  if (puVar5 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar5[1];
    puVar3 = (undefined8 *)&UNK_11095b890;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = (long *)puVar5[1];
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      unaff_x24 = auStack_1b8;
      func_0x00010002b838(auStack_1b8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1a0,puVar1);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      puVar3 = (undefined8 *)&UNK_11095b890;
      unaff_x23 = &uStack_1d8;
      puVar9 = &uStack_1d8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095b890,puVar9,lVar10 * 10);
      puStack_1c0 = unaff_x23;
      func_0x00010007e5dc(&puStack_1c0);
      lVar12 = 0;
      puVar5 = auStack_1b8;
      do {
        if ((&cStack_189)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
  }
  _objc_release(puVar8);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106ac2c20;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar5;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar3);
  if (puVar4 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar4[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_240,puVar1);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar7 = (undefined8 *)&UNK_11095b930;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095b930,&uStack_260,puVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  puStack_288 = (undefined1 *)&uStack_2a0;
  pcStack_268 = FUN_106ac2d94;
  if (puVar4 != (undefined8 *)0x0) {
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    puStack_280 = puVar1;
    puStack_278 = puVar3;
    pppuStack_270 = &pppuStack_1f0;
    (**(code **)(*(long *)puVar4[1] + 0x18))((long *)puVar4[1],&UNK_11095b980,&uStack_2a0,puVar7);
    func_0x00010007e5dc(&puStack_288);
  }
  return;
}



/* Entry: 106ac279c; end: 106ac29cb;  */

void FUN_106ac279c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  lVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11095b7f0;
    unaff_x23 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095b7f0,puVar6,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar4 = auStack_78;
    lVar10 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106ac29cc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  if (puVar3 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar3[1];
    puVar7 = (undefined8 *)&UNK_11095b890;
    (**(code **)(*plVar11 + 0x28))();
    if ((int)plVar11 != 0) {
      plVar11 = (long *)puVar3[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      unaff_x24 = auStack_118;
      func_0x00010002b838(auStack_118,puVar4);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar4 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_100,puVar4);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      puVar7 = (undefined8 *)&UNK_11095b890;
      unaff_x23 = &uStack_138;
      puVar8 = &uStack_138;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095b890,puVar8,lVar10 * 10);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar10 = 0;
      puVar3 = auStack_118;
      do {
        if ((&cStack_e9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
  }
  _objc_release(puVar6);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_106ac2c20;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar3;
  puStack_168 = puVar4;
  puStack_160 = puVar6;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  if (puVar5 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar5[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar2 = (undefined8 *)&UNK_11095b930;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095b930,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puStack_1e8 = (undefined1 *)&uStack_200;
  pcStack_1c8 = FUN_106ac2d94;
  if (puVar6 != (undefined8 *)0x0) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar1;
    puStack_1d8 = puVar7;
    pppuStack_1d0 = &ppuStack_150;
    (**(code **)(*(long *)puVar6[1] + 0x18))((long *)puVar6[1],&UNK_11095b980,&uStack_200,puVar2);
    func_0x00010007e5dc(&puStack_1e8);
  }
  return;
}



/* Entry: 106ac29cc; end: 106ac2c1f;  */

void FUN_106ac29cc(undefined8 *param_1,undefined *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = &UNK_11095b890;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar3 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_11095b890;
      unaff_x23 = &uStack_98;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095b890,puVar3,param_4 * 10);
      puStack_80 = unaff_x23;
      func_0x00010007e5dc(&puStack_80);
      lVar7 = 0;
      param_1 = auStack_78;
      do {
        if ((&cStack_49)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_106ac2c20;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar4;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3adf9b;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_11095b930;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095b930,&uStack_120,puVar3);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_106ac2d94;
  if (puVar5 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar4;
    puStack_138 = puVar2;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_11095b980,&uStack_160,puVar6);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}


